#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x4A0 - 0x3A0)
// AnimBlueprintGeneratedClass AB_Hornet_Correct.AB_Hornet_Correct_C
class UAB_Hornet_Correct_C : public UWTLMonsterPawnAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3A8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x420(0x80)(None)

	static class UClass* StaticClass();
	static class UAB_Hornet_Correct_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_Hornet_Correct(int32 EntryPoint);
};

}


