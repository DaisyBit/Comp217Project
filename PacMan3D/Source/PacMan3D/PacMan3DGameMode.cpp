#include "PacMan3DGameMode.h"
#include "PacMan3DCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameHUD.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

APacMan3DGameMode::APacMan3DGameMode()
	: Super()
{
	HUDClass = AGameHUD::StaticClass();

	// Set default pawn class to Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// Preload Victory UI
	static ConstructorHelpers::FClassFinder<UUserWidget> VictoryWidgetBP(TEXT("/Game/WBP_VictoryPopup"));
	if (VictoryWidgetBP.Succeeded())
	{
		VictoryWidgetClass = VictoryWidgetBP.Class;
	}

	// Preload Game Over UI
	static ConstructorHelpers::FClassFinder<UUserWidget> GameOverWidgetBP(TEXT("/Game/WBP_GameOverPopup"));
	if (GameOverWidgetBP.Succeeded())
	{
		GameOverWidgetClass = GameOverWidgetBP.Class;
	}
}

void APacMan3DGameMode::RegisterCollectible()
{
	TotalCollectibles++;
}

void APacMan3DGameMode::OnCollectibleCollected()
{
	CollectedCount++;

	if (CollectedCount >= TotalCollectibles)
	{
		FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this, true); // true removes PIE prefix
		if (CurrentLevelName.Equals("Level1"))
		{
			ShowEndScreen(VictoryWidgetClass);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("All collectibles gathered, but not in Level1 (current level: %s)"), *CurrentLevelName);
		}
	}
}

void APacMan3DGameMode::TriggerGameOver()
{
	UE_LOG(LogTemp, Warning, TEXT("TriggerGameOver() was called"));
	ShowEndScreen(GameOverWidgetClass);
}

void APacMan3DGameMode::ShowEndScreen(TSubclassOf<UUserWidget> WidgetClass)
{
	if (!WidgetClass) return;

	UUserWidget* WidgetInstance = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
	if (WidgetInstance)
	{
		WidgetInstance->AddToViewport();

		APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
		if (PC)
		{
			PC->SetShowMouseCursor(true);
			PC->SetInputMode(FInputModeUIOnly());
		}
	}
}

void APacMan3DGameMode::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (PC)
	{
		FInputModeGameOnly InputMode;
		PC->SetInputMode(InputMode);
		PC->SetShowMouseCursor(false);

		APawn* Pawn = PC->GetPawn();
		if (Pawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("PlayerController already has pawn: %s"), *Pawn->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("PlayerController has NO pawn — check PlayerStart, GameMode, and DefaultPawnClass!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No PlayerController found!"));
	}
}