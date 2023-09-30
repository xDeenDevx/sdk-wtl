namespace offsets
{
	namespace UWTLVehicleCharacterAnimInstance
	{
			constexpr auto CharacterOffsetInVehicle = 0xfa8; // Size: 12, Type: struct FVector
			constexpr auto FemaleCharacterAdditionalOffsetInVehicle = 0xfb4; // Size: 12, Type: struct FVector
			constexpr auto CharacterHeadRotationInVehicle = 0xfc0; // Size: 4, Type: float
			constexpr auto SexAlpha = 0xfc4; // Size: 4, Type: float
			constexpr auto WheelAngle = 0xfc8; // Size: 4, Type: float
			constexpr auto BodyTiltX = 0xfcc; // Size: 4, Type: float
			constexpr auto BodyTiltY = 0xfd0; // Size: 4, Type: float
			constexpr auto bIsMoveBackward = 0xfd4; // Size: 1, Type: bool
			constexpr auto CharacterState = 0xfd5; // Size: 1, Type: enum class EWTLCharacterStateInVehicle
			constexpr auto BendAlpha = 0xfd8; // Size: 4, Type: float
			constexpr auto TurnLeftAlpha = 0xfdc; // Size: 4, Type: float
			constexpr auto TurnRightAlpha = 0xfe0; // Size: 4, Type: float
			constexpr auto TurnMaxValue = 0xfe4; // Size: 4, Type: float
			constexpr auto SlideRightValue = 0xfe8; // Size: 4, Type: float
			constexpr auto SlideLeftValue = 0xfec; // Size: 4, Type: float
	}
} 
