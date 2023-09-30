namespace offsets
{
	namespace UWTLHUDTextChatArea
	{
			constexpr auto maPopup = 0x268; // Size: 8, Type: struct UMenuAnchor*
			constexpr auto m_PopupMenuWidget = 0x270; // Size: 8, Type: struct UWTLCommonPopupMenu*
			constexpr auto bChatList = 0x278; // Size: 8, Type: struct UBorder*
			constexpr auto sbChatList = 0x280; // Size: 8, Type: struct UScrollBox*
			constexpr auto bButtonsTab = 0x288; // Size: 8, Type: struct UBorder*
			constexpr auto btnTabCommon = 0x290; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabChat = 0x298; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabLog = 0x2a0; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabBattle = 0x2a8; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabEnvironment = 0x2b0; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabLoot = 0x2b8; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabGroup = 0x2c0; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabClan = 0x2c8; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnTabFaction = 0x2d0; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto btnCollapseChat = 0x2d8; // Size: 8, Type: struct UWTLHUDChatTabButton*
			constexpr auto bChatMessage = 0x2e0; // Size: 8, Type: struct UBorder*
			constexpr auto etbChatMessage = 0x2e8; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto hbMessageTextLength = 0x2f0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbMessageTextCurrentLength = 0x2f8; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbMessageTextMaxLength = 0x300; // Size: 8, Type: struct UTextBlock*
			constexpr auto btnCopyAll = 0x308; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto btnShowHideSmiles = 0x310; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto bSmiles = 0x318; // Size: 8, Type: struct UBorder*
			constexpr auto wbSmiles = 0x320; // Size: 8, Type: struct UWrapBox*
			constexpr auto CollapseExpandChatAnim = 0x3c8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ShowHideChatAnim = 0x3d0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ShowHideSmilesAnim = 0x3d8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto DelayHide = 0x3e0; // Size: 4, Type: float
			constexpr auto PrivateMessageSoundEvent = 0x3e8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto TextChatItemClass = 0x410; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ChatSmileButtonWidgetClass = 0x438; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto PopupMenuWidgetClass = 0x460; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto SmilesPanelWidth = 0x488; // Size: 4, Type: float
	}
} 
