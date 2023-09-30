#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4B (0xF5B - 0xF10)
// BlueprintGeneratedClass BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C
class ABP_Monster_Spore_Outgrowth_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UFMODAudioComponent*                   FE_Spore_Outgrowth_Death_00_0;                     // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Healing_Outgrowth;                              // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Spore_Outgrowth_Death;                          // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0xF30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ST_AlienSporeSphera02;                             // 0xF38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             SDateStart;                                        // 0xF40(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0xF48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeRecover;                                       // 0xF4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxScale;                                          // 0xF50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentRecoverAlpha;                               // 0xF54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRecover;                                         // 0xF58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDeath;                                           // 0xF59(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSetLifeTime;                                     // 0xF5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Monster_Spore_Outgrowth_C* GetDefaultObj();

	void SCheckOwner(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAlive_Result);
	void OnDeath(class ABP_Actor_Spore_Boss_C* K2Node_DynamicCast_AsBP_Actor_Spore_Boss, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBI_CanBeTakeDamage_C> CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_Result, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_1, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result);
	void UpdateRecover(float TmpDeltaSec, float TmpCurrentScale, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Monster_Spore_Outgrowth(int32 EntryPoint, bool CallFunc_RegisterMonsterEventPoint_Result, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FDateTime& CallFunc_Now_ReturnValue, bool CallFunc_IsAlive_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


