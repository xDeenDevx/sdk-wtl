namespace offsets
{
	namespace UWTLPDAAchievements
	{
			constexpr auto tbEarnedAchievementsCount = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbTotalAchievementsCount = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbEarnedAchievementsPercent = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto cbSimplifiedView = 0x2a0; // Size: 8, Type: struct UWTLCommonTextCheckBox*
			constexpr auto wsAchievements = 0x2a8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto sbAchievements = 0x2b0; // Size: 8, Type: struct UScrollBox*
			constexpr auto sbAchievementsSimple = 0x2b8; // Size: 8, Type: struct UScrollBox*
			constexpr auto wbAchievements = 0x2c0; // Size: 8, Type: struct UWrapBox*
			constexpr auto m_CurrentPanelWidget = 0x320; // Size: 8, Type: struct UPanelWidget*
			constexpr auto m_CurrentScrollBoxWidget = 0x328; // Size: 8, Type: struct UScrollBox*
			constexpr auto m_AchievementItems = 0x340; // Size: 16, Type: struct TArray<struct UWTLPDAAchievementItemBase*>
			constexpr auto m_AchievementsHiddenCount = 0x350; // Size: 8, Type: struct UWTLPDAAchievementsHiddenCountBase*
			constexpr auto AchievementItemWidgetClass = 0x358; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto AchievementItemSimpleWidgetClass = 0x380; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto AchievementsHiddenCountWidgetClass = 0x3a8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto AchievementsHiddenCountSimpleWidgetClass = 0x3d0; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
