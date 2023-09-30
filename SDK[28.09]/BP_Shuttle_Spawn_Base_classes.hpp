#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x1240 - 0x11A0)
// BlueprintGeneratedClass BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C
class ABP_Shuttle_Spawn_Base_C : public ABP_MonsterBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Shuttle_Tail;                                   // 0x11A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_LandedExplosion_V01;                            // 0x11B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Atmospheric_Explosion_V1;                       // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_AirFriction_V01;                                // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MonsterSpawn;                                      // 0x11C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinLevelSpawn;                                     // 0x11D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxLevelSpawn;                                     // 0x11D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CountMonster;                                      // 0x11D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxAliveMonsters;                                  // 0x11DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StealthMode;                                       // 0x11E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_148D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaSec;                                          // 0x11E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLanded;                                          // 0x11E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         IsBeginPlayFinish;                                 // 0x11E9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         DestroySpawn;                                      // 0x11EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_148F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayDestroy;                                      // 0x11EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRadius;                                      // 0x11F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageExplosion;                                   // 0x11F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActivationStarted;                               // 0x11F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1492[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurationActivation;                                // 0x11FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayActivation;                                   // 0x1200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0x1204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AddTag;                                            // 0x1208(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActivationFinish;                                // 0x1210(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         IsSpawnMonster;                                    // 0x1211(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1493[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelaySpawnMonster;                                 // 0x1214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDestroySpawn;                                    // 0x1218(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1494[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_MonsterBase_C*>             MyAliveMonsters;                                   // 0x1220(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_MonsterBase_C*>             TempList;                                          // 0x1230(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Shuttle_Spawn_Base_C* GetDefaultObj();

	void OnRep_IsDestroySpawn(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_IsActivationFinish(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_IsActivationStarted(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_IsBeginPlayFinish(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_IsLanded(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void COnHitLanded();
	void SOnHitLanded();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void SOnBeginPlayFinish();
	void COnBeginPlayFinish();
	void SOnDamageToCharacter(class AWTLCharacter* Character);
	void SOnActivationStarted();
	void COnActivationStarted();
	void SOnActivationFinish();
	void COnActivationFinish();
	void SUpdateSpawnMonster();
	void SOnSpawnMonster();
	void CheckMyAliveMonsters();
	void SOnDestroySpawn();
	void COnDestroySpawn();
	void ExecuteUbergraph_BP_Shuttle_Spawn_Base(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, int32 Temp_int_Variable, TArray<class AActor*>& K2Node_MakeArray_Array_1, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsInSafeZone_ReturnValue, bool CallFunc_AIInterface_IsAlive_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AWTLCharacter* K2Node_CustomEvent_Character, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_ApplyDamageToCharacter_ReturnValue, class ABP_MonsterBase_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1);
};

}


