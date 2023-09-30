/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Maps.

/// Class /Game/Maps/MainMenu_Hangar/Blueprints/BP_MainMenu_Pawn.BP_MainMenu_Pawn_C
/// Size: 0x0010 (0x000280 - 0x000290)
class ABP_MainMenu_Pawn_C : public APawn
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UCineCameraComponent*                              CineCamera;                                                 // 0x0288   (0x0008)  


	/// Functions
	// Function /Game/Maps/MainMenu_Hangar/Blueprints/BP_MainMenu_Pawn.BP_MainMenu_Pawn_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/MainMenu_Hangar/Blueprints/BP_MainMenu_Pawn.BP_MainMenu_Pawn_C.ExecuteUbergraph_BP_MainMenu_Pawn
	void ExecuteUbergraph_BP_MainMenu_Pawn(int32_t EntryPoint);                                                              // [0x1ad0090] Final                
};

/// Class /Game/Maps/MainMenu.MainMenu_C
/// Size: 0x01D0 (0x0006D0 - 0x0008A0)
class AMainMenu_C : public AWTLMainMenuLevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06D0   (0x0008)  
	ABP_MainMenu_Pawn_C*                               CameraPawn;                                                 // 0x06D8   (0x0008)  
	float                                              Acc;                                                        // 0x06E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x06E4   (0x000C)  MISSED
	FTransform                                         DesiredCameraPosition;                                      // 0x06F0   (0x0030)  
	FTransform                                         OriginalCameraPosition;                                     // 0x0720   (0x0030)  
	FTransform                                         CharacterCameraPosition;                                    // 0x0750   (0x0030)  
	FTransform                                         CharacterHeadCameraPosition;                                // 0x0780   (0x0030)  
	FTransform                                         CharacterTorsoCameraPosition;                               // 0x07B0   (0x0030)  
	FTransform                                         CharacterLegsCameraPosition;                                // 0x07E0   (0x0030)  
	FTransform                                         CharacterFeetCameraPosition;                                // 0x0810   (0x0030)  
	FTransform                                         CharacterWatchesCameraPosition;                             // 0x0840   (0x0030)  
	FTransform                                         CharacterBackpackCameraPosition;                            // 0x0870   (0x0030)  


	/// Functions
	// Function /Game/Maps/MainMenu.MainMenu_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToOriginalPoint
	void MoveCameraToOriginalPoint();                                                                                        // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterTorsoPoint
	void MoveCameraToCharacterTorsoPoint();                                                                                  // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterPoint
	void MoveCameraToCharacterPoint();                                                                                       // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterHeadPoint
	void MoveCameraToCharacterHeadPoint();                                                                                   // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterLegsPoint
	void MoveCameraToCharacterLegsPoint();                                                                                   // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterFeetPoint
	void MoveCameraToCharacterFeetPoint();                                                                                   // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterWatchesPoint
	void MoveCameraToCharacterWatchesPoint();                                                                                // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterBackpackPoint
	void MoveCameraToCharacterBackpackPoint();                                                                               // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.MoveCameraToCharacterCommonPoint
	void MoveCameraToCharacterCommonPoint();                                                                                 // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	void ExecuteUbergraph_MainMenu(int32_t EntryPoint);                                                                      // [0x1ad0090] Final|HasDefaults    
};

