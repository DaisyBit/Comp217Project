#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PacMan3DGameMode.generated.h"

class UUserWidget;

UCLASS(Blueprintable, BlueprintType)
class APacMan3DGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APacMan3DGameMode();

	UFUNCTION(BlueprintCallable)
	void RegisterCollectible();

	UFUNCTION(BlueprintCallable)
	void OnCollectibleCollected();

	UFUNCTION(BlueprintCallable)
	void TriggerGameOver();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collectibles")
	int32 TotalCollectibles = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collectibles")
	int32 CollectedCount = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> VictoryWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> GameOverWidgetClass;

	void ShowEndScreen(TSubclassOf<UUserWidget> WidgetClass);
};



