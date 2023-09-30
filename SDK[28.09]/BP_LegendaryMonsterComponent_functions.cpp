#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C
// (None)

class UClass* UBP_LegendaryMonsterComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LegendaryMonsterComponent_C");

	return Clss;
}


// BP_LegendaryMonsterComponent_C BP_LegendaryMonsterComponent.Default__BP_LegendaryMonsterComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LegendaryMonsterComponent_C* UBP_LegendaryMonsterComponent_C::GetDefaultObj()
{
	static class UBP_LegendaryMonsterComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LegendaryMonsterComponent_C*>(UBP_LegendaryMonsterComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetLocalPlayerCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWTLCharacter*               WTLCharacter                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AIInterface_IsAlive_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWTLCharacter*               K2Node_DynamicCast_AsWTLCharacter                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LegendaryMonsterComponent_C::GetLocalPlayerCharacter(bool* Valid, class AWTLCharacter** WTLCharacter, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_AIInterface_IsAlive_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "GetLocalPlayerCharacter");

	Params::UBP_LegendaryMonsterComponent_C_GetLocalPlayerCharacter_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_AIInterface_IsAlive_ReturnValue = CallFunc_AIInterface_IsAlive_ReturnValue;
	Parms.K2Node_DynamicCast_AsWTLCharacter = K2Node_DynamicCast_AsWTLCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (WTLCharacter != nullptr)
		*WTLCharacter = Parms.WTLCharacter;

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetOwnerAsActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBI_CanBeTakeDamage_C>K2Node_DynamicCast_AsBI_Can_be_Take_Damage                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LegendaryMonsterComponent_C::GetOwnerAsActor(bool* Valid, class AActor** Actor, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "GetOwnerAsActor");

	Params::UBP_LegendaryMonsterComponent_C_GetOwnerAsActor_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBI_Can_be_Take_Damage = K2Node_DynamicCast_AsBI_Can_be_Take_Damage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetHealthAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerAsActor_Valid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwnerAsActor_Actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBI_CanBeTakeDamage_C>K2Node_DynamicCast_AsBI_Can_be_Take_Damage                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealthAlpha_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LegendaryMonsterComponent_C::GetHealthAlpha(float* Value, bool CallFunc_GetOwnerAsActor_Valid, class AActor* CallFunc_GetOwnerAsActor_Actor, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealthAlpha_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "GetHealthAlpha");

	Params::UBP_LegendaryMonsterComponent_C_GetHealthAlpha_Params Parms{};

	Parms.CallFunc_GetOwnerAsActor_Valid = CallFunc_GetOwnerAsActor_Valid;
	Parms.CallFunc_GetOwnerAsActor_Actor = CallFunc_GetOwnerAsActor_Actor;
	Parms.K2Node_DynamicCast_AsBI_Can_be_Take_Damage = K2Node_DynamicCast_AsBI_Can_be_Take_Damage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHealthAlpha_Result = CallFunc_GetHealthAlpha_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.CheckDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              DistanceSquared                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_LegendaryMonsterComponent_C::CheckDistance(float* DistanceSquared, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "CheckDistance");

	Params::UBP_LegendaryMonsterComponent_C_CheckDistance_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DistanceSquared != nullptr)
		*DistanceSquared = Parms.DistanceSquared;

	return Parms.ReturnValue;

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetInstanceWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_HUD_LegendaryMonsterInfo_C*ReturnWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_LegendaryMonsterInfo_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddToPlayerScreen_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWBP_HUD_LegendaryMonsterInfo_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWBP_HUD_LegendaryMonsterInfo_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LegendaryMonsterComponent_C::GetInstanceWidget(class UWBP_HUD_LegendaryMonsterInfo_C** ReturnWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<class UWBP_HUD_LegendaryMonsterInfo_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "GetInstanceWidget");

	Params::UBP_LegendaryMonsterComponent_C_GetInstanceWidget_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddToPlayerScreen_ReturnValue = CallFunc_AddToPlayerScreen_ReturnValue;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnWidget != nullptr)
		*ReturnWidget = Parms.ReturnWidget;

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_HUD_LegendaryMonsterInfo_C*CallFunc_GetInstanceWidget_ReturnWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LegendaryMonsterComponent_C::UpdateWidget(class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_GetInstanceWidget_ReturnWidget, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "UpdateWidget");

	Params::UBP_LegendaryMonsterComponent_C_UpdateWidget_Params Parms{};

	Parms.CallFunc_GetInstanceWidget_ReturnWidget = CallFunc_GetInstanceWidget_ReturnWidget;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_LegendaryMonsterComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LegendaryMonsterComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "ReceiveTick");

	Params::UBP_LegendaryMonsterComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.ExecuteUbergraph_BP_LegendaryMonsterComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealthAlpha_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerCharacter_Valid                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWTLCharacter*               CallFunc_GetLocalPlayerCharacter_WTLCharacter                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_LegendaryMonsterInfo_C*CallFunc_GetInstanceWidget_ReturnWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetOwnerAsActor_Valid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwnerAsActor_Actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerAsActor_Valid_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwnerAsActor_Actor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLBPCheckResult       CallFunc_WTLSwitchHasAuthority_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckDistance_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CheckDistance_DistanceSquared                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealthAlpha_Value_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HUD_LMI_Data             K2Node_MakeStruct_S_HUD_LMI_Data                                 (ContainsInstancedReference, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBI_CanBeTakeDamage_C>K2Node_DynamicCast_AsBI_Can_be_Take_Damage                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetName_Result                                          (None)
// struct FS_HUD_LMI_Data             K2Node_MakeStruct_S_HUD_LMI_Data_1                               (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_HUD_LMI_Data             K2Node_MakeStruct_S_HUD_LMI_Data_2                               (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_LegendaryMonsterComponent_C::ExecuteUbergraph_BP_LegendaryMonsterComponent(int32 EntryPoint, float CallFunc_GetHealthAlpha_Value, bool CallFunc_GetLocalPlayerCharacter_Valid, class AWTLCharacter* CallFunc_GetLocalPlayerCharacter_WTLCharacter, class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_GetInstanceWidget_ReturnWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetOwnerAsActor_Valid, class AActor* CallFunc_GetOwnerAsActor_Actor, bool CallFunc_GetOwnerAsActor_Valid_1, class AActor* CallFunc_GetOwnerAsActor_Actor_1, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CheckDistance_ReturnValue, float CallFunc_CheckDistance_DistanceSquared, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetHealthAlpha_Value_1, const struct FS_HUD_LMI_Data& K2Node_MakeStruct_S_HUD_LMI_Data, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetName_Result, const struct FS_HUD_LMI_Data& K2Node_MakeStruct_S_HUD_LMI_Data_1, const struct FS_HUD_LMI_Data& K2Node_MakeStruct_S_HUD_LMI_Data_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LegendaryMonsterComponent_C", "ExecuteUbergraph_BP_LegendaryMonsterComponent");

	Params::UBP_LegendaryMonsterComponent_C_ExecuteUbergraph_BP_LegendaryMonsterComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHealthAlpha_Value = CallFunc_GetHealthAlpha_Value;
	Parms.CallFunc_GetLocalPlayerCharacter_Valid = CallFunc_GetLocalPlayerCharacter_Valid;
	Parms.CallFunc_GetLocalPlayerCharacter_WTLCharacter = CallFunc_GetLocalPlayerCharacter_WTLCharacter;
	Parms.CallFunc_GetInstanceWidget_ReturnWidget = CallFunc_GetInstanceWidget_ReturnWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwnerAsActor_Valid = CallFunc_GetOwnerAsActor_Valid;
	Parms.CallFunc_GetOwnerAsActor_Actor = CallFunc_GetOwnerAsActor_Actor;
	Parms.CallFunc_GetOwnerAsActor_Valid_1 = CallFunc_GetOwnerAsActor_Valid_1;
	Parms.CallFunc_GetOwnerAsActor_Actor_1 = CallFunc_GetOwnerAsActor_Actor_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_WTLSwitchHasAuthority_Result = CallFunc_WTLSwitchHasAuthority_Result;
	Parms.CallFunc_WTLSwitchHasAuthority_Result_1 = CallFunc_WTLSwitchHasAuthority_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CheckDistance_ReturnValue = CallFunc_CheckDistance_ReturnValue;
	Parms.CallFunc_CheckDistance_DistanceSquared = CallFunc_CheckDistance_DistanceSquared;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHealthAlpha_Value_1 = CallFunc_GetHealthAlpha_Value_1;
	Parms.K2Node_MakeStruct_S_HUD_LMI_Data = K2Node_MakeStruct_S_HUD_LMI_Data;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1 = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBI_Can_be_Take_Damage = K2Node_DynamicCast_AsBI_Can_be_Take_Damage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetName_Result = CallFunc_GetName_Result;
	Parms.K2Node_MakeStruct_S_HUD_LMI_Data_1 = K2Node_MakeStruct_S_HUD_LMI_Data_1;
	Parms.K2Node_MakeStruct_S_HUD_LMI_Data_2 = K2Node_MakeStruct_S_HUD_LMI_Data_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


