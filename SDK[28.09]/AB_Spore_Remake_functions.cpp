#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Spore_Remake.AB_Spore_Remake_C
// (None)

class UClass* UAB_Spore_Remake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Spore_Remake_C");

	return Clss;
}


// AB_Spore_Remake_C AB_Spore_Remake.Default__AB_Spore_Remake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Spore_Remake_C* UAB_Spore_Remake_C::GetDefaultObj()
{
	static class UAB_Spore_Remake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Spore_Remake_C*>(UAB_Spore_Remake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Spore_Remake.AB_Spore_Remake_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Spore_Remake_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Spore_Remake_C", "AnimGraph");

	Params::UAB_Spore_Remake_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Spore_Remake.AB_Spore_Remake_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Spore_Remake_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Spore_Remake_C", "BlueprintUpdateAnimation");

	Params::UAB_Spore_Remake_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AB_Spore_Remake.AB_Spore_Remake_C.ExecuteUbergraph_AB_Spore_Remake
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Monster_Spore_Intro_C*   K2Node_DynamicCast_AsBP_Monster_Spore_Intro                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Spore_Remake_C::ExecuteUbergraph_AB_Spore_Remake(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_Monster_Spore_Intro_C* K2Node_DynamicCast_AsBP_Monster_Spore_Intro, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Spore_Remake_C", "ExecuteUbergraph_AB_Spore_Remake");

	Params::UAB_Spore_Remake_C_ExecuteUbergraph_AB_Spore_Remake_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_Spore_Intro = K2Node_DynamicCast_AsBP_Monster_Spore_Intro;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


