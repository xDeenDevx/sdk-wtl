namespace offsets
{
	namespace AWTLMonsterPawnAIController
	{
			constexpr auto AITeam = 0x33d; // Size: 1, Type: enum class EWTLAITeam
			constexpr auto BehaviorTree = 0x340; // Size: 8, Type: struct UBehaviorTree*
			constexpr auto BehaviorTreeStealth = 0x348; // Size: 8, Type: struct UBehaviorTree*
			constexpr auto bIsCanDeepSleep = 0x350; // Size: 1, Type: bool
			constexpr auto bIsNeutralCreature = 0x351; // Size: 1, Type: bool
			constexpr auto AIInterface = 0x352; // Size: 1, Type: bool
			constexpr auto StepHeight = 0x354; // Size: 4, Type: float
			constexpr auto MovementAcceptableRadius = 0x358; // Size: 4, Type: float
			constexpr auto AttackRadius = 0x35c; // Size: 4, Type: float
			constexpr auto AttackRadiusInMove = 0x360; // Size: 4, Type: float
			constexpr auto FrightRadius = 0x364; // Size: 4, Type: float
			constexpr auto DefaultState = 0x368; // Size: 1, Type: enum class EWTLMonsterState
			constexpr auto StatesForExecuteFright = 0x370; // Size: 16, Type: struct TArray<enum class EWTLMonsterState>
			constexpr auto StatesForReactionOnTakeDamage = 0x380; // Size: 16, Type: struct TArray<enum class EWTLMonsterState>
			constexpr auto SetStateFromTakeDamage = 0x390; // Size: 1, Type: enum class EWTLMonsterState
			constexpr auto SetStateIfCantSetTakeDamage = 0x391; // Size: 1, Type: enum class EWTLMonsterState
			constexpr auto TagNoiseFromDamage = 0x394; // Size: 8, Type: struct FName
			constexpr auto MakeNoiseRadius = 0x39c; // Size: 4, Type: float
			constexpr auto HearingRadius = 0x3a0; // Size: 4, Type: float
			constexpr auto StateMonsterForWorkHearing = 0x3a8; // Size: 16, Type: struct TArray<enum class EWTLMonsterState>
			constexpr auto Delay = 0x3b8; // Size: 4, Type: float
			constexpr auto DamageMultiplier = 0x3bc; // Size: 4, Type: float
			constexpr auto PeripheralVisionHalfAngleDegrees = 0x3c0; // Size: 4, Type: float
			constexpr auto PeripheralVisionDistance = 0x3c4; // Size: 4, Type: float
			constexpr auto UseAcceptableDistanceFollowTarget = 0x3c8; // Size: 1, Type: bool
			constexpr auto AcceptableDistanceFollowTarget = 0x3cc; // Size: 4, Type: float
			constexpr auto MultiplierAcceptableDistance = 0x3d0; // Size: 4, Type: float
	}
} 
