#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BulletHell_Component.BP_BulletHell_Component_C
// (None)

class UClass* UBP_BulletHell_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BulletHell_Component_C");

	return Clss;
}


// BP_BulletHell_Component_C BP_BulletHell_Component.Default__BP_BulletHell_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BulletHell_Component_C* UBP_BulletHell_Component_C::GetDefaultObj()
{
	static class UBP_BulletHell_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BulletHell_Component_C*>(UBP_BulletHell_Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BulletHell_Component.BP_BulletHell_Component_C.Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BulletHell_Component_C::Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_Component_C", "Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BulletHell_Component.BP_BulletHell_Component_C.StopAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BulletHell_Component_C::StopAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_Component_C", "StopAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BulletHell_Component.BP_BulletHell_Component_C.StartAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InTargetLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InTargetActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InOneShoot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     OffsetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BulletHell_Component_C::StartAttack(const struct FVector& InTargetLocation, class AActor* InTargetActor, bool InOneShoot, const struct FVector& OffsetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_Component_C", "StartAttack");

	Params::UBP_BulletHell_Component_C_StartAttack_Params Parms{};

	Parms.InTargetLocation = InTargetLocation;
	Parms.InTargetActor = InTargetActor;
	Parms.InOneShoot = InOneShoot;
	Parms.OffsetLocation = OffsetLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BulletHell_Component.BP_BulletHell_Component_C.SUpdateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BulletHell_Component_C::SUpdateTime(bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_Component_C", "SUpdateTime");

	Params::UBP_BulletHell_Component_C_SUpdateTime_Params Parms{};

	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BulletHell_Component.BP_BulletHell_Component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BulletHell_Component_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_Component_C", "ReceiveTick");

	Params::UBP_BulletHell_Component_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BulletHell_Component.BP_BulletHell_Component_C.ExecuteUbergraph_BP_BulletHell_Component
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BulletHell_Component_C::ExecuteUbergraph_BP_BulletHell_Component(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_Component_C", "ExecuteUbergraph_BP_BulletHell_Component");

	Params::UBP_BulletHell_Component_C_ExecuteUbergraph_BP_BulletHell_Component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


