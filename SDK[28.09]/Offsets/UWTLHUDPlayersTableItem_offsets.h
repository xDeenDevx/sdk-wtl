namespace offsets
{
	namespace UWTLHUDPlayersTableItem
	{
			constexpr auto tbNumber = 0x260; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbPlayerName = 0x268; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbPlayerLevel = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsPlayerType = 0x278; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto imgCharacterClass = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto tbCharacterClass = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsFractionImage = 0x290; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto tbPlayerReputation = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbPlayerPing = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto ucBtnCharacterInfo = 0x2a8; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnSendMessage = 0x2b0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnSendInviteToGroup = 0x2b8; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnSpectate = 0x2c0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto NonePlayerClassIcon = 0x340; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto MinerPlayerClassIcon = 0x368; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto HunterPlayerClassIcon = 0x390; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto MercenaryPlayerClassIcon = 0x3b8; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto EngineerPlayerClassIcon = 0x3e0; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
	}
} 
