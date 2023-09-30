namespace offsets
{
	namespace ABP_EventPoint_Spore_C
	{
			constexpr auto UberGraphFrame = 0x428; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto PostProcess = 0x430; // Size: 8, Type: struct UPostProcessComponent*
			constexpr auto DeltaSec = 0x438; // Size: 4, Type: float
			constexpr auto ActorSpore = 0x440; // Size: 8, Type: struct AActor*
			constexpr auto EventTag = 0x448; // Size: 8, Type: struct FName
			constexpr auto SpawnPointList = 0x450; // Size: 16, Type: struct TArray<struct ABP_SpawnPointForMonster_C*>
			constexpr auto IsBeginSpawnSupport = 0x460; // Size: 1, Type: bool
			constexpr auto IsEndSpawnSupport = 0x461; // Size: 1, Type: bool
			constexpr auto CurrentIDSpawnPoint = 0x464; // Size: 4, Type: int32_t
			constexpr auto DelaySpawnTime = 0x468; // Size: 4, Type: float
			constexpr auto CurrentDelaySpawnTime = 0x46c; // Size: 4, Type: float
			constexpr auto DelayCheck = 0x470; // Size: 4, Type: float
			constexpr auto ReloadThornsAttack = 0x474; // Size: 4, Type: float
			constexpr auto CurrentReloadThornsAttack = 0x478; // Size: 4, Type: float
	}
} 
