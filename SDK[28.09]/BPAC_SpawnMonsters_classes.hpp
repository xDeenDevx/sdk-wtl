#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x170 - 0xB0)
// BlueprintGeneratedClass BPAC_SpawnMonsters.BPAC_SpawnMonsters_C
class UBPAC_SpawnMonsters_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        DeltaSec;                                          // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MonsterClass;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinLevel;                                          // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxLevel;                                          // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinIntervalSpawn;                                  // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxIntervalSpawn;                                  // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentIntervalSpawn;                              // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSpawnActivated;                                  // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWTLMonsterPawn*>               MyMonsterList;                                     // 0xE0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        InnerRadius;                                       // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OuterRadius;                                       // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TwistingAngle;                                     // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfRings;                                     // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PointsPerRing;                                     // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       SpawnLocationList;                                 // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentIDLocation;                                 // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_GenerateStatus                  EGenerateStatus;                                   // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                MonsterOwner;                                      // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAllMonstersDead;                                 // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CurrentRing;                                       // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentPoint;                                      // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTwistingAngle;                              // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSpawnMonstersFinish;                             // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsShuffleLocationList;                             // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       AddLocalOffsetLocationList;                        // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBPAC_SpawnMonsters_C* GetDefaultObj();

	void SKillAllMonsters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AWTLMonsterPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
	void SCheckMonsterList(bool* Result, int32* CountAliveMonsters, int32 CountMonster, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class AWTLMonsterPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void SGenerateLocations(const struct FVector& LocationTest, int32 Temp_int_Variable, int32 Temp_int_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UNavigationSystemV1* CallFunc_GetNavigationSystem_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void SSpawn(class AWTLMonsterPawn* TmpMoster, bool IsMonsterAddedToList, const struct FVector& SpawnLocation, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AWTLMonsterPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, enum class EWTLBPCheckResult CallFunc_K2_SpawnMonster_Result, class AWTLMonsterPawn* CallFunc_K2_SpawnMonster_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue);
	void SUpdateSpawn(float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue);
	void SSpawnDeactivate();
	void SSpawnActivate(class AActor* InMonsterOwner, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void OnSpawnActivated();
	void OnSpawnDeactivate();
	void OnAllMonstersDead_Event();
	void OnSpawnMonstersFinish_Event();
	void OnMyMonsterDeath(class AWTLMonsterPawn* Monster);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPAC_SpawnMonsters(int32 EntryPoint, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AWTLMonsterPawn* K2Node_CustomEvent_Monster, bool CallFunc_SCheckMonsterList_Result, int32 CallFunc_SCheckMonsterList_CountAliveMonsters, bool CallFunc_LessEqual_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds);
	void OnSpawnMonstersFinish__DelegateSignature();
	void OnAllMonstersDead__DelegateSignature();
};

}


