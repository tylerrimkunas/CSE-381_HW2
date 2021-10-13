// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPBasketBallGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPBASKETBALL_API AFPBasketBallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		virtual void StartPlay() override;
};
