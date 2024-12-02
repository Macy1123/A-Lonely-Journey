// Copyright Epic Games, Inc. All Rights Reserved.

#include "A_Lonely_JourneyGameMode.h"
#include "A_Lonely_JourneyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AA_Lonely_JourneyGameMode::AA_Lonely_JourneyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
