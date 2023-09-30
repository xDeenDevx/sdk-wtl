#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElectonicExplosion.BP_ElectonicExplosion_C
// (Actor)

class UClass* ABP_ElectonicExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElectonicExplosion_C");

	return Clss;
}


// BP_ElectonicExplosion_C BP_ElectonicExplosion.Default__BP_ElectonicExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElectonicExplosion_C* ABP_ElectonicExplosion_C::GetDefaultObj()
{
	static class ABP_ElectonicExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElectonicExplosion_C*>(ABP_ElectonicExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


