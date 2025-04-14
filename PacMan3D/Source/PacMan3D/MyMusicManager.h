#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyMusicManager.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS()
class PACMAN3D_API AMyMusicManager : public AActor
{
    GENERATED_BODY()

public:
    AMyMusicManager();

protected:
    virtual void BeginPlay() override;

    // Audio component for background music
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio")
    UAudioComponent* BackgroundMusicComponent;

    // The background music sound asset. Assign this in the editor.
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
    USoundBase* BackgroundMusic;
};
