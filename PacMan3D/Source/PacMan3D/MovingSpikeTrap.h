#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingSpikeTrap.generated.h"


// Forward declarations
class UStaticMeshComponent;
class UBoxComponent;
class USceneComponent;
class USoundBase; // Forward declaration for sound assets

UCLASS()
class PACMAN3D_API AMovingSpikeTrap : public AActor
{
    GENERATED_BODY()

public:
    AMovingSpikeTrap();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    void ExtendSpikes();
    void RetractSpikes();

    FTimerHandle MovementTimerHandle;
    bool bSpikesExtended;

    UPROPERTY(EditAnywhere, Category = "Spike Settings")
    float MovementDistance = 100.f; // How far the spikes extend

    UPROPERTY(EditAnywhere, Category = "Spike Settings")
    float MovementSpeed = 100.f; // Units per second (unused for instant movement)

    UPROPERTY(EditAnywhere, Category = "Spike Settings")
    float IntervalTime = 2.f; // How long to stay extended/retracted

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spike Settings")
    FVector MovementDirection = FVector(1.f, 0.f, 0.f); // Default: move along X axis

    FVector StartLocation;
    FVector TargetLocation;

    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spike", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* SpikeMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spike", meta = (AllowPrivateAccess = "true"))
    UBoxComponent* DamageZone;

    UFUNCTION()
    void OnSpikeOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spike Sound")
    USoundBase* ExtendSound;
};