namespace offsets
{
	namespace AWTLBulletProjectile
	{
			constexpr auto CanRicochet = 0x2f9; // Size: 1, Type: bool
			constexpr auto RicochetChance = 0x2fa; // Size: 1, Type: char
			constexpr auto MaxRicochetCount = 0x2fb; // Size: 1, Type: char
			constexpr auto MinRicochetAngle = 0x2fc; // Size: 4, Type: float
			constexpr auto MinRicochetVelocity = 0x300; // Size: 4, Type: float
			constexpr auto MinRicochetVelocityDelta = 0x304; // Size: 4, Type: float
			constexpr auto MaxRicochetVelocityDelta = 0x308; // Size: 4, Type: float
			constexpr auto PenetrationEndRandomHalfCone = 0x30c; // Size: 4, Type: float
			constexpr auto InitialDamage = 0x310; // Size: 4, Type: float
			constexpr auto bDrawHitPoints = 0x314; // Size: 1, Type: bool
			constexpr auto HitPointsColor = 0x318; // Size: 4, Type: struct FColor
			constexpr auto bDrawPenetrationExitPoints = 0x31c; // Size: 1, Type: bool
			constexpr auto PenetrationExitPointsColor = 0x320; // Size: 4, Type: struct FColor
			constexpr auto bDrawRicochetPoints = 0x324; // Size: 1, Type: bool
			constexpr auto RicochetPointsColor = 0x328; // Size: 4, Type: struct FColor
			constexpr auto bDrawDestroyPoint = 0x32c; // Size: 1, Type: bool
			constexpr auto DestroyPointColor = 0x330; // Size: 4, Type: struct FColor
	}
} 
