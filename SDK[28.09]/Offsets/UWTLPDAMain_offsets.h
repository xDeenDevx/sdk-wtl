namespace offsets
{
	namespace UWTLPDAMain
	{
			constexpr auto imgScreenGlow = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto cpBorders = 0x270; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto bBackground = 0x278; // Size: 8, Type: struct UBorder*
			constexpr auto cpMenuAndInfo = 0x280; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto wsPDAWidgetSwitcher = 0x288; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto ucMenu = 0x290; // Size: 8, Type: struct UWTLPDAMenu*
			constexpr auto ucCharacterInfo = 0x298; // Size: 8, Type: struct UWTLPDACharacterInfo*
			constexpr auto ucCharacterParameters = 0x2a0; // Size: 8, Type: struct UWTLPDACharacterParameters*
			constexpr auto ucCharacterSkills = 0x2a8; // Size: 8, Type: struct UWTLPDACharacterSkills*
			constexpr auto ucQuestLog = 0x2b0; // Size: 8, Type: struct UWTLPDAQuestLog*
			constexpr auto ucMap = 0x2b8; // Size: 8, Type: struct UWTLPDAMap*
			constexpr auto ucSettings = 0x2c0; // Size: 8, Type: struct UWTLPDASettings*
			constexpr auto ucMail = 0x2c8; // Size: 8, Type: struct UWTLPDAMail*
			constexpr auto ucGroup = 0x2d0; // Size: 8, Type: struct UWTLPDAGroup*
			constexpr auto ucClan = 0x2d8; // Size: 8, Type: struct UWTLPDAClan*
			constexpr auto ucFraction = 0x2e0; // Size: 8, Type: struct UWTLPDAFraction*
			constexpr auto ucFriendsAndEnemies = 0x2e8; // Size: 8, Type: struct UWTLPDAFriendsAndEnemies*
			constexpr auto ucCraftRecipes = 0x2f0; // Size: 8, Type: struct UWTLPDACraftRecipes*
			constexpr auto ucAchievements = 0x2f8; // Size: 8, Type: struct UWTLPDAAchievements*
			constexpr auto ucPremium = 0x300; // Size: 8, Type: struct UWTLPDAPremium*
			constexpr auto ucSocialNetworkAuthorization = 0x308; // Size: 8, Type: struct UWTLPDASocialNetworkAuthorization*
			constexpr auto m_CurrentPDAWidget = 0x318; // Size: 8, Type: struct UWTLPDABase*
			constexpr auto tbCurrentLevelTime = 0x320; // Size: 8, Type: struct UTextBlock*
			constexpr auto bLeftBorder = 0x328; // Size: 8, Type: struct UBorder*
			constexpr auto bRightBorder = 0x330; // Size: 8, Type: struct UBorder*
			constexpr auto ucMenuToolBar = 0x338; // Size: 8, Type: struct UWTLPDAMenuToolBar*
			constexpr auto ucBtnHome = 0x340; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucMessageDialog = 0x348; // Size: 8, Type: struct UWTLCommonMessageDialog*
			constexpr auto ucNetworkSignal = 0x350; // Size: 8, Type: struct UWTLPDANetworkSignal*
			constexpr auto bCurrentLevelTime = 0x358; // Size: 8, Type: struct UBorder*
			constexpr auto ucDataSync = 0x360; // Size: 8, Type: struct UWTLPDADataSync*
			constexpr auto imgHealth = 0x368; // Size: 8, Type: struct UImage*
			constexpr auto imgStamina = 0x370; // Size: 8, Type: struct UImage*
			constexpr auto bExperience = 0x378; // Size: 8, Type: struct UBorder*
			constexpr auto tbHealth = 0x380; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbStamina = 0x388; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbExperience = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto imgFirstIndicator = 0x398; // Size: 8, Type: struct UImage*
			constexpr auto imgSecondIndicator = 0x3a0; // Size: 8, Type: struct UImage*
			constexpr auto btnPDAUp = 0x3a8; // Size: 8, Type: struct UButton*
			constexpr auto btnPDADown = 0x3b0; // Size: 8, Type: struct UButton*
			constexpr auto btnPDACircle = 0x3b8; // Size: 8, Type: struct UButton*
			constexpr auto imgPDABackground = 0x3c0; // Size: 8, Type: struct UImage*
			constexpr auto m_PDAButtonPressSoundEvent = 0x3d0; // Size: 8, Type: struct UFMODEvent*
			constexpr auto m_PDAButtonReleaseSoundEvent = 0x3d8; // Size: 8, Type: struct UFMODEvent*
			constexpr auto m_CurrentFirstIndicatorAnimation = 0x430; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto m_CurrentSecondIndicatorAnimation = 0x438; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto DefaultCustomization = 0x440; // Size: 1904, Type: struct FWTLPDACustomization
			constexpr auto ConfederationCustomization = 0xbb0; // Size: 1904, Type: struct FWTLPDACustomization
			constexpr auto BlackSunsetCustomization = 0x1320; // Size: 1904, Type: struct FWTLPDACustomization
			constexpr auto RedColorParam = 0x1a90; // Size: 40, Type: struct FSlateColor
			constexpr auto YellowColorParam = 0x1ab8; // Size: 40, Type: struct FSlateColor
			constexpr auto GreenColorParam = 0x1ae0; // Size: 40, Type: struct FSlateColor
			constexpr auto FirstIndicatorAnimations = 0x1b08; // Size: 16, Type: struct TArray<struct UWidgetAnimation*>
			constexpr auto SecondIndicatorAnimations = 0x1b18; // Size: 16, Type: struct TArray<struct UWidgetAnimation*>
			constexpr auto ScreenOffAnimation = 0x1b28; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto PDAButtonPressSoundEvent = 0x1b30; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto PDAButtonReleaseSoundEvent = 0x1b58; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto PDAUpButtonStyleDefault = 0x1b80; // Size: 632, Type: struct FButtonStyle
			constexpr auto PDAUpButtonStylePressed = 0x1df8; // Size: 632, Type: struct FButtonStyle
			constexpr auto PDADownButtonStyleDefault = 0x2070; // Size: 632, Type: struct FButtonStyle
			constexpr auto PDADownButtonStylePressed = 0x22e8; // Size: 632, Type: struct FButtonStyle
	}
} 
