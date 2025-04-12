#include "GhostEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "PacMan3DCharacter.h"
#include "Components/SphereComponent.h"

AGhostEnemy::AGhostEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    CollisionSphere->SetupAttachment(RootComponent);
    CollisionSphere->SetCollisionProfileName("Trigger");
    CollisionSphere->SetSphereRadius(50.f);
    CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AGhostEnemy::OnOverlapBegin);

    GhostVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GhostVisual"));
    GhostVisual->SetupAttachment(RootComponent);
    GhostVisual->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    AIControllerClass = AAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AGhostEnemy::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("Ghost BeginPlay Called"));

    PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    bIsChasing = false;

    Wander(); // Start wandering
}

void AGhostEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (PlayerActor && CanSeePlayer(PlayerActor))
    {
        if (!bIsChasing)
        {
            ChasePlayer(PlayerActor);
        }
    }
    else if (bIsChasing)
    {
        ReturnToWander();
    }
}

bool AGhostEnemy::CanSeePlayer(AActor* Player)
{
    if (!Player) return false;

    FVector ToPlayer = Player->GetActorLocation() - GetActorLocation();
    float Distance = ToPlayer.Size();

    if (Distance > SightRadius)
        return false;

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        Hit,
        GetActorLocation(),
        Player->GetActorLocation(),
        ECC_Visibility,
        Params
    );

    return (bHit && Hit.GetActor() == Player);
}

void AGhostEnemy::Wander()
{
    bIsChasing = false;

    UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (NavSys)
    {
        FVector Origin = GetActorLocation();
        FVector RandomLocation;
        FNavLocation NavLoc;

        if (NavSys->GetRandomPointInNavigableRadius(Origin, WanderRadius, NavLoc))
        {
            AAIController* AICon = Cast<AAIController>(GetController());
            if (AICon)
            {
                AICon->MoveToLocation(NavLoc.Location);
            }
        }
    }

    // Schedule next wander move
    GetWorld()->GetTimerManager().SetTimer(WanderTimerHandle, this, &AGhostEnemy::Wander, WanderDelay, false);
}

void AGhostEnemy::ChasePlayer(AActor* Player)
{
    bIsChasing = true;
    GetWorld()->GetTimerManager().ClearTimer(WanderTimerHandle);

    AAIController* AICon = Cast<AAIController>(GetController());
    if (AICon && Player)
    {
        AICon->MoveToActor(Player);
    }
}

void AGhostEnemy::ReturnToWander()
{
    Wander();
}

void AGhostEnemy::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (Cast<APacMan3DCharacter>(OtherActor))
    {
        // Simulate player death
        OtherActor->Destroy(); // Or trigger a respawn/game over
    }
}