#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x308 - 0x2B8)
// WidgetBlueprintGeneratedClass WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C
class UWBP_MainMenu_MoviePlayer_C : public UWTLMainMenuMoviePlayer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ImgBlackScreen;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgMovie;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTimerExec;                                       // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          TimerHandle;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioComponent;                                    // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_MoviePlayer_C* GetDefaultObj();

	void CloseMediaPlayer();
	void OnTimerExec_Event();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnMediaClosed_Event();
	void OnPlayMovie();
	void OnStopMovie();
	void ExecuteUbergraph_WBP_MainMenu_MoviePlayer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Play_ReturnValue, bool CallFunc_OpenSource_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void OnMediaClosed__DelegateSignature();
	void OnTimerExec__DelegateSignature();
};

}


