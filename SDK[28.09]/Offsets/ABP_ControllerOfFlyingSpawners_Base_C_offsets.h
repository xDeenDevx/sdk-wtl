namespace offsets
{
	namespace ABP_ControllerOfFlyingSpawners_Base_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto FE_Spore_Overlord_03_1 = 0x228; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FE_Spore_Overlord_01_1 = 0x230; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FMODAudio = 0x238; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto Arrow = 0x240; // Size: 8, Type: struct UArrowComponent*
			constexpr auto DefaultSceneRoot = 0x248; // Size: 8, Type: struct USceneComponent*
			constexpr auto DeltaSec = 0x250; // Size: 4, Type: float
			constexpr auto StartTimeSeconds = 0x254; // Size: 4, Type: float
			constexpr auto CountSpawn = 0x258; // Size: 4, Type: int32_t
			constexpr auto SpawnComponentList = 0x260; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto DesiredRotation = 0x270; // Size: 12, Type: struct FRotator
			constexpr auto AngularSpeed = 0x27c; // Size: 4, Type: float
			constexpr auto IsReady = 0x280; // Size: 1, Type: bool
			constexpr auto IsDestroy = 0x281; // Size: 1, Type: bool
			constexpr auto SpawnerLocations = 0x288; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto myTime = 0x298; // Size: 4, Type: float
			constexpr auto StateAFX = 0x29c; // Size: 8, Type: struct FName
			constexpr auto CurrentSpawnerIDSound = 0x2a4; // Size: 4, Type: int32_t
			constexpr auto AliveSpawnerList = 0x2a8; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
