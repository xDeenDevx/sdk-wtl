// AnimBlueprintGeneratedClass AB_AlienJellyfish_01.AB_AlienJellyfish_01_C
// Size: 0x4c0 (Inherited: 0x2c0)
struct UAB_AlienJellyfish_01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x378(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3f8(0xc0)
	float AlphaDamage; // 0x4b8(0x04)
	float OldHealth; // 0x4bc(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_AlienJellyfish_01.AB_AlienJellyfish_01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_AlienJellyfish_01.AB_AlienJellyfish_01_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_AB_AlienJellyfish_01(int32_t EntryPoint); // Function AB_AlienJellyfish_01.AB_AlienJellyfish_01_C.ExecuteUbergraph_AB_AlienJellyfish_01 // (Final|UbergraphFunction) // @ game+0x1ad0090
};

