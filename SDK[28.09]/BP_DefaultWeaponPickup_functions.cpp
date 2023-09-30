#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultWeaponPickup.BP_DefaultWeaponPickup_C
// (Actor)

class UClass* ABP_DefaultWeaponPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultWeaponPickup_C");

	return Clss;
}


// BP_DefaultWeaponPickup_C BP_DefaultWeaponPickup.Default__BP_DefaultWeaponPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultWeaponPickup_C* ABP_DefaultWeaponPickup_C::GetDefaultObj()
{
	static class ABP_DefaultWeaponPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultWeaponPickup_C*>(ABP_DefaultWeaponPickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


