// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GuideActor.generated.h"

UCLASS()
class PLAYGROUND_API AGuideActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGuideActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION()
	void HitHandler(AActor* Self, AActor* Other, FVector Impulse, const FHitResult& Hit);
	void NotifyActorBeginOverlap(class AActor* OtherActor);
	
};
