namespace offsets
{
	namespace AWTLThrowingDevice
	{
			constexpr auto m_bQuickThrow = 0x45a; // Size: 1, Type: bool
			constexpr auto TargetLocation = 0x480; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto m_BeamParticleSystem = 0x488; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto TrajectoryBeamTimeDelta = 0x4d8; // Size: 4, Type: float
			constexpr auto bPredictTrajectory = 0x4dc; // Size: 1, Type: bool
			constexpr auto ThrowRandomConeAngle = 0x4f0; // Size: 4, Type: float
			constexpr auto ThrowSequenceSet = 0x4f8; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto AlternateThrowSequenceSet = 0x510; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto QuickThrowSequenceSet = 0x528; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto ProjectileClass = 0x540; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MissileSocketOffsetMale = 0x568; // Size: 12, Type: struct FVector
			constexpr auto MissileSocketOffsetFemale = 0x574; // Size: 12, Type: struct FVector
			constexpr auto MainThrowRotationOffset = 0x580; // Size: 12, Type: struct FRotator
			constexpr auto AlternativeThrowRotationOffset = 0x58c; // Size: 12, Type: struct FRotator
			constexpr auto ProjectileThrowSpeed = 0x598; // Size: 4, Type: float
			constexpr auto CanBeDeactivated = 0x59c; // Size: 1, Type: bool
			constexpr auto CanBeDropedAfterDeath = 0x59d; // Size: 1, Type: bool
			constexpr auto DropThrowForce = 0x5a0; // Size: 4, Type: float
			constexpr auto DropThrowForceAfterDeath = 0x5a4; // Size: 4, Type: float
			constexpr auto ShowImpactPoint = 0x5a8; // Size: 1, Type: bool
	}
} 
