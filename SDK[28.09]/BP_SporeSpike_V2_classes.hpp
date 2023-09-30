#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x27C - 0x220)
// BlueprintGeneratedClass BP_SporeSpike_V2.BP_SporeSpike_V2_C
class ABP_SporeSpike_V2_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UFMODAudioComponent*                   FE_RockFall_01;                                    // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FE_Monster_CecoaliensaBrute_FootStep;              // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Whip_01;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAB_Whip_01_Skeleton_C*                MyAnimInstance;                                    // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocationFound;                                     // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1020[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsUseInitLocation;                                 // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1021[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocation;                                    // 0x264(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               TmpLocation;                                       // 0x270(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SporeSpike_V2_C* GetDefaultObj();

	void Init(const struct FVector& TargetLocation);
	void ReceiveBeginPlay();
	void OnSpikeAttack();
	void OnAttackLocation(const struct FVector& Location);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_SporeSpike_V2(int32 EntryPoint, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, TArray<class AActor*>& Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAB_Whip_01_Skeleton_C* K2Node_DynamicCast_AsAB_Whip_01_Skeleton, bool K2Node_DynamicCast_bSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, const struct FVector& K2Node_CustomEvent_Location, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_RandomFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, float CallFunc_VSize_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1);
};

}


