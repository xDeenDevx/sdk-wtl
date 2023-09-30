#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C
// (None)

class UClass* UWBP_Common_CreditsAmount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Common_CreditsAmount_C");

	return Clss;
}


// WBP_Common_CreditsAmount_C WBP_Common_CreditsAmount.Default__WBP_Common_CreditsAmount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Common_CreditsAmount_C* UWBP_Common_CreditsAmount_C::GetDefaultObj()
{
	static class UWBP_Common_CreditsAmount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Common_CreditsAmount_C*>(UWBP_Common_CreditsAmount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Common_CreditsAmount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Common_CreditsAmount_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C.ExecuteUbergraph_WBP_Common_CreditsAmount
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_CreditsAmount_C::ExecuteUbergraph_WBP_Common_CreditsAmount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Common_CreditsAmount_C", "ExecuteUbergraph_WBP_Common_CreditsAmount");

	Params::UWBP_Common_CreditsAmount_C_ExecuteUbergraph_WBP_Common_CreditsAmount_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


