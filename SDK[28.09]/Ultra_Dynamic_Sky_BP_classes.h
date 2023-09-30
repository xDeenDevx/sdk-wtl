// BlueprintGeneratedClass Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C
// Size: 0x518 (Inherited: 0x220)
struct AUltra_Dynamic_Sky_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* moon_plane; // 0x228(0x08)
	struct UArrowComponent* Arrow; // 0x230(0x08)
	struct UArrowComponent* Sun_Root; // 0x238(0x08)
	struct UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct ADirectionalLight* Direction Light (Sun); // 0x250(0x08)
	struct UMaterialInstanceDynamic* UDM_mat; // 0x258(0x08)
	bool Refresh Settings; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float Cloud Speed; // 0x264(0x04)
	float Cloud Density; // 0x268(0x04)
	float Cloud Wisps Opacity; // 0x26c(0x04)
	struct TArray<struct UCurveLinearColor*> Horizon Base Color Curve; // 0x270(0x10)
	struct TArray<struct UCurveLinearColor*> Zenith Base Color Curve; // 0x280(0x10)
	struct TArray<struct UCurveLinearColor*> Cloud Light Color Curve; // 0x290(0x10)
	struct TArray<struct UCurveLinearColor*> Cloud Dark Color Curve; // 0x2a0(0x10)
	float Time of Day; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct UCurveLinearColor*> Sun Color Curve; // 0x2b8(0x10)
	struct UCurveFloat* Shine Intensity Curve; // 0x2c8(0x08)
	float Saturation; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UCurveLinearColor* Sun Cloudy Color Curve; // 0x2d8(0x08)
	struct AExponentialHeightFog* Exponential Height Fog; // 0x2e0(0x08)
	struct UCurveFloat* Stars Intensity Curve; // 0x2e8(0x08)
	float Cloud Phase; // 0x2f0(0x04)
	float Moon Scale; // 0x2f4(0x04)
	float Moon Inclination; // 0x2f8(0x04)
	float Moon Phase; // 0x2fc(0x04)
	bool Automatically Set Advanced Settings using Time of Day; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float Stars Visibility; // 0x304(0x04)
	float Moon Intensity; // 0x308(0x04)
	float Moon Position; // 0x30c(0x04)
	float Sun Angle; // 0x310(0x04)
	struct FLinearColor Horizon Base Color; // 0x314(0x10)
	struct FLinearColor Zenith Base Color; // 0x324(0x10)
	struct FLinearColor Cloud Light Color; // 0x334(0x10)
	struct FLinearColor Cloud Dark Color; // 0x344(0x10)
	struct FLinearColor Sun Color; // 0x354(0x10)
	float Cloud Shine Intensity; // 0x364(0x04)
	struct FLinearColor Sun Light Color; // 0x368(0x10)
	float Day Length; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UCurveFloat* Moon Position Curve; // 0x380(0x08)
	bool Night Cycle; // 0x388(0x01)
	bool Simulate Cloud Density Changes; // 0x389(0x01)
	char pad_38A[0x2]; // 0x38a(0x02)
	float Cloud Density Shift Frequency (min); // 0x38c(0x04)
	float Cloud Density Shift Frequency (max); // 0x390(0x04)
	float Cloud Density_target; // 0x394(0x04)
	float Cloud Density Change (Smoothing); // 0x398(0x04)
	float Cloud Opacity; // 0x39c(0x04)
	float Overall Intensity; // 0x3a0(0x04)
	float Sun Brightness; // 0x3a4(0x04)
	struct FLinearColor Moon Color; // 0x3a8(0x10)
	float Shine Variation; // 0x3b8(0x04)
	float Sun Lighting Intensity; // 0x3bc(0x04)
	struct UCurveFloat* Sun Highlight Radius_curve; // 0x3c0(0x08)
	float Sun Highlight Radius; // 0x3c8(0x04)
	bool First Day; // 0x3cc(0x01)
	bool Simulate Moon Phase Changes; // 0x3cd(0x01)
	char pad_3CE[0x2]; // 0x3ce(0x02)
	float Stars_Intensity; // 0x3d0(0x04)
	struct FLinearColor Stars_Color; // 0x3d4(0x10)
	float Moon Orbit Offset; // 0x3e4(0x04)
	struct FRotator Sun Rotation; // 0x3e8(0x0c)
	float Sun Radius; // 0x3f4(0x04)
	struct UMaterialInstanceDynamic* Cloud Shadows MID; // 0x3f8(0x08)
	bool Use Cloud Shadows; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float Cloud Shadows Scale; // 0x404(0x04)
	float Cloud Shadows Intensity; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct ADirectionalLight* Moon Light; // 0x410(0x08)
	bool Manually Select Sun Color; // 0x418(0x01)
	bool Automatically Set Moon Light Rotation; // 0x419(0x01)
	bool Automatically Set Sun Light Rotation; // 0x41a(0x01)
	char pad_41B[0x1]; // 0x41b(0x01)
	float Moonlight Intensity; // 0x41c(0x04)
	float Stars Speed; // 0x420(0x04)
	float Sun Inclination; // 0x424(0x04)
	float Sun Yaw; // 0x428(0x04)
	float Moon Rotation; // 0x42c(0x04)
	struct UTexture2D* Custom Moon Texture; // 0x430(0x08)
	bool Use Custom Moon Texture; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct ASkyLight* SkyLight; // 0x440(0x08)
	bool Recapture Sky light periodically; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float Sky Light recapture period; // 0x44c(0x04)
	struct UCurveFloat* Night Filter Curve; // 0x450(0x08)
	float Night brightness; // 0x458(0x04)
	float Moon Glow Intensity; // 0x45c(0x04)
	struct UCurveFloat* Directional_Intensity_Curve; // 0x460(0x08)
	float Sun_Light_Intensity; // 0x468(0x04)
	float Aurora Intensity; // 0x46c(0x04)
	float Aurora Speed; // 0x470(0x04)
	bool Use Fast Skylight; // 0x474(0x01)
	bool Use Auroras; // 0x475(0x01)
	char pad_476[0x2]; // 0x476(0x02)
	struct UTexture* Clouds Base Texture; // 0x478(0x08)
	float Cloud Tiling; // 0x480(0x04)
	float Cloud Direction; // 0x484(0x04)
	bool One cloud layer; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float Cloud Height 1; // 0x48c(0x04)
	float Cloud Height 2; // 0x490(0x04)
	int32_t color_scheme; // 0x494(0x04)
	struct UMaterialInstanceDynamic* Moon mat; // 0x498(0x08)
	float Moon Angle; // 0x4a0(0x04)
	float Sun_Volumetric_Scattering_Intensity; // 0x4a4(0x04)
	float Moon_Volumetric_Scattering_Intensity; // 0x4a8(0x04)
	int32_t color_scheme_new; // 0x4ac(0x04)
	float alpha_color_scheme; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct TMap<enum class EWTLWeatherType, struct FST_WeatherScheme> WeatherSchemes; // 0x4b8(0x50)
	enum class EWTLWeatherType CurrentWeatherScheme; // 0x508(0x01)
	enum class EWTLWeatherType TransitionWeatherScheme; // 0x509(0x01)
	bool bIsRainParticlesEnabledOnThisLocation; // 0x50a(0x01)
	bool UseStaticSunHighlightRadius; // 0x50b(0x01)
	float StaticSunHighlightRadius; // 0x50c(0x04)
	bool oldFog; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	float TimeOfDay(0-1); // 0x514(0x04)

	void GetPostProcessColorTint(struct FLinearColor& PostProcessColor); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetPostProcessColorTint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetWeatherScheme(enum class EWTLWeatherType WeatherType, struct FST_WeatherScheme& Scheme); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetWeatherScheme // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void Set Material Variables(); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Set Solar Angle(); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UserConstructionScript(); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int32_t EntryPoint); // Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP // (Final|UbergraphFunction) // @ game+0x1ad0090
};

