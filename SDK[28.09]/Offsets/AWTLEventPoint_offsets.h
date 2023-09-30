namespace offsets
{
	namespace AWTLEventPoint
	{
			constexpr auto PointType = 0x270; // Size: 1, Type: enum class EWTLEventPointType
			constexpr auto Dificulty = 0x274; // Size: 4, Type: float
			constexpr auto ActivationType = 0x278; // Size: 1, Type: enum class EWTLEventPointActivationType
			constexpr auto EventName = 0x280; // Size: 24, Type: struct FText
			constexpr auto EventDescription = 0x298; // Size: 24, Type: struct FText
			constexpr auto CanBeStartedAfterBeginPlay = 0x2b0; // Size: 1, Type: bool
			constexpr auto MinStartDelay = 0x2b4; // Size: 4, Type: float
			constexpr auto MaxStartDelay = 0x2b8; // Size: 4, Type: float
			constexpr auto EventDuration = 0x2bc; // Size: 4, Type: float
			constexpr auto EventRange = 0x2c0; // Size: 4, Type: float
			constexpr auto EventAbandonRange = 0x2c4; // Size: 4, Type: float
			constexpr auto MinCharacterLevel = 0x2c8; // Size: 1, Type: char
			constexpr auto MaxCharacterLevel = 0x2c9; // Size: 1, Type: char
			constexpr auto AllowedFactions = 0x2d0; // Size: 16, Type: struct TArray<enum class EWTLFaction>
			constexpr auto ActivationZoneRange = 0x2e0; // Size: 4, Type: float
			constexpr auto MinActivationZoneCharacterCountToStart = 0x2e4; // Size: 4, Type: int32_t
			constexpr auto EventTasks = 0x2e8; // Size: 16, Type: struct TArray<struct FWTLEventTask>
			constexpr auto CanRunInParallel = 0x2f8; // Size: 1, Type: bool
			constexpr auto CanStartAtDayTime = 0x2f9; // Size: 1, Type: bool
			constexpr auto CanStartAtNightTime = 0x2fa; // Size: 1, Type: bool
			constexpr auto InProgress = 0x2fb; // Size: 1, Type: bool
			constexpr auto AvailableTimeBegin = 0x300; // Size: 8, Type: struct FDateTime
			constexpr auto AvailableTimeEnd = 0x308; // Size: 8, Type: struct FDateTime
			constexpr auto EventEndServerTime = 0x310; // Size: 4, Type: float
			constexpr auto ExperienceReward = 0x314; // Size: 4, Type: int32_t
			constexpr auto MoneyReward = 0x318; // Size: 4, Type: int32_t
			constexpr auto CompleteQuestID = 0x31c; // Size: 4, Type: int32_t
			constexpr auto AchievementID = 0x320; // Size: 4, Type: int32_t
			constexpr auto CanGiveRandomGiftCards = 0x324; // Size: 1, Type: bool
			constexpr auto ItemRewards = 0x328; // Size: 16, Type: struct TArray<struct FWTLEventItemReward>
			constexpr auto ID = 0x3c8; // Size: 4, Type: int32_t
			constexpr auto StartChanceValue = 0x3cc; // Size: 4, Type: float
			constexpr auto ActivationVolume = 0x3d0; // Size: 8, Type: struct AVolume*
			constexpr auto AmbientMusicLocationID = 0x3e8; // Size: 4, Type: int32_t
			constexpr auto LimitRewardByMonsterDamagePercent = 0x3ec; // Size: 1, Type: bool
			constexpr auto MinMonsterDamagePercentForReward = 0x3f0; // Size: 4, Type: float
	}
} 
