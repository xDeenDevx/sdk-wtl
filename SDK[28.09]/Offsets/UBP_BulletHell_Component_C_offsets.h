namespace offsets
{
	namespace UBP_BulletHell_Component_C
	{
			constexpr auto UberGraphFrame = 0xb0; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto BulletInstance = 0xb8; // Size: 8, Type: AActor*
			constexpr auto ReloadTime = 0xc0; // Size: 4, Type: float
			constexpr auto DelayAttack = 0xc4; // Size: 4, Type: float
			constexpr auto DeltaSec = 0xc8; // Size: 4, Type: float
			constexpr auto CurrentReloadTime = 0xcc; // Size: 4, Type: float
			constexpr auto CurrentDelayAttack = 0xd0; // Size: 4, Type: float
			constexpr auto IsReadyToShoot = 0xd4; // Size: 1, Type: bool
			constexpr auto IsReadyToAttack = 0xd5; // Size: 1, Type: bool
			constexpr auto IsAttack = 0xd6; // Size: 1, Type: bool
			constexpr auto TargetLocation = 0xd8; // Size: 12, Type: struct FVector
			constexpr auto TargetActor = 0xe8; // Size: 8, Type: struct AActor*
			constexpr auto TypeAttack = 0xf0; // Size: 4, Type: int32_t
			constexpr auto IsOneShoot = 0xf4; // Size: 1, Type: bool
			constexpr auto SpawnOffsetLocation = 0xf8; // Size: 12, Type: struct FVector
			constexpr auto UseTargetActor = 0x104; // Size: 1, Type: bool
	}
} 
