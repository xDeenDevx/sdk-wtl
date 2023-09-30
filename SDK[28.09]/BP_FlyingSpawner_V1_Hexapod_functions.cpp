#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C
// (Actor)

class UClass* ABP_FlyingSpawner_V1_Hexapod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlyingSpawner_V1_Hexapod_C");

	return Clss;
}


// BP_FlyingSpawner_V1_Hexapod_C BP_FlyingSpawner_V1_Hexapod.Default__BP_FlyingSpawner_V1_Hexapod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlyingSpawner_V1_Hexapod_C* ABP_FlyingSpawner_V1_Hexapod_C::GetDefaultObj()
{
	static class ABP_FlyingSpawner_V1_Hexapod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlyingSpawner_V1_Hexapod_C*>(ABP_FlyingSpawner_V1_Hexapod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.OnDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FlyingSpawner_V1_Hexapod_C::OnDeath(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlyingSpawner_V1_Hexapod_C", "OnDeath");

	Params::ABP_FlyingSpawner_V1_Hexapod_C_OnDeath_Params Parms{};

	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.CUpdateVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlyingSpawner_V1_Hexapod_C::CUpdateVFX(bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlyingSpawner_V1_Hexapod_C", "CUpdateVFX");

	Params::ABP_FlyingSpawner_V1_Hexapod_C_CUpdateVFX_Params Parms{};

	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FlyingSpawner_V1_Hexapod_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlyingSpawner_V1_Hexapod_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlyingSpawner_V1_Hexapod_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlyingSpawner_V1_Hexapod_C", "ReceiveTick");

	Params::ABP_FlyingSpawner_V1_Hexapod_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.ExecuteUbergraph_BP_FlyingSpawner_V1_Hexapod
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FlyingSpawner_V1_Hexapod_C::ExecuteUbergraph_BP_FlyingSpawner_V1_Hexapod(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlyingSpawner_V1_Hexapod_C", "ExecuteUbergraph_BP_FlyingSpawner_V1_Hexapod");

	Params::ABP_FlyingSpawner_V1_Hexapod_C_ExecuteUbergraph_BP_FlyingSpawner_V1_Hexapod_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_1 = CallFunc_WTLSwitchHasAuthority_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


