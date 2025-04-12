#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GhostEnemy.generated.h"

class USphereComponent;

UCLASS()
class PACMAN3D_API AGhostEnemy : public ACharacter
{
    GENERATED_BODY()

public:
    AGhostEnemy();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* GhostVisual;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    void Wander();
    void ChasePlayer(AActor* Player);
    void ReturnToWander();
    bool CanSeePlayer(AActor* Player);

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    FTimerHandle WanderTimerHandle;

    UPROPERTY(EditAnywhere)
    float SightRadius = 1000.f;

    UPROPERTY(EditAnywhere)
    float WanderRadius = 800.f;

    UPROPERTY(EditAnywhere)
    float WanderDelay = 3.f;

    UPROPERTY(VisibleAnywhere)
    USphereComponent* CollisionSphere;

    AActor* PlayerActor;
    bool bIsChasing;
};