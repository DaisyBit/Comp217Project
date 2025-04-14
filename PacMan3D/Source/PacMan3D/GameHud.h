#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

UCLASS()
class PACMAN3D_API AGameHUD : public AHUD
{
    GENERATED_BODY()

protected:
    virtual void DrawHUD() override;

    int32 GetRemainingPellets() const;
    int32 GetRemainingCherries() const;
};