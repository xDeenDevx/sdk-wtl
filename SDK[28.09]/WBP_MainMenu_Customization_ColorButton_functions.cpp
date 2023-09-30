#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Customization_ColorButton.WBP_MainMenu_Customization_ColorButton_C
// (None)

class UClass* UWBP_MainMenu_Customization_ColorButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Customization_ColorButton_C");

	return Clss;
}


// WBP_MainMenu_Customization_ColorButton_C WBP_MainMenu_Customization_ColorButton.Default__WBP_MainMenu_Customization_ColorButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Customization_ColorButton_C* UWBP_MainMenu_Customization_ColorButton_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Customization_ColorButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Customization_ColorButton_C*>(UWBP_MainMenu_Customization_ColorButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


