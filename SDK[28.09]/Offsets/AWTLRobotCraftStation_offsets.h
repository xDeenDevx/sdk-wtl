namespace offsets
{
	namespace AWTLRobotCraftStation
	{
			constexpr auto m_IsActivated = 0x230; // Size: 1, Type: bool
			constexpr auto m_IsPowerOn = 0x231; // Size: 1, Type: bool
			constexpr auto m_IsCrafting = 0x232; // Size: 1, Type: bool
			constexpr auto m_IsWaitingSpawn = 0x233; // Size: 1, Type: bool
			constexpr auto m_StorageContent = 0x238; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto m_ProductionEndServerTime = 0x2e8; // Size: 4, Type: float
			constexpr auto m_CurrentRobotCount = 0x2ec; // Size: 4, Type: int32_t
			constexpr auto m_LocalizationDisplayText = 0x310; // Size: 24, Type: struct FText
			constexpr auto ActivationTime = 0x328; // Size: 4, Type: float
			constexpr auto ID = 0x32c; // Size: 4, Type: int32_t
			constexpr auto RobotCraftItemID = 0x330; // Size: 4, Type: int32_t
			constexpr auto MaxRobotCount = 0x334; // Size: 4, Type: int32_t
			constexpr auto GLO = 0x338; // Size: 8, Type: struct AWTLGlobalLevelObject*
			constexpr auto MonsterSpawner = 0x340; // Size: 8, Type: struct AWTLMonsterSpawner*
	}
} 
