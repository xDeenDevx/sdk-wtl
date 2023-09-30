namespace offsets
{
	namespace AWTLGrenadeLauncherProjectile
	{
			constexpr auto ExplosionFX = 0x2c0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ExplosionFXConcrete = 0x2e8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ExplosionFXGround = 0x310; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ExplosionFXMetal = 0x338; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto WaterExplosionFX = 0x360; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto WaterHit = 0x388; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ExplosionRotation = 0x3b8; // Size: 12, Type: struct FRotator
			constexpr auto CanBeExplodedInWater = 0x3c4; // Size: 1, Type: bool
			constexpr auto bExplodeAfterHit = 0x3c5; // Size: 1, Type: bool
			constexpr auto DestroyIfTimeIsOver = 0x3c6; // Size: 1, Type: bool
			constexpr auto MinExplosionDelay = 0x3c8; // Size: 4, Type: float
			constexpr auto MaxExplosionDelay = 0x3cc; // Size: 4, Type: float
			constexpr auto Radius = 0x3d0; // Size: 4, Type: float
			constexpr auto MaxDamageToProtectedActors = 0x3d4; // Size: 4, Type: float
			constexpr auto EnergyShieldDamageMultiplier = 0x3d8; // Size: 4, Type: float
			constexpr auto isLastingEffect = 0x3dc; // Size: 1, Type: bool
			constexpr auto LastingEffect_LifeSpan = 0x3e0; // Size: 4, Type: float
	}
} 
