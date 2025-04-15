#include "EndGameWidget.h"
#include "Kismet/GameplayStatics.h"

void UEndGameWidget::OnReturnToMainMenuClicked()
{
    UGameplayStatics::OpenLevel(this, FName("MainMenu"));
}