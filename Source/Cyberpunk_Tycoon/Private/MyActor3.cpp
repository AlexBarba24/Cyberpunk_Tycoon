// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor3.h"

// Sets default values
AMyActor3::AMyActor3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

