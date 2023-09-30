#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x4A0 - 0x3A0)
// AnimBlueprintGeneratedClass AB_SpawnerHornetsSwarm.AB_SpawnerHornetsSwarm_C
class UAB_SpawnerHornetsSwarm_C : public UWTLMonsterPawnAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3D8(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x458(0x48)(None)

	static class UClass* StaticClass();
	static class UAB_SpawnerHornetsSwarm_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_SpawnerHornetsSwarm(int32 EntryPoint);
};

}


