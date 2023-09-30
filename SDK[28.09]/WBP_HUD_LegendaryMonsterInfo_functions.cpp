#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C
// (None)

class UClass* UWBP_HUD_LegendaryMonsterInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_LegendaryMonsterInfo_C");

	return Clss;
}


// WBP_HUD_LegendaryMonsterInfo_C WBP_HUD_LegendaryMonsterInfo.Default__WBP_HUD_LegendaryMonsterInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_LegendaryMonsterInfo_C* UWBP_HUD_LegendaryMonsterInfo_C::GetDefaultObj()
{
	static class UWBP_HUD_LegendaryMonsterInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_LegendaryMonsterInfo_C*>(UWBP_HUD_LegendaryMonsterInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.HideAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_LegendaryMonsterInfo_C::HideAlpha(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "HideAlpha");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_HideAlpha_Params Parms{};

	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_LegendaryMonsterInfo_C::UpdateProgress(float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "UpdateProgress");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_UpdateProgress_Params Parms{};

	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.ShowAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_LegendaryMonsterInfo_C::ShowAlpha(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "ShowAlpha");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_ShowAlpha_Params Parms{};

	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUD_LegendaryMonsterInfo_C::Init(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "Init");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_Init_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.CheckPropertyChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUD_LegendaryMonsterInfo_C::CheckPropertyChanged(bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "CheckPropertyChanged");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_CheckPropertyChanged_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LegendaryMonsterComponent_C*InInstigatorComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUD_LegendaryMonsterInfo_C::Deactivate(class UBP_LegendaryMonsterComponent_C* InInstigatorComponent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "Deactivate");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_Deactivate_Params Parms{};

	Parms.InInstigatorComponent = InInstigatorComponent;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InInstigatorDistanceSquared                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LegendaryMonsterComponent_C*InInstigatorComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentHealthAplha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HUD_LMI_Data             InDesiredHUDData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               IsChangeInstigator                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUD_LegendaryMonsterInfo_C::Activate(float InInstigatorDistanceSquared, class UBP_LegendaryMonsterComponent_C* InInstigatorComponent, float CurrentHealthAplha, const struct FS_HUD_LMI_Data& InDesiredHUDData, bool IsChangeInstigator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "Activate");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_Activate_Params Parms{};

	Parms.InInstigatorDistanceSquared = InInstigatorDistanceSquared;
	Parms.InInstigatorComponent = InInstigatorComponent;
	Parms.CurrentHealthAplha = CurrentHealthAplha;
	Parms.InDesiredHUDData = InDesiredHUDData;
	Parms.IsChangeInstigator = IsChangeInstigator;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_LegendaryMonsterInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_LegendaryMonsterInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "Tick");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.ExecuteUbergraph_WBP_HUD_LegendaryMonsterInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_LegendaryMonsterInfo_C::ExecuteUbergraph_WBP_HUD_LegendaryMonsterInfo(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_LegendaryMonsterInfo_C", "ExecuteUbergraph_WBP_HUD_LegendaryMonsterInfo");

	Params::UWBP_HUD_LegendaryMonsterInfo_C_ExecuteUbergraph_WBP_HUD_LegendaryMonsterInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


