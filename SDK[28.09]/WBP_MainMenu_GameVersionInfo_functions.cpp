#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_GameVersionInfo.WBP_MainMenu_GameVersionInfo_C
// (None)

class UClass* UWBP_MainMenu_GameVersionInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_GameVersionInfo_C");

	return Clss;
}


// WBP_MainMenu_GameVersionInfo_C WBP_MainMenu_GameVersionInfo.Default__WBP_MainMenu_GameVersionInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_GameVersionInfo_C* UWBP_MainMenu_GameVersionInfo_C::GetDefaultObj()
{
	static class UWBP_MainMenu_GameVersionInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_GameVersionInfo_C*>(UWBP_MainMenu_GameVersionInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


