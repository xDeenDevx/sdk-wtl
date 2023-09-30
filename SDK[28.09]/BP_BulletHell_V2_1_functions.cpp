#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BulletHell_V2_1.BP_BulletHell_V2_1_C
// (Actor)

class UClass* ABP_BulletHell_V2_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BulletHell_V2_1_C");

	return Clss;
}


// BP_BulletHell_V2_1_C BP_BulletHell_V2_1.Default__BP_BulletHell_V2_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BulletHell_V2_1_C* ABP_BulletHell_V2_1_C::GetDefaultObj()
{
	static class ABP_BulletHell_V2_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BulletHell_V2_1_C*>(ABP_BulletHell_V2_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BulletHell_V2_1.BP_BulletHell_V2_1_C.OnDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InHitActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InImpactPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BulletHell_V2_1_C::OnDestroy(class AActor* InHitActor, const struct FVector& InImpactPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_V2_1_C", "OnDestroy");

	Params::ABP_BulletHell_V2_1_C_OnDestroy_Params Parms{};

	Parms.InHitActor = InHitActor;
	Parms.InImpactPoint = InImpactPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BulletHell_V2_1.BP_BulletHell_V2_1_C.ExecuteUbergraph_BP_BulletHell_V2_1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_inHitActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_inImpactPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWTLCharacter*               K2Node_DynamicCast_AsWTLCharacter                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BulletHell_V2_1_C::ExecuteUbergraph_BP_BulletHell_V2_1(int32 EntryPoint, class AActor* K2Node_Event_inHitActor, const struct FVector& K2Node_Event_inImpactPoint, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHell_V2_1_C", "ExecuteUbergraph_BP_BulletHell_V2_1");

	Params::ABP_BulletHell_V2_1_C_ExecuteUbergraph_BP_BulletHell_V2_1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_inHitActor = K2Node_Event_inHitActor;
	Parms.K2Node_Event_inImpactPoint = K2Node_Event_inImpactPoint;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsWTLCharacter = K2Node_DynamicCast_AsWTLCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


