#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFMODEventProperty : uint8
{
	ChannelPriority                = 0,
	ScheduleDelay                  = 1,
	ScheduleLookahead              = 2,
	MinimumDistance                = 3,
	MaximumDistance                = 4,
	Count                          = 5,
	EFMODEventProperty_MAX         = 6,
};

enum class EFMOD_STUDIO_STOP_MODE : uint8
{
	ALLOWFADEOUT                   = 0,
	IMMEDIATE                      = 1,
	EFMOD_STUDIO_STOP_MODE_MAX     = 2,
};

enum class EFMODEventControlKey : uint8
{
	Stop                           = 0,
	Play                           = 1,
	EFMODEventControlKey_MAX       = 2,
};

enum class EFMODSpeakerMode : uint8
{
	Stereo                         = 0,
	Surround_5_1                   = 1,
	Surround_7_1                   = 2,
	EFMODSpeakerMode_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct FMODStudio.FMODOcclusionDetails
struct FFMODOcclusionDetails
{
public:
	bool                                         bEnableOcclusion;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OcclusionTraceChannel;                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionLowPassFilterFrequency;                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionVolumeAttenuation;                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionInterpolationTime;                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseComplexCollisionForOcclusion;                  // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FMODStudio.FMODAttenuationDetails
struct FFMODAttenuationDetails
{
public:
	bool                                         bOverrideAttenuation;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistance;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FMODStudio.FMODEventInstance
struct FFMODEventInstance
{
public:
	uint8                                        Pad_1F1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x98 - 0x98)
// ScriptStruct FMODStudio.FMODEventControlChannel
struct FFMODEventControlChannel : public FMovieSceneByteChannel
{
public:
};

// 0x98 (0xB8 - 0x20)
// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FFMODEventControlChannel              ControlKeys;                                       // 0x20(0x98)(NativeAccessSpecifierPublic)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FMODStudio.CustomPoolSizes
struct FCustomPoolSizes
{
public:
	int32                                        Desktop;                                           // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mobile;                                            // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PS4;                                               // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Switch;                                            // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XboxOne;                                           // 0x10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


