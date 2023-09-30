namespace offsets
{
	namespace AWTLMonsterProjectile
	{
			constexpr auto InitialVelocity = 0x228; // Size: 4, Type: float
			constexpr auto VelocityCurve = 0x230; // Size: 8, Type: struct UCurveFloat*
			constexpr auto GravityCurve = 0x238; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ParticleBullet = 0x240; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto ParticleBlood = 0x248; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto CollisionComp = 0x270; // Size: 8, Type: struct USphereComponent*
			constexpr auto ProjectileMovement = 0x278; // Size: 8, Type: struct UWTLProjectileMovementComponent*
			constexpr auto DamageType = 0x280; // Size: 8, Type: UDamageType*
	}
} 
