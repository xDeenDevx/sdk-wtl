// BlueprintGeneratedClass BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_ElectricLightBlinkMainMenu_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USpotLightComponent* SpotLight; // 0x228(0x08)
	float Blink_NewTrack_0_47A0275A4D841953DF1555B1760B1EBB; // 0x230(0x04)
	enum class ETimelineDirection Blink__Direction_47A0275A4D841953DF1555B1760B1EBB; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct UTimelineComponent* Blink; // 0x238(0x08)
	float LightIntensity; // 0x240(0x04)
	float OuterConeAngle; // 0x244(0x04)
	float InnerConeAngle; // 0x248(0x04)
	struct FLinearColor EmissiveColor; // 0x24c(0x10)
	float EmissiveIntensity; // 0x25c(0x04)
	float PlafonEmissiveIntensity; // 0x260(0x04)
	float AttenuationRadius; // 0x264(0x04)
	bool CastShadow; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float LastLightIntensity; // 0x26c(0x04)
	float LastEmissiveIntensity; // 0x270(0x04)
	float LastPlafonEmissiveIntensity; // 0x274(0x04)

	void UserConstructionScript(); // Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Blink__FinishedFunc(); // Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__FinishedFunc // (BlueprintEvent) // @ game+0x1ad0090
	void Blink__UpdateFunc(); // Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__UpdateFunc // (BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_ElectricLightBlinkMainMenu(int32_t EntryPoint); // Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ExecuteUbergraph_BP_ElectricLightBlinkMainMenu // (Final|UbergraphFunction) // @ game+0x1ad0090
};

