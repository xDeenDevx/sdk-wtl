// BlueprintGeneratedClass MainMenu.MainMenu_C
// Size: 0x8a0 (Inherited: 0x6d0)
struct AMainMenu_C : AWTLMainMenuLevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct ABP_MainMenu_Pawn_C* CameraPawn; // 0x6d8(0x08)
	float Acc; // 0x6e0(0x04)
	char pad_6E4[0xc]; // 0x6e4(0x0c)
	struct FTransform DesiredCameraPosition; // 0x6f0(0x30)
	struct FTransform OriginalCameraPosition; // 0x720(0x30)
	struct FTransform CharacterCameraPosition; // 0x750(0x30)
	struct FTransform CharacterHeadCameraPosition; // 0x780(0x30)
	struct FTransform CharacterTorsoCameraPosition; // 0x7b0(0x30)
	struct FTransform CharacterLegsCameraPosition; // 0x7e0(0x30)
	struct FTransform CharacterFeetCameraPosition; // 0x810(0x30)
	struct FTransform CharacterWatchesCameraPosition; // 0x840(0x30)
	struct FTransform CharacterBackpackCameraPosition; // 0x870(0x30)

	void ReceiveTick(float DeltaSeconds); // Function MainMenu.MainMenu_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToOriginalPoint(); // Function MainMenu.MainMenu_C.MoveCameraToOriginalPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterTorsoPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterTorsoPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterHeadPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterHeadPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterLegsPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterLegsPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterFeetPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterFeetPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterWatchesPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterWatchesPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterBackpackPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterBackpackPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void MoveCameraToCharacterCommonPoint(); // Function MainMenu.MainMenu_C.MoveCameraToCharacterCommonPoint // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function MainMenu.MainMenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_MainMenu(int32_t EntryPoint); // Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

