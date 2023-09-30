namespace offsets
{
	namespace AWTLMissileWeaponProjectile
	{
			constexpr auto MeshComp = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto m_MovementComponent = 0x230; // Size: 8, Type: struct UWTLProjectileMovementComponent*
			constexpr auto SurfaceHitEvent = 0x238; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto SurfaceHitNoiseName = 0x260; // Size: 8, Type: struct FName
			constexpr auto MagicValue = 0x268; // Size: 1, Type: bool
			constexpr auto m_ReplicatedInitialSpeed = 0x26c; // Size: 4, Type: float
			constexpr auto m_ThrowVector = 0x270; // Size: 12, Type: struct FVector
			constexpr auto Damage = 0x2c4; // Size: 4, Type: float
			constexpr auto MinDamage = 0x2c8; // Size: 4, Type: float
			constexpr auto DestructibleObjectTypes = 0x2d0; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto DestructibleImpulse = 0x2e0; // Size: 4, Type: float
			constexpr auto DestructibleDamageMultiplier = 0x2e4; // Size: 4, Type: float
	}
} 
