#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_ChooseAccountType.WBP_MainMenu_ChooseAccountType_C
// (None)

class UClass* UWBP_MainMenu_ChooseAccountType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_ChooseAccountType_C");

	return Clss;
}


// WBP_MainMenu_ChooseAccountType_C WBP_MainMenu_ChooseAccountType.Default__WBP_MainMenu_ChooseAccountType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_ChooseAccountType_C* UWBP_MainMenu_ChooseAccountType_C::GetDefaultObj()
{
	static class UWBP_MainMenu_ChooseAccountType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_ChooseAccountType_C*>(UWBP_MainMenu_ChooseAccountType_C::StaticClass()->DefaultObject);

	return Default;
}

}


