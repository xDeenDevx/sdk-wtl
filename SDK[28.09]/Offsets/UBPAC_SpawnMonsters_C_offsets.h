namespace offsets
{
	namespace UBPAC_SpawnMonsters_C
	{
			constexpr auto UberGraphFrame = 0xb0; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto DeltaSec = 0xb8; // Size: 4, Type: float
			constexpr auto MonsterClass = 0xc0; // Size: 8, Type: AWTLMonsterPawn*
			constexpr auto MinLevel = 0xc8; // Size: 4, Type: int32_t
			constexpr auto MaxLevel = 0xcc; // Size: 4, Type: int32_t
			constexpr auto MinIntervalSpawn = 0xd0; // Size: 4, Type: float
			constexpr auto MaxIntervalSpawn = 0xd4; // Size: 4, Type: float
			constexpr auto CurrentIntervalSpawn = 0xd8; // Size: 4, Type: float
			constexpr auto IsSpawnActivated = 0xdc; // Size: 1, Type: bool
			constexpr auto myMonsterList = 0xe0; // Size: 16, Type: struct TArray<struct AWTLMonsterPawn*>
			constexpr auto InnerRadius = 0xf0; // Size: 4, Type: float
			constexpr auto OuterRadius = 0xf4; // Size: 4, Type: float
			constexpr auto TwistingAngle = 0xf8; // Size: 4, Type: float
			constexpr auto NumberOfRings = 0xfc; // Size: 4, Type: int32_t
			constexpr auto PointsPerRing = 0x100; // Size: 4, Type: int32_t
			constexpr auto SpawnLocationList = 0x108; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto CurrentIDLocation = 0x118; // Size: 4, Type: int32_t
			constexpr auto EGenerateStatus = 0x11c; // Size: 1, Type: enum class E_GenerateStatus
			constexpr auto MonsterOwner = 0x120; // Size: 8, Type: struct AActor*
			constexpr auto OnAllMonstersDead = 0x128; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CurrentRing = 0x138; // Size: 4, Type: int32_t
			constexpr auto CurrentPoint = 0x13c; // Size: 4, Type: int32_t
			constexpr auto CurrentTwistingAngle = 0x140; // Size: 4, Type: float
			constexpr auto OnSpawnMonstersFinish = 0x148; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto IsShuffleLocationList = 0x158; // Size: 1, Type: bool
			constexpr auto AddLocalOffsetLocationList = 0x160; // Size: 16, Type: struct TArray<struct FVector>
	}
} 
