#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C
// (Actor, Pawn)

class UClass* ABP_Monster_Spore_Outgrowth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Monster_Spore_Outgrowth_C");

	return Clss;
}


// BP_Monster_Spore_Outgrowth_C BP_Monster_Spore_Outgrowth.Default__BP_Monster_Spore_Outgrowth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Monster_Spore_Outgrowth_C* ABP_Monster_Spore_Outgrowth_C::GetDefaultObj()
{
	static class ABP_Monster_Spore_Outgrowth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Monster_Spore_Outgrowth_C*>(ABP_Monster_Spore_Outgrowth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.SCheckOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBI_CanBeTakeDamage_C>K2Node_DynamicCast_AsBI_Can_be_Take_Damage                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Monster_Spore_Outgrowth_C::SCheckOwner(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAlive_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monster_Spore_Outgrowth_C", "SCheckOwner");

	Params::ABP_Monster_Spore_Outgrowth_C_SCheckOwner_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBI_Can_be_Take_Damage = K2Node_DynamicCast_AsBI_Can_be_Take_Damage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.OnDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Actor_Spore_Boss_C*      K2Node_DynamicCast_AsBP_Actor_Spore_Boss                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBI_CanBeTakeDamage_C>CallFunc_GetMaxHealth_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxHealth_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBI_CanBeTakeDamage_C>K2Node_DynamicCast_AsBI_Can_be_Take_Damage                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Monster_Spore_Outgrowth_C::OnDeath(class ABP_Actor_Spore_Boss_C* K2Node_DynamicCast_AsBP_Actor_Spore_Boss, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBI_CanBeTakeDamage_C> CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_Result, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_1, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monster_Spore_Outgrowth_C", "OnDeath");

	Params::ABP_Monster_Spore_Outgrowth_C_OnDeath_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Actor_Spore_Boss = K2Node_DynamicCast_AsBP_Actor_Spore_Boss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMaxHealth_self_CastInput = CallFunc_GetMaxHealth_self_CastInput;
	Parms.CallFunc_GetMaxHealth_Result = CallFunc_GetMaxHealth_Result;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue_1 = CallFunc_ApplyDamage_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBI_Can_be_Take_Damage = K2Node_DynamicCast_AsBI_Can_be_Take_Damage;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.UpdateRecover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TmpDeltaSec                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TmpCurrentScale                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Monster_Spore_Outgrowth_C::UpdateRecover(float TmpDeltaSec, float TmpCurrentScale, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monster_Spore_Outgrowth_C", "UpdateRecover");

	Params::ABP_Monster_Spore_Outgrowth_C_UpdateRecover_Params Parms{};

	Parms.TmpDeltaSec = TmpDeltaSec;
	Parms.TmpCurrentScale = TmpCurrentScale;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Monster_Spore_Outgrowth_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monster_Spore_Outgrowth_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Monster_Spore_Outgrowth_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monster_Spore_Outgrowth_C", "ReceiveTick");

	Params::ABP_Monster_Spore_Outgrowth_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.ExecuteUbergraph_BP_Monster_Spore_Outgrowth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterMonsterEventPoint_Result                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Monster_Spore_Outgrowth_C::ExecuteUbergraph_BP_Monster_Spore_Outgrowth(int32 EntryPoint, bool CallFunc_RegisterMonsterEventPoint_Result, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FDateTime& CallFunc_Now_ReturnValue, bool CallFunc_IsAlive_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monster_Spore_Outgrowth_C", "ExecuteUbergraph_BP_Monster_Spore_Outgrowth");

	Params::ABP_Monster_Spore_Outgrowth_C_ExecuteUbergraph_BP_Monster_Spore_Outgrowth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RegisterMonsterEventPoint_Result = CallFunc_RegisterMonsterEventPoint_Result;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_1 = CallFunc_WTLSwitchHasAuthority_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


