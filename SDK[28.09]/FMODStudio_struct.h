// Enum FMODStudio.EFMODEventProperty
enum class EFMODEventProperty : uint8 {
	ChannelPriority = 0,
	ScheduleDelay = 1,
	ScheduleLookahead = 2,
	MinimumDistance = 3,
	MaximumDistance = 4,
	Count = 5,
	EFMODEventProperty_MAX = 6
};

// Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
enum class EFMOD_STUDIO_STOP_MODE : uint8 {
	ALLOWFADEOUT = 0,
	IMMEDIATE = 1,
	EFMOD_STUDIO_STOP_MODE_MAX = 2
};

// Enum FMODStudio.EFMODEventControlKey
enum class EFMODEventControlKey : uint8 {
	Stop = 0,
	Play = 1,
	EFMODEventControlKey_MAX = 2
};

// Enum FMODStudio.EFMODSpeakerMode
enum class EFMODSpeakerMode : uint8 {
	Stereo = 0,
	Surround_5_2 = 1,
	Surround_7_2 = 2,
	EFMODSpeakerMode_MAX = 3
};

// ScriptStruct FMODStudio.FMODOcclusionDetails
// Size: 0x14 (Inherited: 0x00)
struct FFMODOcclusionDetails {
	bool bEnableOcclusion; // 0x00(0x01)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float OcclusionLowPassFilterFrequency; // 0x04(0x04)
	float OcclusionVolumeAttenuation; // 0x08(0x04)
	float OcclusionInterpolationTime; // 0x0c(0x04)
	bool bUseComplexCollisionForOcclusion; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct FMODStudio.FMODAttenuationDetails
// Size: 0x0c (Inherited: 0x00)
struct FFMODAttenuationDetails {
	bool bOverrideAttenuation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinimumDistance; // 0x04(0x04)
	float MaximumDistance; // 0x08(0x04)
};

// ScriptStruct FMODStudio.FMODEventInstance
// Size: 0x08 (Inherited: 0x00)
struct FFMODEventInstance {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FMODStudio.FMODEventControlChannel
// Size: 0x98 (Inherited: 0x98)
struct FFMODEventControlChannel : FMovieSceneByteChannel {
};

// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
// Size: 0xb8 (Inherited: 0x20)
struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate {
	struct FFMODEventControlChannel ControlKeys; // 0x20(0x98)
};

// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
// Size: 0x80 (Inherited: 0x80)
struct FFMODEventParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct FMODStudio.CustomPoolSizes
// Size: 0x14 (Inherited: 0x00)
struct FCustomPoolSizes {
	int32_t Desktop; // 0x00(0x04)
	int32_t Mobile; // 0x04(0x04)
	int32_t PS4; // 0x08(0x04)
	int32_t Switch; // 0x0c(0x04)
	int32_t XboxOne; // 0x10(0x04)
};

