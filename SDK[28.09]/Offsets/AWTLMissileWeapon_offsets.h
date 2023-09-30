namespace offsets
{
	namespace AWTLMissileWeapon
	{
			constexpr auto TargetLocation = 0x3f8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto m_BeamParticleSystem = 0x400; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto TrajectoryBeamTimeDelta = 0x450; // Size: 4, Type: float
			constexpr auto bPredictTrajectory = 0x454; // Size: 1, Type: bool
			constexpr auto m_bQuickThrow = 0x459; // Size: 1, Type: bool
			constexpr auto ThrowRandomConeAngle = 0x470; // Size: 4, Type: float
			constexpr auto ThrowSequenceSet = 0x478; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto AlternateThrowSequenceSet = 0x490; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto QuickThrowSequenceSet = 0x4a8; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto ProjectileClass = 0x4c0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MissileSocketOffsetMale = 0x4e8; // Size: 12, Type: struct FVector
			constexpr auto MissileSocketOffsetFemale = 0x4f4; // Size: 12, Type: struct FVector
			constexpr auto MainThrowSpeed = 0x500; // Size: 4, Type: float
			constexpr auto MainThrowRotationOffset = 0x504; // Size: 12, Type: struct FRotator
			constexpr auto AlternativeThrowSpeed = 0x510; // Size: 4, Type: float
			constexpr auto AlternativeThrowRotationOffset = 0x514; // Size: 12, Type: struct FRotator
			constexpr auto CanBeDropedAfterDeath = 0x520; // Size: 1, Type: bool
			constexpr auto DropThrowForce = 0x524; // Size: 4, Type: float
			constexpr auto ShowImpactPoint = 0x528; // Size: 1, Type: bool
	}
} 
