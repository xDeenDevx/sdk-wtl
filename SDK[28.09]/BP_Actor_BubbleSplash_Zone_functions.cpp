#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C
// (Actor)

class UClass* ABP_Actor_BubbleSplash_Zone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Actor_BubbleSplash_Zone_C");

	return Clss;
}


// BP_Actor_BubbleSplash_Zone_C BP_Actor_BubbleSplash_Zone.Default__BP_Actor_BubbleSplash_Zone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Actor_BubbleSplash_Zone_C* ABP_Actor_BubbleSplash_Zone_C::GetDefaultObj()
{
	static class ABP_Actor_BubbleSplash_Zone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Actor_BubbleSplash_Zone_C*>(ABP_Actor_BubbleSplash_Zone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Actor_BubbleSplash_Zone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actor_BubbleSplash_Zone_C", "ReceiveTick");

	Params::ABP_Actor_BubbleSplash_Zone_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Actor_BubbleSplash_Zone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actor_BubbleSplash_Zone_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C.ExecuteUbergraph_BP_Actor_BubbleSplash_Zone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Actor_BubbleSplash_Zone_C::ExecuteUbergraph_BP_Actor_BubbleSplash_Zone(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actor_BubbleSplash_Zone_C", "ExecuteUbergraph_BP_Actor_BubbleSplash_Zone");

	Params::ABP_Actor_BubbleSplash_Zone_C_ExecuteUbergraph_BP_Actor_BubbleSplash_Zone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_1 = CallFunc_WTLSwitchHasAuthority_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


