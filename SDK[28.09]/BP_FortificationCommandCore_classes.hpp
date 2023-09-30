#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x498 - 0x480)
// BlueprintGeneratedClass BP_FortificationCommandCore.BP_FortificationCommandCore_C
class ABP_FortificationCommandCore_C : public AWTLFortificationCommandCore
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                        Decorations;                                       // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class ABP_FortificationCommandCore_C* GetDefaultObj();

	void K2_OnIntruderKilled(class APawn* Victim);
	void OnControlFactionChanged(enum class EWTLFaction Faction);
	void ExecuteUbergraph_BP_FortificationCommandCore(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBI_FortificationDecoration_C> K2Node_DynamicCast_AsBI_Fortification_Decoration, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, class APawn* K2Node_Event_Victim, int32 Temp_int_Loop_Counter_Variable, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess_1, enum class EWTLBPActionResult CallFunc_AddEffectToCharacterOnNextSpawn_Result, enum class EWTLBPActionResult CallFunc_AddEffectToCharacterOnNextSpawn_Result_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EWTLFaction K2Node_Event_Faction);
};

}


