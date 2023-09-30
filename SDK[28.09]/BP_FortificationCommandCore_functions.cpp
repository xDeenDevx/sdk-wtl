#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FortificationCommandCore.BP_FortificationCommandCore_C
// (Actor)

class UClass* ABP_FortificationCommandCore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FortificationCommandCore_C");

	return Clss;
}


// BP_FortificationCommandCore_C BP_FortificationCommandCore.Default__BP_FortificationCommandCore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FortificationCommandCore_C* ABP_FortificationCommandCore_C::GetDefaultObj()
{
	static class ABP_FortificationCommandCore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FortificationCommandCore_C*>(ABP_FortificationCommandCore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FortificationCommandCore.BP_FortificationCommandCore_C.K2_OnIntruderKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       Victim                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FortificationCommandCore_C::K2_OnIntruderKilled(class APawn* Victim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortificationCommandCore_C", "K2_OnIntruderKilled");

	Params::ABP_FortificationCommandCore_C_K2_OnIntruderKilled_Params Parms{};

	Parms.Victim = Victim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortificationCommandCore.BP_FortificationCommandCore_C.OnControlFactionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EWTLFaction             Faction                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FortificationCommandCore_C::OnControlFactionChanged(enum class EWTLFaction Faction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortificationCommandCore_C", "OnControlFactionChanged");

	Params::ABP_FortificationCommandCore_C_OnControlFactionChanged_Params Parms{};

	Parms.Faction = Faction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortificationCommandCore.BP_FortificationCommandCore_C.ExecuteUbergraph_BP_FortificationCommandCore
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBI_FortificationDecoration_C>K2Node_DynamicCast_AsBI_Fortification_Decoration                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_Event_Victim                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWTLCharacter*               K2Node_DynamicCast_AsWTLCharacter                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPActionResult      CallFunc_AddEffectToCharacterOnNextSpawn_Result                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPActionResult      CallFunc_AddEffectToCharacterOnNextSpawn_Result_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLFaction             K2Node_Event_Faction                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FortificationCommandCore_C::ExecuteUbergraph_BP_FortificationCommandCore(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBI_FortificationDecoration_C> K2Node_DynamicCast_AsBI_Fortification_Decoration, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, class APawn* K2Node_Event_Victim, int32 Temp_int_Loop_Counter_Variable, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess_1, enum class EWTLBPActionResult CallFunc_AddEffectToCharacterOnNextSpawn_Result, enum class EWTLBPActionResult CallFunc_AddEffectToCharacterOnNextSpawn_Result_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EWTLFaction K2Node_Event_Faction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FortificationCommandCore_C", "ExecuteUbergraph_BP_FortificationCommandCore");

	Params::ABP_FortificationCommandCore_C_ExecuteUbergraph_BP_FortificationCommandCore_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBI_Fortification_Decoration = K2Node_DynamicCast_AsBI_Fortification_Decoration;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_Event_Victim = K2Node_Event_Victim;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsWTLCharacter = K2Node_DynamicCast_AsWTLCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AddEffectToCharacterOnNextSpawn_Result = CallFunc_AddEffectToCharacterOnNextSpawn_Result;
	Parms.CallFunc_AddEffectToCharacterOnNextSpawn_Result_1 = CallFunc_AddEffectToCharacterOnNextSpawn_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Faction = K2Node_Event_Faction;

	UObject::ProcessEvent(Func, &Parms);

}

}


