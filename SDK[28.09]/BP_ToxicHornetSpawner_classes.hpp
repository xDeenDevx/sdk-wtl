#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C
class ABP_ToxicHornetSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentRespawnTime;                                // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpawnPointForMonster_C*>    SpawnPointList;                                    // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         IsAvailableSpawningPoints;                         // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_567[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RespawnTime;                                       // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        HornetSpawnerList;                                 // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        Difficulty;                                        // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActivated;                                       // 0x264(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_569[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SplineToUp_C*                      MyTentacle;                                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTentacleStop;                                    // 0x270(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CountIterationSpawn;                               // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ToxicHornetSpawner_C* GetDefaultObj();

	void UpdateGravity(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AWTLCharacter*>& CallFunc_GetListCharactersInRange_ResultList, enum class EWTLBPCheckResult CallFunc_GetListCharactersInRange_Result, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class AWTLCharacter* CallFunc_Array_Get_Item, bool CallFunc_AIInterface_IsAlive_ReturnValue);
	void CUpdateTentacle(bool CallFunc_IsValid_ReturnValue);
	void SCalculateRespawnTime(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SUpdateDifficulty(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealthAlpha_Result, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsAlive_Result, float CallFunc_FClamp_ReturnValue);
	void SUpdateSpawn(int32 TmpSpawnPointID, bool TmpIsCanSpawn, bool TmpIsNeedSpawn, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EWTLBPCheckResult CallFunc_GetMonsterLevelByCharactersInfo_Result, int32 CallFunc_GetMonsterLevelByCharactersInfo_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_SpawnPointForMonster_C* CallFunc_Array_Get_Item, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AWTLMonsterPawn* CallFunc_SpawnMonster_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class ABP_Support_SporeV2_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	bool SInitSpawnPointList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class ABP_SpawnPointForMonster_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_SpawnPointForMonster_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_SpawnPointForMonster_WithArrow_C* K2Node_DynamicCast_AsBP_Spawn_Point_for_Monster_with_Arrow, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void OnNextStage();
	void OnTentacleUP();
	void ExecuteUbergraph_BP_ToxicHornetSpawner(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SInitSpawnPointList_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Actor_Spore_Boss_C* K2Node_DynamicCast_AsBP_Actor_Spore_Boss, bool K2Node_DynamicCast_bSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, TArray<class ABP_SplineToUp_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class ABP_Support_SporeV2_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Support_SporeV2_C* CallFunc_Array_Get_Item, class ABP_SplineToUp_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


