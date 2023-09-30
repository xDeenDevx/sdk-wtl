#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ControllerOfFlyingSpawners_V2.BP_ControllerOfFlyingSpawners_V2_C
// (Actor)

class UClass* ABP_ControllerOfFlyingSpawners_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ControllerOfFlyingSpawners_V2_C");

	return Clss;
}


// BP_ControllerOfFlyingSpawners_V2_C BP_ControllerOfFlyingSpawners_V2.Default__BP_ControllerOfFlyingSpawners_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ControllerOfFlyingSpawners_V2_C* ABP_ControllerOfFlyingSpawners_V2_C::GetDefaultObj()
{
	static class ABP_ControllerOfFlyingSpawners_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ControllerOfFlyingSpawners_V2_C*>(ABP_ControllerOfFlyingSpawners_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


