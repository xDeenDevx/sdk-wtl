#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultStuffPickup.BP_DefaultStuffPickup_C
// (Actor)

class UClass* ABP_DefaultStuffPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultStuffPickup_C");

	return Clss;
}


// BP_DefaultStuffPickup_C BP_DefaultStuffPickup.Default__BP_DefaultStuffPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultStuffPickup_C* ABP_DefaultStuffPickup_C::GetDefaultObj()
{
	static class ABP_DefaultStuffPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultStuffPickup_C*>(ABP_DefaultStuffPickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


