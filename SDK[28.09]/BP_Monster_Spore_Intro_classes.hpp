#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0xFA9 - 0xF10)
// BlueprintGeneratedClass BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C
class ABP_Monster_Spore_Intro_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCapsuleComponent*                     Capsule;                                           // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_ProjectX_AlienFlowerA_01;                       // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Spore_Outgrowth_Death;                          // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FE_Monster_Dino_Roar_01;                           // 0xF30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  State;                                             // 0xF38(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OldState;                                          // 0xF40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ChangeStage;                                       // 0xF48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSporeDeath;                                      // 0xF58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDeath;                                           // 0xF68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1414[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentAbility;                                    // 0xF70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StageID;                                           // 0xF78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxStage;                                          // 0xF7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        AbilityClassList;                                  // 0xF80(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>        ChildrenList;                                      // 0xF90(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_Spawner_ToxicSpitter_C*            ToxicSpitterObject;                                // 0xFA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNeedSpawnToxicSpitter;                           // 0xFA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Monster_Spore_Intro_C* GetDefaultObj();

	void SSpawnToxicSpitter(float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Spawner_ToxicSpitter_C* CallFunc_FinishSpawningActor_ReturnValue);
	void CCreateChildren(float TmpScale, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CUpdateStateChildren(int32 Temp_int_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UpdateShield(bool K2Node_SwitchName_CmpSuccess, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OnDeath(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void SCheckHealth(float TmpStageHealth, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void SUseAbility(float TmpStageHealth, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SChangeState(class FName NewState, bool CallFunc_NotEqual_NameName_ReturnValue);
	void SInit();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void K2_OnBeginPlayFinish();
	void OnStateChange();
	void EventOnDeath();
	void K2_OnClientBulletHit(class APawn* DamageInstigator, struct FHitResult& HitResult, int32 WeaponID, int32 AmmoID);
	void ExecuteUbergraph_BP_Monster_Spore_Intro(int32 EntryPoint, bool CallFunc_RegisterMonsterEventPoint_Result, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsAlive_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* K2Node_Event_DamageInstigator, const struct FHitResult& K2Node_Event_HitResult, int32 K2Node_Event_WeaponID, int32 K2Node_Event_AmmoID, const struct FTransform& CallFunc_MakeTransform_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class ABP_ToxicFountain_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
	void OnSporeDeath__DelegateSignature();
	void ChangeStage__DelegateSignature();
};

}


