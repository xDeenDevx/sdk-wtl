namespace offsets
{
	namespace AWTLJunkMachineBase
	{
			constexpr auto NeedEmptySlotsInInventoryToGetCards = 0x260; // Size: 1, Type: char
			constexpr auto NeedEmptySlotsInInventoryToGetItems = 0x261; // Size: 1, Type: char
			constexpr auto PriceForOneCard = 0x268; // Size: 8, Type: uint64_t
			constexpr auto CardItemType = 0x270; // Size: 1, Type: enum class EWTLItemType
			constexpr auto CardItemTypeIDsToExchange = 0x278; // Size: 16, Type: struct TArray<uint16_t>
			constexpr auto RewardCardItemTypeID = 0x288; // Size: 2, Type: uint16_t
			constexpr auto GetCardsDays = 0x290; // Size: 16, Type: struct TArray<uint32_t>
			constexpr auto UseAdditionalChance = 0x2a0; // Size: 1, Type: bool
			constexpr auto TimeToStartUseChanceMultiplier = 0x2a4; // Size: 4, Type: int32_t
			constexpr auto TimeToStopUseChanceMultiplier = 0x2a8; // Size: 4, Type: int32_t
			constexpr auto MaxNumberOfUsesInJunkMode = 0x2ac; // Size: 1, Type: char
			constexpr auto MaxNumberOfUsesInCardsMode = 0x2ad; // Size: 1, Type: char
			constexpr auto BundlesList = 0x2b0; // Size: 16, Type: struct TArray<struct FWTLJunkMachineBundleData>
			constexpr auto ComfortingRewardList = 0x2c0; // Size: 16, Type: struct TArray<struct FWTLJunkMachineBundleData>
			constexpr auto WeaponItemPriceMultiplier = 0x2d0; // Size: 4, Type: float
			constexpr auto AmmoItemPriceMultiplier = 0x2d4; // Size: 4, Type: float
			constexpr auto MedicineItemPriceMultiplier = 0x2d8; // Size: 4, Type: float
			constexpr auto StuffItemPriceMultiplier = 0x2dc; // Size: 4, Type: float
			constexpr auto ClothesItemPriceMultiplier = 0x2e0; // Size: 4, Type: float
			constexpr auto ResourceItemPriceMultiplier = 0x2e4; // Size: 4, Type: float
			constexpr auto ArtefactItemPriceMultiplier = 0x2e8; // Size: 4, Type: float
			constexpr auto CanBuyStrangeArtefactItems = 0x2ec; // Size: 1, Type: bool
			constexpr auto CanBuyWeaponItems = 0x2ed; // Size: 1, Type: bool
			constexpr auto BuyOnlyWeaponItems = 0x2f0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BuyExceptWeaponItems = 0x300; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CanBuyAmmoItems = 0x310; // Size: 1, Type: bool
			constexpr auto BuyOnlyAmmoItems = 0x318; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BuyExceptAmmoItems = 0x328; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CanBuyMedicineItems = 0x338; // Size: 1, Type: bool
			constexpr auto BuyOnlyMedicineItems = 0x340; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BuyExceptMedicineItems = 0x350; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CanBuyStuffItems = 0x360; // Size: 1, Type: bool
			constexpr auto BuyOnlyStuffItems = 0x368; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BuyExceptStuffItems = 0x378; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CanBuyClothesItems = 0x388; // Size: 1, Type: bool
			constexpr auto BuyOnlyClothesItems = 0x390; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BuyExceptClothesItems = 0x3a0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CanBuyResourceItems = 0x3b0; // Size: 1, Type: bool
			constexpr auto BuyOnlyResourceItems = 0x3b8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BuyExceptResourceItems = 0x3c8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CanBuyArtefactItems = 0x3d8; // Size: 1, Type: bool
			constexpr auto BuyOnlyArtefactItems = 0x3e0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BuyExceptArtefactItems = 0x3f0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto m_CharactersBlackListInJunkMode = 0x4a8; // Size: 16, Type: struct TArray<uint64_t>
			constexpr auto m_CharactersBlackListInCardsMode = 0x4b8; // Size: 16, Type: struct TArray<uint64_t>
			constexpr auto m_CanAcceptCards = 0x4f0; // Size: 1, Type: bool
			constexpr auto SellItems = 0x508; // Size: 112, Type: struct FWTLSellItems
			constexpr auto CommissionSellItemsPage = 0x578; // Size: 112, Type: struct FWTLSellItems
	}
} 
