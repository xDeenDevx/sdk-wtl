#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Male_FPC.BP_Male_FPC_C
// (Actor, Pawn)

class UClass* ABP_Male_FPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Male_FPC_C");

	return Clss;
}


// BP_Male_FPC_C BP_Male_FPC.Default__BP_Male_FPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Male_FPC_C* ABP_Male_FPC_C::GetDefaultObj()
{
	static class ABP_Male_FPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Male_FPC_C*>(ABP_Male_FPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Male_FPC.BP_Male_FPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.EyeBlink__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::EyeBlink__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "EyeBlink__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.EyeBlink__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::EyeBlink__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "EyeBlink__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.K2_ShowEffectsAfterDeath
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::K2_ShowEffectsAfterDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "K2_ShowEffectsAfterDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.K2_ShowTeleportationDeviceEffect
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::K2_ShowTeleportationDeviceEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "K2_ShowTeleportationDeviceEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.K2_OnDeath
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::K2_OnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "K2_OnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.K2_ShowExplosionEffectsAfterDeath
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Male_FPC_C::K2_ShowExplosionEffectsAfterDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "K2_ShowExplosionEffectsAfterDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Male_FPC.BP_Male_FPC_C.ExecuteUbergraph_BP_Male_FPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSkeletalCenterOfMass_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSkeletalCenterOfMass_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_GetSkeletalCenterOfMass_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_Explosion_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Male_FPC_C::ExecuteUbergraph_BP_Male_FPC(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSkeletalCenterOfMass_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FVector& CallFunc_GetSkeletalCenterOfMass_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_GetSkeletalCenterOfMass_ReturnValue_2, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, class ABP_Character_Explosion_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, float Temp_float_Variable, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent_2, bool K2Node_DynamicCast_bSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Male_FPC_C", "ExecuteUbergraph_BP_Male_FPC");

	Params::ABP_Male_FPC_C_ExecuteUbergraph_BP_Male_FPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSkeletalCenterOfMass_ReturnValue = CallFunc_GetSkeletalCenterOfMass_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_GetSkeletalCenterOfMass_ReturnValue_1 = CallFunc_GetSkeletalCenterOfMass_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetSkeletalCenterOfMass_ReturnValue_2 = CallFunc_GetSkeletalCenterOfMass_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_1 = CallFunc_Conv_VectorToTransform_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_DynamicCast_AsFMODEvent_1 = K2Node_DynamicCast_AsFMODEvent_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue_1 = CallFunc_PlayEventAtLocation_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFMODEvent_2 = K2Node_DynamicCast_AsFMODEvent_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue_2 = CallFunc_PlayEventAtLocation_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


