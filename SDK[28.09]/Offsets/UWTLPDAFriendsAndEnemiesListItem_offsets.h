namespace offsets
{
	namespace UWTLPDAFriendsAndEnemiesListItem
	{
			constexpr auto imgCharacterContactType = 0x4a0; // Size: 8, Type: struct UImage*
			constexpr auto tbCharacterName = 0x4a8; // Size: 8, Type: struct UTextBlock*
			constexpr auto imgNetStatus = 0x4b0; // Size: 8, Type: struct UImage*
			constexpr auto FriendIcon = 0x4d8; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto EnemyIcon = 0x500; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto FriendIconColor = 0x528; // Size: 16, Type: struct FLinearColor
			constexpr auto EnemyIconColor = 0x538; // Size: 16, Type: struct FLinearColor
			constexpr auto OnlineNetStatusColor = 0x548; // Size: 16, Type: struct FLinearColor
			constexpr auto OfflineNetStatusColor = 0x558; // Size: 16, Type: struct FLinearColor
	}
} 
