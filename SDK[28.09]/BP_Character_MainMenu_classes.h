// BlueprintGeneratedClass BP_Character_MainMenu.BP_Character_MainMenu_C
// Size: 0x5b8 (Inherited: 0x5a0)
struct ABP_Character_MainMenu_C : AWTLMainMenuCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	float EyeBlink_NewTrack_0_2938E1A04E1409EE58A4BB8331E7642D; // 0x5a8(0x04)
	enum class ETimelineDirection EyeBlink__Direction_2938E1A04E1409EE58A4BB8331E7642D; // 0x5ac(0x01)
	char pad_5AD[0x3]; // 0x5ad(0x03)
	struct UTimelineComponent* EyeBlink; // 0x5b0(0x08)

	void EyeBlink__FinishedFunc(); // Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__FinishedFunc // (BlueprintEvent) // @ game+0x1ad0090
	void EyeBlink__UpdateFunc(); // Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__UpdateFunc // (BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Character_MainMenu.BP_Character_MainMenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Character_MainMenu(int32_t EntryPoint); // Function BP_Character_MainMenu.BP_Character_MainMenu_C.ExecuteUbergraph_BP_Character_MainMenu // (Final|UbergraphFunction) // @ game+0x1ad0090
};

