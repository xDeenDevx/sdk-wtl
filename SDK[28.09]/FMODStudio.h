/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FMODStudio.

/// Class /Script/FMODStudio.FMODAmbientSound
/// Size: 0x0008 (0x000220 - 0x000228)
class AFMODAmbientSound : public AActor
{ 
public:
	UFMODAudioComponent*                               AudioComponent;                                             // 0x0220   (0x0008)  
};

/// Class /Script/FMODStudio.FMODAnimNotifyPlay
/// Size: 0x0040 (0x000038 - 0x000078)
class UFMODAnimNotifyPlay : public UAnimNotify
{ 
public:
	bool                                               bFollow;                                                    // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AttachName;                                                 // 0x0040   (0x0010)  
	TWeakObjectPtr<UFMODEvent*>                        Event;                                                      // 0x0050   (0x0028)  
};

/// Class /Script/FMODStudio.FMODAsset
/// Size: 0x0028 (0x000028 - 0x000050)
class UFMODAsset : public UObject
{ 
public:
	FGuid                                              AssetGuid;                                                  // 0x0028   (0x0010)  
	bool                                               bShowAsAsset;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0039   (0x0017)  MISSED
};

/// Class /Script/FMODStudio.FMODAudioComponent
/// Size: 0x01E0 (0x000200 - 0x0003E0)
class UFMODAudioComponent : public USceneComponent
{ 
public:
	TWeakObjectPtr<UFMODEvent*>                        Event;                                                      // 0x01F8   (0x0028)  
	TMap<FName, float>                                 ParameterCache;                                             // 0x0220   (0x0050)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0270   (0x0008)  MISSED
	FString                                            ProgrammerSoundName;                                        // 0x0278   (0x0010)  
	bool                                               bEnableTimelineCallbacks;                                   // 0x0288:0 (0x0001)  
	unsigned char                                      UnknownData01_3[0x17];                                      // 0x0289   (0x0017)  MISSED
	bool                                               bAutoDestroy;                                               // 0x02A0:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed;                                    // 0x02A0:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x7];                                       // 0x02A1   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnEventStopped;                                             // 0x02A8   (0x0010)  
	FMulticastInlineDelegate                           OnTimelineMarker;                                           // 0x02B8   (0x0010)  
	FMulticastInlineDelegate                           OnTimelineBeat;                                             // 0x02C8   (0x0010)  
	FFMODAttenuationDetails                            AttenuationDetails;                                         // 0x02D8   (0x000C)  
	FFMODOcclusionDetails                              OcclusionDetails;                                           // 0x02E4   (0x0014)  
	bool                                               bUseDistanceDelay;                                          // 0x02F8:0 (0x0001)  
	unsigned char                                      UnknownData03_6[0xE7];                                      // 0x02F9   (0x00E7)  MISSED


	/// Functions
	// Function /Script/FMODStudio.FMODAudioComponent.TriggerCue
	void TriggerCue();                                                                                                       // [0xb5c330] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.Stop
	void Stop();                                                                                                             // [0xb5c400] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetVolume
	void SetVolume(float Volume);                                                                                            // [0xb5c1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetTimelinePosition
	void SetTimelinePosition(int32_t Time);                                                                                  // [0xb5b900] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetProperty
	void SetProperty(TEnumAsByte<EFMODEventProperty> Property, float Value);                                                 // [0xb5bc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetProgrammerSoundName
	void SetProgrammerSoundName(FString Value);                                                                              // [0xb5b710] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetPitch
	void SetPitch(float Pitch);                                                                                              // [0xb5c0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetPaused
	void SetPaused(bool paused);                                                                                             // [0xb5bfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetParameter
	void SetParameter(FName Name, float Value);                                                                              // [0xb5be70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetEvent
	void SetEvent(UFMODEvent* NewEvent);                                                                                     // [0xb5c440] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.Release
	void Release();                                                                                                          // [0xb5c3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.Play
	void Play();                                                                                                             // [0xb5c420] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0xb5c300] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetTimelinePosition
	int32_t GetTimelinePosition();                                                                                           // [0xb5b880] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetProperty
	float GetProperty(TEnumAsByte<EFMODEventProperty> Property);                                                             // [0xb5ba30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetParameter
	float GetParameter(FName Name);                                                                                          // [0xb5bd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetLength
	int32_t GetLength();                                                                                                     // [0xb5ba10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMODStudio.FMODBank
/// Size: 0x0000 (0x000050 - 0x000050)
class UFMODBank : public UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODBlueprintStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FMODStudio.FMODBus
/// Size: 0x0000 (0x000050 - 0x000050)
class UFMODBus : public UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODEvent
/// Size: 0x0000 (0x000050 - 0x000050)
class UFMODEvent : public UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODEventControlSection
/// Size: 0x0098 (0x0000E8 - 0x000180)
class UFMODEventControlSection : public UMovieSceneSection
{ 
public:
	FFMODEventControlChannel                           ControlKeys;                                                // 0x00E8   (0x0098)  
};

/// Class /Script/FMODStudio.FMODEventControlTrack
/// Size: 0x0010 (0x000078 - 0x000088)
class UFMODEventControlTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        ControlSections;                                            // 0x0078   (0x0010)  
};

