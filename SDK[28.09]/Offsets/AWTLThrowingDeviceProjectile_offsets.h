namespace offsets
{
	namespace AWTLThrowingDeviceProjectile
	{
			constexpr auto bCanBeTeleportedByAnomaly = 0x228; // Size: 1, Type: bool
			constexpr auto m_bIsActive = 0x230; // Size: 1, Type: bool
			constexpr auto m_ReplicatedInitialSpeed = 0x234; // Size: 4, Type: float
			constexpr auto m_ThrowVector = 0x238; // Size: 12, Type: struct FVector
			constexpr auto MeshComp = 0x248; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto m_MovementComponent = 0x250; // Size: 8, Type: struct UWTLProjectileMovementComponent*
			constexpr auto ActivateAfterHit = 0x258; // Size: 1, Type: bool
			constexpr auto CanBeActivatedUnderWater = 0x259; // Size: 1, Type: bool
			constexpr auto MinExplosionDelay = 0x25c; // Size: 4, Type: float
			constexpr auto MaxExplosionDelay = 0x260; // Size: 4, Type: float
			constexpr auto WaterHit = 0x268; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
