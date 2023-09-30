#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C
// (Actor, Pawn)

class UClass* ABP_Shuttle_Spawn_RangSymbiont_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shuttle_Spawn_RangSymbiont_Base_C");

	return Clss;
}


// BP_Shuttle_Spawn_RangSymbiont_Base_C BP_Shuttle_Spawn_RangSymbiont_Base.Default__BP_Shuttle_Spawn_RangSymbiont_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shuttle_Spawn_RangSymbiont_Base_C* ABP_Shuttle_Spawn_RangSymbiont_Base_C::GetDefaultObj()
{
	static class ABP_Shuttle_Spawn_RangSymbiont_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shuttle_Spawn_RangSymbiont_Base_C*>(ABP_Shuttle_Spawn_RangSymbiont_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnActivationStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::COnActivationStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "COnActivationStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnBeginPlayFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::COnBeginPlayFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "COnBeginPlayFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnHitLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::COnHitLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "COnHitLanded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.SOnActivationFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::SOnActivationFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "SOnActivationFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.SOnSpawnMonster
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::SOnSpawnMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "SOnSpawnMonster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnDestroySpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::COnDestroySpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "COnDestroySpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.ExecuteUbergraph_BP_Shuttle_Spawn_RangSymbiont_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWTLMonsterPawn*             CallFunc_SpawnMonster_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterBase_C*           K2Node_DynamicCast_AsBP_Monster_Base                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLifetime_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWTLMonsterItemData         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AWTLMonsterPawn> K2Node_ClassDynamicCast_AsWTLMonster_Pawn                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Shuttle_Spawn_RangSymbiont_Base_C::ExecuteUbergraph_BP_Shuttle_Spawn_RangSymbiont_Base(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class AWTLMonsterPawn* CallFunc_SpawnMonster_ReturnValue, class ABP_MonsterBase_C* K2Node_DynamicCast_AsBP_Monster_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetLifetime_ReturnValue, class FName Temp_name_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FWTLMonsterItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class AWTLMonsterPawn> K2Node_ClassDynamicCast_AsWTLMonster_Pawn, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shuttle_Spawn_RangSymbiont_Base_C", "ExecuteUbergraph_BP_Shuttle_Spawn_RangSymbiont_Base");

	Params::ABP_Shuttle_Spawn_RangSymbiont_Base_C_ExecuteUbergraph_BP_Shuttle_Spawn_RangSymbiont_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_SpawnMonster_ReturnValue = CallFunc_SpawnMonster_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_Base = K2Node_DynamicCast_AsBP_Monster_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLifetime_ReturnValue = CallFunc_GetLifetime_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsWTLMonster_Pawn = K2Node_ClassDynamicCast_AsWTLMonster_Pawn;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


