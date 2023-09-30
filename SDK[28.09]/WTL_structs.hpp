#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWTLMailPackageState : uint8
{
	None                           = 0,
	Traveling                      = 1,
	ReadyToPickup                  = 2,
	Delivered                      = 3,
	EWTLMailPackageState_MAX       = 4,
};

enum class EWTLArtefactType : uint8
{
	None                           = 0,
	Quest                          = 1,
	Food                           = 2,
	StimulatorContainer            = 3,
	Artefact                       = 4,
	Houseware                      = 5,
	Instruments                    = 6,
	Electronics                    = 7,
	Junk                           = 8,
	AmmoComponents                 = 9,
	Document                       = 10,
	SpareParts                     = 11,
	ModificationParts              = 12,
	Money                          = 13,
	FishingBait                    = 14,
	Fish                           = 15,
	Miscellaneous                  = 16,
	EWTLArtefactType_MAX           = 17,
};

enum class EWTLResourceType : uint8
{
	Base                           = 0,
	Complex                        = 1,
	EWTLResourceType_MAX           = 2,
};

enum class EWTLArmorClass : uint8
{
	None                           = 0,
	Light                          = 1,
	Medium                         = 2,
	Heavy                          = 3,
	EWTLArmorClass_MAX             = 4,
};

enum class EWTLClothesType : uint8
{
	None                           = 0,
	Boots                          = 1,
	Trousers                       = 2,
	Jacket                         = 3,
	Helmet                         = 4,
	ArmorPlate                     = 5,
	CustomizationItem              = 100,
	EWTLClothesType_MAX            = 101,
};

enum class EWTLItemType : uint8
{
	None                           = 0,
	Weapon                         = 1,
	Ammo                           = 2,
	Medicine                       = 3,
	Stuff                          = 4,
	Clothes                        = 5,
	Resource                       = 6,
	Artefact                       = 7,
	EWTLItemType_MAX               = 8,
};

enum class EWTLStuffType : uint8
{
	None                           = 0,
	WeaponRepairKit                = 1,
	AmmoReloadingKit               = 2,
	UnlockingKit                   = 3,
	FlashLight                     = 4,
	Equipment                      = 5,
	Detector                       = 6,
	ResourceMiner                  = 7,
	BuilderKit                     = 8,
	WeaponAttachment               = 9,
	OpticDevice                    = 10,
	Battery                        = 11,
	Extractor                      = 12,
	ArtefactContainerS             = 13,
	ArtefactContainerM             = 14,
	ArtefactContainerL             = 15,
	PDAModule                      = 16,
	ClothesRepairKit               = 17,
	PlacementKit                   = 18,
	WeaponSprayCan                 = 19,
	ClothesSprayCan                = 20,
	WeaponModificationKit          = 21,
	ClothesModificationKit         = 22,
	EngravingKit                   = 23,
	FishingItem                    = 24,
	RepairItem                     = 25,
	HealingItem                    = 26,
	UniversalScaner                = 27,
	EnergyEquipment                = 28,
	ProductionModule               = 29,
	TeleportationDevice            = 30,
	Vehicle                        = 31,
	Fuel                           = 32,
	Drone                          = 33,
	ControlledDrone                = 34,
	RadioDevice                    = 35,
	EWTLStuffType_MAX              = 36,
};

enum class EWTLCharacterEffectType : uint8
{
	None                           = 0,
	Radiation                      = 1,
	Chemicals                      = 2,
	Poison                         = 3,
	Bleeding                       = 4,
	Suffocation                    = 5,
	Burn                           = 6,
	Wounded                        = 7,
	Immobilization                 = 8,
	Consternation                  = 9,
	Alcohol                        = 101,
	RadiationProtection            = 102,
	ChemicalsProtection            = 103,
	PoisonProtection               = 104,
	BleedingProtection             = 105,
	Medicine                       = 200,
	Stimulator                     = 201,
	IntruderState                  = 252,
	IntruderStateLethal            = 253,
	Invulnerability                = 255,
	EWTLCharacterEffectType_MAX    = 256,
};

enum class EWTLMedicineType : uint8
{
	MedKit                         = 0,
	Stimulator                     = 1,
	EWTLMedicineType_MAX           = 2,
};

enum class EWTLCaliber : uint8
{
	None                           = 0,
	Caliber_22LR                   = 1,
	Caliber_9x18PM                 = 2,
	Caliber_9x19Parabellum         = 3,
	Caliber_7_62x25TT              = 4,
	Caliber_38Special              = 5,
	Caliber_45ACP                  = 6,
	Caliber_20                     = 7,
	Caliber_12                     = 8,
	Caliber_5_45x39                = 9,
	Caliber_5_56x45NATO            = 10,
	Caliber_7_62x39                = 11,
	Caliber_308WIN                 = 12,
	Caliber_7_62x54                = 13,
	Caliber_9x39                   = 14,
	Caliber_7_62x38                = 15,
	Caliber_30_06                  = 16,
	Caliber_338LM                  = 17,
	Caliber_357Magnum              = 18,
	Caliber_5_7x28                 = 19,
	Caliber_43mm                   = 20,
	Caliber_44Magnum               = 21,
	Caliber_500SWMagnum            = 22,
	Caliber_40mm                   = 23,
	Caliber_76mm                   = 24,
	EWTLCaliber_MAX                = 25,
};

enum class EWTLAmmoType : uint8
{
	Ammo                           = 0,
	Case                           = 1,
	Projectile                     = 2,
	EWTLAmmoType_MAX               = 3,
};

enum class EWTLWeaponType : uint8
{
	None                           = 0,
	Knife                          = 1,
	Pistol                         = 2,
	Shotgun                        = 3,
	SubMachineGun                  = 4,
	AssaultRifle                   = 5,
	Rifle                          = 6,
	Machinegun                     = 7,
	GrenadeLauncher                = 8,
	Missile                        = 9,
	Explosive                      = 10,
	EWTLWeaponType_MAX             = 11,
};

enum class EWTLLocationStorageType : uint8
{
	None                           = 0,
	Stash                          = 1,
	CraftObject                    = 2,
	PremiumStash                   = 3,
	EWTLLocationStorageType_MAX    = 4,
};

enum class EWTLStorageType : uint8
{
	None                           = 0,
	Inventory                      = 1,
	Commission                     = 2,
	CraftObject                    = 3,
	LocationStorage                = 4,
	PrivateStorage                 = 5,
	ClanStorage                    = 6,
	FortificationObject            = 7,
	MailPackage                    = 8,
	EWTLStorageType_MAX            = 9,
};

enum class EWTLMailPackageDeliveryType : uint8
{
	None                           = 0,
	Regular                        = 1,
	Fast                           = 2,
	EWTLMailPackageDeliveryType_MAX = 3,
};

enum class EWTLColliderType : uint8
{
	None                           = 0,
	Body                           = 1,
	Head                           = 2,
	Arm                            = 3,
	Leg                            = 4,
	Foot                           = 5,
	EWTLColliderType_MAX           = 6,
};

enum class EWTLCharacterClass : uint8
{
	None                           = 0,
	Miner                          = 1,
	Hunter                         = 2,
	Mercenary                      = 3,
	Engineer                       = 4,
	EWTLCharacterClass_MAX         = 5,
};

enum class EWTLFaction : uint8
{
	None                           = 0,
	Confederation                  = 1,
	BlackSunset                    = 2,
	EWTLFaction_MAX                = 3,
};

enum class EDBConnectionType : uint8
{
	TCP                            = 0,
	NamedPipe                      = 1,
	EDBConnectionType_MAX          = 2,
};

enum class EDBDriverType : uint8
{
	None                           = 0,
	MySQL                          = 1,
	MySQLDevart                    = 2,
	MariaDB                        = 3,
	EDBDriverType_MAX              = 4,
};

enum class EWTLActivatableAnomalyState : uint8
{
	Idle                           = 0,
	BeginActivate                  = 1,
	Activated                      = 2,
	EWTLActivatableAnomalyState_MAX = 3,
};

enum class EWTLAIStateDeath : uint8
{
	None                           = 0,
	ToDeath                        = 1,
	Death                          = 2,
	EWTLAIStateDeath_MAX           = 3,
};

enum class EWTLAmbientSoundDayTimeType : uint8
{
	AllDay                         = 0,
	Day                            = 1,
	Night                          = 2,
	EWTLAmbientSoundDayTimeType_MAX = 3,
};

enum class EWTLAmbientSoundLocationType : uint8
{
	Foreground                     = 0,
	Underground                    = 1,
	EWTLAmbientSoundLocationType_MAX = 2,
};

enum class EWTLReloadingNotifyType : uint8
{
	ReloadStart                    = 0,
	ReloadEnd                      = 1,
	EWTLReloadingNotifyType_MAX    = 2,
};

enum class EWTLAnomalyCheckResult : uint8
{
	Result_False                   = 0,
	Result_True                    = 1,
	Result_MAX                     = 2,
};

enum class EWTLAnomalyActionResult : uint8
{
	Failed                         = 0,
	Success                        = 1,
	EWTLAnomalyActionResult_MAX    = 2,
};

enum class EWTLBPLogVerbosity : uint8
{
	Information                    = 4,
	Warning                        = 3,
	Error                          = 2,
	Fatal                          = 1,
	EWTLBPLogVerbosity_MAX         = 5,
};

enum class EWTLBulletHellTraceResultType : uint8
{
	None                           = 0,
	Character                      = 1,
	WorldStatic                    = 2,
	EWTLBulletHellTraceResultType_MAX = 3,
};

enum class EWTLBulletHellAngularType : uint8
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EWTLBulletHellAngularType_MAX  = 3,
};

enum class EWTLDisplayInputType : uint8
{
	None                           = 0,
	InputUp                        = 1,
	InputDown                      = 2,
	InputRight                     = 3,
	InputLeft                      = 4,
	ButtonPressed1                 = 5,
	ButtonPressed2                 = 6,
	EWTLDisplayInputType_MAX       = 7,
};

enum class EWTLCharacterAnimationInstanceMovementState : uint8
{
	None                           = 0,
	Stand                          = 1,
	StandWalking                   = 2,
	StandSprinting                 = 3,
	Crouch                         = 4,
	CrouchWalking                  = 5,
	Prone                          = 6,
	ProneWalking                   = 7,
	EWTLCharacterAnimationInstanceMovementState_MAX = 8,
};

enum class EWTLRootMotionControlLockingType : uint8
{
	None                           = 0,
	LockOnlyYaw                    = 1,
	LockOnlyPitch                  = 2,
	LockAll                        = 3,
	EWTLRootMotionControlLockingType_MAX = 4,
};

enum class EWTLSimplifiedIdentificationType : uint8
{
	None                           = 0,
	OriginalSimplified             = 1,
	HealthbarCombined              = 2,
	CharacterNameOnly              = 3,
	EWTLSimplifiedIdentificationType_MAX = 4,
};

enum class EWTLLadderMontageType : uint8
{
	None                           = 0,
	LadderUpStart                  = 1,
	LadderUpEnd                    = 2,
	LadderDownStart                = 3,
	LadderDownEnd                  = 4,
	EWTLLadderMontageType_MAX      = 5,
};

enum class EWTLCharacterPreviewType : uint8
{
	None                           = 0,
	CustomizationOnly              = 1,
	Equipment                      = 2,
	EquipmentWithUsableItem        = 3,
	EWTLCharacterPreviewType_MAX   = 4,
};

enum class EWTLTurretState : uint8
{
	None                           = 0,
	Prewarm                        = 1,
	Firing                         = 2,
	Cooldown                       = 3,
	EWTLTurretState_MAX            = 4,
};

enum class EWTLConfirmationType : uint8
{
	None                           = 0,
	DropItemFromInventory          = 1,
	DestroyItemInInventory         = 2,
	RemoveStash                    = 3,
	EWTLConfirmationType_MAX       = 4,
};

enum class EWTLBackButtonActionType : uint8
{
	None                           = 0,
	BackToStoreItems               = 1,
	BackToViewItem                 = 2,
	BackToCart                     = 3,
	EWTLBackButtonActionType_MAX   = 4,
};

enum class EFontSize : uint8
{
	None                           = 0,
	Default                        = 16,
	Increased                      = 18,
	EFontSize_MAX                  = 19,
};

enum class EWTLControlledPawnType : uint8
{
	Monster                        = 0,
	Robot                          = 1,
	EWTLControlledPawnType_MAX     = 2,
};

enum class EWTLEnemyNPCExclamationType : uint8
{
	None                           = 0,
	Attack                         = 1,
	DamageDone                     = 2,
	Grenade                        = 3,
	Reload                         = 4,
	Warning                        = 5,
	TargetSighted                  = 6,
	TargetListened                 = 7,
	TalkToTarget                   = 8,
	EWTLEnemyNPCExclamationType_MAX = 9,
};

enum class EWTLEnemyNPCSpawnType : uint8
{
	Wave                           = 0,
	ReplanishTheRanks              = 1,
	EWTLEnemyNPCSpawnType_MAX      = 2,
};

enum class EWTLCannotUseRangedWeaponOnClientSideReason : uint8
{
	None                           = 0,
	AmmoIsFireworkAndLocationIsUndeground = 1,
	EWTLCannotUseRangedWeaponOnClientSideReason_MAX = 2,
};

enum class EWTLDroneMovementMode : uint8
{
	None                           = 0,
	RotateAroundCharacter          = 1,
	FollowCharacterFromAbove       = 2,
	EWTLDroneMovementMode_MAX      = 3,
};

enum class EWTLWeaponModificationPartsType : uint8
{
	None                           = 0,
	Damage                         = 1,
	Accuracy                       = 2,
	Durability                     = 3,
	EWTLWeaponModificationPartsType_MAX = 4,
};

enum class EWTLCannotCraftRecipeInCraftObjectReason : uint8
{
	None                           = 0,
	StorageIsFull                  = 1,
	NotEnoughAvailableSlotsInStorage = 2,
	EWTLCannotCraftRecipeInCraftObjectReason_MAX = 3,
};

enum class EWTLDebugSuggestionType : uint8
{
	None                           = 0,
	Account                        = 1,
	Friend                         = 2,
	EWTLDebugSuggestionType_MAX    = 3,
};

enum class EWTLCannotBuyItemReason : uint8
{
	None                           = 0,
	ItemIsOutOfStock               = 1,
	ItemPriceHasBeenChanged        = 2,
	EWTLCannotBuyItemReason_MAX    = 3,
};

enum class EWTLPlayerPawnType : uint8
{
	NoneOrDead                     = 0,
	Character                      = 1,
	Monster                        = 2,
	Spectator                      = 3,
	EWTLPlayerPawnType_MAX         = 4,
};

enum class EWTLAchievementRarity : uint8
{
	Common                         = 0,
	Rare                           = 1,
	VeryRare                       = 2,
	UltraRare                      = 3,
	IncredibleRare                 = 4,
	Legendary                      = 5,
	EWTLAchievementRarity_MAX      = 6,
};

enum class EWTLCharacterStateInVehicle : uint8
{
	None                           = 0,
	Idle                           = 1,
	Riding                         = 2,
	Reverse                        = 3,
	Jump                           = 4,
	SlideRight                     = 5,
	SlideLeft                      = 6,
	Acceleration                   = 7,
	EWTLCharacterStateInVehicle_MAX = 8,
};

enum class EWTLVehicleState : uint8
{
	None                           = 0,
	CharacterLanded                = 1,
	CharacterUnlanded              = 2,
	Idle                           = 3,
	EWTLVehicleState_MAX           = 4,
};

enum class EWTLCannotTeleportOnFortificationReason : uint8
{
	None                           = 0,
	NotEnoughTeleportationDeviceEnergy = 1,
	ControlFactionNotEqualCharacterFaction = 2,
	CharacterReputationTooLow      = 3,
	CommandCoreEnergyNotEnoughForSafeZoneFunctionality = 4,
	EWTLCannotTeleportOnFortificationReason_MAX = 5,
};

enum class EWTLCheckType : uint8
{
	MustHaveAll                    = 0,
	MustHaveOneOf                  = 1,
	MustNotHaveAll                 = 2,
	MustNotHaveOneOf               = 3,
	EWTLCheckType_MAX              = 4,
};

enum class EWTLCharacterStateIndicatorNatureType : uint8
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative_Average               = 2,
	Negative_Severe                = 3,
	EWTLCharacterStateIndicatorNatureType_MAX = 4,
};

enum class EWTLCharacterEffectNatureType : uint8
{
	Negative                       = 0,
	Positive                       = 1,
	EWTLCharacterEffectNatureType_MAX = 2,
};

enum class EWTLStoreItemType : uint8
{
	All                            = 0,
	Weapons                        = 1,
	Ammo                           = 2,
	Medicine                       = 3,
	Equipment                      = 4,
	ClothesAndArmor                = 5,
	Resources                      = 6,
	Other                          = 7,
	Tokens                         = 8,
	Bundles                        = 9,
	NewItems                       = 10,
	EWTLStoreItemType_MAX          = 11,
};

enum class EWTLCountryRegion : uint8
{
	Unknown                        = 0,
	Asia                           = 1,
	America                        = 2,
	Europe                         = 3,
	CIS                            = 4,
	Oceania                        = 5,
	EWTLCountryRegion_MAX          = 6,
};

enum class EWTLMicrotransactionType : uint8
{
	Credits                        = 0,
	Premium                        = 1,
	EWTLMicrotransactionType_MAX   = 2,
};

enum class EWTLCannotPutToAccountInventoryReason : uint8
{
	None                           = 0,
	CannotPut                      = 1,
	HaveNoPremium                  = 2,
	LoadedWeapon                   = 3,
	WeaponWithAttachments          = 4,
	ModifiedWeapon                 = 5,
	AmmoLoadedInWeapon             = 6,
	VehicleCurrentInUse            = 7,
	ClothesWithArmorPlates         = 8,
	EWTLCannotPutToAccountInventoryReason_MAX = 9,
};

enum class EWTLCannotTakeFromAccountInventoryReason : uint8
{
	None                           = 0,
	CannotTake                     = 1,
	LowCharacterLevel              = 2,
	NotEnoughAvailableSlotsInInventory = 3,
	EWTLCannotTakeFromAccountInventoryReason_MAX = 4,
};

enum class EWTLClanScoreType : uint8
{
	None                           = 0,
	PVP                            = 1,
	PVE                            = 2,
	Craft                          = 3,
	Technology                     = 4,
	EWTLClanScoreType_MAX          = 5,
};

enum class EWTLSlotMachineSymbolCheckType : uint8
{
	NotAny                         = 0,
	Any                            = 1,
	EWTLSlotMachineSymbolCheckType_MAX = 2,
};

enum class EWTLSlotMachineSymbol : uint8
{
	Blank                          = 0,
	Cherry                         = 1,
	Bar                            = 2,
	DoubleBar                      = 3,
	TripleBar                      = 4,
	Seven                          = 5,
	Jackpot                        = 6,
	EWTLSlotMachineSymbol_MAX      = 7,
};

enum class EWTLComboBoxStringType : uint8
{
	None                           = 0,
	CommonComboBoxString           = 1,
	StoreComboBoxString            = 2,
	HUDComboBoxString              = 3,
	PDAComboBoxString              = 4,
	EWTLComboBoxStringType_MAX     = 5,
};

enum class EWTLCheckBoxType : uint8
{
	None                           = 0,
	CommonCheckBox                 = 1,
	HUDCheckBox                    = 2,
	PDACheckBox                    = 3,
	EWTLCheckBoxType_MAX           = 4,
};

enum class EWTLSwitcherType : uint8
{
	None                           = 0,
	PageSwitcher                   = 1,
	ParameterSwitcher              = 2,
	Common_Parameter_PointSpin     = 3,
	HUD_Parameter_PointSpin        = 4,
	PDA_Parameter_PointSpin        = 5,
	EWTLSwitcherType_MAX           = 6,
};

enum class EWTLCommonClickedItemType : uint8
{
	None                           = 0,
	CommonClickedItem              = 1,
	MainMenuClickedItem            = 2,
	StoreClickedItem               = 3,
	HUDClickedItem                 = 4,
	PDAClickedItem                 = 5,
	EWTLCommonClickedItemType_MAX  = 6,
};

enum class EWTLCommonButtonType : uint8
{
	None                           = 0,
	CommonButton                   = 1,
	CommonTabButton                = 2,
	CommonTypeButton               = 3,
	HUDButton                      = 4,
	HUDTabButton                   = 5,
	HUDPopupMenuButton             = 6,
	PDAButton                      = 7,
	ColorButton                    = 8,
	StoreButton                    = 9,
	ColorPresetButton              = 10,
	EWTLCommonButtonType_MAX       = 11,
};

enum class EWTLFoodActionType : uint8
{
	None                           = 0,
	Drink                          = 1,
	Eat                            = 2,
	EWTLFoodActionType_MAX         = 3,
};

enum class EWTLMessageDialogText : uint8
{
	HasNotPurchasedCustomizationItemsErrorText = 0,
	NotEnoughTokensToBuyWantToPopUpErrorText = 1,
	EWTLMessageDialogText_MAX      = 2,
};

enum class EWTLLootBoxType : uint8
{
	None                           = 0,
	Beginner                       = 1,
	Regular                        = 2,
	Advanced                       = 3,
	Special                        = 4,
	Rare                           = 5,
	EWTLLootBoxType_MAX            = 6,
};

enum class EWTLSocialNetworkType : uint8
{
	None                           = 0,
	VK                             = 1,
	Facebook                       = 2,
	Twitter                        = 3,
	EWTLSocialNetworkType_MAX      = 4,
};

enum class EWTLArenaMatchState : uint8
{
	None                           = 0,
	WaitingForStart                = 1,
	InProgress                     = 2,
	Done                           = 3,
	EWTLArenaMatchState_MAX        = 4,
};

enum class EWTLButtonText : uint8
{
	None                           = 0,
	OK                             = 1,
	Cancel                         = 2,
	Yes                            = 3,
	No                             = 4,
	Apply                          = 5,
	Back                           = 6,
	TopUp                          = 7,
	Send                           = 8,
	Take                           = 9,
	TakeAll                        = 10,
	Update                         = 11,
	Log                            = 12,
	Settings                       = 13,
	Withdraw                       = 14,
	Deposit                        = 15,
	Details                        = 16,
	Open                           = 17,
	Close                          = 18,
	Receive                        = 19,
	Buy                            = 20,
	Info                           = 21,
	ThreeD                         = 22,
	Play                           = 23,
	Set                            = 24,
	Add                            = 25,
	Remove1                        = 26,
	Remove2                        = 27,
	RemoveAll1                     = 28,
	RemoveAll2                     = 29,
	Delete                         = 30,
	DeleteAll                      = 31,
	Edit                           = 32,
	Convert                        = 33,
	Unite                          = 34,
	Read                           = 35,
	Create                         = 36,
	Rename                         = 37,
	Execute                        = 38,
	Save                           = 39,
	InviteToGroup                  = 40,
	Exchange                       = 41,
	ClanApplication                = 42,
	EWTLButtonText_MAX             = 43,
};

enum class EWTLTutorialMessageType : uint8
{
	None                           = 0,
	Tutorial                       = 1,
	Warning                        = 2,
	EWTLTutorialMessageType_MAX    = 3,
};

enum class EWTLTutorialMessage : uint8
{
	None                           = 0,
	ShowPDA                        = 1,
	ShowMap                        = 2,
	ShowMapLegend                  = 3,
	EmotionsMenu                   = 9,
	FirstSkillPoint                = 10,
	GasMaskStuffSlot               = 16,
	HasSteamInventoryItems         = 20,
	PlaceStash                     = 21,
	AccountInventoryInStore        = 22,
	AccountInventoryInStoreFastAccess = 23,
	HungerAffects                  = 24,
	ThirstAffects                  = 25,
	Satiety                        = 26,
	Exhaustion                     = 27,
	DelayedDeathSanatoriumTutorial = 28,
	WantToPlacePremiumStash        = 29,
	PlacedPremiumStash             = 30,
	EWTLTutorialMessage_MAX        = 31,
};

enum class EWTLRepairKitState : uint8
{
	None                           = 0,
	StartRepair                    = 1,
	StopRepair                     = 2,
	OutOfEnergy                    = 3,
	EWTLRepairKitState_MAX         = 4,
};

enum class EWTLFortificationNotificationState : uint8
{
	None                           = 0,
	StartLoosingPoint              = 1,
	StartCapturingPoint            = 2,
	PointCaptured                  = 3,
	PointSecured                   = 4,
	PointLost                      = 5,
	PointCaptureFailed             = 6,
	EWTLFortificationNotificationState_MAX = 7,
};

enum class EWTLFortificationPointState : uint8
{
	None                           = 0,
	CaptureStarted                 = 1,
	Captured                       = 2,
	Restored                       = 3,
	EWTLFortificationPointState_MAX = 4,
};

enum class EWTLFortificationJammerState : uint8
{
	None                           = 0,
	Connected                      = 1,
	ConnectedOutOfEnergy           = 2,
	ConnectionRefused              = 3,
	UnableToConnect                = 4,
	EWTLFortificationJammerState_MAX = 5,
};

enum class EWTLEquipmentType : uint8
{
	None                           = 0,
	NightVision                    = 1,
	NDPDetector                    = 2,
	MetalDetector                  = 3,
	RespiratoryProtection          = 4,
	RadiationDetector              = 5,
	PersonalEnergyShield           = 6,
	EWTLEquipmentType_MAX          = 7,
};

enum class EWTLAITeam : uint8
{
	None                           = 0,
	Vagrants                       = 1,
	Monsters                       = 2,
	Confederation                  = 250,
	BlackSunset                    = 251,
	Neutrals                       = 255,
	EWTLAITeam_MAX                 = 256,
};

enum class EWTLCharacterStunhitDirection : uint8
{
	None                           = 0,
	Right                          = 1,
	Left                           = 2,
	InPlace                        = 3,
	Back                           = 4,
	FallDown                       = 5,
	SpikeInShoulder                = 6,
	SpikeInStomach                 = 7,
	SpikeInHip                     = 8,
	EWTLCharacterStunhitDirection_MAX = 9,
};

enum class EWTLRenderTargetType : uint8
{
	Square                         = 0,
	Landscape                      = 1,
	EWTLRenderTargetType_MAX       = 2,
};

enum class EWTLDialogMessageType : uint8
{
	Information                    = 0,
	Warning                        = 1,
	Error                          = 2,
	EWTLDialogMessageType_MAX      = 3,
};

enum class EWTLNPCType : uint8
{
	None                           = 0,
	Doctor                         = 1,
	Stockman                       = 2,
	Gunsmith                       = 3,
	Trader                         = 4,
	Barman                         = 5,
	BlackMarketDealer              = 6,
	EWTLNPCType_MAX                = 7,
};

enum class EWTLReportFormResponseError : uint8
{
	None                           = 0,
	ServerDoesNotResponse          = 1,
	ServerRequestError             = 2,
	EWTLReportFormResponseError_MAX = 3,
};

enum class EWTLReportFormState : uint8
{
	FeedbackForm                   = 0,
	RequestSending                 = 1,
	RequestSuccess                 = 2,
	RequestError                   = 3,
	EWTLReportFormState_MAX        = 4,
};

enum class EWTLUseMenuActionType : uint8
{
	None                           = 0,
	ShowInformationAboutCharacter  = 1,
	SendTextChatMessageToCharacter = 2,
	GiveTokensToCharacter          = 3,
	OfferBarterToCharacter         = 4,
	InviteCharacterToGroup         = 5,
	MuteCharacter                  = 6,
	UnmuteCharacter                = 7,
	TextChatMuteCharacter          = 8,
	TextChatUnmuteCharacter        = 9,
	ReportCharacter                = 10,
	CommendCharacter               = 11,
	Pickup                         = 12,
	Charge                         = 13,
	Use                            = 14,
	OpenAmmoBox                    = 15,
	EWTLUseMenuActionType_MAX      = 16,
};

enum class EWTLTriggerObjectActionType : uint8
{
	None                           = 0,
	Read                           = 1,
	Inspect                        = 2,
	InsertBatteries                = 3,
	TakeAndRead                    = 4,
	Take                           = 5,
	EWTLTriggerObjectActionType_MAX = 6,
};

enum class EWTLQTEType : uint8
{
	None                           = 0,
	Repetative                     = 1,
	RepetativeWithDecreasing       = 2,
	MachingSequence                = 3,
	RepetativeControlsEnabled      = 4,
	RepetativeWithDecreasingControlsEnabled = 5,
	MachingSequenceWithDecreasing  = 6,
	Fishing                        = 7,
	EWTLQTEType_MAX                = 8,
};

enum class EWTLArmorPlateType : uint8
{
	None                           = 0,
	FrontPlate                     = 1,
	BackPlate                      = 2,
	EWTLArmorPlateType_MAX         = 3,
};

enum class EWTLHUDRequestWindowType : uint8
{
	None                           = 0,
	GroupInvite                    = 1,
	ClanInvite                     = 2,
	BarterOffer                    = 3,
	MarkerSharing                  = 4,
	EWTLHUDRequestWindowType_MAX   = 5,
};

enum class EWTLMoneyTransferWindowWidgetType : uint8
{
	None                           = 0,
	WithdrawFromClanStorage        = 1,
	DepositToClanStorage           = 2,
	EWTLMoneyTransferWindowWidgetType_MAX = 3,
};

enum class EWTLCommissionAddUpdateWindowType : uint8
{
	None                           = 0,
	Add                            = 1,
	Update                         = 2,
	EWTLCommissionAddUpdateWindowType_MAX = 3,
};

enum class EWTLCheatType : uint8
{
	None                           = 0,
	RX_Throttle                    = 1,
	TX_Throttle                    = 2,
	BadPing                        = 3,
	TimeDiscrepancy                = 4,
	Unrandomizer                   = 5,
	ClientValuesHack               = 6,
	SpeedHack                      = 7,
	FireMacrosUse                  = 8,
	HitOutsideHitbox               = 9,
	FireNotInView                  = 10,
	FireWithNoAmmo                 = 11,
	FireWithHighRate               = 12,
	CheatSoftwareDetected          = 13,
	SuspiciousModule               = 100,
	AnticheatResponseFailed        = 200,
	EWTLCheatType_MAX              = 201,
};

enum class EWTLCountdownSliderWidgetFillingType : uint8
{
	Increasing                     = 0,
	Decreasing                     = 1,
	EWTLCountdownSliderWidgetFillingType_MAX = 2,
};

enum class EWTLActionTimerWidgetType : uint8
{
	None                           = 0,
	AnomalyResearch                = 1,
	SafeZoneLeaveInvulnerableCooldown = 2,
	ItemPlacement                  = 3,
	EWTLActionTimerWidgetType_MAX  = 4,
};

