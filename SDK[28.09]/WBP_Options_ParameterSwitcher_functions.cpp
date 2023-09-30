#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_ParameterSwitcher.WBP_Options_ParameterSwitcher_C
// (None)

class UClass* UWBP_Options_ParameterSwitcher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_ParameterSwitcher_C");

	return Clss;
}


// WBP_Options_ParameterSwitcher_C WBP_Options_ParameterSwitcher.Default__WBP_Options_ParameterSwitcher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_ParameterSwitcher_C* UWBP_Options_ParameterSwitcher_C::GetDefaultObj()
{
	static class UWBP_Options_ParameterSwitcher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_ParameterSwitcher_C*>(UWBP_Options_ParameterSwitcher_C::StaticClass()->DefaultObject);

	return Default;
}

}


