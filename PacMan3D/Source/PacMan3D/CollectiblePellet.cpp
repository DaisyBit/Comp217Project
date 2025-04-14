#include "CollectiblePellet.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PacMan3DCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "PacMan3DGameMode.h"

ACollectiblePellet::ACollectiblePellet()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    RootComponent = CollisionSphere;
    CollisionSphere->InitSphereRadius(50.f);
    CollisionSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    CollisionSphere->SetGenerateOverlapEvents(true);

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);
    Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ACollectiblePellet::OnOverlapBegin);
}

void ACollectiblePellet::BeginPlay()
{
    Super::BeginPlay();

    if (APacMan3DGameMode* GM = Cast<APacMan3DGameMode>(UGameplayStatics::GetGameMode(this)))
    {
        GM->RegisterCollectible();
    }
}

void ACollectiblePellet::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    APacMan3DCharacter* Player = Cast<APacMan3DCharacter>(OtherActor);
    if (Player)
    {
        Player->Score += 1;

        if (APacMan3DGameMode* GM = Cast<APacMan3DGameMode>(UGameplayStatics::GetGameMode(this)))
        {
            GM->OnCollectibleCollected();
        }

        if (PickupSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation(), FRotator::ZeroRotator, 0.3f);
        }

        Destroy();
    }
}