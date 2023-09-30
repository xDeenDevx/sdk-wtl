// AnimBlueprintGeneratedClass AB_Seagull_Enviroment.AB_Seagull_Enviroment_C
// Size: 0x860 (Inherited: 0x2c0)
struct UAB_Seagull_Enviroment_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x398(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3b8(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3d8(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x4e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x560(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x590(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x610(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x640(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6c0(0x30)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x6f0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x768(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x798(0xb0)
	bool bToDown; // 0x848(0x01)
	bool bToUp; // 0x849(0x01)
	bool bChangeFlyingAnim; // 0x84a(0x01)
	char pad_84B[0x1]; // 0x84b(0x01)
	float Timer; // 0x84c(0x04)
	float NextTimeToChangeAnim; // 0x850(0x04)
	struct FRotator ToUpRotation; // 0x854(0x0c)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA(); // Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA // (BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_AB_Seagull_Enviroment(int32_t EntryPoint); // Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.ExecuteUbergraph_AB_Seagull_Enviroment // (Final|UbergraphFunction) // @ game+0x1ad0090
};

