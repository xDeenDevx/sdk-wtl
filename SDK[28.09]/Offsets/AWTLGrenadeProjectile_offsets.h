namespace offsets
{
	namespace AWTLGrenadeProjectile
	{
			constexpr auto ExplosionActor = 0x318; // Size: 8, Type: struct AActor*
			constexpr auto ExplosionFX = 0x320; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto WaterExplosionFX = 0x348; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto WaterHit = 0x370; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MaxHitCount = 0x398; // Size: 4, Type: int32_t
			constexpr auto CanBeExplodedInWater = 0x39c; // Size: 1, Type: bool
			constexpr auto ExplosionDelayMin = 0x3a0; // Size: 4, Type: float
			constexpr auto ExplosionDelayMax = 0x3a4; // Size: 4, Type: float
			constexpr auto ExplosionRadius = 0x3a8; // Size: 4, Type: float
			constexpr auto ExplodesOnContact = 0x3ac; // Size: 1, Type: bool
			constexpr auto EnergyShieldDamageMultiplier = 0x3b0; // Size: 4, Type: float
			constexpr auto DamageToPlaceableStuff = 0x3b4; // Size: 4, Type: float
			constexpr auto ShrapnelCountMin = 0x3b8; // Size: 4, Type: int32_t
			constexpr auto ShrapnelCountMax = 0x3bc; // Size: 4, Type: int32_t
			constexpr auto ShrapnelDamageMin = 0x3c0; // Size: 4, Type: float
			constexpr auto ShrapnelDamageMax = 0x3c4; // Size: 4, Type: float
			constexpr auto ShrapnelRadius = 0x3c8; // Size: 4, Type: float
			constexpr auto ShrapnelRagdollImpulseMultiplier = 0x3cc; // Size: 4, Type: float
			constexpr auto ShrapnelUseReliableHitEvent = 0x3d0; // Size: 1, Type: bool
			constexpr auto DamageFalloff = 0x3d4; // Size: 4, Type: float
			constexpr auto TacticalGrenade = 0x3d8; // Size: 1, Type: bool
			constexpr auto NewLifeSpan = 0x3dc; // Size: 4, Type: float
	}
} 
