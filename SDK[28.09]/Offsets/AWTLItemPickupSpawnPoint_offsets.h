namespace offsets
{
	namespace AWTLItemPickupSpawnPoint
	{
			constexpr auto ItemClass = 0x240; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto SpawnVolume = 0x268; // Size: 8, Type: struct UBoxComponent*
			constexpr auto AutoEnableSpawn = 0x270; // Size: 1, Type: bool
			constexpr auto StartDelay = 0x274; // Size: 4, Type: float
			constexpr auto SpawnDelay = 0x278; // Size: 4, Type: float
			constexpr auto MaxCount = 0x27c; // Size: 4, Type: int32_t
			constexpr auto CountLimit = 0x280; // Size: 4, Type: int32_t
			constexpr auto SpawnChance = 0x284; // Size: 4, Type: float
			constexpr auto RotationMin = 0x288; // Size: 12, Type: struct FRotator
			constexpr auto RotationMax = 0x294; // Size: 12, Type: struct FRotator
			constexpr auto ScalabilitySettings = 0x2a0; // Size: 20, Type: struct FWTLPickupSpawnPointScalabilitySettings
	}
} 
