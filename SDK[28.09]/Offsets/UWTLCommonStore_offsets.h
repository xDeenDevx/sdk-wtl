namespace offsets
{
	namespace UWTLCommonStore
	{
			constexpr auto wsTop = 0x260; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto wsMain = 0x268; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto hbItemTypeButtons = 0x270; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto etbSearch = 0x278; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto cbsSorting = 0x280; // Size: 8, Type: struct UWTLCommonComboBoxString*
			constexpr auto tbItemName = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbItemType = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsItemImage = 0x298; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto imgItem = 0x2a0; // Size: 8, Type: struct UImage*
			constexpr auto ucItemInformationBtn = 0x2a8; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucItemPreviewBtn = 0x2b0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucCharacterPreviewBtn = 0x2b8; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucItemDescription = 0x2c0; // Size: 8, Type: struct UWTLCommonStoreItemDescription*
			constexpr auto ucItemBundleInfo = 0x2c8; // Size: 8, Type: struct UWTLCommonStoreItemBundleInfo*
			constexpr auto ucItemRequirements = 0x2d0; // Size: 8, Type: struct UWTLCommonStoreItemRequirements*
			constexpr auto ucItemWeaponTypeBonusInfo = 0x2d8; // Size: 8, Type: struct UWTLCommonStoreItemWeaponTypeBonusInfo*
			constexpr auto ucItemTags = 0x2e0; // Size: 8, Type: struct UWTLCommonStoreItemTags*
			constexpr auto ucItemSimilarItems = 0x2e8; // Size: 8, Type: struct UWTLCommonStoreItemSimilarItems*
			constexpr auto tbItemPrice = 0x2f0; // Size: 8, Type: struct UTextBlock*
			constexpr auto btnCountInCart = 0x2f8; // Size: 8, Type: struct UButton*
			constexpr auto tbCountInCart = 0x300; // Size: 8, Type: struct UTextBlock*
			constexpr auto ucAddToCartCount = 0x308; // Size: 8, Type: struct UWTLCommonSpinBox*
			constexpr auto ucBtnAddToCart = 0x310; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto tbCartItemCount = 0x318; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsStore = 0x320; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto wsItemsOffers = 0x328; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto sbItemsOffers = 0x330; // Size: 8, Type: struct UScrollBox*
			constexpr auto wbItemsOffers = 0x338; // Size: 8, Type: struct UWrapBox*
			constexpr auto wsItems = 0x340; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto sbItems = 0x348; // Size: 8, Type: struct UScrollBox*
			constexpr auto wbItems = 0x350; // Size: 8, Type: struct UWrapBox*
			constexpr auto wsCart = 0x358; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto sbCart = 0x360; // Size: 8, Type: struct UScrollBox*
			constexpr auto tbTotalCartPrice = 0x368; // Size: 8, Type: struct UTextBlock*
			constexpr auto ucBtnTopUpCreditsCart = 0x370; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnAccountInventory = 0x378; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnCheckout = 0x380; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto ucBtnExit = 0x388; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto ucBtnBack = 0x390; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto ucBtnCart = 0x398; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto ucCodeButton = 0x3a0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ftbCodeTextBlock = 0x3a8; // Size: 8, Type: struct UWTLCommonFormattedTextBlock*
			constexpr auto btSendCodeButton = 0x3b0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto m_StoreItemsWidgets = 0x3f0; // Size: 16, Type: struct TArray<struct UWTLCommonStoreItem*>
			constexpr auto m_CurrentViewedStoreItem = 0x528; // Size: 8, Type: struct UWTLCommonStoreItem*
			constexpr auto m_TagSearchStoreItem = 0x688; // Size: 8, Type: struct UWTLCommonStoreItem*
			constexpr auto wsCodeResult = 0x6b0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto ItemTypeButtonWidgetClass = 0x6e8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto StoreItemWidgetClass = 0x710; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto StorePremiumItemWidgetClass = 0x738; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CartItemWidgetClass = 0x760; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemTypeStoreButtonStyles = 0x788; // Size: 16, Type: struct TArray<struct FWTLItemTypeStoreButtonStyle>
			constexpr auto CreditsTextColor = 0x798; // Size: 40, Type: struct FSlateColor
			constexpr auto WarningTextColor = 0x7c0; // Size: 40, Type: struct FSlateColor
			constexpr auto CartButtonBlinkingAnimation = 0x7e8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto PurchaseStoreItemsSoundEvent = 0x7f0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
	}
} 
