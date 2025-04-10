// Copyright Epic Games, Inc. All Rights Reserved.

#include "PacMan3DGameMode.h"
#include "PacMan3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

APacMan3DGameMode::APacMan3DGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
