#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MonsterProjectileRegular10000.BP_MonsterProjectileRegular10000_C
// (Actor)

class UClass* ABP_MonsterProjectileRegular10000_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MonsterProjectileRegular10000_C");

	return Clss;
}


// BP_MonsterProjectileRegular10000_C BP_MonsterProjectileRegular10000.Default__BP_MonsterProjectileRegular10000_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MonsterProjectileRegular10000_C* ABP_MonsterProjectileRegular10000_C::GetDefaultObj()
{
	static class ABP_MonsterProjectileRegular10000_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MonsterProjectileRegular10000_C*>(ABP_MonsterProjectileRegular10000_C::StaticClass()->DefaultObject);

	return Default;
}

}


