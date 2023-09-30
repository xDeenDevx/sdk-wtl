#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_PCB.AB_PCB_C
// (None)

class UClass* UAB_PCB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_PCB_C");

	return Clss;
}


// AB_PCB_C AB_PCB.Default__AB_PCB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_PCB_C* UAB_PCB_C::GetDefaultObj()
{
	static class UAB_PCB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_PCB_C*>(UAB_PCB_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_PCB.AB_PCB_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_PCB_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "AnimGraph");

	Params::UAB_PCB_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_2A63E5CF4A23A6876FA0CA98D439A668
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_2A63E5CF4A23A6876FA0CA98D439A668()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_2A63E5CF4A23A6876FA0CA98D439A668");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E589ABC2479AF655901996AEBC92F2CC
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E589ABC2479AF655901996AEBC92F2CC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E589ABC2479AF655901996AEBC92F2CC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_EA353CA84A879AAD12C77D8935D81B3A
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_EA353CA84A879AAD12C77D8935D81B3A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_EA353CA84A879AAD12C77D8935D81B3A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E183A9EE48D01C2C26682D85165E7A59
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E183A9EE48D01C2C26682D85165E7A59()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E183A9EE48D01C2C26682D85165E7A59");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E7EC8D6D4C042A57DE133C93D1DFA5F3
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E7EC8D6D4C042A57DE133C93D1DFA5F3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E7EC8D6D4C042A57DE133C93D1DFA5F3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E3833360426710B37A7AED904AC6217C
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E3833360426710B37A7AED904AC6217C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E3833360426710B37A7AED904AC6217C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_DD609A8F470927D1A0323BBC3F70FABD
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_DD609A8F470927D1A0323BBC3F70FABD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_DD609A8F470927D1A0323BBC3F70FABD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_78A7C9894F9B09EB549EF1859C5A1AD0
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_78A7C9894F9B09EB549EF1859C5A1AD0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_78A7C9894F9B09EB549EF1859C5A1AD0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_861EA0234BF7F5B6671EE1B744DAD764
// (BlueprintEvent)
// Parameters:

void UAB_PCB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_861EA0234BF7F5B6671EE1B744DAD764()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_861EA0234BF7F5B6671EE1B744DAD764");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PCB_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "BlueprintUpdateAnimation");

	Params::UAB_PCB_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_PCB.AB_PCB_C.SetSwitcherValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_PCB_C::SetSwitcherValue(int32 Index, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "SetSwitcherValue");

	Params::UAB_PCB_C_SetSwitcherValue_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_PCB.AB_PCB_C.TestButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_PCB_C::TestButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "TestButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_PCB.AB_PCB_C.ExecuteUbergraph_AB_PCB
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_PCB_C::ExecuteUbergraph_AB_PCB(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_6, const struct FVector& CallFunc_MakeVector_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue_8, float K2Node_Event_DeltaTimeX, int32 K2Node_CustomEvent_Index, bool K2Node_CustomEvent_Value, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_PCB_C", "ExecuteUbergraph_AB_PCB");

	Params::UAB_PCB_C_ExecuteUbergraph_AB_PCB_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue_6 = CallFunc_MakeVector_ReturnValue_6;
	Parms.CallFunc_MakeVector_ReturnValue_7 = CallFunc_MakeVector_ReturnValue_7;
	Parms.CallFunc_MakeVector_ReturnValue_8 = CallFunc_MakeVector_ReturnValue_8;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


