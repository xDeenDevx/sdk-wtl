#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_SpawnerHornetsSwarm.AB_SpawnerHornetsSwarm_C
// (None)

class UClass* UAB_SpawnerHornetsSwarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_SpawnerHornetsSwarm_C");

	return Clss;
}


// AB_SpawnerHornetsSwarm_C AB_SpawnerHornetsSwarm.Default__AB_SpawnerHornetsSwarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_SpawnerHornetsSwarm_C* UAB_SpawnerHornetsSwarm_C::GetDefaultObj()
{
	static class UAB_SpawnerHornetsSwarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_SpawnerHornetsSwarm_C*>(UAB_SpawnerHornetsSwarm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_SpawnerHornetsSwarm.AB_SpawnerHornetsSwarm_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_SpawnerHornetsSwarm_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_SpawnerHornetsSwarm_C", "AnimGraph");

	Params::UAB_SpawnerHornetsSwarm_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_SpawnerHornetsSwarm.AB_SpawnerHornetsSwarm_C.ExecuteUbergraph_AB_SpawnerHornetsSwarm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_SpawnerHornetsSwarm_C::ExecuteUbergraph_AB_SpawnerHornetsSwarm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_SpawnerHornetsSwarm_C", "ExecuteUbergraph_AB_SpawnerHornetsSwarm");

	Params::UAB_SpawnerHornetsSwarm_C_ExecuteUbergraph_AB_SpawnerHornetsSwarm_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


