#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_PlayerTakeDamage.CS_PlayerTakeDamage_C
// (None)

class UClass* UCS_PlayerTakeDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_PlayerTakeDamage_C");

	return Clss;
}


// CS_PlayerTakeDamage_C CS_PlayerTakeDamage.Default__CS_PlayerTakeDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_PlayerTakeDamage_C* UCS_PlayerTakeDamage_C::GetDefaultObj()
{
	static class UCS_PlayerTakeDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_PlayerTakeDamage_C*>(UCS_PlayerTakeDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


