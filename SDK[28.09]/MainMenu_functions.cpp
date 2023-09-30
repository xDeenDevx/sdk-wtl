#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenu.MainMenu_C
// (Actor)

class UClass* AMainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenu_C");

	return Clss;
}


// MainMenu_C MainMenu.Default__MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenu_C* AMainMenu_C::GetDefaultObj()
{
	static class AMainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenu_C*>(AMainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenu.MainMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ReceiveTick");

	Params::AMainMenu_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.MoveCameraToOriginalPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToOriginalPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToOriginalPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterTorsoPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterTorsoPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterTorsoPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterHeadPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterHeadPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterHeadPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterLegsPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterLegsPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterLegsPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterFeetPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterFeetPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterFeetPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterWatchesPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterWatchesPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterWatchesPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterBackpackPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterBackpackPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterBackpackPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.MoveCameraToCharacterCommonPoint
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::MoveCameraToCharacterCommonPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "MoveCameraToCharacterCommonPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MainMenu_Pawn_C*         K2Node_DynamicCast_AsBP_Main_Menu_Pawn                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TInterpTo_ReturnValue                                   (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult_2                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult_3                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::ExecuteUbergraph_MainMenu(int32 EntryPoint, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_Array_Get_Item, class ABP_MainMenu_Pawn_C* K2Node_DynamicCast_AsBP_Main_Menu_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, const struct FTransform& CallFunc_TInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_2, bool CallFunc_K2_SetActorTransform_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_3, bool CallFunc_K2_SetActorTransform_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ExecuteUbergraph_MainMenu");

	Params::AMainMenu_C_ExecuteUbergraph_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Main_Menu_Pawn = K2Node_DynamicCast_AsBP_Main_Menu_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;
	Parms.CallFunc_TInterpTo_ReturnValue = CallFunc_TInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult_1 = CallFunc_K2_SetActorTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue_1 = CallFunc_K2_SetActorTransform_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult_2 = CallFunc_K2_SetActorTransform_SweepHitResult_2;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue_2 = CallFunc_K2_SetActorTransform_ReturnValue_2;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult_3 = CallFunc_K2_SetActorTransform_SweepHitResult_3;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue_3 = CallFunc_K2_SetActorTransform_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


