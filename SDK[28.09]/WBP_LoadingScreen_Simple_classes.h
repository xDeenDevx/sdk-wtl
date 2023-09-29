// WidgetBlueprintGeneratedClass WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C
// Size: 0x298 (Inherited: 0x270)
struct UWBP_LoadingScreen_Simple_C : UWTLLoadingScreenSimple {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* AnimPressKeyTextBlinking; // 0x278(0x08)
	struct UImage* imgBackground; // 0x280(0x08)
	struct UTextBlock* tbColon; // 0x288(0x08)
	struct UThrobber* thLoading; // 0x290(0x08)

	void Construct(); // Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_WBP_LoadingScreen_Simple(int32_t EntryPoint); // Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.ExecuteUbergraph_WBP_LoadingScreen_Simple // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

