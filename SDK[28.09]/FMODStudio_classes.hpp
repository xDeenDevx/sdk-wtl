#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// Class FMODStudio.FMODAmbientSound
class AFMODAmbientSound : public AActor
{
public:
	class UFMODAudioComponent*                   AudioComponent;                                    // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AFMODAmbientSound* GetDefaultObj();

};

// 0x40 (0x78 - 0x38)
// Class FMODStudio.FMODAnimNotifyPlay
class UFMODAnimNotifyPlay : public UAnimNotify
{
public:
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_0 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9C[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AttachName;                                        // 0x40(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             Event;                                             // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODAnimNotifyPlay* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class FMODStudio.FMODAsset
class UFMODAsset : public UObject
{
public:
	struct FGuid                                 AssetGuid;                                         // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAsAsset;                                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D[0x17];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODAsset* GetDefaultObj();

};

// 0x1E8 (0x3E0 - 0x1F8)
// Class FMODStudio.FMODAudioComponent
class UFMODAudioComponent : public USceneComponent
{
public:
	TSoftObjectPtr<class UFMODEvent>             Event;                                             // 0x1F8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     ParameterCache;                                    // 0x220(0x50)(Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProgrammerSoundName;                               // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableTimelineCallbacks : 1;                      // Mask: 0x1, PropSize: 0x10x288(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D9[0x17];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9 : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_DA[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEventStopped;                                    // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimelineMarker;                                  // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimelineBeat;                                    // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FFMODAttenuationDetails               AttenuationDetails;                                // 0x2D8(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODOcclusionDetails                 OcclusionDetails;                                  // 0x2E4(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bUseDistanceDelay : 1;                             // Mask: 0x1, PropSize: 0x10x2F8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE[0xE7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODAudioComponent* GetDefaultObj();

	void TriggerCue();
	void Stop();
	void SetVolume(float Volume);
	void SetTimelinePosition(int32 Time);
	void SetProperty(enum class EFMODEventProperty Property, float Value);
	void SetProgrammerSoundName(const class FString& Value);
	void SetPitch(float Pitch);
	void SetPaused(bool Paused);
	void SetParameter(class FName Name, float Value);
	void SetEvent(class UFMODEvent* NewEvent);
	void Release();
	void Play();
	bool IsPlaying();
	int32 GetTimelinePosition();
	float GetProperty(enum class EFMODEventProperty Property);
	float GetParameter(class FName Name);
	int32 GetLength();
};

// 0x0 (0x50 - 0x50)
// Class FMODStudio.FMODBank
class UFMODBank : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODBank* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FMODStudio.FMODBlueprintStatics
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFMODBlueprintStatics* GetDefaultObj();

	void VCASetVolume(class UFMODVCA* Vca, float Volume);
	void UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void UnloadBankSampleData(class UFMODBank* Bank);
	void UnloadBank(class UFMODBank* Bank);
	void SetOutputDriverByName(const class FString& NewDriverName);
	void SetOutputDriverByIndex(int32 NewDriverIndex);
	class UFMODAudioComponent* PlayEventAttachedWithParams(class UFMODEvent* Event, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, TMap<class FName, float>& Params, bool bApplyOcclusion, bool bApplyOcclusionDirect);
	class UFMODAudioComponent* PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay);
	struct FFMODEventInstance PlayEventAtLocationWithParams(class UObject* WorldContextObject, class UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay, TMap<class FName, float>& Params, bool bApplyOcclusion, bool bApplyOcclusionDirect);
	struct FFMODEventInstance PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay);
	struct FFMODEventInstance PlayEvent2DWithParams(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay, TMap<class FName, float>& Params);
	struct FFMODEventInstance PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);
	void MixerSuspend();
	void MixerResume();
	void LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void LoadBankSampleData(class UFMODBank* Bank);
	void LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
	bool IsBankLoaded(class UFMODBank* Bank);
	TArray<class FString> GetOutputDrivers();
	TArray<struct FFMODEventInstance> FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);
	class UFMODEvent* FindEventByName(const class FString& Name);
	class UFMODAsset* FindAssetByName(const class FString& Name);
	void EventInstanceTriggerCue(const struct FFMODEventInstance& EventInstance);
	void EventInstanceStop(const struct FFMODEventInstance& EventInstance);
	void EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume);
	void EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, struct FTransform& Location);
	void EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, enum class EFMODEventProperty Property, float Value);
	void EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch);
	void EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool Paused);
	void EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, class FName Name, float Value);
	void EventInstancePlay(const struct FFMODEventInstance& EventInstance);
	bool EventInstanceIsValid(const struct FFMODEventInstance& EventInstance);
	float EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, class FName Name);
	void BusStopAllEvents(class UFMODBus* Bus, enum class EFMOD_STUDIO_STOP_MODE StopMode);
	void BusSetVolume(class UFMODBus* Bus, float Volume);
	void BusSetPaused(class UFMODBus* Bus, bool bPaused);
	void BusSetMute(class UFMODBus* Bus, bool bMute);
};

// 0x0 (0x50 - 0x50)
// Class FMODStudio.FMODBus
class UFMODBus : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODBus* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FMODStudio.FMODEvent
class UFMODEvent : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODEvent* GetDefaultObj();

};

// 0x98 (0x180 - 0xE8)
// Class FMODStudio.FMODEventControlSection
class UFMODEventControlSection : public UMovieSceneSection
{
public:
	struct FFMODEventControlChannel              ControlKeys;                                       // 0xE8(0x98)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODEventControlSection* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class FMODStudio.FMODEventControlTrack
class UFMODEventControlTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            ControlSections;                                   // 0x78(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFMODEventControlTrack* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class FMODStudio.FMODEventParameterTrack
class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_1BA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFMODEventParameterTrack* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class FMODStudio.FMODSettings
class UFMODSettings : public UObject
{
public:
	bool                                         bLoadAllBanks;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadAllSampleData;                                // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLiveUpdate;                                 // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableEditorLiveUpdate;                           // 0x2B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        BankOutputDirectory;                               // 0x30(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	enum class EFMODSpeakerMode                  OutputFormat;                                      // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVol0Virtual;                                      // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Vol0VirtualLevel;                                  // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SampleRate;                                        // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchHardwareSampleRate;                          // 0x4C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RealChannelCount;                                  // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalChannelCount;                                 // 0x54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DSPBufferLength;                                   // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DSPBufferCount;                                    // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileBufferSize;                                    // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StudioUpdatePeriod;                                // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InitialOutputDriverName;                           // 0x68(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockAllBuses;                                     // 0x78(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomPoolSizes                      MemoryPoolSizes;                                   // 0x7C(0x14)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LiveUpdatePort;                                    // 0x90(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EditorLiveUpdatePort;                              // 0x94(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PluginFiles;                                       // 0x98(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                ContentBrowserPrefix;                              // 0xA8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ForcePlatformName;                                 // 0xB8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MasterBankName;                                    // 0xC8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SkipLoadBankName;                                  // 0xD8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WavWriterPath;                                     // 0xE8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODSettings* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FMODStudio.FMODSnapshot
class UFMODSnapshot : public UFMODEvent
{
public:

	static class UClass* StaticClass();
	static class UFMODSnapshot* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class FMODStudio.FMODSnapshotReverb
class UFMODSnapshotReverb : public UReverbEffect
{
public:
	struct FGuid                                 AssetGuid;                                         // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAsAsset;                                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODSnapshotReverb* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FMODStudio.FMODVCA
class UFMODVCA : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODVCA* GetDefaultObj();

};

}


