namespace offsets
{
	namespace AWTLHealingItem
	{
			constexpr auto HealingRay = 0x458; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto CharacterHealingEffect = 0x460; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto HighlightCharacter = 0x468; // Size: 1, Type: bool
			constexpr auto StencilValue = 0x46c; // Size: 4, Type: int32_t
			constexpr auto InteractiveTrace = 0x470; // Size: 1, Type: enum class ETraceTypeQuery
			constexpr auto Distance = 0x4c4; // Size: 4, Type: float
			constexpr auto WorkDistance = 0x4c8; // Size: 4, Type: float
			constexpr auto SphereRadius = 0x4cc; // Size: 4, Type: float
			constexpr auto PercentPerUse = 0x4d0; // Size: 4, Type: float
			constexpr auto PercentPerUseMin = 0x4d4; // Size: 4, Type: float
			constexpr auto HealthPerUse = 0x4d8; // Size: 4, Type: float
			constexpr auto PercentPerUseToOwner = 0x4dc; // Size: 4, Type: float
			constexpr auto MaxAngleBetweenCharacters = 0x4e0; // Size: 4, Type: float
			constexpr auto MinHealthPercenToGetExp = 0x4e4; // Size: 4, Type: float
			constexpr auto MinDamageValue = 0x4e8; // Size: 4, Type: float
			constexpr auto MaxDamageValue = 0x4ec; // Size: 4, Type: float
			constexpr auto EnergyPerUse = 0x4f0; // Size: 4, Type: float
			constexpr auto HealOwner = 0x4f4; // Size: 1, Type: bool
			constexpr auto StimulatorValue = 0x4f8; // Size: 4, Type: float
			constexpr auto NegativeEffects = 0x500; // Size: 16, Type: struct TArray<enum class EWTLCharacterEffectType>
			constexpr auto ReputationDelta = 0x510; // Size: 4, Type: float
			constexpr auto HealingEffect = 0x518; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto HealingLight = 0x540; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CollisionTraceQuery = 0x568; // Size: 1, Type: enum class ETraceTypeQuery
			constexpr auto ReplicatedEnergyValue = 0x56c; // Size: 4, Type: float
			constexpr auto CharacterInFocus = 0x570; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto MonsterInFocus = 0x578; // Size: 8, Type: struct AWTLMonsterPawn*
			constexpr auto IsCharged = 0x580; // Size: 1, Type: bool
			constexpr auto bSpawnEffects = 0x581; // Size: 1, Type: bool
			constexpr auto bDeactivateAllEffects = 0x582; // Size: 1, Type: bool
	}
} 
