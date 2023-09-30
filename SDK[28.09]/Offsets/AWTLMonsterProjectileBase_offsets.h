namespace offsets
{
	namespace AWTLMonsterProjectileBase
	{
			constexpr auto CollisionComp = 0x220; // Size: 8, Type: struct USphereComponent*
			constexpr auto ProjectileMovement = 0x228; // Size: 8, Type: struct UProjectileMovementComponent*
			constexpr auto RepStartLocation = 0x230; // Size: 12, Type: struct FVector
			constexpr auto RepTargetLocation = 0x23c; // Size: 12, Type: struct FVector
			constexpr auto MinDamage = 0x248; // Size: 4, Type: float
			constexpr auto MaxDamage = 0x24c; // Size: 4, Type: float
			constexpr auto RepAngleImpact = 0x250; // Size: 4, Type: float
	}
} 
