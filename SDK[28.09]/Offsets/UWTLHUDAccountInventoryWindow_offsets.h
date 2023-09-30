namespace offsets
{
	namespace UWTLHUDAccountInventoryWindow
	{
			constexpr auto tbPutItemsHint = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto bItems = 0x290; // Size: 8, Type: struct UBorder*
			constexpr auto wsItems = 0x298; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto sbItems = 0x2a0; // Size: 8, Type: struct UScrollBox*
			constexpr auto wbItems = 0x2a8; // Size: 8, Type: struct UWrapBox*
			constexpr auto ucItemsDropArea = 0x2b0; // Size: 8, Type: struct UWTLHUDAccountInventoryDropArea*
			constexpr auto ucBtnUpdateItems = 0x2b8; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto m_DebugAccountInventoryItems = 0x2c0; // Size: 16, Type: struct TArray<struct FWTLAccountInventoryItem>
			constexpr auto m_AccountInventorySlots = 0x3a8; // Size: 16, Type: struct TArray<struct UWTLHUDInventorySlot*>
			constexpr auto InventorySlotWidgetClass = 0x3c8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto bIsGenerateNewDebugItemsDataWhenUpdate = 0x3f0; // Size: 1, Type: bool
	}
} 
