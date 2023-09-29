// Class FMODStudio.FMODAmbientSound
// Size: 0x228 (Inherited: 0x220)
struct AFMODAmbientSound : AActor {
	struct UFMODAudioComponent* AudioComponent; // 0x220(0x08)
};

// Class FMODStudio.FMODAnimNotifyPlay
// Size: 0x78 (Inherited: 0x38)
struct UFMODAnimNotifyPlay : UAnimNotify {
	char bFollow : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString AttachName; // 0x40(0x10)
	struct TSoftObjectPtr<UFMODEvent> Event; // 0x50(0x28)
};

// Class FMODStudio.FMODAsset
// Size: 0x50 (Inherited: 0x28)
struct UFMODAsset : UObject {
	struct FGuid AssetGuid; // 0x28(0x10)
	bool bShowAsAsset; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)
};

// Class FMODStudio.FMODAudioComponent
// Size: 0x3e0 (Inherited: 0x200)
struct UFMODAudioComponent : USceneComponent {
	struct TSoftObjectPtr<UFMODEvent> Event; // 0x1f8(0x28)
	struct TMap<struct FName, float> ParameterCache; // 0x220(0x50)
	struct FString ProgrammerSoundName; // 0x278(0x10)
	char bEnableTimelineCallbacks : 1; // 0x288(0x01)
	char pad_288_1 : 7; // 0x288(0x01)
	char pad_289[0x17]; // 0x289(0x17)
	char bAutoDestroy : 1; // 0x2a0(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x2a0(0x01)
	char pad_2A0_2 : 6; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FMulticastInlineDelegate OnEventStopped; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnTimelineMarker; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnTimelineBeat; // 0x2c8(0x10)
	struct FFMODAttenuationDetails AttenuationDetails; // 0x2d8(0x0c)
	struct FFMODOcclusionDetails OcclusionDetails; // 0x2e4(0x14)
	char bUseDistanceDelay : 1; // 0x2f8(0x01)
	char pad_2F8_1 : 7; // 0x2f8(0x01)
	char pad_2F9[0xe7]; // 0x2f9(0xe7)

	void TriggerCue(); // Function FMODStudio.FMODAudioComponent.TriggerCue // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c330
	void Stop(); // Function FMODStudio.FMODAudioComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c400
	void SetVolume(float Volume); // Function FMODStudio.FMODAudioComponent.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c1f0
	void SetTimelinePosition(int32_t Time); // Function FMODStudio.FMODAudioComponent.SetTimelinePosition // (Final|Native|Public|BlueprintCallable) // @ game+0xb5b900
	void SetProperty(enum class EFMODEventProperty Property, float Value); // Function FMODStudio.FMODAudioComponent.SetProperty // (Final|Native|Public|BlueprintCallable) // @ game+0xb5bc10
	void SetProgrammerSoundName(struct FString Value); // Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName // (Final|Native|Public|BlueprintCallable) // @ game+0xb5b710
	void SetPitch(float Pitch); // Function FMODStudio.FMODAudioComponent.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c0e0
	void SetPaused(bool paused); // Function FMODStudio.FMODAudioComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xb5bfd0
	void SetParameter(struct FName Name, float Value); // Function FMODStudio.FMODAudioComponent.SetParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xb5be70
	void SetEvent(struct UFMODEvent* NewEvent); // Function FMODStudio.FMODAudioComponent.SetEvent // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c440
	void Release(); // Function FMODStudio.FMODAudioComponent.Release // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c3a0
	void Play(); // Function FMODStudio.FMODAudioComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c420
	bool IsPlaying(); // Function FMODStudio.FMODAudioComponent.IsPlaying // (Final|Native|Public|BlueprintCallable) // @ game+0xb5c300
	int32_t GetTimelinePosition(); // Function FMODStudio.FMODAudioComponent.GetTimelinePosition // (Final|Native|Public|BlueprintCallable) // @ game+0xb5b880
	float GetProperty(enum class EFMODEventProperty Property); // Function FMODStudio.FMODAudioComponent.GetProperty // (Final|Native|Public|BlueprintCallable) // @ game+0xb5ba30
	float GetParameter(struct FName Name); // Function FMODStudio.FMODAudioComponent.GetParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xb5bd80
	int32_t GetLength(); // Function FMODStudio.FMODAudioComponent.GetLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb5ba10
};

