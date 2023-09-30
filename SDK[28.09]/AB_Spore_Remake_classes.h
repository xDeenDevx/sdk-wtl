// AnimBlueprintGeneratedClass AB_Spore_Remake.AB_Spore_Remake_C
// Size: 0x499 (Inherited: 0x2c0)
struct UAB_Spore_Remake_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x378(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x418(0x80)
	bool IsStop; // 0x498(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Spore_Remake.AB_Spore_Remake_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Spore_Remake.AB_Spore_Remake_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_AB_Spore_Remake(int32_t EntryPoint); // Function AB_Spore_Remake.AB_Spore_Remake_C.ExecuteUbergraph_AB_Spore_Remake // (Final|UbergraphFunction) // @ game+0x1ad0090
};