enum class EWTLWarningTitleWidgetType : uint8
{
	CannotPickupNotAnyAvailableSlotInInventory = 0,
	CannotMoveInventoryOverload    = 1,
	CannotSprintInventoryOverload  = 2,
	CannotPickupInventoryOverload  = 3,
	CannotUseNotCondition          = 4,
	CannotUseNotEnergy             = 5,
	WeaponReloadAdvice             = 6,
	CannotUsePortal                = 7,
	CannotInviteToGroupAlreadyIn   = 8,
	NotInClan                      = 9,
	NotInFaction                   = 10,
	CannotUsePlaceableStuff        = 11,
	CannotCollectWaterInventoryOverload = 12,
	CannotCollectWaterInventoryWillBeOverloaded = 13,
	CannotCollectWaterNotAnyAvailableSlotInInventory = 14,
	GunOverheated                  = 15,
	NoAmmoForShooting              = 16,
	NoNutsInInventoryToThrow       = 17,
	EventJoined                    = 18,
	EventLeaved                    = 19,
	EventCompleted                 = 20,
	EventFailed                    = 21,
	FishingRodIsBroken             = 22,
	MustBeInAFishingZoneToUseFishingRod = 23,
	ToUseFishingRodAimAtTheWater   = 24,
	TooCloseToUseFishingRod        = 25,
	TooFarToUseFishingRod          = 26,
	FishDontBite                   = 27,
	HaveNotAnyBaitInInventory      = 28,
	NotEnoughStaminaToSprint       = 29,
	NotEnoughStaminaToJump         = 30,
	CannotUseVehicleNotAllowedInLocation = 31,
	CannotUseVehicleIsInSafeZone   = 32,
	CannotSpawnVehicleOnUnevenSurface = 33,
	ResourceWasDepletedInSource    = 34,
	NoOrNotEnoughRequiredItemsToGatherResourceFromSource = 35,
	FireWithCurrentLoadedAmmoIsProhibitedInThisLocation = 36,
	EWTLWarningTitleWidgetType_MAX = 37,
};

enum class EWTLItemSlotActionPermission : uint8
{
	AddOnCustomization             = 0,
	AddForModification             = 1,
	AddWeaponPartToExchange        = 2,
	RemoveFromCustomization        = 3,
	RemoveFromModification         = 4,
	RemoveWeaponPartFromExchange   = 5,
	OpenExtractor                  = 6,
	CloseExtractor                 = 7,
	AddToStimulatorContainerSlot   = 8,
	RemoveFromStimulatorContainerSlot = 9,
	AddOnSale                      = 10,
	AddOnRepair                    = 11,
	AddToExtractor                 = 12,
	AddToBarter                    = 13,
	AddToSteamInventory            = 14,
	AddToMailBox                   = 15,
	AddToUtilization               = 16,
	AddToCommission                = 17,
	AddToExistingItemOnCommission  = 18,
	RemoveFromSale                 = 19,
	RemoveFromRepair               = 20,
	RemoveFromExtractor            = 21,
	RemoveFromBarter               = 22,
	RemoveFromSteamInventory       = 23,
	RemoveFromMailBox              = 24,
	RemoveFromUtilization          = 25,
	PutInStorage                   = 26,
	TakeFromStorage                = 27,
	PutInClanStorage               = 28,
	TakeFromClanStorage            = 29,
	PutToAccountInventory          = 30,
	TakeFromAccountInventory       = 31,
	AssignToFastAccess             = 32,
	RemoveFromFastAccess           = 33,
	PlaceItem                      = 34,
	AttachToWeaponByStuffItem      = 35,
	AttachStuffItemToWeapon        = 36,
	RemoveAttachmentFromWeapon     = 37,
	RemoveAttachmentFromWeaponBySlot = 38,
	RemoveAllAttachmentsFromWeapon = 39,
	UseItem                        = 40,
	ChargeEnergySourceItemToStuff  = 41,
	ChargeStuffItemByEnergySource  = 42,
	ChangeGasMaskFilterFromFilter  = 43,
	ChangeGasMaskFilterFromGasMask = 44,
	RefuelFuelSourceItemToStuff    = 45,
	RefuelStuffItemByFuelSource    = 46,
	PlaceArtefactItemInContainer   = 47,
	RemoveArtefactItemFromContainer = 48,
	InstallPDAModule               = 49,
	RepairWeaponByKit              = 50,
	RepairClothesByKit             = 51,
	ModifyWeaponByKit              = 52,
	ModifyClothesByKit             = 53,
	PaintWeaponBySprayCan          = 54,
	PaintClothesBySprayCan         = 55,
	LoadAmmoToWeapon               = 56,
	LoadWeapon                     = 57,
	UnloadWeapon                   = 58,
	BreakWeapon                    = 59,
	InstallArmoredPlate            = 60,
	RemoveArmoredPlate             = 61,
	UseNewPassport                 = 62,
	UseClassCertificate            = 63,
	UseGenderChangeCertificate     = 64,
	DrinkItem                      = 65,
	EatItem                        = 66,
	ViewItem                       = 67,
	ReadItem                       = 68,
	CutFish                        = 69,
	EquipClothesItem               = 70,
	UnequipClothesItem             = 71,
	OpenArmoredPlatesWindow        = 72,
	RemoveAllArmoredPlates         = 73,
	EquipStuffItem                 = 74,
	UnequipStuffItem               = 75,
	CombineItem                    = 76,
	SplitItem                      = 77,
	DropItem                       = 78,
	DestroyItem                    = 79,
	ShowItemInformation            = 80,
	RepairByRepairDevice           = 81,
	EWTLItemSlotActionPermission_MAX = 82,
};

enum class EWTLMonsterActivityState : uint8
{
	Normal                         = 0,
	Passive                        = 1,
	DeepSleep                      = 2,
	EWTLMonsterActivityState_MAX   = 3,
};

enum class EWTLMonsterActionBase : uint8
{
	None                           = 0,
	MainAttack                     = 1,
	SecondaryAttack                = 2,
	SpecialAbility0                = 3,
	SpecialAbility1                = 4,
	SpecialAbility2                = 5,
	SpecialAbility3                = 6,
	SpecialAbility4                = 7,
	SpecialAbility5                = 8,
	Immobilized                    = 9,
	Stunned                        = 10,
	Die                            = 11,
	CustomAction0                  = 12,
	CustomAction1                  = 13,
	CustomAction2                  = 14,
	CustomAction3                  = 15,
	CustomAction4                  = 16,
	CustomAction5                  = 17,
	CustomAction6                  = 18,
	CustomAction7                  = 19,
	CustomAction8                  = 20,
	CustomAction9                  = 21,
	EWTLMonsterActionBase_MAX      = 22,
};

enum class EWTLMonsterAttachState : uint8
{
	None                           = 0,
	AttachTo                       = 1,
	Attached                       = 2,
	DetachTo                       = 3,
	Detached                       = 4,
	AttachedForward                = 5,
	AttachedBack                   = 6,
	EWTLMonsterAttachState_MAX     = 7,
};

enum class EWTLMonsterAttackModificator : uint8
{
	AllowCritical                  = 0,
	DisallowCritical               = 1,
	AlwaysCritical                 = 2,
	EWTLMonsterAttackModificator_MAX = 3,
};

enum class EWTLMonsterStateFollowTarget : uint8
{
	MoveTo                         = 0,
	Attack                         = 1,
	FarAttack                      = 2,
	Hide                           = 3,
	Attach                         = 4,
	AttachedForward                = 5,
	Detach                         = 6,
	WithoutStateChange             = 7,
	AttachedBack                   = 8,
	RandomLocation                 = 9,
	JumpToEnemy                    = 10,
	EWTLMonsterStateFollowTarget_MAX = 11,
};

enum class EWTMonsterSecondaryState : uint8
{
	Idle                           = 0,
	Follow                         = 1,
	MoveTo                         = 2,
	Attack                         = 3,
	MoveToForFarAttack             = 4,
	FarAttack                      = 5,
	Attach1                        = 6,
	Attach2                        = 7,
	Attach3                        = 8,
	Attach4                        = 9,
	Detach                         = 10,
	RandomLocation                 = 11,
	JumpToEnemy                    = 12,
	HearingMoveTo                  = 13,
	Hide                           = 14,
	Stealth                        = 15,
	MovingInStealth                = 16,
	CustomAction0                  = 17,
	CustomAction1                  = 18,
	CustomAction2                  = 19,
	CustomAction3                  = 20,
	CustomAction4                  = 21,
	CustomAction5                  = 22,
	SpecialAbility0                = 23,
	SpecialAbility1                = 24,
	SpecialAbility2                = 25,
	SpecialAbility3                = 26,
	EWTMonsterSecondaryState_MAX   = 27,
};

enum class EWTLMonsterState : uint8
{
	Idle                           = 0,
	Walk                           = 1,
	AggressUp                      = 2,
	FollowTarget                   = 3,
	Attack                         = 4,
	Escaping                       = 5,
	Jump                           = 6,
	JumpToEnemy                    = 7,
	Teleport                       = 8,
	Fly                            = 9,
	FarAttackToBadCharacter        = 10,
	ToStealth                      = 11,
	InStealth                      = 12,
	StealthMoveTo                  = 13,
	StealthFollowEnemy             = 14,
	FromStealth                    = 15,
	DropItemFromCharacter          = 16,
	CustomAction0                  = 17,
	CustomAction1                  = 18,
	CustomAction2                  = 19,
	CustomAction3                  = 20,
	CustomAction4                  = 21,
	CustomAction5                  = 22,
	GetRandomTarget                = 23,
	PlayMontage                    = 24,
	ToSacrifice                    = 25,
	FindTheVictim                  = 26,
	SpawnMonster                   = 27,
	EWTLMonsterState_MAX           = 28,
};

enum class EWTLMonsterActionType : uint8
{
	None                           = 0,
	MainAttack                     = 1,
	SecondaryAttack                = 2,
	SpecialAbility0                = 3,
	SpecialAbility1                = 4,
	SpecialAbility2                = 5,
	SpecialAbility3                = 6,
	SpecialAbility4                = 7,
	SpecialAbility5                = 8,
	Idle0                          = 9,
	Idle1                          = 10,
	Idle2                          = 11,
	Idle3                          = 12,
	Idle4                          = 13,
	Idle5                          = 14,
	Immobilized                    = 15,
	Stunned                        = 16,
	Die                            = 17,
	CustomAction0                  = 18,
	CustomAction1                  = 19,
	CustomAction2                  = 20,
	CustomAction3                  = 21,
	CustomAction4                  = 22,
	CustomAction5                  = 23,
	CustomAction6                  = 24,
	ToStealth                      = 25,
	InStealth                      = 26,
	FromStealth                    = 27,
	Aggression                     = 28,
	FarAttack0                     = 29,
	FarAttack1                     = 30,
	FarAttackToBadEnemy1           = 31,
	EWTLMonsterActionType_MAX      = 32,
};

enum class EWTLMonsterMovementMode : uint8
{
	None                           = 0,
	Loaf                           = 1,
	Walk                           = 2,
	Sprint                         = 3,
	EWTLMonsterMovementMode_MAX    = 4,
};

enum class EWTLPDAWidget : uint8
{
	Menu                           = 0,
	CharacterInfo                  = 1,
	CharacterParameters            = 2,
	CharacterSkills                = 3,
	QuestLog                       = 4,
	Map                            = 5,
	Mail                           = 6,
	Group                          = 7,
	Clan                           = 8,
	Faction                        = 9,
	FriendsAndEnemies              = 10,
	CraftRecipes                   = 11,
	Achievements                   = 12,
	Settings                       = 13,
	Premium                        = 14,
	NVIDIA_Highlights              = 15,
	SocialNetworkVK                = 16,
	SocialNetworkFacebook          = 17,
	EWTLPDAWidget_MAX              = 18,
};

enum class EWTLCustomizationColorPresetType : uint8
{
	None                           = 0,
	Hair                           = 1,
	Skin                           = 2,
	Clothes                        = 3,
	Feet                           = 4,
	Backpack                       = 5,
	EWTLCustomizationColorPresetType_MAX = 6,
};

enum class EWTLMonsterDangerLevel : uint8
{
	None                           = 0,
	Low                            = 1,
	BelowNormal                    = 2,
	Normal                         = 3,
	AboveNormal                    = 4,
	High                           = 5,
	Critical                       = 6,
	EWTLMonsterDangerLevel_MAX     = 7,
};

enum class EWTLMedicineEffectType : uint8
{
	None                           = 0,
	Strength                       = 1,
	Dexterity                      = 2,
	Stamina                        = 3,
	Accuracy                       = 4,
	Intelligence                   = 5,
	Fortune                        = 6,
	MaxHealth                      = 7,
	EWTLMedicineEffectType_MAX     = 8,
};

enum class EWTLSuicideState : uint8
{
	None                           = 0,
	SuicideInProgress              = 1,
	SuicideDone                    = 2,
	EWTLSuicideState_MAX           = 3,
};

enum class EWTLWeaponAttachmentType : uint8
{
	None                           = 0,
	RedDotSight                    = 1,
	Scope                          = 2,
	MuzzleBrake                    = 3,
	Silencer                       = 4,
	Flashlight                     = 5,
	Laser                          = 6,
	EWTLWeaponAttachmentType_MAX   = 7,
};

enum class EWTLWeaponAttachmentSlotType : uint8
{
	None                           = 0,
	Muzzle                         = 1,
	Flashlight                     = 2,
	Scope                          = 3,
	EWTLWeaponAttachmentSlotType_MAX = 4,
};

enum class EWTLParameterInfluenceType : uint8
{
	Add                            = 0,
	Multiply                       = 1,
	Set                            = 2,
	EWTLParameterInfluenceType_MAX = 3,
};

enum class EWTLClanParameter : uint8
{
	None                           = 0,
	PVPExperienceMultiplier        = 1,
	PVEExperienceMultiplier        = 2,
	PVPDamageMultiplier            = 3,
	PVEDamageMultiplier            = 4,
	ItemExperienceMultiplier       = 5,
	ClanStorageMaxWeightMultiplier = 6,
	InventoryMaxWeightMultiplier   = 7,
	ItemProductionSpeedMultiplier  = 8,
	FactionTechonologiesLevel      = 9,
	MedicineEfficiencyMultiplier   = 10,
	KnifePVPDamageMultiplier       = 11,
	PistolPVPDamageMultiplier      = 12,
	ShotgunPVPDamageMultiplier     = 13,
	SMGPVPDamageMultiplier         = 14,
	AssaultRiflePVPDamageMultiplier = 15,
	RiflePVPDamageMultiplier       = 16,
	MachinegunPVPDamageMultiplier  = 17,
	GrenadeLauncherPVPDamageMultiplier = 18,
	ExplosivePVPDamageMultiplier   = 19,
	KnifePVEDamageMultiplier       = 20,
	PistolPVEDamageMultiplier      = 21,
	ShotgunPVEDamageMultiplier     = 22,
	SMGPVEDamageMultiplier         = 23,
	AssaultRiflePVEDamageMultiplier = 24,
	RiflePVEDamageMultiplier       = 25,
	MachinegunPVEDamageMultiplier  = 26,
	GrenadeLauncherPVEDamageMultiplier = 27,
	ExplosivePVEDamageMultiplier   = 28,
	MovementSpeedMultiplier        = 29,
	MonsterPartsDropChanceMultiplier = 30,
	ResourceDropChanceMultiplier   = 31,
	MiningChanceMultiplier         = 32,
	PVPCriticalChanceMultiplier    = 33,
	PVECriticalChanceMultiplier    = 34,
	EWTLClanParameter_MAX          = 35,
};

enum class EWTLCharacterParameter : uint8
{
	None                           = 0,
	CriticalDamageChance           = 1,
	AvoidCriticalDamageChance      = 2,
	ResourceDropChance             = 3,
	MaxHealth                      = 4,
	MaxStamina                     = 5,
	TakenDamageAmount              = 6,
	Accuracy                       = 7,
	MovementSpeed                  = 8,
	EnvironmentResistance          = 9,
	SatietyHealthRegenerationRate  = 10,
	HealingEfficiency              = 11,
	WeaponHandlingSpeed            = 12,
	DeathLootLoss                  = 13,
	UsingItemsExperienceAmount     = 14,
	UsingRepairKitsEfficiency      = 15,
	SaveLockpicksChance            = 16,
	IHR_Efficiency                 = 17,
	AdditionalInventorySlots       = 18,
	MaxInventoryWeight             = 19,
	ItemProductionSpeed            = 20,
	AdditionalProductionQueueSlots = 21,
	PVP_Damage                     = 22,
	PVP_SlowChanceOnHit            = 23,
	PVP_BleedingChanceOnHit        = 24,
	PVP_KillLootAmount             = 25,
	PVE_EnemyDamage                = 26,
	PVE_MonsterDamage              = 27,
	PVE_MonsterKillLootAmount      = 28,
	PVE_MonsterKillExperienceAmount = 29,
	MeleeDamage                    = 30,
	MeleeBleedingChance            = 31,
	MeleeCriticalDamageChance      = 32,
	PistolDamage                   = 33,
	PistolAccuracy                 = 34,
	PistolCriticalDamageChance     = 35,
	SubMachineGunDamage            = 36,
	SubMachineGunAccuracy          = 37,
	ShotgunDamage                  = 38,
	RifleDamage                    = 39,
	RifleAccuracy                  = 40,
	AssaultRifleDamage             = 41,
	AssaultRifleAccuracy           = 42,
	GrenadeLauncherDamage          = 43,
	ExplosiveDamage                = 44,
	ArmorWeightSpeedMultiplier     = 45,
	EWTLCharacterParameter_MAX     = 46,
};

enum class EWTLStateSpeedAIMonster : uint8
{
	Stop                           = 0,
	Speed01                        = 1,
	Speed03                        = 2,
	Speed05                        = 3,
	Speed07                        = 4,
	Speed1                         = 5,
	EWTLStateSpeedAIMonster_MAX    = 6,
};

enum class EWTLItemSlotType : uint8
{
	None                           = 0,
	Inventory                      = 1,
	Storage                        = 2,
	FastAccess                     = 3,
	Armor                          = 4,
	Buy                            = 5,
	Repair                         = 6,
	Extractor                      = 7,
	Customization                  = 8,
	StimulatorContainer            = 9,
	Stuff                          = 10,
	ClanStorage                    = 11,
	Barter                         = 12,
	ArmoredPlate                   = 13,
	Modification                   = 14,
	SteamInventory                 = 15,
	MailBox                        = 16,
	Utilization                    = 17,
	WeaponPartForExchange          = 18,
	AccountInventory               = 19,
	EWTLItemSlotType_MAX           = 20,
};

enum class EWTLSplitWindowType : uint8
{
	None                           = 0,
	SplitInPlayerInventory         = 1,
	TakeFromStorage                = 2,
	PutInBuyStorage                = 3,
	PutInStorage                   = 4,
	PutInExtractorStorage          = 5,
	TakeFromClanStorage            = 6,
	PutInClanStorage               = 7,
	PutInBarterStorage             = 8,
	PutInSteamInventoryStorage     = 9,
	PutInMailBoxStorage            = 10,
	DropFromInventory              = 11,
	DestroyInInventory             = 12,
	TakeFromAccountInventory       = 13,
	PutToAccountInventory          = 14,
	PutInUtilizationStorage        = 15,
	EWTLSplitWindowType_MAX        = 16,
};

enum class EWTLFiltersChat : uint8
{
	Common                         = 0,
	Faction                        = 1,
	Private                        = 2,
	Log                            = 3,
	Server                         = 4,
	Loot                           = 5,
	Environment                    = 6,
	ConsoleCommand                 = 7,
	Chat                           = 8,
	GlobalChat                     = 9,
	Battle                         = 10,
	Group                          = 11,
	Clan                           = 12,
	Warning                        = 13,
	CollapseChatBox                = 250,
	EWTLFiltersChat_MAX            = 251,
};

enum class EWTLCharacterStateIndicatorType : uint8
{
	None                           = 0,
	InSafeZone                     = 1,
	MediumOverload                 = 2,
	HeavyOverload                  = 3,
	Invulnerable                   = 4,
	InMobileResurectionPointWorkZone = 5,
	InSafeZoneCannotSpawn          = 6,
	InFortificationScoreZone       = 7,
	AverageHunger                  = 8,
	SevereHunger                   = 9,
	AverageThirst                  = 10,
	SevereThirst                   = 11,
	Satiety                        = 12,
	PhysicalExhaustion             = 13,
	InFishingZone                  = 14,
	EWTLCharacterStateIndicatorType_MAX = 15,
};

enum class EWTLMedicineEffectParameter : uint8
{
	None                           = 0,
	Health                         = 1,
	Strength                       = 2,
	Dexterity                      = 3,
	Stamina                        = 4,
	Accuracy                       = 5,
	Intelligence                   = 6,
	Fortune                        = 7,
	StaminaRecovery                = 8,
	EWTLMedicineEffectParameter_MAX = 9,
};

enum class EWTLCustomMovementMode : uint8
{
	CUSTOM_None                    = 0,
	CUSTOM_LadderClimbing          = 1,
	CUSTOM_VehicleRiding           = 2,
	CUSTOM_MAX                     = 3,
};

enum class EWTLHUDNotificationType : uint8
{
	None                           = 0,
	Experience                     = 1,
	LevelUp                        = 2,
	BalanceIncrease                = 3,
	BalanceDecrease                = 4,
	InventoryChange                = 5,
	ObjectivesChange               = 6,
	TeamLeadChange                 = 7,
	GotItem                        = 8,
	LostItem                       = 9,
	Achievement                    = 10,
	SafeZoneEnter                  = 11,
	SafeZoneLeave                  = 12,
	ReputationIncrease             = 13,
	ReputationDecrease             = 14,
	SystemEvent                    = 15,
	SystemQuest                    = 16,
	ConfederationReputationIncrease = 17,
	ConfederationReputationDecrease = 18,
	BlackSunsetReputationIncrease  = 19,
	BlackSunsetReputationDecrease  = 20,
	MailMessageReceived            = 21,
	QuestCompleted                 = 22,
	QuestFailed                    = 23,
	GetGroupInvite                 = 24,
	RemoveFromGroup                = 25,
	BecameGroupLeader              = 26,
	InstableNetworkConnection      = 27,
	CraftObjectProcessStarted      = 28,
	CraftObjectProcessFinished     = 29,
	MailPackageArrived             = 30,
	StuffItemAttachedToWeapon      = 31,
	PDAModuleInstalled             = 32,
	ItemRepaired                   = 33,
	ItemsRepaired                  = 34,
	ItemEquipped                   = 35,
	OnSendGlobalGroupInviteResponse = 36,
	OnSteamInventoryConsumeItemError = 37,
	JoinedClan                     = 38,
	LeftClan                       = 39,
	ExcludedFromClan               = 40,
	FactionScoreIncrease           = 41,
	FactionScoreDecrease           = 42,
	FactionRankIncrease            = 43,
	FactionRankDecrease            = 44,
	FortificationStartLoosingPoint = 45,
	FortificationStartCapturingPoint = 46,
	ForticiationPointCaptured      = 47,
	FortificationPointSecured      = 48,
	FortificationPointLost         = 49,
	FortificationPointCaptureFailed = 50,
	QuestCanBeCompleted            = 51,
	AccountAchievementTrigger      = 52,
	NewClanMemberRequest           = 53,
	EnterFishingZone               = 54,
	LeaveFishingZone               = 55,
	ClanLevelUp                    = 56,
	AccountBalanceIncrease         = 57,
	AccountBalanceDecrease         = 58,
	TakeQuest                      = 59,
	ReceivedMarkerFromPlayer       = 60,
	CanNotAcceptMarkerFromPlayer   = 61,
	FishingLineBroke               = 62,
	CanNotFishingInThisPlace       = 63,
	EWTLHUDNotificationType_MAX    = 64,
};

enum class EWTLArenaActivationVolumeType : uint8
{
	None                           = 0,
	ActivatePlayerStart            = 1,
	ActivatePlayerStartByRating    = 2,
	ActivatableObject              = 3,
	EWTLArenaActivationVolumeType_MAX = 4,
};

enum class EWTLEventLogRecordType : uint8
{
	None                           = 0,
	MonsterKilled                  = 1,
	CharacterKilled                = 2,
	EnemyNPCKilled                 = 3,
	CharacterDied                  = 4,
	CharacterSuicide               = 5,
	DamageToMonster                = 6,
	DamageToEnemyNPC               = 7,
	DamageToCharacter              = 8,
	CriticalDamageToMonster        = 9,
	CriticalDamageToEnemyNPC       = 10,
	CriticalDamageToCharacter      = 11,
	DamageFromMonster              = 12,
	CriticalDamageFromMonster      = 13,
	DamageFromEnemyNPC             = 14,
	CriticalDamageFromEnemyNPC     = 15,
	DamageFromCharacter            = 16,
	CriticalDamageFromCharacter    = 17,
	DamageFromEnvironment          = 18,
	CharacterEntersLocation        = 19,
	CharacterLeaveLocation         = 20,
	StartMatch                     = 21,
	FinishMatch                    = 22,
	CharacterEarnsExperience       = 23,
	CharacterLevelUp               = 24,
	CharacterDestroyMonsterSpawnPoint = 25,
	CharacterGotItem               = 26,
	CharacterLostItem              = 27,
	CharacterDepositedItem         = 28,
	CharacterTakeItem              = 29,
	CharacterDropItem              = 30,
	CharacterEarnsScores           = 31,
	FactionEarnsScores             = 32,
	EnemyPositionsSentToTeamSuccess = 33,
	EnemyPositionsSentToTeamError  = 34,
	TeamLeadChanged                = 35,
	CapturePointChanged            = 36,
	PointCaptureByTeam             = 37,
	PointCaptureByEnemy            = 38,
	PointCaptureFailed             = 39,
	SafeZoneEnter                  = 40,
	SafeZoneLeave                  = 41,
	ReputationIncrease             = 42,
	ReputationDecrease             = 43,
	BalanceChange                  = 44,
	ConfederationReputationIncrease = 45,
	ConfederationReputationDecrease = 46,
	BlackSunsetReputationIncrease  = 47,
	BlackSunsetReputationDecrease  = 48,
	InstableNetworkConnection      = 49,
	MadeEffectToCharacter          = 50,
	TakeItemFromAccountInventory   = 51,
	PutItemToAccountInventory      = 52,
	EWTLEventLogRecordType_MAX     = 53,
};

enum class EWTLMonsterEventType : uint8
{
	None                           = 0,
	MonsterMakeDamage              = 1,
	StopedByDamage                 = 2,
	RecoverFromDamage              = 3,
	Attack                         = 4,
	FarAttack                      = 5,
	EWTLMonsterEventType_MAX       = 6,
};

enum class EWTLMonsterAIStateOfAggression : uint8
{
	None                           = 0,
	Normal                         = 1,
	Hard                           = 2,
	EWTLMonsterAIStateOfAggression_MAX = 3,
};

enum class EWTLMonsterAIStateMoving : uint8
{
	Stop                           = 0,
	Moving                         = 1,
	EWTLMonsterAIStateMoving_MAX   = 2,
};

enum class EWTLMonsterAIState : uint8
{
	Walk                           = 0,
	RateAggressUp                  = 1,
	FollowTarget                   = 2,
	Attack                         = 3,
	FarAttack                      = 4,
	FindInstigator                 = 5,
	Escaping                       = 6,
	TakeDamageHigh                 = 7,
	Stealth                        = 8,
	Bug                            = 250,
	EWTLMonsterAIState_MAX         = 251,
};

enum class EWTLMonsterAnimationState : uint8
{
	Movement                       = 0,
	Idle                           = 1,
	Attack                         = 2,
	FarAttack                      = 3,
	Damage                         = 4,
	RateAggressUp                  = 5,
	TakeDamageHight                = 6,
	Stealth                        = 7,
	Death                          = 200,
	EWTLMonsterAnimationState_MAX  = 201,
};

enum class EWTLMonsterAIStateAnim : uint8
{
	None                           = 0,
	Movement                       = 1,
	Fly                            = 2,
	Idle                           = 3,
	Attack                         = 4,
	FarAttack                      = 5,
	Damage                         = 6,
	RateAggressUp                  = 7,
	TakeDamageHigh                 = 8,
	Stealth                        = 9,
	Death                          = 200,
	EWTLMonsterAIStateAnim_MAX     = 201,
};

enum class EWTLUsableItemUseType : uint8
{
	None                           = 0,
	Main                           = 1,
	Alternative                    = 2,
	EWTLUsableItemUseType_MAX      = 3,
};

enum class EWTLUsableItemState : uint8
{
	None                           = 0,
	Idle                           = 1,
	ReloadedOneRound               = 2,
	ReloadedFullMagazine           = 3,
	MissileThrow                   = 4,
	TacticalPlace                  = 5,
	TakeInArms                     = 6,
	PutToInventory                 = 7,
	MissileReadyToThrow            = 8,
	MeleeWeaponHit                 = 9,
	ResourceMinerHit               = 10,
	ResourceMinerZoneUse           = 11,
	RepairItemUse                  = 12,
	HealingItemUse                 = 13,
	RechargeItem                   = 14,
	DetectorPowerButtonPress       = 15,
	SetDetectorMode                = 16,
	StartToUse                     = 17,
	EWTLUsableItemState_MAX        = 18,
};

enum class EFSteelTargetState : uint8
{
	None                           = 0,
	Rised                          = 1,
	Droped                         = 2,
	FSteelTargetState_MAX          = 3,
};

enum class EFSteelTargetType : uint8
{
	None                           = 0,
	AlwaysActive                   = 1,
	ActivateByCharacter            = 2,
	ActivateByController           = 3,
	FSteelTargetType_MAX           = 4,
};

enum class EWTLMonsterTakeDamageType : uint8
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EWTLMonsterTakeDamageType_MAX  = 4,
};

enum class EWTLAIStateMoving : uint8
{
	Stop                           = 0,
	Walk                           = 1,
	EasyRun                        = 2,
	QuickRun                       = 3,
	EWTLAIStateMoving_MAX          = 4,
};

enum class EWTLAIStateMonster : uint8
{
	Walk                           = 0,
	RateAggressUp                  = 1,
	FollowTarget                   = 2,
	FindInstigator                 = 3,
	Escaping                       = 4,
	EWTLAIStateMonster_MAX         = 5,
};

enum class EWTLAITypeTakeDamage : uint8
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EWTLAITypeTakeDamage_MAX       = 4,
};

enum class EWTLAIStateAnimMonster : uint8
{
	Idle                           = 0,
	Idle2                          = 1,
	Idle3                          = 2,
	TakeHighDamage                 = 3,
	RateAggressUp                  = 4,
	Movement                       = 5,
	Attack1                        = 6,
	Attack2                        = 7,
	Death                          = 8,
	EWTLAIStateAnimMonster_MAX     = 9,
};

enum class EWTLDetectorMode : uint8
{
	AliveCreaturesSearchMode       = 0,
	MinesDetectorMode              = 1,
	PlaceableStuffsSearchMode      = 2,
	EWTLDetectorMode_MAX           = 3,
};

enum class EWTLWeaponState : uint8
{
	Idle                           = 0,
	Firing                         = 1,
	FireLast                       = 2,
	Reloading                      = 3,
	Equiping                       = 4,
	Empty                          = 5,
	EWTLWeaponState_MAX            = 6,
};

enum class EWTLFireMode : uint8
{
	None                           = 0,
	Single                         = 1,
	Burst2                         = 2,
	Burst3                         = 3,
	Auto                           = 4,
	EWTLFireMode_MAX               = 5,
};

enum class EProjectileType : uint8
{
	None                           = 0,
	Bullet                         = 1,
	Grenade                        = 2,
	EProjectileType_MAX            = 3,
};

enum class EWTLBulletType : uint8
{
	FMJ                            = 0,
	HP                             = 1,
	AP                             = 2,
	EWTLBulletType_MAX             = 3,
};

enum class EWTLCharacterMoveState : uint8
{
	NotMoving                      = 0,
	Prone                          = 1,
	Crouch                         = 2,
	Walk                           = 3,
	Sprint                         = 4,
	EWTLCharacterMoveState_MAX     = 5,
};

enum class EWTLCharacterPose : uint8
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Swim                           = 3,
	EWTLCharacterPose_MAX          = 4,
};

enum class EWTLHandsState : uint8
{
	Empty                          = 0,
	Idle                           = 1,
	TakingItemInArms               = 2,
	PuttingItemInInventory         = 3,
	Reloading                      = 4,
	Action                         = 5,
	Running                        = 6,
	AimingTransition               = 7,
	Jamming                        = 8,
	ItemPlacement                  = 9,
	ThrowNut                       = 10,
	QuickThrow                     = 11,
	EWTLHandsState_MAX             = 12,
};

