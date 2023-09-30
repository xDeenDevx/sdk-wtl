#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnemyNPCDrop.BP_EnemyNPCDrop_C
// (Actor)

class UClass* ABP_EnemyNPCDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnemyNPCDrop_C");

	return Clss;
}


// BP_EnemyNPCDrop_C BP_EnemyNPCDrop.Default__BP_EnemyNPCDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnemyNPCDrop_C* ABP_EnemyNPCDrop_C::GetDefaultObj()
{
	static class ABP_EnemyNPCDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnemyNPCDrop_C*>(ABP_EnemyNPCDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


