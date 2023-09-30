#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultResourcePickup.BP_DefaultResourcePickup_C
// (Actor)

class UClass* ABP_DefaultResourcePickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultResourcePickup_C");

	return Clss;
}


// BP_DefaultResourcePickup_C BP_DefaultResourcePickup.Default__BP_DefaultResourcePickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultResourcePickup_C* ABP_DefaultResourcePickup_C::GetDefaultObj()
{
	static class ABP_DefaultResourcePickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultResourcePickup_C*>(ABP_DefaultResourcePickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


