#include "Portal.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"

APortal::APortal()
{
    PrimaryActorTick.bCanEverTick = false;


    CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    RootComponent = CollisionComponent;
    CollisionComponent->SetGenerateOverlapEvents(true);
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APortal::OnOverlapBegin);

    PortalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PortalMesh"));
    PortalMesh->SetupAttachment(RootComponent);


    TeleportOffset = 200.f;
    bCanTeleport = true;
}

void APortal::BeginPlay()
{
    Super::BeginPlay();
}

void APortal::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{

    if (bCanTeleport && DestinationPortal && OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {

        FVector DestinationLocation = DestinationPortal->GetActorLocation() + (DestinationPortal->GetActorForwardVector() * TeleportOffset);
        OtherActor->SetActorLocation(DestinationLocation);

        bCanTeleport = false;
        DestinationPortal->bCanTeleport = false;


        FTimerHandle TimerHandle;
        GetWorldTimerManager().SetTimer(TimerHandle, this, &APortal::ResetTeleport, 1.0f, false);

        FTimerHandle TimerHandleDest;
        DestinationPortal->GetWorldTimerManager().SetTimer(TimerHandleDest, DestinationPortal, &APortal::ResetTeleport, 1.0f, false);
    }
}

void APortal::ResetTeleport()
{
    bCanTeleport = true;
}