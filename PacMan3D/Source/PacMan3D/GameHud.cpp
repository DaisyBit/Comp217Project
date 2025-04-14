#include "GameHUD.h"
#include "Engine/Canvas.h"
#include "PacMan3DCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "CollectiblePellet.h"
#include "CollectibleCherry.h"

void AGameHUD::DrawHUD()
{
    Super::DrawHUD();

    APacMan3DCharacter* Player = Cast<APacMan3DCharacter>(GetOwningPawn());
    if (Player && Canvas)
    {
        // Draw Score
        FString ScoreText = FString::Printf(TEXT("Score: %d"), Player->Score);
        FVector2D ScorePos(50.f, 50.f);
        FLinearColor ScoreColor = FLinearColor::Yellow;
        float ScoreScale = 1.5f;

        FCanvasTextItem ScoreItem(ScorePos, FText::FromString(ScoreText), GEngine->GetLargeFont(), ScoreColor);
        ScoreItem.Scale = FVector2D(ScoreScale, ScoreScale);
        ScoreItem.EnableShadow(FLinearColor::Black);
        Canvas->DrawItem(ScoreItem);

        // Draw Pellet & Cherry Count
        int32 PelletCount = GetRemainingPellets();
        int32 CherryCount = GetRemainingCherries();

        FString CountText = FString::Printf(TEXT("Pellets Remaining: %d    |    Cherries Remaining: %d"), PelletCount, CherryCount);
        FVector2D CountPos(50.f, 80.f); // Below the score
        FCanvasTextItem CountItem(CountPos, FText::FromString(CountText), GEngine->GetLargeFont(), FLinearColor::White);
        CountItem.Scale = FVector2D(1.2f, 1.2f);
        CountItem.EnableShadow(FLinearColor::Black);
        Canvas->DrawItem(CountItem);
    }
}

int32 AGameHUD::GetRemainingPellets() const
{
    TArray<AActor*> Pellets;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACollectiblePellet::StaticClass(), Pellets);
    return Pellets.Num();
}

int32 AGameHUD::GetRemainingCherries() const
{
    TArray<AActor*> Cherries;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACollectibleCherry::StaticClass(), Cherries);
    return Cherries.Num();
}