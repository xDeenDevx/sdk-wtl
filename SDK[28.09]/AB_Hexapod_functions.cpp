#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Hexapod.AB_Hexapod_C
// (None)

class UClass* UAB_Hexapod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Hexapod_C");

	return Clss;
}


// AB_Hexapod_C AB_Hexapod.Default__AB_Hexapod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Hexapod_C* UAB_Hexapod_C::GetDefaultObj()
{
	static class UAB_Hexapod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Hexapod_C*>(UAB_Hexapod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Hexapod.AB_Hexapod_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Hexapod_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Hexapod_C", "AnimGraph");

	Params::UAB_Hexapod_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Hexapod.AB_Hexapod_C.ExecuteUbergraph_AB_Hexapod
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Hexapod_C::ExecuteUbergraph_AB_Hexapod(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Hexapod_C", "ExecuteUbergraph_AB_Hexapod");

	Params::UAB_Hexapod_C_ExecuteUbergraph_AB_Hexapod_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

