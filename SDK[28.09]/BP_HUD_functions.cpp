#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// (Actor)

class UClass* ABP_HUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUD_C");

	return Clss;
}


// BP_HUD_C BP_HUD.Default__BP_HUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HUD_C* ABP_HUD_C::GetDefaultObj()
{
	static class ABP_HUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HUD_C*>(ABP_HUD_C::StaticClass()->DefaultObject);

	return Default;
}

}


