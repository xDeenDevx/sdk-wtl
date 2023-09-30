namespace offsets
{
	namespace AWTLMonsterSpawner
	{
			constexpr auto CollisionTraceQuery = 0x2b0; // Size: 1, Type: enum class ETraceTypeQuery
			constexpr auto m_ListControllers = 0x2b8; // Size: 16, Type: struct TArray<struct AWTLMonsterPawnAIController*>
			constexpr auto SetFaction = 0x2c8; // Size: 1, Type: enum class EWTLFaction
			constexpr auto LastSpawnMonster = 0x2d0; // Size: 8, Type: struct AWTLMonsterPawn*
			constexpr auto m_SpawnClass = 0x2d8; // Size: 8, Type: AWTLMonsterPawn*
			constexpr auto IsCheckCanPlaceMonster = 0x2e0; // Size: 1, Type: bool
			constexpr auto IsSpawnMonsterFromCharacter = 0x2e1; // Size: 1, Type: bool
			constexpr auto m_SpawnedMonstersLimit = 0x2e4; // Size: 4, Type: int32_t
			constexpr auto m_AllowableNumberOfLivingMonsters = 0x2e8; // Size: 4, Type: int32_t
			constexpr auto m_CountMonstersPerCharacter = 0x2ec; // Size: 4, Type: int32_t
			constexpr auto m_MaxMonstersAdd = 0x2f0; // Size: 4, Type: int32_t
			constexpr auto m_StartDelay = 0x2f4; // Size: 4, Type: float
			constexpr auto m_MinSpawnInterval = 0x2f8; // Size: 4, Type: float
			constexpr auto m_MaxSpawnInterval = 0x2fc; // Size: 4, Type: float
			constexpr auto m_SpawnRadius = 0x300; // Size: 4, Type: float
			constexpr auto m_DistanceFollowTarget = 0x304; // Size: 4, Type: float
			constexpr auto m_IsReactionOnSafeZone = 0x308; // Size: 1, Type: bool
			constexpr auto m_MinimumLevel = 0x310; // Size: 1, Type: char
			constexpr auto m_MaximumLevel = 0x311; // Size: 1, Type: char
			constexpr auto IsBurst = 0x312; // Size: 1, Type: bool
			constexpr auto PercentDamageBurst = 0x313; // Size: 1, Type: char
			constexpr auto TakeDamageBurst = 0x314; // Size: 4, Type: float
			constexpr auto MinLevelBurst = 0x318; // Size: 1, Type: char
			constexpr auto MaxLevelBurst = 0x319; // Size: 1, Type: char
			constexpr auto MultiplierParametersForMonster = 0x31c; // Size: 4, Type: float
			constexpr auto m_NavigationProjectExtend = 0x320; // Size: 12, Type: struct FVector
			constexpr auto m_SpawnPointRandomMethod = 0x32c; // Size: 4, Type: enum class EWTLMonsterSpawnerSpawnMethod
			constexpr auto IsActivated = 0x330; // Size: 1, Type: bool
			constexpr auto IsDeactivatedIfMonstersSpawned = 0x331; // Size: 1, Type: bool
			constexpr auto IsDeactivateAfterEachSpawn = 0x332; // Size: 1, Type: bool
			constexpr auto IsSpawnCentr = 0x333; // Size: 1, Type: bool
			constexpr auto IsSpawnOnlyFromPoints = 0x334; // Size: 1, Type: bool
			constexpr auto SetBehaviorTree = 0x338; // Size: 8, Type: struct UBehaviorTree*
			constexpr auto LifespanAfterDeath = 0x340; // Size: 4, Type: float
			constexpr auto MonsterLifeTime = 0x344; // Size: 4, Type: float
			constexpr auto IsApplySettings = 0x348; // Size: 1, Type: bool
			constexpr auto SetPeripheralVisionDistance = 0x34c; // Size: 4, Type: float
			constexpr auto SetPeripheralVisionHalfAngleDegrees = 0x350; // Size: 4, Type: float
			constexpr auto SetFrightRadius = 0x354; // Size: 4, Type: float
			constexpr auto SetHearingRange = 0x358; // Size: 4, Type: float
			constexpr auto TargetActor = 0x360; // Size: 8, Type: struct AActor*
			constexpr auto UseMonsterExperience = 0x368; // Size: 1, Type: bool
			constexpr auto MinMonsterExperienceDelta = 0x36c; // Size: 4, Type: int32_t
			constexpr auto MaxMonsterExperienceDelta = 0x370; // Size: 4, Type: int32_t
			constexpr auto MinMonsterExperienceTickInterval = 0x374; // Size: 4, Type: float
			constexpr auto MaxMonsterExperienceTickInterval = 0x378; // Size: 4, Type: float
			constexpr auto MinExperienceDropCountMultiplierDelta = 0x37c; // Size: 4, Type: float
			constexpr auto MaxExperienceDropCountMultiplierDelta = 0x380; // Size: 4, Type: float
			constexpr auto MinExperienceDropChanceMultiplierDelta = 0x384; // Size: 4, Type: float
			constexpr auto MaxExperienceDropChanceMultiplierDelta = 0x388; // Size: 4, Type: float
			constexpr auto IgnoreFortificationCommandCores = 0x38c; // Size: 1, Type: bool
			constexpr auto m_MonsterDeathPosition = 0x3e4; // Size: 12, Type: struct FVector
			constexpr auto SpawnerTask = 0x3f0; // Size: 16, Type: struct TArray<struct FWTLMonsterSpawnerTaskInfo>
	}
} 