/// Class /Script/FMODStudio.FMODEventParameterTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0078   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0080   (0x0010)  
};

/// Class /Script/FMODStudio.FMODSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UFMODSettings : public UObject
{ 
public:
	bool                                               bLoadAllBanks;                                              // 0x0028   (0x0001)  
	bool                                               bLoadAllSampleData;                                         // 0x0029   (0x0001)  
	bool                                               bEnableLiveUpdate;                                          // 0x002A   (0x0001)  
	bool                                               bEnableEditorLiveUpdate;                                    // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FDirectoryPath                                     BankOutputDirectory;                                        // 0x0030   (0x0010)  
	TEnumAsByte<EFMODSpeakerMode>                      OutputFormat;                                               // 0x0040   (0x0001)  
	bool                                               bVol0Virtual;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              Vol0VirtualLevel;                                           // 0x0044   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0048   (0x0004)  
	bool                                               bMatchHardwareSampleRate;                                   // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	int32_t                                            RealChannelCount;                                           // 0x0050   (0x0004)  
	int32_t                                            TotalChannelCount;                                          // 0x0054   (0x0004)  
	int32_t                                            DSPBufferLength;                                            // 0x0058   (0x0004)  
	int32_t                                            DSPBufferCount;                                             // 0x005C   (0x0004)  
	int32_t                                            FileBufferSize;                                             // 0x0060   (0x0004)  
	int32_t                                            StudioUpdatePeriod;                                         // 0x0064   (0x0004)  
	FString                                            InitialOutputDriverName;                                    // 0x0068   (0x0010)  
	bool                                               bLockAllBuses;                                              // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	FCustomPoolSizes                                   MemoryPoolSizes;                                            // 0x007C   (0x0014)  
	int32_t                                            LiveUpdatePort;                                             // 0x0090   (0x0004)  
	int32_t                                            EditorLiveUpdatePort;                                       // 0x0094   (0x0004)  
	TArray<FString>                                    PluginFiles;                                                // 0x0098   (0x0010)  
	FString                                            ContentBrowserPrefix;                                       // 0x00A8   (0x0010)  
	FString                                            ForcePlatformName;                                          // 0x00B8   (0x0010)  
	FString                                            MasterBankName;                                             // 0x00C8   (0x0010)  
	FString                                            SkipLoadBankName;                                           // 0x00D8   (0x0010)  
	FString                                            WavWriterPath;                                              // 0x00E8   (0x0010)  
};

/// Class /Script/FMODStudio.FMODSnapshot
/// Size: 0x0000 (0x000050 - 0x000050)
class UFMODSnapshot : public UFMODEvent
{ 
public:
};