enum class EWTLClientMessageType : uint8
{
	Building                       = 1,
	Mining                         = 2,
	EWTLClientMessageType_MAX      = 3,
};

enum class EWTLKeyCategory : uint8
{
	None                           = 0,
	Common                         = 1,
	Movement                       = 2,
	Actions                        = 3,
	Slots                          = 4,
	HUD                            = 5,
	PDA                            = 6,
	Communication                  = 7,
	EWTLKeyCategory_MAX            = 8,
};

enum class EWTLInputMode : uint8
{
	Game                           = 0,
	GameAndUI                      = 1,
	UI                             = 2,
	EWTLInputMode_MAX              = 3,
};

enum class EWTLMapMarkerType : uint8
{
	Player                         = 0,
	Enemy                          = 1,
	Ally                           = 2,
	Monster                        = 3,
	QuestMonster                   = 4,
	CapturePoint                   = 5,
	TeamLead                       = 6,
	SafeHouse                      = 7,
	MobileStartPoint               = 8,
	QuestPoint                     = 9,
	CompleteQuestPoint             = 10,
	CompleteActiveQuestPoint       = 11,
	TakeQuestPoint                 = 12,
	PlayerKiller                   = 13,
	LastDeath                      = 14,
	CampfireLocation               = 15,
	StashLocation                  = 16,
	NPC                            = 17,
	Label                          = 18,
	Portal                         = 19,
	PortalQuestPoint               = 20,
	PortalCompleteQuestPoint       = 21,
	PortalCompleteActiveQuestPoint = 22,
	WaterSource                    = 23,
	NPCDoctor                      = 24,
	NPCStockman                    = 25,
	NPCGunsmith                    = 26,
	NPCTrader                      = 27,
	FortificationNeutralCaptureInProgress = 28,
	FortificationConfederationCaptureInProgress = 29,
	FortificationBlackSunsetCaptureInProgress = 30,
	FortificationNeutralCanBeCaptured = 31,
	FortificationConfederationCanBeCaptured = 32,
	FortificationBlackSunsetCanBeCaptured = 33,
	FortificationNeutralCannotBeCaptured = 34,
	FortificationConfederationCannotBeCaptured = 35,
	FortificationBlackSunsetCannotBeCaptured = 36,
	EventPointMonsterSpawn         = 37,
	EventPointEnvironment          = 38,
	EventPointFindItem             = 39,
	SafeZoneArea                   = 40,
	SafeZoneNeutral                = 41,
	SafeZoneConfederation          = 42,
	SafeZoneBlackSunset            = 43,
	EWTLMapMarkerType_MAX          = 44,
};

enum class EWTLEventPointActivationType : uint8
{
	ByRange                        = 0,
	ByVolume                       = 1,
	EWTLEventPointActivationType_MAX = 2,
};

enum class EWTLEventPointType : uint8
{
	None                           = 0,
	MonsterSpawn                   = 1,
	Environment                    = 2,
	FindItem                       = 3,
	EWTLEventPointType_MAX         = 4,
};

enum class EWTLFishState : uint8
{
	None                           = 0,
	Pecking                        = 1,
	Recovering                     = 2,
	EWTLFishState_MAX              = 3,
};

enum class EWTLFishingMontageType : uint8
{
	None                           = 0,
	Throwing                       = 1,
	ThrowingEnd                    = 2,
	Peck                           = 3,
	PeckEnd                        = 4,
	LeftHook                       = 5,
	UpHook                         = 6,
	RightHook                      = 7,
	DownHook                       = 8,
	EWTLFishingMontageType_MAX     = 9,
};

enum class EWTLHUDType : uint8
{
	None                           = 0,
	Character                      = 1,
	Spectator                      = 2,
	Monster                        = 3,
	EWTLHUDType_MAX                = 4,
};

enum class ECannotActionType : uint8
{
	Put                            = 0,
	Take                           = 1,
	ECannotActionType_MAX          = 2,
};

enum class EWTLAccountInventoryOperationType : uint8
{
	None                           = 0,
	UpdateItems                    = 1,
	TakeItem                       = 2,
	PutItem                        = 3,
	EWTLAccountInventoryOperationType_MAX = 4,
};

enum class EWTLHumanoidAnimInstanceState : uint8
{
	None                           = 0,
	Walking                        = 1,
	Crouch                         = 2,
	CombatWalking                  = 3,
	CombatCrouch                   = 4,
	EWTLHumanoidAnimInstanceState_MAX = 5,
};

enum class EWTLRequestType : uint8
{
	None                           = 0,
	PurchaseStoreItems             = 1,
	GetAccountInventory            = 2,
	GetAccountInventoryAfterPurchaseStoreItems = 3,
	EWTLRequestType_MAX            = 4,
};

enum class EWTLMonsterAcceleration : uint8
{
	Normal                         = 0,
	Fast                           = 1,
	EWTLMonsterAcceleration_MAX    = 2,
};

enum class EWTLMonsterFindingVisibleCharacterType : uint8
{
	Random                         = 0,
	Near                           = 1,
	Hamster                        = 2,
	Stimulus                       = 3,
	EWTLMonsterFindingVisibleCharacterType_MAX = 4,
};

enum class EWTLMonsterFindingCharacterType : uint8
{
	Random                         = 0,
	MinHealth                      = 1,
	MaxHealth                      = 2,
	MinLevel                       = 3,
	MaxLevel                       = 4,
	MinTotalTakeDamage             = 5,
	MaxTotalTakeDamage             = 6,
	Near                           = 7,
	EWTLMonsterFindingCharacterType_MAX = 8,
};

enum class EWTLMonsterStateDeath : uint8
{
	None                           = 0,
	ToDeath                        = 1,
	Death                          = 2,
	EWTLMonsterStateDeath_MAX      = 3,
};

enum class EWTLControlledActionKeyType : uint8
{
	None                           = 0,
	MainAttack                     = 1,
	SecondaryAttack                = 2,
	CustomAction0                  = 3,
	CustomAction1                  = 4,
	CustomAction2                  = 5,
	CustomAction3                  = 6,
	CustomAction4                  = 7,
	CustomAction5                  = 8,
	CustomAction6                  = 9,
	CustomAction7                  = 10,
	Die                            = 99,
	EWTLControlledActionKeyType_MAX = 100,
};

enum class EWTLMonsterSpawnerSpawnMethod : int32
{
	Reachable                      = 0,
	Navigable                      = 1,
	EWTLMonsterSpawnerSpawnMethod_MAX = 2,
};

enum class EWTLWayPointMovingType : uint8
{
	Sequential                     = 0,
	Random                         = 1,
	EWTLWayPointMovingType_MAX     = 2,
};

enum class EWTLNPCReplicaAction : uint8
{
	None                           = 0,
	ShowMainDialog                 = 1,
	ShowGreetingDefault            = 2,
	ShowGreetingDialog             = 3,
	ShowGreetingAndMainDialog      = 4,
	ShowTakeQuestDialog            = 5,
	ShowCompleteQuestDialog        = 6,
	EndDialog                      = 7,
	EWTLNPCReplicaAction_MAX       = 8,
};

enum class EWTLCharacterCanTakeCompleteQuest : uint8
{
	None                           = 0,
	Take                           = 1,
	Complete                       = 2,
	TakeComplete                   = 3,
	EWTLCharacterCanTakeCompleteQuest_MAX = 4,
};

enum class EWTLInventoryToSteamConversionErrorCode : uint8
{
	None                           = 0,
	InternalError                  = 1,
	ItemsNotFoundInInventory       = 2,
	ItemsConditionsError           = 3,
	WrongItemType                  = 4,
	SteamResponseError             = 5,
	EWTLInventoryToSteamConversionErrorCode_MAX = 6,
};

enum class EWTLNPCReason : uint8
{
	None                           = 0,
	FullBag                        = 1,
	WeightOverload                 = 2,
	EWTLNPCReason_MAX              = 3,
};

enum class EWTLNPCCheckResult : uint8
{
	Result_False                   = 0,
	Result_True                    = 1,
	Result_MAX                     = 2,
};

enum class EWTLNPCActionResult : uint8
{
	Success                        = 0,
	Failed                         = 1,
	EWTLNPCActionResult_MAX        = 2,
};

enum class EWTLNPCAction : uint8
{
	DoNothing                      = 0,
	SpawnReplica                   = 1,
	GiveExperience                 = 2,
	GiveItem                       = 3,
	EWTLNPCAction_MAX              = 4,
};

enum class EWTLHighlightID : uint8
{
	None                           = 0,
	BossKill                       = 1,
	Kill                           = 11,
	DoubleKill                     = 12,
	MultiKill                      = 13,
	TrophyKill                     = 21,
	LongDistanceHit                = 31,
	Jackpot                        = 41,
	EWTLHighlightID_MAX            = 42,
};

enum class EWTLClanLogType : uint8
{
	None                           = 0,
	Score                          = 1,
	Actions                        = 2,
	EWTLClanLogType_MAX            = 3,
};

enum class EWTLClanLeaderboardSortType : uint8
{
	None                           = 0,
	MembersCount                   = 1,
	PvPScore                       = 2,
	PvEScore                       = 3,
	CraftScore                     = 4,
	Reputation                     = 5,
	Rating                         = 6,
	EWTLClanLeaderboardSortType_MAX = 7,
};

enum class EWTLPDASkillState : uint8
{
	NotAvailable                   = 0,
	Available                      = 1,
	Learned                        = 2,
	EWTLPDASkillState_MAX          = 3,
};

enum class EWTLPortalActionResult : uint8
{
	Success                        = 0,
	Failed                         = 1,
	EWTLPortalActionResult_MAX     = 2,
};

enum class EWTLControlledDroneAbilityType : uint8
{
	None                           = 0,
	GetInfo                        = 1,
	SwitchCameraMode               = 2,
	SingleShot                     = 3,
	PickUp                         = 4,
	SelfDestruction                = 5,
	EWTLControlledDroneAbilityType_MAX = 6,
};

enum class EWTLMarkerType : uint8
{
	None                           = 0,
	Enemy                          = 1,
	EnemyNPC                       = 2,
	Friend                         = 3,
	Monster                        = 4,
	Device                         = 5,
	EWTLMarkerType_MAX             = 6,
};

enum class EWTLClanActionLogRecordType : uint8
{
	None                           = 0,
	AcceptInvite                   = 1,
	AcceptRequest                  = 2,
	SetClanLeadership              = 3,
	SetClanMemberType              = 4,
	SetClanPolicyGroup             = 5,
	ChangeClanDescription          = 6,
	LeaveClan                      = 7,
	DismissCharacterFromClan       = 8,
	UpdateClanTabAccess            = 9,
	EWTLClanActionLogRecordType_MAX = 10,
};

enum class EWTLClanScoreLogRecordType : uint8
{
	None                           = 0,
	QuestComplete                  = 1,
	TakeClanSkill                  = 2,
	ScoreExchange                  = 3,
	FortificationCapture           = 4,
	EWTLClanScoreLogRecordType_MAX = 5,
};

enum class EWTLPlatform : uint8
{
	None                           = 0,
	Steam                          = 1,
	Abyss                          = 2,
	Mailru                         = 3,
	EWTLPlatform_MAX               = 4,
};

enum class EWTLCharacterContactType : uint8
{
	None                           = 0,
	Friend                         = 1,
	Enemy                          = 2,
	EWTLCharacterContactType_MAX   = 3,
};

enum class EWTLVoicePacketType : uint8
{
	None                           = 0,
	ClientIdentity                 = 1,
	Regular                        = 100,
	Private                        = 101,
	Group                          = 102,
	Clan                           = 103,
	EWTLVoicePacketType_MAX        = 104,
};

enum class EWTLAccountType : uint8
{
	Regular                        = 0,
	Tester                         = 1,
	Developer                      = 250,
	EWTLAccountType_MAX            = 251,
};

enum class EWTLClanStorageMoneyOperationType : uint8
{
	None                           = 0,
	PutMoney                       = 1,
	TakeMoney                      = 2,
	EWTLClanStorageMoneyOperationType_MAX = 3,
};

enum class EWTLClanStorageItemOperationType : uint8
{
	None                           = 0,
	PutItem                        = 1,
	TakeItem                       = 2,
	EWTLClanStorageItemOperationType_MAX = 3,
};

enum class EWTLServerEventType : uint8
{
	None                           = 0,
	ServerShutdown                 = 1,
	VersionUpdate                  = 2,
	Important                      = 3,
	Average                        = 4,
	Quest                          = 5,
	EWTLServerEventType_MAX        = 6,
};

enum class EWTLPlayerType : uint8
{
	Regular                        = 0,
	Moderator                      = 100,
	Administrator                  = 200,
	EWTLPlayerType_MAX             = 201,
};

enum class EWTLQuestState : uint8
{
	None                           = 0,
	InProgress                     = 1,
	Canceled                       = 2,
	CompletedSuccess               = 3,
	CompletedFailed                = 4,
	EWTLQuestState_MAX             = 5,
};

enum class EWTLClanMemberType : uint8
{
	None                           = 0,
	Leader                         = 1,
	DeputyLeader                   = 2,
	Steward                        = 10,
	Member                         = 100,
	Candidate                      = 200,
	EWTLClanMemberType_MAX         = 201,
};

enum class EWTLQuestType : uint8
{
	None                           = 0,
	OneTime                        = 1,
	Repeatable                     = 2,
	EWTLQuestType_MAX              = 3,
};

enum class EWTLCharacterCustomizationPart : uint8
{
	None                           = 0,
	Head                           = 1,
	Torso                          = 2,
	Legs                           = 3,
	Feet                           = 4,
	Glasses                        = 20,
	Watches                        = 21,
	Backpack                       = 22,
	EWTLCharacterCustomizationPart_MAX = 23,
};

enum class EWTLGameServerStopReason : uint8
{
	None                           = 0,
	ConnectionLost                 = 1,
	Shutdown                       = 2,
	EWTLGameServerStopReason_MAX   = 3,
};

enum class EWTLGameServerType : uint8
{
	None                           = 0,
	Official                       = 1,
	Community                      = 2,
	EWTLGameServerType_MAX         = 3,
};

enum class EWTLCraftType : uint8
{
	None                           = 0,
	Inventory                      = 1,
	CampFire                       = 2,
	Furnace                        = 3,
	PressMachine                   = 4,
	ChemicalStation                = 5,
	AmmoPress                      = 6,
	SmallCNCMachine                = 7,
	BigCNCMachine                  = 8,
	EWTLCraftType_MAX              = 9,
};

enum class EWTLBuildingDoorLockType : uint8
{
	None                           = 0,
	KeyLock                        = 1,
	CodeLock                       = 2,
	EWTLBuildingDoorLockType_MAX   = 3,
};

enum class EWTLSkillDependencyType : uint8
{
	MustHave                       = 0,
	MustNotHave                    = 1,
	MustHaveOneOf                  = 2,
	EWTLSkillDependencyType_MAX    = 3,
};

enum class EWTLSkillType : uint8
{
	Passive                        = 0,
	Active                         = 1,
	EWTLSkillType_MAX              = 2,
};

enum class EWTLBalanceChangeType : uint8
{
	Income                         = 0,
	Charge                         = 1,
	EWTLBalanceChangeType_MAX      = 2,
};

enum class EWTLAmmoProjectileType : uint8
{
	FMJ                            = 0,
	HP                             = 1,
	AP                             = 2,
	EWTLAmmoProjectileType_MAX     = 3,
};

enum class EWTLShopType : uint8
{
	System                         = 0,
	EWTLShopType_MAX               = 1,
};

enum class EWTLMiningPointType : uint8
{
	None                           = 0,
	Tree                           = 1,
	EWTLMiningPointType_MAX        = 2,
};

enum class EWTLBuildingBlockState : uint8
{
	Stable                         = 0,
	Building                       = 1,
	Repairing                      = 2,
	EWTLBuildingBlockState_MAX     = 3,
};

enum class EWTLBuildingJointType : uint8
{
	None                           = 0,
	North                          = 1,
	East                           = 2,
	South                          = 3,
	West                           = 4,
	Top                            = 5,
	Middle                         = 6,
	EWTLBuildingJointType_MAX      = 7,
};

enum class EWTLBuildingType : uint8
{
	None                           = 0,
	House                          = 1,
	EWTLBuildingType_MAX           = 2,
};

enum class EWTLBlockType : uint8
{
	Base                           = 0,
	Wall                           = 1,
	WindowBlock                    = 2,
	DoorBlock                      = 3,
	Pillar                         = 4,
	Top                            = 5,
	FrontSteps                     = 6,
	Stairs                         = 7,
	Staircase                      = 8,
	StorageBox                     = 252,
	Workbench                      = 253,
	Empty                          = 254,
	EWTLBlockType_MAX              = 255,
};

enum class EWTLBodyPart : uint8
{
	None                           = 0,
	Head                           = 1,
	Torso                          = 2,
	Legs                           = 3,
	Feet                           = 4,
	EWTLBodyPart_MAX               = 5,
};

enum class EWTLChatMessageType : uint8
{
	Common                         = 0,
	Private                        = 1,
	Group                          = 2,
	Clan                           = 3,
	Faction                        = 4,
	Global                         = 5,
	System                         = 250,
	EWTLChatMessageType_MAX        = 251,
};

enum class EWTLWeatherType : uint8
{
	Clear                          = 0,
	Cloudy                         = 1,
	Rain                           = 2,
	HeavyRain                      = 3,
	EWTLWeatherType_MAX            = 4,
};

enum class EWTLCloudsType : uint8
{
	Custom                         = 0,
	None                           = 1,
	Few                            = 2,
	Scattered                      = 3,
	Broken                         = 4,
	Overcast                       = 5,
	EWTLCloudsType_MAX             = 6,
};

enum class EWTLSex : uint8
{
	Female                         = 0,
	Male                           = 1,
	EWTLSex_MAX                    = 2,
};

enum class EWTLConnectionCloseType : uint8
{
	InvalidPackets                 = 0,
	InvalidLogin                   = 1,
	ServerConsoleCommand           = 2,
	HighPingValue                  = 3,
	CharacterBan                   = 4,
	ConnecionClosedByServer        = 5,
	EWTLConnectionCloseType_MAX    = 6,
};

enum class EWTLAITargetState : uint8
{
	None                           = 0,
	Warning                        = 1,
	Chasing                        = 2,
	EWTLAITargetState_MAX          = 3,
};

enum class EWTLAITargetType : uint8
{
	None                           = 0,
	Waypoint                       = 1,
	Player                         = 2,
	Monster                        = 3,
	EWTLAITargetType_MAX           = 4,
};

enum class EWTLNPCAIClientEventType : uint8
{
	None                           = 0,
	TargetEnterSightRange          = 1,
	TargetLeaveSightRange          = 2,
	TargetEnterWarningRange        = 3,
	TargetLeaveWarningRange        = 4,
	TargetEnterChaseRange          = 5,
	TargetLeaveChaseRange          = 6,
	EWTLNPCAIClientEventType_MAX   = 7,
};

enum class EWTLAIState : uint8
{
	Sleeping                       = 0,
	Idle                           = 1,
	WalkingToWaypoint              = 2,
	Warning                        = 3,
	Chasing                        = 4,
	Escaping                       = 100,
	Dead                           = 200,
	EWTLAIState_MAX                = 201,
};

enum class EWTLLocationType : uint8
{
	Normal                         = 0,
	Underground                    = 1,
	ClanHall                       = 2,
	EWTLLocationType_MAX           = 3,
};

enum class EWTLPlaceType : uint8
{
	Normal                         = 0,
	Underground                    = 1,
	EWTLPlaceType_MAX              = 2,
};

enum class EWTLQuestCheckResult : uint8
{
	Result_False                   = 0,
	Result_True                    = 1,
	Result_MAX                     = 2,
};

enum class EWTLObjFAActionResult : uint8
{
	Success                        = 0,
	Failed                         = 1,
	EWTLObjFAActionResult_MAX      = 2,
};

enum class EWTLObjFACheckResult : uint8
{
	Result_False                   = 0,
	Result_True                    = 1,
	Result_MAX                     = 2,
};

enum class EWTLRainAudioRemoveMethod : uint8
{
	None                           = 0,
	AlwaysCovered                  = 1,
	RemoveCompletely               = 2,
	EWTLRainAudioRemoveMethod_MAX  = 3,
};

enum class EClassRepNodeMapping : uint8
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	Spatialize_Static              = 2,
	Spatialize_Dynamic             = 3,
	Spatialize_Dormancy            = 4,
	EClassRepNodeMapping_MAX       = 5,
};

enum class EWTLSafeZoneType : uint8
{
	SafeZone                       = 0,
	CheckPoint                     = 1,
	EWTLSafeZoneType_MAX           = 2,
};

enum class EWTLScriptedEventMethodType : int32
{
	SpawnObject                    = 0,
	SpawnMonster                   = 1,
	SpawnEnemy                     = 2,
	AnnounceEvent                  = 3,
	EWTLScriptedEventMethodType_MAX = 4,
};

enum class EWTLSecurityViolationType : uint8
{
	None                           = 0,
	DriverDetected                 = 1,
	EWTLSecurityViolationType_MAX  = 2,
};

enum class EWTLSlotMachineState : uint8
{
	None                           = 0,
	StartGame                      = 1,
	EndGame                        = 3,
	EWTLSlotMachineState_MAX       = 4,
};

enum class EWTLClanRelation : uint8
{
	Neutral                        = 0,
	Friend                         = 1,
	Enemy                          = 2,
	EWTLClanRelation_MAX           = 3,
};

enum class EWTLTiltState : uint8
{
	None                           = 0,
	TiltRight                      = 1,
	TiltLeft                       = 2,
	EWTLTiltState_MAX              = 3,
};

enum class EWTLTriggerCheckResult : uint8
{
	Result_False                   = 0,
	Result_True                    = 1,
	Result_MAX                     = 2,
};

enum class EWTLTriggerObjectState : uint8
{
	Off                            = 0,
	On                             = 1,
	EWTLTriggerObjectState_MAX     = 2,
};

enum class EWTLTriggerActionResult : uint8
{
	Failed                         = 0,
	Success                        = 1,
	EWTLTriggerActionResult_MAX    = 2,
};

enum class EWTLRadialMenuType : uint8
{
	None                           = 0,
	Use                            = 1,
	Emotions                       = 2,
	EWTLRadialMenuType_MAX         = 3,
};

enum class EWTLBPCheckResult : uint8
{
	Result_False                   = 0,
	Result_True                    = 1,
	Result_MAX                     = 2,
};

enum class EWTLBPActionResult : uint8
{
	Failed                         = 0,
	Success                        = 1,
	EWTLBPActionResult_MAX         = 2,
};

enum class EWTLClothesTorsoMeshVariant : uint8
{
	Full                           = 0,
	FullArms                       = 1,
	HalfArms                       = 2,
	HandsOnly                      = 3,
	EWTLClothesTorsoMeshVariant_MAX = 4,
};

enum class EWTLGlobalLevelObjectType : uint8
{
	None                           = 0,
	Camp                           = 1,
	EWTLGlobalLevelObjectType_MAX  = 2,
};

enum class EWTLFortificationObjectType : uint8
{
	None                           = 0,
	MachinuGun                     = 1,
	EWTLFortificationObjectType_MAX = 2,
};

enum class EWTLNPCIdentificationAbility : uint8
{
	CanTrade                       = 0,
	HasStorage                     = 1,
	CanTakeQuest                   = 2,
	CanCompleteQuest               = 3,
	IsGunsmith                     = 4,
	HasComission                   = 5,
	EWTLNPCIdentificationAbility_MAX = 6,
};

enum class EWTLDaytimeCubemapBlendType : uint8
{
	Increment                      = 0,
	Decrement                      = 1,
	EWTLDaytimeCubemapBlendType_MAX = 2,
};

enum class EWTLEnergyFieldType : uint8
{
	None                           = 0,
	SafeZone                       = 1,
	EWTLEnergyFieldType_MAX        = 2,
};

enum class EWTLSuffocationVolumeType : uint8
{
	None                           = 0,
	Water                          = 1,
	EWTLSuffocationVolumeType_MAX  = 2,
};

enum class EWTLSuspensionType : uint8
{
	Regular                        = 0,
	Enduro                         = 1,
	EWTLSuspensionType_MAX         = 2,
};

