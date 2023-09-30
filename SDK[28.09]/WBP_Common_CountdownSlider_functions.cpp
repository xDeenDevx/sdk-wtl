#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Common_CountdownSlider.WBP_Common_CountdownSlider_C
// (None)

class UClass* UWBP_Common_CountdownSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Common_CountdownSlider_C");

	return Clss;
}


// WBP_Common_CountdownSlider_C WBP_Common_CountdownSlider.Default__WBP_Common_CountdownSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Common_CountdownSlider_C* UWBP_Common_CountdownSlider_C::GetDefaultObj()
{
	static class UWBP_Common_CountdownSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Common_CountdownSlider_C*>(UWBP_Common_CountdownSlider_C::StaticClass()->DefaultObject);

	return Default;
}

}


