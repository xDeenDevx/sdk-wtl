namespace offsets
{
	namespace AWTLProjectile
	{
			constexpr auto CollisionComp = 0x220; // Size: 8, Type: struct USphereComponent*
			constexpr auto ProjectileMovement = 0x228; // Size: 8, Type: struct UWTLProjectileMovementComponent*
			constexpr auto Type = 0x230; // Size: 1, Type: enum class EProjectileType
			constexpr auto bShowDebugInfo = 0x231; // Size: 1, Type: bool
			constexpr auto bDrawAimingTrajectory = 0x232; // Size: 1, Type: bool
			constexpr auto AimingTrajectoryColor = 0x234; // Size: 4, Type: struct FColor
			constexpr auto AimingTrajectoryThickness = 0x238; // Size: 4, Type: float
			constexpr auto bDrawActualTrajectory = 0x23c; // Size: 1, Type: bool
			constexpr auto ActualTrajectoryThickness = 0x240; // Size: 4, Type: float
			constexpr auto DebugInfoLifetime = 0x244; // Size: 4, Type: float
	}
} 
