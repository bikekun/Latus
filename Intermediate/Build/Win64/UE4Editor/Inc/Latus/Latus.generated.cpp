// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Latus.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Latus() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	UMG_API class UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();

	LATUS_API class UScriptStruct* Z_Construct_UScriptStruct_FItemParameters();
	LATUS_API class UFunction* Z_Construct_UFunction_AInteractActor_OnOverlapBegin();
	LATUS_API class UFunction* Z_Construct_UFunction_AInteractActor_OnOverlapEnd();
	LATUS_API class UFunction* Z_Construct_UFunction_AInteractActor_Pickup();
	LATUS_API class UClass* Z_Construct_UClass_AInteractActor_NoRegister();
	LATUS_API class UClass* Z_Construct_UClass_AInteractActor();
	LATUS_API class UFunction* Z_Construct_UFunction_ALatusCharacter_ClearHelpText();
	LATUS_API class UFunction* Z_Construct_UFunction_ALatusCharacter_GetHelpText();
	LATUS_API class UFunction* Z_Construct_UFunction_ALatusCharacter_Interact();
	LATUS_API class UFunction* Z_Construct_UFunction_ALatusCharacter_SetHelpText();
	LATUS_API class UClass* Z_Construct_UClass_ALatusCharacter_NoRegister();
	LATUS_API class UClass* Z_Construct_UClass_ALatusCharacter();
	LATUS_API class UFunction* Z_Construct_UFunction_ALatusGameMode_ChangeHUDState();
	LATUS_API class UClass* Z_Construct_UClass_ALatusGameMode_NoRegister();
	LATUS_API class UClass* Z_Construct_UClass_ALatusGameMode();
	LATUS_API class UClass* Z_Construct_UClass_ALatusHUD_NoRegister();
	LATUS_API class UClass* Z_Construct_UClass_ALatusHUD();
	LATUS_API class UFunction* Z_Construct_UFunction_ALatusProjectile_OnHit();
	LATUS_API class UClass* Z_Construct_UClass_ALatusProjectile_NoRegister();
	LATUS_API class UClass* Z_Construct_UClass_ALatusProjectile();
	LATUS_API class UPackage* Z_Construct_UPackage__Script_Latus();
