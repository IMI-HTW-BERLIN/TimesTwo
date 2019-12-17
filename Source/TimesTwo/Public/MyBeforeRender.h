// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyBeforeRender.generated.h"


UCLASS( ClassGroup=(Custom), Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class TIMESTWO_API UMyBeforeRender : public UActorComponent
{
	GENERATED_BODY()


public:
    UFUNCTION(BlueprintImplementableEvent, Category = "Custom Events")
    void BeforeRender();
	// Sets default values for this component's properties
	UMyBeforeRender();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
