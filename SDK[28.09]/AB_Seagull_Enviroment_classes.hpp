#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5A8 (0x860 - 0x2B8)
// AnimBlueprintGeneratedClass AB_Seagull_Enviroment.AB_Seagull_Enviroment_C
class UAB_Seagull_Enviroment_C : public UAnimInstance
{
public:
	uint8                                        Pad_108C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x348(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x370(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x398(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3B8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x3D8(0x108)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4E0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x560(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x590(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x610(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x640(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x6C0(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x6F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x768(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x798(0xB0)(None)
	bool                                         bToDown;                                           // 0x848(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bToUp;                                             // 0x849(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bChangeFlyingAnim;                                 // 0x84A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_109D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timer;                                             // 0x84C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NextTimeToChangeAnim;                              // 0x850(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ToUpRotation;                                      // 0x854(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAB_Seagull_Enviroment_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA();
	void ExecuteUbergraph_AB_Seagull_Enviroment(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


