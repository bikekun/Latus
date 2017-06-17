// Fill out your copyright notice in the Description page of Project Settings.
//
//


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "InteractActor.generated.h"


USTRUCT(BlueprintType)
struct FItemParameters
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		/**
		 * \brief Item name
		 */
		FString ItemName;

};



UCLASS()
class LATUS_API AInteractActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = InteractActor)
		class USphereComponent* SphereCollision;

	UPROPERTY(VisibleDefaultsOnly, Category = InteractActor)
		class UStaticMeshComponent* VisibleMesh;
	
	
public:	
	// Sets default values for this actor's properties
	AInteractActor();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	

public:	
	// Called every frame
	/*virtual void Tick(float DeltaTime) override;*/

	

	UPROPERTY(EditAnywhere)		
	FItemParameters Parameters;

	
	FORCEINLINE class USphereComponent* GetSphereCollision() const {return SphereCollision;}
	FORCEINLINE class UStaticMeshComponent* GetVisibleMesh() const { return VisibleMesh; }


};
