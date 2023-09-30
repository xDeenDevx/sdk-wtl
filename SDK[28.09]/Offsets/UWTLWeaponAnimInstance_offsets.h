namespace offsets
{
	namespace UWTLWeaponAnimInstance
	{
			constexpr auto bIsEmpty = 0x2c0; // Size: 1, Type: bool
			constexpr auto bIsJammed = 0x2c1; // Size: 1, Type: bool
			constexpr auto RightHand_Socket = 0x2c4; // Size: 12, Type: struct FVector
			constexpr auto LeftHand_Socket = 0x2d0; // Size: 12, Type: struct FVector
			constexpr auto Missile_Socket = 0x2dc; // Size: 12, Type: struct FVector
			constexpr auto RightHand_Socket_Transform = 0x2f0; // Size: 48, Type: struct FTransform
			constexpr auto LeftHand_Socket_Transform = 0x320; // Size: 48, Type: struct FTransform
			constexpr auto RightHand_Alpha = 0x350; // Size: 4, Type: float
			constexpr auto LeftHand_Alpha = 0x354; // Size: 4, Type: float
			constexpr auto HandlingAnimationType = 0x358; // Size: 4, Type: float
	}
} 
