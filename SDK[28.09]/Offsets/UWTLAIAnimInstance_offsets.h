namespace offsets
{
	namespace UWTLAIAnimInstance
	{
			constexpr auto VelocitySpeed = 0x2c0; // Size: 4, Type: float
			constexpr auto ForwardSpeed = 0x2c4; // Size: 4, Type: float
			constexpr auto RightSpeed = 0x2c8; // Size: 4, Type: float
			constexpr auto UpSpeed = 0x2cc; // Size: 4, Type: float
			constexpr auto Direction = 0x2d0; // Size: 12, Type: struct FVector
			constexpr auto RotationDelta = 0x2dc; // Size: 12, Type: struct FRotator
			constexpr auto VectorDelta = 0x2e8; // Size: 12, Type: struct FVector
	}
} 
