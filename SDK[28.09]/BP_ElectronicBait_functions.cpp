#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElectronicBait.BP_ElectronicBait_C
// (Actor)

class UClass* ABP_ElectronicBait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElectronicBait_C");

	return Clss;
}


// BP_ElectronicBait_C BP_ElectronicBait.Default__BP_ElectronicBait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElectronicBait_C* ABP_ElectronicBait_C::GetDefaultObj()
{
	static class ABP_ElectronicBait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElectronicBait_C*>(ABP_ElectronicBait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ElectronicBait.BP_ElectronicBait_C.OnRep_IsCharged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ElectronicBait_C::OnRep_IsCharged(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "OnRep_IsCharged");

	Params::ABP_ElectronicBait_C_OnRep_IsCharged_Params Parms{};

	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.K2_OnDestroyed
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ElectronicBait_C::K2_OnDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "K2_OnDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ElectronicBait_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ElectronicBait_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.OnEnergyChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              EnergyValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElectronicBait_C::OnEnergyChanged(float EnergyValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "OnEnergyChanged");

	Params::ABP_ElectronicBait_C_OnEnergyChanged_Params Parms{};

	Parms.EnergyValue = EnergyValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ElectronicBait_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.OnConditionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              ConditionValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElectronicBait_C::OnConditionChanged(float ConditionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "OnConditionChanged");

	Params::ABP_ElectronicBait_C_OnConditionChanged_Params Parms{};

	Parms.ConditionValue = ConditionValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.BPCharged
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ElectronicBait_C::BPCharged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "BPCharged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectronicBait.BP_ElectronicBait_C.ExecuteUbergraph_BP_ElectronicBait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ElectonicExplosion_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BPGetCondition_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_EnergyValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BPGetEnergy_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ConditionValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ElectronicBait_C::ExecuteUbergraph_BP_ElectronicBait(int32 EntryPoint, bool CallFunc_IsActive_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsActive_ReturnValue_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ElectonicExplosion_C* CallFunc_FinishSpawningActor_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsActive_ReturnValue_2, float CallFunc_BPGetCondition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsActive_ReturnValue_3, bool CallFunc_IsActive_ReturnValue_4, float K2Node_Event_EnergyValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_3, bool K2Node_SwitchEnum_CmpSuccess_3, float CallFunc_BPGetEnergy_ReturnValue, float K2Node_Event_ConditionValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_4, bool K2Node_SwitchEnum_CmpSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectronicBait_C", "ExecuteUbergraph_BP_ElectronicBait");

	Params::ABP_ElectronicBait_C_ExecuteUbergraph_BP_ElectronicBait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue_1 = CallFunc_IsActive_ReturnValue_1;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_1 = CallFunc_WTLSwitchHasAuthority_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsActive_ReturnValue_2 = CallFunc_IsActive_ReturnValue_2;
	Parms.CallFunc_BPGetCondition_ReturnValue = CallFunc_BPGetCondition_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_2 = CallFunc_WTLSwitchHasAuthority_Result_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsActive_ReturnValue_3 = CallFunc_IsActive_ReturnValue_3;
	Parms.CallFunc_IsActive_ReturnValue_4 = CallFunc_IsActive_ReturnValue_4;
	Parms.K2Node_Event_EnergyValue = K2Node_Event_EnergyValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_3 = CallFunc_WTLSwitchHasAuthority_Result_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_BPGetEnergy_ReturnValue = CallFunc_BPGetEnergy_ReturnValue;
	Parms.K2Node_Event_ConditionValue = K2Node_Event_ConditionValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_4 = CallFunc_WTLSwitchHasAuthority_Result_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


