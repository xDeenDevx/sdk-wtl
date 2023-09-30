namespace offsets
{
	namespace UArchVisCharMovementComponent
	{
			constexpr auto RotationalAcceleration = 0xb00; // Size: 12, Type: struct FRotator
			constexpr auto RotationalDeceleration = 0xb0c; // Size: 12, Type: struct FRotator
			constexpr auto MaxRotationalVelocity = 0xb18; // Size: 12, Type: struct FRotator
			constexpr auto MinPitch = 0xb24; // Size: 4, Type: float
			constexpr auto MaxPitch = 0xb28; // Size: 4, Type: float
			constexpr auto WalkingFriction = 0xb2c; // Size: 4, Type: float
			constexpr auto WalkingSpeed = 0xb30; // Size: 4, Type: float
			constexpr auto WalkingAcceleration = 0xb34; // Size: 4, Type: float
	}
} 
