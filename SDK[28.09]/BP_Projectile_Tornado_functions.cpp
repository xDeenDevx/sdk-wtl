#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Tornado.BP_Projectile_Tornado_C
// (Actor)

class UClass* ABP_Projectile_Tornado_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Tornado_C");

	return Clss;
}


// BP_Projectile_Tornado_C BP_Projectile_Tornado.Default__BP_Projectile_Tornado_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Tornado_C* ABP_Projectile_Tornado_C::GetDefaultObj()
{
	static class ABP_Projectile_Tornado_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Tornado_C*>(ABP_Projectile_Tornado_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Projectile_Tornado_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Tornado_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.OnDamageToCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWTLCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MultiplyDamage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Tornado_C::OnDamageToCharacter(class AWTLCharacter* Character, float MultiplyDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Tornado_C", "OnDamageToCharacter");

	Params::ABP_Projectile_Tornado_C_OnDamageToCharacter_Params Parms{};

	Parms.Character = Character;
	Parms.MultiplyDamage = MultiplyDamage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.OnHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Projectile_Tornado_C::OnHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Tornado_C", "OnHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.ExecuteUbergraph_BP_Projectile_Tornado
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWTLCharacter*               K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_MultiplyDamage                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Tornado_C*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Tornado_C::ExecuteUbergraph_BP_Projectile_Tornado(int32 EntryPoint, class AWTLCharacter* K2Node_Event_Character, float K2Node_Event_MultiplyDamage, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Tornado_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Tornado_C", "ExecuteUbergraph_BP_Projectile_Tornado");

	Params::ABP_Projectile_Tornado_C_ExecuteUbergraph_BP_Projectile_Tornado_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_MultiplyDamage = K2Node_Event_MultiplyDamage;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


