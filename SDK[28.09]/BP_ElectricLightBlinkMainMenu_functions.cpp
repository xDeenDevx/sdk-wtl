#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C
// (Actor)

class UClass* ABP_ElectricLightBlinkMainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElectricLightBlinkMainMenu_C");

	return Clss;
}


// BP_ElectricLightBlinkMainMenu_C BP_ElectricLightBlinkMainMenu.Default__BP_ElectricLightBlinkMainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElectricLightBlinkMainMenu_C* ABP_ElectricLightBlinkMainMenu_C::GetDefaultObj()
{
	static class ABP_ElectricLightBlinkMainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElectricLightBlinkMainMenu_C*>(ABP_ElectricLightBlinkMainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ElectricLightBlinkMainMenu_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectricLightBlinkMainMenu_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ElectricLightBlinkMainMenu_C::Blink__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectricLightBlinkMainMenu_C", "Blink__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ElectricLightBlinkMainMenu_C::Blink__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectricLightBlinkMainMenu_C", "Blink__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ElectricLightBlinkMainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectricLightBlinkMainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ExecuteUbergraph_BP_ElectricLightBlinkMainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElectricLightBlinkMainMenu_C::ExecuteUbergraph_BP_ElectricLightBlinkMainMenu(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElectricLightBlinkMainMenu_C", "ExecuteUbergraph_BP_ElectricLightBlinkMainMenu");

	Params::ABP_ElectricLightBlinkMainMenu_C_ExecuteUbergraph_BP_ElectricLightBlinkMainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


