namespace offsets
{
	namespace AWTLMobileHealPoint
	{
			constexpr auto Mesh = 0x3d0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ZoneMesh = 0x3d8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BoxCollision = 0x3e0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto HealingObjectTypes = 0x3e8; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto HealingPercentPerSecond = 0x3f8; // Size: 4, Type: float
			constexpr auto HealingEnergyPerSecond = 0x3fc; // Size: 4, Type: float
			constexpr auto EnergyChargePerSecond = 0x400; // Size: 4, Type: float
			constexpr auto m_Energy = 0x404; // Size: 4, Type: float
	}
} 
