// Fill out your copyright notice in the Description page of Project Settings.

#include "playground.h"
#include "MyGuideActor.h"


void AMyGuideActor::BeginPlay()
{
	Super::BeginPlay();
	FScriptDelegate Delegate;
	Delegate.BindUFunction(this, "HitHandler");
	// this->OnActorBeginOverlap.AddDynamic(this, &AMyGuideActor::HitHandler);
	// this->OnActorHit.Add(Delegate);
	this->OnActorBeginOverlap.Add(Delegate);
	// this->bGenerateOverlapEvents = true;

	this->GetRootPrimitiveComponent()->bGenerateOverlapEvents = true;
}

void AMyGuideActor::HitHandler(AActor* Self, AActor* Other, FVector Impulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit an object."));
	// GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Green, "OnHit() called");

}

void AMyGuideActor::NotifyActorBeginOverlap(class AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit an object."));
}