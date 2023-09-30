#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0xF55 - 0xF10)
// BlueprintGeneratedClass BP_Swarm_0.BP_Swarm_0_C
class ABP_Swarm_0_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*              PS_PhaseShift_Looping;                             // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FE_Flies;                                          // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MTargetActor;                                      // 0xF28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0xF30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayFindTargetTime;                               // 0xF34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartLocation;                                     // 0xF38(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedRotation;                                     // 0xF44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredSpeedRotation;                              // 0xF48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeChangeSpeedRotation;                           // 0xF4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeReloadAttack;                                  // 0xF50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeath;                                           // 0xF54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Swarm_0_C* GetDefaultObj();

	void SUpdateAttackEnemy(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AWTLCharacter*>& CallFunc_GetCharactersInRange_ReturnValue, class AWTLCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_ApplyDamageToCharacter_ReturnValue, bool CallFunc_AIInterface_IsAlive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SUpdateSpeedRotation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_SCheckTargetActor_Result, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SUpdateMovement(const struct FVector& CallFunc_GetActorForwardVector_ReturnValue);
	void SUpdateRotation(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_SCheckTargetActor_Result, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_RInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_Constant_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue_1);
	void SCheckTargetActor(bool* Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AIInterface_IsAlive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SFindTarget(int32 TID, float TTarget, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_SCheckTargetActor_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AWTLCharacter*>& CallFunc_GetCharactersInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AWTLCharacter* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDeath();
	void ExecuteUbergraph_BP_Swarm_0(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsAlive_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


