namespace offsets
{
	namespace AWTLElectricCoil
	{
			constexpr auto Mesh = 0x3a8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ZoneMesh = 0x3b0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto EnergyPercentPerUse = 0x3b8; // Size: 4, Type: float
			constexpr auto DamageValue = 0x3bc; // Size: 4, Type: float
			constexpr auto MinDamage = 0x3c0; // Size: 4, Type: float
			constexpr auto StuffDamageValue = 0x3c4; // Size: 4, Type: float
			constexpr auto EffectValue = 0x3c8; // Size: 4, Type: float
			constexpr auto NumOfHits = 0x3cc; // Size: 4, Type: int32_t
			constexpr auto TimeToFirstActivate = 0x3d0; // Size: 4, Type: float
			constexpr auto TimeBetweenHits = 0x3d4; // Size: 4, Type: float
			constexpr auto m_StuffIsCharged = 0x42c; // Size: 4, Type: uint32_t
			constexpr auto m_Energy = 0x430; // Size: 4, Type: float
			constexpr auto TargetActor = 0x540; // Size: 8, Type: struct AActor*
			constexpr auto HitSound = 0x570; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto ActivationSound = 0x598; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto BackgroundSound = 0x5c0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto ReloadingSound = 0x5e8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto PartSyst = 0x610; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto ElectricDamage = 0x638; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto bActivationProcess = 0x660; // Size: 1, Type: bool
			constexpr auto bDeactivationProcess = 0x661; // Size: 1, Type: bool
	}
} 
