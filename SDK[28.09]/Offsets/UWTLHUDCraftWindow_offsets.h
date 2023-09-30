namespace offsets
{
	namespace UWTLHUDCraftWindow
	{
			constexpr auto wsRecipesList = 0x288; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto tbCraftType = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto sbCraftItemsList = 0x298; // Size: 8, Type: struct UScrollBox*
			constexpr auto wsRecipe = 0x2a0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto sbRecipeInfo = 0x2a8; // Size: 8, Type: struct UScrollBox*
			constexpr auto hbRecipeID = 0x2b0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbRecipeID = 0x2b8; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbItemName = 0x2c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbDescription = 0x2c8; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbNeedCraftExperience = 0x2d0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto hbNeedSurvivalExperience = 0x2d8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbNeedCraftExperience = 0x2e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbNeedSurvivalExperience = 0x2e8; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsReadyCraftExperience = 0x2f0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto hbCurrentCraftExperience = 0x2f8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbCurrentCraftExperience = 0x300; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsReadySurvivalExperience = 0x308; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto hbCurrentSurvivalExperience = 0x310; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbCurrentSurvivalExperience = 0x318; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbRequiredItems = 0x320; // Size: 8, Type: struct UTextBlock*
			constexpr auto wbIngredients = 0x328; // Size: 8, Type: struct UWrapBox*
			constexpr auto wbResults = 0x330; // Size: 8, Type: struct UWrapBox*
			constexpr auto ucBtnCreate = 0x338; // Size: 8, Type: struct UWTLCommonHotkeyButton*
			constexpr auto CraftType = 0x358; // Size: 1, Type: enum class EWTLCraftType
			constexpr auto CraftWindowItemWidgetClass = 0x360; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto IngredientItemSlotWidgetClass = 0x388; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ResultItemSlotWidgetClass = 0x3b0; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
