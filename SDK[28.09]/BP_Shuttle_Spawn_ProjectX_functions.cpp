#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shuttle_Spawn_ProjectX.BP_Shuttle_Spawn_ProjectX_C
// (Actor, Pawn)

class UClass* ABP_Shuttle_Spawn_ProjectX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shuttle_Spawn_ProjectX_C");

	return Clss;
}


// BP_Shuttle_Spawn_ProjectX_C BP_Shuttle_Spawn_ProjectX.Default__BP_Shuttle_Spawn_ProjectX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shuttle_Spawn_ProjectX_C* ABP_Shuttle_Spawn_ProjectX_C::GetDefaultObj()
{
	static class ABP_Shuttle_Spawn_ProjectX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shuttle_Spawn_ProjectX_C*>(ABP_Shuttle_Spawn_ProjectX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Shuttle_Spawn_ProjectX.BP_Shuttle_Spawn_ProjectX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_ProjectX_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_ProjectX_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_ProjectX.BP_Shuttle_Spawn_ProjectX_C.ExecuteUbergraph_BP_Shuttle_Spawn_ProjectX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shuttle_Spawn_ProjectX_C::ExecuteUbergraph_BP_Shuttle_Spawn_ProjectX(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_ProjectX_C", "ExecuteUbergraph_BP_Shuttle_Spawn_ProjectX");

	Params::ABP_Shuttle_Spawn_ProjectX_C_ExecuteUbergraph_BP_Shuttle_Spawn_ProjectX_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


