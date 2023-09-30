namespace offsets
{
	namespace AWTLRepairItem
	{
			constexpr auto ReplicatedEnergyValue = 0x458; // Size: 4, Type: float
			constexpr auto HitDistance = 0x480; // Size: 4, Type: float
			constexpr auto DistanceToSpawnDecal = 0x484; // Size: 4, Type: float
			constexpr auto MeleeHitDistance = 0x488; // Size: 4, Type: float
			constexpr auto SphereRadius = 0x48c; // Size: 4, Type: float
			constexpr auto RepairPerUse = 0x490; // Size: 4, Type: int32_t
			constexpr auto EnergyPerUse = 0x494; // Size: 4, Type: float
			constexpr auto IdleUse = 0x498; // Size: 4, Type: int32_t
			constexpr auto MinRepairPercentToGetExp = 0x49c; // Size: 4, Type: float
			constexpr auto ExperienceMultiplier = 0x4a0; // Size: 4, Type: float
			constexpr auto BurningEffectValuePerUse = 0x4a4; // Size: 4, Type: float
			constexpr auto BurningEffectMaxValue = 0x4a8; // Size: 4, Type: float
			constexpr auto ReputationDelta = 0x4ac; // Size: 4, Type: float
			constexpr auto Decals = 0x4b0; // Size: 16, Type: struct TArray<struct UMaterialInstance*>
			constexpr auto DecalSize = 0x4c0; // Size: 12, Type: struct FVector
			constexpr auto DecalsLifeSpan = 0x4cc; // Size: 4, Type: float
			constexpr auto CollisionObjectTypes = 0x4d0; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto CollisionTraceQuery = 0x4e0; // Size: 1, Type: enum class ETraceTypeQuery
			constexpr auto bSetEffects = 0x4e1; // Size: 1, Type: bool
	}
} 
