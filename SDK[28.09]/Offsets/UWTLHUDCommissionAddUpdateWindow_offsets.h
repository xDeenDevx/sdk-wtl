namespace offsets
{
	namespace UWTLHUDCommissionAddUpdateWindow
	{
			constexpr auto ucCommissionItemSlot = 0x288; // Size: 8, Type: struct UWTLHUDItemSlot*
			constexpr auto tbMinItemPrice = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbPercent = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbDayTax = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbMaxDaysCount = 0x2a8; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbMinBuyCount = 0x2b0; // Size: 8, Type: struct UTextBlock*
			constexpr auto ntbMinBuyCount = 0x2b8; // Size: 8, Type: struct UWTLUtilityNumberTextBox*
			constexpr auto spMinBuyCount = 0x2c0; // Size: 8, Type: struct USpacer*
			constexpr auto etbPrice = 0x2c8; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto tbLowPriceWarning = 0x2d0; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbDays = 0x2d8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbDaysPlus = 0x2e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbDaysCount = 0x2e8; // Size: 8, Type: struct UTextBlock*
			constexpr auto ucBtnMaxDaysDown = 0x2f0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnDaysDown = 0x2f8; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnDaysUp = 0x300; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnMaxDaysUp = 0x308; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto hbTotalItemPrice = 0x310; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbTotalItemPrice = 0x318; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbCommissionTax = 0x320; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbCommissionTax = 0x328; // Size: 8, Type: struct UTextBlock*
			constexpr auto ucBtnAction = 0x330; // Size: 8, Type: struct UWTLCommonHotkeyButton*
	}
} 
