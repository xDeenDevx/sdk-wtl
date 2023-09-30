#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Seagull_Enviroment.AB_Seagull_Enviroment_C
// (None)

class UClass* UAB_Seagull_Enviroment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Seagull_Enviroment_C");

	return Clss;
}


// AB_Seagull_Enviroment_C AB_Seagull_Enviroment.Default__AB_Seagull_Enviroment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Seagull_Enviroment_C* UAB_Seagull_Enviroment_C::GetDefaultObj()
{
	static class UAB_Seagull_Enviroment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Seagull_Enviroment_C*>(UAB_Seagull_Enviroment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Seagull_Enviroment_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Seagull_Enviroment_C", "AnimGraph");

	Params::UAB_Seagull_Enviroment_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Seagull_Enviroment_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Seagull_Enviroment_C", "BlueprintUpdateAnimation");

	Params::UAB_Seagull_Enviroment_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA
// (BlueprintEvent)
// Parameters:

void UAB_Seagull_Enviroment_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Seagull_Enviroment_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.ExecuteUbergraph_AB_Seagull_Enviroment
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Seagull_Enviroment_C::ExecuteUbergraph_AB_Seagull_Enviroment(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Seagull_Enviroment_C", "ExecuteUbergraph_AB_Seagull_Enviroment");

	Params::UAB_Seagull_Enviroment_C_ExecuteUbergraph_AB_Seagull_Enviroment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


