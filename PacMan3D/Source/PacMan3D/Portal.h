#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

class USoundBase;

UCLASS()
class PACMAN3D_API APortal : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    APortal();

protected:
    virtual void BeginPlay() override;

public:

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portal")
    UBoxComponent* CollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portal")
    UStaticMeshComponent* PortalMesh;

    UPROPERTY(EditInstanceOnly, Category = "Portal")
    APortal* DestinationPortal;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Portal")
    float TeleportOffset;

    bool bCanTeleport;

    // **Add this property for the sound you want to play**
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Portal|Sound")
    USoundBase* TeleportSound;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    void ResetTeleport();
};
