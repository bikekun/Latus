// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractActor.h"


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


	////////////////////////////////////
	
	Parameters.ItemName = TEXT("������� ���");
	HelpText = TEXT("��� ������������� ����������� ����");

}

// Called when the game starts or when spawned
void AInteractActor::BeginPlay()
{
	Super::BeginPlay();

	UpdateHelpText();
}

void AInteractActor::UpdateHelpText()
{
	HelpText = FString::Printf(TEXT("������� E, ��� �� �������: %s"), *Parameters.ItemName);
}

void AInteractActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GLog->Log(FString::Printf(TEXT("%s"), *HelpText) );
}

// Called every frame
//void AInteractActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

