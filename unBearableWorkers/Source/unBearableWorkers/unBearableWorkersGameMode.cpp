// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "unBearableWorkersGameMode.h"
#include "unBearableWorkersCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Engine/GameViewportClient.h"

AunBearableWorkersGameMode::AunBearableWorkersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Called when the game starts or when spawned
void AunBearableWorkersGameMode::BeginPlay()
{
	Super::BeginPlay();

	//GetWorld()->GetGameViewport()->MaxSplitscreenPlayers = maxScreens;
	//GetWorld()->GetGameViewport()->SplitscreenInfo = ;
	//->GetGameViewport().UpdateActiveSplitscreenType();
//GetWorld()->GetGameViewportClient().MaxSplitscreenPlayers = 4;
	//GetWorld()->GetGameViewport()->UpdateActiveSplitscreenType();

	//Context->GetWorld()->GetGameViewport().MaxSplitscreenPlayers = 4;

}




