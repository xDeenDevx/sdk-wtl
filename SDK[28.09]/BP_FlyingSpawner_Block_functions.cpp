#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlyingSpawner_Block.BP_FlyingSpawner_Block_C
// (Actor)

class UClass* ABP_FlyingSpawner_Block_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlyingSpawner_Block_C");

	return Clss;
}


// BP_FlyingSpawner_Block_C BP_FlyingSpawner_Block.Default__BP_FlyingSpawner_Block_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlyingSpawner_Block_C* ABP_FlyingSpawner_Block_C::GetDefaultObj()
{
	static class ABP_FlyingSpawner_Block_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlyingSpawner_Block_C*>(ABP_FlyingSpawner_Block_C::StaticClass()->DefaultObject);

	return Default;
}

}