class UScriptStruct* FItemParameters::StaticStruct()
{
	extern LATUS_API class UPackage* Z_Construct_UPackage__Script_Latus();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LATUS_API class UScriptStruct* Z_Construct_UScriptStruct_FItemParameters();
		extern LATUS_API uint32 Get_Z_Construct_UScriptStruct_FItemParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemParameters, Z_Construct_UPackage__Script_Latus(), TEXT("ItemParameters"), sizeof(FItemParameters), Get_Z_Construct_UScriptStruct_FItemParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemParameters(FItemParameters::StaticStruct, TEXT("/Script/Latus"), TEXT("ItemParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Latus_StaticRegisterNativesFItemParameters
{
	FScriptStruct_Latus_StaticRegisterNativesFItemParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemParameters")),new UScriptStruct::TCppStructOps<FItemParameters>);
	}
} ScriptStruct_Latus_StaticRegisterNativesFItemParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FItemParameters()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Latus();
		extern uint32 Get_Z_Construct_UScriptStruct_FItemParameters_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemParameters"), sizeof(FItemParameters), Get_Z_Construct_UScriptStruct_FItemParameters_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FItemParameters>, EStructFlags(0x00000001));
			UProperty* NewProp_ItemName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemName, FItemParameters), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
			MetaData->SetValue(NewProp_ItemName, TEXT("Category"), TEXT("ItemParameters"));
			MetaData->SetValue(NewProp_ItemName, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
			MetaData->SetValue(NewProp_ItemName, TEXT("ToolTip"), TEXT("\\brief Item name"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemParameters_CRC() { return 1819068590U; }
	void AInteractActor::StaticRegisterNativesAInteractActor()
	{
		UClass* Class = AInteractActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&AInteractActor::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&AInteractActor::execOnOverlapEnd },
			{ "Pickup", (Native)&AInteractActor::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_AInteractActor_OnOverlapBegin()
	{
		struct InteractActor_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_AInteractActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(InteractActor_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, InteractActor_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, InteractActor_eventOnOverlapBegin_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, InteractActor_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, InteractActor_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, InteractActor_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, InteractActor_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, InteractActor_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, InteractActor_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractActor_OnOverlapEnd()
	{
		struct InteractActor_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_AInteractActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(InteractActor_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, InteractActor_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, InteractActor_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, InteractActor_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, InteractActor_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractActor_Pickup()
	{
		UObject* Outer=Z_Construct_UClass_AInteractActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pickup"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractActor_NoRegister()
	{
		return AInteractActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Latus();
			OuterClass = AInteractActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AInteractActor_OnOverlapBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractActor_OnOverlapEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractActor_Pickup());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Parameters = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Parameters"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Parameters, AInteractActor), 0x0010000000000001, Z_Construct_UScriptStruct_FItemParameters());
				UProperty* NewProp_VisibleMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VisibleMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VisibleMesh, AInteractActor), 0x00400000000b0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_SphereCollision = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereCollision"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SphereCollision, AInteractActor), 0x00400000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractActor_OnOverlapBegin(), "OnOverlapBegin"); // 3566821069
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractActor_OnOverlapEnd(), "OnOverlapEnd"); // 407719758
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractActor_Pickup(), "Pickup"); // 3977720820
				static TCppClassTypeInfo<TCppClassTypeTraits<AInteractActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ItemsCpp/base/InteractActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
				MetaData->SetValue(NewProp_Parameters, TEXT("Category"), TEXT("InteractActor"));
				MetaData->SetValue(NewProp_Parameters, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
				MetaData->SetValue(NewProp_Parameters, TEXT("ToolTip"), TEXT("virtual void Tick(float DeltaTime) override;"));
				MetaData->SetValue(NewProp_VisibleMesh, TEXT("Category"), TEXT("InteractActor"));
				MetaData->SetValue(NewProp_VisibleMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VisibleMesh, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
				MetaData->SetValue(NewProp_SphereCollision, TEXT("Category"), TEXT("InteractActor"));
				MetaData->SetValue(NewProp_SphereCollision, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SphereCollision, TEXT("ModuleRelativePath"), TEXT("ItemsCpp/base/InteractActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractActor, 1746532283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractActor(Z_Construct_UClass_AInteractActor, &AInteractActor::StaticClass, TEXT("/Script/Latus"), TEXT("AInteractActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractActor);
	void ALatusCharacter::StaticRegisterNativesALatusCharacter()
	{
		UClass* Class = ALatusCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ClearHelpText", (Native)&ALatusCharacter::execClearHelpText },
			{ "GetHelpText", (Native)&ALatusCharacter::execGetHelpText },
			{ "Interact", (Native)&ALatusCharacter::execInteract },
			{ "SetHelpText", (Native)&ALatusCharacter::execSetHelpText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 4);
	}
	UFunction* Z_Construct_UFunction_ALatusCharacter_ClearHelpText()
	{
		UObject* Outer=Z_Construct_UClass_ALatusCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearHelpText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALatusCharacter_GetHelpText()
	{
		struct LatusCharacter_eventGetHelpText_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ALatusCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHelpText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(LatusCharacter_eventGetHelpText_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, LatusCharacter_eventGetHelpText_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALatusCharacter_Interact()
	{
		UObject* Outer=Z_Construct_UClass_ALatusCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Interact"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00040401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALatusCharacter_SetHelpText()
	{
		struct LatusCharacter_eventSetHelpText_Parms
		{
			FString text;
		};
		UObject* Outer=Z_Construct_UClass_ALatusCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetHelpText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(LatusCharacter_eventSetHelpText_Parms));
			UProperty* NewProp_text = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("text"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(text, LatusCharacter_eventSetHelpText_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALatusCharacter_NoRegister()
	{
		return ALatusCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ALatusCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Latus();
			OuterClass = ALatusCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ALatusCharacter_ClearHelpText());
				OuterClass->LinkChild(Z_Construct_UFunction_ALatusCharacter_GetHelpText());
				OuterClass->LinkChild(Z_Construct_UFunction_ALatusCharacter_Interact());
				OuterClass->LinkChild(Z_Construct_UFunction_ALatusCharacter_SetHelpText());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MaxRangeInteract = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxRangeInteract"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxRangeInteract, ALatusCharacter), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsingMotionControllers, ALatusCharacter, uint8);
				UProperty* NewProp_bUsingMotionControllers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUsingMotionControllers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsingMotionControllers, ALatusCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUsingMotionControllers, ALatusCharacter), sizeof(uint8), false);
				UProperty* NewProp_FireAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireAnimation, ALatusCharacter), 0x0010000000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireSound, ALatusCharacter), 0x0010000000000005, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, ALatusCharacter), 0x0014000000010001, Z_Construct_UClass_ALatusProjectile_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_GunOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GunOffset, ALatusCharacter), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ALatusCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ALatusCharacter), 0x0010000000020015);
				UProperty* NewProp_L_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("L_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(L_MotionController, ALatusCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_R_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("R_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(R_MotionController, ALatusCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, ALatusCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_VR_MuzzleLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VR_MuzzleLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VR_MuzzleLocation, ALatusCharacter), 0x00400000000b0009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_VR_Gun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VR_Gun"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VR_Gun, ALatusCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FP_MuzzleLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FP_MuzzleLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FP_MuzzleLocation, ALatusCharacter), 0x00400000000b0009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_FP_Gun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FP_Gun"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FP_Gun, ALatusCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, ALatusCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALatusCharacter_ClearHelpText(), "ClearHelpText"); // 4083515530
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALatusCharacter_GetHelpText(), "GetHelpText"); // 2201893275
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALatusCharacter_Interact(), "Interact"); // 194247320
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALatusCharacter_SetHelpText(), "SetHelpText"); // 29058617
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ALatusCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_MaxRangeInteract, TEXT("Category"), TEXT("LatusCharacter"));
				MetaData->SetValue(NewProp_MaxRangeInteract, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("ToolTip"), TEXT("Whether to use motion controller location for aiming."));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ToolTip"), TEXT("AnimMontage to play each time we fire"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("Sound to play each time we fire"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the characters location"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("Category"), TEXT("LatusCharacter"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ToolTip"), TEXT("Motion controller (left hand)"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("Category"), TEXT("LatusCharacter"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ToolTip"), TEXT("Motion controller (right hand)"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("ToolTip"), TEXT("Location on VR gun mesh where projectiles should spawn."));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("ToolTip"), TEXT("Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("ToolTip"), TEXT("Location on gun mesh where projectiles should spawn."));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("ToolTip"), TEXT("Gun mesh: 1st person view (seen only by self)"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("LatusCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("Pawn mesh: 1st person view (arms; seen only by self)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALatusCharacter, 2095007552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALatusCharacter(Z_Construct_UClass_ALatusCharacter, &ALatusCharacter::StaticClass, TEXT("/Script/Latus"), TEXT("ALatusCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALatusCharacter);
	void ALatusGameMode::StaticRegisterNativesALatusGameMode()
	{
		UClass* Class = ALatusGameMode::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ChangeHUDState", (Native)&ALatusGameMode::execChangeHUDState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ALatusGameMode_ChangeHUDState()
	{
		struct LatusGameMode_eventChangeHUDState_Parms
		{
			uint8 NewState;
		};
		UObject* Outer=Z_Construct_UClass_ALatusGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeHUDState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(LatusGameMode_eventChangeHUDState_Parms));
			UProperty* NewProp_NewState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewState"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewState, LatusGameMode_eventChangeHUDState_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("HUD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LatusGameMode.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALatusGameMode_NoRegister()
	{
		return ALatusGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ALatusGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Latus();
			OuterClass = ALatusGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;

				OuterClass->LinkChild(Z_Construct_UFunction_ALatusGameMode_ChangeHUDState());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentWidget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWidget, ALatusGameMode), 0x0020080000080008, Z_Construct_UClass_UUserWidget_NoRegister());
				UProperty* NewProp_ShopWeaponGeneralHUDClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShopWeaponGeneralHUDClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ShopWeaponGeneralHUDClass, ALatusGameMode), 0x0024080000010005, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_ShopGeneralHUDClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShopGeneralHUDClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ShopGeneralHUDClass, ALatusGameMode), 0x0024080000010005, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_InventoryHUDClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InventoryHUDClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(InventoryHUDClass, ALatusGameMode), 0x0024080000010005, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_IngameHUDClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IngameHUDClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(IngameHUDClass, ALatusGameMode), 0x0024080000010005, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALatusGameMode_ChangeHUDState(), "ChangeHUDState"); // 3837170117
				static TCppClassTypeInfo<TCppClassTypeTraits<ALatusGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LatusGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LatusGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ModuleRelativePath"), TEXT("LatusGameMode.h"));
				MetaData->SetValue(NewProp_ShopWeaponGeneralHUDClass, TEXT("Category"), TEXT("HUD"));
				MetaData->SetValue(NewProp_ShopWeaponGeneralHUDClass, TEXT("ModuleRelativePath"), TEXT("LatusGameMode.h"));
				MetaData->SetValue(NewProp_ShopGeneralHUDClass, TEXT("Category"), TEXT("HUD"));
				MetaData->SetValue(NewProp_ShopGeneralHUDClass, TEXT("ModuleRelativePath"), TEXT("LatusGameMode.h"));
				MetaData->SetValue(NewProp_InventoryHUDClass, TEXT("Category"), TEXT("HUD"));
				MetaData->SetValue(NewProp_InventoryHUDClass, TEXT("ModuleRelativePath"), TEXT("LatusGameMode.h"));
				MetaData->SetValue(NewProp_IngameHUDClass, TEXT("Category"), TEXT("HUD"));
				MetaData->SetValue(NewProp_IngameHUDClass, TEXT("ModuleRelativePath"), TEXT("LatusGameMode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALatusGameMode, 3549966140);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALatusGameMode(Z_Construct_UClass_ALatusGameMode, &ALatusGameMode::StaticClass, TEXT("/Script/Latus"), TEXT("ALatusGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALatusGameMode);
	void ALatusHUD::StaticRegisterNativesALatusHUD()
	{
	}
	UClass* Z_Construct_UClass_ALatusHUD_NoRegister()
	{
		return ALatusHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ALatusHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_Latus();
			OuterClass = ALatusHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ALatusHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LatusHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LatusHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALatusHUD, 3561615020);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALatusHUD(Z_Construct_UClass_ALatusHUD, &ALatusHUD::StaticClass, TEXT("/Script/Latus"), TEXT("ALatusHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALatusHUD);
	void ALatusProjectile::StaticRegisterNativesALatusProjectile()
	{
		UClass* Class = ALatusProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&ALatusProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ALatusProjectile_OnHit()
	{
		struct LatusProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_ALatusProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(LatusProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, LatusProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, LatusProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, LatusProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, LatusProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, LatusProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LatusProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALatusProjectile_NoRegister()
	{
		return ALatusProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_ALatusProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Latus();
			OuterClass = ALatusProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ALatusProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, ALatusProjectile), 0x00400000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, ALatusProjectile), 0x00400000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALatusProjectile_OnHit(), "OnHit"); // 525956248
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ALatusProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LatusProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LatusProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("LatusProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("LatusProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALatusProjectile, 2775319582);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALatusProjectile(Z_Construct_UClass_ALatusProjectile, &ALatusProjectile::StaticClass, TEXT("/Script/Latus"), TEXT("ALatusProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALatusProjectile);
	UPackage* Z_Construct_UPackage__Script_Latus()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Latus")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xD7418AD3;
			Guid.B = 0xF3D07DBA;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
