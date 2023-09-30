#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterDrop.BP_CharacterDrop_C
// (Actor)

class UClass* ABP_CharacterDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterDrop_C");

	return Clss;
}


// BP_CharacterDrop_C BP_CharacterDrop.Default__BP_CharacterDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterDrop_C* ABP_CharacterDrop_C::GetDefaultObj()
{
	static class ABP_CharacterDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterDrop_C*>(ABP_CharacterDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


