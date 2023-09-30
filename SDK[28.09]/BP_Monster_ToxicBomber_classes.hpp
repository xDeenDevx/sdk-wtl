#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0xF55 - 0xF10)
// BlueprintGeneratedClass BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C
class ABP_Monster_ToxicBomber_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Arrow1;                                            // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  State;                                             // 0xF20(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0xF28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeReload;                                        // 0xF2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSpawn;                                         // 0xF30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeReload;                                 // 0xF34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeSpawn;                                  // 0xF38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeDelayShot;                              // 0xF3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeDelayShot;                                     // 0xF40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeShot;                                          // 0xF44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeShot;                                   // 0xF48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CState;                                            // 0xF4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeath;                                           // 0xF54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Monster_ToxicBomber_C* GetDefaultObj();

	void SFindCharacter(bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AWTLCharacter*>& CallFunc_GetListCharactersInRange_ResultList, enum class EWTLBPCheckResult CallFunc_GetListCharactersInRange_Result, enum class EWTLBPCheckResult CallFunc_GetClosestCharacterForMonster_Result, class AWTLCharacter* CallFunc_GetClosestCharacterForMonster_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void UpdateCollision(bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void SUpdateState(float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<class ABP_BubbleSplash_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_3, bool K2Node_SwitchName_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnActionTrigger(class FName ActionName);
	void OnDeath();
	void ExecuteUbergraph_BP_Monster_ToxicBomber(int32 EntryPoint, bool CallFunc_RegisterMonsterEventPoint_Result, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_Event_ActionName, bool K2Node_SwitchName_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Projectile_BubbleSplash_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_3, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue);
};

}


