#include "MyMusicManager.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

AMyMusicManager::AMyMusicManager()
{
    PrimaryActorTick.bCanEverTick = false;

    BackgroundMusicComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("BackgroundMusicComponent"));
    BackgroundMusicComponent->bAutoActivate = false;
    RootComponent = BackgroundMusicComponent;
}

void AMyMusicManager::BeginPlay()
{
    Super::BeginPlay();

    if (BackgroundMusic)
    {
        BackgroundMusicComponent->SetSound(BackgroundMusic);

        BackgroundMusicComponent->Play();
    }
}
