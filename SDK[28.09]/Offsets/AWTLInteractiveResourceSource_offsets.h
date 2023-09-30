namespace offsets
{
	namespace AWTLInteractiveResourceSource
	{
			constexpr auto Mesh = 0x2c0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto GatherTypes = 0x2c8; // Size: 16, Type: struct TArray<struct FWTLInteractiveResourceGatherType>
			constexpr auto SourceName = 0x2d8; // Size: 24, Type: struct FText
			constexpr auto CurrentValue = 0x2f0; // Size: 4, Type: float
			constexpr auto StartValue = 0x2f4; // Size: 4, Type: float
			constexpr auto MaxValue = 0x2f8; // Size: 4, Type: float
			constexpr auto MinValueIncrement = 0x2fc; // Size: 4, Type: float
			constexpr auto MaxValueIncrement = 0x300; // Size: 4, Type: float
			constexpr auto MinValueIncrementTime = 0x304; // Size: 4, Type: float
			constexpr auto MaxValueIncrementTime = 0x308; // Size: 4, Type: float
			constexpr auto AddToBlackListAfterGather = 0x30c; // Size: 1, Type: bool
			constexpr auto BlackListTime = 0x310; // Size: 4, Type: float
	}
} 
