namespace offsets
{
	namespace ABP_Spore_Spawner_Monsters_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto DefaultSceneRoot = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto MonsterList = 0x230; // Size: 16, Type: struct TArray<AActor*>
			constexpr auto CurrentSpawnClassID = 0x240; // Size: 4, Type: int32_t
			constexpr auto MaxSpawnClassID = 0x244; // Size: 4, Type: int32_t
			constexpr auto IsDeath = 0x248; // Size: 1, Type: bool
			constexpr auto MaxCountMonsterClass = 0x24c; // Size: 4, Type: int32_t
			constexpr auto CountMonsterClass = 0x250; // Size: 4, Type: int32_t
			constexpr auto MinCountMonsters = 0x254; // Size: 4, Type: int32_t
			constexpr auto AngularStep = 0x258; // Size: 4, Type: float
			constexpr auto StartAngle = 0x25c; // Size: 4, Type: float
			constexpr auto NeedSpawn = 0x260; // Size: 4, Type: int32_t
			constexpr auto SpawnLocation = 0x264; // Size: 12, Type: struct FVector
	}
} 
