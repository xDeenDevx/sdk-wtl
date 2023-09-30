namespace offsets
{
	namespace AWTLInteractiveResource
	{
			constexpr auto PlantRootComponent = 0x2c0; // Size: 8, Type: struct USceneComponent*
			constexpr auto BoxComponent = 0x2c8; // Size: 8, Type: struct UBoxComponent*
			constexpr auto Mesh = 0x2d0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ResourceID = 0x2d8; // Size: 4, Type: int32_t
			constexpr auto MaxCount = 0x2dc; // Size: 4, Type: int32_t
			constexpr auto MinIncrementCount = 0x2e0; // Size: 4, Type: int32_t
			constexpr auto MaxIncrementCount = 0x2e4; // Size: 4, Type: int32_t
			constexpr auto MinIncrementDelay = 0x2e8; // Size: 4, Type: float
			constexpr auto MaxIncrementDelay = 0x2ec; // Size: 4, Type: float
			constexpr auto AddToBlackListAfterGiveItem = 0x2f0; // Size: 1, Type: bool
			constexpr auto BlackListTimeout = 0x2f4; // Size: 4, Type: float
			constexpr auto Count = 0x2f8; // Size: 4, Type: int32_t
	}
} 
