#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_ParameterSlider_Percent.WBP_Options_ParameterSlider_Percent_C
// (None)

class UClass* UWBP_Options_ParameterSlider_Percent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_ParameterSlider_Percent_C");

	return Clss;
}


// WBP_Options_ParameterSlider_Percent_C WBP_Options_ParameterSlider_Percent.Default__WBP_Options_ParameterSlider_Percent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_ParameterSlider_Percent_C* UWBP_Options_ParameterSlider_Percent_C::GetDefaultObj()
{
	static class UWBP_Options_ParameterSlider_Percent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_ParameterSlider_Percent_C*>(UWBP_Options_ParameterSlider_Percent_C::StaticClass()->DefaultObject);

	return Default;
}

}


