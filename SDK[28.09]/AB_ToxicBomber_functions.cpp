#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_ToxicBomber.AB_ToxicBomber_C
// (None)

class UClass* UAB_ToxicBomber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_ToxicBomber_C");

	return Clss;
}


// AB_ToxicBomber_C AB_ToxicBomber.Default__AB_ToxicBomber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_ToxicBomber_C* UAB_ToxicBomber_C::GetDefaultObj()
{
	static class UAB_ToxicBomber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_ToxicBomber_C*>(UAB_ToxicBomber_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_ToxicBomber.AB_ToxicBomber_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_ToxicBomber_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ToxicBomber_C", "AnimGraph");

	Params::UAB_ToxicBomber_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_ToxicBomber.AB_ToxicBomber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ToxicBomber_AnimGraphNode_TransitionResult_8C21413F43D6A6C2F4851DB47CBFAA12
// (BlueprintEvent)
// Parameters:

void UAB_ToxicBomber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ToxicBomber_AnimGraphNode_TransitionResult_8C21413F43D6A6C2F4851DB47CBFAA12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ToxicBomber_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ToxicBomber_AnimGraphNode_TransitionResult_8C21413F43D6A6C2F4851DB47CBFAA12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_ToxicBomber.AB_ToxicBomber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ToxicBomber_AnimGraphNode_TransitionResult_8FAAF5674B9CD571B153E18131B5B795
// (BlueprintEvent)
// Parameters:

void UAB_ToxicBomber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ToxicBomber_AnimGraphNode_TransitionResult_8FAAF5674B9CD571B153E18131B5B795()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ToxicBomber_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ToxicBomber_AnimGraphNode_TransitionResult_8FAAF5674B9CD571B153E18131B5B795");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_ToxicBomber.AB_ToxicBomber_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_ToxicBomber_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ToxicBomber_C", "BlueprintUpdateAnimation");

	Params::UAB_ToxicBomber_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_ToxicBomber.AB_ToxicBomber_C.ExecuteUbergraph_AB_ToxicBomber
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Monster_ToxicBomber_C*   K2Node_DynamicCast_AsBP_Monster_Toxic_Bomber                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_ToxicBomber_C::ExecuteUbergraph_AB_ToxicBomber(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_Monster_ToxicBomber_C* K2Node_DynamicCast_AsBP_Monster_Toxic_Bomber, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ToxicBomber_C", "ExecuteUbergraph_AB_ToxicBomber");

	Params::UAB_ToxicBomber_C_ExecuteUbergraph_AB_ToxicBomber_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_Toxic_Bomber = K2Node_DynamicCast_AsBP_Monster_Toxic_Bomber;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


