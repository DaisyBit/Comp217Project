#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectibleCherry.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class USoundBase; 

UCLASS(Blueprintable)
class PACMAN3D_API ACollectibleCherry : public AActor
{
    GENERATED_BODY()

public:
    ACollectibleCherry();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere)
    USphereComponent* CollisionSphere;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
    USoundBase* PickupSound;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);
};