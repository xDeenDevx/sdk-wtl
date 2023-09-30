namespace offsets
{
	namespace UWTLMonsterPerceptionComponent
	{
			constexpr auto InRange = 0x108; // Size: 4, Type: float
			constexpr auto HalfAnglePitch = 0x10c; // Size: 4, Type: float
			constexpr auto HalfAngleYaw = 0x110; // Size: 4, Type: float
			constexpr auto CanSeeCharacter = 0x114; // Size: 1, Type: bool
			constexpr auto CheckHitTraceCharacter = 0x115; // Size: 1, Type: bool
			constexpr auto CanSeeMonster = 0x116; // Size: 1, Type: bool
			constexpr auto CheckHitTraceMonster = 0x117; // Size: 1, Type: bool
			constexpr auto CanSeeStuff = 0x118; // Size: 1, Type: bool
			constexpr auto CheckHitTraceStuff = 0x119; // Size: 1, Type: bool
			constexpr auto IgnoreStuffIDList = 0x120; // Size: 16, Type: struct TArray<int32_t>
	}
} 
