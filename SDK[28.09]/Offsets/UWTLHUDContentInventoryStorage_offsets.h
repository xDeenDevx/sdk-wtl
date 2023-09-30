namespace offsets
{
	namespace UWTLHUDContentInventoryStorage
	{
			constexpr auto imgStashBackground = 0x300; // Size: 8, Type: struct UImage*
			constexpr auto imgPremiumStashBackground = 0x308; // Size: 8, Type: struct UImage*
			constexpr auto imgFurnaceBackground = 0x310; // Size: 8, Type: struct UImage*
			constexpr auto imgPressMachineBackground = 0x318; // Size: 8, Type: struct UImage*
			constexpr auto imgAmmoPressBackground = 0x320; // Size: 8, Type: struct UImage*
			constexpr auto imgChemicalStationBackground = 0x328; // Size: 8, Type: struct UImage*
			constexpr auto ucBtnCloseStash = 0x330; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto hbMain = 0x338; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto wsStorage = 0x340; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto tbCharacterName = 0x348; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbOldWeight = 0x350; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto pbOldWeight = 0x358; // Size: 8, Type: struct UProgressBar*
			constexpr auto tbCurrentOldWeight = 0x360; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbMaxOldWeight = 0x368; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbBar = 0x370; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto hbWeight = 0x378; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto pbWeight = 0x380; // Size: 8, Type: struct UProgressBar*
			constexpr auto tbCurrentWeight = 0x388; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbMaxWeight = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto btnPutGift = 0x398; // Size: 8, Type: struct UButton*
			constexpr auto wsBtns = 0x3a0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto btnExtinguishCampfire = 0x3a8; // Size: 8, Type: struct UButton*
			constexpr auto ucBtnRemoveStash = 0x3b0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto hbToolsBtns = 0x3b8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto ucBtnUniteAllItems = 0x3c0; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto ucBtnOptimizeItems = 0x3c8; // Size: 8, Type: struct UWTLCommonButton*
			constexpr auto cpStorage = 0x3d0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto sbStorage = 0x3d8; // Size: 8, Type: struct UScrollBox*
			constexpr auto hbCaliberName = 0x3e0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbCaliberName = 0x3e8; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbTakeAllBtn = 0x3f0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto ucBtnTakeAll = 0x3f8; // Size: 8, Type: struct UWTLCommonHotkeyButton*
			constexpr auto bCampfireEnergy = 0x400; // Size: 8, Type: struct UBorder*
			constexpr auto pbCampfireEnergyImage = 0x408; // Size: 8, Type: struct UProgressBar*
			constexpr auto bStorageItemsBasePrice = 0x410; // Size: 8, Type: struct UBorder*
			constexpr auto tbStorageItemsBasePrice = 0x418; // Size: 8, Type: struct UTextBlock*
			constexpr auto InitialStorageHeight = 0x4e8; // Size: 4, Type: float
			constexpr auto NormalNewWeightColor = 0x4ec; // Size: 16, Type: struct FLinearColor
			constexpr auto MediumNewWeightColor = 0x4fc; // Size: 16, Type: struct FLinearColor
			constexpr auto HighNewWeightColor = 0x50c; // Size: 16, Type: struct FLinearColor
			constexpr auto DefaultStorageBorderBrushColor = 0x51c; // Size: 16, Type: struct FLinearColor
			constexpr auto DefaultStorageBorderBrush = 0x530; // Size: 136, Type: struct FSlateBrush
			constexpr auto NPCActorStorageBorderBrush = 0x5b8; // Size: 136, Type: struct FSlateBrush
			constexpr auto StorageBoxStorageBorderBrush = 0x640; // Size: 136, Type: struct FSlateBrush
			constexpr auto MachinegunStorageBorderBrush = 0x6c8; // Size: 136, Type: struct FSlateBrush
			constexpr auto DefaultStorageWeightProgressBarStyle = 0x750; // Size: 416, Type: struct FProgressBarStyle
			constexpr auto NPCActorStorageWeightProgressBarStyle = 0x8f0; // Size: 416, Type: struct FProgressBarStyle
			constexpr auto StashStorageWeightProgressBarStyle = 0xa90; // Size: 416, Type: struct FProgressBarStyle
			constexpr auto PremiumStashStorageWeightProgressBarStyle = 0xc30; // Size: 416, Type: struct FProgressBarStyle
			constexpr auto CampfireStorageWeightProgressBarStyle = 0xdd0; // Size: 416, Type: struct FProgressBarStyle
	}
} 
