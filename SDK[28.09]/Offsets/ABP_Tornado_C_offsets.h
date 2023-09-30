namespace offsets
{
	namespace ABP_Tornado_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto ST_StormBody_Small = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ST_StormBody_Back_Small = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DefaultSceneRoot = 0x238; // Size: 8, Type: struct USceneComponent*
			constexpr auto DesiredScale = 0x240; // Size: 4, Type: float
			constexpr auto DeltaSec = 0x244; // Size: 4, Type: float
			constexpr auto StartTime = 0x248; // Size: 4, Type: float
			constexpr auto CurrentTime = 0x24c; // Size: 4, Type: float
			constexpr auto EndTime = 0x250; // Size: 4, Type: float
			constexpr auto CurveTornadoScale = 0x258; // Size: 8, Type: struct UCurveFloat*
			constexpr auto IsDestroy = 0x260; // Size: 1, Type: bool
			constexpr auto LifeTime = 0x264; // Size: 4, Type: float
			constexpr auto CurrentScale = 0x268; // Size: 4, Type: float
			constexpr auto IsSpawnSystem = 0x26c; // Size: 1, Type: bool
	}
} 
