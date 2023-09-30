#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Character_MainMenu.BP_Character_MainMenu_C
// (Actor, Pawn)

class UClass* ABP_Character_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Character_MainMenu_C");

	return Clss;
}


// BP_Character_MainMenu_C BP_Character_MainMenu.Default__BP_Character_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Character_MainMenu_C* ABP_Character_MainMenu_C::GetDefaultObj()
{
	static class ABP_Character_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Character_MainMenu_C*>(ABP_Character_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Character_MainMenu_C::EyeBlink__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Character_MainMenu_C", "EyeBlink__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Character_MainMenu_C::EyeBlink__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Character_MainMenu_C", "EyeBlink__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Character_MainMenu.BP_Character_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Character_MainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Character_MainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Character_MainMenu.BP_Character_MainMenu_C.ExecuteUbergraph_BP_Character_MainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_MainMenu_C::ExecuteUbergraph_BP_Character_MainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Character_MainMenu_C", "ExecuteUbergraph_BP_Character_MainMenu");

	Params::ABP_Character_MainMenu_C_ExecuteUbergraph_BP_Character_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


