#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xFA8 - 0xF10)
// BlueprintGeneratedClass BP_Pawn_Spore.BP_Pawn_Spore_C
class ABP_Pawn_Spore_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_BulletHell_ConeAttack_C*           BP_BulletHell_ConeAttack;                          // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BulletHell_FillConeAttack_C*       BP_BulletHell_FillConeAttack;                      // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Growth_PoisonSpores_ProjectX;                    // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Dust;                                            // 0xF30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0xF38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPAC_SpawnMonsters_C*                 BPAC_SpawnMonsters;                                // 0xF40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_LegendaryMonsterComponent_C*       BP_LegendaryMonsterComponent;                      // 0xF48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0xF50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_StateObject                     State;                                             // 0xF54(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_107F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DesiredHideZ;                                      // 0xF58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredVisibleZ;                                   // 0xF5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentOffsetZ;                                    // 0xF60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelaySpawnMonsters;                                // 0xF64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredOffsetZ;                                    // 0xF68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedOffsetZ;                                      // 0xF6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MyHealthAlpha;                                     // 0xF70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShowTower;                                       // 0xF74(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1089[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ShowTower;                                         // 0xF78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            HideTower;                                         // 0xF88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDeath;                                           // 0xF98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_108B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0xFA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Pawn_Spore_C* GetDefaultObj();

	void CheckStateToTeleport(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateState(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void UpdateOffsetZ(float CallFunc_FClamp_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void ActivateHealthBar();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnAllSupportDead();
	void OnSupportSpawnedFinish();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveDestroyed();
	void OnDeath();
	void OnActionTrigger(class FName ActionName);
	void ExecuteUbergraph_BP_Pawn_Spore(int32 EntryPoint, int32 Temp_int_Variable, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EWTLMonsterActionType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsAlive_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, enum class EWTLMonsterActionType Temp_byte_Variable_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, enum class EWTLMonsterActionType Temp_byte_Variable_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RunAction_Duration, float CallFunc_RunAction_Duration_1, float CallFunc_RunAction_Duration_2, float CallFunc_RunAction_Duration_3, bool CallFunc_IsActive_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, class FName K2Node_Event_ActionName, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchName_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_IsValid_ReturnValue_3, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AIInterface_IsAlive_ReturnValue, enum class EWTLMonsterActionType Temp_byte_Variable_3, enum class EWTLMonsterActionType K2Node_Select_Default, float CallFunc_RunAction_Duration_4);
	void HideTower__DelegateSignature();
	void ShowTower__DelegateSignature();
};

}


