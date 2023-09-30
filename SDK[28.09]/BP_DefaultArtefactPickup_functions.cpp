#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultArtefactPickup.BP_DefaultArtefactPickup_C
// (Actor)

class UClass* ABP_DefaultArtefactPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultArtefactPickup_C");

	return Clss;
}


// BP_DefaultArtefactPickup_C BP_DefaultArtefactPickup.Default__BP_DefaultArtefactPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultArtefactPickup_C* ABP_DefaultArtefactPickup_C::GetDefaultObj()
{
	static class ABP_DefaultArtefactPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultArtefactPickup_C*>(ABP_DefaultArtefactPickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


