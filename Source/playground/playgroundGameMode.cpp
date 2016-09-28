// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "playground.h"
#include "playgroundGameMode.h"
#include "playgroundHUD.h"
#include "playgroundCharacter.h"

AplaygroundGameMode::AplaygroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AplaygroundHUD::StaticClass();
}
