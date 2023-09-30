#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF60 - 0xF10)
// BlueprintGeneratedClass BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C
class ABP_Monster_ToxicSpitter_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USpotLightComponent*                   SpotLight;                                         // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BackMesh;                                          // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow1;                                            // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AWTLCharacter*                         EnemyTarget;                                       // 0xF30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0xF38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAttack;                                          // 0xF3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_128C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FindDistance;                                      // 0xF40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeath;                                           // 0xF44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_128D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeReloadAttack;                                  // 0xF48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTimeReloadAttack;                               // 0xF4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReadyToAttack;                                   // 0xF50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_128E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MatInst;                                           // 0xF58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Monster_ToxicSpitter_C* GetDefaultObj();

	void CVFXUpdateHealth(const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, float CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_3, const struct FVector& CallFunc_VLerp_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
	void UpdateFarAttack(TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Projectile_Toxic_Puddle_C* CallFunc_FinishSpawningActor_ReturnValue);
	void FindEnemy(float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AWTLCharacter*>& CallFunc_GetListCharactersInRange_ResultList, enum class EWTLBPCheckResult CallFunc_GetListCharactersInRange_Result, enum class EWTLBPCheckResult CallFunc_GetClosestCharacterForMonster_Result, class AWTLCharacter* CallFunc_GetClosestCharacterForMonster_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDeath();
	void ExecuteUbergraph_BP_Monster_ToxicSpitter(int32 EntryPoint, bool CallFunc_RegisterMonsterEventPoint_Result, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsAlive_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


