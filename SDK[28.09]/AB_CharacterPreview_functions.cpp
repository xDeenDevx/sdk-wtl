#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_CharacterPreview.AB_CharacterPreview_C
// (None)

class UClass* UAB_CharacterPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_CharacterPreview_C");

	return Clss;
}


// AB_CharacterPreview_C AB_CharacterPreview.Default__AB_CharacterPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_CharacterPreview_C* UAB_CharacterPreview_C::GetDefaultObj()
{
	static class UAB_CharacterPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_CharacterPreview_C*>(UAB_CharacterPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_CharacterPreview.AB_CharacterPreview_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_CharacterPreview_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_CharacterPreview_C", "AnimGraph");

	Params::UAB_CharacterPreview_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_CharacterPreview.AB_CharacterPreview_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8
// (BlueprintEvent)
// Parameters:

void UAB_CharacterPreview_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_CharacterPreview_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_CharacterPreview.AB_CharacterPreview_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12
// (BlueprintEvent)
// Parameters:

void UAB_CharacterPreview_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_CharacterPreview_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_CharacterPreview.AB_CharacterPreview_C.UpdateComplexity
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              BodyType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_CharacterPreview_C::UpdateComplexity(uint8 BodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_CharacterPreview_C", "UpdateComplexity");

	Params::UAB_CharacterPreview_C_UpdateComplexity_Params Parms{};

	Parms.BodyType = BodyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_CharacterPreview.AB_CharacterPreview_C.ExecuteUbergraph_AB_CharacterPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_BodyType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_CharacterPreview_C::ExecuteUbergraph_AB_CharacterPreview(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, uint8 K2Node_Event_BodyType, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_CharacterPreview_C", "ExecuteUbergraph_AB_CharacterPreview");

	Params::UAB_CharacterPreview_C_ExecuteUbergraph_AB_CharacterPreview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Event_BodyType = K2Node_Event_BodyType;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_6 = CallFunc_MakeVector_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_7 = CallFunc_MakeVector_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_8 = CallFunc_MakeVector_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}

}