// Class FMODStudio.FMODBank
// Size: 0x50 (Inherited: 0x50)
struct UFMODBank : UFMODAsset {
};

// Class FMODStudio.FMODBlueprintStatics
// Size: 0x28 (Inherited: 0x28)
struct UFMODBlueprintStatics : UBlueprintFunctionLibrary {

	void VCASetVolume(struct UFMODVCA* Vca, float Volume); // Function FMODStudio.FMODBlueprintStatics.VCASetVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5e3c0
	void UnloadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5f230
	void UnloadBankSampleData(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5f590
	void UnloadBank(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5fb50
	void SetOutputDriverByName(struct FString NewDriverName); // Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5d260
	void SetOutputDriverByIndex(int32_t NewDriverIndex); // Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5d070
	struct UFMODAudioComponent* PlayEventAttachedWithParams(struct UFMODEvent* Event, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, struct TMap<struct FName, float>& Params, bool bApplyOcclusion, bool bApplyOcclusionDirect); // Function FMODStudio.FMODBlueprintStatics.PlayEventAttachedWithParams // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb60170
	struct UFMODAudioComponent* PlayEventAttached(struct UFMODEvent* Event, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay); // Function FMODStudio.FMODBlueprintStatics.PlayEventAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xb607e0
	struct FFMODEventInstance PlayEventAtLocationWithParams(struct UObject* WorldContextObject, struct UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay, struct TMap<struct FName, float>& Params, bool bApplyOcclusion, bool bApplyOcclusionDirect); // Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocationWithParams // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb60c00
	struct FFMODEventInstance PlayEventAtLocation(struct UObject* WorldContextObject, struct UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay); // Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb610f0
	struct FFMODEventInstance PlayEvent2DWithParams(struct UObject* WorldContextObject, struct UFMODEvent* Event, bool bAutoPlay, struct TMap<struct FName, float>& Params); // Function FMODStudio.FMODBlueprintStatics.PlayEvent2DWithParams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb613d0
	struct FFMODEventInstance PlayEvent2D(struct UObject* WorldContextObject, struct UFMODEvent* Event, bool bAutoPlay); // Function FMODStudio.FMODBlueprintStatics.PlayEvent2D // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb616f0
	void MixerSuspend(); // Function FMODStudio.FMODBlueprintStatics.MixerSuspend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5cfa0
	void MixerResume(); // Function FMODStudio.FMODBlueprintStatics.MixerResume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5ced0
	void LoadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5f3e0
	void LoadBankSampleData(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5f770
	void LoadBank(struct UFMODBank* Bank, bool bBlocking, bool bLoadSampleData); // Function FMODStudio.FMODBlueprintStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5fd80
	bool IsBankLoaded(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.IsBankLoaded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5f950
	struct TArray<struct FString> GetOutputDrivers(); // Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5d380
	struct TArray<struct FFMODEventInstance> FindEventInstances(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.FindEventInstances // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5eef0
	struct UFMODEvent* FindEventByName(struct FString Name); // Function FMODStudio.FMODBlueprintStatics.FindEventByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5ff70
	struct UFMODAsset* FindAssetByName(struct FString Name); // Function FMODStudio.FMODBlueprintStatics.FindAssetByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb60070
	void EventInstanceTriggerCue(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5d610
	void EventInstanceStop(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceStop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5d6d0
	void EventInstanceSetVolume(struct FFMODEventInstance EventInstance, float Volume); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5e160
	void EventInstanceSetTransform(struct FFMODEventInstance EventInstance, struct FTransform& Location); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb5d400
	void EventInstanceSetProperty(struct FFMODEventInstance EventInstance, enum class EFMODEventProperty Property, float Value); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5d8c0
	void EventInstanceSetPitch(struct FFMODEventInstance EventInstance, float Pitch); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5dfe0
	void EventInstanceSetPaused(struct FFMODEventInstance EventInstance, bool paused); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5de50
	void EventInstanceSetParameter(struct FFMODEventInstance EventInstance, struct FName Name, float Value); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5dc60
	void EventInstancePlay(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstancePlay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5d7c0
	bool EventInstanceIsValid(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5e2e0
	float EventInstanceGetParameter(struct FFMODEventInstance EventInstance, struct FName Name); // Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5db00
	void BusStopAllEvents(struct UFMODBus* Bus, enum class EFMOD_STUDIO_STOP_MODE stopMode); // Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5e640
	void BusSetVolume(struct UFMODBus* Bus, float Volume); // Function FMODStudio.FMODBlueprintStatics.BusSetVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5ed90
	void BusSetPaused(struct UFMODBus* Bus, bool bPaused); // Function FMODStudio.FMODBlueprintStatics.BusSetPaused // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5eb20
	void BusSetMute(struct UFMODBus* Bus, bool bMute); // Function FMODStudio.FMODBlueprintStatics.BusSetMute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb5e8b0
};

// Class FMODStudio.FMODBus
// Size: 0x50 (Inherited: 0x50)
struct UFMODBus : UFMODAsset {
};

// Class FMODStudio.FMODEvent
// Size: 0x50 (Inherited: 0x50)
struct UFMODEvent : UFMODAsset {
};

// Class FMODStudio.FMODEventControlSection
// Size: 0x180 (Inherited: 0xe8)
struct UFMODEventControlSection : UMovieSceneSection {
	struct FFMODEventControlChannel ControlKeys; // 0xe8(0x98)
};

// Class FMODStudio.FMODEventControlTrack
// Size: 0x88 (Inherited: 0x78)
struct UFMODEventControlTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> ControlSections; // 0x78(0x10)
};

// Class FMODStudio.FMODEventParameterTrack
// Size: 0x90 (Inherited: 0x78)
struct UFMODEventParameterTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class FMODStudio.FMODSettings
// Size: 0xf8 (Inherited: 0x28)
struct UFMODSettings : UObject {
	bool bLoadAllBanks; // 0x28(0x01)
	bool bLoadAllSampleData; // 0x29(0x01)
	bool bEnableLiveUpdate; // 0x2a(0x01)
	bool bEnableEditorLiveUpdate; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDirectoryPath BankOutputDirectory; // 0x30(0x10)
	enum class EFMODSpeakerMode OutputFormat; // 0x40(0x01)
	bool bVol0Virtual; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float Vol0VirtualLevel; // 0x44(0x04)
	int32_t SampleRate; // 0x48(0x04)
	bool bMatchHardwareSampleRate; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t RealChannelCount; // 0x50(0x04)
	int32_t TotalChannelCount; // 0x54(0x04)
	int32_t DSPBufferLength; // 0x58(0x04)
	int32_t DSPBufferCount; // 0x5c(0x04)
	int32_t FileBufferSize; // 0x60(0x04)
	int32_t StudioUpdatePeriod; // 0x64(0x04)
	struct FString InitialOutputDriverName; // 0x68(0x10)
	bool bLockAllBuses; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FCustomPoolSizes MemoryPoolSizes; // 0x7c(0x14)
	int32_t LiveUpdatePort; // 0x90(0x04)
	int32_t EditorLiveUpdatePort; // 0x94(0x04)
	struct TArray<struct FString> PluginFiles; // 0x98(0x10)
	struct FString ContentBrowserPrefix; // 0xa8(0x10)
	struct FString ForcePlatformName; // 0xb8(0x10)
	struct FString MasterBankName; // 0xc8(0x10)
	struct FString SkipLoadBankName; // 0xd8(0x10)
	struct FString WavWriterPath; // 0xe8(0x10)
};

// Class FMODStudio.FMODSnapshot
// Size: 0x50 (Inherited: 0x50)
struct UFMODSnapshot : UFMODEvent {
};

// Class FMODStudio.FMODSnapshotReverb
// Size: 0x78 (Inherited: 0x60)
struct UFMODSnapshotReverb : UReverbEffect {
	struct FGuid AssetGuid; // 0x60(0x10)
	bool bShowAsAsset; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FMODStudio.FMODVCA
// Size: 0x50 (Inherited: 0x50)
struct UFMODVCA : UFMODAsset {
};

