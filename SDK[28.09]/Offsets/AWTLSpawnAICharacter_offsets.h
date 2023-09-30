namespace offsets
{
	namespace AWTLSpawnAICharacter
	{
			constexpr auto SpawnClass = 0x248; // Size: 8, Type: AWTLAICharacter*
			constexpr auto IsActive = 0x250; // Size: 1, Type: bool
			constexpr auto SpawnedObjectsLimit = 0x254; // Size: 4, Type: int32_t
			constexpr auto MinLevel = 0x258; // Size: 4, Type: int32_t
			constexpr auto MaxLevel = 0x25c; // Size: 4, Type: int32_t
			constexpr auto StartDelay = 0x260; // Size: 4, Type: float
			constexpr auto MinSpawnInterval = 0x264; // Size: 4, Type: float
			constexpr auto MaxSpawnInterval = 0x268; // Size: 4, Type: float
			constexpr auto SpawnRadius = 0x26c; // Size: 4, Type: float
			constexpr auto MaxRadiusFollowTarget = 0x270; // Size: 4, Type: float
			constexpr auto IsFlyingAICharacter = 0x274; // Size: 1, Type: bool
			constexpr auto MaxDistanceFromLandscape = 0x278; // Size: 4, Type: float
			constexpr auto IsSpawnPoints = 0x27c; // Size: 1, Type: bool
			constexpr auto SpawnPoints = 0x280; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
