namespace offsets
{
	namespace ABP_ToxicHornetSpawner_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto DefaultSceneRoot = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto DeltaSec = 0x230; // Size: 4, Type: float
			constexpr auto CurrentRespawnTime = 0x234; // Size: 4, Type: float
			constexpr auto SpawnPointList = 0x238; // Size: 16, Type: struct TArray<struct ABP_SpawnPointForMonster_C*>
			constexpr auto IsAvailableSpawningPoints = 0x248; // Size: 1, Type: bool
			constexpr auto RespawnTime = 0x24c; // Size: 4, Type: float
			constexpr auto HornetSpawnerList = 0x250; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto Difficulty = 0x260; // Size: 4, Type: float
			constexpr auto IsActivated = 0x264; // Size: 1, Type: bool
			constexpr auto MyTentacle = 0x268; // Size: 8, Type: struct ABP_SplineToUp_C*
			constexpr auto IsTentacleStop = 0x270; // Size: 1, Type: bool
			constexpr auto CountIterationSpawn = 0x274; // Size: 4, Type: int32_t
	}
} 
