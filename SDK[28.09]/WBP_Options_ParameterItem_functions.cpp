#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_ParameterItem.WBP_Options_ParameterItem_C
// (None)

class UClass* UWBP_Options_ParameterItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_ParameterItem_C");

	return Clss;
}


// WBP_Options_ParameterItem_C WBP_Options_ParameterItem.Default__WBP_Options_ParameterItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_ParameterItem_C* UWBP_Options_ParameterItem_C::GetDefaultObj()
{
	static class UWBP_Options_ParameterItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_ParameterItem_C*>(UWBP_Options_ParameterItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


