namespace offsets
{
	namespace AWTLControlledMonsterPawn
	{
			constexpr auto ActorsTakeDamage = 0xfc8; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto ControlledPawnType = 0xfd8; // Size: 1, Type: enum class EWTLControlledPawnType
			constexpr auto ISeeChickenStatus = 0xfd9; // Size: 1, Type: bool
			constexpr auto IsReactionOnSafeZone = 0xfda; // Size: 1, Type: bool
			constexpr auto SpringArm = 0xfe0; // Size: 8, Type: struct USpringArmComponent*
			constexpr auto CurrentNotificationList = 0xfe8; // Size: 16, Type: struct TArray<struct FWTLNotificationForAction>
			constexpr auto IsMoveLocked = 0xff8; // Size: 1, Type: bool
			constexpr auto CurrentExp = 0xffc; // Size: 4, Type: int32_t
			constexpr auto NeededExpForLevelUp = 0x1000; // Size: 4, Type: int32_t
			constexpr auto ActionInProgress = 0x1004; // Size: 1, Type: enum class EWTLControlledActionKeyType
			constexpr auto DenominatorOfExp = 0x1008; // Size: 4, Type: float
			constexpr auto BaseExperience = 0x100c; // Size: 4, Type: float
			constexpr auto BaseTurnRate = 0x1010; // Size: 4, Type: float
			constexpr auto BaseLookUpRate = 0x1014; // Size: 4, Type: float
			constexpr auto IsMovementBlocked = 0x1018; // Size: 1, Type: bool
			constexpr auto IsAiming = 0x1019; // Size: 1, Type: bool
			constexpr auto AimingTurnRateMultiplier = 0x101c; // Size: 4, Type: float
			constexpr auto ActionDataList = 0x1020; // Size: 80, Type: struct TMap<enum class EWTLControlledActionKeyType, struct FWTLControlledMonsterActionBase>
	}
} 
