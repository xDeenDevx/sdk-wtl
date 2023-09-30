#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C
// (None)

class UClass* UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C");

	return Clss;
}


// AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.Default__AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C* UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C*>(UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_938A8AE74D1E1CEA1E6E67949377A511
// (BlueprintEvent)
// Parameters:

void UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_938A8AE74D1E1CEA1E6E67949377A511()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_938A8AE74D1E1CEA1E6E67949377A511");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_164C8DE2486435D4A0A7D6943DE49EFF
// (BlueprintEvent)
// Parameters:

void UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_164C8DE2486435D4A0A7D6943DE49EFF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_164C8DE2486435D4A0A7D6943DE49EFF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Monster_Spore_Intro_C*   K2Node_DynamicCast_AsBP_Monster_Spore_Intro                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C::ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_Monster_Spore_Intro_C* K2Node_DynamicCast_AsBP_Monster_Spore_Intro, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint");

	Params::UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_Spore_Intro = K2Node_DynamicCast_AsBP_Monster_Spore_Intro;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


