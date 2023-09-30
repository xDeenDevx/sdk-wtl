#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x47C - 0x424)
// BlueprintGeneratedClass BP_EventPoint_Spore.BP_EventPoint_Spore_C
class ABP_EventPoint_Spore_C : public ABP_EventPoint_SpawnMonsters_C
{
public:
	uint8                                        Pad_2D5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPostProcessComponent*                 PostProcess;                                       // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorSpore;                                        // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EventTag;                                          // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpawnPointForMonster_C*>    SpawnPointList;                                    // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         IsBeginSpawnSupport;                               // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEndSpawnSupport;                                 // 0x461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIDSpawnPoint;                               // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelaySpawnTime;                                    // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentDelaySpawnTime;                             // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayCheck;                                        // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReloadThornsAttack;                                // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentReloadThornsAttack;                         // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EventPoint_Spore_C* GetDefaultObj();

	void SGetRandomClosestCharacter(int32 CountCharacters, bool* Valid, class AWTLCharacter** Character, int32 TmpCharacterID, const TArray<class AWTLCharacter*>& TmpCharacterList, float TmpStartDistance, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Clamp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AWTLCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AWTLCharacter*>& CallFunc_GetCharactersInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class AWTLCharacter* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void SUpdateThornsAttack(const struct FVector& TmpDirection, const struct FVector& TmpSpawnLocation, float TmpHealthAlpha, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UNavigationSystemV1* CallFunc_GetNavigationSystem_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Projectile_Thorns_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, bool CallFunc_SGetRandomClosestCharacter_Valid, class AWTLCharacter* CallFunc_SGetRandomClosestCharacter_Character, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealthAlpha_Result);
	void CheckSpore(bool* Result, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result);
	void UpdateSpawnSupport(const struct FRotator& TmpSpawnTransform, bool TmpIsReadyToSpawn, const struct FVector& TmpSpawnLocation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 Temp_int_Variable, class ABP_Support_SporeV2_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class ABP_SpawnPointForMonster_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void CheckSupport(float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, TArray<class ABP_Support_Spore_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	bool CheckSpawnPointList(TArray<class ABP_SpawnPointForMonster_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawnProjectX(const struct FVector& LSpawnLocation, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Actor_Spore_Boss_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnVFXObjects();
	void ReceiveTick(float DeltaSeconds);
	void K2_OnFinish(bool Successful);
	void OnMyMonsterDeath(class AWTLMonsterPawn* Monster);
	void ReceiveBeginPlay();
	void K2_OnStart();
	void ExecuteUbergraph_BP_EventPoint_Spore(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_Successful, class AWTLMonsterPawn* K2Node_CustomEvent_Monster, bool CallFunc_CheckSpawnPointList_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool CallFunc_CheckSpore_Result, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


