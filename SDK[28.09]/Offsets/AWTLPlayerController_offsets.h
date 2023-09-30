namespace offsets
{
	namespace AWTLPlayerController
	{
			constexpr auto m_MapCache = 0x42aa8; // Size: 256, Type: struct FWTLMapCacheData
			constexpr auto m_UID = 0x42bb8; // Size: 8, Type: uint64_t
			constexpr auto m_MinEventLogPriority = 0x42bd0; // Size: 1, Type: char
			constexpr auto m_SuicideState = 0x42bd1; // Size: 1, Type: enum class EWTLSuicideState
			constexpr auto m_DamageToActorInfo = 0x42bf0; // Size: 16, Type: struct TArray<struct FWTLDamageActorInfo>
			constexpr auto m_DamageFromActorInfo = 0x42c08; // Size: 16, Type: struct TArray<struct FWTLDamageActorInfo>
			constexpr auto m_DynamicMapMarkers = 0x42c88; // Size: 16, Type: struct TArray<struct FWTLMapMarker>
			constexpr auto m_StaticMapMarkers = 0x42c98; // Size: 16, Type: struct TArray<struct FWTLMapMarker>
			constexpr auto m_MapMarkers = 0x42ca8; // Size: 16, Type: struct TArray<struct FWTLMapMarker>
			constexpr auto bIsExitToMainMenuOrExitByIdleTime = 0x42cb8; // Size: 1, Type: bool
	}
} 
