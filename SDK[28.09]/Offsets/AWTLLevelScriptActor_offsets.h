namespace offsets
{
	namespace AWTLLevelScriptActor
	{
			constexpr auto IdentificationDistance = 0x470; // Size: 4, Type: float
			constexpr auto DayTime = 0x478; // Size: 4, Type: float
			constexpr auto bConnectToGameServer = 0x47c; // Size: 1, Type: bool
			constexpr auto LocationID = 0x480; // Size: 4, Type: int32_t
			constexpr auto LocationType = 0x484; // Size: 1, Type: enum class EWTLLocationType
			constexpr auto DefaultSafeZoneID = 0x488; // Size: 4, Type: int32_t
			constexpr auto BarterAllowed = 0x48c; // Size: 1, Type: bool
			constexpr auto PVPAllowed = 0x48d; // Size: 1, Type: bool
			constexpr auto FlashLightAllowed = 0x48e; // Size: 1, Type: bool
			constexpr auto VehicleAllowed = 0x48f; // Size: 1, Type: bool
			constexpr auto DronesAllowed = 0x490; // Size: 1, Type: bool
			constexpr auto AllowOnlyFactionMembers = 0x491; // Size: 1, Type: bool
			constexpr auto LocationIDToMoveForNonFactionMembers = 0x494; // Size: 4, Type: int32_t
			constexpr auto PortalIDToMoveForNonFactionMembers = 0x498; // Size: 4, Type: int32_t
			constexpr auto m_bCanUseAlternativeFootstepSound = 0x49c; // Size: 1, Type: bool
			constexpr auto CurrentTime = 0x4a0; // Size: 4, Type: float
			constexpr auto ItemPreviewClass = 0x4c0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CharacterPreviewRoomClass = 0x4e8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CoreHackingPreviewRoomClass = 0x510; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemPreviewPosition = 0x538; // Size: 12, Type: struct FVector
			constexpr auto CharacterPreviewRoomPosition = 0x544; // Size: 12, Type: struct FVector
			constexpr auto CorePreviewRoomPosition = 0x550; // Size: 12, Type: struct FVector
			constexpr auto AmbientMusicVolume = 0x55c; // Size: 4, Type: float
			constexpr auto AmbientMusicRandomStartMin = 0x560; // Size: 4, Type: float
			constexpr auto AmbientMusicRandomStartMax = 0x564; // Size: 4, Type: float
			constexpr auto SpawnPickups = 0x568; // Size: 16, Type: struct TArray<struct FWTLLocationSpawnPickup>
			constexpr auto AirDropSpawnPoints = 0x578; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto AirDropIDs = 0x588; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto AirDropTimeoutMin = 0x598; // Size: 4, Type: float
			constexpr auto AirDropTimeoutMax = 0x59c; // Size: 4, Type: float
			constexpr auto AirDropMinDistanceBetweenSpawn = 0x5a0; // Size: 4, Type: float
			constexpr auto AirDropLifespanMin = 0x5a4; // Size: 4, Type: float
			constexpr auto AirDropLifespanMax = 0x5a8; // Size: 4, Type: float
			constexpr auto ProjectXSpawnPoints = 0x5b0; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto ProjectXEventPointClass = 0x5c0; // Size: 8, Type: AActor*
			constexpr auto MaxNumberOfMinesPerCharacter = 0x5c8; // Size: 8, Type: uint64_t
			constexpr auto MaxNumberOfStickyMinesPerCharacter = 0x5d0; // Size: 8, Type: uint64_t
			constexpr auto GameInstance = 0x5e8; // Size: 8, Type: struct UWTLGameInstance*
			constexpr auto DaySoundsVolumeCurve = 0x5f0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto NightSoundsVolumeCurve = 0x5f8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto PostProcessVolume = 0x600; // Size: 8, Type: struct APostProcessVolume*
			constexpr auto AutoExposureBiasCurve = 0x608; // Size: 8, Type: struct UCurveFloat*
			constexpr auto FlashlightIntensityMultiplier = 0x610; // Size: 4, Type: float
			constexpr auto ConsoleScripts = 0x618; // Size: 16, Type: struct TArray<struct FWTLConsoleScript>
			constexpr auto StartUpScript = 0x628; // Size: 16, Type: struct FString
			constexpr auto StartUpScriptDelay = 0x638; // Size: 4, Type: float
			constexpr auto DebugStartTime = 0x63c; // Size: 4, Type: float
			constexpr auto DebugTimeScale = 0x640; // Size: 4, Type: int32_t
			constexpr auto UseFixedTime = 0x644; // Size: 1, Type: bool
			constexpr auto FixedTime = 0x648; // Size: 4, Type: float
			constexpr auto MaxSimultaneousEventsCount = 0x64c; // Size: 4, Type: int32_t
	}
} 
