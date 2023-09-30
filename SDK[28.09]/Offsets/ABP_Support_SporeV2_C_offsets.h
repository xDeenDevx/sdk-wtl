namespace offsets
{
	namespace ABP_Support_SporeV2_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto SceneSpawnPoint = 0xf18; // Size: 8, Type: struct USceneComponent*
			constexpr auto DeltaSec = 0xf20; // Size: 4, Type: float
			constexpr auto IsInit = 0xf24; // Size: 1, Type: bool
			constexpr auto IsScaled = 0xf25; // Size: 1, Type: bool
			constexpr auto IsDeath = 0xf26; // Size: 1, Type: bool
			constexpr auto MyScale = 0xf28; // Size: 4, Type: float
			constexpr auto MaxScale = 0xf2c; // Size: 4, Type: float
			constexpr auto ReloadTimeToSpawn = 0xf30; // Size: 4, Type: float
			constexpr auto myMonster = 0xf38; // Size: 8, Type: struct AWTLMonsterPawn*
			constexpr auto CurrentReloadTimeToSpawn = 0xf40; // Size: 4, Type: float
			constexpr auto IsOffsetZ = 0xf44; // Size: 1, Type: bool
			constexpr auto TargetOffsetZ = 0xf48; // Size: 4, Type: float
			constexpr auto CurrentOffsetZ = 0xf4c; // Size: 4, Type: float
	}
} 
