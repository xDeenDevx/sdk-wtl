/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UltraDynamicSky.

/// Class /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C
/// Size: 0x02F8 (0x000220 - 0x000518)
class AUltra_Dynamic_Sky_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	UStaticMeshComponent*                              moon_plane;                                                 // 0x0228   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0230   (0x0008)  
	UArrowComponent*                                   Sun_Root;                                                   // 0x0238   (0x0008)  
	UStaticMeshComponent*                              Ultra_Dynamic_Sky_Sphere;                                   // 0x0240   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0248   (0x0008)  
	ADirectionalLight*                                 Direction_Light__Sun_;                                      // 0x0250   (0x0008)  
	UMaterialInstanceDynamic*                          UDM_mat;                                                    // 0x0258   (0x0008)  
	bool                                               Refresh_Settings;                                           // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Cloud_Speed;                                                // 0x0264   (0x0004)  
	float                                              Cloud_Density;                                              // 0x0268   (0x0004)  
	float                                              Cloud_Wisps_Opacity;                                        // 0x026C   (0x0004)  
	TArray<UCurveLinearColor*>                         Horizon_Base_Color_Curve;                                   // 0x0270   (0x0010)  
	TArray<UCurveLinearColor*>                         Zenith_Base_Color_Curve;                                    // 0x0280   (0x0010)  
	TArray<UCurveLinearColor*>                         Cloud_Light_Color_Curve;                                    // 0x0290   (0x0010)  
	TArray<UCurveLinearColor*>                         Cloud_Dark_Color_Curve;                                     // 0x02A0   (0x0010)  
	float                                              Time_of_Day;                                                // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	TArray<UCurveLinearColor*>                         Sun_Color_Curve;                                            // 0x02B8   (0x0010)  
	UCurveFloat*                                       Shine_Intensity_Curve;                                      // 0x02C8   (0x0008)  
	float                                              Saturation;                                                 // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	UCurveLinearColor*                                 Sun_Cloudy_Color_Curve;                                     // 0x02D8   (0x0008)  
	AExponentialHeightFog*                             Exponential_Height_Fog;                                     // 0x02E0   (0x0008)  
	UCurveFloat*                                       Stars_Intensity_Curve;                                      // 0x02E8   (0x0008)  
	float                                              Cloud_Phase;                                                // 0x02F0   (0x0004)  
	float                                              Moon_Scale;                                                 // 0x02F4   (0x0004)  
	float                                              Moon_Inclination;                                           // 0x02F8   (0x0004)  
	float                                              Moon_Phase;                                                 // 0x02FC   (0x0004)  
	bool                                               Automatically_Set_Advanced_Settings_using_Time_of_Day;      // 0x0300   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0301   (0x0003)  MISSED
	float                                              Stars_Visibility;                                           // 0x0304   (0x0004)  
	float                                              Moon_Intensity;                                             // 0x0308   (0x0004)  
	float                                              Moon_Position;                                              // 0x030C   (0x0004)  
	float                                              Sun_Angle;                                                  // 0x0310   (0x0004)  
	FLinearColor                                       Horizon_Base_Color;                                         // 0x0314   (0x0010)  
	FLinearColor                                       Zenith_Base_Color;                                          // 0x0324   (0x0010)  
	FLinearColor                                       Cloud_Light_Color;                                          // 0x0334   (0x0010)  
	FLinearColor                                       Cloud_Dark_Color;                                           // 0x0344   (0x0010)  
	FLinearColor                                       Sun_Color;                                                  // 0x0354   (0x0010)  
	float                                              Cloud_Shine_Intensity;                                      // 0x0364   (0x0004)  
	FLinearColor                                       Sun_Light_Color;                                            // 0x0368   (0x0010)  
	float                                              Day_Length;                                                 // 0x0378   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	UCurveFloat*                                       Moon_Position_Curve;                                        // 0x0380   (0x0008)  
	bool                                               Animate_Day_Night_Cycle;                                    // 0x0388   (0x0001)  
	bool                                               Simulate_Cloud_Density_Changes;                             // 0x0389   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x038A   (0x0002)  MISSED
	float                                              Cloud_Density_Shift_Frequency__min_;                        // 0x038C   (0x0004)  
	float                                              Cloud_Density_Shift_Frequency__max_;                        // 0x0390   (0x0004)  
	float                                              Cloud_Density_target;                                       // 0x0394   (0x0004)  
	float                                              Cloud_Density_Change__Smoothing_;                           // 0x0398   (0x0004)  
	float                                              Cloud_Opacity;                                              // 0x039C   (0x0004)  
	float                                              Overall_Intensity;                                          // 0x03A0   (0x0004)  
	float                                              Sun_Brightness;                                             // 0x03A4   (0x0004)  
	FLinearColor                                       Moon_Color;                                                 // 0x03A8   (0x0010)  
	float                                              Shine_Variation;                                            // 0x03B8   (0x0004)  
	float                                              Sun_Lighting_Intensity;                                     // 0x03BC   (0x0004)  
	UCurveFloat*                                       Sun_Highlight_Radius_curve;                                 // 0x03C0   (0x0008)  
	float                                              Sun_Highlight_Radius;                                       // 0x03C8   (0x0004)  
	bool                                               First_Day;                                                  // 0x03CC   (0x0001)  
	bool                                               Simulate_Moon_Phase_Changes;                                // 0x03CD   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x03CE   (0x0002)  MISSED
	float                                              Stars_Intensity;                                            // 0x03D0   (0x0004)  
	FLinearColor                                       Stars_Color;                                                // 0x03D4   (0x0010)  
	float                                              Moon_Orbit_Offset;                                          // 0x03E4   (0x0004)  
	FRotator                                           Sun_Rotation;                                               // 0x03E8   (0x000C)  
	float                                              Sun_Radius;                                                 // 0x03F4   (0x0004)  
	UMaterialInstanceDynamic*                          Cloud_Shadows_MID;                                          // 0x03F8   (0x0008)  
	bool                                               Use_Cloud_Shadows;                                          // 0x0400   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0401   (0x0003)  MISSED
	float                                              Cloud_Shadows_Scale;                                        // 0x0404   (0x0004)  
	float                                              Cloud_Shadows_Intensity;                                    // 0x0408   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x040C   (0x0004)  MISSED
	ADirectionalLight*                                 Moon_Light;                                                 // 0x0410   (0x0008)  
	bool                                               Manually_Select_Sun_Color;                                  // 0x0418   (0x0001)  
	bool                                               Automatically_Set_Moon_Light_Rotation;                      // 0x0419   (0x0001)  
	bool                                               Automatically_Set_Sun_Light_Rotation;                       // 0x041A   (0x0001)  
	unsigned char                                      UnknownData09_5[0x1];                                       // 0x041B   (0x0001)  MISSED
	float                                              Moonlight_Intensity;                                        // 0x041C   (0x0004)  
	float                                              Stars_Speed;                                                // 0x0420   (0x0004)  
	float                                              Sun_Inclination;                                            // 0x0424   (0x0004)  
	float                                              Sun_Yaw;                                                    // 0x0428   (0x0004)  
	float                                              Moon_Rotation;                                              // 0x042C   (0x0004)  
	UTexture2D*                                        Custom_Moon_Texture;                                        // 0x0430   (0x0008)  
	bool                                               Use_Custom_Moon_Texture;                                    // 0x0438   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0439   (0x0007)  MISSED
	ASkyLight*                                         SkyLight;                                                   // 0x0440   (0x0008)  
	bool                                               Recapture_Sky_light_periodically;                           // 0x0448   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0449   (0x0003)  MISSED
	float                                              Sky_Light_recapture_period;                                 // 0x044C   (0x0004)  
	UCurveFloat*                                       Night_Filter_Curve;                                         // 0x0450   (0x0008)  
	float                                              Night_brightness;                                           // 0x0458   (0x0004)  
	float                                              Moon_Glow_Intensity;                                        // 0x045C   (0x0004)  
	UCurveFloat*                                       Directional_Intensity_Curve;                                // 0x0460   (0x0008)  
	float                                              Sun_Light_Intensity;                                        // 0x0468   (0x0004)  
	float                                              Aurora_Intensity;                                           // 0x046C   (0x0004)  
	float                                              Aurora_Speed;                                               // 0x0470   (0x0004)  
	bool                                               Use_Fast_Skylight;                                          // 0x0474   (0x0001)  
	bool                                               Use_Auroras;                                                // 0x0475   (0x0001)  
	unsigned char                                      UnknownData12_5[0x2];                                       // 0x0476   (0x0002)  MISSED
	UTexture*                                          Clouds_Base_Texture;                                        // 0x0478   (0x0008)  
	float                                              Cloud_Tiling;                                               // 0x0480   (0x0004)  
	float                                              Cloud_Direction;                                            // 0x0484   (0x0004)  
	bool                                               One_cloud_layer;                                            // 0x0488   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0489   (0x0003)  MISSED
	float                                              Cloud_Height_1;                                             // 0x048C   (0x0004)  
	float                                              Cloud_Height_2;                                             // 0x0490   (0x0004)  
	int32_t                                            color_scheme;                                               // 0x0494   (0x0004)  
	UMaterialInstanceDynamic*                          Moon_mat;                                                   // 0x0498   (0x0008)  
	float                                              Moon_Angle;                                                 // 0x04A0   (0x0004)  
	float                                              Sun_Volumetric_Scattering_Intensity;                        // 0x04A4   (0x0004)  
	float                                              Moon_Volumetric_Scattering_Intensity;                       // 0x04A8   (0x0004)  
	int32_t                                            color_scheme_new;                                           // 0x04AC   (0x0004)  
	float                                              alpha_color_scheme;                                         // 0x04B0   (0x0004)  
	unsigned char                                      UnknownData14_5[0x4];                                       // 0x04B4   (0x0004)  MISSED
	TMap<EWTLWeatherType, FST_WeatherScheme>           WeatherSchemes;                                             // 0x04B8   (0x0050)  
	EWTLWeatherType                                    CurrentWeatherScheme;                                       // 0x0508   (0x0001)  
	EWTLWeatherType                                    TransitionWeatherScheme;                                    // 0x0509   (0x0001)  
	bool                                               bIsRainParticlesEnabledOnThisLocation;                      // 0x050A   (0x0001)  
	bool                                               UseStaticSunHighlightRadius;                                // 0x050B   (0x0001)  
	float                                              StaticSunHighlightRadius;                                   // 0x050C   (0x0004)  
	bool                                               oldFog;                                                     // 0x0510   (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x0511   (0x0003)  MISSED
	float                                              TimeOfDay_0_1_;                                             // 0x0514   (0x0004)  


	/// Functions
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetPostProcessColorTint
	void GetPostProcessColorTint(FLinearColor& PostProcessColor);                                                            // [0x1ad0090] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetWeatherScheme
	void GetWeatherScheme(EWTLWeatherType WeatherType, FST_WeatherScheme& Scheme);                                           // [0x1ad0090] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
	void Set Material Variables();                                                                                           // [0x1ad0090] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
	void Set Solar Angle();                                                                                                  // [0x1ad0090] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x1ad0090] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1ad0090] Event|Public|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
	void ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int32_t EntryPoint);                                                          // [0x1ad0090] Final                
};