enum class EWTLVehicleEngineSoundMode : uint8
{
	Simple                         = 0,
	Advanced                       = 1,
	EWTLVehicleEngineSoundMode_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLPacket
struct FWTLPacket
{
public:
	uint8                                        Pad_27C6[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLDateTime
struct FWTLDateTime
{
public:
	int64                                        Value;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLItemRecord
struct FWTLItemRecord : public FWTLPacket
{
public:
	uint8                                        Pad_27C7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct WTL.WTLResourceItem
struct FWTLResourceItem : public FWTLItemRecord
{
public:
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ResourceID;                                        // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLResourceType                  Type;                                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWeight;                                       // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLCharacterEffectInfluence
struct FWTLCharacterEffectInfluence : public FWTLPacket
{
public:
	enum class EWTLCharacterEffectType           EffectType;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InfluenceAtStart;                                  // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InfluencePerTick;                                  // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0xA8 - 0x30)
// ScriptStruct WTL.WTLMedicineItem
struct FWTLMedicineItem : public FWTLItemRecord
{
public:
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MedicineID;                                        // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLMedicineType                  Type;                                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          CreationDate;                                      // 0x68(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreatorName;                                       // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWeight;                                       // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          ValidityDate;                                      // 0x88(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterEffectInfluence>  Influences;                                        // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0xB0 - 0x30)
// ScriptStruct WTL.WTLClothesItem
struct FWTLClothesItem : public FWTLItemRecord
{
public:
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ClothesID;                                         // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClothesType                   Type;                                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLArmorClass                    ArmorClass;                                        // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          CreationDate;                                      // 0x68(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreatorName;                                       // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ArmorMin;                                          // 0x80(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ArmorMax;                                          // 0x82(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWeight;                                       // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConditionDelta;                                    // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ModCount;                                          // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x95(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x96(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       FrontPlateTypeID;                                  // 0x98(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrontPlateCondition;                               // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       BackPlateTypeID;                                   // 0xA0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BackPlateCondition;                                // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xD8 - 0x30)
// ScriptStruct WTL.WTLWeaponItem
struct FWTLWeaponItem : public FWTLItemRecord
{
public:
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       WeaponID;                                          // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLWeaponType                    Type;                                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCaliber                       Caliber;                                           // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CreationDate;                                      // 0x60(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreatorName;                                       // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MagazineCapacity;                                  // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MagazineAmmoCount;                                 // 0x79(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DamageMin;                                         // 0x7A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DamageMax;                                         // 0x7C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Accuracy;                                          // 0x7E(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWeight;                                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       EffectiveRange;                                    // 0x84(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Condition;                                         // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConditionDelta;                                    // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ModCount;                                          // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CurrentAmmoItemID;                                 // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MuzzleAttachmentTypeID;                            // 0xA0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MuzzleAttachmentCondition;                         // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FlashlightAttachmentTypeID;                        // 0xA8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FlashlightAttachmentCondition;                     // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ScopeAttachmentTypeID;                             // 0xB0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScopeAttachmentCondition;                          // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0xC0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x98 - 0x30)
// ScriptStruct WTL.WTLAmmoItem
struct FWTLAmmoItem : public FWTLItemRecord
{
public:
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       AmmoID;                                            // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLAmmoType                      Type;                                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCaliber                       Caliber;                                           // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          CreationDate;                                      // 0x68(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreatorName;                                       // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DamageMin;                                         // 0x80(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DamageMax;                                         // 0x82(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ArmorPiercingMin;                                  // 0x84(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ArmorPiercingMax;                                  // 0x86(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Accuracy;                                          // 0x88(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Weight;                                            // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWeight;                                       // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0xA0 - 0x30)
// ScriptStruct WTL.WTLArtefactItem
struct FWTLArtefactItem : public FWTLItemRecord
{
public:
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ArtefactID;                                        // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLArtefactType                  Type;                                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CreationDate;                                      // 0x60(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreatorName;                                       // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWeight;                                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          ValidityDate;                                      // 0x88(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       InteractiveObjectID;                               // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x98 - 0x30)
// ScriptStruct WTL.WTLStuffItem
struct FWTLStuffItem : public FWTLItemRecord
{
public:
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       StuffID;                                           // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLStuffType                     Type;                                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CreationDate;                                      // 0x60(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreatorName;                                       // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWeight;                                       // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConditionDelta;                                    // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Energy;                                            // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      StorageObjectType;                                 // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       StorageObjectTypeID;                               // 0x8E(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x91(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0x92(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EA[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0xA8 - 0x28)
// ScriptStruct WTL.WTLStorageContent
struct FWTLStorageContent : public FWTLPacket
{
public:
	enum class EWTLStorageType                   StorageType;                                       // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLLocationStorageType           LocationStorageType;                               // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       StorageID;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLWeaponItem>                WeaponItems;                                       // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLAmmoItem>                  AmmoItems;                                         // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLMedicineItem>              MedicineItems;                                     // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLStuffItem>                 StuffItems;                                        // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLClothesItem>               ClothesItems;                                      // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLResourceItem>              ResourceItems;                                     // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLArtefactItem>              ArtefactItems;                                     // 0x98(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x148 - 0x28)
// ScriptStruct WTL.WTLMailPackageRecord
struct FWTLMailPackageRecord : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       FromCharacterID;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromCharacterName;                                 // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ToCharacterID;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ToCharacterName;                                   // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          MailDate;                                          // 0x60(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLMailPackageDeliveryType       DeliveryType;                                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          PlanDeliveryDate;                                  // 0x70(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalWeight;                                       // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalPrice;                                        // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MessageText;                                       // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MoneyAmount;                                       // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLStorageContent                    Items;                                             // 0x98(0xA8)(NativeAccessSpecifierPublic)
	enum class EWTLMailPackageState              State;                                             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLOperationResult
struct FWTLOperationResult
{
public:
	int32                                        OperationID;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorInfo;                                         // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Processed;                                         // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReplicationState;                                  // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xC8 - 0xB0)
// ScriptStruct WTL.BulletDamageEvent
struct FBulletDamageEvent : public FPointDamageEvent
{
public:
	enum class EWTLWeaponType                    WeaponType;                                        // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmorPiercingValue;                                // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Velocity;                                          // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpulseMultiplier;                                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Critical;                                          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Stealth;                                           // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLColliderType                  ColliderType;                                      // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F5[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct WTL.ShrapnelDamageEvent
struct FShrapnelDamageEvent : public FPointDamageEvent
{
public:
	uint16                                       WeaponTypeID;                                      // 0xB0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpulseMultiplier;                                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Critical;                                          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLColliderType                  ColliderType;                                      // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct WTL.FallDamageEvent
struct FFallDamageEvent : public FDamageEvent
{
public:
	float                                        GroundHitVelocity;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x220 - 0x0)
// ScriptStruct WTL.TakeHitInfo
struct FTakeHitInfo
{
public:
	float                                        ActualDamage;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DamageTypeClass;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AWTLCharacter>          PawnInstigator;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 DamageCauser;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DamageEventClassID;                                // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKilled;                                           // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStealth;                                          // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldTime;                                         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EnsureReplicationByte;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEvent                          GeneralDamageEvent;                                // 0x30(0x10)(NativeAccessSpecifierPrivate)
	struct FBulletDamageEvent                    BulletDamageEvent;                                 // 0x40(0xC8)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FShrapnelDamageEvent                  ShrapnelDamageEvent;                               // 0x108(0xC0)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FRadialDamageEvent                    RadialDamageEvent;                                 // 0x1C8(0x40)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFallDamageEvent                      FallDamageEvent;                                   // 0x208(0x18)(NativeAccessSpecifierPrivate)
};

// 0x240 (0x240 - 0x0)
// ScriptStruct WTL.WTLKillStats
struct FWTLKillStats
{
public:
	class FString                                KillerName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTakeHitInfo                          HitInfo;                                           // 0x10(0x220)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                VictimName;                                        // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLAccountInventoryItem
struct FWTLAccountInventoryItem : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       StoreItemID;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         New;                                               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModificationData;                                  // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x108 - 0x28)
// ScriptStruct WTL.WTLStoreItem
struct FWTLStoreItem : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreditsAmount;                                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyAmount;                                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x3A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NameRU;                                            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DescriptionRU;                                     // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BackgroundColor;                                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                NameColor;                                         // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ItemQuality;                                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2801[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IconURL;                                           // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LargeIconURL;                                      // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tags;                                              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DiscountPercent;                                   // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PromotionType;                                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Hidden;                                            // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2802[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BundleDefinition;                                  // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLInAppPurchaseResult
struct FWTLInAppPurchaseResult : public FWTLPacket
{
public:
	bool                                         Success;                                           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2804[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Info;                                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentBalance;                                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2805[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLArenaLeaderboardRecord
struct FWTLArenaLeaderboardRecord
{
public:
	enum class EWTLFaction                       Faction;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2806[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                CharacterClass;                                    // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2807[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CharacterName;                                     // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CharacterLevel;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2808[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLQuestItemDropChance
struct FWTLQuestItemDropChance
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct WTL.WTLItemSpawnInfo
struct FWTLItemSpawnInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestItemDropChance>       QuestChances;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         SpawnOnlyIfDoesNotHaveItem;                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddToBlackListAfterSpawn;                          // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreNoPrice;                                     // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSpecialItem;                                     // 0x63(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpawnDelay;                                     // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpawnDelay;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2820[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             NextSpawnTime;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct WTL.WTLAirDropItemData
struct FWTLAirDropItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  BlueprintClass;                                    // 0x20(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLItemSpawnInfo>             SpawnItems;                                        // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct WTL.WTLServerEventInfoCommentRowData
struct FWTLServerEventInfoCommentRowData : public FTableRowBase
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct WTL.WTLNoteData
struct FWTLNoteData : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsCenterText;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2821[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct WTL.WTLGiftCardItemData
struct FWTLGiftCardItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2822[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceMultiplier;                                  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CountMultiplier;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             StartTime;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             EndTime;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinBlackListTimeout;                               // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxBlackListTimeout;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, float>                           LocationDropChances;                               // 0x48(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<int32, float>                           MonsterDropChances;                                // 0x98(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLCharacterClassTexture
struct FWTLCharacterClassTexture
{
public:
	enum class EWTLCharacterClass                Class;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2823[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLSlotMachineSymbolTexture
struct FWTLSlotMachineSymbolTexture
{
public:
	enum class EWTLSlotMachineSymbol             Symbol;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLCharacterClassTexture>     Textures;                                          // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct WTL.WTLSlotMachineSymbolsTextures
struct FWTLSlotMachineSymbolsTextures : public FTableRowBase
{
public:
	TArray<struct FWTLSlotMachineSymbolTexture>  SymbolsTextures;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLSlotMachineItemReward
struct FWTLSlotMachineItemReward
{
public:
	enum class EWTLCharacterClass                CharacterClass;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2825[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chance;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2826[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2827[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLSlotMachineSymbolWinCombination
struct FWTLSlotMachineSymbolWinCombination
{
public:
	enum class EWTLSlotMachineSymbolCheckType    CheckType;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2828[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EWTLSlotMachineSymbol>     Symbols;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        SymbolsCount;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2829[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BetMultiplier;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLSlotMachineItemReward>     ItemRewards;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             WinSoundEvent;                                     // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct WTL.WTLSlotMachineWinCombinations
struct FWTLSlotMachineWinCombinations : public FTableRowBase
{
public:
	TArray<struct FWTLSlotMachineSymbolWinCombination> Combination;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct WTL.WTLSlotMachineSymbolRandRange
struct FWTLSlotMachineSymbolRandRange
{
public:
	enum class EWTLSlotMachineSymbol             Symbol;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxValue;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Cost;                                              // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct WTL.WTLSlotMachineCylinder
struct FWTLSlotMachineCylinder : public FTableRowBase
{
public:
	TArray<struct FWTLSlotMachineSymbolRandRange> SymbolRandRange;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLItem
struct FWTLItem
{
public:
	enum class EWTLItemType                      Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TypeID;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct WTL.WTLFishingBaitData
struct FWTLFishingBaitData : public FTableRowBase
{
public:
	struct FWTLItem                              Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct WTL.WTLFishingTakeItem
struct FWTLFishingTakeItem
{
public:
	float                                        DropChance;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyMultiplier;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLFish>                FishActor;                                         // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FishingItemConditionDeltaSuccess;                  // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FishingItemConditionDeltaNotSuccess;               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExperienceReward;                                  // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyReward;                                       // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct WTL.WTLFishingItemData
struct FWTLFishingItemData : public FTableRowBase
{
public:
	int32                                        MinCharacterLevel;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinBiteTime;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxBiteTime;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2830[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWTLFish>                DefaultFishActor;                                  // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLFishingTakeItem>           ItemsLootTable;                                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct WTL.WTLClanLevelItemData
struct FWTLClanLevelItemData : public FTableRowBase
{
public:
	int32                                        PVPScore;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PVEScore;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftScore;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MemberCount;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLArenaItemReward
struct FWTLArenaItemReward
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2831[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2833[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2834[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct WTL.WTLLootBoxItemData
struct FWTLLootBoxItemData : public FTableRowBase
{
public:
	enum class EWTLLootBoxType                   BoxType;                                           // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2835[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MoneyReward;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLArenaItemReward>           ItemRewards;                                       // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLSpawnItemLocationInfo
struct FWTLSpawnItemLocationInfo
{
public:
	int32                                        LocationID;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceMultiplier;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct WTL.WTLLocationSpawnItemData
struct FWTLLocationSpawnItemData : public FTableRowBase
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2837[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quality;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2838[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2839[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastSpawnTime;                                     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenSpawn;                                  // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinBlackListTimeout;                               // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxBlackListTimeout;                               // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnOnlyInTimePeriod;                             // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             SpawnPeriodStartTime;                              // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             SpawnPeriodEndTime;                                // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLSpawnItemLocationInfo>     LocationList;                                      // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLRadialMenuActionInfo
struct FWTLRadialMenuActionInfo
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                DebugPreviewText;                                  // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct WTL.WTLRadialMenuEmotionInfo
struct FWTLRadialMenuEmotionInfo : public FWTLRadialMenuActionInfo
{
public:
	bool                                         NeedPremium;                                       // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct WTL.WTLEmotion
struct FWTLEmotion
{
public:
	struct FWTLRadialMenuEmotionInfo             RadialMenuEmotionInfo;                             // 0x0(0x58)(Edit, NativeAccessSpecifierPublic)
	bool                                         BlockCameraRotation;                               // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideUsableItem;                                    // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBlocking;                                        // 0x5A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeInterrupted;                                  // 0x5B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MaleMontage;                                       // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FemaleMontage;                                     // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct WTL.WTLEmotionTypeItemData
struct FWTLEmotionTypeItemData : public FTableRowBase
{
public:
	struct FWTLRadialMenuEmotionInfo             RadialMenuEmotionInfo;                             // 0x8(0x58)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLEmotion>                   Emotions;                                          // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct WTL.WTLTutorialMessageItemData
struct FWTLTutorialMessageItemData : public FTableRowBase
{
public:
	enum class EWTLTutorialMessageType           Type;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        WarningShowCountLimit;                             // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2841[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct WTL.WTLCharacterRankItemData
struct FWTLCharacterRankItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	uint64                                       Score;                                             // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ScoreToNextRank;                                   // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SmallIcon;                                         // 0x30(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeIcon;                                         // 0x58(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLEnemyNPCWeaponItemVariation
struct FWTLEnemyNPCWeaponItemVariation
{
public:
	uint16                                       WeaponItemTypeID;                                  // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2842[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint16>                               AmmoitemTypeIDVariations;                          // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct WTL.WTLItemDropInfo
struct FWTLItemDropInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2843[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalChance;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2845[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestItemDropChance>       QuestDropChances;                                  // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2846[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinCountDeltaPerLevel;                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCountDeltaPerLevel;                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinConditionDeltaPerLevel;                         // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxConditionDeltaPerLevel;                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2847[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalChanceDeltaPerLevel;                         // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DropOnlyIfDoesNotHaveItem;                         // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2848[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x110 - 0x8)
// ScriptStruct WTL.WTLEnemyNPCItemData
struct FWTLEnemyNPCItemData : public FTableRowBase
{
public:
	int32                                        GroupId;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomizationVariations;                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2849[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class USkeletalMesh>>  HeadVariations;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  TorsoVariations;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  LegsVariations;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  FeetVariations;                                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUseEquipmentVariations;                           // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                HeadClothesItemTypeIDVariations;                   // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                TorsoClothesItemTypeIDVariations;                  // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LegsClothesItemTypeIDVariations;                   // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FeetClothesItemTypeIDVariations;                   // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLEnemyNPCWeaponItemVariation> WeaponItemTypeIDVariationsWithAmmo;                // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FrontPlateTypeIDVariations;                        // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                BackPlateTypeIDVariations;                         // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MinLevel;                                          // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Strength;                                          // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Dexterity;                                         // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stamina;                                           // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Accuracy;                                          // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Intelligence;                                      // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Fortune;                                           // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExperienceToHPRate;                                // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             MaxExperienceGainTimeout;                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanDropWeapon;                                     // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLItemDropInfo>              ItemsToDrop;                                       // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct WTL.WTLEnemyGroupItemData
struct FWTLEnemyGroupItemData : public FTableRowBase
{
public:
	class FText                                  GroupName;                                         // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWTLAITeam                        Team;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          FirstNameVariations;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          LastNameVariations;                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct WTL.WTLCustomWeaponItemData
struct FWTLCustomWeaponItemData : public FTableRowBase
{
public:
	int32                                        WeaponID;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MagazineCapacity;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2851[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DamageMin;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageMax;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMin;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMax;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalHitChanceMultiplier;                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Accuracy;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConditionDelta;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModCount;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CustomizationName;                                 // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2852[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct WTL.WTLCustomizationColorPresetItemData
struct FWTLCustomizationColorPresetItemData : public FTableRowBase
{
public:
	enum class EWTLCustomizationColorPresetType  Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2854[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PreviewColor;                                      // 0x1C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2855[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct WTL.WTLClanStorageTabImageItemData
struct FWTLClanStorageTabImageItemData : public FTableRowBase
{
public:
	struct FSlateBrush                           ImageBrush;                                        // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLCraftIngredient
struct FWTLCraftIngredient
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2856[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumeOnCraft;                                    // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2857[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConditionDeltaOnCraft;                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLRobotProductionResult
struct FWTLRobotProductionResult
{
public:
	int32                                        MonsterID;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Rank;                                              // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2858[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinLifeSpan;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLifeSpan;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct WTL.WTLRobotCraftItemData
struct FWTLRobotCraftItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CraftIcon;                                         // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLCraftIngredient>           Ingredients;                                       // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FWTLRobotProductionResult             Result;                                            // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ProductionTime;                                    // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLCraftPossibleModification
struct FWTLCraftPossibleModification
{
public:
	int32                                        MinDamageMinChange;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDamageMinChange;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinDamageMaxChange;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDamageMaxChange;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinConditionDeltaChange;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxConditionDeltaChange;                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinAccuracyChange;                                 // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAccuracyChange;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinArmorMinChange;                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxArmorMinChange;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinArmorMaxChange;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxArmorMaxChange;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLCraftResult
struct FWTLCraftResult
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLCraftPossibleModification         PossibleModification;                              // 0x20(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct WTL.WTLCraftItemData
struct FWTLCraftItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CraftIcon;                                         // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCraftType                     Type;                                              // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PDAModuleID;                                       // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestID;                                           // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompleteQuestID;                                   // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AchievementID;                                     // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeedCraftExperience;                               // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeedSurvivalExperience;                            // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLCraftIngredient>           Ingredients;                                       // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCraftResult>               Results;                                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        CraftTime;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftExperience;                                   // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SurvivalExperience;                                // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Experience;                                        // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct WTL.WTLInformationDialogItemData
struct FWTLInformationDialogItemData : public FTableRowBase
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct WTL.WTLCustomizationScalarOptionItemData
struct FWTLCustomizationScalarOptionItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Price;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2860[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture>               Texture;                                           // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roughness;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2861[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  DistinctColors;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ColorAmplifierValue;                               // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2862[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct WTL.WTLCustomizationColorItemData
struct FWTLCustomizationColorItemData : public FTableRowBase
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct WTL.WTLChatSmileItemData
struct FWTLChatSmileItemData : public FTableRowBase
{
public:
	class FString                                ImageStyleName;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TextAliases;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SmileImage;                                        // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct WTL.WTLSkyLevelPresetItemData
struct FWTLSkyLevelPresetItemData : public FTableRowBase
{
public:
	class FText                                  CloudyDay;                                         // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct WTL.WTLItemTypeBrushItemData
struct FWTLItemTypeBrushItemData : public FTableRowBase
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct WTL.WTLPortalItemData
struct FWTLPortalItemData : public FTableRowBase
{
public:
	TMap<int32, class FText>                     LocationDisplayText;                               // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct WTL.WTLSafeZoneItemData
struct FWTLSafeZoneItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct WTL.WTLMapMarkerSubTypeBrushItemData
struct FWTLMapMarkerSubTypeBrushItemData : public FTableRowBase
{
public:
	struct FSlateBrush                           MarkerSubTypeBrush;                                // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x110 (0x118 - 0x8)
// ScriptStruct WTL.WTLMapMarkerBrushItemData
struct FWTLMapMarkerBrushItemData : public FTableRowBase
{
public:
	struct FSlateBrush                           MarkerBrush;                                       // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarkerBrushForLegend;                              // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLSkillDependency
struct FWTLSkillDependency : public FWTLPacket
{
public:
	enum class EWTLSkillDependencyType           Type;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2864[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       SkillID;                                           // 0x2A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2865[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLClanParameterInfluence
struct FWTLClanParameterInfluence
{
public:
	enum class EWTLClanParameter                 Parameter;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLParameterInfluenceType        InfluenceType;                                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2867[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Influence;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct WTL.WTLClanSkillItemData
struct FWTLClanSkillItemData : public FTableRowBase
{
public:
	uint8                                        MinClanLevel;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2868[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWTLSkillType                     Type;                                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkillLevel;                                        // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2869[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EffectDescription;                                 // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        TechnologyScore;                                   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLSkillDependency>           Dependencies;                                      // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLClanParameterInfluence>    Influences;                                        // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x88(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLCharacterParameterInfluence
struct FWTLCharacterParameterInfluence
{
public:
	enum class EWTLCharacterParameter            Parameter;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLParameterInfluenceType        InfluenceType;                                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Influence;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct WTL.WTLCharacterSkillItemData
struct FWTLCharacterSkillItemData : public FTableRowBase
{
public:
	uint8                                        MinCharacterLevel;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWTLSkillType                     Type;                                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                Class;                                             // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClassDefault;                                      // 0x42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SkillPoints;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLSkillDependency>           Dependencies;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterParameterInfluence> Influences;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ForgetPrice;                                       // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2871[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLKitItem
struct FWTLKitItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2873[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct WTL.WTLKitItemData
struct FWTLKitItemData : public FTableRowBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLKitItem>                   Items;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct WTL.WTLCharacterStateIndicatorTableRow
struct FWTLCharacterStateIndicatorTableRow : public FTableRowBase
{
public:
	enum class EWTLCharacterStateIndicatorNatureType NatureType;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2874[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             IconTexturePtr;                                    // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct WTL.WTLCharacterEffectsItemData
struct FWTLCharacterEffectsItemData : public FTableRowBase
{
public:
	enum class EWTLCharacterEffectType           EffectType;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterEffectNatureType     NatureType;                                        // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2875[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EffectCooldownPerSecond;                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVolumesEffectValue;                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2876[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          BorderColor;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             AddingSound;                                       // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             RemovingSound;                                     // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLMapQuestPoint
struct FWTLMapQuestPoint
{
public:
	int32                                        LocationID;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointLocation;                                     // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLMonsterKillRequirement
struct FWTLMonsterKillRequirement
{
public:
	int32                                        MonsterID;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2877[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLQuestItemRequirement
struct FWTLQuestItemRequirement
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2878[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomizationName;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LockedInInventory;                                 // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ComsumeOnComplete;                                 // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2879[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLQuestRequirement
struct FWTLQuestRequirement
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLQuestState                    State;                                             // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLEnemyNPCKillRequirement
struct FWTLEnemyNPCKillRequirement
{
public:
	int32                                        EnemyNPCID;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EnemyNPCName;                                      // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLCustomQuestRequirement
struct FWTLCustomQuestRequirement
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseBitMaskForProgress;                             // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CountBits;                                         // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.WTLQuestItemReward
struct FWTLQuestItemReward
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2880[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LockedInInventory;                                 // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2881[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentityItemType
struct FWTLIdentityItemType : public FWTLPacket
{
public:
	enum class EWTLItemType                      Type;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2882[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       TypeID;                                            // 0x2A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2883[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLQuestStateAction
struct FWTLQuestStateAction
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLQuestState                    State;                                             // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetActive;                                         // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2885[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F0 (0x1F8 - 0x8)
// ScriptStruct WTL.WTLQuestItemData
struct FWTLQuestItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWTLQuestType                     Type;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsHidden;                                          // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeCanceled;                                     // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePerformedInGroup;                             // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanGiveGiftCards;                                  // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinCharacterLevel;                                 // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxCharacterLevel;                                 // 0x26(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RecommendedCharacterLevel;                         // 0x27(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinCharacterReputation;                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxCharacterReputation;                            // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                CharacterClass;                                    // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CheckCharacterFaction;                             // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       CharacterFaction;                                  // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2887[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FactionTechnologiesLevel;                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinClanLevel;                                      // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2888[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CompleteTimeLimit;                                 // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             TakeTimeLimit;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoCompleteQuest;                                 // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2889[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             QuestIcon;                                         // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x78(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsShowItemStartQuestInActiveQuestInfo;            // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_288B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomTextRequirement;                             // 0x98(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsShowCustomTextRequirementOnlyInActiveQuestInfo; // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_288C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MoneyRequirement;                                  // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayItemRequirementsInHUD;                      // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayItemRequirementsInPDA;                      // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_288D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestItemRequirement>      ItemRequirements;                                  // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLQuestRequirement>          QuestRequirements;                                 // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLMonsterKillRequirement>    MonsterKillRequirements;                           // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLEnemyNPCKillRequirement>   EnemyNPCKillRequirements;                          // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCustomQuestRequirement>    CustomRequirements;                                // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsShowCustomRequirements;                         // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_288F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExperienceReward;                                  // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowMoneyRewardAfterQuestComplete;              // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2890[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MoneyReward;                                       // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowItemRewardsAfterQuestComplete;              // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2891[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestItemReward>           ItemRewards;                                       // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         UseRandomItemReward;                               // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendItemRewardsByMail;                            // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2892[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             SendItemRewardsByMailInterval;                     // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLQuestItemReward>           ItemRewardsAtStart;                                // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReputationReward;                                  // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompleteAchievementReward;                         // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FailAchievementReward;                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanPVPScoreReward;                                // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanPVEScoreReward;                                // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanCraftScoreReward;                              // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanTechnologyScoreReward;                         // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreditsReward;                                     // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CustomTextReward;                                  // 0x178(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsHideCustomTextRewardAfterQuestComplete;         // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2894[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLIdentityItemType>          WithdrawItemsAfterQuestCompleted;                  // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLMapQuestPoint>             MapQuestPoints;                                    // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLMapQuestPoint>             MapQuestCompletePoints;                            // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                MonsterList;                                       // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLQuestStateAction>          QuestStateActionsOnComplete;                       // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DeleteQuestOnCancel;                               // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct WTL.WTLDialogReplicaItemData
struct FWTLDialogReplicaItemData : public FTableRowBase
{
public:
	class FText                                  CommonText;                                        // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  MaleText;                                          // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  FemaleText;                                        // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>             MaleSound;                                         // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>             FemaleSound;                                       // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             ReplicaSound;                                      // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct WTL.WTLAchievementItemData
struct FWTLAchievementItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             InProgressIcon;                                    // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             EarnedIcon;                                        // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Hidden;                                            // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2897[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StatisticsParameterID;                             // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AchievedPercentage;                                // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct WTL.WTLStatisticsParameterItemData
struct FWTLStatisticsParameterItemData : public FTableRowBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MaxValue;                                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLMonsterAttackEffect
struct FWTLMonsterAttackEffect
{
public:
	enum class EWTLCharacterEffectType           EffectType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2898[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinValue;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct WTL.WTLAICharacterItemData
struct FWTLAICharacterItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2899[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DangerLevelMultiplier;                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRegularAnimal;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_289A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MassInKg;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLAICharacter>         BlueprintClass;                                    // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExperienceToHPRate;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExperienceForKill;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             MaxExperienceGainTimeout;                          // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthPerLevel;                                    // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenerateHealthDelay;                             // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenerateHealthRate;                              // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRegenerationDamageTreshold;                     // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_289C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLMonsterAttackEffect>       CausingEffects;                                    // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinDamage;                              // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxDamage;                              // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinDamagePerLevel;                      // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxDamagePerLevel;                      // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackRadiusPerLevel;                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinArmorPiercing;                       // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxArmorPiercing;                       // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinArmorPiercingPerLevel;               // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxArmorPiercingPerLevel;               // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackEffectPercentPerLevel;                  // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackCriticalDamageMultiplier;               // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMinDamage;                                // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMaxDamage;                                // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMinDamagePerLevel;                        // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackRadiusPerLevel;                           // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMaxDamagePerLevel;                        // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMinArmorPiercingPerLevel;                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMaxArmorPiercingPerLevel;                 // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackCriticalDamageMultiplier;                 // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadArmor;                                         // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyArmor;                                         // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmsArmor;                                         // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegsArmor;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeetArmor;                                         // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadArmorPerLevel;                                 // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyArmorPerLevel;                                 // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmsArmorPerLevel;                                 // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegsArmorPerLevel;                                 // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeetArmorPerLevel;                                 // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_289F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ObjectiveIconBrush;                                // 0x108(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FWTLItemDropInfo>              ItemsToDrop;                                       // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLControlledMonsterSpawnItemInfo
struct FWTLControlledMonsterSpawnItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F8 - 0x8)
// ScriptStruct WTL.WTLMonsterItemData
struct FWTLMonsterItemData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         UseSimpleIdentification;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DangerLevelMultiplier;                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRegularAnimal;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MassInKg;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLMonsterPawn>         BlueprintClass;                                    // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MasterMonsterID;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWTLControlledMonsterPawn> ControlledBlueprintClass;                          // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControlledMonsterStrength;                         // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLControlledMonsterSpawnItemInfo> ControlledItemsSpawn;                              // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ExperienceToHPRate;                                // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExperienceForKill;                                 // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             MaxExperienceGainTimeout;                          // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthPerLevel;                                    // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenerateHealthDelay;                             // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenerateHealthRate;                              // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRegenerationDamageTreshold;                     // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLMonsterAttackEffect>       CausingEffects;                                    // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinDamage;                              // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxDamage;                              // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinDamagePerLevel;                      // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxDamagePerLevel;                      // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinArmorPiercing;                       // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxArmorPiercing;                       // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMinArmorPiercingPerLevel;               // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackMaxArmorPiercingPerLevel;               // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackRadiusPerLevel;                         // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackEffectPercentPerLevel;                  // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseAttackCriticalDamageMultiplier;               // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMinDamage;                                // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMaxDamage;                                // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMinDamagePerLevel;                        // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMaxDamagePerLevel;                        // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMinArmorPiercingPerLevel;                 // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackMaxArmorPiercingPerLevel;                 // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackRadiusPerLevel;                           // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarAttackCriticalDamageMultiplier;                 // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadArmor;                                         // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyArmor;                                         // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmsArmor;                                         // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegsArmor;                                         // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeetArmor;                                         // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadArmorPerLevel;                                 // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyArmorPerLevel;                                 // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmsArmorPerLevel;                                 // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegsArmorPerLevel;                                 // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeetArmorPerLevel;                                 // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ObjectiveIconBrush;                                // 0x150(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        AccountAchievementIDForKill;                       // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccountStatisticsParameterID;                      // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccountStatisticsParameterDelta;                   // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLItemDropInfo>              ItemsToDrop;                                       // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct WTL.WTLCharacterLevelItemData
struct FWTLCharacterLevelItemData : public FTableRowBase
{
public:
	int32                                        Experience;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExperienceToNextLevel;                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SkillPoints;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParametersPoints;                                  // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct WTL.WTLLoadingAdviceItemData
struct FWTLLoadingAdviceItemData : public FTableRowBase
{
public:
	class FText                                  AdviceText;                                        // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct WTL.WTLLoadingScreenImagesItemData
struct FWTLLoadingScreenImagesItemData : public FTableRowBase
{
public:
	struct FSoftObjectPath                       Image;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       AdviceID;                                          // 0x20(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ImageTexture;                                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x118 - 0x8)
// ScriptStruct WTL.WTLMapItemData
struct FWTLMapItemData : public FTableRowBase
{
public:
	class FString                                MapName;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapPath;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MasterMapID;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MasterMapOffset;                                   // 0x44(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PDAModuleID;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             MapTexture;                                        // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LocationPreviewTexture;                            // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              MinimapMaterial;                                   // 0xA8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandscapeSideSize;                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             WorldCenterOffset;                                 // 0xD4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleValue;                                        // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomInScaleDeltaRange;                             // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomOutScaleDeltaRange;                            // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapOriginalSideSize;                               // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapSideSizeWithBorder;                             // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstSectorPosition;                               // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectorSize;                                        // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FirstSectorName;                                   // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PDANetworkSignalMin;                               // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PDANetworkSignalMax;                               // 0x111(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AF[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLCharacterCustomizationScalarParameter
struct FWTLCharacterCustomizationScalarParameter
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ScalarValueCount;                                  // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLCharacterCustomizationColorParameter
struct FWTLCharacterCustomizationColorParameter
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2F8 (0x300 - 0x8)
// ScriptStruct WTL.WTLCharacterCustomizationItemData
struct FWTLCharacterCustomizationItemData : public FTableRowBase
{
public:
	enum class EWTLCharacterCustomizationPart    Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                ClassType;                                         // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDefaultClassObject;                              // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLSex                           Sex;                                               // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ImageTexture;                                      // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StoreItemID;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SteamID;                                           // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                RequiredSteamDLC;                                  // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         NeedLongPants;                                     // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHairlessHead;                                   // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMeshVariant1;                              // 0x98(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName0;                                 // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MaterialName0;                                     // 0xC8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color0;                          // 0xE0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color1;                          // 0xF0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color2;                          // 0x100(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color3;                          // 0x110(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter0;                // 0x120(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter1;                // 0x138(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter2;                // 0x150(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter3;                // 0x168(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName1;                                 // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MaterialName1;                                     // 0x188(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color0;                          // 0x1A0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color1;                          // 0x1B0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color2;                          // 0x1C0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color3;                          // 0x1D0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter0;                // 0x1E0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter1;                // 0x1F8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter2;                // 0x210(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter3;                // 0x228(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName2;                                 // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MaterialName2;                                     // 0x248(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color0;                          // 0x260(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color1;                          // 0x270(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color2;                          // 0x280(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color3;                          // 0x290(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter0;                // 0x2A0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter1;                // 0x2B8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter2;                // 0x2D0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter3;                // 0x2E8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLItemClassRequirement
struct FWTLItemClassRequirement
{
public:
	enum class EWTLCharacterClass                Class;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Strength;                                          // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Dexterity;                                         // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Stamina;                                           // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Accuracy;                                          // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Intelligence;                                      // 0x6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Fortune;                                           // 0x7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WTL.WTLFishCutItemInfo
struct FWTLFishCutItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalChance;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestItemDropChance>       QuestDropChances;                                  // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLUseItemResult
struct FWTLUseItemResult
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x230 (0x238 - 0x8)
// ScriptStruct WTL.WTLArtefactItemData
struct FWTLArtefactItemData : public FTableRowBase
{
public:
	enum class EWTLArtefactType                  Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Validity;                                          // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NoteID;                                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             ItemViewImage;                                     // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InformationContent;                                // 0x90(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsCenterInformationContent;                       // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DropChance;                                        // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FactionTechnologiesLevel;                          // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLItemClassRequirement>      RPGClassRequirements;                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        BasePrice;                                         // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             InventoryIcon;                                     // 0xD0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StoreIcon;                                         // 0xF8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeStoreIcon;                                    // 0x120(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLArtefactPickup>      ItemPickupClass;                                   // 0x148(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            CharacterArtefactPreviewMesh;                      // 0x170(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeUnited;                                       // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLCharacterEffectInfluence>  Influences;                                        // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EWTLFoodActionType                FoodActionType;                                    // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HungerValue;                                       // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThirstValue;                                       // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HealthValue;                                       // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StaminaValue;                                      // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AlcoholValue;                                      // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoisonValue;                                       // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChemicalsValue;                                    // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiationValue;                                    // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BleedingValue;                                     // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WoundedValue;                                      // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLFishCutItemInfo>           FishCutItems;                                      // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLUseItemResult>             ResultItems;                                       // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnCommission;                           // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsItemStartQuest;                                 // 0x201(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuestIDToStart;                                    // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanTransferToSteam;                                // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamMarketID;                                     // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             UseSoundEvent;                                     // 0x210(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct WTL.WTLResourceItemData
struct FWTLResourceItemData : public FTableRowBase
{
public:
	enum class EWTLResourceType                  Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BasePrice;                                         // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             InventoryIcon;                                     // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StoreIcon;                                         // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeStoreIcon;                                    // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLResourcePickup>      ItemPickupClass;                                   // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeUnited;                                       // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLCharacterEffectInfluence>  Influences;                                        // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnCommission;                           // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanTransferToSteam;                                // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamMarketID;                                     // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x250 (0x258 - 0x8)
// ScriptStruct WTL.WTLClothesItemData
struct FWTLClothesItemData : public FTableRowBase
{
public:
	enum class EWTLClothesType                   Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MasterClothesID;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CopyParametersFromMasterClothes;                   // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLArmorClass                    ArmorClass;                                        // 0x5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ArmorMin;                                          // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorMax;                                          // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HaveFrontPlate;                                    // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AcceptableFrontPlates;                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         HaveBackPlate;                                     // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AcceptableBackPlates;                              // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MonsterArmorMultiplier;                            // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConditionDelta;                                    // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CoverArms;                                         // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmsArmorMultiplier;                               // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HidesBackpackStraps;                               // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HidesBackpack;                                     // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReplaceBodyPart;                                   // 0xB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedLongPants;                                     // 0xB3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClothesTorsoMeshVariant       TorsoMeshVariant;                                  // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FactionTechnologiesLevel;                          // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLItemClassRequirement>      RPGClassRequirements;                              // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRepairExperience;                               // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BasePrice;                                         // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             InventoryIcon;                                     // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StoreIcon;                                         // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeStoreIcon;                                    // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLClothesPickup>       ItemPickupClass;                                   // 0x158(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          MaleCharacterBodyMesh;                             // 0x180(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          FemaleCharacterBodyMesh;                           // 0x1A8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          MaleCharacterBodyMeshVariant1;                     // 0x1D0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          FemaleCharacterBodyMeshVariant1;                   // 0x1F8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            CharacterClothesPreviewMesh;                       // 0x220(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeCustomized;                                   // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeCamouflaged;                                  // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnCommission;                           // 0x24A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeViewedThroughPreviewMeshesList;               // 0x24B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemPreviewLightIntensity;                         // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanTransferToSteam;                                // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamMarketID;                                     // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct WTL.WTLWeaponAttachmentInstallInfo
struct FWTLWeaponAttachmentInstallInfo
{
public:
	struct FVector                               AimingOffset;                                      // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AimingHandsOffsetMale;                             // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AimingHandsOffsetFemale;                           // 0x18(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachmentOffset;                                  // 0x30(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            MountMesh;                                         // 0x60(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MountOffset;                                       // 0x90(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5E0 (0x5E8 - 0x8)
// ScriptStruct WTL.WTLStuffItemData
struct FWTLStuffItemData : public FTableRowBase
{
public:
	enum class EWTLStuffType                     Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MasterStuffID;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CopyParametersFromMasterStuff;                     // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Condition;                                         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConditionDelta;                                    // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CanBeRepairedWithItems;                            // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRepairExperience;                               // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MustBeenFactionMember;                             // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x85(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FactionTechnologiesLevel;                          // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLItemClassRequirement>      RPGClassRequirements;                              // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        BasePrice;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWTLStuff>               BlueprintClass;                                    // 0xA8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             InventoryIcon;                                     // 0xD0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StoreIcon;                                         // 0xF8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeStoreIcon;                                    // 0x120(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLStuffPickup>         ItemPickupClass;                                   // 0x148(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ScopeFrameTexture;                                 // 0x170(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ScopeReticleTexture;                               // 0x198(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ScopeOpticalTrashTexture;                          // 0x1C0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ScopeReticleColorMaskTexture;                      // 0x1E8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScopeOverlayScale;                                 // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasReticleIllumination;                            // 0x214(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReticleIsAlwaysIlluminated;                        // 0x215(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReticleIlluminationColor;                          // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            WeaponAttachmentMesh;                              // 0x228(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLWeaponAttachmentType          WeaponAttachmentType;                              // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeaponAttachmentZoom;                              // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FlareRelativeOffset;                               // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponAttachmentRecoilMultiplier;                  // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponAttachmentDamageMultiplier;                  // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponAttachmentAccuracyMultiplier;                // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint16, struct FWTLWeaponAttachmentInstallInfo> WeaponInstallInfo;                                 // 0x270(0x50)(Edit, NativeAccessSpecifierPublic)
	int32                                        MaxEnergy;                                         // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialEnergy;                                     // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnergyConsumptionPerSecond;                        // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnergyConsumptionPerUse;                           // 0x2CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnergyRegenerationPerSecond;                       // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnergyRegenerationDelay;                           // 0x2D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CanBeChargedWithItems;                             // 0x2D8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DamageMin;                                         // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageMax;                                         // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMin;                                  // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMax;                                  // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaPerUse;                                     // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MiningMultiplier;                                  // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            PreviewPointerMesh;                                // 0x300(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlacementAngleLimit;                               // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlacementRange;                                    // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnlyOnLandscape;                        // 0x330(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedInSafeZone;                             // 0x331(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnlyAtNight;                            // 0x332(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlacementTime;                                     // 0x334(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLPlaceableStuff>      PlacementActorClass;                               // 0x338(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSpecialPlacementStuff;                          // 0x360(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlacementShapeExtendMultiplier;                    // 0x364(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBePlacedOnlyInStuffPlacementZone;              // 0x368(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLWeaponType                    ModificationWeaponType;                            // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModificationData;                                  // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnCommission;                           // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLEquipmentType                 EquipmentType;                                     // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             ActivationSoundEvent;                              // 0x388(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DeactivationSoundEvent;                            // 0x3B0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          EquipmentMeshMale;                                 // 0x3D8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          EquipmentMeshFemale;                               // 0x400(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedHideGlasses;                                   // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EWTLCharacterClass, struct FTransform> MalePreviewItemTransform;                          // 0x430(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class EWTLCharacterClass, struct FTransform> FemalePreviewItemTransform;                        // 0x480(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLVehiclePawn>         Vehicle;                                           // 0x4D0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            ItemPreviewMesh;                                   // 0x4F8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemPreviewLightIntensity;                         // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeUsedInSafeZone;                               // 0x524(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWTLDrone>               Drone;                                             // 0x528(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DroneCameraScreenID;                               // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            DronePreviewMesh;                                  // 0x558(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    DronePreviewOffsets;                               // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           SprayCanWeaponModification;                        // 0x590(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         CanTransferToSteam;                                // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamMarketID;                                     // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLMedicineEffect
struct FWTLMedicineEffect
{
public:
	enum class EWTLMedicineEffectParameter       Parameter;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPermanent;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ValueCurve;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x188 - 0x8)
// ScriptStruct WTL.WTLMedicineItemData
struct FWTLMedicineItemData : public FTableRowBase
{
public:
	enum class EWTLMedicineType                  Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLMedicineEffect>            Effects;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterEffectInfluence>  CharacterEffectsInfluence;                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x60(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Validity;                                          // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExperienceDeltaPerUse;                             // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FactionTechnologiesLevel;                          // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLItemClassRequirement>      RPGClassRequirements;                              // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        BasePrice;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             InventoryIcon;                                     // 0xA8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StoreIcon;                                         // 0xD0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeStoreIcon;                                    // 0xF8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLMedicinePickup>      ItemPickupClass;                                   // 0x120(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeUnited;                                       // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             UseSoundEvent;                                     // 0x150(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDuration;                                     // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnCommission;                           // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanTransferToSteam;                                // 0x17D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamMarketID;                                     // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLPenetrationCapability
struct FWTLPenetrationCapability
{
public:
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSize;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVelocity;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityPercentDeltaPerUnit;                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F8 - 0x8)
// ScriptStruct WTL.WTLAmmoItemData
struct FWTLAmmoItemData : public FTableRowBase
{
public:
	enum class EWTLAmmoType                      Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCaliber                       Caliber;                                           // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                TypeName;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MasterAmmoID;                                      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CopyParametersFromMasterAmmo;                      // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x6D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FactionTechonologiesLevel;                         // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageMin;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageMax;                                         // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMin;                                  // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMax;                                  // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PVPDamageMultiplier;                               // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PVEDamageMultiplier;                               // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RobotDamageMultiplier;                             // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PVPArmorPiercingMultiplier;                        // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PVEArmorPiercingMultiplier;                        // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RobotArmorPiercingMultiplier;                      // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Accuracy;                                          // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialVelocity;                                   // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DestroyVelocity;                                   // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhysicsImpulse;                                    // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RagdollImpulse;                                    // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLPenetrationCapability>     PenetrationCapabilities;                           // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EWTLAmmoProjectileType            ProjectileType;                                    // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ProjectileCount;                                   // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWTLProjectile>          ProjectileClass;                                   // 0xD0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           VelocityCurve;                                     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           GravityCurve;                                      // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseReliableHitEvent;                               // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseReliableRicochetEvent;                          // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConditionDeltaMultiplier;                          // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnTracer;                                       // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnTracerChance;                                 // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnTracerOffset;                                 // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWTLBulletTracer>        TracerClass;                                       // 0x120(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BasePrice;                                         // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             InventoryIcon;                                     // 0x150(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StoreIcon;                                         // 0x178(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeStoreIcon;                                    // 0x1A0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLAmmoPickup>          ItemPickupClass;                                   // 0x1C8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeUnited;                                       // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnCommission;                           // 0x1F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanTransferToSteam;                                // 0x1F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamMarketID;                                     // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F8 (0x200 - 0x8)
// ScriptStruct WTL.WTLWeaponItemData
struct FWTLWeaponItemData : public FTableRowBase
{
public:
	enum class EWTLWeaponType                    Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCaliber                       Caliber;                                           // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        MagazineCapacity;                                  // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DamageMin;                                         // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageMax;                                         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMin;                                  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMax;                                  // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalHitChanceMultiplier;                       // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseAmmoID;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Accuracy;                                          // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EffectiveRange;                                    // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConditionDelta;                                    // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OpticsConditionDeltaMultiplier;                    // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRepairExperience;                               // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FactionTechonologiesLevel;                         // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLItemClassRequirement>      RPGClassRequirements;                              // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        BasePrice;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWTLWeapon>              BlueprintClass;                                    // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             InventoryIcon;                                     // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StoreIcon;                                         // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeStoreIcon;                                    // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             KillsStatsIcon;                                    // 0x158(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWTLWeaponPickup>        ItemPickupClass;                                   // 0x180(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            CharacterWeaponPreviewMesh;                        // 0x1A8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    CharacterWeaponPreviewOffsets;                     // 0x1D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CanBeCustomized;                                   // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBePlacedOnCommission;                           // 0x1E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeViewedThroughPreviewMeshesList;               // 0x1E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2900[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ItemPreviewLightIntensity;                         // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MasterWeaponID;                                    // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CopyParametersFromMasterWeapon;                    // 0x1EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseWeaponInstallInfoForMasterWeapon;               // 0x1ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2901[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExperienceMultiplier;                              // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSteamMarketable;                                 // 0x1F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanTransferToSteam;                                // 0x1F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2902[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SteamMarketID;                                     // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2903[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLAICharacterDeathData
struct FWTLAICharacterDeathData
{
public:
	bool                                         IsBustServer;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PercentDamage;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2904[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               VectorDamage;                                      // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmmoPhysicsImpulse;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KillingDamage;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DirectionDeathID;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ProjectileCount;                                   // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2905[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct WTL.WTLMonsterAction
struct FWTLMonsterAction
{
public:
	bool                                         bUseParticleSystem;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2906[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UParticleSystem>        ParticleSystem;                                    // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ParticleSystemLocationOffset;                      // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ParticleSystemRotationOffset;                      // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ParticleSystemScale;                               // 0x48(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParticleSystemSocketName;                          // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachParticleSystemToSocket;                     // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSound;                                         // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2907[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USoundBase>             SoundToPlay;                                       // 0x60(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             SoundEventToPlay;                                  // 0x88(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SoundVolumeMultiplier;                             // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SoundLocationOffset;                               // 0xB4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SoundSocketName;                                   // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachSoundToSocket;                              // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCameraShake;                                   // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2908[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EpicentreLocationOffset;                           // 0xCC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EpicentreRadius;                                   // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShakeStrengthMultiplier;                           // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EpicentreSocketName;                               // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UMatineeCameraShake>     CameraShakeToPlay;                                 // 0xE8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLRadioTeleportPlace
struct FWTLRadioTeleportPlace
{
public:
	int32                                        LocationID;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PortalID;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLArenaReward
struct FWTLArenaReward
{
public:
	int32                                        Score;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootBoxID;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyReward;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct WTL.WTLBallisticsProjectileData
struct FWTLBallisticsProjectileData
{
public:
	class AWTLCharacter*                         Character;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWTLRangedWeapon*                      Weapon;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       WeaponID;                                          // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2909[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       AmmoID;                                            // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290A[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDateTime                             SpawnTime;                                         // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileLifeTime;                                // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousPosition;                                  // 0x6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurrentPosition;                                   // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentVelocity;                                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HitCount;                                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VelocityPenalty;                                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TracerID;                                          // 0x90(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FirstIteration;                                    // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveFlag;                                        // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290D[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLBallisticsActorPositionData
struct FWTLBallisticsActorPositionData
{
public:
	uint64                                       ServerTime;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.SkelMeshMergeSectionMapping_BP
struct FSkelMeshMergeSectionMapping_BP
{
public:
	TArray<int32>                                SectionIDs;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.SkelMeshMergeUVTransform
struct FSkelMeshMergeUVTransform
{
public:
	TArray<struct FTransform>                    UVTransforms;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.SkelMeshMergeUVTransformMapping
struct FSkelMeshMergeUVTransformMapping
{
public:
	TArray<struct FSkelMeshMergeUVTransform>     UVTransformsPerMesh;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.SkeletalMeshMergeParams
struct FSkeletalMeshMergeParams
{
public:
	TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 MeshesToMerge;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StripTopLODS;                                      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNeedsCpuAccess : 1;                               // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkeletonBefore : 1;                               // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_189 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2912[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeleton*                             Skeleton;                                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLMonsterBurst
struct FWTLMonsterBurst
{
public:
	bool                                         IsBurst;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PercentDamageBurst;                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2913[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TakeDamageBurst;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevelBurst;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevelBurst;                                     // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2914[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLMaterialSpriteElement
struct FWTLMaterialSpriteElement
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DistanceToOpacityCurve;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSizeIsInScreenSpace : 1;                          // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_18A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2915[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseSizeX;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseSizeY;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2916[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DistanceToSizeCurve;                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLDisplayAnimationSet
struct FWTLDisplayAnimationSet
{
public:
	enum class EWTLDisplayInputType              InputType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2917[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputDirection;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ItemMontage;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          PawnMontage;                                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationRate;                                     // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2918[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLCameraLimits
struct FWTLCameraLimits
{
public:
	float                                        YawLimit;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMinLimit;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMaxLimit;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLIngredientItemConsumeInfo
struct FWTLIngredientItemConsumeInfo
{
public:
	int32                                        CraftRecipeID;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2919[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             LastConsumeTime;                                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x770 - 0x760)
// ScriptStruct WTL.WTLCharacterAnimInstanceProxy
struct FWTLCharacterAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	bool                                         bIsTestPassed;                                     // 0x760(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291B[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct WTL.WTLMarkerMemoryElement
struct FWTLMarkerMemoryElement
{
public:
	float                                        MemoryValue;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   WorldPosition;                                     // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291C[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWTLMarkerType                    MarkerType;                                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLIdentificationMemoryElement
struct FWTLIdentificationMemoryElement
{
public:
	float                                        MemoryValue;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastZDistance[0x3];                                // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisibleInThisFrame;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipInThisFrame;                                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291E[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.WTLIdentificationCache
struct FWTLIdentificationCache
{
public:
	uint8                                        IdentificationClassID;                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActorLocation;                                     // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               IdentificationLocation;                            // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Condition;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Energy;                                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2921[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        State;                                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2922[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLCheckpointState
struct FWTLCheckpointState
{
public:
	enum class EWTLFaction                       ControlFaction;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2923[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastHackTime;                                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             TimeTillNextHack;                                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLIntruderInfo
struct FWTLIntruderInfo
{
public:
	uint64                                       CharacterID;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsKilled;                                         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLethal;                                         // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2925[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct WTL.WTLBackButtonAction
struct FWTLBackButtonAction
{
public:
	enum class EWTLBackButtonActionType          Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2926[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLStoreItem                         StoreItemData;                                     // 0x8(0x108)(Edit, NativeAccessSpecifierPublic)
	class UWTLCommonStoreItem*                   StoreItem;                                         // 0x110(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLStoreItemTagMatchCount
struct FWTLStoreItemTagMatchCount
{
public:
	class UWTLCommonStoreItem*                   StoreItem;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TagMatchCount;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2927[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLDroneMarker
struct FWTLDroneMarker
{
public:
	uint8                                        Pad_2928[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLNotificationForAction
struct FWTLNotificationForAction
{
public:
	float                                        Timeline;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionName;                                        // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDone;                                            // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2929[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WTL.WTLControlledMonsterActionBase
struct FWTLControlledMonsterActionBase
{
public:
	bool                                         ExecutedWithoutAnimation;                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLNotificationForAction>     NotificationList;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInterrupted;                                     // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRotateToSpringArm;                               // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAdditive;                                        // 0x26(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUseServerSideAnimations;                         // 0x27(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             AbilityIcon;                                       // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyName;                                           // 0x58(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLDeminingCombinations
struct FWTLDeminingCombinations
{
public:
	float                                        TotalTime;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Combinations;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLSenseEventInfo
struct FWTLSenseEventInfo
{
public:
	uint8                                        Pad_292D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                EventInstigator;                                   // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Time;                                              // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLTaggedSenseEventInfo
struct FWTLTaggedSenseEventInfo : public FWTLSenseEventInfo
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLFootstepSettings
struct FWTLFootstepSettings
{
public:
	float                                        WalkFootstepMinInterval;                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintFootstepMinInterval;                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchFootstepMinInterval;                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E (0x1E - 0x0)
// ScriptStruct WTL.WTLEnemyCurrentState
struct FWTLEnemyCurrentState
{
public:
	uint16                                       EnemyTypeID;                                       // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       HeadClothesItemTypeID;                             // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TorsoClothesItemTypeID;                            // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       LegsClothesItemTypeID;                             // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FeetClothesItemTypeID;                             // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FrontPlateTypeID;                                  // 0xA(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       BackPlateTypeID;                                   // 0xC(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       WeaponItemTypeID;                                  // 0xE(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       AmmoTypeID;                                        // 0x10(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HeadCustomizationIndex;                            // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TorsoCustomizationIndex;                           // 0x13(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LegsCustomizationIndex;                            // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FeetCustomizationIndex;                            // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FirstNameIndex;                                    // 0x16(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       LastNameIndex;                                     // 0x18(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLAITeam                        Team;                                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        VoiceType;                                         // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct WTL.WTLEnemyNPCSpawnerRecord
struct FWTLEnemyNPCSpawnerRecord
{
public:
	TSoftClassPtr<class AWTLEnemyNPC>            EnemyNPC;                                          // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2930[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLEventItemReward
struct FWTLEventItemReward
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2931[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2934[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpecialItemGroup;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2935[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLEventTask
struct FWTLEventTask
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        NeedValue;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentValue;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLFishingCharacterHistory
struct FWTLFishingCharacterHistory
{
public:
	uint64                                       CharacterID;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SuccessTakeCount;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2937[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             FishingTimeStart;                                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLFishingCharacter
struct FWTLFishingCharacter
{
public:
	class AWTLCharacter*                         Character;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLItem                              CurrentBait;                                       // 0x8(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FDateTime                             NextBiteTime;                                      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentFishIndex;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CurrentQTEDifficulty;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CurrentQTEErrorsCount;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2938[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLFortificationReward
struct FWTLFortificationReward
{
public:
	int32                                        Score;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootBoxID;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyReward;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct WTL.WTLMarkerInfo
struct FWTLMarkerInfo
{
public:
	enum class EWTLMarkerType                    Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2939[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             MarkerTexture;                                     // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                IconColor;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                TextColor;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AdditionalScale;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeTime;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            AlphaCurve;                                        // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct WTL.WTLKnifeImpactEffect
struct FWTLKnifeImpactEffect
{
public:
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UParticleSystem>        ParticleSystem;                                    // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             SoundEvent;                                        // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             HitDecals;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               HitDecalScale;                                     // 0x68(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitDecalLifeSpan;                                  // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1688 (0x1688 - 0x0)
// ScriptStruct WTL.WTLVoiceDataPacket
struct FWTLVoiceDataPacket
{
public:
	struct FDateTime                             ReceiveTime;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Data[0x1680];                                      // 0x8(0x1680)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLCharacterDamageEffect
struct FWTLCharacterDamageEffect
{
public:
	TSoftObjectPtr<class UFMODEvent>             SoundEvent;                                        // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthPercent;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WTL.WTLBulletFlyNearEffect
struct FWTLBulletFlyNearEffect
{
public:
	enum class EWTLCaliber                       Caliber;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             FlyNearSoundEvent;                                 // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             CharacterFearSoundEvent;                           // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FringeAmount;                                      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VingetteAmount;                                    // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct WTL.WTLFootstepEffect
struct FWTLFootstepEffect
{
public:
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             SoundEvent;                                        // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             AlternativeSoundEvent;                             // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        ParticleSystem;                                    // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct WTL.WTLBulletImpactEffect
struct FWTLBulletImpactEffect
{
public:
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UParticleSystem>        ParticleSystem;                                    // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             SoundEvent;                                        // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             HitDecals;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               HitDecalScale;                                     // 0x68(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitDecalLifeSpan;                                  // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             RicochetDecals;                                    // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               RicochetDecalScale;                                // 0x88(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetDecalLifeSpan;                             // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.RespawnQueryElement
struct FRespawnQueryElement
{
public:
	struct FDateTime                             RespawnTime;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLLootBoxTypeImage
struct FWTLLootBoxTypeImage
{
public:
	enum class EWTLLootBoxType                   Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2940[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLCharacterClass
struct FWTLCharacterClass
{
public:
	enum class EWTLCharacterClass                Class;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2941[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             FemaleTexture;                                     // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             MaleTexture;                                       // 0x30(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLQuestFactionSetting
struct FWTLQuestFactionSetting
{
public:
	struct FSlateColor                           FactionNameColor;                                  // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             FactionTexture;                                    // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLServerEventTypeColor
struct FWTLServerEventTypeColor
{
public:
	enum class EWTLServerEventType               Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2942[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLInteractivePlanSpawnFieldPoint
struct FWTLInteractivePlanSpawnFieldPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLHitPointInfo
struct FWTLHitPointInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLInteractivePlantSpawnInfo
struct FWTLInteractivePlantSpawnInfo
{
public:
	int32                                        MaxCount;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLPickupSpawnPointScalabilitySettings
struct FWTLPickupSpawnPointScalabilitySettings
{
public:
	uint8                                        bUseScalabilitySettings : 1;                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_18B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2943[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitialMaxCount;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialCountLimit;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCountDeltaPerPlayer;                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CountLimitDeltaPerPlayer;                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLLocalizationCacheRecord
struct FWTLLocalizationCacheRecord
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLJunkMachineItemsData
struct FWTLJunkMachineItemsData
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2944[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2945[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLJunkMachineBundleData
struct FWTLJunkMachineBundleData
{
public:
	TArray<struct FWTLJunkMachineItemsData>      Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalChanceValue;                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLDelayedSpawnActorInfo
struct FWTLDelayedSpawnActorInfo
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x4(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  ActorToSpawn;                                      // 0x10(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Instigator;                                        // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Owner;                                             // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLDelayedDamageInfo
struct FWTLDelayedDamageInfo
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageValue;                                       // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        IgnoredActors;                                     // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AWTLPlayerController*                  Instigator;                                        // 0x28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  ActorToSpawn;                                      // 0x30(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x54 (0x54 - 0x0)
// ScriptStruct WTL.WTLChunk
struct FWTLChunk
{
public:
	struct FIntVector                            Position;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         StateUpdate;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Map[0x40];                                         // 0x11(0x40)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2946[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLMiningSpotResource
struct FWTLMiningSpotResource
{
public:
	uint16                                       ResourceID;                                        // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2947[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MiningChance;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapacityCostPerUnit;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinMiningExperience;                               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLQuestMiningChance
struct FWTLQuestMiningChance
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CompleteQuestOnSuccess;                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2948[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLMiningZoneItem
struct FWTLMiningZoneItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2949[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalMiningChance;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLQuestMiningChance>         QuestMiningChances;                                // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinSignalPower;                                    // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapacityCostPerUnit;                               // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeDetectedWithNDPDetector;                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeDetectedWithMetalDetector;                    // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLMissileWeaponBeamSection
struct FWTLMissileWeaponBeamSection
{
public:
	int32                                        TrajectoryID;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ParticleComponent;                                 // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct WTL.WTLMonsterDeathData
struct FWTLMonsterDeathData
{
public:
	bool                                         IsBustServer;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PercentDamage;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               VectorDamage;                                      // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmmoPhysicsImpulse;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KillingDamage;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DirectionDeathID;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ProjectileCount;                                   // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LifeSpan;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLMonsterActionBase
struct FWTLMonsterActionBase
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBlockingMovement;                                // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInterrupted;                                     // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAdditive;                                        // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUseServerSideAnimations;                         // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2952[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             AbilityIcon;                                       // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLControlledActionKeyType       ActionKey;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2955[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct WTL.WTLMonstersDataForSpawnBase
struct FWTLMonstersDataForSpawnBase
{
public:
	TArray<TSubclassOf<class AWTLMonsterPawn>>   SpawnClass;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        LifeTimeMonster;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRandomSelectionClass;                            // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2956[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CountOfActiveMonsters;                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntervalSpawn;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2957[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnRadius;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLimitMonsterSpawning;                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2958[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MonstersLimit;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeTimeSpawn;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2959[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct WTL.WTLNPCFactionClothesInfo
struct FWTLNPCFactionClothesInfo
{
public:
	TSoftObjectPtr<class USkeletalMesh>          HeadMesh;                                          // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          HeadSlotMesh;                                      // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          TorsoMesh;                                         // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          TorsoSlotMesh;                                     // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LegsMesh;                                          // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LegsSlotMesh;                                      // 0xC8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          FeetMesh;                                          // 0xF0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          FeetSlotMesh;                                      // 0x118(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLNPCAnimationInfo
struct FWTLNPCAnimationInfo
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendIn;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOut;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeoutToPlayingNextMontage;                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeoutToPlayingNextMontage;                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedToTurnHeadToCharacter;                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLNPCSupplyItem
struct FWTLNPCSupplyItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BasePriceMultiplier;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExperienceMultiplier;                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLNPCSupply
struct FWTLNPCSupply
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredQuestStates;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLNPCSupplyItem>             Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SupplyListReplicaID;                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLNPCIdleAnimation
struct FWTLNPCIdleAnimation
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinChangeDelay;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxChangeDelay;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLReplicaNPCTakeCompleteQuest
struct FWTLReplicaNPCTakeCompleteQuest
{
public:
	int32                                        NPCReplicaIDTakeQuest;                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCReplicaIDCompleteQuest;                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CharacterReplicaIDTakeQuest;                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                CharacterReplicaIDCompleteQuest;                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLReplicaGreetingNpcFromStateQuest
struct FWTLReplicaGreetingNpcFromStateQuest
{
public:
	int32                                        NPCReplicaIDQuestNone;                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2960[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CharacterReplicaIDQuestNone;                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NPCReplicaIDQuestInProgress;                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2961[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CharacterReplicaIDQuestInProgress;                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NPCReplicaIDQuestComplete;                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2962[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CharacterReplicaIDQuestComplete;                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLQuestDialogReplicaInfo
struct FWTLQuestDialogReplicaInfo
{
public:
	int32                                        CharacterReplicaID;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCReplicaID;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CharacterReplyReplicaArray;                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Exec;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLQuestConditionToExecute
struct FWTLQuestConditionToExecute
{
public:
	int32                                        NeedSlots;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCReplicaIDSlot;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CharacterReplicaArraySlot;                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NeedWeight;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCReplicaIDWeight;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CharacterReplicaArrayWeight;                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NeedMoney;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCReplicaIDMoney;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CharacterReplicaArrayMoney;                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct WTL.WTLQuestReplicas
struct FWTLQuestReplicas
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InfoReplicaID;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DescriptionReplicaID;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterReplicaID;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DescriptionReplicaIDRepeatable;                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterReplicaIDRepeatable;                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TakeReplicaID;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLNPCReplicaAction              ActionTakeQuest;                                   // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2963[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CompleteReplicaID;                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLNPCReplicaAction              ActionCompleteQuest;                               // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2964[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CancelReplicaID;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLNPCReplicaAction              ActionRejectQuest;                                 // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2965[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLReplicaNPCTakeCompleteQuest       ReplicaNPCTakeCompleteQuest;                       // 0x30(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLReplicaGreetingNpcFromStateQuest  ReplicaGreetingNpcFromStateQuest;                  // 0x58(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWTLNPCReplicaAction              ActionGreetingCanTakeQuest;                        // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLNPCReplicaAction              ActionGreetingQuestInProgress;                     // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLNPCReplicaAction              ActionGreetingCanCompleteQuest;                    // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLNPCReplicaAction              ActionGreetingCanReTakeQuest;                      // 0xA3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2966[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestDialogReplicaInfo>    DialogReplicaArray;                                // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FWTLQuestConditionToExecute           QuestConditionToExecute;                           // 0xB8(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct WTL.WTLSteamItemInfo
struct FWTLSteamItemInfo
{
public:
	uint64                                       Accountid;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ItemId;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Quantity;                                          // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2967[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Originalitemid;                                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Itemdefid;                                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Appid;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2968[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Acquired;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                State;                                             // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Origin;                                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                State_changed_timestamp;                           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLSteamInventoryRequest
struct FWTLSteamInventoryRequest
{
public:
	uint64                                       SteamID;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       RequestID;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ItemId;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Itemdefid;                                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLTakeItemInfo
struct FWTLTakeItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLReplica
struct FWTLReplica
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLQuestInfo
struct FWTLQuestInfo
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterCanTakeCompleteQuest CanTakeCompleteQuest;                              // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x770 (0x770 - 0x0)
// ScriptStruct WTL.WTLPDACustomization
struct FWTLPDACustomization
{
public:
	class UTexture2D*                            BackgroundImage;                                   // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ButtonUPStyle;                                     // 0x8(0x278)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ButtonDownStyle;                                   // 0x280(0x278)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ButtonCircleStyle;                                 // 0x4F8(0x278)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLPDASkillConnectorData
struct FWTLPDASkillConnectorData
{
public:
	TArray<int32>                                SkillIDs;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          BorderNames;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLMapCacheMonster
struct FWTLMapCacheMonster
{
public:
	class AWTLMonsterPawn*                       Monster;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MonsterID;                                         // 0x18(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct WTL.WTLMapCacheCharacter
struct FWTLMapCacheCharacter
{
public:
	class AWTLCharacter*                         Character;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanID;                                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct WTL.WTLMapCacheData
struct FWTLMapCacheData
{
public:
	uint8                                        Pad_2970[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWTLPortal*>                    M_Portals;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_PortalsTime;                                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AWTLWaterSource*>               M_WaterSources;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_WaterSourcesTime;                                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AWTLNPCActor*>                  M_NPCs;                                            // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_NPCsTime;                                        // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AWTLFortificationCommandCore*>  M_FortificationCommandCores;                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_FortificationCommandCoresTime;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AWTLBulletinBoard*>             M_BulletinBoards;                                  // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_BulletinBoardsTime;                              // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AWTLEventPoint*>                M_EventPoints;                                     // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_EventPointsTime;                                 // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AWTLSafeZone*>                  M_SafeZones;                                       // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_SafeZonesTime;                                   // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FWTLMapCacheMonster>           M_Monsters;                                        // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_MonstersTime;                                    // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_MonstersLocation;                                // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2971[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLMapCacheCharacter>         M_Characters;                                      // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FDateTime                             M_CharactersTime;                                  // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_CharactersLocation;                              // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2972[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLDamageActorInfo
struct FWTLDamageActorInfo
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Critical;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2973[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLCharacterInventoryDeltaRecord
struct FWTLCharacterInventoryDeltaRecord
{
public:
	uint8                                        RecordType;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2974[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ItemData;                                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLMaterialPackedParameters
struct FWTLMaterialPackedParameters
{
public:
	struct FColor                                Color0;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color1;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color2;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color3;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Scalar0;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Scalar1;                                           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Scalar2;                                           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Scalar3;                                           // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.WTLCharacterCustomizationPackedRecord
struct FWTLCharacterCustomizationPackedRecord
{
public:
	enum class EWTLCharacterCustomizationPart    PartType;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2975[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       PartID;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLMaterialPackedParameters          MaterialParameters0;                               // 0x4(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLMaterialPackedParameters          MaterialParameters1;                               // 0x18(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLMaterialPackedParameters          MaterialParameters2;                               // 0x2C(0x14)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct WTL.WTLFastAccessSlotItemInfo_FastArraySerializerItem
struct FWTLFastAccessSlotItemInfo_FastArraySerializerItem : public FFastArraySerializerItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2976[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0xE(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ScopeAttachmentTypeID;                             // 0x10(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FlashlightAttachmentTypeID;                        // 0x12(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MuzzleAttachmentTypeID;                            // 0x14(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x16(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x17(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct WTL.WTLFastAccessSlotItemInfoArray
struct FWTLFastAccessSlotItemInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FWTLFastAccessSlotItemInfo_FastArraySerializerItem> Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x14 - 0xC)
// ScriptStruct WTL.WTLCharacterItemExperience_FastArraySerializerItem
struct FWTLCharacterItemExperience_FastArraySerializerItem : public FFastArraySerializerItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2977[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0xE(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Experience;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct WTL.WTLCharacterItemExperienceFastArray
struct FWTLCharacterItemExperienceFastArray : public FFastArraySerializer
{
public:
	TArray<struct FWTLCharacterItemExperience_FastArraySerializerItem> Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x28 - 0xC)
// ScriptStruct WTL.WTLCharacterQuestState_FastArraySerializerItem
struct FWTLCharacterQuestState_FastArraySerializerItem : public FFastArraySerializerItem
{
public:
	uint32                                       QuestID;                                           // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLQuestState                    State;                                             // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress1;                                         // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress2;                                         // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress3;                                         // 0x13(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress4;                                         // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2979[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          LastChangeDate;                                    // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x118 - 0x108)
// ScriptStruct WTL.WTLCharacterQuestStateArray
struct FWTLCharacterQuestStateArray : public FFastArraySerializer
{
public:
	TArray<struct FWTLCharacterQuestState_FastArraySerializerItem> Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x14 - 0xC)
// ScriptStruct WTL.WTLCharacterEffect_FastArraySerializerItem
struct FWTLCharacterEffect_FastArraySerializerItem : public FFastArraySerializerItem
{
public:
	enum class EWTLCharacterEffectType           Type;                                              // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct WTL.WTLCharacterEffectArray
struct FWTLCharacterEffectArray : public FFastArraySerializer
{
public:
	TArray<struct FWTLCharacterEffect_FastArraySerializerItem> Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x38 - 0xC)
// ScriptStruct WTL.WTLDeprecatedCharacterMapMarker_FastArraySerializerItem
struct FWTLDeprecatedCharacterMapMarker_FastArraySerializerItem : public FFastArraySerializerItem
{
public:
	uint32                                       LocationID;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Type;                                              // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowOnMinimap;                                     // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x118 - 0x108)
// ScriptStruct WTL.WTLCharacterMapMarkerArray
struct FWTLCharacterMapMarkerArray : public FFastArraySerializer
{
public:
	TArray<struct FWTLDeprecatedCharacterMapMarker_FastArraySerializerItem> Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLStimulatorEffect
struct FWTLStimulatorEffect
{
public:
	TArray<struct FWTLMedicineEffect>            MedicineEffects;                                   // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterEffectInfluence>  CharacterEffects;                                  // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLPortalStationRequest
struct FWTLPortalStationRequest
{
public:
	int32                                        WayIndex;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSpan;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLPortalStationWay
struct FWTLPortalStationWay
{
public:
	int32                                        LocationID;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PortalID;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         RouteIsAvailable;                                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinCharacterLevel;                                 // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxCharacterLevel;                                 // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnergyConsumptionMultiplier;                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLDedicatedServerMessage
struct FWTLDedicatedServerMessage : public FWTLPacket
{
public:
	uint32                                       LocationID;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2981[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MessageType;                                       // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MessageData;                                       // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x70 - 0x28)
// ScriptStruct WTL.WTLSentMailPackageRecord
struct FWTLSentMailPackageRecord : public FWTLPacket
{
public:
	class FString                                ToCharacterName;                                   // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          MailDate;                                          // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          FactDeliveryDate;                                  // 0x40(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLMailPackageDeliveryType       DeliveryType;                                      // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2984[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       TotalWeight;                                       // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalPrice;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2985[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MessageText;                                       // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLMailPackageState              State;                                             // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2986[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLSentMailMessages
struct FWTLSentMailMessages : public FWTLPacket
{
public:
	TArray<struct FWTLSentMailPackageRecord>     Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLFactionLeaderborRecord
struct FWTLFactionLeaderborRecord : public FWTLPacket
{
public:
	uint8                                        Position;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2987[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                CharacterClass;                                    // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLSex                           Sex;                                               // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2988[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ClanID;                                            // 0x4C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2989[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Score;                                             // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        TotalScore;                                        // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLFactionLeaderborData
struct FWTLFactionLeaderborData : public FWTLPacket
{
public:
	enum class EWTLFaction                       Faction;                                           // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Type;                                              // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLFactionLeaderborRecord>    Items;                                             // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLEACMessage
struct FWTLEACMessage : public FWTLPacket
{
public:
	uint8                                        Pad_298B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLBuyCreditsInfo
struct FWTLBuyCreditsInfo : public FWTLPacket
{
public:
	uint64                                       StoreItemID;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Currency;                                          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x138 - 0x28)
// ScriptStruct WTL.WTLClanInfo
struct FWTLClanInfo : public FWTLPacket
{
public:
	uint16                                       ID;                                                // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MemberCount;                                       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CandidateCount;                                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeaderName;                                        // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StewardName;                                       // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Reputation;                                        // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Score;                                             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PVPScore;                                          // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PVEScore;                                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftScore;                                        // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TechnologyScore;                                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2991[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Skills;                                            // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2992[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLClanList
struct FWTLClanList : public FWTLPacket
{
public:
	TArray<struct FWTLClanInfo>                  Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct WTL.WTLClanPapameters
struct FWTLClanPapameters
{
public:
	uint8                                        Pad_2993[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLAccountCreditsChange
struct FWTLAccountCreditsChange : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreditsAmount;                                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2994[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Info;                                              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLActivateCodeResult
struct FWTLActivateCodeResult : public FWTLPacket
{
public:
	bool                                         Success;                                           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2995[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Code;                                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentBalance;                                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2996[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLInAppBuyResult
struct FWTLInAppBuyResult : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2998[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Info;                                              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentBalance;                                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2999[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          PremiumEndTime;                                    // 0x50(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CharacterSlotCount;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLStoreItemList
struct FWTLStoreItemList : public FWTLPacket
{
public:
	TArray<struct FWTLStoreItem>                 Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLPutItemToAccountInventoryCommitRequest
struct FWTLPutItemToAccountInventoryCommitRequest : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       AccountInventoryID;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLPutItemToAccountInventoryResult
struct FWTLPutItemToAccountInventoryResult : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       AccountInventoryID;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x98 - 0x28)
// ScriptStruct WTL.WTLPutItemToAccountInventoryRequest
struct FWTLPutItemToAccountInventoryRequest : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLAccountInventoryItem              Item;                                              // 0x40(0x58)(NativeAccessSpecifierPublic)
};

// 0x68 (0x90 - 0x28)
// ScriptStruct WTL.WTLGetItemFromAccountInventoryResult
struct FWTLGetItemFromAccountInventoryResult : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLAccountInventoryItem              Item;                                              // 0x38(0x58)(NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLGetItemFromAccountInventoryInfo
struct FWTLGetItemFromAccountInventoryInfo : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       AccountInventoryID;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLAccountInventoryItemList
struct FWTLAccountInventoryItemList : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLAccountInventoryItem>      Items;                                             // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x68 - 0x28)
// ScriptStruct WTL.WTLSteamInventoryItemDefinition
struct FWTLSteamInventoryItemDefinition : public FWTLPacket
{
public:
	uint64                                       Itemdefid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyAmount;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreditsAmount;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x3A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLSteamInventoryItemList
struct FWTLSteamInventoryItemList : public FWTLPacket
{
public:
	TArray<struct FWTLSteamInventoryItemDefinition> Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLClanScoreStatisticsRecord
struct FWTLClanScoreStatisticsRecord : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PVPScore;                                          // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PVEScore;                                          // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftScore;                                        // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TechnologyScore;                                   // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLClanScoreStatistics
struct FWTLClanScoreStatistics : public FWTLPacket
{
public:
	TArray<struct FWTLClanScoreStatisticsRecord> Records;                                           // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLDateTimePeriod
struct FWTLDateTimePeriod : public FWTLPacket
{
public:
	struct FWTLDateTime                          Start;                                             // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          End;                                               // 0x30(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x70 - 0x28)
// ScriptStruct WTL.WTLCharacterMailMessage
struct FWTLCharacterMailMessage : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Read;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Priority;                                          // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          Date;                                              // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                From;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Subject;                                           // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Text;                                              // 0x60(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0xA0 - 0x28)
// ScriptStruct WTL.WTLNewCharacterMailMessage
struct FWTLNewCharacterMailMessage : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLCharacterMailMessage              Message;                                           // 0x30(0x70)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x78 - 0x28)
// ScriptStruct WTL.WTLClanActionLogRecord
struct FWTLClanActionLogRecord : public FWTLPacket
{
public:
	struct FWTLDateTime                          EventDate;                                         // 0x28(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanActionLogRecordType       Type;                                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       InstigatorCharacterID;                             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstigatorCharacterName;                           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Info;                                              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLClanActionLogPage
struct FWTLClanActionLogPage : public FWTLPacket
{
public:
	int32                                        RecordsPerPage;                                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageIndex;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLClanActionLogRecord>       Records;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLClanScoreLogRecord
struct FWTLClanScoreLogRecord : public FWTLPacket
{
public:
	struct FWTLDateTime                          EventDate;                                         // 0x28(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanScoreLogRecordType        Type;                                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PVPScoreDelta;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PVEScoreDelta;                                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftScoreDelta;                                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TechnologyScoreDelta;                              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLClanScoreLogPage
struct FWTLClanScoreLogPage : public FWTLPacket
{
public:
	int32                                        RecordsPerPage;                                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageIndex;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLClanScoreLogRecord>        Records;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLInAppPurchaseItem
struct FWTLInAppPurchaseItem : public FWTLPacket
{
public:
	uint64                                       StoreItemID;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Price;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLInAppPurchase
struct FWTLInAppPurchase : public FWTLPacket
{
public:
	TArray<struct FWTLInAppPurchaseItem>         Items;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLAchievementsPercentage
struct FWTLAchievementsPercentage : public FWTLPacket
{
public:
	uint16                                       AchievementID;                                     // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Percent;                                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLAchievementsPercentageList
struct FWTLAchievementsPercentageList : public FWTLPacket
{
public:
	TArray<struct FWTLAchievementsPercentage>    Items;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentity16
struct FWTLIdentity16 : public FWTLPacket
{
public:
	uint16                                       Value;                                             // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLStatisticsValue
struct FWTLStatisticsValue : public FWTLPacket
{
public:
	uint16                                       ParameterID;                                       // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Value;                                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLAccountAchievementsAndStats
struct FWTLAccountAchievementsAndStats : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLIdentity16>                Achievements;                                      // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLStatisticsValue>           StatisticsValues;                                  // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLAccountAchievementsList
struct FWTLAccountAchievementsList : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLIdentity16>                Items;                                             // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLTriggerAccountAchievementInfo
struct FWTLTriggerAccountAchievementInfo : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       AchievementID;                                     // 0x30(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLAccountStatisticsValueDelta
struct FWTLAccountStatisticsValueDelta : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ParameterID;                                       // 0x30(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       Delta;                                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLFactionLeaderRecord
struct FWTLFactionLeaderRecord : public FWTLPacket
{
public:
	enum class EWTLFaction                       Faction;                                           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ClanID;                                            // 0x48(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                ClassID;                                           // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Rank;                                              // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Score;                                             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLCharacterClanInfo
struct FWTLCharacterClanInfo : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ClanID;                                            // 0x40(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanMemberType                ClanMemberType;                                    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29BA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ClanPolicyGroupID;                                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLCharacterFactionInfo
struct FWTLCharacterFactionInfo : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Reputation;                                        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29BB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Score;                                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Rank;                                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29BC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentity32
struct FWTLIdentity32 : public FWTLPacket
{
public:
	uint32                                       Value;                                             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29BD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLCharacterCustomizationItemRecord
struct FWTLCharacterCustomizationItemRecord : public FWTLPacket
{
public:
	int32                                        ID;                                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       StoreItemID;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLIdentity32>                RequiredSteamDLC;                                  // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLCharacterContactRecord
struct FWTLCharacterContactRecord : public FWTLPacket
{
public:
	enum class EWTLCharacterContactType          Type;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLCheaterReport
struct FWTLCheaterReport : public FWTLPacket
{
public:
	uint8                                        Pad_29C1[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLAnticheatResponse
struct FWTLAnticheatResponse : public FWTLPacket
{
public:
	uint8                                        Pad_29C2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLVersionInfo
struct FWTLVersionInfo
{
public:
	uint8                                        Pad_29C3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x80 - 0x28)
// ScriptStruct WTL.WTLAuthorization
struct FWTLAuthorization : public FWTLPacket
{
public:
	uint64                                       UserID;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLPlatform                      Platform;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Login;                                             // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLVersionInfo                       Version;                                           // 0x58(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint16                                       TicketSize;                                        // 0x60(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C5[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UniqueDeviceID;                                    // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLSteamAchievementTrigger
struct FWTLSteamAchievementTrigger : public FWTLPacket
{
public:
	uint64                                       SteamID;                                           // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AchievementName;                                   // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLSteamFloatStatChange
struct FWTLSteamFloatStatChange : public FWTLPacket
{
public:
	uint64                                       SteamID;                                           // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatName;                                          // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDeltaValue;                                     // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLSteamIntStatChange
struct FWTLSteamIntStatChange : public FWTLPacket
{
public:
	uint64                                       SteamID;                                           // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatName;                                          // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDeltaValue;                                     // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLClanSkillChange
struct FWTLClanSkillChange : public FWTLPacket
{
public:
	uint16                                       ClanID;                                            // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Operation;                                         // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkillID;                                           // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLClanScoreChange
struct FWTLClanScoreChange : public FWTLPacket
{
public:
	uint16                                       ClanID;                                            // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PVPScore;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PVEScore;                                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftScore;                                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TechnologyScore;                                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClanLevel;                                         // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLClanMemberRequestState
struct FWTLClanMemberRequestState : public FWTLPacket
{
public:
	uint16                                       ClanID;                                            // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ClanName;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          EventDate;                                         // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanMemberType                ClanMemberType;                                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Commentary;                                        // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x78 - 0x28)
// ScriptStruct WTL.WTLClanMemberRequestInfo
struct FWTLClanMemberRequestInfo : public FWTLPacket
{
public:
	uint16                                       ClanID;                                            // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          RequestDate;                                       // 0x30(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterID;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CharacterLevel;                                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                CharacterClass;                                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       CharacterFaction;                                  // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterScore;                                    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CharacterRank;                                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CharacterReputation;                               // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Commentary;                                        // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLClanMemberRequestList
struct FWTLClanMemberRequestList : public FWTLPacket
{
public:
	TArray<struct FWTLClanMemberRequestInfo>     Items;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLClanPolicyGroup
struct FWTLClanPolicyGroup : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLClanRecord
struct FWTLClanRecord : public FWTLPacket
{
public:
	uint16                                       ID;                                                // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLRemovedClanMember
struct FWTLRemovedClanMember : public FWTLPacket
{
public:
	uint16                                       ClanID;                                            // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanMemberCount;                                   // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLNewClanMember
struct FWTLNewClanMember : public FWTLPacket
{
public:
	uint16                                       ClanID;                                            // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                CharacterClass;                                    // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CharacterLevel;                                    // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanMemberType                ClanMemberType;                                    // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClanReputation;                                    // 0x4B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ClanPolicyGroupID;                                 // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanMemberCount;                                   // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLClanMember
struct FWTLClanMember : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                Class;                                             // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanMemberType                ClanMemberType;                                    // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClanReputation;                                    // 0x43(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ClanPolicyGroupID;                                 // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLServerEventInfo
struct FWTLServerEventInfo : public FWTLPacket
{
public:
	enum class EWTLServerEventType               Type;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TimeLeft;                                          // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x90 - 0x28)
// ScriptStruct WTL.WTLDedicatedServerStatistics
struct FWTLDedicatedServerStatistics : public FWTLPacket
{
public:
	uint32                                       ConnectionCount;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CharactersCount;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MonstersSpawned;                                   // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MonstersKilled;                                    // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MonstersAlive;                                     // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ExperienceTotal;                                   // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ExperienceMaxValue;                                // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MoneyProduced;                                     // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MoneyConsumed;                                     // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       SlotMachinesActivationsCount;                      // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       SlotMachinesBetsMoney;                             // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       SlotMachinesRewardMoney;                           // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       SlotMachinesConsumedMoney;                         // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       SlotMachinesMaxReward;                             // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLChangeCreditsResult
struct FWTLChangeCreditsResult : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CreditsAmount;                                     // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MoneyAmount;                                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLChangeCreditsInfo
struct FWTLChangeCreditsInfo : public FWTLPacket
{
public:
	uint64                                       Accountid;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterID;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CreditsAmount;                                     // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLClientMoveToLocationInfo
struct FWTLClientMoveToLocationInfo : public FWTLPacket
{
public:
	uint32                                       LocationID;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PortalID;                                          // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DedicatedServerAddress;                            // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DedicatedServerPort;                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x110 - 0x28)
// ScriptStruct WTL.WTLCharacterInfo
struct FWTLCharacterInfo : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Accountid;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLSex                           Sex;                                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          CreationDate;                                      // 0x50(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          LastAccessDate;                                    // 0x58(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                Class;                                             // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       State;                                             // 0x62(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StateDescription;                                  // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Online;                                            // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BaseStrength;                                      // 0x79(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BaseDexterity;                                     // 0x7A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BaseStamina;                                       // 0x7B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BaseAccuracy;                                      // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BaseIntelligence;                                  // 0x7D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BaseFortune;                                       // 0x7E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Experience;                                        // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TotalSkillPoints;                                  // 0x88(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       AvailableSkillPoints;                              // 0x8A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType0Experience;                             // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType1Experience;                             // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType2Experience;                             // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType3Experience;                             // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType4Experience;                             // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType5Experience;                             // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType6Experience;                             // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType7Experience;                             // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType8Experience;                             // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WeaponType9Experience;                             // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MedicExperience;                                   // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CraftExperience;                                   // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RepairExperience;                                  // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ElectronicsExperience;                             // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MiningExperience;                                  // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SurvivalExperience;                                // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Balance;                                           // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InventorySlotCount;                                // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0xD1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Reputation;                                        // 0xD2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Score;                                             // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Rank;                                              // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ClanID;                                            // 0xE2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanMemberType                ClanMemberType;                                    // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClanReputation;                                    // 0xE5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ClanPolicyGroupID;                                 // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLPlayerType                    PlayerType;                                        // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BodyType;                                          // 0xF1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PVPEnabled;                                        // 0xF2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          PVPStateChangeDate;                                // 0xF8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          PremiumEndTime;                                    // 0x100(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLPlatform                      Platform;                                          // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLContactListItem
struct FWTLContactListItem : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Online;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Location;                                          // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLFastAccessSlot
struct FWTLFastAccessSlot : public FWTLPacket
{
public:
	uint8                                        SlotNumber;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLMedicineItemEffect
struct FWTLMedicineItemEffect : public FWTLPacket
{
public:
	uint16                                       MedicineID;                                        // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x188 - 0x28)
// ScriptStruct WTL.WTLCharacterCurrentState
struct FWTLCharacterCurrentState : public FWTLPacket
{
public:
	float                                        Health;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Strength;                                          // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Dexterity;                                         // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Stamina;                                           // 0x2E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Accuracy;                                          // 0x2F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Intelligence;                                      // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Fortune;                                           // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       LocationID;                                        // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocationPosition;                                  // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ArmsItemType;                                      // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ArmsItemID;                                        // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      HeadItemType;                                      // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       HeadItemID;                                        // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      TorsoItemType;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       TorsoItemID;                                       // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      LegsItemType;                                      // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       LegsItemID;                                        // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      FeetItemType;                                      // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       FeetItemID;                                        // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      EquipmentSlot1ItemType;                            // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       EquipmentSlot1ItemID;                              // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      EquipmentSlot2ItemType;                            // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       EquipmentSlot2ItemID;                              // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      EquipmentSlot3ItemType;                            // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       EquipmentSlot3ItemID;                              // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      EquipmentSlot4ItemType;                            // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       EquipmentSlot4ItemID;                              // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EquipmentSlotStates;                               // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLFastAccessSlot>            FastAccessSlots;                                   // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SafeZoneID;                                        // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLIdentity32>                VisitedLocations;                                  // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLIdentity16>                PDAModules;                                        // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLIdentity32>                VisitedPortals;                                    // 0x110(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Hunger;                                            // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Thirst;                                            // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLMedicineItemEffect                MedicineEffect;                                    // 0x128(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FWTLMedicineItemEffect                StimulatorEffect;                                  // 0x158(0x30)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLCharacterItemExperience
struct FWTLCharacterItemExperience : public FWTLPacket
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Experience;                                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xE0 - 0x28)
// ScriptStruct WTL.WTLCharacterParameters
struct FWTLCharacterParameters : public FWTLPacket
{
public:
	float                                        CriticalDamageChanceMultiplier;                    // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AvoidCriticalDamageChanceMultiplier;               // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResourceDropChanceMultiplier;                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHealthMultiplier;                               // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStaminaMultiplier;                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TakenDamageAmountMultiplier;                       // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccuracyMultiplier;                                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementSpeedMultiplier;                           // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnvironmentResistanceMultiplier;                   // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SatietyHealthRegenerationRateMultiplier;           // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealingEfficiencyMultiplier;                       // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponHandlingSpeedMultiplier;                     // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeathLootLossMultiplier;                           // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UsingItemsExperienceAmountMultiplier;              // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UsingRepairKitsEfficiencyMultiplier;               // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SaveLockpicksChanceMultiplier;                     // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IHR_EfficiencyMultiplier;                          // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalInventorySlots;                          // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInventoryWeightMultiplier;                      // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemProductionSpeedMultiplier;                     // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalProductionQueueSlots;                    // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvP_DamageMultiplier;                              // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvP_SlowChanceOnHitMultiplier;                     // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvP_BleedingChanceOnHitMultiplier;                 // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvP_KillLootAmountMultiplier;                      // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvE_EnemyDamageMultiplier;                         // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvE_MonsterDamageMultiplier;                       // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvE_MonsterKillLootAmountMultiplier;               // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvE_MonsterKillExperienceAmountMultiplier;         // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeDamageMultiplier;                             // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeBleedingChanceMultiplier;                     // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeCriticalDamageChanceMultiplier;               // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PistolDamageMultiplier;                            // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PistolAccuracyMultiplier;                          // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PistolCriticalDamageChanceMultiplier;              // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubMachineGunDamageMultiplier;                     // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubMachineGunAccuracyMultiplier;                   // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShotgunDamageMultiplier;                           // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RifleDamageMultiplier;                             // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RifleAccuracyMultiplier;                           // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AssaultRifleDamageMultiplier;                      // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AssaultRifleAccuracyMultiplier;                    // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrenadeLauncherDamageMultiplier;                   // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosiveDamageMultiplier;                         // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorWeightSpeedMultiplier;                        // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLMaterialParameters
struct FWTLMaterialParameters : public FWTLPacket
{
public:
	struct FColor                                Color0;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color1;                                            // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color2;                                            // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color3;                                            // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scalar0;                                           // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scalar1;                                           // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scalar2;                                           // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scalar3;                                           // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x108 - 0x28)
// ScriptStruct WTL.WTLCharacterCustomizationRecord
struct FWTLCharacterCustomizationRecord : public FWTLPacket
{
public:
	enum class EWTLCharacterCustomizationPart    PartType;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       PartID;                                            // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLMaterialParameters                MaterialParameters0;                               // 0x30(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FWTLMaterialParameters                MaterialParameters1;                               // 0x78(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FWTLMaterialParameters                MaterialParameters2;                               // 0xC0(0x48)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLCharacterQuestState
struct FWTLCharacterQuestState : public FWTLPacket
{
public:
	uint32                                       QuestID;                                           // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLQuestState                    State;                                             // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress1;                                         // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress2;                                         // 0x2E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress3;                                         // 0x2F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Progress4;                                         // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          LastChangeDate;                                    // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLDeprecatedCharacterMapMarker
struct FWTLDeprecatedCharacterMapMarker : public FWTLPacket
{
public:
	uint32                                       LocationID;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Type;                                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowOnMinimap;                                     // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLCharacterEffect
struct FWTLCharacterEffect : public FWTLPacket
{
public:
	enum class EWTLCharacterEffectType           Type;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x390 (0x4A0 - 0x110)
// ScriptStruct WTL.WTLFullCharacterInfo
struct FWTLFullCharacterInfo : public FWTLCharacterInfo
{
public:
	struct FWTLCharacterCurrentState             CurrentState;                                      // 0x110(0x188)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterItemExperience>   ItemExperience;                                    // 0x298(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FWTLStorageContent                    Inventory;                                         // 0x2A8(0xA8)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLContactListItem>           ContactList;                                       // 0x350(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLIdentity16>                Skills;                                            // 0x360(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FWTLCharacterParameters               Parameters;                                        // 0x370(0xE0)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterCustomizationRecord> CustomizationInfo;                                 // 0x450(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterQuestState>       QuestStates;                                       // 0x460(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLDeprecatedCharacterMapMarker> MapMarkers;                                        // 0x470(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterEffect>           Effects;                                           // 0x480(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterMailMessage>      Mail;                                              // 0x490(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4A8 (0x4D0 - 0x28)
// ScriptStruct WTL.WTLMoveToLocationInfo
struct FWTLMoveToLocationInfo : public FWTLPacket
{
public:
	uint32                                       LocationID;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PortalID;                                          // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLFullCharacterInfo                 CharacterInfo;                                     // 0x30(0x4A0)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0xB0 - 0xA8)
// ScriptStruct WTL.WTLPrivateStorageContent
struct FWTLPrivateStorageContent : public FWTLStorageContent
{
public:
	uint32                                       NPCID;                                             // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotCount;                                         // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4D0 (0x4F8 - 0x28)
// ScriptStruct WTL.WTLCharacterTravelInfo
struct FWTLCharacterTravelInfo : public FWTLPacket
{
public:
	class FString                                TicketUID;                                         // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PortalID;                                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       SteamID;                                           // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLFullCharacterInfo                 CharacterInfo;                                     // 0x48(0x4A0)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLPrivateStorageContent>     PrivateStorages;                                   // 0x4E8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLArenaLocationStateChange
struct FWTLArenaLocationStateChange : public FWTLPacket
{
public:
	uint32                                       ConfederationPlayersCount;                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       BlackSunsetPlayersCount;                           // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ConfederationScores;                               // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       BlackSunsetScores;                                 // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x78 - 0x28)
// ScriptStruct WTL.WTLArenaLocationInfo
struct FWTLArenaLocationInfo : public FWTLPacket
{
public:
	uint32                                       ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLLocationType                  Type;                                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PlayersCount;                                      // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ConfederationPlayersCount;                         // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       BlackSunsetPlayersCount;                           // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MinPlayersCount;                                   // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxPlayersCount;                                   // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MatchTime;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxMatchTime;                                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ConfederationScores;                               // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       BlackSunsetScores;                                 // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ScoresToWin;                                       // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLArenaLocationList
struct FWTLArenaLocationList : public FWTLPacket
{
public:
	TArray<struct FWTLArenaLocationInfo>         Data;                                              // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4C8 (0x4F0 - 0x28)
// ScriptStruct WTL.WTLSetActiveCharacterResult
struct FWTLSetActiveCharacterResult : public FWTLPacket
{
public:
	class FString                                DedicatedServerHost;                               // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DedicatedServerPort;                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TicketUID;                                         // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLFullCharacterInfo                 CharacterInfo;                                     // 0x50(0x4A0)(Edit, NativeAccessSpecifierPublic)
};

// 0x88 (0xB0 - 0x28)
// ScriptStruct WTL.WTLAccountInfo
struct FWTLAccountInfo : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Login;                                             // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          CreationDate;                                      // 0x48(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          ActivationDate;                                    // 0x50(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          LastAccessDate;                                    // 0x58(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLSex                           Sex;                                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          BirthDate;                                         // 0x68(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       State;                                             // 0x70(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A01[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StateDescription;                                  // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Online;                                            // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EMail;                                             // 0x90(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Balance;                                           // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CharacterSlotCount;                                // 0xA4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          PremiumEndTime;                                    // 0xA8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLCharacterList
struct FWTLCharacterList : public FWTLPacket
{
public:
	TArray<struct FWTLFullCharacterInfo>         Data;                                              // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x100 (0x128 - 0x28)
// ScriptStruct WTL.WTLClientAuthorizationResult
struct FWTLClientAuthorizationResult : public FWTLPacket
{
public:
	uint32                                       CreditsToMoneyRate;                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NetUID;                                            // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLAccountInfo                       AccountInfo;                                       // 0x40(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FWTLCharacterList                     CharacterList;                                     // 0xF0(0x38)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLStatisticsCharacterParameterList
struct FWTLStatisticsCharacterParameterList : public FWTLPacket
{
public:
	uint8                                        Pad_2A05[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLStatisticsCharacterParameter
struct FWTLStatisticsCharacterParameter : public FWTLPacket
{
public:
	uint8                                        Pad_2A06[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLCharacterMainParameters
struct FWTLCharacterMainParameters : public FWTLPacket
{
public:
	int8                                         Strength;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Dexterity;                                         // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Stamina;                                           // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Accuracy;                                          // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Intelligence;                                      // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Fortune;                                           // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A07[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLDoorLockInfo
struct FWTLDoorLockInfo : public FWTLPacket
{
public:
	int64                                        BuildingID;                                        // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BuildingDoorID;                                    // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLBuildingDoorLockType          Type;                                              // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                KeyCode;                                           // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLDoorLockOperationInfo
struct FWTLDoorLockOperationInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A09[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLExperienceDelta
struct FWTLExperienceDelta : public FWTLPacket
{
public:
	uint8                                        Pad_2A0A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x88 - 0x28)
// ScriptStruct WTL.WTLSkill
struct FWTLSkill : public FWTLPacket
{
public:
	uint8                                        Pad_2A0B[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLSkillEffect
struct FWTLSkillEffect : public FWTLPacket
{
public:
	uint8                                        Pad_2A0C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLUpdateCommissionItemInfo
struct FWTLUpdateCommissionItemInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A0D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLReturnItemFromCommissionInfo
struct FWTLReturnItemFromCommissionInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A0E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLPutItemOnCommissionInfo
struct FWTLPutItemOnCommissionInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A0F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLBalanceDelta
struct FWTLBalanceDelta : public FWTLPacket
{
public:
	uint8                                        Pad_2A10[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0xD8 - 0xA8)
// ScriptStruct WTL.WTLCommissionMedicineItem
struct FWTLCommissionMedicineItem : public FWTLMedicineItem
{
public:
	int64                                        CommissionCharacterID;                             // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommissionCharacterName;                           // 0xB0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionDate;                                    // 0xC0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionExpireDate;                              // 0xC8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x108 - 0xD8)
// ScriptStruct WTL.WTLCommissionWeaponItem
struct FWTLCommissionWeaponItem : public FWTLWeaponItem
{
public:
	int64                                        CommissionCharacterID;                             // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommissionCharacterName;                           // 0xE0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionDate;                                    // 0xF0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionExpireDate;                              // 0xF8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0xD0 - 0x98)
// ScriptStruct WTL.WTLCommissionAmmoItem
struct FWTLCommissionAmmoItem : public FWTLAmmoItem
{
public:
	int64                                        CommissionCharacterID;                             // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommissionCharacterName;                           // 0xA0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionDate;                                    // 0xB0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          CommissionExpireDate;                              // 0xC0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A12[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0xC8 - 0x98)
// ScriptStruct WTL.WTLCommissionStuffItem
struct FWTLCommissionStuffItem : public FWTLStuffItem
{
public:
	int64                                        CommissionCharacterID;                             // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommissionCharacterName;                           // 0xA0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionDate;                                    // 0xB0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionExpireDate;                              // 0xB8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xE0 - 0xB0)
// ScriptStruct WTL.WTLCommissionClothesItem
struct FWTLCommissionClothesItem : public FWTLClothesItem
{
public:
	int64                                        CommissionCharacterID;                             // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommissionCharacterName;                           // 0xB8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionDate;                                    // 0xC8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionExpireDate;                              // 0xD0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xA0 - 0x70)
// ScriptStruct WTL.WTLCommissionResourceItem
struct FWTLCommissionResourceItem : public FWTLResourceItem
{
public:
	int64                                        CommissionCharacterID;                             // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommissionCharacterName;                           // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionDate;                                    // 0x88(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionExpireDate;                              // 0x90(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xD0 - 0xA0)
// ScriptStruct WTL.WTLCommissionArtefactItem
struct FWTLCommissionArtefactItem : public FWTLArtefactItem
{
public:
	int64                                        CommissionCharacterID;                             // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommissionCharacterName;                           // 0xA8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionDate;                                    // 0xB8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CommissionExpireDate;                              // 0xC0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0xA0 - 0x28)
// ScriptStruct WTL.WTLShopCommissionItems
struct FWTLShopCommissionItems : public FWTLPacket
{
public:
	int32                                        ShopID;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLCommissionWeaponItem>      WeaponItems;                                       // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionAmmoItem>        AmmoItems;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionMedicineItem>    MedicineItems;                                     // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionStuffItem>       StuffItems;                                        // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionClothesItem>     ClothesItems;                                      // 0x70(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionResourceItem>    ResourceItems;                                     // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionArtefactItem>    ArtefactItems;                                     // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct WTL.WTLShortVersionInfo
struct FWTLShortVersionInfo
{
public:
	uint8                                        Pad_2A14[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLDedicatedServerAuthorization
struct FWTLDedicatedServerAuthorization : public FWTLPacket
{
public:
	struct FWTLShortVersionInfo                  ProtocolVersion;                                   // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLVersionInfo                       Version;                                           // 0x2A(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Type;                                              // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A15[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocationID;                                        // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Hash;                                              // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MinPlayersCount;                                   // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxPlayersCount;                                   // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxMatchTime;                                      // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ScoresToWin;                                       // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLBuyItemFromShopInfo
struct FWTLBuyItemFromShopInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A17[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLSellItemToShopInfo
struct FWTLSellItemToShopInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A18[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLShopBuyItem
struct FWTLShopBuyItem : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShopID;                                            // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A19[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        ItemTypeID;                                        // 0x36(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Price;                                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x88 - 0x28)
// ScriptStruct WTL.WTLShop
struct FWTLShop : public FWTLPacket
{
public:
	int32                                        ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocationID;                                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLShopType                      Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Balance;                                           // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CommissionPercent;                                 // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CommissionWeaponItemsCount;                        // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionAmmoItemsCount;                          // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMedicineItemsCount;                      // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionStuffItemsCount;                         // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionClothesItemsCount;                       // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionResourceItemsCount;                      // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionArtefactItemsCount;                      // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLMiningPointStateChange
struct FWTLMiningPointStateChange : public FWTLPacket
{
public:
	uint8                                        Pad_2A1F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLWorldConfig
struct FWTLWorldConfig : public FWTLPacket
{
public:
	float                                        ExperienceMultiplier;                              // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterKillExperienceMultiplier;                 // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonsterKillExperienceMultiplier;                   // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NPCKillExperienceMultiplier;                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        QuestExperienceMultiplier;                         // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemTypeExperienceMultiplier;                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterDropChanceMultiplier;                     // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterDropCountMultiplier;                      // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonsterDropChanceMultiplier;                       // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonsterDropCountMultiplier;                        // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NPCDropChanceMultiplier;                           // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NPCDropCountMultiplier;                            // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLGroupMember
struct FWTLGroupMember : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Leader;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A20[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLGroup
struct FWTLGroup : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLGroupMember>               Members;                                           // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLCharacterMuteState
struct FWTLCharacterMuteState : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ChatMuteState;                                     // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VoiceMuteState;                                    // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A21[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          MuteEnds;                                          // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0xA8 - 0x28)
// ScriptStruct WTL.WTLWorldInfo
struct FWTLWorldInfo : public FWTLPacket
{
public:
	float                                        CurrentTime;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TimeScale;                                         // 0x2C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       CreditsToMoneyRate;                                // 0x2E(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLWorldConfig                       Config;                                            // 0x30(0x58)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLGroup>                     Groups;                                            // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCharacterMuteState>        CharactersMuteState;                               // 0x98(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLWorldTime
struct FWTLWorldTime : public FWTLPacket
{
public:
	float                                        CurrentTime;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        TimeScale;                                         // 0x2C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A23[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x78 - 0x28)
// ScriptStruct WTL.WTLGroupInvite
struct FWTLGroupInvite : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       GroupId;                                           // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterID;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       InviteInstigatorID;                                // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InviteInstigatorName;                              // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expired;                                           // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MembersCount;                                      // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A24[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          InviteTime;                                        // 0x70(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x78 - 0x28)
// ScriptStruct WTL.WTLLocationStorage
struct FWTLLocationStorage : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocationID;                                        // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        LocationBuildingID;                                // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BuildingBlockID;                                   // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLLocationStorageType           Type;                                              // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x4C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x58(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoDestroy;                                       // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          AutoDestroyTime;                                   // 0x68(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotCount;                                         // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A29[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLMiningPointResource
struct FWTLMiningPointResource : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocationMiningPointID;                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        ResourceID;                                        // 0x34(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Value;                                             // 0x36(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        MaxValue;                                          // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        ValueIncrement;                                    // 0x3A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        ValueDecrement;                                    // 0x3C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLMiningPoint
struct FWTLMiningPoint : public FWTLPacket
{
public:
	int32                                        ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocationID;                                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLMiningPointType               Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SubType;                                           // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ResourcePercent;                                   // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLMiningPointResource>       Resources;                                         // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLWeatherInfo
struct FWTLWeatherInfo : public FWTLPacket
{
public:
	enum class EWTLWeatherType                   WeatherType;                                       // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindStrength;                                      // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindSpeed;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindMinGustAmount;                                 // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindMaxGustAmount;                                 // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindAngle;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLCharacterSlotItemInfo
struct FWTLCharacterSlotItemInfo : public FWTLPacket
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A30[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLFastAccessSlotItemInfo
struct FWTLFastAccessSlotItemInfo : public FWTLPacket
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A31[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ScopeAttachmentTypeID;                             // 0x2C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FlashlightAttachmentTypeID;                        // 0x2E(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MuzzleAttachmentTypeID;                            // 0x30(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A32[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLCharacterEquipmentItemInfo
struct FWTLCharacterEquipmentItemInfo : public FWTLPacket
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A33[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A34[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x210 (0x238 - 0x28)
// ScriptStruct WTL.WTLShortCharacterInfo
struct FWTLShortCharacterInfo : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLSex                           Sex;                                               // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                Class;                                             // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A35[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Health;                                            // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReadyToGame;                                       // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Strength;                                          // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Dexterity;                                         // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Stamina;                                           // 0x4B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Accuracy;                                          // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Intelligence;                                      // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Fortune;                                           // 0x4E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A36[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLCharacterSlotItemInfo             HeadItem;                                          // 0x50(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FWTLCharacterSlotItemInfo             TorsoItem;                                         // 0x80(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FWTLCharacterSlotItemInfo             LegsItem;                                          // 0xB0(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FWTLCharacterSlotItemInfo             FeetItem;                                          // 0xE0(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FWTLCharacterSlotItemInfo             ArmsItem;                                          // 0x110(0x30)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLFastAccessSlotItemInfo>    FastAccessSlots;                                   // 0x140(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Reputation;                                        // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Rank;                                              // 0x152(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A38[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ClanID;                                            // 0x154(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanMemberType                ClanMemberType;                                    // 0x156(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLPlayerType                    PlayerType;                                        // 0x157(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BodyType;                                          // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PVPEnabled;                                        // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A39[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLCharacterCustomizationRecord> CustomizationInfo;                                 // 0x160(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FWTLCharacterEquipmentItemInfo        EquipmentSlot1;                                    // 0x170(0x30)(NativeAccessSpecifierPublic)
	struct FWTLCharacterEquipmentItemInfo        EquipmentSlot2;                                    // 0x1A0(0x30)(NativeAccessSpecifierPublic)
	struct FWTLCharacterEquipmentItemInfo        EquipmentSlot3;                                    // 0x1D0(0x30)(NativeAccessSpecifierPublic)
	struct FWTLCharacterEquipmentItemInfo        EquipmentSlot4;                                    // 0x200(0x30)(NativeAccessSpecifierPublic)
	uint8                                        EquipmentSlotStates;                               // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x68 - 0x28)
// ScriptStruct WTL.WTLCamp
struct FWTLCamp : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocationID;                                        // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CharacterID;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x4C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x78 - 0x28)
// ScriptStruct WTL.WTLBuildingBlock
struct FWTLBuildingBlock : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LocationBuildingID;                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        CharacterID;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockTypeID;                                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLBlockType                     Type;                                              // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x48(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x54(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLBuildingBlockState            State;                                             // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Condition;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          CreationDate;                                      // 0x68(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        InteractiveObjectID;                               // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x68 - 0x28)
// ScriptStruct WTL.WTLBuildingDoor
struct FWTLBuildingDoor : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LocationBuildingID;                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BuildingBlockID;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Closed;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        LockID;                                            // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLBuildingDoorLockType          LockType;                                          // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A40[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                KeyCode;                                           // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLBuildingWorkbench
struct FWTLBuildingWorkbench : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LocationBuildingID;                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BuildingBlockID;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LocationStorageID;                                 // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A41[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0xA8 - 0x28)
// ScriptStruct WTL.WTLBuilding
struct FWTLBuilding : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocationID;                                        // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CharacterID;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLBuildingType                  Type;                                              // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x44(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x50(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          CreationDate;                                      // 0x60(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLBuildingBlock>             Blocks;                                            // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLBuildingDoor>              Doors;                                             // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLBuildingWorkbench>         Workbenches;                                       // 0x98(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xD0 - 0x28)
// ScriptStruct WTL.WTLLocationInfo
struct FWTLLocationInfo : public FWTLPacket
{
public:
	int32                                        ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLLocationType                  Type;                                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLWeatherInfo                       WeatherInfo;                                       // 0x40(0x40)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FWTLShortCharacterInfo>        Characters;                                        // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLLocationStorage>           Storages;                                          // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCamp>                      Camps;                                             // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLBuilding>                  Buildings;                                         // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLMiningPoint>               MiningPoints;                                      // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLInventoryItemDelta
struct FWTLInventoryItemDelta : public FWTLPacket
{
public:
	uint8                                        Pad_2A48[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLCraftItemPart
struct FWTLCraftItemPart : public FWTLPacket
{
public:
	int64                                        ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CraftItemID;                                       // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A49[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        ItemTypeID;                                        // 0x36(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A4B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLCraftItem
struct FWTLCraftItem : public FWTLPacket
{
public:
	int32                                        ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A4D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        ItemTypeID;                                        // 0x2E(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemCount;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCraftType                     CraftType;                                         // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinCraftExperience;                                // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftTime;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLCraftItemPart>             Parts;                                             // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLCraftRequest
struct FWTLCraftRequest : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        CharacterID;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CraftItemID;                                       // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          StartTime;                                         // 0x50(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLDateTime                          EndTime;                                           // 0x58(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x70 - 0x28)
// ScriptStruct WTL.WTLBuildingBlockType
struct FWTLBuildingBlockType : public FWTLPacket
{
public:
	int32                                        ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLBlockType                     Type;                                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A4F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Durability;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuildDurabilityIncrement;                          // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RepairDurabilityIncrement;                         // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PrefabName;                                        // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A52[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLBuildingBlockTypeList
struct FWTLBuildingBlockTypeList : public FWTLPacket
{
public:
	TArray<struct FWTLBuildingBlockType>         Data;                                              // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLBuildingBlockResourceCostItem
struct FWTLBuildingBlockResourceCostItem : public FWTLPacket
{
public:
	int16                                        ResourceID;                                        // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A53[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ResourceName;                                      // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A54[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLShortTextInfo
struct FWTLShortTextInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A55[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLTextInfo
struct FWTLTextInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A56[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLConsoleCommand
struct FWTLConsoleCommand : public FWTLPacket
{
public:
	uint8                                        Pad_2A57[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLVoicePacket
struct FWTLVoicePacket : public FWTLPacket
{
public:
	uint8                                        Pad_2A58[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLVoiceCharacterPosition
struct FWTLVoiceCharacterPosition : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A59[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLVoiceWorldInfo
struct FWTLVoiceWorldInfo : public FWTLPacket
{
public:
	TArray<struct FWTLVoiceCharacterPosition>    CharacterPositions;                                // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLChatMessage
struct FWTLChatMessage : public FWTLPacket
{
public:
	int64                                        CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLChatMessageType               Type;                                              // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLChatMessageRequest
struct FWTLChatMessageRequest : public FWTLPacket
{
public:
	uint8                                        Pad_2A5B[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLConnectionCloseInfo
struct FWTLConnectionCloseInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A5C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLClientErrorInfo
struct FWTLClientErrorInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A5D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLCharacterDeathInfo
struct FWTLCharacterDeathInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A5E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLCharacterDamageInfo
struct FWTLCharacterDamageInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A5F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLMonsterHitCharacterInfo
struct FWTLMonsterHitCharacterInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A60[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLCharacterHitMonsterInfo
struct FWTLCharacterHitMonsterInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A61[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLCharacterHitCharacterInfo
struct FWTLCharacterHitCharacterInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A62[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLCurrentStateChangeInfo
struct FWTLCurrentStateChangeInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A63[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLBuildingSettings
struct FWTLBuildingSettings : public FWTLPacket
{
public:
	int16                                        UpdateInterval;                                    // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A64[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLLoadAmmoInWeaponInfo
struct FWTLLoadAmmoInWeaponInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A66[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLUniteAllItemsInfo
struct FWTLUniteAllItemsInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A67[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLUniteItemsInfo
struct FWTLUniteItemsInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A68[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLSplitItemInfo
struct FWTLSplitItemInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A69[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLMoveItemsInfo
struct FWTLMoveItemsInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A6A[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLServerShutdownInfo
struct FWTLServerShutdownInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A6B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLMonsterTransform
struct FWTLMonsterTransform : public FWTLPacket
{
public:
	int64                                        MonsterID;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Timestamp;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x44(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x60 - 0x28)
// ScriptStruct WTL.WTLCharacterTransform
struct FWTLCharacterTransform : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Timestamp;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PingCategory;                                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x48(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x54(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x68 - 0x28)
// ScriptStruct WTL.WTLCharacterMapMarker
struct FWTLCharacterMapMarker : public FWTLPacket
{
public:
	uint32                                       LocationID;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Type;                                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Color;                                             // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowOnMinimap;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A70[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLCharacterCustomizationInfo
struct FWTLCharacterCustomizationInfo : public FWTLPacket
{
public:
	uint64                                       CharacterID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLSex                           Sex;                                               // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BodyType;                                          // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A71[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLCharacterCustomizationRecord> Parts;                                             // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLStorageSlot
struct FWTLStorageSlot : public FWTLPacket
{
public:
	uint8                                        SlotNumber;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A72[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLStorageOrder
struct FWTLStorageOrder : public FWTLPacket
{
public:
	enum class EWTLStorageType                   StorageType;                                       // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       StorageID;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLStorageSlot>               Slots;                                             // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLBodyPartSlot
struct FWTLBodyPartSlot : public FWTLPacket
{
public:
	enum class EWTLBodyPart                      BodyPart;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A74[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLIdentityStorage
struct FWTLIdentityStorage : public FWTLPacket
{
public:
	enum class EWTLStorageType                   Type;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLIdentityCommissionItem
struct FWTLIdentityCommissionItem : public FWTLPacket
{
public:
	uint32                                       ShopID;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      Type;                                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CommissionID;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLKeyValueThreeInt64Int64String
struct FWTLKeyValueThreeInt64Int64String : public FWTLPacket
{
public:
	uint64                                       Key;                                               // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Value1;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value2;                                            // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLKeyValuePairInt64String
struct FWTLKeyValuePairInt64String : public FWTLPacket
{
public:
	uint64                                       Key;                                               // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLKeyValuePairInt16String
struct FWTLKeyValuePairInt16String : public FWTLPacket
{
public:
	uint16                                       Key;                                               // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A77[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLIdentityItem
struct FWTLIdentityItem : public FWTLPacket
{
public:
	enum class EWTLItemType                      Type;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ID;                                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentityPair8
struct FWTLIdentityPair8 : public FWTLPacket
{
public:
	uint8                                        Value1;                                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value2;                                            // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A79[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentity8
struct FWTLIdentity8 : public FWTLPacket
{
public:
	uint8                                        Value;                                             // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentityPair16
struct FWTLIdentityPair16 : public FWTLPacket
{
public:
	uint16                                       Value1;                                            // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Value2;                                            // 0x2A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentityPair32
struct FWTLIdentityPair32 : public FWTLPacket
{
public:
	uint32                                       Value1;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Value2;                                            // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLIdentityFour64
struct FWTLIdentityFour64 : public FWTLPacket
{
public:
	uint64                                       Value1;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Value2;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Value3;                                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Value4;                                            // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLIdentityThree64
struct FWTLIdentityThree64 : public FWTLPacket
{
public:
	uint64                                       Value1;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Value2;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Value3;                                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLIdentityPair64
struct FWTLIdentityPair64 : public FWTLPacket
{
public:
	uint64                                       Value1;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Value2;                                            // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLIdentity64
struct FWTLIdentity64 : public FWTLPacket
{
public:
	uint64                                       Value;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLServerInfo
struct FWTLServerInfo : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLVersionInfo                       Version;                                           // 0x30(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLShortVersionInfo                  ProtocolVersion;                                   // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          StartTime;                                         // 0x40(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        UpTime;                                            // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldTime;                                         // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        TimeScale;                                         // 0x54(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLErrorInfo
struct FWTLErrorInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A7E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct WTL.WTLActivateTicketInfo
struct FWTLActivateTicketInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A7F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct WTL.WTLGameServerShutdownInfo
struct FWTLGameServerShutdownInfo : public FWTLPacket
{
public:
	uint8                                        Pad_2A80[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x78 - 0x28)
// ScriptStruct WTL.WTLGameServerShortInfo
struct FWTLGameServerShortInfo : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLGameServerType                Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLShortVersionInfo                  ProtocolVersion;                                   // 0x31(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A81[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLVersionInfo                       Version;                                           // 0x34(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLVersionInfo                       MinClientVersion;                                  // 0x3C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IPAddress;                                         // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        MainPort;                                          // 0x58(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        PingPort;                                          // 0x5A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x60(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersCount;                                      // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xC8 - 0x28)
// ScriptStruct WTL.WTLGameServerInfo
struct FWTLGameServerInfo : public FWTLPacket
{
public:
	uint64                                       ID;                                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLGameServerType                Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLShortVersionInfo                  ProtocolVersion;                                   // 0x31(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A84[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLVersionInfo                       Version;                                           // 0x34(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLVersionInfo                       MinClientVersion;                                  // 0x3C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IPAddress;                                         // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        MainPort;                                          // 0x58(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        PingPort;                                          // 0x5A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x60(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A89[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPlayers;                                        // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersCount;                                      // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0xB8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct WTL.WTLGameClientInfo
struct FWTLGameClientInfo : public FWTLPacket
{
public:
	struct FWTLShortVersionInfo                  ProtocolVersion;                                   // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLVersionInfo                       Version;                                           // 0x2A(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Accountid;                                         // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketUID;                                         // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLClientAuthorizationInfo
struct FWTLClientAuthorizationInfo : public FWTLPacket
{
public:
	struct FWTLShortVersionInfo                  ProtocolVersion;                                   // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLVersionInfo                       Version;                                           // 0x2A(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Login;                                             // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLConnectionTest
struct FWTLConnectionTest : public FWTLPacket
{
public:
	uint8                                        Pad_2A8C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLPing
struct FWTLPing : public FWTLPacket
{
public:
	uint8                                        Pad_2A8D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct WTL.WTLEvent
struct FWTLEvent : public FWTLPacket
{
public:
	uint8                                        Pad_2A8E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLEventHeader
struct FWTLEventHeader : public FWTLPacket
{
public:
	uint8                                        Pad_2A8F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct WTL.WTLResponse
struct FWTLResponse : public FWTLPacket
{
public:
	uint8                                        Pad_2A90[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLRequest
struct FWTLRequest : public FWTLPacket
{
public:
	uint8                                        Pad_2A91[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct WTL.WTLServerMessageHeader
struct FWTLServerMessageHeader : public FWTLPacket
{
public:
	uint8                                        Pad_2A92[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLQuestAchievementStaticMesh
struct FWTLQuestAchievementStaticMesh
{
public:
	class AStaticMeshActor*                      StaticMesh;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestStatesForShowMesh;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A93[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLQuestAchievements
struct FWTLQuestAchievements
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestAchievementStaticMesh> Meshes;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLQuestState
struct FWTLQuestState
{
public:
	int32                                        QuestID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLQuestState                    State;                                             // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLDateTime                          LastChangeDate;                                    // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A96[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLRandomMiningPoint
struct FWTLRandomMiningPoint
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Capacity;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLRangedWeaponFireAnimation
struct FWTLRangedWeaponFireAnimation
{
public:
	float                                        MaxTime;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ElapsedTime;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LastValue;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MultiplierX;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MultiplierY;                                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct WTL.InlineTextImageStyleRow
struct FInlineTextImageStyleRow : public FTableRowBase
{
public:
	struct FInlineTextImageStyle                 InlineTextImageStyle;                              // 0x8(0x98)(Edit, NativeAccessSpecifierPublic)
};

// 0x500 (0x508 - 0x8)
// ScriptStruct WTL.HyperlinkTextStyleRow
struct FHyperlinkTextStyleRow : public FTableRowBase
{
public:
	struct FHyperlinkStyle                       HyperlinkStyle;                                    // 0x8(0x500)(Edit, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct WTL.WTLScriptedEventInfo
struct FWTLScriptedEventInfo
{
public:
	enum class EWTLScriptedEventMethodType       Method;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x20 - 0x4)
// ScriptStruct WTL.WTLAnnounceEventScriptedEventInfo
struct FWTLAnnounceEventScriptedEventInfo : public FWTLScriptedEventInfo
{
public:
	enum class EWTLServerEventType               EventType;                                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventDescription;                                  // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EventDuration;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A98[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5C (0x60 - 0x4)
// ScriptStruct WTL.WTLSpawnEnemyScriptedEventInfo
struct FWTLSpawnEnemyScriptedEventInfo : public FWTLScriptedEventInfo
{
public:
	float                                        LifeSpan;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       EnemyId;                                           // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A99[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EnemyAssetClass;                                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Count;                                             // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Locations;                                         // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SpawnRange;                                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLItemDropInfo>              AdditionalLoot;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CustomTag;                                         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x48 - 0x4)
// ScriptStruct WTL.WTLSpawnMonsterScriptedEventInfo
struct FWTLSpawnMonsterScriptedEventInfo : public FWTLScriptedEventInfo
{
public:
	float                                        LifeSpan;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MonsterID;                                         // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Count;                                             // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Locations;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SpawnRange;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLItemDropInfo>              AdditionalLoot;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CustomTag;                                         // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x38 - 0x4)
// ScriptStruct WTL.WTLSpawnObjectScriptedEventInfo
struct FWTLSpawnObjectScriptedEventInfo : public FWTLScriptedEventInfo
{
public:
	float                                        LifeSpan;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetClass;                                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CustomTag;                                         // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLAdditionalLoot
struct FWTLAdditionalLoot
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MinCount;                                          // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MaxCount;                                          // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MinCondition;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxCondition;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalChance;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModificationData;                                  // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct WTL.WTLDriverInfo
struct FWTLDriverInfo
{
public:
	uint8                                        Pad_2AA3[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLConnectionSettings
struct FWTLConnectionSettings
{
public:
	class FString                                Host;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct WTL.WTLDedicatedServerSettings
struct FWTLDedicatedServerSettings
{
public:
	class FString                                Host;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MainPort;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPlayersCount;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayersCount;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RoundTime;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClientDefaultNetSpeed;                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultPlayerInvulnerableTime;                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatisticsUpdateInterval;                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterDistance;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonsterDistance;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonsterSleepDistance;                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DroppedItemTTL;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DBServer;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DBName;                                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatDBName;                                        // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DBUserName;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DBPassword;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDBDriverType                     DBDriverType;                                      // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DBUpdateThreadsCount;                              // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterAutosaveInterval;                         // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterAutosaveTimeDelta;                        // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCharacterLevel;                                 // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCharacterLevelForPVEMode;                       // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ZabbixServer;                                      // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZabbixPort;                                        // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NetLagTime;                                        // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SafeZoneEnterInvulnerableChargeSeconds;            // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SafeZoneLeaveInvulnerableCooldownSeconds;          // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CharacterDropEnabled;                              // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsArenaLocation;                                   // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PVPEnabled;                                        // 0xCA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeneralChatDistance;                               // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxConnectionsToTickPerServerFrame;                // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SteamAPIKey;                                       // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeToConsumeSteamItem;                            // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientSideCharacterHitLeeway;                      // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientSideMonsterHitLeeway;                        // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientSideEnemyNPCHitLeeway;                       // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseReplicationGraph;                               // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReplicationGraphCellSize;                          // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BlockMonsterSpawnOnFortificationCapture;           // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLTutorialWarningMessageStoredData
struct FWTLTutorialWarningMessageStoredData
{
public:
	uint8                                        Pad_2AAE[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ID;                                                // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDoNotShowAgain;                                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShowCount;                                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLStoreItemInCart
struct FWTLStoreItemInCart
{
public:
	uint64                                       ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLMinimapScaleValue
struct FWTLMinimapScaleValue
{
public:
	int32                                        LocationID;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleValue;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct WTL.WTLCustomizationItemCount
struct FWTLCustomizationItemCount
{
public:
	enum class EWTLSex                           Sex;                                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLCharacterClass                ClassType;                                         // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Count;                                             // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLCustomizationItemsCount
struct FWTLCustomizationItemsCount
{
public:
	TArray<struct FWTLCustomizationItemCount>    Array;                                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct WTL.WTLGameSettings
struct FWTLGameSettings
{
public:
	class FString                                Language;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastLogin;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSavePassword;                                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastPassword;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastPlayedServerName;                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastEmail;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableTutorial;                                    // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrackVehicleTurnWithCamera;                        // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RotateCameraInIdle;                                // 0x5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraSpeedInIdle;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutomaticallyAcceptMarkers;                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NVIDIAHighlightsEnabled;                           // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CharactersTextChatMuteList;                        // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint16>                               TutorialMessagesStoredData;                        // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLTutorialWarningMessageStoredData> TutorialWarningMessagesStoredData;                 // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLStoreItemInCart>           StoreItemsInCart;                                  // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLMinimapScaleValue>         MinimapScaleValues;                                // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FWTLCustomizationItemsCount           LastCustomizationItemsCountInStore;                // 0xB8(0x10)(NativeAccessSpecifierPublic)
	bool                                         CacheAssetsOnStartup;                              // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsShowCharacterPositionWhenOpenPDAMap;             // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsHideActiveQuestInfo;                             // 0xCA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsHUDHideByUser;                                   // 0xCB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLReputationSettings
struct FWTLReputationSettings
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdatePeriod;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinUpdateValue;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxUpdateValue;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct WTL.WTLGraphicsSettings
struct FWTLGraphicsSettings
{
public:
	class FString                                Renderer;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScreenResolutionX;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScreenResolutionY;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResolutionScale;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScreenMode;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VSync;                                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextureStreaming;                                  // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureStreamingPoolSize;                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameLimit;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FullDynamicLight;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ABA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FSR2;                                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FSR2Sharpness;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotionBlur;                                        // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseContactShadows;                                 // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ABC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MotionBlurQuality;                                 // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TemporalAA;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ABD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TemporalAAQuality;                                 // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImageSharpness;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AntiAliasingQuality;                               // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessingQuality;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShadowQuality;                                     // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureQuality;                                    // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ViewDistanceQuality;                               // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmbientOcclusionType;                              // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CloudsType;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowEffectsAfterDeath;                             // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowWindEffects;                                   // 0x75(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC1[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct WTL.WTLArenaSettings
struct FWTLArenaSettings
{
public:
	int32                                        MinFactionPlayersToReward;                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct WTL.WTLAudioSettings
struct FWTLAudioSettings
{
public:
	int32                                        AudioDriver;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpeakerMode;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AudioQualityLevel;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MasterVolume;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicVolume;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectsVolume;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterVoiceVolume;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeechVolume;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UIVolume;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLControlsSettings
struct FWTLControlsSettings
{
public:
	float                                        MouseSensitivity;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSensitivityInMiniGames;                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MouseInvert;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GamepadAimingSensitivity;                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GamepadAimingInvert;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ChangeSensitivityOnAim;                            // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AimToggle;                                         // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutomaticallyReloadWeapon;                         // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CrouchToggle;                                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SprintToggle;                                      // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC7[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLInterfaceSettings
struct FWTLInterfaceSettings
{
public:
	class FString                                PDAInterfaceColor;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PDAFirstIndicatorOn;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PDASecondIndicatorOn;                              // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PDAAchievementsSimplifiedView;                     // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CrosshairVisibility;                               // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CrosshairColor;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayerStatusVisibility;                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WeaponInfoVisibility;                              // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FastAccessSlotsVisibility;                         // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LevelBarVisibility;                                // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinimapVisibility;                                 // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinimapTimeVisibility;                             // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowMinimapLocalTime;                              // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FPSCounterVisibility;                              // 0x2F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HighLightQuestItemsOnlyForActiveQuest;             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowActiveQuestInfoWhenPDAQuestLogShow;            // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideTextChatArea;                                  // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CollapseChatAfterMessageSent;                      // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectCommonFilterAfterCollapseChat;               // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FilterCensorshipInChat;                            // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStrongDumbCensorshipFilter;                     // 0x36(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowDamageIdentification;                          // 0x37(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnarmedCrosshair;                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUseHint;                                       // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowCharacterPreviewInInventory;                   // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowDamagePointerWithHiddenHUD;                    // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideFastAccessSlotsAfterSomeTime;                  // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowOptionalWarnings;                              // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowNotEnoughStaminaToJumpWarning;                 // 0x3E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowNotEnoughStaminaToSprintWarning;               // 0x3F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowCannotSprintInventoryOverloadWarning;          // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowNoNutsInInventoryToThrowWarning;               // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLPostProcessSettings
struct FWTLPostProcessSettings
{
public:
	float                                        GammaLevel;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Contrast;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RedBalance;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GreenBalance;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlueBalance;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLLocalCharacterSettings
struct FWTLLocalCharacterSettings
{
public:
	class FString                                Cache;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLSecuritySettings
struct FWTLSecuritySettings
{
public:
	float                                        StandbyRxTriggerTime;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StandbyRxAttempts;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StandbyTxTriggerTime;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StandbyTxAttempts;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BadPingTriggerTimeInterval;                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BadPingValue;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JoinTimeTreshold;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeDiscrepancyDetectionAttemts;                   // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLIdentificationSettings
struct FWTLIdentificationSettings
{
public:
	bool                                         bIsPlayersIdentificationEnabled;                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMonstersIdentificationEnabled;                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MonstersSimplifiedIdentificationEnableDistance;    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNPCIdentificationEnabled;                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowGroupAndClanMembers;                    // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowFriendlyDevices;                        // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SimplifiedIdentificationEnableDistance;            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdentificationTransparency;                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLVOIPSettings
struct FWTLVOIPSettings
{
public:
	int32                                        RecordDeviceID;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint64>                               CharacterBlackList;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct WTL.WTLFortificationCaptureSettings
struct FWTLFortificationCaptureSettings
{
public:
	int32                                        ScoreForCharacterKill;                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreForCharacterResurection;                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreForCharacterDeath;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreForNPCKill;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreForPointCapture;                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreForPointReconfiguration;                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreForPointRestored;                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreForPointJamming;                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScoreMultiplierForLoose;                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreMultiplierForScanning;                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScanningPerOneScore;                               // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        JammersScoringIntervalSeconds;                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreLimitForCapture;                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLGameplaySettings
struct FWTLGameplaySettings
{
public:
	int32                                        PrimeTimeBeginHour;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimeTimeEndHour;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB (0xB - 0x0)
// ScriptStruct WTL.WTLGodConsoleSettings
struct FWTLGodConsoleSettings
{
public:
	bool                                         bIsShowFavouritesWeaponsList;                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesAmmosList;                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesMedicineList;                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesStuffList;                        // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesClothesList;                      // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesResourcesList;                    // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesArtefactsList;                    // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesKitsList;                         // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesMonstersList;                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesLocationsList;                    // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShowFavouritesQuestsList;                       // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x420 (0x420 - 0x0)
// ScriptStruct WTL.WTLSettings
struct FWTLSettings
{
public:
	struct FWTLConnectionSettings                Connection;                                        // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLDedicatedServerSettings           DedicatedServer;                                   // 0x18(0x108)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLReputationSettings                Reputation;                                        // 0x120(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLArenaSettings                     Arena;                                             // 0x130(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLWorldConfig                       WorldConfig;                                       // 0x138(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLGameSettings                      Game;                                              // 0x190(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLGraphicsSettings                  Graphics;                                          // 0x260(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLAudioSettings                     Audio;                                             // 0x2D8(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLControlsSettings                  Controls;                                          // 0x2FC(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLInterfaceSettings                 Interface;                                         // 0x318(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLPostProcessSettings               PostProcess;                                       // 0x360(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLLocalCharacterSettings            LocalCharacter;                                    // 0x378(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLSecuritySettings                  Security;                                          // 0x388(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLIdentificationSettings            Identification;                                    // 0x3A8(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLVOIPSettings                      VOIP;                                              // 0x3C0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWTLFortificationCaptureSettings      FortificationCaptureSettings;                      // 0x3D8(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLGameplaySettings                  Gameplay;                                          // 0x40C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLGodConsoleSettings                GodConsole;                                        // 0x414(0xB)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsLoadFromGameUserSettings;                        // 0x41F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLVoiceSettings
struct FWTLVoiceSettings
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Port;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLSlotMachineData
struct FWTLSlotMachineData
{
public:
	TArray<int32>                                IDSlots;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IDSymbolsSelected;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AWTLCharacter*                         Character;                                         // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLSlotMachineState              State;                                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct WTL.WTLServerStatisticsMonsters
struct FWTLServerStatisticsMonsters
{
public:
	uint64                                       Spawned;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Killed;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Alive;                                             // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, uint64>                          SpawnedByClass;                                    // 0x18(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<int32, uint64>                          KilledByClass;                                     // 0x68(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<int32, uint64>                          AliveByClass;                                      // 0xB8(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLServerStatisticsExperience
struct FWTLServerStatisticsExperience
{
public:
	uint64                                       Total;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MaxValue;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLServerStatisticsMoney
struct FWTLServerStatisticsMoney
{
public:
	uint64                                       TotalProduced;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       TotalConsumed;                                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLServerStatisticsSlotMachines
struct FWTLServerStatisticsSlotMachines
{
public:
	uint64                                       ActivationsCount;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       BetsMoney;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       RewardMoney;                                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ConsumedMoney;                                     // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       MaxReward;                                         // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct WTL.WTLServerStatistics
struct FWTLServerStatistics
{
public:
	struct FWTLServerStatisticsMonsters          Monsters;                                          // 0x0(0x108)(Edit, NativeAccessSpecifierPublic)
	struct FWTLServerStatisticsExperience        Experience;                                        // 0x108(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLServerStatisticsMoney             Money;                                             // 0x118(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FWTLServerStatisticsSlotMachines      SlotMachines;                                      // 0x128(0x28)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLThrowingDeviceBeamSection
struct FWTLThrowingDeviceBeamSection
{
public:
	int32                                        TrajectoryID;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ParticleComponent;                                 // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLDebugSuggestion
struct FWTLDebugSuggestion
{
public:
	enum class EWTLDebugSuggestionType           Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CharacterName;                                     // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLSuggestion
struct FWTLSuggestion
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DisplayedText;                                     // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.WTLMonsterSpawnerTaskInfo
struct FWTLMonsterSpawnerTaskInfo
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Rank;                                              // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinLifeSpan;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLifeSpan;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       Faction;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentDelay;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Destroy;                                           // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetActorName;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLQuestIDState
struct FWTLQuestIDState
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLQuestState                    State;                                             // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLSellItemsQuestRestrictions
struct FWTLSellItemsQuestRestrictions
{
public:
	struct FWTLItem                              Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EWTLCheckType                     CheckType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLQuestIDState>              QuestsToCheck;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLQuestItemLockInfo
struct FWTLQuestItemLockInfo
{
public:
	enum class EWTLItemType                      Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       TypeID;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLBundleItem
struct FWTLBundleItem
{
public:
	uint64                                       StoreItemID;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLPremiumItemData
struct FWTLPremiumItemData
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DaysCount;                                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Discount;                                          // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DiscountPercent;                                   // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLCreditsItemData
struct FWTLCreditsItemData
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       StoreItemID;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	float                                        USDPrice;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RUBPrice;                                          // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Discount;                                          // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLComboBoxStringSound
struct FWTLComboBoxStringSound
{
public:
	enum class EWTLComboBoxStringType            Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             PressedSoundEvent;                                 // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             SelectionChangeSoundEvent;                         // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct WTL.WTLCheckBoxSound
struct FWTLCheckBoxSound
{
public:
	enum class EWTLCheckBoxType                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             CheckedSoundEvent;                                 // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             UncheckedSoundEvent;                               // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             HoveredSoundEvent;                                 // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLSwitcherSound
struct FWTLSwitcherSound
{
public:
	enum class EWTLSwitcherType                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             ButtonPressedSoundEvent;                           // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             ButtonHoveredSoundEvent;                           // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLCommonClickedItemSound
struct FWTLCommonClickedItemSound
{
public:
	enum class EWTLCommonClickedItemType         Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             MouseButtonDownSoundEvent;                         // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             HoveredSoundEvent;                                 // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLCommonButtonSound
struct FWTLCommonButtonSound
{
public:
	enum class EWTLCommonButtonType              Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             PressedSoundEvent;                                 // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             HoveredSoundEvent;                                 // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLSexTexture
struct FWTLSexTexture
{
public:
	enum class EWTLSex                           Sex;                                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLItemRequirement
struct FWTLItemRequirement
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomizationName;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLSteamInventoryItem
struct FWTLSteamInventoryItem
{
public:
	uint8                                        Pad_2AEF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLGiveItemInfo
struct FWTLGiveItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x280 (0x280 - 0x0)
// ScriptStruct WTL.WTLBodyPartButtonStyle
struct FWTLBodyPartButtonStyle
{
public:
	enum class EWTLCharacterCustomizationPart    BodyPartType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          ButtonStyle;                                       // 0x8(0x278)(Edit, NativeAccessSpecifierPublic)
};

// 0x280 (0x280 - 0x0)
// ScriptStruct WTL.WTLItemTypeStoreButtonStyle
struct FWTLItemTypeStoreButtonStyle
{
public:
	enum class EWTLStoreItemType                 StoreItemType;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          ButtonStyle;                                       // 0x8(0x278)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLEquipmentTypeTexture
struct FWTLEquipmentTypeTexture
{
public:
	enum class EWTLEquipmentType                 Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLPrivateLootItemInfo
struct FWTLPrivateLootItemInfo
{
public:
	uint64                                       CharacterID;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLEmotionAnimation
struct FWTLEmotionAnimation
{
public:
	int32                                        EmotionTypeID;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EmotionID;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BlockCameraRotation;                               // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideUsableItem;                                    // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MaleMontage;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FemaleMontage;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct WTL.WTLLocationSpawnPickup
struct FWTLLocationSpawnPickup
{
public:
	TSoftClassPtr<class AWTLItemPickup>          PickupClass;                                       // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quality;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCondition;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCondition;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinInteractiveObjectID;                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInteractiveObjectID;                            // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationScalar;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomizationColor;                                // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomizationName;                                 // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModificationData;                                  // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             NextSpawnTime;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeBetweenSpawn;                               // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeBetweenSpawn;                               // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinBlackListTimeout;                               // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxBlackListTimeout;                               // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInstanceCount;                                  // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentInstanceCount;                              // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLArenaFactionScore
struct FWTLArenaFactionScore
{
public:
	enum class EWTLFaction                       Faction;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLFactionColor
struct FWTLFactionColor
{
public:
	enum class EWTLFaction                       Faction;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLFactionTexture
struct FWTLFactionTexture
{
public:
	enum class EWTLFaction                       Faction;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLCraftObjectProcessRecord
struct FWTLCraftObjectProcessRecord
{
public:
	uint64                                       UniqueId;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterID;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftItemID;                                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProductionTime;                                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProductionTimeLeft;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AFA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.WTLMovementMemoryElement
struct FWTLMovementMemoryElement
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AFB[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLQTEState
struct FWTLQTEState
{
public:
	uint8                                        NextKeyID;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Step;                                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SequenceLength;                                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FishingDifficulty;                                 // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FishingSequenceValue;                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FishingSequenceLength;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInQTE;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCancel;                                        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLQTEType                       Type;                                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedToHideUsableItem;                             // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLLowerBodyAnimation
struct FWTLLowerBodyAnimation
{
public:
	class UAnimMontage*                          MontageLeft;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          MontageRight;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLCharacterMedicineEffect
struct FWTLCharacterMedicineEffect
{
public:
	float                                        TimeLeft;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EffectID;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        MedicineID;                                        // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AFC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.SpeedModifiers
struct FSpeedModifiers
{
public:
	float                                        ReloadSpeedModifier;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EquipSpeedModifier;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.WTLMedicineEffectImageInfo
struct FWTLMedicineEffectImageInfo
{
public:
	enum class EWTLMedicineEffectParameter       Parameter;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLDebugCharacterClanInfo
struct FWTLDebugCharacterClanInfo
{
public:
	int32                                        ClanID;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanMemberType                ClanMemberType;                                    // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsed;                                           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AFE[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLBPIdentityItemType
struct FWTLBPIdentityItemType
{
public:
	enum class EWTLItemType                      Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TypeID;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct WTL.LipSyncData
struct FLipSyncData
{
public:
	float                                        E;                                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FV;                                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AI;                                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        L;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        O;                                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ETC;                                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WQ;                                                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MBP;                                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct WTL.WTLLanguageInfo
struct FWTLLanguageInfo
{
public:
	class FString                                Culture;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush;                                             // 0x10(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct WTL.WTLSteamServerInfo
struct FWTLSteamServerInfo
{
public:
	uint8                                        Pad_2B00[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLCommissionItemTypeCount
struct FWTLCommissionItemTypeCount
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct WTL.WTLBarterDeal
struct FWTLBarterDeal
{
public:
	class AWTLCharacter*                         Character1;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWTLCharacter*                         Character2;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterID1;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterID2;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLStorageContent                    CharacterItems1;                                   // 0x20(0xA8)(NativeAccessSpecifierPublic)
	struct FWTLStorageContent                    CharacterItems2;                                   // 0xC8(0xA8)(NativeAccessSpecifierPublic)
	int32                                        CharacterMoneyAmount1;                             // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterMoneyAmount2;                             // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CharacterReady1;                                   // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CharacterReady2;                                   // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CharacterAgreement1;                               // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CharacterAgreement2;                               // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B02[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLBarterDealRequest
struct FWTLBarterDealRequest
{
public:
	struct FDateTime                             RequestDate;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWTLCharacter*                         FromCharacter;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       FromCharacterID;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromCharacterName;                                 // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWTLCharacter*                         ToCharacter;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ToCharacterID;                                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WTL.WTLClanStorageMoneyLogRecord
struct FWTLClanStorageMoneyLogRecord
{
public:
	struct FWTLDateTime                          EventDate;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TabIndex;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanStorageMoneyOperationType OperationType;                                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B03[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyAmount;                                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLClanStorageItemLogRecord
struct FWTLClanStorageItemLogRecord
{
public:
	struct FWTLDateTime                          EventDate;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TabIndex;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLClanStorageItemOperationType  OperationType;                                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      ItemType;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ItemTypeID;                                        // 0x38(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B07[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLAmmoCaliberStatInfo
struct FWTLAmmoCaliberStatInfo
{
public:
	int32                                        DamageMin;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageMax;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMin;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmorPiercingMax;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccuracyMin;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccuracyMax;                                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLWeaponStatInfo
struct FWTLWeaponStatInfo
{
public:
	int32                                        MinDamage;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDamage;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DPS;                                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLWeaponTypeStatInfo
struct FWTLWeaponTypeStatInfo
{
public:
	int32                                        MinDamage;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDamage;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinAccuracy;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAccuracy;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinConditionDelta;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxConditionDelta;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLClanInviteInfo
struct FWTLClanInviteInfo
{
public:
	uint16                                       ClanID;                                            // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B08[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SenderCharacterName;                               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct WTL.WTLClanIcons
struct FWTLClanIcons
{
public:
	TSoftObjectPtr<class UTexture2D>             SmallIcon;                                         // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             MediumIcon;                                        // 0x28(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargeIcon;                                         // 0x50(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLCraftObjectProcess
struct FWTLCraftObjectProcess
{
public:
	uint64                                       UniqueId;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterID;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftItemID;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProductionTime;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProductionTimeLeft;                                // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B09[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct WTL.WTLCraftObjectState
struct FWTLCraftObjectState
{
public:
	int32                                        CraftObjectID;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLStorageContent                    Content;                                           // 0x8(0xA8)(NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStorageContentChanged;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FWTLCraftObjectProcess>        Processes;                                         // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLCommissionListItemData
struct FWTLCommissionListItemData
{
public:
	enum class EWTLItemType                      Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ID;                                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TypeID;                                            // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommissionMinBuyCount;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommissionPrice;                                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CommissionDate;                                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CommissionExpireDate;                              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLGlobalLevelObjectRecord
struct FWTLGlobalLevelObjectRecord
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLGlobalLevelObjectType         Type;                                              // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        State;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StateInfo;                                         // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLSlotMachineRecord
struct FWTLSlotMachineRecord
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Balance;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct WTL.WTLFortificationObjectRecord
struct FWTLFortificationObjectRecord
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFortificationObjectType       Type;                                              // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterGroupID;                                  // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       CharacterClanID;                                   // 0x18(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       CharacterFaction;                                  // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B10[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x1C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x28(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotCount;                                         // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       Condition;                                         // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Energy;                                            // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLStorageContent                    StorageContent;                                    // 0x40(0xA8)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLFortificationCaptureScoreRecord
struct FWTLFortificationCaptureScoreRecord
{
public:
	uint64                                       CharacterID;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       CharacterFaction;                                  // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KillsCount;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeathsCount;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLLocationFortificationCommandCoreRecord
struct FWTLLocationFortificationCommandCoreRecord
{
public:
	int32                                        CommandCoreID;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Energy;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             LastCaptureTime;                                   // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       ControlFaction;                                    // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLFortificationCaptureScoreRecord> CaptureScore;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLLocationPlaceableStuffRecord
struct FWTLLocationPlaceableStuffRecord
{
public:
	uint64                                       ItemId;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       StuffID;                                           // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B14[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CharacterID;                                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterGroupID;                                  // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       CharacterClanID;                                   // 0x30(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       CharacterFaction;                                  // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B15[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Condition;                                         // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Energy;                                            // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B16[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct WTL.WTLLocationStorageRecord
struct FWTLLocationStorageRecord
{
public:
	uint64                                       CharacterID;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       CharacterGroupID;                                  // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       CharacterClanID;                                   // 0x20(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLFaction                       CharacterFaction;                                  // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B17[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x24(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotCount;                                         // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLStorageContent                    Content;                                           // 0x40(0xA8)(Edit, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct WTL.WTLClanStorageTab
struct FWTLClanStorageTab
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ImageIndex;                                        // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Money;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWTLStorageContent                    StorageContent;                                    // 0x30(0xA8)(Edit, NativeAccessSpecifierPublic)
	TArray<uint64>                               CanPutClanPolicyGroups;                            // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint64>                               CanTakeClanPolicyGroups;                           // 0xE8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLClanStorage
struct FWTLClanStorage
{
public:
	uint64                                       ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCID;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ClanID;                                            // 0xC(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWTLClanStorageTab>            Tabs;                                              // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStorageContentChanged;                           // 0x20(0x10)(Edit, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct WTL.WTLCommissionStorage
struct FWTLCommissionStorage
{
public:
	int32                                        NPCID;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Money;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionWeaponItem>      WeaponItems;                                       // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionAmmoItem>        AmmoItems;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionMedicineItem>    MedicineItems;                                     // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionStuffItem>       StuffItems;                                        // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionClothesItem>     ClothesItems;                                      // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionResourceItem>    ResourceItems;                                     // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionArtefactItem>    ArtefactItems;                                     // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct WTL.WTLPrivateStorage
struct FWTLPrivateStorage
{
public:
	int32                                        NPCID;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotCount;                                         // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWTLStorageContent                    StorageContent;                                    // 0x8(0xA8)(Edit, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStorageContentChanged;                           // 0xB0(0x10)(Edit, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLInteractiveResourceGatherItem
struct FWTLInteractiveResourceGatherItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumeAfterGather;                                // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLInteractiveResourceResultItem
struct FWTLInteractiveResourceResultItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B20[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLInteractiveResourceGatherType
struct FWTLInteractiveResourceGatherType
{
public:
	TArray<struct FWTLInteractiveResourceGatherItem> RequireItems;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLInteractiveResourceResultItem> ResultItems;                                       // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinResourceValueToGather;                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinResourceValueDecrement;                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxResourceValueDecrement;                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B21[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLWaterContainer
struct FWTLWaterContainer
{
public:
	enum class EWTLItemType                      EmptyItemType;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B22[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       EmptyItemTypeID;                                   // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLItemType                      FullItemType;                                      // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B23[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       FullItemTypeID;                                    // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLActionTimerWidgetType
struct FWTLActionTimerWidgetType
{
public:
	enum class EWTLActionTimerWidgetType         Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct WTL.WTLLocalCharacterData
struct FWTLLocalCharacterData
{
public:
	bool                                         bIsFlashlightEnabled;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MonocularZoomModeIndex;                            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B25[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint64, uint8>                          M_WeaponsFireModeMemory;                           // 0x8(0x50)(NativeAccessSpecifierPublic)
	TMap<uint64, uint8>                          M_StuffsModeMemory;                                // 0x58(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct WTL.WTLLocalCharactersData
struct FWTLLocalCharactersData
{
public:
	TMap<uint64, struct FWTLLocalCharacterData>  PerCharacterData;                                  // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLLocationNameWithID
struct FWTLLocationNameWithID
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLWidgetWithOrder
struct FWTLWidgetWithOrder
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B27[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLDaytimeCubemapScenario
struct FWTLDaytimeCubemapScenario
{
public:
	class UTextureCube*                          SourceCubemap;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                          DestinationCubemap;                                // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FromDayTime;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToDayTime;                                         // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLDaytimeCubemapBlendType       BlendType;                                         // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B29[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLDaytimeCubemap
struct FWTLDaytimeCubemap
{
public:
	float                                        DayTime;                                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureCube*                          Texture;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLCaptureTarget
struct FWTLCaptureTarget
{
public:
	float                                        DayTime;                                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTargetCube*              Target;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WTL.WTLCharacterEffectTypeColor
struct FWTLCharacterEffectTypeColor
{
public:
	enum class EWTLCharacterEffectType           EffectType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLConsoleScript
struct FWTLConsoleScript
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Commands;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WTL.WTLCustomizationColorIngredient
struct FWTLCustomizationColorIngredient
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLShortMovementInfo
struct FWTLShortMovementInfo
{
public:
	uint8                                        Yaw;                                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2B31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   Location;                                          // 0x4(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLUFunctionInfo
struct FWTLUFunctionInfo
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UFunctionName;                                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLCharacterStateIndicatorTextureIdentity
struct FWTLCharacterStateIndicatorTextureIdentity
{
public:
	enum class EWTLCharacterStateIndicatorType   StateIndicatorType;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLCharacterEffectTextureIdentity
struct FWTLCharacterEffectTextureIdentity
{
public:
	enum class EWTLCharacterEffectType           EffectType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct WTL.WTLDefaultClassParameters
struct FWTLDefaultClassParameters
{
public:
	uint8                                        Strength;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Dexterity;                                         // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Stamina;                                           // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Accuracy;                                          // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Intelligence;                                      // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Fortune;                                           // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct WTL.WTLArenaSelectedEquipmentItem
struct FWTLArenaSelectedEquipmentItem
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B39[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotNumber;                                        // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLVisualItemCount
struct FWTLVisualItemCount
{
public:
	uint64                                       ItemId;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemCountInNewSlot;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldItemCount;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLSellItemInfo
struct FWTLSellItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemName;                                          // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	uint64                                       ItemId;                                            // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ItemTypeID;                                        // 0x28(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemCount;                                         // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemMinBuyCount;                                   // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemCommissionPrice;                               // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ItemCommissionCharacterID;                         // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemWeight;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B41[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLComboBoxSubTypeOption
struct FWTLComboBoxSubTypeOption
{
public:
	class FText                                  SubTypeName;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	int16                                        SubTypeNumber;                                     // 0x18(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B42[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLExtractItemInfo
struct FWTLExtractItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B45[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLSellingItemInfo
struct FWTLSellingItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ItemId;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B48[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct WTL.WTLSellItems
struct FWTLSellItems
{
public:
	TArray<struct FWTLCommissionWeaponItem>      WeaponItems;                                       // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionAmmoItem>        AmmoItems;                                         // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionMedicineItem>    MedicineItems;                                     // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionStuffItem>       StuffItems;                                        // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionClothesItem>     ClothesItems;                                      // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionResourceItem>    ResourceItems;                                     // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWTLCommissionArtefactItem>    ArtefactItems;                                     // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLBuyItemInfo
struct FWTLBuyItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ItemTypeID;                                        // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Price;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PriceMultiplier;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.UpdatingReflestionCapture
struct FUpdatingReflestionCapture
{
public:
	class AReflectionCapture*                    Object;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastUpdateLevelTime;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLFastAccessSlotBindPermissions
struct FWTLFastAccessSlotBindPermissions
{
public:
	TArray<enum class EWTLWeaponType>            WeaponTypes;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EWTLMedicineType>          MedicineTypes;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EWTLStuffType>             StuffTypes;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLGeneratedSellItemInfo
struct FWTLGeneratedSellItemInfo
{
public:
	enum class EWTLItemType                      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemTypeID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Condition;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PriceMultiplier;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RoundNumberPrice;                                  // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinBuyCount;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WTL.WTLCustomQuestRequirementState
struct FWTLCustomQuestRequirementState
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x10(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeedCount;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentCount;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseBitMaskForProgress;                             // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B54[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLEnemyNPCKillRequirementState
struct FWTLEnemyNPCKillRequirementState
{
public:
	int32                                        EnemyNPCID;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EnemyNPCName;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B57[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NeedCount;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentCount;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B58[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WTL.WTLMonsterKillRequirementState
struct FWTLMonsterKillRequirementState
{
public:
	int32                                        MonsterID;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MonsterName;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinLevel;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxLevel;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NeedCount;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentCount;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLLanguageOption
struct FWTLLanguageOption
{
public:
	class FString                                LanguageName;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LanguagePrefix;                                    // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLOptionsParameter
struct FWTLOptionsParameter
{
public:
	class FText                                  ParameterName;                                     // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FString                                ParameterPrefix;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHiddenForUser;                                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLRadialMenuEmotionsInfoArray
struct FWTLRadialMenuEmotionsInfoArray
{
public:
	TArray<struct FWTLRadialMenuEmotionInfo>     RadialMenuEmotionsInfo;                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct WTL.WTLUseMenuActionInfo
struct FWTLUseMenuActionInfo : public FWTLRadialMenuActionInfo
{
public:
	enum class EWTLUseMenuActionType             Type;                                              // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct WTL.WTLUseMenuButtonInfo
struct FWTLUseMenuButtonInfo
{
public:
	enum class EWTLUseMenuActionType             ActionType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Object;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UFunctionName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CustomButtonDescription;                           // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.WTLRadialMenuButton
struct FWTLRadialMenuButton
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B65[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct WTL.WTLPopupButtonInfo
struct FWTLPopupButtonInfo
{
public:
	class FText                                  ButtonName;                                        // 0x0(0x18)(NativeAccessSpecifierPublic)
	uint64                                       ID;                                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UFunctionName;                                     // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WTL.WTLPopupDialogButtonInfo
struct FWTLPopupDialogButtonInfo
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(NativeAccessSpecifierPublic)
	uint64                                       ID;                                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B66[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct WTL.WTLMessageDialogButtonInfo
struct FWTLMessageDialogButtonInfo
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2B68[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TextColor;                                         // 0x28(0x28)(NativeAccessSpecifierPublic)
	bool                                         IsSetTextColor;                                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B6A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct WTL.WTLCharacterStateIndicatorTypeConfig
struct FWTLCharacterStateIndicatorTypeConfig
{
public:
	enum class EWTLCharacterStateIndicatorType   Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconBrush;                                         // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct WTL.WTLCharacterEffectTypeConfig
struct FWTLCharacterEffectTypeConfig
{
public:
	enum class EWTLCharacterEffectType           Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconBrush;                                         // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct WTL.WTLNotificationTypeConfig
struct FWTLNotificationTypeConfig
{
public:
	enum class EWTLHUDNotificationType           Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             SoundEvent;                                        // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct WTL.WTLCustomizationPartsLoadPermissions
struct FWTLCustomizationPartsLoadPermissions
{
public:
	enum class EWTLCharacterCustomizationPart    PartType;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPermissionToLoad;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct WTL.WTLCustomizationRecord
struct FWTLCustomizationRecord
{
public:
	struct FWTLCharacterCustomizationRecord      CustomizationRecord;                               // 0x0(0x108)(NativeAccessSpecifierPublic)
	uint8                                        MaterialIndex;                                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLHUDVisibleException
struct FWTLHUDVisibleException
{
public:
	class UWTLHUDWidgetBase*                     FullscreenWidget;                                  // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWTLHUDWidgetBase*                     ExceptionWidget;                                   // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WTL.WTLHUDFullscreenWidget
struct FWTLHUDFullscreenWidget
{
public:
	class UWTLWidgetBase*                        Widget;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLInputMode                     InputMode;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasVisible;                                       // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B75[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct WTL.WTLInputSetting
struct FWTLInputSetting
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(NativeAccessSpecifierPublic)
	struct FKey                                  MainKey;                                           // 0x20(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMainKeySet;                                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  AlternateKey;                                      // 0x40(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAlternateKeySet;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAlternateKeyAllow;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B77[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  DefaultMainKey;                                    // 0x60(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  DefaultAlternateKey;                               // 0x78(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLKeyCategory                   Category;                                          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMouseKeysCanBind;                               // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct WTL.WTLMapMarker
struct FWTLMapMarker
{
public:
	class FString                                MarkerName;                                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MarkerTime;                                        // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	class AActor*                                MarkerActor;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MarkerLocation;                                    // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLMapMarkerType                 MarkerType;                                        // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MarkerSubTypeNumber;                               // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MarkerColor;                                       // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MarkerZOrder;                                      // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSticking;                                       // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MarkerIndex;                                       // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct WTL.WTLMapCanvasMarker
struct FWTLMapCanvasMarker
{
public:
	struct FWTLMapMarker                         Marker;                                            // 0x0(0x70)(NativeAccessSpecifierPublic)
	class UWTLCommonMapMarker*                   MarkerWidget;                                      // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WTL.WTLTakenDamageRecord
struct FWTLTakenDamageRecord
{
public:
	struct FDateTime                             LastDamageTime;                                    // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HitCount;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageValue;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       GroupId;                                           // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ClanID;                                            // 0x18(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B82[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WTL.WTLWeaponTypeDamageModifier
struct FWTLWeaponTypeDamageModifier
{
public:
	enum class EWTLWeaponType                    WeaponType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageMultiplier;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct WTL.EnergyFieldDamageEvent
struct FEnergyFieldDamageEvent : public FDamageEvent
{
public:
	uint8                                        Pad_2B84[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct WTL.SuffocationDamageEvent
struct FSuffocationDamageEvent : public FDamageEvent
{
public:
	uint8                                        Pad_2B86[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x20 - 0x10)
// ScriptStruct WTL.MonsterDamageEvent
struct FMonsterDamageEvent : public FDamageEvent
{
public:
	enum class EWTLColliderType                  ColliderType;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmorPiercingValue;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseArmor;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Critical;                                          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B89[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct WTL.MedicineDamageEvent
struct FMedicineDamageEvent : public FDamageEvent
{
public:
	int16                                        MedicineID;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EffectID;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct WTL.CharacterEffectDamageEvent
struct FCharacterEffectDamageEvent : public FDamageEvent
{
public:
	enum class EWTLCharacterEffectType           EffectType;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct WTL.SuicideDamageEvent
struct FSuicideDamageEvent : public FDamageEvent
{
public:
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct WTL.MeleeDamageEvent
struct FMeleeDamageEvent : public FPointDamageEvent
{
public:
	uint16                                       WeaponTypeID;                                      // 0xB0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpulseMultiplier;                                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Critical;                                          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWTLColliderType                  ColliderType;                                      // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseArmor;                                          // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B90[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmorPiercingValue;                                // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WTL.ItemAnimationSet
struct FItemAnimationSet
{
public:
	class UAnimMontage*                          Item;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          PawnMale;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActionDurationWithoutAnimation;                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationRate;                                     // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


