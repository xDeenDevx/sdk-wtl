#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterPreviewRoom.BP_CharacterPreviewRoom_C
// (Actor)

class UClass* ABP_CharacterPreviewRoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterPreviewRoom_C");

	return Clss;
}


// BP_CharacterPreviewRoom_C BP_CharacterPreviewRoom.Default__BP_CharacterPreviewRoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterPreviewRoom_C* ABP_CharacterPreviewRoom_C::GetDefaultObj()
{
	static class ABP_CharacterPreviewRoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterPreviewRoom_C*>(ABP_CharacterPreviewRoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


