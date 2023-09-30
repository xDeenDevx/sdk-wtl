namespace offsets
{
	namespace ABP_MonsterSpawnerBase_C
	{
			constexpr auto UberGraphFrame = 0x400; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Arrow = 0x408; // Size: 8, Type: struct UArrowComponent*
			constexpr auto billboard = 0x410; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto DefaultSceneRoot = 0x418; // Size: 8, Type: struct USceneComponent*
			constexpr auto FreeMonsterPoints = 0x420; // Size: 16, Type: struct TArray<struct AWTLMonsterPawn*>
			constexpr auto SpawnPoints = 0x430; // Size: 16, Type: struct TArray<struct ABP_SpawnPointForMonster_C*>
			constexpr auto TempIdSpawnPoint = 0x440; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto TempId = 0x450; // Size: 4, Type: int32_t
			constexpr auto DrawSpawnPointsInRadius = 0x454; // Size: 1, Type: bool
			constexpr auto CurrentID = 0x458; // Size: 4, Type: int32_t
			constexpr auto FreePtr = 0x460; // Size: 8, Type: struct AWTLMonsterPawn*
			constexpr auto EventOnMonsterDead = 0x468; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto RandomSpawnPoint = 0x478; // Size: 1, Type: bool
			constexpr auto FindMonsterClass = 0x480; // Size: 8, Type: AWTLMonsterPawn*
			constexpr auto ReplaceMonsterClass = 0x488; // Size: 8, Type: AWTLMonsterPawn*
			constexpr auto CountMonstersReplaced = 0x490; // Size: 4, Type: int32_t
			constexpr auto Distance = 0x494; // Size: 4, Type: float
			constexpr auto SpawnLocation = 0x498; // Size: 12, Type: struct FVector
			constexpr auto NameSpawnClass = 0x4a8; // Size: 16, Type: struct FString
			constexpr auto MonsterLimit = 0x4b8; // Size: 16, Type: struct FString
			constexpr auto CountSpawnPoints = 0x4c8; // Size: 4, Type: int32_t
			constexpr auto SetSpawnPointAnchor = 0x4cc; // Size: 1, Type: bool
			constexpr auto EventOnMonsterSpawned = 0x4d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MyFortificationCommandCore = 0x4e0; // Size: 8, Type: struct ABP_FortificationCommandCore_C*
			constexpr auto RandomID = 0x4e8; // Size: 4, Type: int32_t
			constexpr auto CorrectSpawnPoints = 0x4f0; // Size: 16, Type: struct TArray<struct ABP_SpawnPointForMonster_C*>
	}
} 
