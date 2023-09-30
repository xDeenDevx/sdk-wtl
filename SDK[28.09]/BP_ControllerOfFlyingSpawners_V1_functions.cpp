#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ControllerOfFlyingSpawners_V1.BP_ControllerOfFlyingSpawners_V1_C
// (Actor)

class UClass* ABP_ControllerOfFlyingSpawners_V1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ControllerOfFlyingSpawners_V1_C");

	return Clss;
}


// BP_ControllerOfFlyingSpawners_V1_C BP_ControllerOfFlyingSpawners_V1.Default__BP_ControllerOfFlyingSpawners_V1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ControllerOfFlyingSpawners_V1_C* ABP_ControllerOfFlyingSpawners_V1_C::GetDefaultObj()
{
	static class ABP_ControllerOfFlyingSpawners_V1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ControllerOfFlyingSpawners_V1_C*>(ABP_ControllerOfFlyingSpawners_V1_C::StaticClass()->DefaultObject);

	return Default;
}

}


