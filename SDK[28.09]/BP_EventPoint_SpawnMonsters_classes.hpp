#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x424 - 0x400)
// BlueprintGeneratedClass BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C
class ABP_EventPoint_SpawnMonsters_C : public ABP_EventPointBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_MonsterSpawnerBase_C*>      SpawnPoints;                                       // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         UpdateData;                                        // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLevel;                                          // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxLevel;                                          // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EventPoint_SpawnMonsters_C* GetDefaultObj();

	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, const struct FWTLEventTask& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_MonsterSpawnerBase_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void K2_OnStart();
	void K2_OnFinish(bool Successful);
	void OnMonsterDead(class AWTLMonsterPawn* MonsterPawn, class ABP_MonsterSpawnerBase_C* Spawner);
	void K2_OnEventTaskCompleted(int32 TaskIndex);
	void ExecuteUbergraph_BP_EventPoint_SpawnMonsters(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_Successful, class ABP_MonsterSpawnerBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AWTLMonsterPawn* K2Node_CustomEvent_MonsterPawn, class ABP_MonsterSpawnerBase_C* K2Node_CustomEvent_Spawner, class ABP_MonsterSpawnerBase_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 K2Node_Event_TaskIndex, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class ABP_MonsterSpawnerBase_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
};

}


