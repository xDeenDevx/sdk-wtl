#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_ExitButton.WBP_MainMenu_ExitButton_C
// (None)

class UClass* UWBP_MainMenu_ExitButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_ExitButton_C");

	return Clss;
}


// WBP_MainMenu_ExitButton_C WBP_MainMenu_ExitButton.Default__WBP_MainMenu_ExitButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_ExitButton_C* UWBP_MainMenu_ExitButton_C::GetDefaultObj()
{
	static class UWBP_MainMenu_ExitButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_ExitButton_C*>(UWBP_MainMenu_ExitButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


