// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "playgroundHUD.generated.h"

UCLASS()
class AplaygroundHUD : public AHUD
{
	GENERATED_BODY()

public:
	AplaygroundHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

