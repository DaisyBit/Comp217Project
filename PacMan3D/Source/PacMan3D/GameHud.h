#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

UCLASS()
class PACMAN3D_API AGameHUD : public AHUD
{
    GENERATED_BODY()

public:
    virtual void DrawHUD() override;
};