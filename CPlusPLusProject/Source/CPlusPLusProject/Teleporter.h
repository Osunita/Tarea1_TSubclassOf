// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "Teleporter.generated.h"


class UBoxComponent;
class UParticleSystemComponent;
class USoundBase;

UCLASS()
class CPLUSPLUSPROJECT_API ATeleporter : public AActor
{
	 GENERATED_BODY()

public:
    ATeleporter();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Tipo de actor que puede usar el teletransportador
    UPROPERTY(EditAnywhere, Category="Teleporter Settings")
    TSubclassOf<AActor> TeleportableActorClass;

    // Referencia al teletransportador destino
    UPROPERTY(EditAnywhere, Category="Teleporter Settings")
    ATeleporter* DestinationTeleporter;

    // Componente para detectar colisiones
    UPROPERTY(VisibleAnywhere, Category="Components")
    UBoxComponent* TeleportBox;

    // Función para activar el efecto de partículas
    UPROPERTY(VisibleAnywhere, Category="Effects")
    UNiagaraComponent* TeleportEffect;

    // Sonido para el efecto de teletransporte
    UPROPERTY(EditAnywhere, Category="Effects")
    USoundBase* TeleportSound;

    // Función que se llamará cuando un actor entre en el teletransportador
    UFUNCTION()
    void OnTeleportOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
                                bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnTeleportOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                              UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    // Función para desactivar el efecto de partículas después de un tiempo
    UFUNCTION()
    void DeactivateTeleportEffect();

    // Teletransportadores apuntándose mutuamente
    void LinkTeleporters();

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
    FTimerHandle TeleportEffectTimerHandle;

    // Variable para evitar bucles de teletransporte
    bool bIsTeleporting = true;
};
