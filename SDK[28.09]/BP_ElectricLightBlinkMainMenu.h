/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package BP_ElectricLightBlinkMainMenu.

/// Class /Game/BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C
/// Size: 0x0058 (0x000220 - 0x000278)
class ABP_ElectricLightBlinkMainMenu_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	USpotLightComponent*                               SpotLight;                                                  // 0x0228   (0x0008)  
	float                                              Blink_NewTrack_0_47A0275A4D841953DF1555B1760B1EBB;          // 0x0230   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Blink__Direction_47A0275A4D841953DF1555B1760B1EBB;          // 0x0234   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0235   (0x0003)  MISSED
	UTimelineComponent*                                Blink;                                                      // 0x0238   (0x0008)  
	float                                              LightIntensity;                                             // 0x0240   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x0244   (0x0004)  
	float                                              InnerConeAngle;                                             // 0x0248   (0x0004)  
	FLinearColor                                       EmissiveColor;                                              // 0x024C   (0x0010)  
	float                                              EmissiveIntensity;                                          // 0x025C   (0x0004)  
	float                                              PlafonEmissiveIntensity;                                    // 0x0260   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0264   (0x0004)  
	bool                                               CastShadow;                                                 // 0x0268   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              LastLightIntensity;                                         // 0x026C   (0x0004)  
	float                                              LastEmissiveIntensity;                                      // 0x0270   (0x0004)  
	float                                              LastPlafonEmissiveIntensity;                                // 0x0274   (0x0004)  


	/// Functions
	// Function /Game/BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x1ad0090] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__FinishedFunc
	void Blink__FinishedFunc();                                                                                              // [0x1ad0090] BlueprintEvent       
	// Function /Game/BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__UpdateFunc
	void Blink__UpdateFunc();                                                                                                // [0x1ad0090] BlueprintEvent       
	// Function /Game/BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Game/BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ExecuteUbergraph_BP_ElectricLightBlinkMainMenu
	void ExecuteUbergraph_BP_ElectricLightBlinkMainMenu(int32_t EntryPoint);                                                 // [0x1ad0090] Final                
};

