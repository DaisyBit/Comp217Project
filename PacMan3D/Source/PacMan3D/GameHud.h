#include "LevelTransitionVolume.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

ALevelTransitionVolume::ALevelTransitionVolume()
{
    PrimaryActorTick.bCanEverTick = false;

    TransitionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TransitionBox"));
    RootComponent = TransitionBox;

    TransitionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    TransitionBox->SetCollisionObjectType(ECC_WorldDynamic);
    TransitionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
    TransitionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    TransitionBox->SetGenerateOverlapEvents(true);

    TransitionBox->OnComponentBeginOverlap.AddDynamic(this, &ALevelTransitionVolume::OnOverlapBegin);
}

void ALevelTransitionVolume::BeginPlay()
{
    Super::BeginPlay();
}

void ALevelTransitionVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (ACharacter* Player = Cast<ACharacter>(OtherActor))
    {
        UE_LOG(LogTemp, Warning, TEXT("Player entered level transition volume. Loading %s..."), *TargetLevelName.ToString());
        UGameplayStatics::OpenLevel(this, TargetLevelName);
    }
}