/// Class /Script/FMODStudio.FMODSnapshotReverb
/// Size: 0x0018 (0x000060 - 0x000078)
class UFMODSnapshotReverb : public UReverbEffect
{ 
public:
	FGuid                                              AssetGuid;                                                  // 0x0060   (0x0010)  
	bool                                               bShowAsAsset;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/FMODStudio.FMODVCA
/// Size: 0x0000 (0x000050 - 0x000050)
class UFMODVCA : public UFMODAsset
{ 
public:
};

/// Struct /Script/FMODStudio.FMODOcclusionDetails
/// Size: 0x0014 (0x000000 - 0x000014)
struct FFMODOcclusionDetails
{ 
	bool                                               bEnableOcclusion;                                           // 0x0000   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              OcclusionLowPassFilterFrequency;                            // 0x0004   (0x0004)  
	float                                              OcclusionVolumeAttenuation;                                 // 0x0008   (0x0004)  
	float                                              OcclusionInterpolationTime;                                 // 0x000C   (0x0004)  
	bool                                               bUseComplexCollisionForOcclusion;                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/FMODStudio.FMODAttenuationDetails
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFMODAttenuationDetails
{ 
	bool                                               bOverrideAttenuation;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0004   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0008   (0x0004)  
};

/// Struct /Script/FMODStudio.FMODEventInstance
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFMODEventInstance
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FMODStudio.FMODEventControlChannel
/// Size: 0x0000 (0x000098 - 0x000098)
struct FFMODEventControlChannel : FMovieSceneByteChannel
{ 
};

/// Struct /Script/FMODStudio.FMODEventControlSectionTemplate
/// Size: 0x0098 (0x000020 - 0x0000B8)
struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate
{ 
	FFMODEventControlChannel                           ControlKeys;                                                // 0x0020   (0x0098)  
};

/// Struct /Script/FMODStudio.FMODEventParameterSectionTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
struct FFMODEventParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
};

/// Struct /Script/FMODStudio.CustomPoolSizes
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCustomPoolSizes
{ 
	int32_t                                            Desktop;                                                    // 0x0000   (0x0004)  
	int32_t                                            Mobile;                                                     // 0x0004   (0x0004)  
	int32_t                                            PS4;                                                        // 0x0008   (0x0004)  
	int32_t                                            Switch;                                                     // 0x000C   (0x0004)  
	int32_t                                            XboxOne;                                                    // 0x0010   (0x0004)  
};

/// Enum /Script/FMODStudio.EFMODEventProperty
/// Size: 0x07
enum EFMODEventProperty : uint8_t
{
	EFMODEventProperty__ChannelPriority                                              = 0,
	EFMODEventProperty__ScheduleDelay                                                = 1,
	EFMODEventProperty__ScheduleLookahead                                            = 2,
	EFMODEventProperty__MinimumDistance                                              = 3,
	EFMODEventProperty__MaximumDistance                                              = 4,
	EFMODEventProperty__Count                                                        = 5,
	EFMODEventProperty__EFMODEventProperty_MAX                                       = 6
};

/// Enum /Script/FMODStudio.EFMOD_STUDIO_STOP_MODE
/// Size: 0x03
enum EFMOD_STUDIO_STOP_MODE : uint8_t
{
	ALLOWFADEOUT                                                                     = 0,
	IMMEDIATE                                                                        = 1,
	EFMOD_STUDIO_STOP_MODE_MAX                                                       = 2
};

/// Enum /Script/FMODStudio.EFMODEventControlKey
/// Size: 0x03
enum EFMODEventControlKey : uint8_t
{
	EFMODEventControlKey__Stop                                                       = 0,
	EFMODEventControlKey__Play                                                       = 1,
	EFMODEventControlKey__EFMODEventControlKey_MAX                                   = 2
};

/// Enum /Script/FMODStudio.EFMODSpeakerMode
/// Size: 0x04
enum EFMODSpeakerMode : uint8_t
{
	EFMODSpeakerMode__Stereo                                                         = 0,
	EFMODSpeakerMode__Surround_5                                                     = 1,
	EFMODSpeakerMode__Surround_7                                                     = 2,
	EFMODSpeakerMode__EFMODSpeakerMode_MAX                                           = 3
};

