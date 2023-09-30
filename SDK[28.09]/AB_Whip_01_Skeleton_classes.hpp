#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x810 (0xAC8 - 0x2B8)
// AnimBlueprintGeneratedClass AB_Whip_01_Skeleton.AB_Whip_01_Skeleton_C
class UAB_Whip_01_Skeleton_C : public UAnimInstance
{
public:
	uint8                                        Pad_EBD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x320(0x28)(None)
	uint8                                        Pad_EBE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x350(0x190)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x4E0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x5E8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x6F0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x710(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x818(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x838(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x880(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x900(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x930(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x9B0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x9E0(0xB0)(None)
	bool                                         Active_Value;                                      // 0xA90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ED6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargtPoint;                                        // 0xA94(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PowerIK;                                           // 0xAA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Scale;                                             // 0xAA4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleY;                                            // 0xAB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EventDispatcher_SpikeAttack;                       // 0xAB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAB_Whip_01_Skeleton_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_TransitionResult_E0B36AD94BCE1344BAF81E9C82E12451();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_9C2E0F024D4D3EBC35FDCAB1F2E5C485();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_Fabrik_0FB7F53941928C2FEBDCC1BA0081A9FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Whip_01_Skeleton_AnimGraphNode_ModifyBone_5FEC64FA412BFD0FB27603B45A4DC9CC();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_SpikeAttack();
	void ExecuteUbergraph_AB_Whip_01_Skeleton(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float K2Node_Event_DeltaTimeX, float CallFunc_GetCurveValue_ReturnValue);
	void EventDispatcher_SpikeAttack__DelegateSignature();
};

}


