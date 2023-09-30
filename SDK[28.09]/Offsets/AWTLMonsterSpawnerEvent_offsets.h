namespace offsets
{
	namespace AWTLMonsterSpawnerEvent
	{
			constexpr auto ListMonstersInfo = 0x2a8; // Size: 16, Type: struct TArray<struct FWTLMonstersDataForSpawnBase>
			constexpr auto IsRandomSelection = 0x2b8; // Size: 1, Type: bool
			constexpr auto IsKillMonsters = 0x2b9; // Size: 1, Type: bool
			constexpr auto DelayForActivation = 0x2bc; // Size: 4, Type: float
			constexpr auto SpawnPoints = 0x2c0; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto IsWaitingForActivationFromOutside = 0x2d0; // Size: 1, Type: bool
	}
} 
