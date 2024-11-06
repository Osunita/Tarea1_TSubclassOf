// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPlusPLusProjectGameMode.h"
#include "CPlusPLusProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPlusPLusProjectGameMode::ACPlusPLusProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
