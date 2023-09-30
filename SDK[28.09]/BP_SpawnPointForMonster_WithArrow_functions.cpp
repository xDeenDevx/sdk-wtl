#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpawnPointForMonster_WithArrow.BP_SpawnPointForMonster_WithArrow_C
// (Actor)

class UClass* ABP_SpawnPointForMonster_WithArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpawnPointForMonster_WithArrow_C");

	return Clss;
}


// BP_SpawnPointForMonster_WithArrow_C BP_SpawnPointForMonster_WithArrow.Default__BP_SpawnPointForMonster_WithArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpawnPointForMonster_WithArrow_C* ABP_SpawnPointForMonster_WithArrow_C::GetDefaultObj()
{
	static class ABP_SpawnPointForMonster_WithArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpawnPointForMonster_WithArrow_C*>(ABP_SpawnPointForMonster_WithArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


