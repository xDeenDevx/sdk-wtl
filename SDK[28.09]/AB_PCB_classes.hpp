#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9F0 (0xCA8 - 0x2B8)
// AnimBlueprintGeneratedClass AB_PCB.AB_PCB_C
class UAB_PCB_C : public UAnimInstance
{
public:
	uint8                                        Pad_D94[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x2F8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x400(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x420(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x528(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x630(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x738(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x840(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x948(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xA50(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xB58(0x108)(None)
	bool                                         Sw0;                                               // 0xC60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sw1;                                               // 0xC61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sw2;                                               // 0xC62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sw3;                                               // 0xC63(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sw4;                                               // 0xC64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sw5;                                               // 0xC65(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sw6;                                               // 0xC66(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sw7;                                               // 0xC67(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        SwitchOffsetValue;                                 // 0xC68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DBD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                MyMesh;                                            // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTestPressed;                                     // 0xC78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TestButtonTranlation;                              // 0xC7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoreHacking_Preview_C*             MyActor;                                           // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset0;                                           // 0xC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset1;                                           // 0xC8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset2;                                           // 0xC90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset3;                                           // 0xC94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset4;                                           // 0xC98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset5;                                           // 0xC9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset6;                                           // 0xCA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset7;                                           // 0xCA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAB_PCB_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_2A63E5CF4A23A6876FA0CA98D439A668();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E589ABC2479AF655901996AEBC92F2CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_EA353CA84A879AAD12C77D8935D81B3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E183A9EE48D01C2C26682D85165E7A59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E7EC8D6D4C042A57DE133C93D1DFA5F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E3833360426710B37A7AED904AC6217C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_DD609A8F470927D1A0323BBC3F70FABD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_78A7C9894F9B09EB549EF1859C5A1AD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_861EA0234BF7F5B6671EE1B744DAD764();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetSwitcherValue(int32 Index, bool Value);
	void TestButtonPressed();
	void ExecuteUbergraph_AB_PCB(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_6, const struct FVector& CallFunc_MakeVector_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue_8, float K2Node_Event_DeltaTimeX, int32 K2Node_CustomEvent_Index, bool K2Node_CustomEvent_Value, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


