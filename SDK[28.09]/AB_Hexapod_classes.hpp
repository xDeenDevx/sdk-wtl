#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x508 - 0x3A0)
// AnimBlueprintGeneratedClass AB_Hexapod.AB_Hexapod_C
class UAB_Hexapod_C : public UWTLMonsterPawnAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3A8(0xE8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x490(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4C0(0x48)(None)

	static class UClass* StaticClass();
	static class UAB_Hexapod_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_Hexapod(int32 EntryPoint);
};

}


