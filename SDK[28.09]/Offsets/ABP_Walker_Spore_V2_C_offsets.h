namespace offsets
{
	namespace ABP_Walker_Spore_V2_C
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
			constexpr auto myOwner = 0x2d0; // Size: 8, Type: struct AActor*
			constexpr auto IsUpdatePoints = 0x2d8; // Size: 1, Type: bool
			constexpr auto StateUpdatePoints = 0x2dc; // Size: 4, Type: int32_t
			constexpr auto CurrentIDSplinePoint = 0x2e0; // Size: 4, Type: int32_t
			constexpr auto CurrentLenght = 0x2e4; // Size: 4, Type: float
			constexpr auto OldLenght = 0x2e8; // Size: 4, Type: float
			constexpr auto Meshes = 0x2f0; // Size: 16, Type: struct TArray<struct ABP_Walker_SplineMesh_V2_C*>
			constexpr auto Speed = 0x300; // Size: 4, Type: float
			constexpr auto IsAddSplineMesh = 0x304; // Size: 1, Type: bool
			constexpr auto IsDestroy = 0x305; // Size: 1, Type: bool
	}
} 
