namespace offsets
{
	namespace ABP_EventPoint_SpawnMonsters_C
	{
			constexpr auto UberGraphFrame = 0x400; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto SpawnPoints = 0x408; // Size: 16, Type: struct TArray<struct ABP_MonsterSpawnerBase_C*>
			constexpr auto UpdateData = 0x418; // Size: 1, Type: bool
			constexpr auto MinLevel = 0x41c; // Size: 4, Type: int32_t
			constexpr auto MaxLevel = 0x420; // Size: 4, Type: int32_t
	}
} 
