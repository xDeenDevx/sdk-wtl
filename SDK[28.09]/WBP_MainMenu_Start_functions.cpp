#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Start.WBP_MainMenu_Start_C
// (None)

class UClass* UWBP_MainMenu_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Start_C");

	return Clss;
}


// WBP_MainMenu_Start_C WBP_MainMenu_Start.Default__WBP_MainMenu_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Start_C* UWBP_MainMenu_Start_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Start_C*>(UWBP_MainMenu_Start_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Start.WBP_MainMenu_Start_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Start_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Start_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Start.WBP_MainMenu_Start_C.ExecuteUbergraph_WBP_MainMenu_Start
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Start_C::ExecuteUbergraph_WBP_MainMenu_Start(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Start_C", "ExecuteUbergraph_WBP_MainMenu_Start");

	Params::UWBP_MainMenu_Start_C_ExecuteUbergraph_WBP_MainMenu_Start_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


