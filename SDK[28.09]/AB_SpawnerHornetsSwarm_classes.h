// AnimBlueprintGeneratedClass AB_SpawnerHornetsSwarm.AB_SpawnerHornetsSwarm_C
// Size: 0x4a0 (Inherited: 0x3a0)
struct UAB_SpawnerHornetsSwarm_C : UWTLMonsterPawnAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3d8(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x458(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_SpawnerHornetsSwarm.AB_SpawnerHornetsSwarm_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_AB_SpawnerHornetsSwarm(int32_t EntryPoint); // Function AB_SpawnerHornetsSwarm.AB_SpawnerHornetsSwarm_C.ExecuteUbergraph_AB_SpawnerHornetsSwarm // (Final|UbergraphFunction) // @ game+0x1ad0090
};

