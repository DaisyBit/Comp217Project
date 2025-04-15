#include "GameHUD.h"
#include "Engine/Canvas.h"
#include "PacMan3DCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

void AGameHUD::DrawHUD()
{
    Super::DrawHUD();


    FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this, true);
    if (CurrentLevelName.Equals("MainMenu")) 
    {
        return;
    }

    APacMan3DCharacter* Player = Cast<APacMan3DCharacter>(GetOwningPawn());
    if (Player && Canvas)
    {

        FString ScoreText = FString::Printf(TEXT("Score: %d"), Player->Score);

        FVector2D Position(50.f, 50.f);
        FLinearColor Color = FLinearColor::Yellow;
        float Scale = 1.5f;

        FCanvasTextItem TextItem(Position, FText::FromString(ScoreText), GEngine->GetLargeFont(), Color);
        TextItem.Scale = FVector2D(Scale, Scale);
        TextItem.EnableShadow(FLinearColor::Black);

        Canvas->DrawItem(TextItem);
    }
}