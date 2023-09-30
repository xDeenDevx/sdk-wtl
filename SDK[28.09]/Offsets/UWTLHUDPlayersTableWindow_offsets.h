namespace offsets
{
	namespace UWTLHUDPlayersTableWindow
	{
			constexpr auto bMain = 0x288; // Size: 8, Type: struct UBorder*
			constexpr auto sbPlayersItems = 0x290; // Size: 8, Type: struct UScrollBox*
			constexpr auto ucBtnOK = 0x298; // Size: 8, Type: struct UWTLCommonHotkeyButton*
			constexpr auto m_PlayersTableItems = 0x2a0; // Size: 16, Type: struct TArray<struct UWTLHUDPlayersTableItem*>
			constexpr auto MaxVisibileItemsCountInTable = 0x2b8; // Size: 4, Type: int32_t
			constexpr auto OriginalMainBorderSizeX = 0x2bc; // Size: 4, Type: float
			constexpr auto ExtendedMainBorderSizeX = 0x2c0; // Size: 4, Type: float
			constexpr auto OriginalPlayersItemsScrollBoxSizeX = 0x2c4; // Size: 4, Type: float
			constexpr auto ExtendedPlayersItemsScrollBoxSizeX = 0x2c8; // Size: 4, Type: float
			constexpr auto PlayersTableItemWidgetClass = 0x2d0; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
