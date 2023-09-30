#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NavQueryFilter_Large.BP_NavQueryFilter_Large_C
// (None)

class UClass* UBP_NavQueryFilter_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NavQueryFilter_Large_C");

	return Clss;
}


// BP_NavQueryFilter_Large_C BP_NavQueryFilter_Large.Default__BP_NavQueryFilter_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NavQueryFilter_Large_C* UBP_NavQueryFilter_Large_C::GetDefaultObj()
{
	static class UBP_NavQueryFilter_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NavQueryFilter_Large_C*>(UBP_NavQueryFilter_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


