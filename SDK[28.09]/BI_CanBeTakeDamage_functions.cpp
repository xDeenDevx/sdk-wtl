#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_CanBeTakeDamage.BI_CanBeTakeDamage_C
// (None)

class UClass* IBI_CanBeTakeDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_CanBeTakeDamage_C");

	return Clss;
}


// BI_CanBeTakeDamage_C BI_CanBeTakeDamage.Default__BI_CanBeTakeDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBI_CanBeTakeDamage_C* IBI_CanBeTakeDamage_C::GetDefaultObj()
{
	static class IBI_CanBeTakeDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBI_CanBeTakeDamage_C*>(IBI_CanBeTakeDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.DecrementHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_CanBeTakeDamage_C::DecrementHealth(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "DecrementHealth");

	Params::IBI_CanBeTakeDamage_C_DecrementHealth_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.IncrementHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_CanBeTakeDamage_C::IncrementHealth(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "IncrementHealth");

	Params::IBI_CanBeTakeDamage_C_IncrementHealth_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.GetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)

void IBI_CanBeTakeDamage_C::GetName(class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "GetName");

	Params::IBI_CanBeTakeDamage_C_GetName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.GetHealthAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_CanBeTakeDamage_C::GetHealthAlpha(float* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "GetHealthAlpha");

	Params::IBI_CanBeTakeDamage_C_GetHealthAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.CanBeTakeDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBI_CanBeTakeDamage_C::CanBeTakeDamage(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "CanBeTakeDamage");

	Params::IBI_CanBeTakeDamage_C_CanBeTakeDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.IsAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBI_CanBeTakeDamage_C::IsAlive(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "IsAlive");

	Params::IBI_CanBeTakeDamage_C_IsAlive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.GetMaxHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_CanBeTakeDamage_C::GetMaxHealth(float* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "GetMaxHealth");

	Params::IBI_CanBeTakeDamage_C_GetMaxHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BI_CanBeTakeDamage.BI_CanBeTakeDamage_C.GetCurrentHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_CanBeTakeDamage_C::GetCurrentHealth(float* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_CanBeTakeDamage_C", "GetCurrentHealth");

	Params::IBI_CanBeTakeDamage_C_GetCurrentHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


