#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultClothesPickup.BP_DefaultClothesPickup_C
// (Actor)

class UClass* ABP_DefaultClothesPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultClothesPickup_C");

	return Clss;
}


// BP_DefaultClothesPickup_C BP_DefaultClothesPickup.Default__BP_DefaultClothesPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultClothesPickup_C* ABP_DefaultClothesPickup_C::GetDefaultObj()
{
	static class ABP_DefaultClothesPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultClothesPickup_C*>(ABP_DefaultClothesPickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


