namespace offsets
{
	namespace AWTLMobileResurectionPoint
	{
			constexpr auto Mesh = 0x430; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ZoneMesh = 0x438; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BoxCollision = 0x440; // Size: 8, Type: struct UBoxComponent*
			constexpr auto HealingObjectTypes = 0x448; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto HealingRadius = 0x458; // Size: 4, Type: float
			constexpr auto HealingPerSecond = 0x45c; // Size: 4, Type: float
			constexpr auto HealingEnergyPerSecond = 0x460; // Size: 4, Type: float
			constexpr auto ResurectionEnergyCost = 0x464; // Size: 4, Type: float
			constexpr auto ResurectionRadius = 0x468; // Size: 4, Type: float
			constexpr auto EnergyChargePerSecond = 0x46c; // Size: 4, Type: float
			constexpr auto m_Energy = 0x470; // Size: 4, Type: float
	}
} 
