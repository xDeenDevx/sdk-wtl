namespace offsets
{
	namespace UWTLHUDItemsModificationWindow
	{
			constexpr auto ucModificationKitItemSlot = 0x288; // Size: 8, Type: struct UWTLHUDItemSlot*
			constexpr auto ucItemForModificationSlot = 0x290; // Size: 8, Type: struct UWTLHUDInventorySlot*
			constexpr auto tbDropItemHint = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbNoModificationDataHint = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto bHintAreaHeightRegulator = 0x2a8; // Size: 8, Type: struct UBorder*
			constexpr auto vbModificators = 0x2b0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto hbDamage = 0x2b8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbDamageMin = 0x2c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsDamageDeltaMinFirstRangeSign = 0x2c8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbDamageDeltaMinFirstRange = 0x2d0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsDamageDeltaMinSecondRangeSign = 0x2d8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbDamageDeltaMinSecondRange = 0x2e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsDamageDeltaMinArrow = 0x2e8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbDamageMax = 0x2f0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsDamageDeltaMaxFirstRangeSign = 0x2f8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbDamageDeltaMaxFirstRange = 0x300; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsDamageDeltaMaxSecondRangeSign = 0x308; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbDamageDeltaMaxSecondRange = 0x310; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsDamageDeltaMaxArrow = 0x318; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto hbAccuracy = 0x320; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbAccuracy = 0x328; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsAccuracyDeltaMinRangeSign = 0x330; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbAccuracyDeltaMinRange = 0x338; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsAccuracyDeltaMaxRangeSign = 0x340; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbAccuracyDeltaMaxRange = 0x348; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsAccuracyDeltaArrow = 0x350; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto hbArmor = 0x358; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbArmorMin = 0x360; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsArmorDeltaMinFirstRangeSign = 0x368; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbArmorDeltaMinFirstRange = 0x370; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsArmorDeltaMinSecondRangeSign = 0x378; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbArmorDeltaMinSecondRange = 0x380; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsArmorDeltaMinArrow = 0x388; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbArmorMax = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsArmorDeltaMaxFirstRangeSign = 0x398; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbArmorDeltaMaxFirstRange = 0x3a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsArmorDeltaMaxSecondRangeSign = 0x3a8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbArmorDeltaMaxSecondRange = 0x3b0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsArmorDeltaMaxArrow = 0x3b8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbMonsterArmorMin = 0x3c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsMonsterArmorDeltaMinFirstRangeSign = 0x3c8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbMonsterArmorDeltaMinFirstRange = 0x3d0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsMonsterArmorDeltaMinSecondRangeSign = 0x3d8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbMonsterArmorDeltaMinSecondRange = 0x3e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsMonsterArmorDeltaMinArrow = 0x3e8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbMonsterArmorMax = 0x3f0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsMonsterArmorDeltaMaxFirstRangeSign = 0x3f8; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbMonsterArmorDeltaMaxFirstRange = 0x400; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsMonsterArmorDeltaMaxSecondRangeSign = 0x408; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbMonsterArmorDeltaMaxSecondRange = 0x410; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsMonsterArmorDeltaMaxArrow = 0x418; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto hbWeight = 0x420; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbWeight = 0x428; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsWeightDeltaMinRangeSign = 0x430; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbWeightDeltaMinRange = 0x438; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsWeightDeltaMaxRangeSign = 0x440; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbWeightDeltaMaxRange = 0x448; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsWeightDeltaArrow = 0x450; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto hbWearResistance = 0x458; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbWearResistance = 0x460; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsWearResistanceDeltaMinRangeSign = 0x468; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbWearResistanceDeltaMinRange = 0x470; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsWearResistanceDeltaMaxRangeSign = 0x478; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto tbWearResistanceDeltaMaxRange = 0x480; // Size: 8, Type: struct UTextBlock*
			constexpr auto tsWearResistanceDeltaArrow = 0x488; // Size: 8, Type: struct UWTLCommonToggleSwitcher*
			constexpr auto hbModificationChance = 0x490; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto bModificationChance = 0x498; // Size: 8, Type: struct UBorder*
			constexpr auto tbModificationChance = 0x4a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbModificationWarning = 0x4a8; // Size: 8, Type: struct UTextBlock*
			constexpr auto ucBtnApply = 0x4b0; // Size: 8, Type: struct UWTLCommonHotkeyButton*
			constexpr auto ModificationChanceHighColor = 0x4c8; // Size: 16, Type: struct FLinearColor
			constexpr auto ModificationChanceMediumColor = 0x4d8; // Size: 16, Type: struct FLinearColor
			constexpr auto ModificationChanceLowColor = 0x4e8; // Size: 16, Type: struct FLinearColor
	}
} 
