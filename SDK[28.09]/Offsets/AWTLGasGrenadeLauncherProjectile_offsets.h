namespace offsets
{
	namespace AWTLGasGrenadeLauncherProjectile
	{
			constexpr auto m_ParticleProgress = 0x3e8; // Size: 1, Type: char
			constexpr auto m_CollisionProgress = 0x3e9; // Size: 1, Type: char
			constexpr auto m_bNeedDestroyParticles = 0x3ea; // Size: 1, Type: bool
			constexpr auto m_ExplodeLocation = 0x3fc; // Size: 12, Type: struct FVector
			constexpr auto Cylinder = 0x410; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DamageValueToMonstersAndNPC = 0x418; // Size: 4, Type: float
			constexpr auto MinDamageValueToMonstersAndNPC = 0x41c; // Size: 4, Type: float
			constexpr auto MaxChemicalEffectValue = 0x420; // Size: 4, Type: float
			constexpr auto MinCharactersLevelToMakeDamage = 0x424; // Size: 4, Type: int32_t
			constexpr auto Distance = 0x428; // Size: 4, Type: float
			constexpr auto TimeBetweenHits = 0x42c; // Size: 4, Type: float
			constexpr auto TimeBetweenHitsToCharacter = 0x430; // Size: 4, Type: float
			constexpr auto TimeToHideIdentify = 0x434; // Size: 4, Type: float
			constexpr auto TimeToStopHideIdentify = 0x438; // Size: 4, Type: float
			constexpr auto TimeToDestroyFX = 0x43c; // Size: 4, Type: float
	}
} 
