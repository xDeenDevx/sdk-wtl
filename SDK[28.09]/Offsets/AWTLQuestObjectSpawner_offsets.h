namespace offsets
{
	namespace AWTLQuestObjectSpawner
	{
			constexpr auto ObjectRootComponent = 0x288; // Size: 8, Type: struct USceneComponent*
			constexpr auto BoxComponent = 0x290; // Size: 8, Type: struct UBoxComponent*
			constexpr auto Mesh = 0x298; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DisplayName = 0x2a0; // Size: 24, Type: struct FText
			constexpr auto QuestIDs = 0x2b8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ItemType = 0x2c8; // Size: 1, Type: enum class EWTLItemType
			constexpr auto ItemTypeID = 0x2cc; // Size: 4, Type: int32_t
			constexpr auto MinCount = 0x2d0; // Size: 4, Type: int32_t
			constexpr auto MaxCount = 0x2d4; // Size: 4, Type: int32_t
			constexpr auto MinCondition = 0x2d8; // Size: 4, Type: int32_t
			constexpr auto MaxCondition = 0x2dc; // Size: 4, Type: int32_t
			constexpr auto MinSpawnDelay = 0x2e0; // Size: 4, Type: float
			constexpr auto MaxSpawnDelay = 0x2e4; // Size: 4, Type: float
			constexpr auto AllowTakeOnlyOnce = 0x2e8; // Size: 1, Type: bool
			constexpr auto Count = 0x2ec; // Size: 4, Type: int32_t
			constexpr auto Condition = 0x2f0; // Size: 4, Type: int32_t
	}
} 
