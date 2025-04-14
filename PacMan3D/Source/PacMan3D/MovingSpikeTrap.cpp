#include "MovingSpikeTrap.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "TimerManager.h"
#include "PacMan3DCharacter.h"
#include "Kismet/GameplayStatics.h"

AMovingSpikeTrap::AMovingSpikeTrap()
{
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    // Spike visual
    SpikeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpikeMesh"));
    SpikeMesh->SetupAttachment(RootComponent);
    SpikeMesh->SetRelativeLocation(FVector::ZeroVector);
    SpikeMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Mesh doesn't need collision

    // Damage detection zone
    DamageZone = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageZone"));
    DamageZone->SetupAttachment(SpikeMesh);
    DamageZone->SetBoxExtent(FVector(30.f, 30.f, 60.f));
    DamageZone->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    DamageZone->SetCollisionResponseToAllChannels(ECR_Ignore);
    DamageZone->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    DamageZone->SetGenerateOverlapEvents(true);

    DamageZone->OnComponentBeginOverlap.AddDynamic(this, &AMovingSpikeTrap::OnSpikeOverlap);
}

void AMovingSpikeTrap::BeginPlay()
{
    Super::BeginPlay();

    StartLocation = SpikeMesh->GetRelativeLocation();

    FVector NormalizedDirection = MovementDirection.GetSafeNormal();
    TargetLocation = StartLocation + (NormalizedDirection * MovementDistance);

    bSpikesExtended = false;

    GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &AMovingSpikeTrap::ExtendSpikes, IntervalTime, false);
}

void AMovingSpikeTrap::ExtendSpikes()
{
    bSpikesExtended = true;
    SpikeMesh->SetRelativeLocation(TargetLocation);

    
    if (ExtendSound)
    {
        UGameplayStatics::PlaySoundAtLocation(this, ExtendSound, GetActorLocation(),
            FRotator::ZeroRotator, 0.1f);
    }

    GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &AMovingSpikeTrap::RetractSpikes, IntervalTime, false);
}

void AMovingSpikeTrap::RetractSpikes()
{
    bSpikesExtended = false;
    SpikeMesh->SetRelativeLocation(StartLocation);

    GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &AMovingSpikeTrap::ExtendSpikes, IntervalTime, false);
}

void AMovingSpikeTrap::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMovingSpikeTrap::OnSpikeOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this)
    {
        APacMan3DCharacter* Player = Cast<APacMan3DCharacter>(OtherActor);
        if (Player)
        {
            UE_LOG(LogTemp, Warning, TEXT("Player touched spikes — DESTROYED"));
            Player->Destroy();
        }
    }
}