// WidgetBlueprintGeneratedClass WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C
// Size: 0x364 (Inherited: 0x268)
struct UWBP_HUD_LegendaryMonsterInfo_C : UWTLHUDWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* imgIconLeft; // 0x270(0x08)
	struct UImage* imgIconRight; // 0x278(0x08)
	struct UImage* imgProgressBar; // 0x280(0x08)
	struct USizeBox* sbProgressBar; // 0x288(0x08)
	struct UTextBlock* tbMonsterName; // 0x290(0x08)
	float DeltaSec; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UBP_LegendaryMonsterComponent_C* InstigatorComponent; // 0x2a0(0x08)
	float MaxWidth; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UMaterialInstanceDynamic* myMaterialInst; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* mySkullLMaterialInst; // 0x2b8(0x08)
	struct UMaterialInstanceDynamic* mySkullRMaterialInst; // 0x2c0(0x08)
	struct FS_HUD_LMI_Data DesiredHUDData; // 0x2c8(0x40)
	struct FS_HUD_LMI_Data CurrentHUDData; // 0x308(0x40)
	bool IsPropertyChanged; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	float CurrentInstigatorDistanceSquared; // 0x34c(0x04)
	enum class E_State_HUD_LMI State; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float CurrentAlpha; // 0x354(0x04)
	float CurrentValue; // 0x358(0x04)
	float DesiredValue; // 0x35c(0x04)
	float InitValue; // 0x360(0x04)

	void HideAlpha(); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.HideAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateProgress(); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ShowAlpha(); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.ShowAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init(); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckPropertyChanged(); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.CheckPropertyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Deactivate(struct UBP_LegendaryMonsterComponent_C* inInstigatorComponent); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Activate(float inInstigatorDistanceSquared, struct UBP_LegendaryMonsterComponent_C* inInstigatorComponent, float CurrentHealthAplha, struct FS_HUD_LMI_Data inDesiredHUDData); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Construct(); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_WBP_HUD_LegendaryMonsterInfo(int32_t EntryPoint); // Function WBP_HUD_LegendaryMonsterInfo.WBP_HUD_LegendaryMonsterInfo_C.ExecuteUbergraph_WBP_HUD_LegendaryMonsterInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

