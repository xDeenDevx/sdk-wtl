namespace offsets
{
	namespace UWTLHUDItemSlot
	{
			constexpr auto m_ItemInformationShortWidget = 0x268; // Size: 8, Type: struct UWTLHUDItemInformationShort*
			constexpr auto m_ItemPopupMenuWidget = 0x300; // Size: 8, Type: struct UWTLCommonPopupMenu*
			constexpr auto imgBackground = 0x308; // Size: 8, Type: struct UImage*
			constexpr auto imgItem = 0x310; // Size: 8, Type: struct UImage*
			constexpr auto imgBorder = 0x318; // Size: 8, Type: struct UImage*
			constexpr auto imgItemType = 0x320; // Size: 8, Type: struct UImage*
			constexpr auto tbItemTypeID = 0x328; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbItemCount = 0x330; // Size: 8, Type: struct UTextBlock*
			constexpr auto maItem = 0x338; // Size: 8, Type: struct UMenuAnchor*
			constexpr auto m_BaseActionStorage = 0x870; // Size: 8, Type: struct UWTLHUDBaseActionStorage*
			constexpr auto DraggedSlotClass = 0x8f0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto PopupMenuWidgetClass = 0x918; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemInformationShortWidgetClass = 0x940; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ShowCharacterPreviewToolTipWidgetClass = 0x968; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto OriginalItemBackgroundBrush = 0x990; // Size: 136, Type: struct FSlateBrush
			constexpr auto QuestItemBackgroundBrush = 0xa18; // Size: 136, Type: struct FSlateBrush
			constexpr auto QuestItemLockedInInventoryBackgroundBrush = 0xaa0; // Size: 136, Type: struct FSlateBrush
			constexpr auto BadWeaponConditionBackgroundBrush = 0xb28; // Size: 136, Type: struct FSlateBrush
	}
} 
