namespace offsets
{
	namespace AWTLInteractivePlantSpawnPoint
	{
			constexpr auto SpawnActive = 0x298; // Size: 1, Type: bool
			constexpr auto PlantsToSpawn = 0x2a0; // Size: 80, Type: struct TMap<struct TSoftClassPtr<UObject>, struct FWTLInteractivePlantSpawnInfo>
			constexpr auto SpawnVolume = 0x2f0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto MinStartDelay = 0x2f8; // Size: 4, Type: float
			constexpr auto MaxStartDelay = 0x2fc; // Size: 4, Type: float
			constexpr auto MinSpawnDelay = 0x300; // Size: 4, Type: float
			constexpr auto MaxSpawnDelay = 0x304; // Size: 4, Type: float
			constexpr auto CountLimit = 0x308; // Size: 4, Type: int32_t
			constexpr auto MinSpawnCount = 0x30c; // Size: 4, Type: int32_t
			constexpr auto MaxSpawnCount = 0x310; // Size: 4, Type: int32_t
			constexpr auto AlignPlantToNormal = 0x314; // Size: 1, Type: bool
			constexpr auto RotationMin = 0x318; // Size: 4, Type: float
			constexpr auto RotationMax = 0x31c; // Size: 4, Type: float
			constexpr auto MaxSlopeAngle = 0x320; // Size: 4, Type: float
			constexpr auto MaxPlantSize = 0x324; // Size: 4, Type: float
	}
} 
