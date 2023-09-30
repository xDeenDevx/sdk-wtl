namespace offsets
{
	namespace AWTLNut
	{
			constexpr auto MeshComp = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto MovementComponent = 0x238; // Size: 8, Type: struct UWTLProjectileMovementComponent*
			constexpr auto SurfaceHitEvent = 0x240; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto SurfaceHitParticles = 0x268; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto SurfaceHitParticleScale = 0x290; // Size: 12, Type: struct FVector
			constexpr auto SurfaceHitNoiseName = 0x29c; // Size: 8, Type: struct FName
			constexpr auto m_ReplicatedInitialSpeed = 0x2a4; // Size: 4, Type: float
			constexpr auto m_ThrowVector = 0x2a8; // Size: 12, Type: struct FVector
	}
} 
