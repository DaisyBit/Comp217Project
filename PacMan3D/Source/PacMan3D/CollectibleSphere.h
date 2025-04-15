// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectibleSphere.generated.h"

UCLASS()
class PACMAN3D_API ACollectibleSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	ACollectibleSphere();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
