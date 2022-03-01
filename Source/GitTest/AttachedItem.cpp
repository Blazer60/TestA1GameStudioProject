// Fill out your copyright notice in the Description page of Project Settings.


#include "AttachedItem.h"

// Sets default values for this component's properties
UAttachedItem::UAttachedItem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAttachedItem::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "This is a custom component");
	std::cout << "This is a custom component";
	// ..
}


// Called every frame
void UAttachedItem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

