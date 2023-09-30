#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12CC (0x15CC - 0x300)
// AnimBlueprintGeneratedClass AB_Female_MainMenu.AB_Female_MainMenu_C
class UAB_Female_MainMenu_C : public UWTLNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x308(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3D0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x450(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x4D0(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x598(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x660(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x6E0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7E8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x808(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x828(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x858(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x8D8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x9E0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0xAE8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0xBF0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0xCF8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0xE00(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xF08(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x1010(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1118(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1220(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1328(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1430(0x108)(None)
	bool                                         IK_Aktiv;                                          // 0x1538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_137E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Turn;                                              // 0x153C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PoseDriver;                                        // 0x1540(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Alpha;                                             // 0x1544(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_137F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FScaleRibCage;                                     // 0x1548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FScaleNeck;                                        // 0x154C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FScaleHead;                                        // 0x1550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FScaleHands;                                       // 0x1554(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FScaleFeet;                                        // 0x1558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Complexion;                                        // 0x155C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ScaleRibCageVector;                                // 0x1560(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InvertScaleRibCageVector;                          // 0x156C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BackpackTranslation;                               // 0x1578(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ScaleNeckVector;                                   // 0x1584(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ScaleHeadVector;                                   // 0x1590(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ScaleHandsVector;                                  // 0x159C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InvertScaleHandsVector;                            // 0x15A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ScaleFeetVector;                                   // 0x15B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InvertScaleFeetVector;                             // 0x15C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAB_Female_MainMenu_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_Female_MainMenu(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float K2Node_Event_DeltaTimeX, class ABP_Character_MainMenu_C* K2Node_DynamicCast_AsBP_Character_Main_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_7, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_8);
};

}


