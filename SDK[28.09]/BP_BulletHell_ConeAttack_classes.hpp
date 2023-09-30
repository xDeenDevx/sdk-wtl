#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x13C - 0x105)
// BlueprintGeneratedClass BP_BulletHell_ConeAttack.BP_BulletHell_ConeAttack_C
class UBP_BulletHell_ConeAttack_C : public UBP_BulletHell_Component_C
{
public:
	uint8                                        Pad_121E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        SpreadAngle;                                       // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartAngle;                                        // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Axis;                                              // 0x118(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Direction;                                         // 0x124(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStartShot;                                       // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1223[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumShots;                                          // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentNumShots;                                   // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_BulletHell_ConeAttack_C* GetDefaultObj();

	void Shot(const struct FVector& TmpTargetLocation, const struct FVector& TmpStartLocation, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_CalculationOfTheLead_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_2);
	void SUpdateAttack();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_BulletHell_ConeAttack(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


