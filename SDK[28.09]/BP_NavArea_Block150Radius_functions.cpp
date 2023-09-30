#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NavArea_Block150Radius.BP_NavArea_Block150Radius_C
// (None)

class UClass* UBP_NavArea_Block150Radius_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NavArea_Block150Radius_C");

	return Clss;
}


// BP_NavArea_Block150Radius_C BP_NavArea_Block150Radius.Default__BP_NavArea_Block150Radius_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NavArea_Block150Radius_C* UBP_NavArea_Block150Radius_C::GetDefaultObj()
{
	static class UBP_NavArea_Block150Radius_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NavArea_Block150Radius_C*>(UBP_NavArea_Block150Radius_C::StaticClass()->DefaultObject);

	return Default;
}

}


