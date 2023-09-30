#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultAmmoPickup.BP_DefaultAmmoPickup_C
// (Actor)

class UClass* ABP_DefaultAmmoPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultAmmoPickup_C");

	return Clss;
}


// BP_DefaultAmmoPickup_C BP_DefaultAmmoPickup.Default__BP_DefaultAmmoPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultAmmoPickup_C* ABP_DefaultAmmoPickup_C::GetDefaultObj()
{
	static class ABP_DefaultAmmoPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultAmmoPickup_C*>(ABP_DefaultAmmoPickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


