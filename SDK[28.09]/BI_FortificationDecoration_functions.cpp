#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_FortificationDecoration.BI_FortificationDecoration_C
// (None)

class UClass* IBI_FortificationDecoration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_FortificationDecoration_C");

	return Clss;
}


// BI_FortificationDecoration_C BI_FortificationDecoration.Default__BI_FortificationDecoration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBI_FortificationDecoration_C* IBI_FortificationDecoration_C::GetDefaultObj()
{
	static class IBI_FortificationDecoration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBI_FortificationDecoration_C*>(IBI_FortificationDecoration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_FortificationDecoration.BI_FortificationDecoration_C.OnFactionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWTLFaction             NewFaction                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_FortificationDecoration_C::OnFactionChanged(enum class EWTLFaction NewFaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_FortificationDecoration_C", "OnFactionChanged");

	Params::IBI_FortificationDecoration_C_OnFactionChanged_Params Parms{};

	Parms.NewFaction = NewFaction;

	UObject::ProcessEvent(Func, &Parms);

}

}


