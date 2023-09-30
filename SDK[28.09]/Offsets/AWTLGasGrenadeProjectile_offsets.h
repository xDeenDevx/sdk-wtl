namespace offsets
{
	namespace AWTLGasGrenadeProjectile
	{
			constexpr auto m_ParticleProgress = 0x410; // Size: 1, Type: char
			constexpr auto m_CollisionProgress = 0x411; // Size: 1, Type: char
			constexpr auto m_bNeedDestroyParticles = 0x412; // Size: 1, Type: bool
			constexpr auto m_ExplodeLocation = 0x42c; // Size: 12, Type: struct FVector
			constexpr auto Cylinder = 0x440; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DamageValueToMonstersAndNPC = 0x448; // Size: 4, Type: float
			constexpr auto MinCharactersLevelToMakeDamage = 0x44c; // Size: 4, Type: int32_t
			constexpr auto MaxChemicalEffectValue = 0x450; // Size: 4, Type: float
			constexpr auto MinDamageValueToMonstersAndNPC = 0x454; // Size: 4, Type: float
			constexpr auto Distance = 0x458; // Size: 4, Type: float
			constexpr auto TimeBetweenHits = 0x45c; // Size: 4, Type: float
			constexpr auto TimeBetweenHitsToCharacter = 0x460; // Size: 4, Type: float
			constexpr auto TimeToHideIdentify = 0x464; // Size: 4, Type: float
			constexpr auto TimeToStopHideIdentify = 0x468; // Size: 4, Type: float
			constexpr auto TimeToDestroyFX = 0x46c; // Size: 4, Type: float
	}
} 
