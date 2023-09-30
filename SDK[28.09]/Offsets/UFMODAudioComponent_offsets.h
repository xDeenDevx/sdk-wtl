namespace offsets
{
	namespace UFMODAudioComponent
	{
			constexpr auto Event = 0x1f8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto ParameterCache = 0x220; // Size: 80, Type: struct TMap<struct FName, float>
			constexpr auto ProgrammerSoundName = 0x278; // Size: 16, Type: struct FString
			constexpr auto bEnableTimelineCallbacks = 0x288; // Size: 1, Type: char
			constexpr auto bAutoDestroy = 0x2a0; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x2a0; // Size: 1, Type: char
			constexpr auto OnEventStopped = 0x2a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTimelineMarker = 0x2b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTimelineBeat = 0x2c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AttenuationDetails = 0x2d8; // Size: 12, Type: struct FFMODAttenuationDetails
			constexpr auto OcclusionDetails = 0x2e4; // Size: 20, Type: struct FFMODOcclusionDetails
			constexpr auto bUseDistanceDelay = 0x2f8; // Size: 1, Type: char
	}
} 
