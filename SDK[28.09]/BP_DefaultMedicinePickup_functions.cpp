#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultMedicinePickup.BP_DefaultMedicinePickup_C
// (Actor)

class UClass* ABP_DefaultMedicinePickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultMedicinePickup_C");

	return Clss;
}


// BP_DefaultMedicinePickup_C BP_DefaultMedicinePickup.Default__BP_DefaultMedicinePickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultMedicinePickup_C* ABP_DefaultMedicinePickup_C::GetDefaultObj()
{
	static class ABP_DefaultMedicinePickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultMedicinePickup_C*>(ABP_DefaultMedicinePickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


