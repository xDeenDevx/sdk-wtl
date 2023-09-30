#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C
// (None)

class UClass* UWBP_LoadingScreen_Simple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoadingScreen_Simple_C");

	return Clss;
}


// WBP_LoadingScreen_Simple_C WBP_LoadingScreen_Simple.Default__WBP_LoadingScreen_Simple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoadingScreen_Simple_C* UWBP_LoadingScreen_Simple_C::GetDefaultObj()
{
	static class UWBP_LoadingScreen_Simple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoadingScreen_Simple_C*>(UWBP_LoadingScreen_Simple_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreen_Simple_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Simple_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_Simple_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Simple_C", "Tick");

	Params::UWBP_LoadingScreen_Simple_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.ExecuteUbergraph_WBP_LoadingScreen_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_Simple_C::ExecuteUbergraph_WBP_LoadingScreen_Simple(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Simple_C", "ExecuteUbergraph_WBP_LoadingScreen_Simple");

	Params::UWBP_LoadingScreen_Simple_C_ExecuteUbergraph_WBP_LoadingScreen_Simple_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


