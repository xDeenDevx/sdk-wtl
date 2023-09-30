namespace offsets
{
	namespace ABP_Seagull_FishingEviroment_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto FMODAudio = 0x228; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto Fish = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Sphere = 0x238; // Size: 8, Type: struct USphereComponent*
			constexpr auto SeagullMesh1 = 0x240; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto DefaultSceneRoot = 0x248; // Size: 8, Type: struct USceneComponent*
			constexpr auto Angle = 0x250; // Size: 4, Type: float
			constexpr auto StartLocation = 0x254; // Size: 12, Type: struct FVector
			constexpr auto PrevLocation = 0x260; // Size: 12, Type: struct FVector
			constexpr auto MovementSpeed = 0x26c; // Size: 4, Type: float
			constexpr auto Radius = 0x270; // Size: 4, Type: float
			constexpr auto DivingLocation = 0x274; // Size: 12, Type: struct FVector
			constexpr auto TimerToDiving = 0x280; // Size: 4, Type: float
			constexpr auto TimerToDivingCounter = 0x284; // Size: 4, Type: float
			constexpr auto DeltaTime = 0x288; // Size: 4, Type: float
			constexpr auto DivingInProccess = 0x28c; // Size: 1, Type: bool
			constexpr auto TargetLocation = 0x290; // Size: 12, Type: struct FVector
			constexpr auto IsCurrentMovementDown = 0x29c; // Size: 1, Type: bool
			constexpr auto DivingSpeed = 0x2a0; // Size: 4, Type: float
			constexpr auto DefaultRadius = 0x2a4; // Size: 4, Type: float
			constexpr auto RInterSpeed = 0x2a8; // Size: 4, Type: float
			constexpr auto AnimBP = 0x2b0; // Size: 8, Type: struct UAB_Seagull_Enviroment_C*
			constexpr auto MovementTime = 0x2b8; // Size: 4, Type: float
			constexpr auto G = 0x2bc; // Size: 4, Type: float
			constexpr auto NewStartLocation = 0x2c0; // Size: 12, Type: struct FVector
			constexpr auto TimeTillNextSound = 0x2cc; // Size: 4, Type: float
			constexpr auto MinTimeToDiving = 0x2d0; // Size: 4, Type: float
			constexpr auto MaxTimeToDiving = 0x2d4; // Size: 4, Type: float
			constexpr auto PrevWaterComponent = 0x2d8; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto bUnderWater = 0x2e0; // Size: 1, Type: bool
			constexpr auto MovementDirection = 0x2e4; // Size: 4, Type: float
			constexpr auto Health = 0x2e8; // Size: 4, Type: float
			constexpr auto IsAlive = 0x2ec; // Size: 1, Type: bool
			constexpr auto TimeTillNextSpawn = 0x2f0; // Size: 4, Type: float
	}
} 
