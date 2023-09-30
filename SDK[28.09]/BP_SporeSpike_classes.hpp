#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass BP_SporeSpike.BP_SporeSpike_C
class ABP_SporeSpike_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                SK_Whip_01;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAB_Whip_01_Skeleton_C*                MyAnimInstance;                                    // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x240(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocationFound;                                     // 0x24C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F0C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SporeSpike_C* GetDefaultObj();

	void SetAttackLocationn(const struct FVector& Location);
	void OnSpikeAttack();
	void OnAttackLocation(const struct FVector& Location);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_SporeSpike(int32 EntryPoint, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, const struct FVector& K2Node_CustomEvent_Location, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAB_Whip_01_Skeleton_C* K2Node_DynamicCast_AsAB_Whip_01_Skeleton, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


