// AnimBlueprintGeneratedClass AB_Hexapod.AB_Hexapod_C
// Size: 0x508 (Inherited: 0x3a0)
struct UAB_Hexapod_C : UWTLMonsterPawnAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3a8(0xe8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x490(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x4c0(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Hexapod.AB_Hexapod_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_AB_Hexapod(int32_t EntryPoint); // Function AB_Hexapod.AB_Hexapod_C.ExecuteUbergraph_AB_Hexapod // (Final|UbergraphFunction) // @ game+0x1ad0090
};

