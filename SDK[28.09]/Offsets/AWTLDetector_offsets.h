namespace offsets
{
	namespace AWTLDetector
	{
			constexpr auto Distance = 0x458; // Size: 4, Type: float
			constexpr auto AliveCreaturesSearchDistance = 0x45c; // Size: 4, Type: float
			constexpr auto PlaceableStuffsSearchDistance = 0x460; // Size: 4, Type: float
			constexpr auto MinDistance = 0x464; // Size: 4, Type: float
			constexpr auto MaxAngle = 0x468; // Size: 4, Type: float
			constexpr auto Time = 0x46c; // Size: 4, Type: float
			constexpr auto EnergyPerUsePercentInMinesMode = 0x470; // Size: 4, Type: float
			constexpr auto EnergyPerUsePercentInAliveCreaturesMode = 0x474; // Size: 4, Type: float
			constexpr auto EnergyPerUsePercentInStuffMode = 0x478; // Size: 4, Type: float
			constexpr auto m_CurrentMode = 0x47c; // Size: 1, Type: enum class EWTLDetectorMode
			constexpr auto m_DisabledTime = 0x480; // Size: 4, Type: float
			constexpr auto m_ShakingAnimationIndex = 0x484; // Size: 4, Type: uint32_t
			constexpr auto m_bDisabled = 0x4a4; // Size: 1, Type: bool
			constexpr auto m_bIsActive = 0x4a5; // Size: 1, Type: bool
			constexpr auto AudioComponent = 0x4c8; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto SetModeSequenceSet = 0x4d0; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto DeviceShakingSequenceSetsList = 0x4e8; // Size: 16, Type: struct TArray<struct FItemAnimationSet>
	}
} 
