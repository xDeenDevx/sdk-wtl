namespace offsets
{
	namespace UWTLHUDMailBoxStorage
	{
			constexpr auto stbRecipientName = 0x2d8; // Size: 8, Type: struct UWTLCommonSuggestionTextBox*
			constexpr auto etbRecipientName = 0x2e0; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto wsRecipientNameValidation = 0x2e8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto etbSubject = 0x2f0; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto etbMessageText = 0x2f8; // Size: 8, Type: struct UMultiLineEditableTextBox*
			constexpr auto tbMessageCharactersCountCurrent = 0x300; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbMessageCharactersCountMax = 0x308; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbWeightLimit = 0x310; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbCurrentWeight = 0x318; // Size: 8, Type: struct UTextBlock*
			constexpr auto ntbTokensAmountToSend = 0x320; // Size: 8, Type: struct UWTLUtilityNumberTextBox*
			constexpr auto cbsDeliveryType = 0x328; // Size: 8, Type: struct UWTLCommonComboBoxString*
			constexpr auto tbDeliveryDelay = 0x330; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbDeliveryDelayHours = 0x338; // Size: 8, Type: struct UTextBlock*
			constexpr auto thSendLoader = 0x340; // Size: 8, Type: struct UThrobber*
	}
} 
