namespace offsets
{
	namespace AWTLGameState
	{
			constexpr auto m_WorldCurrentTime = 0x374; // Size: 4, Type: float
			constexpr auto m_WorldTimeScale = 0x378; // Size: 4, Type: float
			constexpr auto m_LastSyncServerWorldTime = 0x37c; // Size: 4, Type: float
			constexpr auto m_CreditsToMoneyRate = 0x384; // Size: 2, Type: uint16_t
			constexpr auto m_MailPackages = 0x438; // Size: 16, Type: struct TArray<struct FWTLMailPackageRecord>
			constexpr auto m_AccountInventoryList = 0x448; // Size: 16, Type: struct TArray<struct FWTLAccountInventoryItemList>
			constexpr auto m_CurrentRadioTrack = 0x948; // Size: 2, Type: uint16_t
			constexpr auto m_ServerEventInfo = 0x958; // Size: 64, Type: struct FWTLServerEventInfo
			constexpr auto m_ServerKeepAlive = 0x9a0; // Size: 1, Type: char
			constexpr auto m_bIsReputationEnabled = 0x9a3; // Size: 1, Type: bool
			constexpr auto KillsStatsInfo = 0x9b8; // Size: 16, Type: struct TArray<struct FWTLKillStats>
			constexpr auto MaxCharacterLevelForPVEMode = 0x9c8; // Size: 4, Type: int32_t
	}
} 
