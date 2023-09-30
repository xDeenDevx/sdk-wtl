namespace offsets
{
	namespace ABP_Monster_FunnyBall_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto FMODAudio = 0xf18; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto ST_AlienSporeSphera01 = 0xf20; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Scene = 0xf28; // Size: 8, Type: struct USceneComponent*
			constexpr auto DeltaSec = 0xf30; // Size: 4, Type: float
			constexpr auto MyTarget = 0xf38; // Size: 8, Type: struct AActor*
			constexpr auto CurrentRotation = 0xf40; // Size: 12, Type: struct FRotator
			constexpr auto TargetRotation = 0xf4c; // Size: 12, Type: struct FRotator
			constexpr auto CurrentDirection = 0xf58; // Size: 12, Type: struct FVector
			constexpr auto DesiredDirection = 0xf64; // Size: 12, Type: struct FVector
			constexpr auto IsDeath = 0xf70; // Size: 1, Type: bool
			constexpr auto IsCanGiveDamage = 0xf71; // Size: 1, Type: bool
			constexpr auto SpawnLocation = 0xf74; // Size: 12, Type: struct FVector
			constexpr auto WalkingDistance = 0xf80; // Size: 4, Type: float
	}
} 
