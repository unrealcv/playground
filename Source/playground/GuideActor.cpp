// Fill out your copyright notice in the Description page of Project Settings.

#include "playground.h"
#include "GuideActor.h"
#include "UE4CVServer.h"
#include "Engine.h"

// Sets default values
AGuideActor::AGuideActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGuideActor::BeginPlay()
{
	Super::BeginPlay();
	
	FScriptDelegate Delegate;
	Delegate.BindUFunction(this, "HitHandler");
	// this->OnActorBeginOverlap.Add(Delegate);	
	// UPrimitiveComponent *Component = this->GetRootPrimitiveComponent()->bGenerateOverlapEvents = true;
}

// Called every frame
void AGuideActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

// Two ways for implementing this
void AGuideActor::HitHandler(AActor* Self, AActor* Other, FVector Impulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit an object."));
	// GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Green, "OnHit() called");
}

void AGuideActor::NotifyActorBeginOverlap(class AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit an object."));
	FUE4CVServer::Get().SendClientMessage(TEXT("Hit an object"));
	GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Green, "Hit an object");
}

