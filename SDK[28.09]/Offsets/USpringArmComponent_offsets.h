namespace offsets
{
	namespace USpringArmComponent
	{
			constexpr auto TargetArmLength = 0x1f8; // Size: 4, Type: float
			constexpr auto SocketOffset = 0x1fc; // Size: 12, Type: struct FVector
			constexpr auto TargetOffset = 0x208; // Size: 12, Type: struct FVector
			constexpr auto ProbeSize = 0x214; // Size: 4, Type: float
			constexpr auto ProbeChannel = 0x218; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto bDoCollisionTest = 0x21c; // Size: 1, Type: char
			constexpr auto bUsePawnControlRotation = 0x21c; // Size: 1, Type: char
			constexpr auto bInheritPitch = 0x21c; // Size: 1, Type: char
			constexpr auto bInheritYaw = 0x21c; // Size: 1, Type: char
			constexpr auto bInheritRoll = 0x21c; // Size: 1, Type: char
			constexpr auto bEnableCameraLag = 0x21c; // Size: 1, Type: char
			constexpr auto bEnableCameraRotationLag = 0x21c; // Size: 1, Type: char
			constexpr auto bUseCameraLagSubstepping = 0x21c; // Size: 1, Type: char
			constexpr auto bDrawDebugLagMarkers = 0x21d; // Size: 1, Type: char
			constexpr auto CameraLagSpeed = 0x220; // Size: 4, Type: float
			constexpr auto CameraRotationLagSpeed = 0x224; // Size: 4, Type: float
			constexpr auto CameraLagMaxTimeStep = 0x228; // Size: 4, Type: float
			constexpr auto CameraLagMaxDistance = 0x22c; // Size: 4, Type: float
	}
} 
