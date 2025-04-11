#include "CollectiblePellet.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PacMan3DCharacter.h"

ACollectiblePellet::ACollectiblePellet()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    RootComponent = CollisionSphere;
    CollisionSphere->InitSphereRadius(50.f);
    CollisionSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);

    CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ACollectiblePellet::OnOverlapBegin);
}

void ACollectiblePellet::BeginPlay()
{
    Super::BeginPlay();
}

void ACollectiblePellet::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    APacMan3DCharacter* Player = Cast<APacMan3DCharacter>(OtherActor); 
    if (Player)
    {
        Player->Score += 1;
        Destroy();
    }
}