#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Customization_MaterialsTabButton.WBP_MainMenu_Customization_MaterialsTabButton_C
// (None)

class UClass* UWBP_MainMenu_Customization_MaterialsTabButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Customization_MaterialsTabButton_C");

	return Clss;
}


// WBP_MainMenu_Customization_MaterialsTabButton_C WBP_MainMenu_Customization_MaterialsTabButton.Default__WBP_MainMenu_Customization_MaterialsTabButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Customization_MaterialsTabButton_C* UWBP_MainMenu_Customization_MaterialsTabButton_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Customization_MaterialsTabButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Customization_MaterialsTabButton_C*>(UWBP_MainMenu_Customization_MaterialsTabButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


