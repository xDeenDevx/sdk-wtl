#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass BP_SporeSpike_Spawner.BP_SporeSpike_Spawner_C
class ABP_SporeSpike_Spawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AWTLCharacter*>                 CharactersList;                                    // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        CurrentTestID;                                     // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CountHealPoint;                                    // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SporeSpike_Spawner_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SporeSpike_Spawner(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_1, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, class ABP_SporeSpike_V2_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsAlive_Result, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AWTLCharacter* CallFunc_Array_Get_Item, TArray<class AWTLCharacter*>& CallFunc_GetListCharactersInRange_ResultList, enum class EWTLBPCheckResult CallFunc_GetListCharactersInRange_Result, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AIInterface_IsAlive_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, class ABP_SporeSpike_V2_C* CallFunc_FinishSpawningActor_ReturnValue_1, class FName Temp_name_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TArray<class ABP_HealPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class ABP_HealPoint_C* CallFunc_Array_Get_Item_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class ABP_HealPoint_C* CallFunc_FinishSpawningActor_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


