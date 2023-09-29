// WidgetBlueprintGeneratedClass WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C
// Size: 0x308 (Inherited: 0x2b8)
struct UWBP_MainMenu_MoviePlayer_C : UWTLMainMenuMoviePlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* imgBlackScreen; // 0x2c0(0x08)
	struct UImage* imgMovie; // 0x2c8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnTimerExec; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x2e8(0x10)
	struct FTimerHandle TimerHandle; // 0x2f8(0x08)
	struct UAudioComponent* AudioComponent; // 0x300(0x08)

	void CloseMediaPlayer(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.CloseMediaPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnTimerExec_Event(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnTimerExec_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void Construct(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnMediaClosed_Event(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnMediaClosed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnPlayMovie(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnPlayMovie // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnStopMovie(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnStopMovie // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_WBP_MainMenu_MoviePlayer(int32_t EntryPoint); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.ExecuteUbergraph_WBP_MainMenu_MoviePlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
	void OnMediaClosed__DelegateSignature(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnMediaClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnTimerExec__DelegateSignature(); // Function WBP_MainMenu_MoviePlayer.WBP_MainMenu_MoviePlayer_C.OnTimerExec__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
};

