#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2A8 - 0x220)
// BlueprintGeneratedClass BP_BirdFly_001.BP_BirdFly_001_C
class ABP_BirdFly_001_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Bird_4;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USplineComponent*                      Spline_4;                                          // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bird_3;                                            // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USplineComponent*                      Spline_3;                                          // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bird_2;                                            // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USplineComponent*                      Spline_2;                                          // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bird_1;                                            // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USplineComponent*                      Spline_1;                                          // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequence*                         AnimFly;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedRotation_1;                                   // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedRotation_2;                                   // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedRotation_3;                                   // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedRotation_4;                                   // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          Traectory_1;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          Traectory_2;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          Traectory_3;                                       // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFlying;                                          // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rate;                                              // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BirdFly_001_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BirdFly_001(int32 EntryPoint, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_GetVectorValue_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FVector& CallFunc_GetVectorValue_ReturnValue_1, const struct FVector& CallFunc_GetVectorValue_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FVector& CallFunc_GetVectorValue_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue_2, int32 CallFunc_RandomInteger_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_4, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, float CallFunc_Conv_IntToFloat_ReturnValue_4, int32 CallFunc_RandomInteger_ReturnValue_5, int32 CallFunc_RandomInteger_ReturnValue_6, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue_7, int32 CallFunc_RandomInteger_ReturnValue_8, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_Conv_IntToFloat_ReturnValue_8, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_1, int32 CallFunc_RandomInteger_ReturnValue_9, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_2, float CallFunc_Conv_IntToFloat_ReturnValue_9, int32 CallFunc_RandomInteger_ReturnValue_10, int32 CallFunc_RandomInteger_ReturnValue_11, float CallFunc_Conv_IntToFloat_ReturnValue_10, float CallFunc_Conv_IntToFloat_ReturnValue_11, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult_3);
};

}


