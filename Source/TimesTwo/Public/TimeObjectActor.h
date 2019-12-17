// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeObjectActor.generated.h"

UCLASS()
class TIMESTWO_API ATimeObjectActor : public AActor
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintImplementableEvent, Category = "Custom Events")
    void BeforeRender();
	// Sets default values for this actor's properties
	ATimeObjectActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
