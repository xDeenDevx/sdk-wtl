#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Devourer_Projectile.BP_Devourer_Projectile_C
// (Actor)

class UClass* ABP_Devourer_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Devourer_Projectile_C");

	return Clss;
}


// BP_Devourer_Projectile_C BP_Devourer_Projectile.Default__BP_Devourer_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Devourer_Projectile_C* ABP_Devourer_Projectile_C::GetDefaultObj()
{
	static class ABP_Devourer_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Devourer_Projectile_C*>(ABP_Devourer_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        SM_AlienSpiderCecoaliensa_Projectile                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Devourer_Projectile_C::GetMesh(class UStaticMeshComponent** SM_AlienSpiderCecoaliensa_Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Devourer_Projectile_C", "GetMesh");

	Params::ABP_Devourer_Projectile_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SM_AlienSpiderCecoaliensa_Projectile != nullptr)
		*SM_AlienSpiderCecoaliensa_Projectile = Parms.SM_AlienSpiderCecoaliensa_Projectile;

}


// Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Devourer_Projectile_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Devourer_Projectile_C", "ReceiveTick");

	Params::ABP_Devourer_Projectile_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Devourer_Projectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Devourer_Projectile_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.OnBloodSplatter
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Devourer_Projectile_C::OnBloodSplatter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Devourer_Projectile_C", "OnBloodSplatter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ExecuteUbergraph_BP_Devourer_Projectile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Devourer_Projectile_C::ExecuteUbergraph_BP_Devourer_Projectile(int32 EntryPoint, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Devourer_Projectile_C", "ExecuteUbergraph_BP_Devourer_Projectile");

	Params::ABP_Devourer_Projectile_C_ExecuteUbergraph_BP_Devourer_Projectile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_1 = CallFunc_WTLSwitchHasAuthority_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_2 = CallFunc_WTLSwitchHasAuthority_Result_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


