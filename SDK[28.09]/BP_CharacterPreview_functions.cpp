#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterPreview.BP_CharacterPreview_C
// (Actor)

class UClass* ABP_CharacterPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterPreview_C");

	return Clss;
}


// BP_CharacterPreview_C BP_CharacterPreview.Default__BP_CharacterPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterPreview_C* ABP_CharacterPreview_C::GetDefaultObj()
{
	static class ABP_CharacterPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterPreview_C*>(ABP_CharacterPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterPreview.BP_CharacterPreview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CharacterPreview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterPreview_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterPreview.BP_CharacterPreview_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterPreview_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterPreview_C", "ReceiveTick");

	Params::ABP_CharacterPreview_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterPreview.BP_CharacterPreview_C.ExecuteUbergraph_BP_CharacterPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterPreview_C::ExecuteUbergraph_BP_CharacterPreview(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterPreview_C", "ExecuteUbergraph_BP_CharacterPreview");

	Params::ABP_CharacterPreview_C_ExecuteUbergraph_BP_CharacterPreview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


