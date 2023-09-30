#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x26C - 0x220)
// BlueprintGeneratedClass BP_Spawner_ToxicSpitter.BP_Spawner_ToxicSpitter_C
class ABP_Spawner_ToxicSpitter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpawnClass;                                        // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpawnPointForMonster_WithArrow_C*> SpawnLocationList;                                 // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        CurrentLocationID;                                 // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Actor_Spore_Boss_C*                MyBoss;                                            // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDestroy;                                         // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1318[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeRespawn;                                       // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTimeRespawn;                                    // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnMaxIteration;                                 // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Spawner_ToxicSpitter_C* GetDefaultObj();

	void SpawnMonster(int32 Temp_int_Variable, enum class EWTLBPCheckResult CallFunc_GetMonsterLevelByCharactersInfo_Result, int32 CallFunc_GetMonsterLevelByCharactersInfo_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_SpawnPointForMonster_WithArrow_C* CallFunc_Array_Get_Item, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AWTLMonsterPawn* CallFunc_SpawnMonster_ReturnValue, class ABP_SpawnPointForMonster_WithArrow_C* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void Init(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Monster_ToxicSpitter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class ABP_Actor_Spore_Boss_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Clamp_ReturnValue, class ABP_Actor_Spore_Boss_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class ABP_SpawnPointForMonster_WallOutgrowth_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_SpawnPointForMonster_WithArrow_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Spawner_ToxicSpitter(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> CallFunc_IsAlive_self_CastInput, bool CallFunc_IsAlive_Result, bool CallFunc_LessEqual_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds);
};

}


