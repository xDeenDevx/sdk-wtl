namespace offsets
{
	namespace AWTLEnemyNPCSpawner
	{
			constexpr auto SpriteComponent = 0x250; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto SpawnType = 0x258; // Size: 1, Type: enum class EWTLEnemyNPCSpawnType
			constexpr auto SpawnPointList = 0x260; // Size: 16, Type: struct TArray<struct AWTLEnemyNPCSpawnPoint*>
			constexpr auto EnemyNPCList = 0x270; // Size: 16, Type: struct TArray<struct AWTLEnemyNPC*>
			constexpr auto SpawEnemies = 0x280; // Size: 16, Type: struct TArray<struct FWTLEnemyNPCSpawnerRecord>
			constexpr auto bCanUseFlashlight = 0x290; // Size: 1, Type: bool
			constexpr auto ActiveRange = 0x294; // Size: 4, Type: float
			constexpr auto RespawnTimeoutMin = 0x298; // Size: 4, Type: float
			constexpr auto RespawnTimeoutMax = 0x29c; // Size: 4, Type: float
			constexpr auto NavigationRaycastFilter = 0x2a0; // Size: 8, Type: UNavigationQueryFilter*
	}
} 
