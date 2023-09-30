#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B74 (0x1EC4 - 0x350)
// AnimBlueprintGeneratedClass AB_CharacterPreview.AB_CharacterPreview_C
class UAB_CharacterPreview_C : public UWTLCharacterPreviewAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x358(0xC0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x418(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_3;                          // 0x438(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0x528(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x618(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x708(0x80)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x788(0xE8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x870(0x20)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x890(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0xA70(0x1E0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xC50(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xC80(0xE8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xD68(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xE08(0x80)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0xE88(0xD0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0xF58(0xF0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0x1048(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x1150(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x1258(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x1360(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x1468(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x1570(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x1678(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x1780(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x1888(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x1990(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1A98(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1BA0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1CA8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1DB0(0x108)(None)
	struct FVector                               BackpackTranslation;                               // 0x1EB8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAB_CharacterPreview_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12();
	void UpdateComplexity(uint8 BodyType);
	void ExecuteUbergraph_AB_CharacterPreview(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, uint8 K2Node_Event_BodyType, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_8);
};

}


