#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Common_CreditsAmount_WithTopUp.WBP_Common_CreditsAmount_WithTopUp_C
// (None)

class UClass* UWBP_Common_CreditsAmount_WithTopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Common_CreditsAmount_WithTopUp_C");

	return Clss;
}


// WBP_Common_CreditsAmount_WithTopUp_C WBP_Common_CreditsAmount_WithTopUp.Default__WBP_Common_CreditsAmount_WithTopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Common_CreditsAmount_WithTopUp_C* UWBP_Common_CreditsAmount_WithTopUp_C::GetDefaultObj()
{
	static class UWBP_Common_CreditsAmount_WithTopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Common_CreditsAmount_WithTopUp_C*>(UWBP_Common_CreditsAmount_WithTopUp_C::StaticClass()->DefaultObject);

	return Default;
}

}

