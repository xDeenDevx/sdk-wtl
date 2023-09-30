#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Hornet_Correct.AB_Hornet_Correct_C
// (None)

class UClass* UAB_Hornet_Correct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Hornet_Correct_C");

	return Clss;
}


// AB_Hornet_Correct_C AB_Hornet_Correct.Default__AB_Hornet_Correct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Hornet_Correct_C* UAB_Hornet_Correct_C::GetDefaultObj()
{
	static class UAB_Hornet_Correct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Hornet_Correct_C*>(UAB_Hornet_Correct_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Hornet_Correct.AB_Hornet_Correct_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Hornet_Correct_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Hornet_Correct_C", "AnimGraph");

	Params::UAB_Hornet_Correct_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Hornet_Correct.AB_Hornet_Correct_C.ExecuteUbergraph_AB_Hornet_Correct
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Hornet_Correct_C::ExecuteUbergraph_AB_Hornet_Correct(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Hornet_Correct_C", "ExecuteUbergraph_AB_Hornet_Correct");

	Params::UAB_Hornet_Correct_C_ExecuteUbergraph_AB_Hornet_Correct_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


