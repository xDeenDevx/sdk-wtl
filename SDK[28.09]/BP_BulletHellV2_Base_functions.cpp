#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BulletHellV2_Base.BP_BulletHellV2_Base_C
// (Actor)

class UClass* ABP_BulletHellV2_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BulletHellV2_Base_C");

	return Clss;
}


// BP_BulletHellV2_Base_C BP_BulletHellV2_Base.Default__BP_BulletHellV2_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BulletHellV2_Base_C* ABP_BulletHellV2_Base_C::GetDefaultObj()
{
	static class ABP_BulletHellV2_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BulletHellV2_Base_C*>(ABP_BulletHellV2_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BulletHellV2_Base.BP_BulletHellV2_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BulletHellV2_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHellV2_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BulletHellV2_Base.BP_BulletHellV2_Base_C.ExecuteUbergraph_BP_BulletHellV2_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BulletHellV2_Base_C::ExecuteUbergraph_BP_BulletHellV2_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletHellV2_Base_C", "ExecuteUbergraph_BP_BulletHellV2_Base");

	Params::ABP_BulletHellV2_Base_C_ExecuteUbergraph_BP_BulletHellV2_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


