#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EventPointBase.BP_EventPointBase_C
// (Actor)

class UClass* ABP_EventPointBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EventPointBase_C");

	return Clss;
}


// BP_EventPointBase_C BP_EventPointBase.Default__BP_EventPointBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EventPointBase_C* ABP_EventPointBase_C::GetDefaultObj()
{
	static class ABP_EventPointBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EventPointBase_C*>(ABP_EventPointBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


