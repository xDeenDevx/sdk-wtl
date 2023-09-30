namespace offsets
{
	namespace AWTLStorageBox
	{
			constexpr auto Mesh = 0x268; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto m_PublicStorageContent = 0x3e0; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto m_PrivateStorageContent = 0x488; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto m_SummaryStorageContent = 0x530; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto Name = 0x5f8; // Size: 24, Type: struct FText
			constexpr auto SlotsCount = 0x610; // Size: 1, Type: char
			constexpr auto CanStoreItems = 0x611; // Size: 1, Type: bool
			constexpr auto SpawnItems = 0x618; // Size: 16, Type: struct TArray<struct FWTLItemSpawnInfo>
			constexpr auto CanUseLocationItemsSpawn = 0x628; // Size: 1, Type: bool
			constexpr auto MaxLocationItemsSpawnQuality = 0x62c; // Size: 4, Type: int32_t
	}
} 
