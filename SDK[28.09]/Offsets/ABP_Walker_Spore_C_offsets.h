namespace offsets
{
	namespace ABP_Walker_Spore_C
	{
			constexpr auto UberGraphFrame = 0x280; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto SM_Fey_Ult_Seed = 0x288; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Arrow = 0x290; // Size: 8, Type: struct UArrowComponent*
			constexpr auto billboard = 0x298; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto Sphere = 0x2a0; // Size: 8, Type: struct USphereComponent*
			constexpr auto DeltaSec = 0x2a8; // Size: 4, Type: float
			constexpr auto StartLocation = 0x2ac; // Size: 12, Type: struct FVector
			constexpr auto mySpline = 0x2b8; // Size: 8, Type: struct USplineComponent*
			constexpr auto TargetLocation = 0x2c0; // Size: 12, Type: struct FVector
			constexpr auto ImpactNormal = 0x2cc; // Size: 12, Type: struct FVector
			constexpr auto Speed = 0x2d8; // Size: 4, Type: float
			constexpr auto ImpactPoint = 0x2dc; // Size: 12, Type: struct FVector
			constexpr auto OldImpactPoint = 0x2e8; // Size: 12, Type: struct FVector
			constexpr auto DirID = 0x2f4; // Size: 4, Type: int32_t
			constexpr auto OldLenght = 0x2f8; // Size: 4, Type: float
			constexpr auto SetDirID = 0x2fc; // Size: 4, Type: int32_t
			constexpr auto OldLenght100 = 0x300; // Size: 4, Type: float
			constexpr auto IsUpdateSplinePoints = 0x304; // Size: 1, Type: bool
			constexpr auto CurrentPointID = 0x308; // Size: 4, Type: int32_t
			constexpr auto CountIteration = 0x30c; // Size: 4, Type: int32_t
			constexpr auto Counter = 0x310; // Size: 4, Type: int32_t
			constexpr auto IsStartWalkerOnClient = 0x314; // Size: 1, Type: bool
			constexpr auto IsFinish = 0x315; // Size: 1, Type: bool
			constexpr auto CurrentLenght = 0x318; // Size: 4, Type: float
			constexpr auto SpawnSpore = 0x31c; // Size: 1, Type: bool
	}
} 
