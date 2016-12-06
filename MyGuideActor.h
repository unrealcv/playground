// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DocumentationActor.h"
#include "MyGuideActor.generated.h"

/**
 * 
 */
UCLASS()
class PLAYGROUND_API AMyGuideActor : public ADocumentationActor
{
	GENERATED_BODY()

	void BeginPlay() override;
	
	UFUNCTION()
	void HitHandler(AActor* Self, AActor* Other, FVector Impulse, const FHitResult& Hit);
	void NotifyActorBeginOverlap(class AActor* OtherActor);
};
