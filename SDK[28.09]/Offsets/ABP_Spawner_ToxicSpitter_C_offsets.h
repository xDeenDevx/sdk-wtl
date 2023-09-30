namespace offsets
{
	namespace ABP_Spawner_ToxicSpitter_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto DefaultSceneRoot = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto SpawnClass = 0x230; // Size: 8, Type: AActor*
			constexpr auto SpawnLocationList = 0x238; // Size: 16, Type: struct TArray<struct ABP_SpawnPointForMonster_WithArrow_C*>
			constexpr auto CurrentLocationID = 0x248; // Size: 4, Type: int32_t
			constexpr auto MyBoss = 0x250; // Size: 8, Type: struct ABP_Actor_Spore_Boss_C*
			constexpr auto IsDestroy = 0x258; // Size: 1, Type: bool
			constexpr auto TimeRespawn = 0x25c; // Size: 4, Type: float
			constexpr auto MaxTimeRespawn = 0x260; // Size: 4, Type: float
			constexpr auto DeltaSec = 0x264; // Size: 4, Type: float
			constexpr auto SpawnMaxIteration = 0x268; // Size: 4, Type: int32_t
	}
} 
