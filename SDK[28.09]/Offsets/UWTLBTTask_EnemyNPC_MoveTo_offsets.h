namespace offsets
{
	namespace UWTLBTTask_EnemyNPC_MoveTo
	{
			constexpr auto AcceptableRadius = 0x98; // Size: 4, Type: float
			constexpr auto FilterClass = 0xa0; // Size: 8, Type: UNavigationQueryFilter*
			constexpr auto ObservedBlackboardValueTolerance = 0xa8; // Size: 4, Type: float
			constexpr auto bObserveBlackboardValue = 0xac; // Size: 1, Type: char
			constexpr auto bAllowStrafe = 0xac; // Size: 1, Type: char
			constexpr auto bAllowPartialPath = 0xac; // Size: 1, Type: char
			constexpr auto bTrackMovingGoal = 0xac; // Size: 1, Type: char
			constexpr auto bProjectGoalLocation = 0xac; // Size: 1, Type: char
			constexpr auto bReachTestIncludesAgentRadius = 0xac; // Size: 1, Type: char
			constexpr auto bReachTestIncludesGoalRadius = 0xac; // Size: 1, Type: char
			constexpr auto bStopOnOverlap = 0xac; // Size: 1, Type: char
			constexpr auto bStopOnOverlapNeedsUpdate = 0xad; // Size: 1, Type: char
			constexpr auto AcceptableRadiusKey = 0xb0; // Size: 40, Type: struct FBlackboardKeySelector
	}
} 
