#include "MyMusicManager.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

AMyMusicManager::AMyMusicManager()
{
    PrimaryActorTick.bCanEverTick = false;

    // Create an audio component and set it up
    BackgroundMusicComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("BackgroundMusicComponent"));
    BackgroundMusicComponent->bAutoActivate = false; // We want to control when it starts
    RootComponent = BackgroundMusicComponent;
}

void AMyMusicManager::BeginPlay()
{
    Super::BeginPlay();

    // Make sure we have assigned a background music asset
    if (BackgroundMusic)
    {
        BackgroundMusicComponent->SetSound(BackgroundMusic);

        // Looping is handled in the sound asset settings—ensure your BackgroundMusic asset is set to loop in the editor

        // Start playing the background music
        BackgroundMusicComponent->Play();
    }
}
