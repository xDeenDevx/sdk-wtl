#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameMode_MainMenu.BP_GameMode_MainMenu_C
// (Actor)

class UClass* ABP_GameMode_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameMode_MainMenu_C");

	return Clss;
}


// BP_GameMode_MainMenu_C BP_GameMode_MainMenu.Default__BP_GameMode_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameMode_MainMenu_C* ABP_GameMode_MainMenu_C::GetDefaultObj()
{
	static class ABP_GameMode_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameMode_MainMenu_C*>(ABP_GameMode_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}

