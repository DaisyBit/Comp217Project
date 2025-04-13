#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelTransitionVolume.generated.h"

class UBoxComponent;

UCLASS()
class PACMAN3D_API ALevelTransitionVolume : public AActor
{
    GENERATED_BODY()

public:
    ALevelTransitionVolume();

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    UPROPERTY(VisibleAnywhere)
    UBoxComponent* TransitionBox;

    UPROPERTY(EditAnywhere, Category = "Level Transition")
    FName TargetLevelName = "Level1"; // Editable in editor
};