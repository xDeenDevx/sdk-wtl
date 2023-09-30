namespace offsets
{
	namespace UWTLHUDActiveQuestInfo
	{
			constexpr auto tbQuestName = 0x268; // Size: 8, Type: struct UTextBlock*
			constexpr auto imgQuestIcon = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto ucItemStartQuest = 0x278; // Size: 8, Type: struct UWTLHUDItemTypeSlot*
			constexpr auto tbCustomTextRequirement = 0x280; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbRequiredMoney = 0x288; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbRequiredMoney = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto imgRequiredMoneyReady = 0x298; // Size: 8, Type: struct UImage*
			constexpr auto pwRequiredItems = 0x2a0; // Size: 8, Type: struct UPanelWidget*
			constexpr auto vbRequiredKills = 0x2a8; // Size: 8, Type: struct UVerticalBox*
			constexpr auto vbCustomRequirements = 0x2b0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto QuestItemSlotWidgetClass = 0x2b8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto RequiredMonsterKillWidgetClass = 0x2e0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CustomRequirementWidgetClass = 0x308; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
