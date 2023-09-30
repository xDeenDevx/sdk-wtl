#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpawnPointForMonster_WallOutgrowth.BP_SpawnPointForMonster_WallOutgrowth_C
// (Actor)

class UClass* ABP_SpawnPointForMonster_WallOutgrowth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpawnPointForMonster_WallOutgrowth_C");

	return Clss;
}


// BP_SpawnPointForMonster_WallOutgrowth_C BP_SpawnPointForMonster_WallOutgrowth.Default__BP_SpawnPointForMonster_WallOutgrowth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpawnPointForMonster_WallOutgrowth_C* ABP_SpawnPointForMonster_WallOutgrowth_C::GetDefaultObj()
{
	static class ABP_SpawnPointForMonster_WallOutgrowth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpawnPointForMonster_WallOutgrowth_C*>(ABP_SpawnPointForMonster_WallOutgrowth_C::StaticClass()->DefaultObject);

	return Default;
}

}


