namespace offsets
{
	namespace AWTLCampfire
	{
			constexpr auto m_Energy = 0x440; // Size: 4, Type: float
			constexpr auto m_StorageContent = 0x448; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto Mesh = 0x520; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto WarmzoneObjectTypes = 0x528; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto WarmzoneRadius = 0x538; // Size: 4, Type: float
			constexpr auto WarmzoneHealingPercentPerSecond = 0x53c; // Size: 4, Type: float
			constexpr auto StartEnergy = 0x540; // Size: 4, Type: float
			constexpr auto MaxEnergy = 0x544; // Size: 4, Type: float
			constexpr auto EnergyDecrementPerSecond = 0x548; // Size: 4, Type: float
	}
} 
