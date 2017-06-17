// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractActor.h"
#include "../../LatusCharacter.h"


// Sets default values
AInteractActor::AInteractActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	/*PrimaryActorTick.bCanEverTick = false;*/

	VisibleMesh = CreateDefaultSubobject<UStaticMeshComponent>("VisibleMesh");
	RootComponent = VisibleMesh;

	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SphereCollision->SetSphereRadius(10.f);
	SphereCollision->SetupAttachment(RootComponent);
	SphereCollision->bGenerateOverlapEvents = true;
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AInteractActor::OnOverlapBegin);
	SphereCollision->OnComponentEndOverlap.AddDynamic(this, &AInteractActor::OnOverlapEnd);



	////////////////////////////////////
	
	Parameters.ItemName = TEXT("������� ���");
	

}

// Called when the game starts or when spawned
void AInteractActor::BeginPlay()
{
	Super::BeginPlay();


}


void AInteractActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ALatusCharacter* Player = Cast<ALatusCharacter>(OtherActor);

	if (Player != nullptr)
	{
		Player->SetHelpText(Parameters.ItemName);
		GLog->Log(FString::Printf(TEXT("%s"), *Player->GetHelpText() ));
	}

	
}

void AInteractActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ALatusCharacter* Player = Cast<ALatusCharacter>(OtherActor);

	if (Player != nullptr)
	{
		Player->ClearHelpText();
	}
}

void AInteractActor::Pickup()
{
	GLog->Log(FString::Printf(TEXT("Pickup: %s"), *Parameters.ItemName));
	Destroy();
}

// Called every frame
//void AInteractActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

