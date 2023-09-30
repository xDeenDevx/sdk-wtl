namespace offsets
{
	namespace UWTLHUDArenaRewardWindow
	{
			constexpr auto imgLootBoxType = 0x288; // Size: 8, Type: struct UImage*
			constexpr auto hbMoneyAmount = 0x290; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbMoneyAmount = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto vbItems = 0x2a0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto hbItems = 0x2a8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto ucBtnOK = 0x2b0; // Size: 8, Type: struct UWTLCommonHotkeyButton*
			constexpr auto m_Items = 0x2b8; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto ItemSlotWidgetClass = 0x360; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto LootBoxTypesImages = 0x388; // Size: 16, Type: struct TArray<struct FWTLLootBoxTypeImage>
			constexpr auto ShowSoundEvent = 0x398; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
	}
} 
