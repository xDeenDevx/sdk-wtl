#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_CharacterSelect.WBP_MainMenu_CharacterSelect_C
// (None)

class UClass* UWBP_MainMenu_CharacterSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_CharacterSelect_C");

	return Clss;
}


// WBP_MainMenu_CharacterSelect_C WBP_MainMenu_CharacterSelect.Default__WBP_MainMenu_CharacterSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_CharacterSelect_C* UWBP_MainMenu_CharacterSelect_C::GetDefaultObj()
{
	static class UWBP_MainMenu_CharacterSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_CharacterSelect_C*>(UWBP_MainMenu_CharacterSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_CharacterSelect.WBP_MainMenu_CharacterSelect_C.InitializeBlueprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_CharacterSelect_C::InitializeBlueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_CharacterSelect_C", "InitializeBlueprint");



	UObject::ProcessEvent(Func, nullptr);

}

}


