#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BulletHellV3_07.BP_BulletHellV3_07_C
// (Actor)

class UClass* ABP_BulletHellV3_07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BulletHellV3_07_C");

	return Clss;
}


// BP_BulletHellV3_07_C BP_BulletHellV3_07.Default__BP_BulletHellV3_07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BulletHellV3_07_C* ABP_BulletHellV3_07_C::GetDefaultObj()
{
	static class ABP_BulletHellV3_07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BulletHellV3_07_C*>(ABP_BulletHellV3_07_C::StaticClass()->DefaultObject);

	return Default;
}

}


