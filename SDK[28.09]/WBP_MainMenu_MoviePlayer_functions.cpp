#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C
// (None)

class UClass* UWBP_MainMenu_MoviePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_MoviePlayer_C");

	return Clss;
}


// WBP_MainMenu_MoviePlayer_C WBP_MainMenu_MoviePlayer.Default__WBP_MainMenu_MoviePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_MoviePlayer_C* UWBP_MainMenu_MoviePlayer_C::GetDefaultObj()
{
	static class UWBP_MainMenu_MoviePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_MoviePlayer_C*>(UWBP_MainMenu_MoviePlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.CloseMediaPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::CloseMediaPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "CloseMediaPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnTimerExec_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::OnTimerExec_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "OnTimerExec_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_MoviePlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "Tick");

	Params::UWBP_MainMenu_MoviePlayer_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnMediaClosed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::OnMediaClosed_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "OnMediaClosed_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnPlayMovie
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::OnPlayMovie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "OnPlayMovie");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnStopMovie
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::OnStopMovie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "OnStopMovie");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.ExecuteUbergraph_WBP_MainMenu_MoviePlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_MoviePlayer_C::ExecuteUbergraph_WBP_MainMenu_MoviePlayer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Play_ReturnValue, bool CallFunc_OpenSource_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "ExecuteUbergraph_WBP_MainMenu_MoviePlayer");

	Params::UWBP_MainMenu_MoviePlayer_C_ExecuteUbergraph_WBP_MainMenu_MoviePlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnMediaClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::OnMediaClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "OnMediaClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnTimerExec__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_MoviePlayer_C::OnTimerExec__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_MoviePlayer_C", "OnTimerExec__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


