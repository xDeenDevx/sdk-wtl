#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C
// (None)

class UClass* UWBP_MainMenu_ErrorNotificationItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_ErrorNotificationItem_C");

	return Clss;
}


// WBP_MainMenu_ErrorNotificationItem_C WBP_MainMenu_ErrorNotificationItem.Default__WBP_MainMenu_ErrorNotificationItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_ErrorNotificationItem_C* UWBP_MainMenu_ErrorNotificationItem_C::GetDefaultObj()
{
	static class UWBP_MainMenu_ErrorNotificationItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_ErrorNotificationItem_C*>(UWBP_MainMenu_ErrorNotificationItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_ErrorNotificationItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_ErrorNotificationItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C.ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ErrorNotificationItem_C::ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_ErrorNotificationItem_C", "ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem");

	Params::UWBP_MainMenu_ErrorNotificationItem_C_ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


