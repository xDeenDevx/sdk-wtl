namespace offsets
{
	namespace AWTLTacticalGrenade
	{
			constexpr auto RootSphere = 0x228; // Size: 8, Type: struct USphereComponent*
			constexpr auto ShieldLeftSide = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ShieldRightSide = 0x238; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto CurrentCondition = 0x240; // Size: 4, Type: float
			constexpr auto Condition = 0x244; // Size: 4, Type: float
			constexpr auto Time = 0x248; // Size: 4, Type: float
			constexpr auto MinMeshScaleY = 0x24c; // Size: 4, Type: float
			constexpr auto MinMeshScaleZ = 0x250; // Size: 4, Type: float
			constexpr auto TraceDistance = 0x254; // Size: 4, Type: float
			constexpr auto TraceDistanceUp = 0x258; // Size: 4, Type: float
			constexpr auto TraceStartOffsetX = 0x25c; // Size: 4, Type: float
			constexpr auto TraceStartOffsetZ = 0x260; // Size: 4, Type: float
			constexpr auto MonsterDamageMultiplier = 0x264; // Size: 4, Type: float
			constexpr auto DestructiveProjectileIDList = 0x268; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto StunRuningCharacters = 0x278; // Size: 1, Type: bool
			constexpr auto BackgroundSound = 0x280; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto HitFX = 0x2a8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto ImpactSound = 0x2d0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto IgnoreEnvironment = 0x2f8; // Size: 1, Type: bool
	}
} 
