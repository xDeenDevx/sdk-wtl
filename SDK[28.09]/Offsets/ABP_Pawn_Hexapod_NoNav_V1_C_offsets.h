namespace offsets
{
	namespace ABP_Pawn_Hexapod_NoNav_V1_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto DeltaSec = 0xf18; // Size: 4, Type: float
			constexpr auto GrowthTime = 0xf1c; // Size: 4, Type: float
			constexpr auto MaxGrowthTime = 0xf20; // Size: 4, Type: float
			constexpr auto WalkDistance = 0xf24; // Size: 4, Type: float
			constexpr auto State = 0xf28; // Size: 8, Type: struct FName
			constexpr auto InputDir = 0xf30; // Size: 12, Type: struct FVector
			constexpr auto CurrentDir = 0xf3c; // Size: 12, Type: struct FVector
			constexpr auto DesiredDir = 0xf48; // Size: 12, Type: struct FVector
			constexpr auto MyEnemy = 0xf58; // Size: 8, Type: struct AActor*
			constexpr auto TempDir = 0xf60; // Size: 12, Type: struct FVector
			constexpr auto MultiplySpeedRotation = 0xf6c; // Size: 4, Type: float
			constexpr auto FrightRadius = 0xf70; // Size: 4, Type: float
			constexpr auto AttackDistance = 0xf74; // Size: 4, Type: float
			constexpr auto RemainingActionTime = 0xf78; // Size: 4, Type: float
			constexpr auto DelayForCheck = 0xf7c; // Size: 4, Type: float
			constexpr auto MeshScale = 0xf80; // Size: 4, Type: float
			constexpr auto IsDeath = 0xf84; // Size: 1, Type: bool
	}
} 
