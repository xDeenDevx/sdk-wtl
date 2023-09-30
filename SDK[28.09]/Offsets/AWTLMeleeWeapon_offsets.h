namespace offsets
{
	namespace AWTLMeleeWeapon
	{
			constexpr auto HitsList = 0x3f0; // Size: 16, Type: struct TArray<struct FItemAnimationSet>
			constexpr auto HeavyHitsList = 0x400; // Size: 16, Type: struct TArray<struct FItemAnimationSet>
			constexpr auto MainSequenceSet = 0x410; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto AlternativeSequenceSet = 0x428; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto QuickHitSequenceSet = 0x440; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto QuickHitWithEmptyHandsSequenceSet = 0x458; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto AnimationRateMultiplierOnSprinting = 0x470; // Size: 4, Type: float
			constexpr auto CollisionObjectTypes = 0x478; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto MainDamageMultiplier = 0x488; // Size: 4, Type: float
			constexpr auto PlaceableStuffDamageMultiplier = 0x48c; // Size: 4, Type: float
			constexpr auto MainHitParticleScale = 0x490; // Size: 4, Type: float
			constexpr auto MainRagdollImpulseMultiplier = 0x494; // Size: 4, Type: float
			constexpr auto MainRangeDelta = 0x498; // Size: 4, Type: float
			constexpr auto MainCollisionRadius = 0x49c; // Size: 4, Type: float
			constexpr auto MainUseArmor = 0x4a0; // Size: 1, Type: bool
			constexpr auto MainStaminaPerUse = 0x4a4; // Size: 4, Type: float
			constexpr auto MainBleedingChance = 0x4a8; // Size: 4, Type: float
			constexpr auto MainMaxBleedingValue = 0x4ac; // Size: 4, Type: float
			constexpr auto MainStunChance = 0x4b0; // Size: 4, Type: float
			constexpr auto ShowHitPoint = 0x4b4; // Size: 1, Type: bool
			constexpr auto AlternativeDamageMultiplier = 0x4b8; // Size: 4, Type: float
			constexpr auto AlternativeHitParticleScale = 0x4bc; // Size: 4, Type: float
			constexpr auto AlternativeRagdollImpulseMultiplier = 0x4c0; // Size: 4, Type: float
			constexpr auto AlternativeRangeDelta = 0x4c4; // Size: 4, Type: float
			constexpr auto AlternativeCollisionRadius = 0x4c8; // Size: 4, Type: float
			constexpr auto AlternativeUseArmor = 0x4cc; // Size: 1, Type: bool
			constexpr auto AlternativeStaminaPerUse = 0x4d0; // Size: 4, Type: float
			constexpr auto AlternativeBleedingChance = 0x4d4; // Size: 4, Type: float
			constexpr auto AlternativeMaxBleedingValue = 0x4d8; // Size: 4, Type: float
			constexpr auto AlternativeStunChance = 0x4dc; // Size: 4, Type: float
	}
} 
