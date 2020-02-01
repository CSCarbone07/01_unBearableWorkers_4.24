// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldHandler_CPP.h"
#include "Engine/World.h"
#include "Engine/GameViewportClient.h"

// Sets default values
AWorldHandler_CPP::AWorldHandler_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldHandler_CPP::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AWorldHandler_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AWorldHandler_CPP::updateScreensGrid(bool twoScreens = true)
{

	TArray<FPerPlayerSplitscreenData> newFourPlayerGrid;
	if (twoScreens)
	{
		newFourPlayerGrid.Add(FPerPlayerSplitscreenData(1.0f, 0.5f, 0.0f, 0.0f));
		newFourPlayerGrid.Add(FPerPlayerSplitscreenData(1.0f, 0.5f, 0.0f, 0.5f));
	}
	else
	{
		newFourPlayerGrid.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.0f, 0.0f));
		newFourPlayerGrid.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.5f, 0.0f));
		newFourPlayerGrid.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.0f, 0.5f));
		newFourPlayerGrid.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.5f, 0.5f));
	}

	GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer_Grid].PlayerData = newFourPlayerGrid;


	//GetWorld()->GetGameViewport()->MaxSplitscreenPlayers = maxScreens;

//GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer_Grid].PlayerData.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.0f, 0.5f)); //Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.0f, 0.0f));
//GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer_Grid].PlayerData.Remove(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.5f, 0.5f));


//GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer_Grid].PlayerData.Add(FPerPlayerSplitscreenData(1.0f, 0.5f, 0.0f, 0.0f));
//GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer_Grid].PlayerData.Add(FPerPlayerSplitscreenData(0.0f, 0.0f, 0.5f, 0.0f));
//GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer_Grid].PlayerData.Add(FPerPlayerSplitscreenData(1.0f, 0.0f, 0.0f, 0.5f));
//GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer_Grid].PlayerData.Add(FPerPlayerSplitscreenData(0.0f, 0.0f, 0.5f, 0.5f));
/*
GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer].PlayerData.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.5f, 0.0f));
GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer].PlayerData.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.0f, 0.5f));
GetWorld()->GetGameViewport()->SplitscreenInfo[ESplitScreenType::FourPlayer].PlayerData.Add(FPerPlayerSplitscreenData(0.5f, 0.5f, 0.5f, 0.5f));
*/
//->GetGameViewport().UpdateActiveSplitscreenType();
//GetWorld()->GetGameViewportClient().MaxSplitscreenPlayers = 4;
//GetWorld()->GetGameViewport()->UpdateActiveSplitscreenType();

}

