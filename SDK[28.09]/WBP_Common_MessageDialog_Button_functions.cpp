#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Common_MessageDialog_Button.WBP_Common_MessageDialog_Button_C
// (None)

class UClass* UWBP_Common_MessageDialog_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Common_MessageDialog_Button_C");

	return Clss;
}


// WBP_Common_MessageDialog_Button_C WBP_Common_MessageDialog_Button.Default__WBP_Common_MessageDialog_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Common_MessageDialog_Button_C* UWBP_Common_MessageDialog_Button_C::GetDefaultObj()
{
	static class UWBP_Common_MessageDialog_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Common_MessageDialog_Button_C*>(UWBP_Common_MessageDialog_Button_C::StaticClass()->DefaultObject);

	return Default;
}

}


