#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C
// (None)

class UClass* UAB_Whip_01_Skeleton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Whip_01_Skeleton_C");

	return Clss;
}


// AB_Whip_01_Skeleton_C AB_Whip_01_Skeleton.Default__AB_Whip_01_Skeleton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Whip_01_Skeleton_C* UAB_Whip_01_Skeleton_C::GetDefaultObj()
{
	static class UAB_Whip_01_Skeleton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Whip_01_Skeleton_C*>(UAB_Whip_01_Skeleton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Whip_01_Skeleton_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "AnimGraph");

	Params::UAB_Whip_01_Skeleton_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_TransitionResult_E0B36AD94BCE1344BAF81E9C82E12451
// (BlueprintEvent)
// Parameters:

void UAB_Whip_01_Skeleton_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_TransitionResult_E0B36AD94BCE1344BAF81E9C82E12451()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_TransitionResult_E0B36AD94BCE1344BAF81E9C82E12451");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_9C2E0F024D4D3EBC35FDCAB1F2E5C485
// (BlueprintEvent)
// Parameters:

void UAB_Whip_01_Skeleton_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_9C2E0F024D4D3EBC35FDCAB1F2E5C485()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_9C2E0F024D4D3EBC35FDCAB1F2E5C485");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_Fabrik_0FB7F53941928C2FEBDCC1BA0081A9FD
// (BlueprintEvent)
// Parameters:

void UAB_Whip_01_Skeleton_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_Fabrik_0FB7F53941928C2FEBDCC1BA0081A9FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_Fabrik_0FB7F53941928C2FEBDCC1BA0081A9FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_5FEC64FA412BFD0FB27603B45A4DC9CC
// (BlueprintEvent)
// Parameters:

void UAB_Whip_01_Skeleton_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_5FEC64FA412BFD0FB27603B45A4DC9CC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_5FEC64FA412BFD0FB27603B45A4DC9CC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Whip_01_Skeleton_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "BlueprintUpdateAnimation");

	Params::UAB_Whip_01_Skeleton_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.AnimNotify_SpikeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_Whip_01_Skeleton_C::AnimNotify_SpikeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "AnimNotify_SpikeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.ExecuteUbergraph_AB_Whip_01_Skeleton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Whip_01_Skeleton_C::ExecuteUbergraph_AB_Whip_01_Skeleton(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float K2Node_Event_DeltaTimeX, float CallFunc_GetCurveValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "ExecuteUbergraph_AB_Whip_01_Skeleton");

	Params::UAB_Whip_01_Skeleton_C_ExecuteUbergraph_AB_Whip_01_Skeleton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C.EventDispatcher_SpikeAttack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_Whip_01_Skeleton_C::EventDispatcher_SpikeAttack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Whip_01_Skeleton_C", "EventDispatcher_SpikeAttack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


