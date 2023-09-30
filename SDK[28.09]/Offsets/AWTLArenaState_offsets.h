namespace offsets
{
	namespace AWTLArenaState
	{
			constexpr auto m_MatchState = 0x248; // Size: 1, Type: enum class EWTLArenaMatchState
			constexpr auto m_NextMatchStateChangeServerTime = 0x24c; // Size: 4, Type: float
			constexpr auto m_FactionScores = 0x250; // Size: 16, Type: struct TArray<struct FWTLArenaFactionScore>
			constexpr auto m_Leaderboard = 0x270; // Size: 16, Type: struct TArray<struct FWTLArenaLeaderboardRecord>
			constexpr auto Rewards = 0x280; // Size: 16, Type: struct TArray<struct FWTLArenaReward>
			constexpr auto MatchWaitDuration = 0x2b0; // Size: 8, Type: struct FTimespan
			constexpr auto MatchDuration = 0x2b8; // Size: 8, Type: struct FTimespan
			constexpr auto MatchDoneDuration = 0x2c0; // Size: 8, Type: struct FTimespan
	}
} 
