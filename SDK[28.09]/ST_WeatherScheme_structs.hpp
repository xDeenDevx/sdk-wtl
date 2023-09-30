#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x78 - 0x0)
// UserDefinedStruct ST_WeatherScheme.ST_WeatherScheme
struct FST_WeatherScheme
{
public:
	float                                        CloudDensity_3_379A086D4DFA6191C20DB7A59428ECD5;   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoonIntensity_7_154D98184900D4157902F2A3B572C7FA;  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_6_B0BEDF37446BAA52764525A933D1D268;     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverallIntensity_11_24DAF7B247FA2997FB47C685BB10D287; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SunBrightness_13_2566699542EA6AA0BD8640A9D0B34353; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SunLightingIntensity_15_5B5E97EF438AC3E63F1CEEAE5884D260; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SunIntensityMultiplier_36_BF4E3E8F453067E251F7D9A513101A60; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1411[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     HorizonBaseColorCurve_27_70F23F4944B79D1A5CF720BCB031B796; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     ZenithBaseColorCurve_28_6077562242BA56F5F17EF8B4D2B2F843; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CloudLightColorCurve_29_85BEF7BA4A2300075D6D1AACDB48EA5E; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CloudDarkColorCurve_30_9F40C7344D417AC4515E20AC74CF915E; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     SunColorCurve_31_DA9008094F11BA9741DB55A059D5E7A9; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FogDensity_38_F99F0D2B4500323900BBDBB70DD2AC66;    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FogHeightFalloff_45_524DCC4A4B90EA5F8F9E6BBC1263EA37; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FogStartDistance_40_05CC49BF40712380F81A5F9A0CDE5A17; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FogCutoffDistance_43_4F93197F41D7D794A4B1188819017667; // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PostProcessSceneColorTint_48_979F9FE6477CA3880EC647ACB5464BEF; // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FogColor_51_738E10244157E6FCB3831FB98A95346B;      // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


