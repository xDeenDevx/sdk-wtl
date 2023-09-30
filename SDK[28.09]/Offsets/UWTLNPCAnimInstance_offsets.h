namespace offsets
{
	namespace UWTLNPCAnimInstance
	{
			constexpr auto CharacterInRange = 0x2c8; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto HaveCharacterInRange = 0x2d0; // Size: 1, Type: bool
			constexpr auto NeedToTurnHeadToCharacter = 0x2d1; // Size: 1, Type: bool
			constexpr auto RotationHead = 0x2d4; // Size: 12, Type: struct FRotator
			constexpr auto CharacterInRangeEyesPosition = 0x2e0; // Size: 12, Type: struct FVector
			constexpr auto IndexIdleAnim = 0x2ec; // Size: 4, Type: float
			constexpr auto GreetingAnimationAlpha = 0x2f0; // Size: 4, Type: float
			constexpr auto MoveSpeedValue = 0x2f4; // Size: 4, Type: float
			constexpr auto MoveTurnValue = 0x2f8; // Size: 4, Type: float
	}
} 
