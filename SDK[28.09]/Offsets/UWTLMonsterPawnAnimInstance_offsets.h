namespace offsets
{
	namespace UWTLMonsterPawnAnimInstance
	{
			constexpr auto Speed = 0x360; // Size: 4, Type: float
			constexpr auto Aggression = 0x364; // Size: 4, Type: float
			constexpr auto IsUseAxisMatching = 0x368; // Size: 1, Type: bool
			constexpr auto ForwardSpeed = 0x36c; // Size: 4, Type: float
			constexpr auto DirectionAngle = 0x370; // Size: 4, Type: float
			constexpr auto RightSpeed = 0x374; // Size: 4, Type: float
			constexpr auto VelocitySpeed = 0x378; // Size: 4, Type: float
			constexpr auto DeltaYaw = 0x37c; // Size: 4, Type: float
			constexpr auto AnimationToSizeRate = 0x380; // Size: 4, Type: float
			constexpr auto AttachedState = 0x384; // Size: 1, Type: enum class EWTLMonsterAttachState
			constexpr auto SlopeRotation = 0x388; // Size: 12, Type: struct FRotator
			constexpr auto IdleAnimIndex = 0x394; // Size: 1, Type: char
			constexpr auto AttackAnimIndex = 0x395; // Size: 1, Type: char
			constexpr auto TakeDamageType = 0x396; // Size: 1, Type: enum class EWTLMonsterTakeDamageType
			constexpr auto CurrentState = 0x397; // Size: 1, Type: enum class EWTLMonsterAnimationState
			constexpr auto CurrentAction = 0x398; // Size: 1, Type: enum class EWTLMonsterActionType
			constexpr auto BlackboardState = 0x399; // Size: 1, Type: enum class EWTLMonsterState
	}
} 
