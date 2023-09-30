#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E1 (0x499 - 0x2B8)
// AnimBlueprintGeneratedClass AB_Spore_Remake.AB_Spore_Remake_C
class UAB_Spore_Remake_C : public UAnimInstance
{
public:
	uint8                                        Pad_FEE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2F8(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x378(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x418(0x80)(None)
	bool                                         IsStop;                                            // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAB_Spore_Remake_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_Spore_Remake(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_Monster_Spore_Intro_C* K2Node_DynamicCast_AsBP_Monster_Spore_Intro, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_NotEqual_NameName_ReturnValue);
};

}


