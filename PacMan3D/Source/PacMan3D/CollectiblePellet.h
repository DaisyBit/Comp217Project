// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectiblePellet.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class USoundBase;

UCLASS(Blueprintable)
class PACMAN3D_API ACollectiblePellet : public AActor
{
	GENERATED_BODY()

    public:
        ACollectiblePellet();

    protected:
        virtual void BeginPlay() override;

        UPROPERTY(VisibleAnywhere)
        class USphereComponent* CollisionSphere;

        UPROPERTY(VisibleAnywhere)
        class UStaticMeshComponent* Mesh;

        UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
        USoundBase* PickupSound;

        UFUNCTION()
        void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
            UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
            bool bFromSweep, const FHitResult& SweepResult);
    };
