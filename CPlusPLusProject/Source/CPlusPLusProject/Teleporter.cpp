// Fill out your copyright notice in the Description page of Project Settings.


#include "Teleporter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "TimerManager.h"


// Sets default values
ATeleporter::ATeleporter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Caja de colisión
	TeleportBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleportBox"));
	RootComponent = TeleportBox;
	TeleportBox->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));
	TeleportBox->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter::OnTeleportOverlapBegin);
	TeleportBox->OnComponentEndOverlap.AddDynamic(this, &ATeleporter::OnTeleportOverlapEnd);

	// Configuración del efecto de partículas
	TeleportEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TeleportEffect"));
	TeleportEffect->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void ATeleporter::BeginPlay()
{
	Super::BeginPlay();

	LinkTeleporters();
	
}

// Called every frame
void ATeleporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATeleporter::OnTeleportOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
										int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // Comprobamos si el actor puede teletransportarse, si no está en proceso de teletransporte,
    // y si no es el teletransportador de destino
    if (OtherActor && OtherActor->IsA(TeleportableActorClass) && !bIsTeleporting)
    {
        bIsTeleporting = true; // Marcamos que el teletransportador actual está en proceso de teletransporte
    	DestinationTeleporter->bIsTeleporting = true;

        // Desactivamos la colisión de ambos teletransportadores para evitar que el actor entre en el teletransportador de destino
        TeleportBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        if (DestinationTeleporter)
        {
            DestinationTeleporter->TeleportBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }

        if (DestinationTeleporter)
        {
            // Reproduce el efecto de sonido y partículas
            if (TeleportSound)
                UGameplayStatics::PlaySoundAtLocation(this, TeleportSound, GetActorLocation());

            if (TeleportEffect)
            {
                TeleportEffect->Activate(true); // Activa el sistema de partículas de Niagara
                GetWorld()->GetTimerManager().SetTimer(TeleportEffectTimerHandle, this, &ATeleporter::DeactivateTeleportEffect, 2.0f, false);
            }

            // Teletransporta al actor al destino
            if (APlayerController* PlayerController = Cast<APlayerController>(OtherActor->GetInstigatorController()))
            {
                // Fade-out rápido para ocultar la transición
                PlayerController->PlayerCameraManager->StartCameraFade(0.0f, 1.0f, 1.25f, FLinearColor::Black, false, true);

                // Usamos un temporizador para esperar hasta que termine el fade-out antes de mover al jugador
                FTimerHandle TeleportTimerHandle;
                GetWorld()->GetTimerManager().SetTimer(TeleportTimerHandle, [this, OtherActor, PlayerController]()
                {
                    // Teletransporta al jugador al destino
                    OtherActor->SetActorLocation(DestinationTeleporter->GetActorLocation());

                    // Inicia el fade-in después del teletransporte
                    PlayerController->PlayerCameraManager->StartCameraFade(1.0f, 0.0f, 1.25f, FLinearColor::Black, false, true);

                    // Restaurar la colisión después del teletransporte
                    TeleportBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
                    if (DestinationTeleporter)
                    {
                        DestinationTeleporter->TeleportBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
                    }

                }, 1.25f, false);  // Tiempo de espera de 0.2 segundos antes del teletransporte y el fade-in
            }
        }
    }
}

// Función llamada cuando un actor sale del área de overlap del teletransportador
void ATeleporter::OnTeleportOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
									   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Solo restablecer si el actor que sale es el mismo que el que se teletransportó
	if (OtherActor && OtherActor->IsA(TeleportableActorClass) && bIsTeleporting)
	{
		bIsTeleporting = false;
	}
}

void ATeleporter::DeactivateTeleportEffect()
{
	if (TeleportEffect)
	{
		TeleportEffect->Deactivate();
	}
}


void ATeleporter::LinkTeleporters()
{
	if (DestinationTeleporter)
	{
		UE_LOG(LogTemp, Warning, TEXT("DestinationTeleporter is set: %s"), *DestinationTeleporter->GetName());

		if (DestinationTeleporter->DestinationTeleporter != this)
		{
			DestinationTeleporter->DestinationTeleporter = this;
			UE_LOG(LogTemp, Warning, TEXT("Teleporter linked to: %s"), *DestinationTeleporter->GetName());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DestinationTeleporter is nullptr"));
	}
}

#if WITH_EDITOR
void ATeleporter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (PropertyName == GET_MEMBER_NAME_CHECKED(ATeleporter, DestinationTeleporter))
	{
		UE_LOG(LogTemp, Warning, TEXT("DestinationTeleporter has been changed in the editor"));
		LinkTeleporters();
	}
}
#endif
