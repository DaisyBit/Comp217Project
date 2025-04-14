#include "CollectibleCherry.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PacMan3DCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "PacMan3DGameMode.h"

ACollectibleCherry::ACollectibleCherry()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    RootComponent = CollisionSphere;
    CollisionSphere->InitSphereRadius(50.f);
    CollisionSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);
    Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Optional: set a cherry mesh (update the path if needed)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CherryMesh(TEXT("/Game/Meshes/CherryMesh.CherryMesh"));
    if (CherryMesh.Succeeded())
    {
        Mesh->SetStaticMesh(CherryMesh.Object);
    }

    CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ACollectibleCherry::OnOverlapBegin);
}

void ACollectibleCherry::BeginPlay()
{
    Super::BeginPlay();

    if (APacMan3DGameMode* GM = Cast<APacMan3DGameMode>(UGameplayStatics::GetGameMode(this)))
    {
        GM->RegisterCollectible();
    }
}

void ACollectibleCherry::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    APacMan3DCharacter* Player = Cast<APacMan3DCharacter>(OtherActor);
    if (Player)
    {
        Player->Score += 5;

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