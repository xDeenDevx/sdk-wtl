namespace offsets
{
	namespace AWTLFortificationCommandCore
	{
			constexpr auto FortificationSafeZone = 0x290; // Size: 8, Type: struct AWTLFortificationSafeZone*
			constexpr auto NPCSpawners = 0x298; // Size: 16, Type: struct TArray<struct AWTLFortificationEnemyNPCSpawner*>
			constexpr auto OppositeForcesSafeZones = 0x2a8; // Size: 16, Type: struct TArray<struct AWTLSafeZone*>
			constexpr auto m_AudioComponent = 0x2e0; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto CommandCoreID = 0x300; // Size: 4, Type: int32_t
			constexpr auto MaxEnergy = 0x304; // Size: 4, Type: float
			constexpr auto EnergyDrainPerSecond = 0x308; // Size: 4, Type: float
			constexpr auto EnergyRecoverPerSecond = 0x30c; // Size: 4, Type: float
			constexpr auto EnergyPercentForSafeZoneFunctionality = 0x310; // Size: 4, Type: float
			constexpr auto SignalRange = 0x314; // Size: 4, Type: float
			constexpr auto ScoreZoneRange = 0x318; // Size: 4, Type: float
			constexpr auto HackingDificulty = 0x31c; // Size: 1, Type: char
			constexpr auto MaxHackingEnergyPercent = 0x320; // Size: 4, Type: float
			constexpr auto SaveStateToDBInterval = 0x324; // Size: 4, Type: float
			constexpr auto ScoreMultiplier = 0x328; // Size: 4, Type: float
			constexpr auto m_Energy = 0x32c; // Size: 4, Type: float
			constexpr auto HackingStateNoiseInterval = 0x330; // Size: 4, Type: float
			constexpr auto NoiseEmittingRange = 0x334; // Size: 4, Type: float
			constexpr auto Rewards = 0x340; // Size: 16, Type: struct TArray<struct FWTLFortificationReward>
			constexpr auto m_LastHackTime = 0x350; // Size: 8, Type: struct FWTLDateTime
			constexpr auto m_TimeTillNextHack = 0x358; // Size: 8, Type: struct FWTLDateTime
			constexpr auto HackingDelay = 0x368; // Size: 8, Type: struct FTimespan
			constexpr auto CaptureTimeInterval = 0x370; // Size: 8, Type: struct FTimespan
			constexpr auto OperationStateScreenLightColor = 0x378; // Size: 16, Type: struct FLinearColor
			constexpr auto ExploitingStateScreenLightColor = 0x388; // Size: 16, Type: struct FLinearColor
			constexpr auto OperationStateScreenTexture = 0x398; // Size: 8, Type: struct UTexture*
			constexpr auto ExploitingStateScreenTexture = 0x3a0; // Size: 8, Type: struct UTexture*
			constexpr auto m_ControlFaction = 0x3a8; // Size: 1, Type: enum class EWTLFaction
			constexpr auto bUseDebugControlFaction = 0x3a9; // Size: 1, Type: bool
			constexpr auto DebugControlFaction = 0x3aa; // Size: 1, Type: enum class EWTLFaction
			constexpr auto bIsAnyEngineerConnected = 0x3c0; // Size: 1, Type: bool
			constexpr auto CoreHackingWidgetClass = 0x3c8; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
