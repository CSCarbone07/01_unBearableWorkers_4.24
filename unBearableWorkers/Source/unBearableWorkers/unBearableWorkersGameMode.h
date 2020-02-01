// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "unBearableWorkersGameMode.generated.h"

UCLASS(minimalapi)
class AunBearableWorkersGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AunBearableWorkersGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay", meta = (AllowPrivateAccess = "true"))
		int maxScreens = 2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};



