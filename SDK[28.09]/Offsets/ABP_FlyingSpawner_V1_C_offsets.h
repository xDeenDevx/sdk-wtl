namespace offsets
{
	namespace ABP_FlyingSpawner_V1_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Scene1 = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto Sphere1 = 0x230; // Size: 8, Type: struct USphereComponent*
			constexpr auto SK_AlienJellyfish_01 = 0x238; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto Scene = 0x240; // Size: 8, Type: struct USceneComponent*
			constexpr auto DefaultSceneRoot = 0x248; // Size: 8, Type: struct USceneComponent*
			constexpr auto DeltaSec = 0x250; // Size: 4, Type: float
			constexpr auto Health = 0x254; // Size: 4, Type: float
			constexpr auto MaxHealth = 0x258; // Size: 4, Type: float
			constexpr auto Location = 0x25c; // Size: 12, Type: struct FVector
			constexpr auto MaxMonsters = 0x268; // Size: 4, Type: int32_t
			constexpr auto TagForMonsters = 0x26c; // Size: 8, Type: struct FName
			constexpr auto SpawnLocationList = 0x278; // Size: 16, Type: struct TArray<struct FS_Spore_Outgrowth_Data>
			constexpr auto SpawnID = 0x288; // Size: 4, Type: int32_t
			constexpr auto SpawnClass = 0x290; // Size: 8, Type: AActor*
			constexpr auto MonsterLocations = 0x298; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto SpawnLocation = 0x2a8; // Size: 12, Type: struct FVector
			constexpr auto DesiredLocation = 0x2b4; // Size: 12, Type: struct FVector
			constexpr auto IsDeath = 0x2c0; // Size: 1, Type: bool
			constexpr auto ptBoss = 0x2c8; // Size: 8, Type: struct AActor*
			constexpr auto State = 0x2d0; // Size: 8, Type: struct FName
			constexpr auto MaterialInst = 0x2d8; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto myBlock = 0x2e0; // Size: 8, Type: struct AActor*
			constexpr auto IsReady = 0x2e8; // Size: 1, Type: bool
			constexpr auto TimeSpawn = 0x2ec; // Size: 4, Type: float
			constexpr auto CurrentTimeSpawn = 0x2f0; // Size: 4, Type: float
	}
} 
