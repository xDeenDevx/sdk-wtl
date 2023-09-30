namespace offsets
{
	namespace AWTLBulletTracer
	{
			constexpr auto ProjectileMovement = 0x280; // Size: 8, Type: struct UWTLProjectileMovementComponent*
			constexpr auto InitialVelocity = 0x288; // Size: 4, Type: float
			constexpr auto VelocityCurve = 0x290; // Size: 8, Type: struct UCurveFloat*
			constexpr auto GravityCurve = 0x298; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DrawDebugInfo = 0x2a0; // Size: 1, Type: bool
			constexpr auto DebugInfoLifetime = 0x2a4; // Size: 4, Type: float
			constexpr auto DebugInfoLineThickness = 0x2a8; // Size: 4, Type: float
	}
} 
