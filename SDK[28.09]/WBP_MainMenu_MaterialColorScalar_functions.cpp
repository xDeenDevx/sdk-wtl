#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_MaterialColorScalar.WBP_MainMenu_MaterialColorScalar_C
// (None)

class UClass* UWBP_MainMenu_MaterialColorScalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_MaterialColorScalar_C");

	return Clss;
}


// WBP_MainMenu_MaterialColorScalar_C WBP_MainMenu_MaterialColorScalar.Default__WBP_MainMenu_MaterialColorScalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_MaterialColorScalar_C* UWBP_MainMenu_MaterialColorScalar_C::GetDefaultObj()
{
	static class UWBP_MainMenu_MaterialColorScalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_MaterialColorScalar_C*>(UWBP_MainMenu_MaterialColorScalar_C::StaticClass()->DefaultObject);

	return Default;
}

}


