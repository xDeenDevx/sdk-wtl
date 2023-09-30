namespace offsets
{
	namespace AWTLFish
	{
			constexpr auto DefaultVelocity = 0x238; // Size: 12, Type: struct FVector
			constexpr auto SpeedMultiplier = 0x244; // Size: 4, Type: float
			constexpr auto ForceInterpolationSpeed = 0x24c; // Size: 4, Type: float
			constexpr auto DirectionChangeSpeedMultiplier = 0x250; // Size: 4, Type: float
			constexpr auto StaminaRecoveryValue = 0x254; // Size: 4, Type: float
			constexpr auto StaminaDecreaseValue = 0x258; // Size: 4, Type: float
			constexpr auto MinStaminaValueToRecovering = 0x25c; // Size: 4, Type: float
			constexpr auto MaxStaminaValueToRecovering = 0x260; // Size: 4, Type: float
			constexpr auto MinStaminaDeltaToChangeVelocity = 0x264; // Size: 4, Type: float
			constexpr auto MaxStaminaDeltaToChangeVelocity = 0x268; // Size: 4, Type: float
			constexpr auto BodiesBelowSimulatePhysicsSocketName = 0x26c; // Size: 8, Type: struct FName
			constexpr auto FishOffset = 0x27c; // Size: 12, Type: struct FVector
			constexpr auto m_FishState = 0x288; // Size: 1, Type: enum class EWTLFishState
			constexpr auto m_InterpolationHorizontalSpeed = 0x28c; // Size: 4, Type: float
			constexpr auto m_InterpolationVerticalSpeed = 0x290; // Size: 4, Type: float
			constexpr auto FishRadianSpeedCurve = 0x298; // Size: 8, Type: struct UCurveFloat*
			constexpr auto m_Activity = 0x2c8; // Size: 8, Type: struct AWTLFishingActivity*
			constexpr auto Mesh = 0x2d0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto PeckingParticles = 0x2d8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto RecoveringParticles = 0x2e0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto RipplesParticles = 0x2e8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto WavesSoundComponent = 0x2f0; // Size: 8, Type: struct UFMODAudioComponent*
	}
} 
