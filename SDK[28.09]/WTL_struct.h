// Enum WTL.EWTLMailPackageState
enum class EWTLMailPackageState : uint8 {
	None = 0,
	Traveling = 1,
	ReadyToPickup = 2,
	Delivered = 3,
	EWTLMailPackageState_MAX = 4
};

// Enum WTL.EWTLArtefactType
enum class EWTLArtefactType : uint8 {
	None = 0,
	Quest = 1,
	Food = 2,
	StimulatorContainer = 3,
	Artefact = 4,
	Houseware = 5,
	Instruments = 6,
	Electronics = 7,
	Junk = 8,
	AmmoComponents = 9,
	Document = 10,
	SpareParts = 11,
	ModificationParts = 12,
	Money = 13,
	FishingBait = 14,
	Fish = 15,
	Miscellaneous = 16,
	EWTLArtefactType_MAX = 17
};

// Enum WTL.EWTLResourceType
enum class EWTLResourceType : uint8 {
	Base = 0,
	Complex = 1,
	EWTLResourceType_MAX = 2
};

// Enum WTL.EWTLArmorClass
enum class EWTLArmorClass : uint8 {
	None = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	EWTLArmorClass_MAX = 4
};

// Enum WTL.EWTLClothesType
enum class EWTLClothesType : uint8 {
	None = 0,
	Boots = 1,
	Trousers = 2,
	Jacket = 3,
	Helmet = 4,
	ArmorPlate = 5,
	CustomizationItem = 100,
	EWTLClothesType_MAX = 101
};

// Enum WTL.EWTLItemType
enum class EWTLItemType : uint8 {
	None = 0,
	Weapon = 1,
	Ammo = 2,
	Medicine = 3,
	Stuff = 4,
	Clothes = 5,
	Resource = 6,
	Artefact = 7,
	EWTLItemType_MAX = 8
};

// Enum WTL.EWTLStuffType
enum class EWTLStuffType : uint8 {
	None = 0,
	WeaponRepairKit = 1,
	AmmoReloadingKit = 2,
	UnlockingKit = 3,
	FlashLight = 4,
	Equipment = 5,
	Detector = 6,
	ResourceMiner = 7,
	BuilderKit = 8,
	WeaponAttachment = 9,
	OpticDevice = 10,
	Battery = 11,
	Extractor = 12,
	ArtefactContainerS = 13,
	ArtefactContainerM = 14,
	ArtefactContainerL = 15,
	PDAModule = 16,
	ClothesRepairKit = 17,
	PlacementKit = 18,
	WeaponSprayCan = 19,
	ClothesSprayCan = 20,
	WeaponModificationKit = 21,
	ClothesModificationKit = 22,
	EngravingKit = 23,
	FishingItem = 24,
	RepairItem = 25,
	HealingItem = 26,
	UniversalScaner = 27,
	EnergyEquipment = 28,
	ProductionModule = 29,
	TeleportationDevice = 30,
	Vehicle = 31,
	Fuel = 32,
	Drone = 33,
	ControlledDrone = 34,
	RadioDevice = 35,
	EWTLStuffType_MAX = 36
};

// Enum WTL.EWTLCharacterEffectType
enum class EWTLCharacterEffectType : uint8 {
	None = 0,
	Radiation = 1,
	Chemicals = 2,
	Poison = 3,
	Bleeding = 4,
	Suffocation = 5,
	Burn = 6,
	Wounded = 7,
	Immobilization = 8,
	Consternation = 9,
	Alcohol = 101,
	RadiationProtection = 102,
	ChemicalsProtection = 103,
	PoisonProtection = 104,
	BleedingProtection = 105,
	Medicine = 200,
	Stimulator = 201,
	IntruderState = 252,
	IntruderStateLethal = 253,
	Invulnerability = 255,
	EWTLCharacterEffectType_MAX = 256
};

// Enum WTL.EWTLMedicineType
enum class EWTLMedicineType : uint8 {
	MedKit = 0,
	Stimulator = 1,
	EWTLMedicineType_MAX = 2
};

// Enum WTL.EWTLCaliber
enum class EWTLCaliber : uint8 {
	None = 0,
	Caliber_22LR = 1,
	Caliber_9x18PM = 2,
	Caliber_9x19Parabellum = 3,
	Caliber_7_62x25TT = 4,
	Caliber_38Special = 5,
	Caliber_45ACP = 6,
	Caliber_21 = 7,
	Caliber_13 = 8,
	Caliber_5_45x39 = 9,
	Caliber_5_56x45NATO = 10,
	Caliber_7_62x39 = 11,
	Caliber_308WIN = 12,
	Caliber_7_62x54 = 13,
	Caliber_9x39 = 14,
	Caliber_7_62x38 = 15,
	Caliber_30_06 = 16,
	Caliber_338LM = 17,
	Caliber_357Magnum = 18,
	Caliber_5_7x28 = 19,
	Caliber_43mm = 20,
	Caliber_44Magnum = 21,
	Caliber_500SWMagnum = 22,
	Caliber_40mm = 23,
	Caliber_76mm = 24,
	EWTLCaliber_MAX = 25
};

// Enum WTL.EWTLAmmoType
enum class EWTLAmmoType : uint8 {
	Ammo = 0,
	Case = 1,
	Projectile = 2,
	EWTLAmmoType_MAX = 3
};

// Enum WTL.EWTLWeaponType
enum class EWTLWeaponType : uint8 {
	None = 0,
	Knife = 1,
	Pistol = 2,
	Shotgun = 3,
	SubMachineGun = 4,
	AssaultRifle = 5,
	Rifle = 6,
	Machinegun = 7,
	GrenadeLauncher = 8,
	Missile = 9,
	Explosive = 10,
	EWTLWeaponType_MAX = 11
};

// Enum WTL.EWTLLocationStorageType
enum class EWTLLocationStorageType : uint8 {
	None = 0,
	Stash = 1,
	CraftObject = 2,
	PremiumStash = 3,
	EWTLLocationStorageType_MAX = 4
};

// Enum WTL.EWTLStorageType
enum class EWTLStorageType : uint8 {
	None = 0,
	Inventory = 1,
	Commission = 2,
	CraftObject = 3,
	LocationStorage = 4,
	PrivateStorage = 5,
	ClanStorage = 6,
	FortificationObject = 7,
	MailPackage = 8,
	EWTLStorageType_MAX = 9
};

// Enum WTL.EWTLMailPackageDeliveryType
enum class EWTLMailPackageDeliveryType : uint8 {
	None = 0,
	Regular = 1,
	Fast = 2,
	EWTLMailPackageDeliveryType_MAX = 3
};

// Enum WTL.EWTLColliderType
enum class EWTLColliderType : uint8 {
	None = 0,
	Body = 1,
	Head = 2,
	Arm = 3,
	Leg = 4,
	Foot = 5,
	EWTLColliderType_MAX = 6
};

// Enum WTL.EWTLCharacterClass
enum class EWTLCharacterClass : uint8 {
	None = 0,
	Miner = 1,
	Hunter = 2,
	Mercenary = 3,
	Engineer = 4,
	EWTLCharacterClass_MAX = 5
};

// Enum WTL.EWTLFaction
enum class EWTLFaction : uint8 {
	None = 0,
	Confederation = 1,
	BlackSunset = 2,
	EWTLFaction_MAX = 3
};

// Enum WTL.EDBConnectionType
enum class EDBConnectionType : uint8 {
	TCP = 0,
	NamedPipe = 1,
	EDBConnectionType_MAX = 2
};

// Enum WTL.EDBDriverType
enum class EDBDriverType : uint8 {
	None = 0,
	MySQL = 1,
	MySQLDevart = 2,
	MariaDB = 3,
	EDBDriverType_MAX = 4
};

// Enum WTL.EWTLActivatableAnomalyState
enum class EWTLActivatableAnomalyState : uint8 {
	Idle = 0,
	BeginActivate = 1,
	Activated = 2,
	EWTLActivatableAnomalyState_MAX = 3
};

// Enum WTL.EWTLAIStateDeath
enum class EWTLAIStateDeath : uint8 {
	None = 0,
	ToDeath = 1,
	Death = 2,
	EWTLAIStateDeath_MAX = 3
};

// Enum WTL.EWTLAmbientSoundDayTimeType
enum class EWTLAmbientSoundDayTimeType : uint8 {
	AllDay = 0,
	Day = 1,
	Night = 2,
	EWTLAmbientSoundDayTimeType_MAX = 3
};

// Enum WTL.EWTLAmbientSoundLocationType
enum class EWTLAmbientSoundLocationType : uint8 {
	Foreground = 0,
	Underground = 1,
	EWTLAmbientSoundLocationType_MAX = 2
};

// Enum WTL.EWTLReloadingNotifyType
enum class EWTLReloadingNotifyType : uint8 {
	ReloadStart = 0,
	ReloadEnd = 1,
	EWTLReloadingNotifyType_MAX = 2
};

// Enum WTL.EWTLAnomalyCheckResult
enum class EWTLAnomalyCheckResult : uint8 {
	Result_False = 0,
	Result_True = 1,
	Result_MAX = 2
};

// Enum WTL.EWTLAnomalyActionResult
enum class EWTLAnomalyActionResult : uint8 {
	Failed = 0,
	Success = 1,
	EWTLAnomalyActionResult_MAX = 2
};

// Enum WTL.EWTLBPLogVerbosity
enum class EWTLBPLogVerbosity : uint8 {
	Information = 4,
	Warning = 3,
	Error = 2,
	Fatal = 1,
	EWTLBPLogVerbosity_MAX = 5
};

// Enum WTL.EWTLBulletHellTraceResultType
enum class EWTLBulletHellTraceResultType : uint8 {
	None = 0,
	Character = 1,
	WorldStatic = 2,
	EWTLBulletHellTraceResultType_MAX = 3
};

// Enum WTL.EWTLBulletHellAngularType
enum class EWTLBulletHellAngularType : uint8 {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EWTLBulletHellAngularType_MAX = 3
};

// Enum WTL.EWTLDisplayInputType
enum class EWTLDisplayInputType : uint8 {
	None = 0,
	InputUp = 1,
	InputDown = 2,
	InputRight = 3,
	InputLeft = 4,
	ButtonPressed1 = 5,
	ButtonPressed2 = 6,
	EWTLDisplayInputType_MAX = 7
};

// Enum WTL.EWTLCharacterAnimationInstanceMovementState
enum class EWTLCharacterAnimationInstanceMovementState : uint8 {
	None = 0,
	Stand = 1,
	StandWalking = 2,
	StandSprinting = 3,
	Crouch = 4,
	CrouchWalking = 5,
	Prone = 6,
	ProneWalking = 7,
	EWTLCharacterAnimationInstanceMovementState_MAX = 8
};

// Enum WTL.EWTLRootMotionControlLockingType
enum class EWTLRootMotionControlLockingType : uint8 {
	None = 0,
	LockOnlyYaw = 1,
	LockOnlyPitch = 2,
	LockAll = 3,
	EWTLRootMotionControlLockingType_MAX = 4
};

// Enum WTL.EWTLSimplifiedIdentificationType
enum class EWTLSimplifiedIdentificationType : uint8 {
	None = 0,
	OriginalSimplified = 1,
	HealthbarCombined = 2,
	CharacterNameOnly = 3,
	EWTLSimplifiedIdentificationType_MAX = 4
};

// Enum WTL.EWTLLadderMontageType
enum class EWTLLadderMontageType : uint8 {
	None = 0,
	LadderUpStart = 1,
	LadderUpEnd = 2,
	LadderDownStart = 3,
	LadderDownEnd = 4,
	EWTLLadderMontageType_MAX = 5
};

// Enum WTL.EWTLCharacterPreviewType
enum class EWTLCharacterPreviewType : uint8 {
	None = 0,
	CustomizationOnly = 1,
	Equipment = 2,
	EquipmentWithUsableItem = 3,
	EWTLCharacterPreviewType_MAX = 4
};

// Enum WTL.EWTLTurretState
enum class EWTLTurretState : uint8 {
	None = 0,
	Prewarm = 1,
	Firing = 2,
	Cooldown = 3,
	EWTLTurretState_MAX = 4
};

// Enum WTL.EWTLConfirmationType
enum class EWTLConfirmationType : uint8 {
	None = 0,
	DropItemFromInventory = 1,
	DestroyItemInInventory = 2,
	RemoveStash = 3,
	EWTLConfirmationType_MAX = 4
};

// Enum WTL.EWTLBackButtonActionType
enum class EWTLBackButtonActionType : uint8 {
	None = 0,
	BackToStoreItems = 1,
	BackToViewItem = 2,
	BackToCart = 3,
	EWTLBackButtonActionType_MAX = 4
};

// Enum WTL.EFontSize
enum class EFontSize : uint8 {
	None = 0,
	Default = 16,
	Increased = 18,
	EFontSize_MAX = 19
};

// Enum WTL.EWTLControlledPawnType
enum class EWTLControlledPawnType : uint8 {
	Monster = 0,
	Robot = 1,
	EWTLControlledPawnType_MAX = 2
};

// Enum WTL.EWTLEnemyNPCExclamationType
enum class EWTLEnemyNPCExclamationType : uint8 {
	None = 0,
	Attack = 1,
	DamageDone = 2,
	Grenade = 3,
	Reload = 4,
	Warning = 5,
	TargetSighted = 6,
	TargetListened = 7,
	TalkToTarget = 8,
	EWTLEnemyNPCExclamationType_MAX = 9
};

// Enum WTL.EWTLEnemyNPCSpawnType
enum class EWTLEnemyNPCSpawnType : uint8 {
	Wave = 0,
	ReplanishTheRanks = 1,
	EWTLEnemyNPCSpawnType_MAX = 2
};

// Enum WTL.EWTLCannotUseRangedWeaponOnClientSideReason
enum class EWTLCannotUseRangedWeaponOnClientSideReason : uint8 {
	None = 0,
	AmmoIsFireworkAndLocationIsUndeground = 1,
	EWTLCannotUseRangedWeaponOnClientSideReason_MAX = 2
};

// Enum WTL.EWTLDroneMovementMode
enum class EWTLDroneMovementMode : uint8 {
	None = 0,
	RotateAroundCharacter = 1,
	FollowCharacterFromAbove = 2,
	EWTLDroneMovementMode_MAX = 3
};

// Enum WTL.EWTLWeaponModificationPartsType
enum class EWTLWeaponModificationPartsType : uint8 {
	None = 0,
	Damage = 1,
	Accuracy = 2,
	Durability = 3,
	EWTLWeaponModificationPartsType_MAX = 4
};

// Enum WTL.EWTLCannotCraftRecipeInCraftObjectReason
enum class EWTLCannotCraftRecipeInCraftObjectReason : uint8 {
	None = 0,
	StorageIsFull = 1,
	NotEnoughAvailableSlotsInStorage = 2,
	EWTLCannotCraftRecipeInCraftObjectReason_MAX = 3
};

// Enum WTL.EWTLDebugSuggestionType
enum class EWTLDebugSuggestionType : uint8 {
	None = 0,
	Account = 1,
	Friend = 2,
	EWTLDebugSuggestionType_MAX = 3
};

// Enum WTL.EWTLCannotBuyItemReason
enum class EWTLCannotBuyItemReason : uint8 {
	None = 0,
	ItemIsOutOfStock = 1,
	ItemPriceHasBeenChanged = 2,
	EWTLCannotBuyItemReason_MAX = 3
};

// Enum WTL.EWTLPlayerPawnType
enum class EWTLPlayerPawnType : uint8 {
	NoneOrDead = 0,
	Character = 1,
	Monster = 2,
	Spectator = 3,
	EWTLPlayerPawnType_MAX = 4
};

// Enum WTL.EWTLAchievementRarity
enum class EWTLAchievementRarity : uint8 {
	Common = 0,
	Rare = 1,
	VeryRare = 2,
	UltraRare = 3,
	IncredibleRare = 4,
	Legendary = 5,
	EWTLAchievementRarity_MAX = 6
};

// Enum WTL.EWTLCharacterStateInVehicle
enum class EWTLCharacterStateInVehicle : uint8 {
	None = 0,
	Idle = 1,
	Riding = 2,
	Reverse = 3,
	Jump = 4,
	SlideRight = 5,
	SlideLeft = 6,
	Acceleration = 7,
	EWTLCharacterStateInVehicle_MAX = 8
};

// Enum WTL.EWTLVehicleState
enum class EWTLVehicleState : uint8 {
	None = 0,
	CharacterLanded = 1,
	CharacterUnlanded = 2,
	Idle = 3,
	EWTLVehicleState_MAX = 4
};

// Enum WTL.EWTLCannotTeleportOnFortificationReason
enum class EWTLCannotTeleportOnFortificationReason : uint8 {
	None = 0,
	NotEnoughTeleportationDeviceEnergy = 1,
	ControlFactionNotEqualCharacterFaction = 2,
	CharacterReputationTooLow = 3,
	CommandCoreEnergyNotEnoughForSafeZoneFunctionality = 4,
	EWTLCannotTeleportOnFortificationReason_MAX = 5
};

// Enum WTL.EWTLCheckType
enum class EWTLCheckType : uint8 {
	MustHaveAll = 0,
	MustHaveOneOf = 1,
	MustNotHaveAll = 2,
	MustNotHaveOneOf = 3,
	EWTLCheckType_MAX = 4
};

// Enum WTL.EWTLCharacterStateIndicatorNatureType
enum class EWTLCharacterStateIndicatorNatureType : uint8 {
	Neutral = 0,
	Positive = 1,
	Negative_Average = 2,
	Negative_Severe = 3,
	EWTLCharacterStateIndicatorNatureType_MAX = 4
};

// Enum WTL.EWTLCharacterEffectNatureType
enum class EWTLCharacterEffectNatureType : uint8 {
	Negative = 0,
	Positive = 1,
	EWTLCharacterEffectNatureType_MAX = 2
};

// Enum WTL.EWTLStoreItemType
enum class EWTLStoreItemType : uint8 {
	All = 0,
	Weapons = 1,
	Ammo = 2,
	Medicine = 3,
	Equipment = 4,
	ClothesAndArmor = 5,
	Resources = 6,
	Other = 7,
	Tokens = 8,
	Bundles = 9,
	NewItems = 10,
	EWTLStoreItemType_MAX = 11
};

// Enum WTL.EWTLCountryRegion
enum class EWTLCountryRegion : uint8 {
	Unknown = 0,
	Asia = 1,
	America = 2,
	Europe = 3,
	CIS = 4,
	Oceania = 5,
	EWTLCountryRegion_MAX = 6
};

// Enum WTL.EWTLMicrotransactionType
enum class EWTLMicrotransactionType : uint8 {
	Credits = 0,
	Premium = 1,
	EWTLMicrotransactionType_MAX = 2
};

// Enum WTL.EWTLCannotPutToAccountInventoryReason
enum class EWTLCannotPutToAccountInventoryReason : uint8 {
	None = 0,
	CannotPut = 1,
	HaveNoPremium = 2,
	LoadedWeapon = 3,
	WeaponWithAttachments = 4,
	ModifiedWeapon = 5,
	AmmoLoadedInWeapon = 6,
	VehicleCurrentInUse = 7,
	ClothesWithArmorPlates = 8,
	EWTLCannotPutToAccountInventoryReason_MAX = 9
};

// Enum WTL.EWTLCannotTakeFromAccountInventoryReason
enum class EWTLCannotTakeFromAccountInventoryReason : uint8 {
	None = 0,
	CannotTake = 1,
	LowCharacterLevel = 2,
	NotEnoughAvailableSlotsInInventory = 3,
	EWTLCannotTakeFromAccountInventoryReason_MAX = 4
};

// Enum WTL.EWTLClanScoreType
enum class EWTLClanScoreType : uint8 {
	None = 0,
	PVP = 1,
	PVE = 2,
	Craft = 3,
	Technology = 4,
	EWTLClanScoreType_MAX = 5
};

// Enum WTL.EWTLSlotMachineSymbolCheckType
enum class EWTLSlotMachineSymbolCheckType : uint8 {
	NotAny = 0,
	Any = 1,
	EWTLSlotMachineSymbolCheckType_MAX = 2
};

// Enum WTL.EWTLSlotMachineSymbol
enum class EWTLSlotMachineSymbol : uint8 {
	Blank = 0,
	Cherry = 1,
	Bar = 2,
	DoubleBar = 3,
	TripleBar = 4,
	Seven = 5,
	Jackpot = 6,
	EWTLSlotMachineSymbol_MAX = 7
};

// Enum WTL.EWTLComboBoxStringType
enum class EWTLComboBoxStringType : uint8 {
	None = 0,
	CommonComboBoxString = 1,
	StoreComboBoxString = 2,
	HUDComboBoxString = 3,
	PDAComboBoxString = 4,
	EWTLComboBoxStringType_MAX = 5
};

// Enum WTL.EWTLCheckBoxType
enum class EWTLCheckBoxType : uint8 {
	None = 0,
	CommonCheckBox = 1,
	HUDCheckBox = 2,
	PDACheckBox = 3,
	EWTLCheckBoxType_MAX = 4
};

// Enum WTL.EWTLSwitcherType
enum class EWTLSwitcherType : uint8 {
	None = 0,
	PageSwitcher = 1,
	ParameterSwitcher = 2,
	Common_Parameter_PointSpin = 3,
	HUD_Parameter_PointSpin = 4,
	PDA_Parameter_PointSpin = 5,
	EWTLSwitcherType_MAX = 6
};

// Enum WTL.EWTLCommonClickedItemType
enum class EWTLCommonClickedItemType : uint8 {
	None = 0,
	CommonClickedItem = 1,
	MainMenuClickedItem = 2,
	StoreClickedItem = 3,
	HUDClickedItem = 4,
	PDAClickedItem = 5,
	EWTLCommonClickedItemType_MAX = 6
};

// Enum WTL.EWTLCommonButtonType
enum class EWTLCommonButtonType : uint8 {
	None = 0,
	CommonButton = 1,
	CommonTabButton = 2,
	CommonTypeButton = 3,
	HUDButton = 4,
	HUDTabButton = 5,
	HUDPopupMenuButton = 6,
	PDAButton = 7,
	ColorButton = 8,
	StoreButton = 9,
	ColorPresetButton = 10,
	EWTLCommonButtonType_MAX = 11
};

// Enum WTL.EWTLFoodActionType
enum class EWTLFoodActionType : uint8 {
	None = 0,
	Drink = 1,
	Eat = 2,
	EWTLFoodActionType_MAX = 3
};

// Enum WTL.EWTLMessageDialogText
enum class EWTLMessageDialogText : uint8 {
	HasNotPurchasedCustomizationItemsErrorText = 0,
	NotEnoughTokensToBuyWantToPopUpErrorText = 1,
	EWTLMessageDialogText_MAX = 2
};

// Enum WTL.EWTLLootBoxType
enum class EWTLLootBoxType : uint8 {
	None = 0,
	Beginner = 1,
	Regular = 2,
	Advanced = 3,
	Special = 4,
	Rare = 5,
	EWTLLootBoxType_MAX = 6
};

// Enum WTL.EWTLSocialNetworkType
enum class EWTLSocialNetworkType : uint8 {
	None = 0,
	VK = 1,
	Facebook = 2,
	Twitter = 3,
	EWTLSocialNetworkType_MAX = 4
};

// Enum WTL.EWTLArenaMatchState
enum class EWTLArenaMatchState : uint8 {
	None = 0,
	WaitingForStart = 1,
	InProgress = 2,
	Done = 3,
	EWTLArenaMatchState_MAX = 4
};

// Enum WTL.EWTLButtonText
enum class EWTLButtonText : uint8 {
	None = 0,
	OK = 1,
	Cancel = 2,
	Yes = 3,
	No = 4,
	Apply = 5,
	Back = 6,
	TopUp = 7,
	Send = 8,
	Take = 9,
	TakeAll = 10,
	Update = 11,
	Log = 12,
	Settings = 13,
	Withdraw = 14,
	Deposit = 15,
	Details = 16,
	Open = 17,
	Close = 18,
	Receive = 19,
	Buy = 20,
	Info = 21,
	ThreeD = 22,
	Play = 23,
	Set = 24,
	Add = 25,
	Remove1 = 26,
	Remove2 = 27,
	RemoveAll1 = 28,
	RemoveAll2 = 29,
	Delete = 30,
	DeleteAll = 31,
	Edit = 32,
	Convert = 33,
	Unite = 34,
	Read = 35,
	Create = 36,
	Rename = 37,
	Execute = 38,
	Save = 39,
	InviteToGroup = 40,
	Exchange = 41,
	ClanApplication = 42,
	EWTLButtonText_MAX = 43
};

// Enum WTL.EWTLTutorialMessageType
enum class EWTLTutorialMessageType : uint8 {
	None = 0,
	Tutorial = 1,
	Warning = 2,
	EWTLTutorialMessageType_MAX = 3
};

// Enum WTL.EWTLTutorialMessage
enum class EWTLTutorialMessage : uint8 {
	None = 0,
	ShowPDA = 1,
	ShowMap = 2,
	ShowMapLegend = 3,
	EmotionsMenu = 9,
	FirstSkillPoint = 10,
	GasMaskStuffSlot = 16,
	HasSteamInventoryItems = 20,
	PlaceStash = 21,
	AccountInventoryInStore = 22,
	AccountInventoryInStoreFastAccess = 23,
	HungerAffects = 24,
	ThirstAffects = 25,
	Satiety = 26,
	Exhaustion = 27,
	DelayedDeathSanatoriumTutorial = 28,
	WantToPlacePremiumStash = 29,
	PlacedPremiumStash = 30,
	EWTLTutorialMessage_MAX = 31
};

// Enum WTL.EWTLRepairKitState
enum class EWTLRepairKitState : uint8 {
	None = 0,
	StartRepair = 1,
	StopRepair = 2,
	OutOfEnergy = 3,
	EWTLRepairKitState_MAX = 4
};

// Enum WTL.EWTLFortificationNotificationState
enum class EWTLFortificationNotificationState : uint8 {
	None = 0,
	StartLoosingPoint = 1,
	StartCapturingPoint = 2,
	PointCaptured = 3,
	PointSecured = 4,
	PointLost = 5,
	PointCaptureFailed = 6,
	EWTLFortificationNotificationState_MAX = 7
};

// Enum WTL.EWTLFortificationPointState
enum class EWTLFortificationPointState : uint8 {
	None = 0,
	CaptureStarted = 1,
	Captured = 2,
	Restored = 3,
	EWTLFortificationPointState_MAX = 4
};

// Enum WTL.EWTLFortificationJammerState
enum class EWTLFortificationJammerState : uint8 {
	None = 0,
	Connected = 1,
	ConnectedOutOfEnergy = 2,
	ConnectionRefused = 3,
	UnableToConnect = 4,
	EWTLFortificationJammerState_MAX = 5
};

// Enum WTL.EWTLEquipmentType
enum class EWTLEquipmentType : uint8 {
	None = 0,
	NightVision = 1,
	NDPDetector = 2,
	MetalDetector = 3,
	RespiratoryProtection = 4,
	RadiationDetector = 5,
	PersonalEnergyShield = 6,
	EWTLEquipmentType_MAX = 7
};

// Enum WTL.EWTLAITeam
enum class EWTLAITeam : uint8 {
	None = 0,
	Vagrants = 1,
	Monsters = 2,
	Confederation = 250,
	BlackSunset = 251,
	Neutrals = 255,
	EWTLAITeam_MAX = 256
};

// Enum WTL.EWTLCharacterStunhitDirection
enum class EWTLCharacterStunhitDirection : uint8 {
	None = 0,
	Right = 1,
	Left = 2,
	InPlace = 3,
	Back = 4,
	FallDown = 5,
	SpikeInShoulder = 6,
	SpikeInStomach = 7,
	SpikeInHip = 8,
	EWTLCharacterStunhitDirection_MAX = 9
};

// Enum WTL.EWTLRenderTargetType
enum class EWTLRenderTargetType : uint8 {
	Square = 0,
	Landscape = 1,
	EWTLRenderTargetType_MAX = 2
};

// Enum WTL.EWTLDialogMessageType
enum class EWTLDialogMessageType : uint8 {
	Information = 0,
	Warning = 1,
	Error = 2,
	EWTLDialogMessageType_MAX = 3
};

// Enum WTL.EWTLNPCType
enum class EWTLNPCType : uint8 {
	None = 0,
	Doctor = 1,
	Stockman = 2,
	Gunsmith = 3,
	Trader = 4,
	Barman = 5,
	BlackMarketDealer = 6,
	EWTLNPCType_MAX = 7
};

// Enum WTL.EWTLReportFormResponseError
enum class EWTLReportFormResponseError : uint8 {
	None = 0,
	ServerDoesNotResponse = 1,
	ServerRequestError = 2,
	EWTLReportFormResponseError_MAX = 3
};

// Enum WTL.EWTLReportFormState
enum class EWTLReportFormState : uint8 {
	FeedbackForm = 0,
	RequestSending = 1,
	RequestSuccess = 2,
	RequestError = 3,
	EWTLReportFormState_MAX = 4
};

// Enum WTL.EWTLUseMenuActionType
enum class EWTLUseMenuActionType : uint8 {
	None = 0,
	ShowInformationAboutCharacter = 1,
	SendTextChatMessageToCharacter = 2,
	GiveTokensToCharacter = 3,
	OfferBarterToCharacter = 4,
	InviteCharacterToGroup = 5,
	MuteCharacter = 6,
	UnmuteCharacter = 7,
	TextChatMuteCharacter = 8,
	TextChatUnmuteCharacter = 9,
	ReportCharacter = 10,
	CommendCharacter = 11,
	Pickup = 12,
	Charge = 13,
	Use = 14,
	OpenAmmoBox = 15,
	EWTLUseMenuActionType_MAX = 16
};

// Enum WTL.EWTLTriggerObjectActionType
enum class EWTLTriggerObjectActionType : uint8 {
	None = 0,
	Read = 1,
	Inspect = 2,
	InsertBatteries = 3,
	TakeAndRead = 4,
	Take = 5,
	EWTLTriggerObjectActionType_MAX = 6
};

// Enum WTL.EWTLQTEType
enum class EWTLQTEType : uint8 {
	None = 0,
	Repetative = 1,
	RepetativeWithDecreasing = 2,
	MachingSequence = 3,
	RepetativeControlsEnabled = 4,
	RepetativeWithDecreasingControlsEnabled = 5,
	MachingSequenceWithDecreasing = 6,
	Fishing = 7,
	EWTLQTEType_MAX = 8
};

// Enum WTL.EWTLArmorPlateType
enum class EWTLArmorPlateType : uint8 {
	None = 0,
	FrontPlate = 1,
	BackPlate = 2,
	EWTLArmorPlateType_MAX = 3
};

// Enum WTL.EWTLHUDRequestWindowType
enum class EWTLHUDRequestWindowType : uint8 {
	None = 0,
	GroupInvite = 1,
	ClanInvite = 2,
	BarterOffer = 3,
	MarkerSharing = 4,
	EWTLHUDRequestWindowType_MAX = 5
};

// Enum WTL.EWTLMoneyTransferWindowWidgetType
enum class EWTLMoneyTransferWindowWidgetType : uint8 {
	None = 0,
	WithdrawFromClanStorage = 1,
	DepositToClanStorage = 2,
	EWTLMoneyTransferWindowWidgetType_MAX = 3
};

// Enum WTL.EWTLCommissionAddUpdateWindowType
enum class EWTLCommissionAddUpdateWindowType : uint8 {
	None = 0,
	Add = 1,
	Update = 2,
	EWTLCommissionAddUpdateWindowType_MAX = 3
};

// Enum WTL.EWTLCheatType
enum class EWTLCheatType : uint8 {
	None = 0,
	RX_Throttle = 1,
	TX_Throttle = 2,
	BadPing = 3,
	TimeDiscrepancy = 4,
	Unrandomizer = 5,
	ClientValuesHack = 6,
	SpeedHack = 7,
	FireMacrosUse = 8,
	HitOutsideHitbox = 9,
	FireNotInView = 10,
	FireWithNoAmmo = 11,
	FireWithHighRate = 12,
	CheatSoftwareDetected = 13,
	SuspiciousModule = 100,
	AnticheatResponseFailed = 200,
	EWTLCheatType_MAX = 201
};

// Enum WTL.EWTLCountdownSliderWidgetFillingType
enum class EWTLCountdownSliderWidgetFillingType : uint8 {
	Increasing = 0,
	Decreasing = 1,
	EWTLCountdownSliderWidgetFillingType_MAX = 2
};

// Enum WTL.EWTLActionTimerWidgetType
enum class EWTLActionTimerWidgetType : uint8 {
	None = 0,
	AnomalyResearch = 1,
	SafeZoneLeaveInvulnerableCooldown = 2,
	ItemPlacement = 3,
	EWTLActionTimerWidgetType_MAX = 4
};

// Enum WTL.EWTLWarningTitleWidgetType
enum class EWTLWarningTitleWidgetType : uint8 {
	CannotPickupNotAnyAvailableSlotInInventory = 0,
	CannotMoveInventoryOverload = 1,
	CannotSprintInventoryOverload = 2,
	CannotPickupInventoryOverload = 3,
	CannotUseNotCondition = 4,
	CannotUseNotEnergy = 5,
	WeaponReloadAdvice = 6,
	CannotUsePortal = 7,
	CannotInviteToGroupAlreadyIn = 8,
	NotInClan = 9,
	NotInFaction = 10,
	CannotUsePlaceableStuff = 11,
	CannotCollectWaterInventoryOverload = 12,
	CannotCollectWaterInventoryWillBeOverloaded = 13,
	CannotCollectWaterNotAnyAvailableSlotInInventory = 14,
	GunOverheated = 15,
	NoAmmoForShooting = 16,
	NoNutsInInventoryToThrow = 17,
	EventJoined = 18,
	EventLeaved = 19,
	EventCompleted = 20,
	EventFailed = 21,
	FishingRodIsBroken = 22,
	MustBeInAFishingZoneToUseFishingRod = 23,
	ToUseFishingRodAimAtTheWater = 24,
	TooCloseToUseFishingRod = 25,
	TooFarToUseFishingRod = 26,
	FishDontBite = 27,
	HaveNotAnyBaitInInventory = 28,
	NotEnoughStaminaToSprint = 29,
	NotEnoughStaminaToJump = 30,
	CannotUseVehicleNotAllowedInLocation = 31,
	CannotUseVehicleIsInSafeZone = 32,
	CannotSpawnVehicleOnUnevenSurface = 33,
	ResourceWasDepletedInSource = 34,
	NoOrNotEnoughRequiredItemsToGatherResourceFromSource = 35,
	FireWithCurrentLoadedAmmoIsProhibitedInThisLocation = 36,
	EWTLWarningTitleWidgetType_MAX = 37
};

// Enum WTL.EWTLItemSlotActionPermission
enum class EWTLItemSlotActionPermission : uint8 {
	AddOnCustomization = 0,
	AddForModification = 1,
	AddWeaponPartToExchange = 2,
	RemoveFromCustomization = 3,
	RemoveFromModification = 4,
	RemoveWeaponPartFromExchange = 5,
	OpenExtractor = 6,
	CloseExtractor = 7,
	AddToStimulatorContainerSlot = 8,
	RemoveFromStimulatorContainerSlot = 9,
	AddOnSale = 10,
	AddOnRepair = 11,
	AddToExtractor = 12,
	AddToBarter = 13,
	AddToSteamInventory = 14,
	AddToMailBox = 15,
	AddToUtilization = 16,
	AddToCommission = 17,
	AddToExistingItemOnCommission = 18,
	RemoveFromSale = 19,
	RemoveFromRepair = 20,
	RemoveFromExtractor = 21,
	RemoveFromBarter = 22,
	RemoveFromSteamInventory = 23,
	RemoveFromMailBox = 24,
	RemoveFromUtilization = 25,
	PutInStorage = 26,
	TakeFromStorage = 27,
	PutInClanStorage = 28,
	TakeFromClanStorage = 29,
	PutToAccountInventory = 30,
	TakeFromAccountInventory = 31,
	AssignToFastAccess = 32,
	RemoveFromFastAccess = 33,
	PlaceItem = 34,
	AttachToWeaponByStuffItem = 35,
	AttachStuffItemToWeapon = 36,
	RemoveAttachmentFromWeapon = 37,
	RemoveAttachmentFromWeaponBySlot = 38,
	RemoveAllAttachmentsFromWeapon = 39,
	UseItem = 40,
	ChargeEnergySourceItemToStuff = 41,
	ChargeStuffItemByEnergySource = 42,
	ChangeGasMaskFilterFromFilter = 43,
	ChangeGasMaskFilterFromGasMask = 44,
	RefuelFuelSourceItemToStuff = 45,
	RefuelStuffItemByFuelSource = 46,
	PlaceArtefactItemInContainer = 47,
	RemoveArtefactItemFromContainer = 48,
	InstallPDAModule = 49,
	RepairWeaponByKit = 50,
	RepairClothesByKit = 51,
	ModifyWeaponByKit = 52,
	ModifyClothesByKit = 53,
	PaintWeaponBySprayCan = 54,
	PaintClothesBySprayCan = 55,
	LoadAmmoToWeapon = 56,
	LoadWeapon = 57,
	UnloadWeapon = 58,
	BreakWeapon = 59,
	InstallArmoredPlate = 60,
	RemoveArmoredPlate = 61,
	UseNewPassport = 62,
	UseClassCertificate = 63,
	UseGenderChangeCertificate = 64,
	DrinkItem = 65,
	EatItem = 66,
	ViewItem = 67,
	ReadItem = 68,
	CutFish = 69,
	EquipClothesItem = 70,
	UnequipClothesItem = 71,
	OpenArmoredPlatesWindow = 72,
	RemoveAllArmoredPlates = 73,
	EquipStuffItem = 74,
	UnequipStuffItem = 75,
	CombineItem = 76,
	SplitItem = 77,
	DropItem = 78,
	DestroyItem = 79,
	ShowItemInformation = 80,
	RepairByRepairDevice = 81,
	EWTLItemSlotActionPermission_MAX = 82
};

// Enum WTL.EWTLMonsterActivityState
enum class EWTLMonsterActivityState : uint8 {
	Normal = 0,
	Passive = 1,
	DeepSleep = 2,
	EWTLMonsterActivityState_MAX = 3
};

// Enum WTL.EWTLMonsterActionBase
enum class EWTLMonsterActionBase : uint8 {
	None = 0,
	MainAttack = 1,
	SecondaryAttack = 2,
	SpecialAbility0 = 3,
	SpecialAbility1 = 4,
	SpecialAbility2 = 5,
	SpecialAbility3 = 6,
	SpecialAbility4 = 7,
	SpecialAbility5 = 8,
	Immobilized = 9,
	Stunned = 10,
	Die = 11,
	CustomAction0 = 12,
	CustomAction1 = 13,
	CustomAction2 = 14,
	CustomAction3 = 15,
	CustomAction4 = 16,
	CustomAction5 = 17,
	CustomAction6 = 18,
	CustomAction7 = 19,
	CustomAction8 = 20,
	CustomAction9 = 21,
	EWTLMonsterActionBase_MAX = 22
};

// Enum WTL.EWTLMonsterAttachState
enum class EWTLMonsterAttachState : uint8 {
	None = 0,
	AttachTo = 1,
	Attached = 2,
	DetachTo = 3,
	Detached = 4,
	AttachedForward = 5,
	AttachedBack = 6,
	EWTLMonsterAttachState_MAX = 7
};

// Enum WTL.EWTLMonsterAttackModificator
enum class EWTLMonsterAttackModificator : uint8 {
	AllowCritical = 0,
	DisallowCritical = 1,
	AlwaysCritical = 2,
	EWTLMonsterAttackModificator_MAX = 3
};

// Enum WTL.EWTLMonsterStateFollowTarget
enum class EWTLMonsterStateFollowTarget : uint8 {
	MoveTo = 0,
	Attack = 1,
	FarAttack = 2,
	Hide = 3,
	Attach = 4,
	AttachedForward = 5,
	Detach = 6,
	WithoutStateChange = 7,
	AttachedBack = 8,
	RandomLocation = 9,
	JumpToEnemy = 10,
	EWTLMonsterStateFollowTarget_MAX = 11
};

// Enum WTL.EWTMonsterSecondaryState
enum class EWTMonsterSecondaryState : uint8 {
	Idle = 0,
	Follow = 1,
	MoveTo = 2,
	Attack = 3,
	MoveToForFarAttack = 4,
	FarAttack = 5,
	Attach1 = 6,
	Attach2 = 7,
	Attach3 = 8,
	Attach4 = 9,
	Detach = 10,
	RandomLocation = 11,
	JumpToEnemy = 12,
	HearingMoveTo = 13,
	Hide = 14,
	Stealth = 15,
	MovingInStealth = 16,
	CustomAction0 = 17,
	CustomAction1 = 18,
	CustomAction2 = 19,
	CustomAction3 = 20,
	CustomAction4 = 21,
	CustomAction5 = 22,
	SpecialAbility0 = 23,
	SpecialAbility1 = 24,
	SpecialAbility2 = 25,
	SpecialAbility3 = 26,
	EWTMonsterSecondaryState_MAX = 27
};

// Enum WTL.EWTLMonsterState
enum class EWTLMonsterState : uint8 {
	Idle = 0,
	Walk = 1,
	AggressUp = 2,
	FollowTarget = 3,
	Attack = 4,
	Escaping = 5,
	Jump = 6,
	JumpToEnemy = 7,
	Teleport = 8,
	Fly = 9,
	FarAttackToBadCharacter = 10,
	ToStealth = 11,
	InStealth = 12,
	StealthMoveTo = 13,
	StealthFollowEnemy = 14,
	FromStealth = 15,
	DropItemFromCharacter = 16,
	CustomAction0 = 17,
	CustomAction1 = 18,
	CustomAction2 = 19,
	CustomAction3 = 20,
	CustomAction4 = 21,
	CustomAction5 = 22,
	GetRandomTarget = 23,
	PlayMontage = 24,
	ToSacrifice = 25,
	FindTheVictim = 26,
	SpawnMonster = 27,
	EWTLMonsterState_MAX = 28
};

// Enum WTL.EWTLMonsterActionType
enum class EWTLMonsterActionType : uint8 {
	None = 0,
	MainAttack = 1,
	SecondaryAttack = 2,
	SpecialAbility0 = 3,
	SpecialAbility1 = 4,
	SpecialAbility2 = 5,
	SpecialAbility3 = 6,
	SpecialAbility4 = 7,
	SpecialAbility5 = 8,
	Idle0 = 9,
	Idle1 = 10,
	Idle2 = 11,
	Idle3 = 12,
	Idle4 = 13,
	Idle5 = 14,
	Immobilized = 15,
	Stunned = 16,
	Die = 17,
	CustomAction0 = 18,
	CustomAction1 = 19,
	CustomAction2 = 20,
	CustomAction3 = 21,
	CustomAction4 = 22,
	CustomAction5 = 23,
	CustomAction6 = 24,
	ToStealth = 25,
	InStealth = 26,
	FromStealth = 27,
	Aggression = 28,
	FarAttack0 = 29,
	FarAttack1 = 30,
	FarAttackToBadEnemy1 = 31,
	EWTLMonsterActionType_MAX = 32
};

// Enum WTL.EWTLMonsterMovementMode
enum class EWTLMonsterMovementMode : uint8 {
	None = 0,
	Loaf = 1,
	Walk = 2,
	Sprint = 3,
	EWTLMonsterMovementMode_MAX = 4
};

// Enum WTL.EWTLPDAWidget
enum class EWTLPDAWidget : uint8 {
	Menu = 0,
	CharacterInfo = 1,
	CharacterParameters = 2,
	CharacterSkills = 3,
	QuestLog = 4,
	Map = 5,
	Mail = 6,
	Group = 7,
	Clan = 8,
	Faction = 9,
	FriendsAndEnemies = 10,
	CraftRecipes = 11,
	Achievements = 12,
	Settings = 13,
	Premium = 14,
	NVIDIA_Highlights = 15,
	SocialNetworkVK = 16,
	SocialNetworkFacebook = 17,
	EWTLPDAWidget_MAX = 18
};

// Enum WTL.EWTLCustomizationColorPresetType
enum class EWTLCustomizationColorPresetType : uint8 {
	None = 0,
	Hair = 1,
	Skin = 2,
	Clothes = 3,
	Feet = 4,
	Backpack = 5,
	EWTLCustomizationColorPresetType_MAX = 6
};

// Enum WTL.EWTLMonsterDangerLevel
enum class EWTLMonsterDangerLevel : uint8 {
	None = 0,
	Low = 1,
	BelowNormal = 2,
	Normal = 3,
	AboveNormal = 4,
	High = 5,
	Critical = 6,
	EWTLMonsterDangerLevel_MAX = 7
};

// Enum WTL.EWTLMedicineEffectType
enum class EWTLMedicineEffectType : uint8 {
	None = 0,
	Strength = 1,
	Dexterity = 2,
	Stamina = 3,
	Accuracy = 4,
	Intelligence = 5,
	Fortune = 6,
	MaxHealth = 7,
	EWTLMedicineEffectType_MAX = 8
};

// Enum WTL.EWTLSuicideState
enum class EWTLSuicideState : uint8 {
	None = 0,
	SuicideInProgress = 1,
	SuicideDone = 2,
	EWTLSuicideState_MAX = 3
};

// Enum WTL.EWTLWeaponAttachmentType
enum class EWTLWeaponAttachmentType : uint8 {
	None = 0,
	RedDotSight = 1,
	Scope = 2,
	MuzzleBrake = 3,
	Silencer = 4,
	Flashlight = 5,
	Laser = 6,
	EWTLWeaponAttachmentType_MAX = 7
};

// Enum WTL.EWTLWeaponAttachmentSlotType
enum class EWTLWeaponAttachmentSlotType : uint8 {
	None = 0,
	Muzzle = 1,
	Flashlight = 2,
	Scope = 3,
	EWTLWeaponAttachmentSlotType_MAX = 4
};

// Enum WTL.EWTLParameterInfluenceType
enum class EWTLParameterInfluenceType : uint8 {
	Add = 0,
	Multiply = 1,
	Set = 2,
	EWTLParameterInfluenceType_MAX = 3
};

// Enum WTL.EWTLClanParameter
enum class EWTLClanParameter : uint8 {
	None = 0,
	PVPExperienceMultiplier = 1,
	PVEExperienceMultiplier = 2,
	PVPDamageMultiplier = 3,
	PVEDamageMultiplier = 4,
	ItemExperienceMultiplier = 5,
	ClanStorageMaxWeightMultiplier = 6,
	InventoryMaxWeightMultiplier = 7,
	ItemProductionSpeedMultiplier = 8,
	FactionTechonologiesLevel = 9,
	MedicineEfficiencyMultiplier = 10,
	KnifePVPDamageMultiplier = 11,
	PistolPVPDamageMultiplier = 12,
	ShotgunPVPDamageMultiplier = 13,
	SMGPVPDamageMultiplier = 14,
	AssaultRiflePVPDamageMultiplier = 15,
	RiflePVPDamageMultiplier = 16,
	MachinegunPVPDamageMultiplier = 17,
	GrenadeLauncherPVPDamageMultiplier = 18,
	ExplosivePVPDamageMultiplier = 19,
	KnifePVEDamageMultiplier = 20,
	PistolPVEDamageMultiplier = 21,
	ShotgunPVEDamageMultiplier = 22,
	SMGPVEDamageMultiplier = 23,
	AssaultRiflePVEDamageMultiplier = 24,
	RiflePVEDamageMultiplier = 25,
	MachinegunPVEDamageMultiplier = 26,
	GrenadeLauncherPVEDamageMultiplier = 27,
	ExplosivePVEDamageMultiplier = 28,
	MovementSpeedMultiplier = 29,
	MonsterPartsDropChanceMultiplier = 30,
	ResourceDropChanceMultiplier = 31,
	MiningChanceMultiplier = 32,
	PVPCriticalChanceMultiplier = 33,
	PVECriticalChanceMultiplier = 34,
	EWTLClanParameter_MAX = 35
};

// Enum WTL.EWTLCharacterParameter
enum class EWTLCharacterParameter : uint8 {
	None = 0,
	CriticalDamageChance = 1,
	AvoidCriticalDamageChance = 2,
	ResourceDropChance = 3,
	MaxHealth = 4,
	MaxStamina = 5,
	TakenDamageAmount = 6,
	Accuracy = 7,
	MovementSpeed = 8,
	EnvironmentResistance = 9,
	SatietyHealthRegenerationRate = 10,
	HealingEfficiency = 11,
	WeaponHandlingSpeed = 12,
	DeathLootLoss = 13,
	UsingItemsExperienceAmount = 14,
	UsingRepairKitsEfficiency = 15,
	SaveLockpicksChance = 16,
	iHR_Efficiency = 17,
	AdditionalInventorySlots = 18,
	MaxInventoryWeight = 19,
	ItemProductionSpeed = 20,
	AdditionalProductionQueueSlots = 21,
	PVP_Damage = 22,
	PVP_SlowChanceOnHit = 23,
	PVP_BleedingChanceOnHit = 24,
	PVP_KillLootAmount = 25,
	PVE_EnemyDamage = 26,
	PVE_MonsterDamage = 27,
	PVE_MonsterKillLootAmount = 28,
	PVE_MonsterKillExperienceAmount = 29,
	MeleeDamage = 30,
	MeleeBleedingChance = 31,
	MeleeCriticalDamageChance = 32,
	PistolDamage = 33,
	PistolAccuracy = 34,
	PistolCriticalDamageChance = 35,
	SubMachineGunDamage = 36,
	SubMachineGunAccuracy = 37,
	ShotgunDamage = 38,
	RifleDamage = 39,
	RifleAccuracy = 40,
	AssaultRifleDamage = 41,
	AssaultRifleAccuracy = 42,
	GrenadeLauncherDamage = 43,
	ExplosiveDamage = 44,
	ArmorWeightSpeedMultiplier = 45,
	EWTLCharacterParameter_MAX = 46
};

// Enum WTL.EWTLStateSpeedAIMonster
enum class EWTLStateSpeedAIMonster : uint8 {
	Stop = 0,
	Speed01 = 1,
	Speed03 = 2,
	Speed05 = 3,
	Speed07 = 4,
	Speed1 = 5,
	EWTLStateSpeedAIMonster_MAX = 6
};

// Enum WTL.EWTLItemSlotType
enum class EWTLItemSlotType : uint8 {
	None = 0,
	Inventory = 1,
	Storage = 2,
	FastAccess = 3,
	Armor = 4,
	Buy = 5,
	Repair = 6,
	Extractor = 7,
	Customization = 8,
	StimulatorContainer = 9,
	Stuff = 10,
	ClanStorage = 11,
	Barter = 12,
	ArmoredPlate = 13,
	Modification = 14,
	SteamInventory = 15,
	MailBox = 16,
	Utilization = 17,
	WeaponPartForExchange = 18,
	AccountInventory = 19,
	EWTLItemSlotType_MAX = 20
};

// Enum WTL.EWTLSplitWindowType
enum class EWTLSplitWindowType : uint8 {
	None = 0,
	SplitInPlayerInventory = 1,
	TakeFromStorage = 2,
	PutInBuyStorage = 3,
	PutInStorage = 4,
	PutInExtractorStorage = 5,
	TakeFromClanStorage = 6,
	PutInClanStorage = 7,
	PutInBarterStorage = 8,
	PutInSteamInventoryStorage = 9,
	PutInMailBoxStorage = 10,
	DropFromInventory = 11,
	DestroyInInventory = 12,
	TakeFromAccountInventory = 13,
	PutToAccountInventory = 14,
	PutInUtilizationStorage = 15,
	EWTLSplitWindowType_MAX = 16
};

// Enum WTL.EWTLFiltersChat
enum class EWTLFiltersChat : uint8 {
	Common = 0,
	Faction = 1,
	Private = 2,
	Log = 3,
	Server = 4,
	Loot = 5,
	Environment = 6,
	ConsoleCommand = 7,
	Chat = 8,
	GlobalChat = 9,
	Battle = 10,
	Group = 11,
	Clan = 12,
	Warning = 13,
	CollapseChatBox = 250,
	EWTLFiltersChat_MAX = 251
};

// Enum WTL.EWTLCharacterStateIndicatorType
enum class EWTLCharacterStateIndicatorType : uint8 {
	None = 0,
	InSafeZone = 1,
	MediumOverload = 2,
	HeavyOverload = 3,
	Invulnerable = 4,
	InMobileResurectionPointWorkZone = 5,
	InSafeZoneCannotSpawn = 6,
	InFortificationScoreZone = 7,
	AverageHunger = 8,
	SevereHunger = 9,
	AverageThirst = 10,
	SevereThirst = 11,
	Satiety = 12,
	PhysicalExhaustion = 13,
	InFishingZone = 14,
	EWTLCharacterStateIndicatorType_MAX = 15
};

// Enum WTL.EWTLMedicineEffectParameter
enum class EWTLMedicineEffectParameter : uint8 {
	None = 0,
	Health = 1,
	Strength = 2,
	Dexterity = 3,
	Stamina = 4,
	Accuracy = 5,
	Intelligence = 6,
	Fortune = 7,
	StaminaRecovery = 8,
	EWTLMedicineEffectParameter_MAX = 9
};

// Enum WTL.EWTLCustomMovementMode
enum class EWTLCustomMovementMode : uint8 {
	CUSTOM_None = 0,
	CUSTOM_LadderClimbing = 1,
	CUSTOM_VehicleRiding = 2,
	CUSTOM_MAX = 3
};

// Enum WTL.EWTLHUDNotificationType
enum class EWTLHUDNotificationType : uint8 {
	None = 0,
	Experience = 1,
	LevelUp = 2,
	BalanceIncrease = 3,
	BalanceDecrease = 4,
	InventoryChange = 5,
	ObjectivesChange = 6,
	TeamLeadChange = 7,
	GotItem = 8,
	LostItem = 9,
	Achievement = 10,
	SafeZoneEnter = 11,
	SafeZoneLeave = 12,
	ReputationIncrease = 13,
	ReputationDecrease = 14,
	SystemEvent = 15,
	SystemQuest = 16,
	ConfederationReputationIncrease = 17,
	ConfederationReputationDecrease = 18,
	BlackSunsetReputationIncrease = 19,
	BlackSunsetReputationDecrease = 20,
	MailMessageReceived = 21,
	QuestCompleted = 22,
	QuestFailed = 23,
	GetGroupInvite = 24,
	RemoveFromGroup = 25,
	BecameGroupLeader = 26,
	InstableNetworkConnection = 27,
	CraftObjectProcessStarted = 28,
	CraftObjectProcessFinished = 29,
	MailPackageArrived = 30,
	StuffItemAttachedToWeapon = 31,
	PDAModuleInstalled = 32,
	ItemRepaired = 33,
	ItemsRepaired = 34,
	ItemEquipped = 35,
	OnSendGlobalGroupInviteResponse = 36,
	OnSteamInventoryConsumeItemError = 37,
	JoinedClan = 38,
	LeftClan = 39,
	ExcludedFromClan = 40,
	FactionScoreIncrease = 41,
	FactionScoreDecrease = 42,
	FactionRankIncrease = 43,
	FactionRankDecrease = 44,
	FortificationStartLoosingPoint = 45,
	FortificationStartCapturingPoint = 46,
	ForticiationPointCaptured = 47,
	FortificationPointSecured = 48,
	FortificationPointLost = 49,
	FortificationPointCaptureFailed = 50,
	QuestCanBeCompleted = 51,
	AccountAchievementTrigger = 52,
	NewClanMemberRequest = 53,
	EnterFishingZone = 54,
	LeaveFishingZone = 55,
	ClanLevelUp = 56,
	AccountBalanceIncrease = 57,
	AccountBalanceDecrease = 58,
	TakeQuest = 59,
	ReceivedMarkerFromPlayer = 60,
	CanNotAcceptMarkerFromPlayer = 61,
	FishingLineBroke = 62,
	CanNotFishingInThisPlace = 63,
	EWTLHUDNotificationType_MAX = 64
};

// Enum WTL.EWTLArenaActivationVolumeType
enum class EWTLArenaActivationVolumeType : uint8 {
	None = 0,
	ActivatePlayerStart = 1,
	ActivatePlayerStartByRating = 2,
	ActivatableObject = 3,
	EWTLArenaActivationVolumeType_MAX = 4
};

// Enum WTL.EWTLEventLogRecordType
enum class EWTLEventLogRecordType : uint8 {
	None = 0,
	MonsterKilled = 1,
	CharacterKilled = 2,
	EnemyNPCKilled = 3,
	CharacterDied = 4,
	CharacterSuicide = 5,
	DamageToMonster = 6,
	DamageToEnemyNPC = 7,
	DamageToCharacter = 8,
	CriticalDamageToMonster = 9,
	CriticalDamageToEnemyNPC = 10,
	CriticalDamageToCharacter = 11,
	DamageFromMonster = 12,
	CriticalDamageFromMonster = 13,
	DamageFromEnemyNPC = 14,
	CriticalDamageFromEnemyNPC = 15,
	DamageFromCharacter = 16,
	CriticalDamageFromCharacter = 17,
	DamageFromEnvironment = 18,
	CharacterEntersLocation = 19,
	CharacterLeaveLocation = 20,
	StartMatch = 21,
	FinishMatch = 22,
	CharacterEarnsExperience = 23,
	CharacterLevelUp = 24,
	CharacterDestroyMonsterSpawnPoint = 25,
	CharacterGotItem = 26,
	CharacterLostItem = 27,
	CharacterDepositedItem = 28,
	CharacterTakeItem = 29,
	CharacterDropItem = 30,
	CharacterEarnsScores = 31,
	FactionEarnsScores = 32,
	EnemyPositionsSentToTeamSuccess = 33,
	EnemyPositionsSentToTeamError = 34,
	TeamLeadChanged = 35,
	CapturePointChanged = 36,
	PointCaptureByTeam = 37,
	PointCaptureByEnemy = 38,
	PointCaptureFailed = 39,
	SafeZoneEnter = 40,
	SafeZoneLeave = 41,
	ReputationIncrease = 42,
	ReputationDecrease = 43,
	BalanceChange = 44,
	ConfederationReputationIncrease = 45,
	ConfederationReputationDecrease = 46,
	BlackSunsetReputationIncrease = 47,
	BlackSunsetReputationDecrease = 48,
	InstableNetworkConnection = 49,
	MadeEffectToCharacter = 50,
	TakeItemFromAccountInventory = 51,
	PutItemToAccountInventory = 52,
	EWTLEventLogRecordType_MAX = 53
};

// Enum WTL.EWTLMonsterEventType
enum class EWTLMonsterEventType : uint8 {
	None = 0,
	MonsterMakeDamage = 1,
	StopedByDamage = 2,
	RecoverFromDamage = 3,
	Attack = 4,
	FarAttack = 5,
	EWTLMonsterEventType_MAX = 6
};

// Enum WTL.EWTLMonsterAIStateOfAggression
enum class EWTLMonsterAIStateOfAggression : uint8 {
	None = 0,
	Normal = 1,
	Hard = 2,
	EWTLMonsterAIStateOfAggression_MAX = 3
};

// Enum WTL.EWTLMonsterAIStateMoving
enum class EWTLMonsterAIStateMoving : uint8 {
	Stop = 0,
	Moving = 1,
	EWTLMonsterAIStateMoving_MAX = 2
};

// Enum WTL.EWTLMonsterAIState
enum class EWTLMonsterAIState : uint8 {
	Walk = 0,
	RateAggressUp = 1,
	FollowTarget = 2,
	Attack = 3,
	FarAttack = 4,
	FindInstigator = 5,
	Escaping = 6,
	TakeDamageHigh = 7,
	Stealth = 8,
	Bug = 250,
	EWTLMonsterAIState_MAX = 251
};

// Enum WTL.EWTLMonsterAnimationState
enum class EWTLMonsterAnimationState : uint8 {
	Movement = 0,
	Idle = 1,
	Attack = 2,
	FarAttack = 3,
	Damage = 4,
	RateAggressUp = 5,
	TakeDamageHight = 6,
	Stealth = 7,
	Death = 200,
	EWTLMonsterAnimationState_MAX = 201
};

// Enum WTL.EWTLMonsterAIStateAnim
enum class EWTLMonsterAIStateAnim : uint8 {
	None = 0,
	Movement = 1,
	Fly = 2,
	Idle = 3,
	Attack = 4,
	FarAttack = 5,
	Damage = 6,
	RateAggressUp = 7,
	TakeDamageHigh = 8,
	Stealth = 9,
	Death = 200,
	EWTLMonsterAIStateAnim_MAX = 201
};

// Enum WTL.EWTLUsableItemUseType
enum class EWTLUsableItemUseType : uint8 {
	None = 0,
	Main = 1,
	Alternative = 2,
	EWTLUsableItemUseType_MAX = 3
};

// Enum WTL.EWTLUsableItemState
enum class EWTLUsableItemState : uint8 {
	None = 0,
	Idle = 1,
	ReloadedOneRound = 2,
	ReloadedFullMagazine = 3,
	MissileThrow = 4,
	TacticalPlace = 5,
	TakeInArms = 6,
	PutToInventory = 7,
	MissileReadyToThrow = 8,
	MeleeWeaponHit = 9,
	ResourceMinerHit = 10,
	ResourceMinerZoneUse = 11,
	RepairItemUse = 12,
	HealingItemUse = 13,
	RechargeItem = 14,
	DetectorPowerButtonPress = 15,
	SetDetectorMode = 16,
	StartToUse = 17,
	EWTLUsableItemState_MAX = 18
};

// Enum WTL.FSteelTargetState
enum class FSteelTargetState : uint8 {
	None = 0,
	Rised = 1,
	Droped = 2,
	FSteelTargetState_MAX = 3
};

// Enum WTL.FSteelTargetType
enum class FSteelTargetType : uint8 {
	None = 0,
	AlwaysActive = 1,
	ActivateByCharacter = 2,
	ActivateByController = 3,
	FSteelTargetType_MAX = 4
};

// Enum WTL.EWTLMonsterTakeDamageType
enum class EWTLMonsterTakeDamageType : uint8 {
	None = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EWTLMonsterTakeDamageType_MAX = 4
};

// Enum WTL.EWTLAIStateMoving
enum class EWTLAIStateMoving : uint8 {
	Stop = 0,
	Walk = 1,
	EasyRun = 2,
	QuickRun = 3,
	EWTLAIStateMoving_MAX = 4
};

// Enum WTL.EWTLAIStateMonster
enum class EWTLAIStateMonster : uint8 {
	Walk = 0,
	RateAggressUp = 1,
	FollowTarget = 2,
	FindInstigator = 3,
	Escaping = 4,
	EWTLAIStateMonster_MAX = 5
};

// Enum WTL.EWTLAITypeTakeDamage
enum class EWTLAITypeTakeDamage : uint8 {
	None = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EWTLAITypeTakeDamage_MAX = 4
};

// Enum WTL.EWTLAIStateAnimMonster
enum class EWTLAIStateAnimMonster : uint8 {
	Idle = 0,
	Idle2 = 1,
	Idle3 = 2,
	TakeHighDamage = 3,
	RateAggressUp = 4,
	Movement = 5,
	Attack1 = 6,
	Attack2 = 7,
	Death = 8,
	EWTLAIStateAnimMonster_MAX = 9
};

// Enum WTL.EWTLDetectorMode
enum class EWTLDetectorMode : uint8 {
	AliveCreaturesSearchMode = 0,
	MinesDetectorMode = 1,
	PlaceableStuffsSearchMode = 2,
	EWTLDetectorMode_MAX = 3
};

// Enum WTL.EWTLWeaponState
enum class EWTLWeaponState : uint8 {
	Idle = 0,
	Firing = 1,
	FireLast = 2,
	Reloading = 3,
	Equiping = 4,
	Empty = 5,
	EWTLWeaponState_MAX = 6
};

// Enum WTL.EWTLFireMode
enum class EWTLFireMode : uint8 {
	None = 0,
	Single = 1,
	Burst2 = 2,
	Burst3 = 3,
	Auto = 4,
	EWTLFireMode_MAX = 5
};

// Enum WTL.EProjectileType
enum class EProjectileType : uint8 {
	None = 0,
	Bullet = 1,
	Grenade = 2,
	EProjectileType_MAX = 3
};

// Enum WTL.EWTLBulletType
enum class EWTLBulletType : uint8 {
	FMJ = 0,
	HP = 1,
	AP = 2,
	EWTLBulletType_MAX = 3
};

// Enum WTL.EWTLCharacterMoveState
enum class EWTLCharacterMoveState : uint8 {
	NotMoving = 0,
	Prone = 1,
	Crouch = 2,
	Walk = 3,
	Sprint = 4,
	EWTLCharacterMoveState_MAX = 5
};

// Enum WTL.EWTLCharacterPose
enum class EWTLCharacterPose : uint8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	Swim = 3,
	EWTLCharacterPose_MAX = 4
};

// Enum WTL.EWTLHandsState
enum class EWTLHandsState : uint8 {
	Empty = 0,
	Idle = 1,
	TakingItemInArms = 2,
	PuttingItemInInventory = 3,
	Reloading = 4,
	Action = 5,
	Running = 6,
	AimingTransition = 7,
	Jamming = 8,
	ItemPlacement = 9,
	ThrowNut = 10,
	QuickThrow = 11,
	EWTLHandsState_MAX = 12
};

// Enum WTL.EWTLClientMessageType
enum class EWTLClientMessageType : uint8 {
	Building = 1,
	Mining = 2,
	EWTLClientMessageType_MAX = 3
};

// Enum WTL.EWTLKeyCategory
enum class EWTLKeyCategory : uint8 {
	None = 0,
	Common = 1,
	Movement = 2,
	Actions = 3,
	Slots = 4,
	HUD = 5,
	PDA = 6,
	Communication = 7,
	EWTLKeyCategory_MAX = 8
};

// Enum WTL.EWTLInputMode
enum class EWTLInputMode : uint8 {
	Game = 0,
	GameAndUI = 1,
	UI = 2,
	EWTLInputMode_MAX = 3
};

// Enum WTL.EWTLMapMarkerType
enum class EWTLMapMarkerType : uint8 {
	Player = 0,
	Enemy = 1,
	Ally = 2,
	Monster = 3,
	QuestMonster = 4,
	CapturePoint = 5,
	TeamLead = 6,
	SafeHouse = 7,
	MobileStartPoint = 8,
	QuestPoint = 9,
	CompleteQuestPoint = 10,
	CompleteActiveQuestPoint = 11,
	TakeQuestPoint = 12,
	PlayerKiller = 13,
	LastDeath = 14,
	CampfireLocation = 15,
	StashLocation = 16,
	NPC = 17,
	Label = 18,
	Portal = 19,
	PortalQuestPoint = 20,
	PortalCompleteQuestPoint = 21,
	PortalCompleteActiveQuestPoint = 22,
	WaterSource = 23,
	NPCDoctor = 24,
	NPCStockman = 25,
	NPCGunsmith = 26,
	NPCTrader = 27,
	FortificationNeutralCaptureInProgress = 28,
	FortificationConfederationCaptureInProgress = 29,
	FortificationBlackSunsetCaptureInProgress = 30,
	FortificationNeutralCanBeCaptured = 31,
	FortificationConfederationCanBeCaptured = 32,
	FortificationBlackSunsetCanBeCaptured = 33,
	FortificationNeutralCannotBeCaptured = 34,
	FortificationConfederationCannotBeCaptured = 35,
	FortificationBlackSunsetCannotBeCaptured = 36,
	EventPointMonsterSpawn = 37,
	EventPointEnvironment = 38,
	EventPointFindItem = 39,
	SafeZoneArea = 40,
	SafeZoneNeutral = 41,
	SafeZoneConfederation = 42,
	SafeZoneBlackSunset = 43,
	EWTLMapMarkerType_MAX = 44
};

// Enum WTL.EWTLEventPointActivationType
enum class EWTLEventPointActivationType : uint8 {
	ByRange = 0,
	ByVolume = 1,
	EWTLEventPointActivationType_MAX = 2
};

// Enum WTL.EWTLEventPointType
enum class EWTLEventPointType : uint8 {
	None = 0,
	MonsterSpawn = 1,
	Environment = 2,
	FindItem = 3,
	EWTLEventPointType_MAX = 4
};

// Enum WTL.EWTLFishState
enum class EWTLFishState : uint8 {
	None = 0,
	Pecking = 1,
	Recovering = 2,
	EWTLFishState_MAX = 3
};

// Enum WTL.EWTLFishingMontageType
enum class EWTLFishingMontageType : uint8 {
	None = 0,
	Throwing = 1,
	ThrowingEnd = 2,
	Peck = 3,
	PeckEnd = 4,
	LeftHook = 5,
	UpHook = 6,
	RightHook = 7,
	DownHook = 8,
	EWTLFishingMontageType_MAX = 9
};

// Enum WTL.EWTLHUDType
enum class EWTLHUDType : uint8 {
	None = 0,
	Character = 1,
	Spectator = 2,
	Monster = 3,
	EWTLHUDType_MAX = 4
};

// Enum WTL.ECannotActionType
enum class ECannotActionType : uint8 {
	Put = 0,
	Take = 1,
	ECannotActionType_MAX = 2
};

// Enum WTL.EWTLAccountInventoryOperationType
enum class EWTLAccountInventoryOperationType : uint8 {
	None = 0,
	UpdateItems = 1,
	TakeItem = 2,
	PutItem = 3,
	EWTLAccountInventoryOperationType_MAX = 4
};

// Enum WTL.EWTLHumanoidAnimInstanceState
enum class EWTLHumanoidAnimInstanceState : uint8 {
	None = 0,
	Walking = 1,
	Crouch = 2,
	CombatWalking = 3,
	CombatCrouch = 4,
	EWTLHumanoidAnimInstanceState_MAX = 5
};

// Enum WTL.EWTLRequestType
enum class EWTLRequestType : uint8 {
	None = 0,
	PurchaseStoreItems = 1,
	GetAccountInventory = 2,
	GetAccountInventoryAfterPurchaseStoreItems = 3,
	EWTLRequestType_MAX = 4
};

// Enum WTL.EWTLMonsterAcceleration
enum class EWTLMonsterAcceleration : uint8 {
	Normal = 0,
	Fast = 1,
	EWTLMonsterAcceleration_MAX = 2
};

// Enum WTL.EWTLMonsterFindingVisibleCharacterType
enum class EWTLMonsterFindingVisibleCharacterType : uint8 {
	Random = 0,
	Near = 1,
	Hamster = 2,
	Stimulus = 3,
	EWTLMonsterFindingVisibleCharacterType_MAX = 4
};

// Enum WTL.EWTLMonsterFindingCharacterType
enum class EWTLMonsterFindingCharacterType : uint8 {
	Random = 0,
	MinHealth = 1,
	MaxHealth = 2,
	MinLevel = 3,
	MaxLevel = 4,
	MinTotalTakeDamage = 5,
	MaxTotalTakeDamage = 6,
	Near = 7,
	EWTLMonsterFindingCharacterType_MAX = 8
};

// Enum WTL.EWTLMonsterStateDeath
enum class EWTLMonsterStateDeath : uint8 {
	None = 0,
	ToDeath = 1,
	Death = 2,
	EWTLMonsterStateDeath_MAX = 3
};

// Enum WTL.EWTLControlledActionKeyType
enum class EWTLControlledActionKeyType : uint8 {
	None = 0,
	MainAttack = 1,
	SecondaryAttack = 2,
	CustomAction0 = 3,
	CustomAction1 = 4,
	CustomAction2 = 5,
	CustomAction3 = 6,
	CustomAction4 = 7,
	CustomAction5 = 8,
	CustomAction6 = 9,
	CustomAction7 = 10,
	Die = 99,
	EWTLControlledActionKeyType_MAX = 100
};

// Enum WTL.EWTLMonsterSpawnerSpawnMethod
enum class EWTLMonsterSpawnerSpawnMethod : uint8 {
	Reachable = 0,
	Navigable = 1,
	EWTLMonsterSpawnerSpawnMethod_MAX = 2
};

// Enum WTL.EWTLWayPointMovingType
enum class EWTLWayPointMovingType : uint8 {
	Sequential = 0,
	Random = 1,
	EWTLWayPointMovingType_MAX = 2
};

// Enum WTL.EWTLNPCReplicaAction
enum class EWTLNPCReplicaAction : uint8 {
	None = 0,
	ShowMainDialog = 1,
	ShowGreetingDefault = 2,
	ShowGreetingDialog = 3,
	ShowGreetingAndMainDialog = 4,
	ShowTakeQuestDialog = 5,
	ShowCompleteQuestDialog = 6,
	EndDialog = 7,
	EWTLNPCReplicaAction_MAX = 8
};

// Enum WTL.EWTLCharacterCanTakeCompleteQuest
enum class EWTLCharacterCanTakeCompleteQuest : uint8 {
	None = 0,
	Take = 1,
	Complete = 2,
	TakeComplete = 3,
	EWTLCharacterCanTakeCompleteQuest_MAX = 4
};

// Enum WTL.EWTLInventoryToSteamConversionErrorCode
enum class EWTLInventoryToSteamConversionErrorCode : uint8 {
	None = 0,
	InternalError = 1,
	ItemsNotFoundInInventory = 2,
	ItemsConditionsError = 3,
	WrongItemType = 4,
	SteamResponseError = 5,
	EWTLInventoryToSteamConversionErrorCode_MAX = 6
};

// Enum WTL.EWTLNPCReason
enum class EWTLNPCReason : uint8 {
	None = 0,
	FullBag = 1,
	WeightOverload = 2,
	EWTLNPCReason_MAX = 3
};

// Enum WTL.EWTLNPCCheckResult
enum class EWTLNPCCheckResult : uint8 {
	Result_False = 0,
	Result_True = 1,
	Result_MAX = 2
};

// Enum WTL.EWTLNPCActionResult
enum class EWTLNPCActionResult : uint8 {
	Success = 0,
	Failed = 1,
	EWTLNPCActionResult_MAX = 2
};

// Enum WTL.EWTLNPCAction
enum class EWTLNPCAction : uint8 {
	DoNothing = 0,
	SpawnReplica = 1,
	GiveExperience = 2,
	GiveItem = 3,
	EWTLNPCAction_MAX = 4
};

// Enum WTL.EWTLHighlightID
enum class EWTLHighlightID : uint8 {
	None = 0,
	BossKill = 1,
	Kill = 11,
	DoubleKill = 12,
	MultiKill = 13,
	TrophyKill = 21,
	LongDistanceHit = 31,
	Jackpot = 41,
	EWTLHighlightID_MAX = 42
};

// Enum WTL.EWTLClanLogType
enum class EWTLClanLogType : uint8 {
	None = 0,
	Score = 1,
	Actions = 2,
	EWTLClanLogType_MAX = 3
};

// Enum WTL.EWTLClanLeaderboardSortType
enum class EWTLClanLeaderboardSortType : uint8 {
	None = 0,
	MembersCount = 1,
	PvPScore = 2,
	PvEScore = 3,
	CraftScore = 4,
	Reputation = 5,
	Rating = 6,
	EWTLClanLeaderboardSortType_MAX = 7
};

// Enum WTL.EWTLPDASkillState
enum class EWTLPDASkillState : uint8 {
	NotAvailable = 0,
	Available = 1,
	Learned = 2,
	EWTLPDASkillState_MAX = 3
};

// Enum WTL.EWTLPortalActionResult
enum class EWTLPortalActionResult : uint8 {
	Success = 0,
	Failed = 1,
	EWTLPortalActionResult_MAX = 2
};

// Enum WTL.EWTLControlledDroneAbilityType
enum class EWTLControlledDroneAbilityType : uint8 {
	None = 0,
	GetInfo = 1,
	SwitchCameraMode = 2,
	SingleShot = 3,
	PickUp = 4,
	SelfDestruction = 5,
	EWTLControlledDroneAbilityType_MAX = 6
};

// Enum WTL.EWTLMarkerType
enum class EWTLMarkerType : uint8 {
	None = 0,
	Enemy = 1,
	EnemyNPC = 2,
	Friend = 3,
	Monster = 4,
	Device = 5,
	EWTLMarkerType_MAX = 6
};

// Enum WTL.EWTLClanActionLogRecordType
enum class EWTLClanActionLogRecordType : uint8 {
	None = 0,
	AcceptInvite = 1,
	AcceptRequest = 2,
	SetClanLeadership = 3,
	SetClanMemberType = 4,
	SetClanPolicyGroup = 5,
	ChangeClanDescription = 6,
	LeaveClan = 7,
	DismissCharacterFromClan = 8,
	UpdateClanTabAccess = 9,
	EWTLClanActionLogRecordType_MAX = 10
};

// Enum WTL.EWTLClanScoreLogRecordType
enum class EWTLClanScoreLogRecordType : uint8 {
	None = 0,
	QuestComplete = 1,
	TakeClanSkill = 2,
	ScoreExchange = 3,
	FortificationCapture = 4,
	EWTLClanScoreLogRecordType_MAX = 5
};

// Enum WTL.EWTLPlatform
enum class EWTLPlatform : uint8 {
	None = 0,
	Steam = 1,
	Abyss = 2,
	Mailru = 3,
	EWTLPlatform_MAX = 4
};

// Enum WTL.EWTLCharacterContactType
enum class EWTLCharacterContactType : uint8 {
	None = 0,
	Friend = 1,
	Enemy = 2,
	EWTLCharacterContactType_MAX = 3
};

// Enum WTL.EWTLVoicePacketType
enum class EWTLVoicePacketType : uint8 {
	None = 0,
	ClientIdentity = 1,
	Regular = 100,
	Private = 101,
	Group = 102,
	Clan = 103,
	EWTLVoicePacketType_MAX = 104
};

// Enum WTL.EWTLAccountType
enum class EWTLAccountType : uint8 {
	Regular = 0,
	Tester = 1,
	Developer = 250,
	EWTLAccountType_MAX = 251
};

// Enum WTL.EWTLClanStorageMoneyOperationType
enum class EWTLClanStorageMoneyOperationType : uint8 {
	None = 0,
	PutMoney = 1,
	TakeMoney = 2,
	EWTLClanStorageMoneyOperationType_MAX = 3
};

// Enum WTL.EWTLClanStorageItemOperationType
enum class EWTLClanStorageItemOperationType : uint8 {
	None = 0,
	PutItem = 1,
	TakeItem = 2,
	EWTLClanStorageItemOperationType_MAX = 3
};

// Enum WTL.EWTLServerEventType
enum class EWTLServerEventType : uint8 {
	None = 0,
	ServerShutdown = 1,
	VersionUpdate = 2,
	Important = 3,
	Average = 4,
	Quest = 5,
	EWTLServerEventType_MAX = 6
};

// Enum WTL.EWTLPlayerType
enum class EWTLPlayerType : uint8 {
	Regular = 0,
	Moderator = 100,
	Administrator = 200,
	EWTLPlayerType_MAX = 201
};

// Enum WTL.EWTLQuestState
enum class EWTLQuestState : uint8 {
	None = 0,
	InProgress = 1,
	Canceled = 2,
	CompletedSuccess = 3,
	CompletedFailed = 4,
	EWTLQuestState_MAX = 5
};

// Enum WTL.EWTLClanMemberType
enum class EWTLClanMemberType : uint8 {
	None = 0,
	Leader = 1,
	DeputyLeader = 2,
	Steward = 10,
	Member = 100,
	Candidate = 200,
	EWTLClanMemberType_MAX = 201
};

// Enum WTL.EWTLQuestType
enum class EWTLQuestType : uint8 {
	None = 0,
	OneTime = 1,
	Repeatable = 2,
	EWTLQuestType_MAX = 3
};

// Enum WTL.EWTLCharacterCustomizationPart
enum class EWTLCharacterCustomizationPart : uint8 {
	None = 0,
	Head = 1,
	Torso = 2,
	Legs = 3,
	Feet = 4,
	Glasses = 20,
	Watches = 21,
	Backpack = 22,
	EWTLCharacterCustomizationPart_MAX = 23
};

// Enum WTL.EWTLGameServerStopReason
enum class EWTLGameServerStopReason : uint8 {
	None = 0,
	ConnectionLost = 1,
	Shutdown = 2,
	EWTLGameServerStopReason_MAX = 3
};

// Enum WTL.EWTLGameServerType
enum class EWTLGameServerType : uint8 {
	None = 0,
	Official = 1,
	Community = 2,
	EWTLGameServerType_MAX = 3
};

// Enum WTL.EWTLCraftType
enum class EWTLCraftType : uint8 {
	None = 0,
	Inventory = 1,
	CampFire = 2,
	Furnace = 3,
	PressMachine = 4,
	ChemicalStation = 5,
	AmmoPress = 6,
	SmallCNCMachine = 7,
	BigCNCMachine = 8,
	EWTLCraftType_MAX = 9
};

// Enum WTL.EWTLBuildingDoorLockType
enum class EWTLBuildingDoorLockType : uint8 {
	None = 0,
	KeyLock = 1,
	CodeLock = 2,
	EWTLBuildingDoorLockType_MAX = 3
};

// Enum WTL.EWTLSkillDependencyType
enum class EWTLSkillDependencyType : uint8 {
	MustHave = 0,
	MustNotHave = 1,
	MustHaveOneOf = 2,
	EWTLSkillDependencyType_MAX = 3
};

// Enum WTL.EWTLSkillType
enum class EWTLSkillType : uint8 {
	Passive = 0,
	Active = 1,
	EWTLSkillType_MAX = 2
};

// Enum WTL.EWTLBalanceChangeType
enum class EWTLBalanceChangeType : uint8 {
	Income = 0,
	Charge = 1,
	EWTLBalanceChangeType_MAX = 2
};

// Enum WTL.EWTLAmmoProjectileType
enum class EWTLAmmoProjectileType : uint8 {
	FMJ = 0,
	HP = 1,
	AP = 2,
	EWTLAmmoProjectileType_MAX = 3
};

// Enum WTL.EWTLShopType
enum class EWTLShopType : uint8 {
	System = 0,
	EWTLShopType_MAX = 1
};

// Enum WTL.EWTLMiningPointType
enum class EWTLMiningPointType : uint8 {
	None = 0,
	Tree = 1,
	EWTLMiningPointType_MAX = 2
};

// Enum WTL.EWTLBuildingBlockState
enum class EWTLBuildingBlockState : uint8 {
	Stable = 0,
	Building = 1,
	Repairing = 2,
	EWTLBuildingBlockState_MAX = 3
};

// Enum WTL.EWTLBuildingJointType
enum class EWTLBuildingJointType : uint8 {
	None = 0,
	North = 1,
	East = 2,
	South = 3,
	West = 4,
	Top = 5,
	Middle = 6,
	EWTLBuildingJointType_MAX = 7
};

// Enum WTL.EWTLBuildingType
enum class EWTLBuildingType : uint8 {
	None = 0,
	House = 1,
	EWTLBuildingType_MAX = 2
};

// Enum WTL.EWTLBlockType
enum class EWTLBlockType : uint8 {
	Base = 0,
	Wall = 1,
	WindowBlock = 2,
	DoorBlock = 3,
	Pillar = 4,
	Top = 5,
	FrontSteps = 6,
	Stairs = 7,
	Staircase = 8,
	StorageBox = 252,
	Workbench = 253,
	Empty = 254,
	EWTLBlockType_MAX = 255
};

// Enum WTL.EWTLBodyPart
enum class EWTLBodyPart : uint8 {
	None = 0,
	Head = 1,
	Torso = 2,
	Legs = 3,
	Feet = 4,
	EWTLBodyPart_MAX = 5
};

// Enum WTL.EWTLChatMessageType
enum class EWTLChatMessageType : uint8 {
	Common = 0,
	Private = 1,
	Group = 2,
	Clan = 3,
	Faction = 4,
	Global = 5,
	System = 250,
	EWTLChatMessageType_MAX = 251
};

// Enum WTL.EWTLWeatherType
enum class EWTLWeatherType : uint8 {
	Clear = 0,
	Cloudy = 1,
	Rain = 2,
	HeavyRain = 3,
	EWTLWeatherType_MAX = 4
};

// Enum WTL.EWTLCloudsType
enum class EWTLCloudsType : uint8 {
	Custom = 0,
	None = 1,
	Few = 2,
	Scattered = 3,
	Broken = 4,
	Overcast = 5,
	EWTLCloudsType_MAX = 6
};

// Enum WTL.EWTLSex
enum class EWTLSex : uint8 {
	Female = 0,
	Male = 1,
	EWTLSex_MAX = 2
};

// Enum WTL.EWTLConnectionCloseType
enum class EWTLConnectionCloseType : uint8 {
	InvalidPackets = 0,
	InvalidLogin = 1,
	ServerConsoleCommand = 2,
	HighPingValue = 3,
	CharacterBan = 4,
	ConnecionClosedByServer = 5,
	EWTLConnectionCloseType_MAX = 6
};

// Enum WTL.EWTLAITargetState
enum class EWTLAITargetState : uint8 {
	None = 0,
	Warning = 1,
	Chasing = 2,
	EWTLAITargetState_MAX = 3
};

// Enum WTL.EWTLAITargetType
enum class EWTLAITargetType : uint8 {
	None = 0,
	Waypoint = 1,
	Player = 2,
	Monster = 3,
	EWTLAITargetType_MAX = 4
};

// Enum WTL.EWTLNPCAIClientEventType
enum class EWTLNPCAIClientEventType : uint8 {
	None = 0,
	TargetEnterSightRange = 1,
	TargetLeaveSightRange = 2,
	TargetEnterWarningRange = 3,
	TargetLeaveWarningRange = 4,
	TargetEnterChaseRange = 5,
	TargetLeaveChaseRange = 6,
	EWTLNPCAIClientEventType_MAX = 7
};

// Enum WTL.EWTLAIState
enum class EWTLAIState : uint8 {
	Sleeping = 0,
	Idle = 1,
	WalkingToWaypoint = 2,
	Warning = 3,
	Chasing = 4,
	Escaping = 100,
	Dead = 200,
	EWTLAIState_MAX = 201
};

// Enum WTL.EWTLLocationType
enum class EWTLLocationType : uint8 {
	Normal = 0,
	Underground = 1,
	ClanHall = 2,
	EWTLLocationType_MAX = 3
};

// Enum WTL.EWTLPlaceType
enum class EWTLPlaceType : uint8 {
	Normal = 0,
	Underground = 1,
	EWTLPlaceType_MAX = 2
};

// Enum WTL.EWTLQuestCheckResult
enum class EWTLQuestCheckResult : uint8 {
	Result_False = 0,
	Result_True = 1,
	Result_MAX = 2
};

// Enum WTL.EWTLObjFAActionResult
enum class EWTLObjFAActionResult : uint8 {
	Success = 0,
	Failed = 1,
	EWTLObjFAActionResult_MAX = 2
};

// Enum WTL.EWTLObjFACheckResult
enum class EWTLObjFACheckResult : uint8 {
	Result_False = 0,
	Result_True = 1,
	Result_MAX = 2
};

// Enum WTL.EWTLRainAudioRemoveMethod
enum class EWTLRainAudioRemoveMethod : uint8 {
	None = 0,
	AlwaysCovered = 1,
	RemoveCompletely = 2,
	EWTLRainAudioRemoveMethod_MAX = 3
};

// Enum WTL.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8 {
	NotRouted = 0,
	RelevantAllConnections = 1,
	Spatialize_Static = 2,
	Spatialize_Dynamic = 3,
	Spatialize_Dormancy = 4,
	EClassRepNodeMapping_MAX = 5
};

// Enum WTL.EWTLSafeZoneType
enum class EWTLSafeZoneType : uint8 {
	SafeZone = 0,
	CheckPoint = 1,
	EWTLSafeZoneType_MAX = 2
};

// Enum WTL.EWTLScriptedEventMethodType
enum class EWTLScriptedEventMethodType : uint8 {
	SpawnObject = 0,
	SpawnMonster = 1,
	SpawnEnemy = 2,
	AnnounceEvent = 3,
	EWTLScriptedEventMethodType_MAX = 4
};

// Enum WTL.EWTLSecurityViolationType
enum class EWTLSecurityViolationType : uint8 {
	None = 0,
	DriverDetected = 1,
	EWTLSecurityViolationType_MAX = 2
};

// Enum WTL.EWTLSlotMachineState
enum class EWTLSlotMachineState : uint8 {
	None = 0,
	StartGame = 1,
	EndGame = 3,
	EWTLSlotMachineState_MAX = 4
};

// Enum WTL.EWTLClanRelation
enum class EWTLClanRelation : uint8 {
	Neutral = 0,
	Friend = 1,
	Enemy = 2,
	EWTLClanRelation_MAX = 3
};

// Enum WTL.EWTLTiltState
enum class EWTLTiltState : uint8 {
	None = 0,
	TiltRight = 1,
	TiltLeft = 2,
	EWTLTiltState_MAX = 3
};

// Enum WTL.EWTLTriggerCheckResult
enum class EWTLTriggerCheckResult : uint8 {
	Result_False = 0,
	Result_True = 1,
	Result_MAX = 2
};

// Enum WTL.EWTLTriggerObjectState
enum class EWTLTriggerObjectState : uint8 {
	Off = 0,
	On = 1,
	EWTLTriggerObjectState_MAX = 2
};

// Enum WTL.EWTLTriggerActionResult
enum class EWTLTriggerActionResult : uint8 {
	Failed = 0,
	Success = 1,
	EWTLTriggerActionResult_MAX = 2
};

// Enum WTL.EWTLRadialMenuType
enum class EWTLRadialMenuType : uint8 {
	None = 0,
	Use = 1,
	Emotions = 2,
	EWTLRadialMenuType_MAX = 3
};

// Enum WTL.EWTLBPCheckResult
enum class EWTLBPCheckResult : uint8 {
	Result_False = 0,
	Result_True = 1,
	Result_MAX = 2
};

// Enum WTL.EWTLBPActionResult
enum class EWTLBPActionResult : uint8 {
	Failed = 0,
	Success = 1,
	EWTLBPActionResult_MAX = 2
};

// Enum WTL.EWTLClothesTorsoMeshVariant
enum class EWTLClothesTorsoMeshVariant : uint8 {
	Full = 0,
	FullArms = 1,
	HalfArms = 2,
	HandsOnly = 3,
	EWTLClothesTorsoMeshVariant_MAX = 4
};

// Enum WTL.EWTLGlobalLevelObjectType
enum class EWTLGlobalLevelObjectType : uint8 {
	None = 0,
	Camp = 1,
	EWTLGlobalLevelObjectType_MAX = 2
};

// Enum WTL.EWTLFortificationObjectType
enum class EWTLFortificationObjectType : uint8 {
	None = 0,
	MachinuGun = 1,
	EWTLFortificationObjectType_MAX = 2
};

// Enum WTL.EWTLNPCIdentificationAbility
enum class EWTLNPCIdentificationAbility : uint8 {
	CanTrade = 0,
	HasStorage = 1,
	CanTakeQuest = 2,
	CanCompleteQuest = 3,
	IsGunsmith = 4,
	HasComission = 5,
	EWTLNPCIdentificationAbility_MAX = 6
};

// Enum WTL.EWTLDaytimeCubemapBlendType
enum class EWTLDaytimeCubemapBlendType : uint8 {
	Increment = 0,
	Decrement = 1,
	EWTLDaytimeCubemapBlendType_MAX = 2
};

// Enum WTL.EWTLEnergyFieldType
enum class EWTLEnergyFieldType : uint8 {
	None = 0,
	SafeZone = 1,
	EWTLEnergyFieldType_MAX = 2
};

// Enum WTL.EWTLSuffocationVolumeType
enum class EWTLSuffocationVolumeType : uint8 {
	None = 0,
	Water = 1,
	EWTLSuffocationVolumeType_MAX = 2
};

// Enum WTL.EWTLSuspensionType
enum class EWTLSuspensionType : uint8 {
	Regular = 0,
	Enduro = 1,
	EWTLSuspensionType_MAX = 2
};

// Enum WTL.EWTLVehicleEngineSoundMode
enum class EWTLVehicleEngineSoundMode : uint8 {
	Simple = 0,
	Advanced = 1,
	EWTLVehicleEngineSoundMode_MAX = 2
};

// ScriptStruct WTL.WTLPacket
// Size: 0x28 (Inherited: 0x00)
struct FWTLPacket {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct WTL.WTLMailPackageRecord
// Size: 0x148 (Inherited: 0x28)
struct FWTLMailPackageRecord : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	uint64_t FromCharacterID; // 0x30(0x08)
	struct FString FromCharacterName; // 0x38(0x10)
	uint64_t ToCharacterID; // 0x48(0x08)
	struct FString ToCharacterName; // 0x50(0x10)
	struct FWTLDateTime MailDate; // 0x60(0x08)
	enum class EWTLMailPackageDeliveryType DeliveryType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FWTLDateTime PlanDeliveryDate; // 0x70(0x08)
	uint32_t TotalWeight; // 0x78(0x04)
	uint32_t TotalPrice; // 0x7c(0x04)
	struct FString MessageText; // 0x80(0x10)
	uint32_t MoneyAmount; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FWTLStorageContent Items; // 0x98(0xa8)
	enum class EWTLMailPackageState State; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// ScriptStruct WTL.WTLStorageContent
// Size: 0xa8 (Inherited: 0x28)
struct FWTLStorageContent : FWTLPacket {
	enum class EWTLStorageType StorageType; // 0x28(0x01)
	enum class EWTLLocationStorageType LocationStorageType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	uint64_t StorageID; // 0x30(0x08)
	struct TArray<struct FWTLWeaponItem> WeaponItems; // 0x38(0x10)
	struct TArray<struct FWTLAmmoItem> AmmoItems; // 0x48(0x10)
	struct TArray<struct FWTLMedicineItem> MedicineItems; // 0x58(0x10)
	struct TArray<struct FWTLStuffItem> StuffItems; // 0x68(0x10)
	struct TArray<struct FWTLClothesItem> ClothesItems; // 0x78(0x10)
	struct TArray<struct FWTLResourceItem> ResourceItems; // 0x88(0x10)
	struct TArray<struct FWTLArtefactItem> ArtefactItems; // 0x98(0x10)
};

// ScriptStruct WTL.WTLItemRecord
// Size: 0x30 (Inherited: 0x28)
struct FWTLItemRecord : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLArtefactItem
// Size: 0xa0 (Inherited: 0x30)
struct FWTLArtefactItem : FWTLItemRecord {
	uint64_t ID; // 0x30(0x08)
	uint16_t ArtefactID; // 0x38(0x02)
	enum class EWTLArtefactType Type; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	struct FWTLDateTime CreationDate; // 0x60(0x08)
	struct FString CreatorName; // 0x68(0x10)
	int32_t Count; // 0x78(0x04)
	int32_t Weight; // 0x7c(0x04)
	int32_t TotalWeight; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FWTLDateTime ValidityDate; // 0x88(0x08)
	uint64_t InteractiveObjectID; // 0x90(0x08)
	char SlotNumber; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct WTL.WTLDateTime
// Size: 0x08 (Inherited: 0x00)
struct FWTLDateTime {
	int64_t Value; // 0x00(0x08)
};

// ScriptStruct WTL.WTLResourceItem
// Size: 0x70 (Inherited: 0x30)
struct FWTLResourceItem : FWTLItemRecord {
	uint64_t ID; // 0x30(0x08)
	uint16_t ResourceID; // 0x38(0x02)
	enum class EWTLResourceType Type; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	int32_t Count; // 0x60(0x04)
	int32_t Weight; // 0x64(0x04)
	int32_t TotalWeight; // 0x68(0x04)
	char SlotNumber; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct WTL.WTLClothesItem
// Size: 0xb0 (Inherited: 0x30)
struct FWTLClothesItem : FWTLItemRecord {
	uint64_t ID; // 0x30(0x08)
	uint16_t ClothesID; // 0x38(0x02)
	enum class EWTLClothesType Type; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	enum class EWTLArmorClass ArmorClass; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FWTLDateTime CreationDate; // 0x68(0x08)
	struct FString CreatorName; // 0x70(0x10)
	uint16_t ArmorMin; // 0x80(0x02)
	uint16_t ArmorMax; // 0x82(0x02)
	int32_t Weight; // 0x84(0x04)
	int32_t TotalWeight; // 0x88(0x04)
	int32_t Condition; // 0x8c(0x04)
	int32_t ConditionDelta; // 0x90(0x04)
	char ModCount; // 0x94(0x01)
	char CustomizationScalar; // 0x95(0x01)
	char CustomizationColor; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	uint16_t FrontPlateTypeID; // 0x98(0x02)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32_t FrontPlateCondition; // 0x9c(0x04)
	uint16_t BackPlateTypeID; // 0xa0(0x02)
	char pad_A2[0x2]; // 0xa2(0x02)
	int32_t BackPlateCondition; // 0xa4(0x04)
	char SlotNumber; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct WTL.WTLStuffItem
// Size: 0x98 (Inherited: 0x30)
struct FWTLStuffItem : FWTLItemRecord {
	uint64_t ID; // 0x30(0x08)
	uint16_t StuffID; // 0x38(0x02)
	enum class EWTLStuffType Type; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	struct FWTLDateTime CreationDate; // 0x60(0x08)
	struct FString CreatorName; // 0x68(0x10)
	int32_t Weight; // 0x78(0x04)
	int32_t TotalWeight; // 0x7c(0x04)
	int32_t Condition; // 0x80(0x04)
	int32_t ConditionDelta; // 0x84(0x04)
	int32_t Energy; // 0x88(0x04)
	enum class EWTLItemType StorageObjectType; // 0x8c(0x01)
	char pad_8D[0x1]; // 0x8d(0x01)
	uint16_t StorageObjectTypeID; // 0x8e(0x02)
	char CustomizationScalar; // 0x90(0x01)
	char CustomizationColor; // 0x91(0x01)
	char SlotNumber; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
};

// ScriptStruct WTL.WTLMedicineItem
// Size: 0xa8 (Inherited: 0x30)
struct FWTLMedicineItem : FWTLItemRecord {
	uint64_t ID; // 0x30(0x08)
	uint16_t MedicineID; // 0x38(0x02)
	enum class EWTLMedicineType Type; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	int32_t Count; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWTLDateTime CreationDate; // 0x68(0x08)
	struct FString CreatorName; // 0x70(0x10)
	int32_t Weight; // 0x80(0x04)
	int32_t TotalWeight; // 0x84(0x04)
	struct FWTLDateTime ValidityDate; // 0x88(0x08)
	struct TArray<struct FWTLCharacterEffectInfluence> Influences; // 0x90(0x10)
	char SlotNumber; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct WTL.WTLCharacterEffectInfluence
// Size: 0x38 (Inherited: 0x28)
struct FWTLCharacterEffectInfluence : FWTLPacket {
	enum class EWTLCharacterEffectType EffectType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float InfluenceAtStart; // 0x2c(0x04)
	float InfluencePerTick; // 0x30(0x04)
	float Duration; // 0x34(0x04)
};

// ScriptStruct WTL.WTLAmmoItem
// Size: 0x98 (Inherited: 0x30)
struct FWTLAmmoItem : FWTLItemRecord {
	uint64_t ID; // 0x30(0x08)
	uint16_t AmmoID; // 0x38(0x02)
	enum class EWTLAmmoType Type; // 0x3a(0x01)
	enum class EWTLCaliber Caliber; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	int32_t Count; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWTLDateTime CreationDate; // 0x68(0x08)
	struct FString CreatorName; // 0x70(0x10)
	uint16_t DamageMin; // 0x80(0x02)
	uint16_t DamageMax; // 0x82(0x02)
	uint16_t ArmorPiercingMin; // 0x84(0x02)
	uint16_t ArmorPiercingMax; // 0x86(0x02)
	uint16_t Accuracy; // 0x88(0x02)
	char pad_8A[0x2]; // 0x8a(0x02)
	int32_t Weight; // 0x8c(0x04)
	int32_t TotalWeight; // 0x90(0x04)
	char SlotNumber; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// ScriptStruct WTL.WTLWeaponItem
// Size: 0xd8 (Inherited: 0x30)
struct FWTLWeaponItem : FWTLItemRecord {
	uint64_t ID; // 0x30(0x08)
	uint16_t WeaponID; // 0x38(0x02)
	enum class EWTLWeaponType Type; // 0x3a(0x01)
	enum class EWTLCaliber Caliber; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	struct FWTLDateTime CreationDate; // 0x60(0x08)
	struct FString CreatorName; // 0x68(0x10)
	char MagazineCapacity; // 0x78(0x01)
	char MagazineAmmoCount; // 0x79(0x01)
	uint16_t DamageMin; // 0x7a(0x02)
	uint16_t DamageMax; // 0x7c(0x02)
	uint16_t Accuracy; // 0x7e(0x02)
	int32_t TotalWeight; // 0x80(0x04)
	uint16_t EffectiveRange; // 0x84(0x02)
	char pad_86[0x2]; // 0x86(0x02)
	int32_t Condition; // 0x88(0x04)
	int32_t ConditionDelta; // 0x8c(0x04)
	char ModCount; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	uint64_t CurrentAmmoItemID; // 0x98(0x08)
	uint16_t MuzzleAttachmentTypeID; // 0xa0(0x02)
	char pad_A2[0x2]; // 0xa2(0x02)
	int32_t MuzzleAttachmentCondition; // 0xa4(0x04)
	uint16_t FlashlightAttachmentTypeID; // 0xa8(0x02)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32_t FlashlightAttachmentCondition; // 0xac(0x04)
	uint16_t ScopeAttachmentTypeID; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	int32_t ScopeAttachmentCondition; // 0xb4(0x04)
	char CustomizationScalar; // 0xb8(0x01)
	char CustomizationColor; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct FString CustomizationName; // 0xc0(0x10)
	char SlotNumber; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct WTL.WTLOperationResult
// Size: 0x20 (Inherited: 0x00)
struct FWTLOperationResult {
	int32_t OperationID; // 0x00(0x04)
	bool Success; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString ErrorInfo; // 0x08(0x10)
	bool Processed; // 0x18(0x01)
	char ReplicationState; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct WTL.WTLKillStats
// Size: 0x240 (Inherited: 0x00)
struct FWTLKillStats {
	struct FString KillerName; // 0x00(0x10)
	struct FTakeHitInfo HitInfo; // 0x10(0x220)
	struct FString VictimName; // 0x230(0x10)
};

// ScriptStruct WTL.TakeHitInfo
// Size: 0x220 (Inherited: 0x00)
struct FTakeHitInfo {
	float ActualDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* DamageTypeClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct AWTLCharacter> PawnInstigator; // 0x10(0x08)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x18(0x08)
	uint16_t DamageEventClassID; // 0x20(0x02)
	bool bKilled; // 0x22(0x01)
	bool bStealth; // 0x23(0x01)
	float WorldTime; // 0x24(0x04)
	char EnsureReplicationByte; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDamageEvent GeneralDamageEvent; // 0x30(0x10)
	struct FBulletDamageEvent BulletDamageEvent; // 0x40(0xc8)
	struct FShrapnelDamageEvent ShrapnelDamageEvent; // 0x108(0xc0)
	struct FRadialDamageEvent RadialDamageEvent; // 0x1c8(0x40)
	struct FFallDamageEvent FallDamageEvent; // 0x208(0x18)
};

// ScriptStruct WTL.FallDamageEvent
// Size: 0x18 (Inherited: 0x10)
struct FFallDamageEvent : FDamageEvent {
	float GroundHitVelocity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WTL.ShrapnelDamageEvent
// Size: 0xc0 (Inherited: 0xb0)
struct FShrapnelDamageEvent : FPointDamageEvent {
	uint16_t WeaponTypeID; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float ImpulseMultiplier; // 0xb4(0x04)
	bool Critical; // 0xb8(0x01)
	enum class EWTLColliderType ColliderType; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// ScriptStruct WTL.BulletDamageEvent
// Size: 0xc8 (Inherited: 0xb0)
struct FBulletDamageEvent : FPointDamageEvent {
	enum class EWTLWeaponType WeaponType; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float ArmorPiercingValue; // 0xb4(0x04)
	float Velocity; // 0xb8(0x04)
	float ImpulseMultiplier; // 0xbc(0x04)
	bool Critical; // 0xc0(0x01)
	bool Stealth; // 0xc1(0x01)
	enum class EWTLColliderType ColliderType; // 0xc2(0x01)
	char pad_C3[0x5]; // 0xc3(0x05)
};

// ScriptStruct WTL.WTLAccountInventoryItem
// Size: 0x58 (Inherited: 0x28)
struct FWTLAccountInventoryItem : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	uint64_t StoreItemID; // 0x30(0x08)
	int32_t Count; // 0x38(0x04)
	int32_t Condition; // 0x3c(0x04)
	bool New; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString ModificationData; // 0x48(0x10)
};

// ScriptStruct WTL.WTLStoreItem
// Size: 0x108 (Inherited: 0x28)
struct FWTLStoreItem : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	int32_t CreditsAmount; // 0x30(0x04)
	int32_t MoneyAmount; // 0x34(0x04)
	enum class EWTLItemType ItemType; // 0x38(0x01)
	char pad_39[0x1]; // 0x39(0x01)
	uint16_t ItemTypeID; // 0x3a(0x02)
	int32_t Count; // 0x3c(0x04)
	int32_t Condition; // 0x40(0x04)
	char CustomizationScalar; // 0x44(0x01)
	char CustomizationColor; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct FString CustomizationName; // 0x48(0x10)
	struct FString ModificationData; // 0x58(0x10)
	struct FString Name; // 0x68(0x10)
	struct FString NameRU; // 0x78(0x10)
	struct FString Description; // 0x88(0x10)
	struct FString DescriptionRU; // 0x98(0x10)
	struct FColor BackgroundColor; // 0xa8(0x04)
	struct FColor NameColor; // 0xac(0x04)
	char ItemQuality; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString IconURL; // 0xb8(0x10)
	struct FString LargeIconURL; // 0xc8(0x10)
	struct FString Tags; // 0xd8(0x10)
	int32_t Price; // 0xe8(0x04)
	float DiscountPercent; // 0xec(0x04)
	char PromotionType; // 0xf0(0x01)
	bool Hidden; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FString BundleDefinition; // 0xf8(0x10)
};

// ScriptStruct WTL.WTLInAppPurchaseResult
// Size: 0x48 (Inherited: 0x28)
struct FWTLInAppPurchaseResult : FWTLPacket {
	bool Success; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString Info; // 0x30(0x10)
	int32_t CurrentBalance; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct WTL.WTLArenaLeaderboardRecord
// Size: 0x30 (Inherited: 0x00)
struct FWTLArenaLeaderboardRecord {
	enum class EWTLFaction Faction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t CharacterID; // 0x08(0x08)
	enum class EWTLCharacterClass CharacterClass; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString CharacterName; // 0x18(0x10)
	char CharacterLevel; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t Score; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLAirDropItemData
// Size: 0x58 (Inherited: 0x08)
struct FWTLAirDropItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct TSoftClassPtr<UObject> BlueprintClass; // 0x20(0x28)
	struct TArray<struct FWTLItemSpawnInfo> SpawnItems; // 0x48(0x10)
};

// ScriptStruct WTL.WTLItemSpawnInfo
// Size: 0x78 (Inherited: 0x00)
struct FWTLItemSpawnInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
	int32_t MinCondition; // 0x10(0x04)
	int32_t MaxCondition; // 0x14(0x04)
	int32_t MinInteractiveObjectID; // 0x18(0x04)
	int32_t MaxInteractiveObjectID; // 0x1c(0x04)
	char CustomizationScalar; // 0x20(0x01)
	char CustomizationColor; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FString CustomizationName; // 0x28(0x10)
	struct FString ModificationData; // 0x38(0x10)
	float Chance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FWTLQuestItemDropChance> QuestChances; // 0x50(0x10)
	bool SpawnOnlyIfDoesNotHaveItem; // 0x60(0x01)
	bool AddToBlackListAfterSpawn; // 0x61(0x01)
	bool IgnoreNoPrice; // 0x62(0x01)
	bool IsSpecialItem; // 0x63(0x01)
	float MinSpawnDelay; // 0x64(0x04)
	float MaxSpawnDelay; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FDateTime NextSpawnTime; // 0x70(0x08)
};

// ScriptStruct WTL.WTLQuestItemDropChance
// Size: 0x08 (Inherited: 0x00)
struct FWTLQuestItemDropChance {
	int32_t QuestID; // 0x00(0x04)
	float Chance; // 0x04(0x04)
};

// ScriptStruct WTL.WTLServerEventInfoCommentRowData
// Size: 0x20 (Inherited: 0x08)
struct FWTLServerEventInfoCommentRowData : FTableRowBase {
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct WTL.WTLNoteData
// Size: 0x50 (Inherited: 0x08)
struct FWTLNoteData : FTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Image; // 0x08(0x28)
	struct FText Text; // 0x30(0x18)
	bool bIsCenterText; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct WTL.WTLGiftCardItemData
// Size: 0xe8 (Inherited: 0x08)
struct FWTLGiftCardItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	enum class EWTLItemType ItemType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t ItemTypeID; // 0x24(0x04)
	float ChanceMultiplier; // 0x28(0x04)
	float CountMultiplier; // 0x2c(0x04)
	struct FDateTime StartTime; // 0x30(0x08)
	struct FDateTime EndTime; // 0x38(0x08)
	float MinBlackListTimeout; // 0x40(0x04)
	float MaxBlackListTimeout; // 0x44(0x04)
	struct TMap<int32_t, float> LocationDropChances; // 0x48(0x50)
	struct TMap<int32_t, float> MonsterDropChances; // 0x98(0x50)
};

// ScriptStruct WTL.WTLSlotMachineSymbolsTextures
// Size: 0x18 (Inherited: 0x08)
struct FWTLSlotMachineSymbolsTextures : FTableRowBase {
	struct TArray<struct FWTLSlotMachineSymbolTexture> SymbolsTextures; // 0x08(0x10)
};

// ScriptStruct WTL.WTLSlotMachineSymbolTexture
// Size: 0x18 (Inherited: 0x00)
struct FWTLSlotMachineSymbolTexture {
	enum class EWTLSlotMachineSymbol Symbol; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FWTLCharacterClassTexture> Textures; // 0x08(0x10)
};

// ScriptStruct WTL.WTLCharacterClassTexture
// Size: 0x30 (Inherited: 0x00)
struct FWTLCharacterClassTexture {
	enum class EWTLCharacterClass Class; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLSlotMachineWinCombinations
// Size: 0x18 (Inherited: 0x08)
struct FWTLSlotMachineWinCombinations : FTableRowBase {
	struct TArray<struct FWTLSlotMachineSymbolWinCombination> Combination; // 0x08(0x10)
};

// ScriptStruct WTL.WTLSlotMachineSymbolWinCombination
// Size: 0x58 (Inherited: 0x00)
struct FWTLSlotMachineSymbolWinCombination {
	enum class EWTLSlotMachineSymbolCheckType CheckType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EWTLSlotMachineSymbol> Symbols; // 0x08(0x10)
	char SymbolsCount; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float BetMultiplier; // 0x1c(0x04)
	struct TArray<struct FWTLSlotMachineItemReward> ItemRewards; // 0x20(0x10)
	struct TSoftObjectPtr<UFMODEvent> WinSoundEvent; // 0x30(0x28)
};

// ScriptStruct WTL.WTLSlotMachineItemReward
// Size: 0x50 (Inherited: 0x00)
struct FWTLSlotMachineItemReward {
	enum class EWTLCharacterClass CharacterClass; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Chance; // 0x04(0x04)
	enum class EWTLItemType ItemType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ItemTypeID; // 0x0c(0x04)
	int32_t MinCount; // 0x10(0x04)
	int32_t MaxCount; // 0x14(0x04)
	int32_t MinCondition; // 0x18(0x04)
	int32_t MaxCondition; // 0x1c(0x04)
	int32_t MinInteractiveObjectID; // 0x20(0x04)
	int32_t MaxInteractiveObjectID; // 0x24(0x04)
	char CustomizationScalar; // 0x28(0x01)
	char CustomizationColor; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString CustomizationName; // 0x30(0x10)
	struct FString ModificationData; // 0x40(0x10)
};

// ScriptStruct WTL.WTLSlotMachineCylinder
// Size: 0x18 (Inherited: 0x08)
struct FWTLSlotMachineCylinder : FTableRowBase {
	struct TArray<struct FWTLSlotMachineSymbolRandRange> SymbolRandRange; // 0x08(0x10)
};

// ScriptStruct WTL.WTLSlotMachineSymbolRandRange
// Size: 0x03 (Inherited: 0x00)
struct FWTLSlotMachineSymbolRandRange {
	enum class EWTLSlotMachineSymbol Symbol; // 0x00(0x01)
	char MaxValue; // 0x01(0x01)
	char Cost; // 0x02(0x01)
};

// ScriptStruct WTL.WTLFishingBaitData
// Size: 0x10 (Inherited: 0x08)
struct FWTLFishingBaitData : FTableRowBase {
	struct FWTLItem Item; // 0x08(0x08)
};

// ScriptStruct WTL.WTLItem
// Size: 0x08 (Inherited: 0x00)
struct FWTLItem {
	enum class EWTLItemType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TypeID; // 0x04(0x04)
};

// ScriptStruct WTL.WTLFishingItemData
// Size: 0x50 (Inherited: 0x08)
struct FWTLFishingItemData : FTableRowBase {
	int32_t MinCharacterLevel; // 0x08(0x04)
	float MinBiteTime; // 0x0c(0x04)
	float MaxBiteTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftClassPtr<UObject> DefaultFishActor; // 0x18(0x28)
	struct TArray<struct FWTLFishingTakeItem> ItemsLootTable; // 0x40(0x10)
};

// ScriptStruct WTL.WTLFishingTakeItem
// Size: 0x88 (Inherited: 0x00)
struct FWTLFishingTakeItem {
	float DropChance; // 0x00(0x04)
	float DifficultyMultiplier; // 0x04(0x04)
	struct TSoftClassPtr<UObject> FishActor; // 0x08(0x28)
	int32_t FishingItemConditionDeltaSuccess; // 0x30(0x04)
	int32_t FishingItemConditionDeltaNotSuccess; // 0x34(0x04)
	int32_t ExperienceReward; // 0x38(0x04)
	int32_t MoneyReward; // 0x3c(0x04)
	enum class EWTLItemType ItemType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ItemTypeID; // 0x44(0x04)
	int32_t MinCount; // 0x48(0x04)
	int32_t MaxCount; // 0x4c(0x04)
	int32_t MinCondition; // 0x50(0x04)
	int32_t MaxCondition; // 0x54(0x04)
	int32_t MinInteractiveObjectID; // 0x58(0x04)
	int32_t MaxInteractiveObjectID; // 0x5c(0x04)
	char CustomizationScalar; // 0x60(0x01)
	char CustomizationColor; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FString CustomizationName; // 0x68(0x10)
	struct FString ModificationData; // 0x78(0x10)
};

// ScriptStruct WTL.WTLClanLevelItemData
// Size: 0x18 (Inherited: 0x08)
struct FWTLClanLevelItemData : FTableRowBase {
	int32_t PVPScore; // 0x08(0x04)
	int32_t PVEScore; // 0x0c(0x04)
	int32_t CraftScore; // 0x10(0x04)
	int32_t MemberCount; // 0x14(0x04)
};

// ScriptStruct WTL.WTLLootBoxItemData
// Size: 0x20 (Inherited: 0x08)
struct FWTLLootBoxItemData : FTableRowBase {
	enum class EWTLLootBoxType BoxType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MoneyReward; // 0x0c(0x04)
	struct TArray<struct FWTLArenaItemReward> ItemRewards; // 0x10(0x10)
};

// ScriptStruct WTL.WTLArenaItemReward
// Size: 0x50 (Inherited: 0x00)
struct FWTLArenaItemReward {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
	int32_t MinCondition; // 0x10(0x04)
	int32_t MaxCondition; // 0x14(0x04)
	int32_t MinInteractiveObjectID; // 0x18(0x04)
	int32_t MaxInteractiveObjectID; // 0x1c(0x04)
	char CustomizationScalar; // 0x20(0x01)
	char CustomizationColor; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FString CustomizationName; // 0x28(0x10)
	struct FString ModificationData; // 0x38(0x10)
	float Chance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct WTL.WTLLocationSpawnItemData
// Size: 0x90 (Inherited: 0x08)
struct FWTLLocationSpawnItemData : FTableRowBase {
	enum class EWTLItemType ItemType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ItemTypeID; // 0x0c(0x04)
	int32_t Quality; // 0x10(0x04)
	int32_t MinCount; // 0x14(0x04)
	int32_t MaxCount; // 0x18(0x04)
	int32_t MinCondition; // 0x1c(0x04)
	int32_t MaxCondition; // 0x20(0x04)
	int32_t MinInteractiveObjectID; // 0x24(0x04)
	int32_t MaxInteractiveObjectID; // 0x28(0x04)
	char CustomizationScalar; // 0x2c(0x01)
	char CustomizationColor; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FString CustomizationName; // 0x30(0x10)
	struct FString ModificationData; // 0x40(0x10)
	float Chance; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FDateTime LastSpawnTime; // 0x58(0x08)
	float TimeBetweenSpawn; // 0x60(0x04)
	float MinBlackListTimeout; // 0x64(0x04)
	float MaxBlackListTimeout; // 0x68(0x04)
	bool SpawnOnlyInTimePeriod; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FDateTime SpawnPeriodStartTime; // 0x70(0x08)
	struct FDateTime SpawnPeriodEndTime; // 0x78(0x08)
	struct TArray<struct FWTLSpawnItemLocationInfo> LocationList; // 0x80(0x10)
};

// ScriptStruct WTL.WTLSpawnItemLocationInfo
// Size: 0x08 (Inherited: 0x00)
struct FWTLSpawnItemLocationInfo {
	int32_t LocationID; // 0x00(0x04)
	float ChanceMultiplier; // 0x04(0x04)
};

// ScriptStruct WTL.WTLEmotionTypeItemData
// Size: 0x70 (Inherited: 0x08)
struct FWTLEmotionTypeItemData : FTableRowBase {
	struct FWTLRadialMenuEmotionInfo RadialMenuEmotionInfo; // 0x08(0x58)
	struct TArray<struct FWTLEmotion> Emotions; // 0x60(0x10)
};

// ScriptStruct WTL.WTLEmotion
// Size: 0x70 (Inherited: 0x00)
struct FWTLEmotion {
	struct FWTLRadialMenuEmotionInfo RadialMenuEmotionInfo; // 0x00(0x58)
	bool BlockCameraRotation; // 0x58(0x01)
	bool HideUsableItem; // 0x59(0x01)
	bool IsBlocking; // 0x5a(0x01)
	bool CanBeInterrupted; // 0x5b(0x01)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UAnimMontage* MaleMontage; // 0x60(0x08)
	struct UAnimMontage* FemaleMontage; // 0x68(0x08)
};

// ScriptStruct WTL.WTLRadialMenuActionInfo
// Size: 0x50 (Inherited: 0x00)
struct FWTLRadialMenuActionInfo {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x00(0x28)
	struct FText Description; // 0x28(0x18)
	struct FString DebugPreviewText; // 0x40(0x10)
};

// ScriptStruct WTL.WTLRadialMenuEmotionInfo
// Size: 0x58 (Inherited: 0x50)
struct FWTLRadialMenuEmotionInfo : FWTLRadialMenuActionInfo {
	bool NeedPremium; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct WTL.WTLTutorialMessageItemData
// Size: 0x58 (Inherited: 0x08)
struct FWTLTutorialMessageItemData : FTableRowBase {
	enum class EWTLTutorialMessageType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x10(0x28)
	struct FText Text; // 0x38(0x18)
	char WarningShowCountLimit; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct WTL.WTLCharacterRankItemData
// Size: 0x80 (Inherited: 0x08)
struct FWTLCharacterRankItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	uint64_t Score; // 0x20(0x08)
	uint64_t ScoreToNextRank; // 0x28(0x08)
	struct TSoftObjectPtr<UTexture2D> SmallIcon; // 0x30(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeIcon; // 0x58(0x28)
};

// ScriptStruct WTL.WTLEnemyNPCItemData
// Size: 0x110 (Inherited: 0x08)
struct FWTLEnemyNPCItemData : FTableRowBase {
	int32_t GroupId; // 0x08(0x04)
	bool bUseCustomizationVariations; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> HeadVariations; // 0x10(0x10)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> TorsoVariations; // 0x20(0x10)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> LegsVariations; // 0x30(0x10)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> FeetVariations; // 0x40(0x10)
	bool bUseEquipmentVariations; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<int32_t> HeadClothesItemTypeIDVariations; // 0x58(0x10)
	struct TArray<int32_t> TorsoClothesItemTypeIDVariations; // 0x68(0x10)
	struct TArray<int32_t> LegsClothesItemTypeIDVariations; // 0x78(0x10)
	struct TArray<int32_t> FeetClothesItemTypeIDVariations; // 0x88(0x10)
	struct TArray<struct FWTLEnemyNPCWeaponItemVariation> WeaponItemTypeIDVariationsWithAmmo; // 0x98(0x10)
	struct TArray<int32_t> FrontPlateTypeIDVariations; // 0xa8(0x10)
	struct TArray<int32_t> BackPlateTypeIDVariations; // 0xb8(0x10)
	int32_t MinLevel; // 0xc8(0x04)
	int32_t MaxLevel; // 0xcc(0x04)
	int32_t Strength; // 0xd0(0x04)
	int32_t Dexterity; // 0xd4(0x04)
	int32_t Stamina; // 0xd8(0x04)
	int32_t Accuracy; // 0xdc(0x04)
	int32_t Intelligence; // 0xe0(0x04)
	int32_t Fortune; // 0xe4(0x04)
	float ExperienceToHPRate; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FTimespan MaxExperienceGainTimeout; // 0xf0(0x08)
	bool CanDropWeapon; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct FWTLItemDropInfo> ItemsToDrop; // 0x100(0x10)
};

// ScriptStruct WTL.WTLItemDropInfo
// Size: 0x78 (Inherited: 0x00)
struct FWTLItemDropInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
	int32_t MinCondition; // 0x10(0x04)
	int32_t MaxCondition; // 0x14(0x04)
	float NormalChance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FWTLQuestItemDropChance> QuestDropChances; // 0x20(0x10)
	char MinLevel; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MinCountDeltaPerLevel; // 0x34(0x04)
	float MaxCountDeltaPerLevel; // 0x38(0x04)
	float MinConditionDeltaPerLevel; // 0x3c(0x04)
	float MaxConditionDeltaPerLevel; // 0x40(0x04)
	int32_t MinInteractiveObjectID; // 0x44(0x04)
	int32_t MaxInteractiveObjectID; // 0x48(0x04)
	char CustomizationScalar; // 0x4c(0x01)
	char CustomizationColor; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FString CustomizationName; // 0x50(0x10)
	struct FString ModificationData; // 0x60(0x10)
	float NormalChanceDeltaPerLevel; // 0x70(0x04)
	bool DropOnlyIfDoesNotHaveItem; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct WTL.WTLEnemyNPCWeaponItemVariation
// Size: 0x18 (Inherited: 0x00)
struct FWTLEnemyNPCWeaponItemVariation {
	uint16_t WeaponItemTypeID; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<uint16_t> AmmoitemTypeIDVariations; // 0x08(0x10)
};

// ScriptStruct WTL.WTLEnemyGroupItemData
// Size: 0x48 (Inherited: 0x08)
struct FWTLEnemyGroupItemData : FTableRowBase {
	struct FText GroupName; // 0x08(0x18)
	enum class EWTLAITeam Team; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FText> FirstNameVariations; // 0x28(0x10)
	struct TArray<struct FText> LastNameVariations; // 0x38(0x10)
};

// ScriptStruct WTL.WTLCustomWeaponItemData
// Size: 0x58 (Inherited: 0x08)
struct FWTLCustomWeaponItemData : FTableRowBase {
	int32_t WeaponID; // 0x08(0x04)
	char MagazineCapacity; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t DamageMin; // 0x10(0x04)
	int32_t DamageMax; // 0x14(0x04)
	int32_t ArmorPiercingMin; // 0x18(0x04)
	int32_t ArmorPiercingMax; // 0x1c(0x04)
	float CriticalHitChanceMultiplier; // 0x20(0x04)
	int32_t Accuracy; // 0x24(0x04)
	int32_t Condition; // 0x28(0x04)
	int32_t ConditionDelta; // 0x2c(0x04)
	int32_t Weight; // 0x30(0x04)
	int32_t ModCount; // 0x34(0x04)
	struct FText CustomizationName; // 0x38(0x18)
	char CustomizationScalar; // 0x50(0x01)
	char CustomizationColor; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct WTL.WTLCustomizationColorPresetItemData
// Size: 0x30 (Inherited: 0x08)
struct FWTLCustomizationColorPresetItemData : FTableRowBase {
	enum class EWTLCustomizationColorPresetType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor Color; // 0x0c(0x10)
	struct FLinearColor PreviewColor; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLClanStorageTabImageItemData
// Size: 0x90 (Inherited: 0x08)
struct FWTLClanStorageTabImageItemData : FTableRowBase {
	struct FSlateBrush ImageBrush; // 0x08(0x88)
};

// ScriptStruct WTL.WTLRobotCraftItemData
// Size: 0x88 (Inherited: 0x08)
struct FWTLRobotCraftItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> CraftIcon; // 0x38(0x28)
	struct TArray<struct FWTLCraftIngredient> Ingredients; // 0x60(0x10)
	struct FWTLRobotProductionResult Result; // 0x70(0x10)
	float ProductionTime; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct WTL.WTLRobotProductionResult
// Size: 0x10 (Inherited: 0x00)
struct FWTLRobotProductionResult {
	int32_t MonsterID; // 0x00(0x04)
	char MinLevel; // 0x04(0x01)
	char MaxLevel; // 0x05(0x01)
	char Rank; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float MinLifeSpan; // 0x08(0x04)
	float MaxLifeSpan; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLCraftIngredient
// Size: 0x14 (Inherited: 0x00)
struct FWTLCraftIngredient {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
	bool ConsumeOnCraft; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t ConditionDeltaOnCraft; // 0x10(0x04)
};

// ScriptStruct WTL.WTLCraftItemData
// Size: 0xb0 (Inherited: 0x08)
struct FWTLCraftItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> CraftIcon; // 0x38(0x28)
	enum class EWTLCraftType Type; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t PDAModuleID; // 0x64(0x04)
	int32_t QuestID; // 0x68(0x04)
	int32_t CompleteQuestID; // 0x6c(0x04)
	int32_t AchievementID; // 0x70(0x04)
	int32_t NeedCraftExperience; // 0x74(0x04)
	int32_t NeedSurvivalExperience; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FWTLCraftIngredient> Ingredients; // 0x80(0x10)
	struct TArray<struct FWTLCraftResult> Results; // 0x90(0x10)
	float CraftTime; // 0xa0(0x04)
	int32_t CraftExperience; // 0xa4(0x04)
	int32_t SurvivalExperience; // 0xa8(0x04)
	int32_t Experience; // 0xac(0x04)
};

// ScriptStruct WTL.WTLCraftResult
// Size: 0x50 (Inherited: 0x00)
struct FWTLCraftResult {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
	char CustomizationColor; // 0x0c(0x01)
	char CustomizationScalar; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FString CustomizationName; // 0x10(0x10)
	struct FWTLCraftPossibleModification PossibleModification; // 0x20(0x30)
};

// ScriptStruct WTL.WTLCraftPossibleModification
// Size: 0x30 (Inherited: 0x00)
struct FWTLCraftPossibleModification {
	int32_t MinDamageMinChange; // 0x00(0x04)
	int32_t MaxDamageMinChange; // 0x04(0x04)
	int32_t MinDamageMaxChange; // 0x08(0x04)
	int32_t MaxDamageMaxChange; // 0x0c(0x04)
	int32_t MinConditionDeltaChange; // 0x10(0x04)
	int32_t MaxConditionDeltaChange; // 0x14(0x04)
	int32_t MinAccuracyChange; // 0x18(0x04)
	int32_t MaxAccuracyChange; // 0x1c(0x04)
	int32_t MinArmorMinChange; // 0x20(0x04)
	int32_t MaxArmorMinChange; // 0x24(0x04)
	int32_t MinArmorMaxChange; // 0x28(0x04)
	int32_t MaxArmorMaxChange; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLInformationDialogItemData
// Size: 0x20 (Inherited: 0x08)
struct FWTLInformationDialogItemData : FTableRowBase {
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct WTL.WTLCustomizationScalarOptionItemData
// Size: 0x70 (Inherited: 0x08)
struct FWTLCustomizationScalarOptionItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	float Price; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<UTexture> Texture; // 0x28(0x28)
	float Roughness; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FLinearColor> DistinctColors; // 0x58(0x10)
	float ColorAmplifierValue; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct WTL.WTLCustomizationColorItemData
// Size: 0x18 (Inherited: 0x08)
struct FWTLCustomizationColorItemData : FTableRowBase {
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct WTL.WTLChatSmileItemData
// Size: 0x50 (Inherited: 0x08)
struct FWTLChatSmileItemData : FTableRowBase {
	struct FString ImageStyleName; // 0x08(0x10)
	struct TArray<struct FString> TextAliases; // 0x18(0x10)
	struct TSoftObjectPtr<UTexture2D> SmileImage; // 0x28(0x28)
};

// ScriptStruct WTL.WTLSkyLevelPresetItemData
// Size: 0x20 (Inherited: 0x08)
struct FWTLSkyLevelPresetItemData : FTableRowBase {
	struct FText CloudyDay; // 0x08(0x18)
};

// ScriptStruct WTL.WTLItemTypeBrushItemData
// Size: 0x90 (Inherited: 0x08)
struct FWTLItemTypeBrushItemData : FTableRowBase {
	struct FSlateBrush IconBrush; // 0x08(0x88)
};

// ScriptStruct WTL.WTLPortalItemData
// Size: 0x58 (Inherited: 0x08)
struct FWTLPortalItemData : FTableRowBase {
	struct TMap<int32_t, struct FText> LocationDisplayText; // 0x08(0x50)
};

// ScriptStruct WTL.WTLSafeZoneItemData
// Size: 0x20 (Inherited: 0x08)
struct FWTLSafeZoneItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
};

// ScriptStruct WTL.WTLMapMarkerSubTypeBrushItemData
// Size: 0x90 (Inherited: 0x08)
struct FWTLMapMarkerSubTypeBrushItemData : FTableRowBase {
	struct FSlateBrush MarkerSubTypeBrush; // 0x08(0x88)
};

// ScriptStruct WTL.WTLMapMarkerBrushItemData
// Size: 0x118 (Inherited: 0x08)
struct FWTLMapMarkerBrushItemData : FTableRowBase {
	struct FSlateBrush MarkerBrush; // 0x08(0x88)
	struct FSlateBrush MarkerBrushForLegend; // 0x90(0x88)
};

// ScriptStruct WTL.WTLClanSkillItemData
// Size: 0xb0 (Inherited: 0x08)
struct FWTLClanSkillItemData : FTableRowBase {
	char MinClanLevel; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	enum class EWTLSkillType Type; // 0x40(0x01)
	char SkillLevel; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FText EffectDescription; // 0x48(0x18)
	int32_t TechnologyScore; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FWTLSkillDependency> Dependencies; // 0x68(0x10)
	struct TArray<struct FWTLClanParameterInfluence> Influences; // 0x78(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x88(0x28)
};

// ScriptStruct WTL.WTLClanParameterInfluence
// Size: 0x08 (Inherited: 0x00)
struct FWTLClanParameterInfluence {
	enum class EWTLClanParameter Parameter; // 0x00(0x01)
	enum class EWTLParameterInfluenceType InfluenceType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Influence; // 0x04(0x04)
};

// ScriptStruct WTL.WTLSkillDependency
// Size: 0x30 (Inherited: 0x28)
struct FWTLSkillDependency : FWTLPacket {
	enum class EWTLSkillDependencyType Type; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t SkillID; // 0x2a(0x02)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLCharacterSkillItemData
// Size: 0x98 (Inherited: 0x08)
struct FWTLCharacterSkillItemData : FTableRowBase {
	char MinCharacterLevel; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	enum class EWTLSkillType Type; // 0x40(0x01)
	enum class EWTLCharacterClass Class; // 0x41(0x01)
	bool ClassDefault; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t SkillPoints; // 0x44(0x04)
	struct TArray<struct FWTLSkillDependency> Dependencies; // 0x48(0x10)
	struct TArray<struct FWTLCharacterParameterInfluence> Influences; // 0x58(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x68(0x28)
	int32_t ForgetPrice; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct WTL.WTLCharacterParameterInfluence
// Size: 0x08 (Inherited: 0x00)
struct FWTLCharacterParameterInfluence {
	enum class EWTLCharacterParameter Parameter; // 0x00(0x01)
	enum class EWTLParameterInfluenceType InfluenceType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Influence; // 0x04(0x04)
};

// ScriptStruct WTL.WTLKitItemData
// Size: 0x28 (Inherited: 0x08)
struct FWTLKitItemData : FTableRowBase {
	struct FString Name; // 0x08(0x10)
	struct TArray<struct FWTLKitItem> Items; // 0x18(0x10)
};

// ScriptStruct WTL.WTLKitItem
// Size: 0x0c (Inherited: 0x00)
struct FWTLKitItem {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	int32_t Count; // 0x04(0x04)
	int32_t Condition; // 0x08(0x04)
};

// ScriptStruct WTL.WTLCharacterStateIndicatorTableRow
// Size: 0x50 (Inherited: 0x08)
struct FWTLCharacterStateIndicatorTableRow : FTableRowBase {
	enum class EWTLCharacterStateIndicatorNatureType NatureType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct TSoftObjectPtr<UTexture2D> IconTexturePtr; // 0x28(0x28)
};

// ScriptStruct WTL.WTLCharacterEffectsItemData
// Size: 0xb8 (Inherited: 0x08)
struct FWTLCharacterEffectsItemData : FTableRowBase {
	enum class EWTLCharacterEffectType EffectType; // 0x08(0x01)
	enum class EWTLCharacterEffectNatureType NatureType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float EffectCooldownPerSecond; // 0x0c(0x04)
	float MaxVolumesEffectValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FLinearColor BorderColor; // 0x30(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x40(0x28)
	struct TSoftObjectPtr<UFMODEvent> AddingSound; // 0x68(0x28)
	struct TSoftObjectPtr<UFMODEvent> RemovingSound; // 0x90(0x28)
};

// ScriptStruct WTL.WTLQuestItemData
// Size: 0x1f8 (Inherited: 0x08)
struct FWTLQuestItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	enum class EWTLQuestType Type; // 0x20(0x01)
	bool IsHidden; // 0x21(0x01)
	bool CanBeCanceled; // 0x22(0x01)
	bool CanBePerformedInGroup; // 0x23(0x01)
	bool CanGiveGiftCards; // 0x24(0x01)
	char MinCharacterLevel; // 0x25(0x01)
	char MaxCharacterLevel; // 0x26(0x01)
	char RecommendedCharacterLevel; // 0x27(0x01)
	char MinCharacterReputation; // 0x28(0x01)
	char MaxCharacterReputation; // 0x29(0x01)
	enum class EWTLCharacterClass CharacterClass; // 0x2a(0x01)
	bool CheckCharacterFaction; // 0x2b(0x01)
	enum class EWTLFaction CharacterFaction; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t FactionTechnologiesLevel; // 0x30(0x04)
	char MinClanLevel; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FTimespan CompleteTimeLimit; // 0x38(0x08)
	struct FTimespan TakeTimeLimit; // 0x40(0x08)
	bool AutoCompleteQuest; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TSoftObjectPtr<UTexture2D> QuestIcon; // 0x50(0x28)
	struct FText Description; // 0x78(0x18)
	bool bIsShowItemStartQuestInActiveQuestInfo; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FText CustomTextRequirement; // 0x98(0x18)
	bool bIsShowCustomTextRequirementOnlyInActiveQuestInfo; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t MoneyRequirement; // 0xb4(0x04)
	bool DisplayItemRequirementsInHUD; // 0xb8(0x01)
	bool DisplayItemRequirementsInPDA; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct TArray<struct FWTLQuestItemRequirement> ItemRequirements; // 0xc0(0x10)
	struct TArray<struct FWTLQuestRequirement> QuestRequirements; // 0xd0(0x10)
	struct TArray<struct FWTLMonsterKillRequirement> MonsterKillRequirements; // 0xe0(0x10)
	struct TArray<struct FWTLEnemyNPCKillRequirement> EnemyNPCKillRequirements; // 0xf0(0x10)
	struct TArray<struct FWTLCustomQuestRequirement> CustomRequirements; // 0x100(0x10)
	bool bIsShowCustomRequirements; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t ExperienceReward; // 0x114(0x04)
	bool bIsShowMoneyRewardAfterQuestComplete; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32_t MoneyReward; // 0x11c(0x04)
	bool bIsShowItemRewardsAfterQuestComplete; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct TArray<struct FWTLQuestItemReward> ItemRewards; // 0x128(0x10)
	bool UseRandomItemReward; // 0x138(0x01)
	bool bSendItemRewardsByMail; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FTimespan SendItemRewardsByMailInterval; // 0x140(0x08)
	struct TArray<struct FWTLQuestItemReward> ItemRewardsAtStart; // 0x148(0x10)
	int32_t ReputationReward; // 0x158(0x04)
	int32_t CompleteAchievementReward; // 0x15c(0x04)
	int32_t FailAchievementReward; // 0x160(0x04)
	int32_t ClanPVPScoreReward; // 0x164(0x04)
	int32_t ClanPVEScoreReward; // 0x168(0x04)
	int32_t ClanCraftScoreReward; // 0x16c(0x04)
	int32_t ClanTechnologyScoreReward; // 0x170(0x04)
	int32_t CreditsReward; // 0x174(0x04)
	struct FText CustomTextReward; // 0x178(0x18)
	bool bIsHideCustomTextRewardAfterQuestComplete; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TArray<struct FWTLIdentityItemType> WithdrawItemsAfterQuestCompleted; // 0x198(0x10)
	struct TArray<struct FWTLMapQuestPoint> MapQuestPoints; // 0x1a8(0x10)
	struct TArray<struct FWTLMapQuestPoint> MapQuestCompletePoints; // 0x1b8(0x10)
	struct TArray<int32_t> MonsterList; // 0x1c8(0x10)
	struct TArray<struct FWTLQuestStateAction> QuestStateActionsOnComplete; // 0x1d8(0x10)
	struct TArray<int32_t> DeleteQuestOnCancel; // 0x1e8(0x10)
};

// ScriptStruct WTL.WTLQuestStateAction
// Size: 0x08 (Inherited: 0x00)
struct FWTLQuestStateAction {
	int32_t QuestID; // 0x00(0x04)
	enum class EWTLQuestState State; // 0x04(0x01)
	bool SetActive; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct WTL.WTLMapQuestPoint
// Size: 0x10 (Inherited: 0x00)
struct FWTLMapQuestPoint {
	int32_t LocationID; // 0x00(0x04)
	struct FVector PointLocation; // 0x04(0x0c)
};

// ScriptStruct WTL.WTLIdentityItemType
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentityItemType : FWTLPacket {
	enum class EWTLItemType Type; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t TypeID; // 0x2a(0x02)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLQuestItemReward
// Size: 0x40 (Inherited: 0x00)
struct FWTLQuestItemReward {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
	int32_t Condition; // 0x0c(0x04)
	char CustomizationScalar; // 0x10(0x01)
	char CustomizationColor; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString CustomizationName; // 0x18(0x10)
	struct FString ModificationData; // 0x28(0x10)
	bool LockedInInventory; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct WTL.WTLCustomQuestRequirement
// Size: 0x50 (Inherited: 0x00)
struct FWTLCustomQuestRequirement {
	struct FText Name; // 0x00(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x18(0x28)
	bool UseBitMaskForProgress; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t CountBits; // 0x44(0x04)
	int32_t Count; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct WTL.WTLEnemyNPCKillRequirement
// Size: 0x28 (Inherited: 0x00)
struct FWTLEnemyNPCKillRequirement {
	int32_t EnemyNPCID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText EnemyNPCName; // 0x08(0x18)
	char MinLevel; // 0x20(0x01)
	char MaxLevel; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32_t Count; // 0x24(0x04)
};

// ScriptStruct WTL.WTLMonsterKillRequirement
// Size: 0x0c (Inherited: 0x00)
struct FWTLMonsterKillRequirement {
	int32_t MonsterID; // 0x00(0x04)
	char MinLevel; // 0x04(0x01)
	char MaxLevel; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct WTL.WTLQuestRequirement
// Size: 0x08 (Inherited: 0x00)
struct FWTLQuestRequirement {
	int32_t QuestID; // 0x00(0x04)
	enum class EWTLQuestState State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct WTL.WTLQuestItemRequirement
// Size: 0x20 (Inherited: 0x00)
struct FWTLQuestItemRequirement {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	struct FString CustomizationName; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	bool LockedInInventory; // 0x1c(0x01)
	bool ComsumeOnComplete; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct WTL.WTLDialogReplicaItemData
// Size: 0xc8 (Inherited: 0x08)
struct FWTLDialogReplicaItemData : FTableRowBase {
	struct FText CommonText; // 0x08(0x18)
	struct FText MaleText; // 0x20(0x18)
	struct FText FemaleText; // 0x38(0x18)
	struct TSoftObjectPtr<USoundBase> MaleSound; // 0x50(0x28)
	struct TSoftObjectPtr<USoundBase> FemaleSound; // 0x78(0x28)
	struct TSoftObjectPtr<UFMODEvent> ReplicaSound; // 0xa0(0x28)
};

// ScriptStruct WTL.WTLAchievementItemData
// Size: 0x98 (Inherited: 0x08)
struct FWTLAchievementItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> InProgressIcon; // 0x38(0x28)
	struct TSoftObjectPtr<UTexture2D> EarnedIcon; // 0x60(0x28)
	bool Hidden; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t StatisticsParameterID; // 0x8c(0x04)
	int32_t Value; // 0x90(0x04)
	float AchievedPercentage; // 0x94(0x04)
};

// ScriptStruct WTL.WTLStatisticsParameterItemData
// Size: 0x20 (Inherited: 0x08)
struct FWTLStatisticsParameterItemData : FTableRowBase {
	struct FString Name; // 0x08(0x10)
	uint64_t MaxValue; // 0x18(0x08)
};

// ScriptStruct WTL.WTLAICharacterItemData
// Size: 0x1a0 (Inherited: 0x08)
struct FWTLAICharacterItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	char MinLevel; // 0x20(0x01)
	char MaxLevel; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float DangerLevelMultiplier; // 0x24(0x04)
	bool IsRegularAnimal; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MassInKg; // 0x2c(0x04)
	struct TSoftClassPtr<UObject> BlueprintClass; // 0x30(0x28)
	float ExperienceToHPRate; // 0x58(0x04)
	int32_t ExperienceForKill; // 0x5c(0x04)
	struct FTimespan MaxExperienceGainTimeout; // 0x60(0x08)
	float Health; // 0x68(0x04)
	float HealthPerLevel; // 0x6c(0x04)
	float RegenerateHealthDelay; // 0x70(0x04)
	float RegenerateHealthRate; // 0x74(0x04)
	float MinRegenerationDamageTreshold; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FWTLMonsterAttackEffect> CausingEffects; // 0x80(0x10)
	float CloseAttackMinDamage; // 0x90(0x04)
	float CloseAttackMaxDamage; // 0x94(0x04)
	float CloseAttackMinDamagePerLevel; // 0x98(0x04)
	float CloseAttackMaxDamagePerLevel; // 0x9c(0x04)
	float CloseAttackRadiusPerLevel; // 0xa0(0x04)
	float CloseAttackMinArmorPiercing; // 0xa4(0x04)
	float CloseAttackMaxArmorPiercing; // 0xa8(0x04)
	float CloseAttackMinArmorPiercingPerLevel; // 0xac(0x04)
	float CloseAttackMaxArmorPiercingPerLevel; // 0xb0(0x04)
	float CloseAttackEffectPercentPerLevel; // 0xb4(0x04)
	float CloseAttackCriticalDamageMultiplier; // 0xb8(0x04)
	float FarAttackMinDamage; // 0xbc(0x04)
	float FarAttackMaxDamage; // 0xc0(0x04)
	float FarAttackMinDamagePerLevel; // 0xc4(0x04)
	float FarAttackRadiusPerLevel; // 0xc8(0x04)
	float FarAttackMaxDamagePerLevel; // 0xcc(0x04)
	float FarAttackMinArmorPiercingPerLevel; // 0xd0(0x04)
	float FarAttackMaxArmorPiercingPerLevel; // 0xd4(0x04)
	float FarAttackCriticalDamageMultiplier; // 0xd8(0x04)
	float HeadArmor; // 0xdc(0x04)
	float BodyArmor; // 0xe0(0x04)
	float ArmsArmor; // 0xe4(0x04)
	float LegsArmor; // 0xe8(0x04)
	float FeetArmor; // 0xec(0x04)
	float HeadArmorPerLevel; // 0xf0(0x04)
	float BodyArmorPerLevel; // 0xf4(0x04)
	float ArmsArmorPerLevel; // 0xf8(0x04)
	float LegsArmorPerLevel; // 0xfc(0x04)
	float FeetArmorPerLevel; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FSlateBrush ObjectiveIconBrush; // 0x108(0x88)
	struct TArray<struct FWTLItemDropInfo> ItemsToDrop; // 0x190(0x10)
};

// ScriptStruct WTL.WTLMonsterAttackEffect
// Size: 0x10 (Inherited: 0x00)
struct FWTLMonsterAttackEffect {
	enum class EWTLCharacterEffectType EffectType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinValue; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	float Chance; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLMonsterItemData
// Size: 0x1f8 (Inherited: 0x08)
struct FWTLMonsterItemData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	bool UseSimpleIdentification; // 0x20(0x01)
	char MinLevel; // 0x21(0x01)
	char MaxLevel; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	float DangerLevelMultiplier; // 0x24(0x04)
	bool IsRegularAnimal; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MassInKg; // 0x2c(0x04)
	struct TSoftClassPtr<UObject> BlueprintClass; // 0x30(0x28)
	int32_t MasterMonsterID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSoftClassPtr<UObject> ControlledBlueprintClass; // 0x60(0x28)
	int32_t ControlledMonsterStrength; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FWTLControlledMonsterSpawnItemInfo> ControlledItemsSpawn; // 0x90(0x10)
	float ExperienceToHPRate; // 0xa0(0x04)
	int32_t ExperienceForKill; // 0xa4(0x04)
	struct FTimespan MaxExperienceGainTimeout; // 0xa8(0x08)
	float Health; // 0xb0(0x04)
	float HealthPerLevel; // 0xb4(0x04)
	float RegenerateHealthDelay; // 0xb8(0x04)
	float RegenerateHealthRate; // 0xbc(0x04)
	float MinRegenerationDamageTreshold; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FWTLMonsterAttackEffect> CausingEffects; // 0xc8(0x10)
	float CloseAttackMinDamage; // 0xd8(0x04)
	float CloseAttackMaxDamage; // 0xdc(0x04)
	float CloseAttackMinDamagePerLevel; // 0xe0(0x04)
	float CloseAttackMaxDamagePerLevel; // 0xe4(0x04)
	float CloseAttackMinArmorPiercing; // 0xe8(0x04)
	float CloseAttackMaxArmorPiercing; // 0xec(0x04)
	float CloseAttackMinArmorPiercingPerLevel; // 0xf0(0x04)
	float CloseAttackMaxArmorPiercingPerLevel; // 0xf4(0x04)
	float CloseAttackRadiusPerLevel; // 0xf8(0x04)
	float CloseAttackEffectPercentPerLevel; // 0xfc(0x04)
	float CloseAttackCriticalDamageMultiplier; // 0x100(0x04)
	float FarAttackMinDamage; // 0x104(0x04)
	float FarAttackMaxDamage; // 0x108(0x04)
	float FarAttackMinDamagePerLevel; // 0x10c(0x04)
	float FarAttackMaxDamagePerLevel; // 0x110(0x04)
	float FarAttackMinArmorPiercingPerLevel; // 0x114(0x04)
	float FarAttackMaxArmorPiercingPerLevel; // 0x118(0x04)
	float FarAttackRadiusPerLevel; // 0x11c(0x04)
	float FarAttackCriticalDamageMultiplier; // 0x120(0x04)
	float HeadArmor; // 0x124(0x04)
	float BodyArmor; // 0x128(0x04)
	float ArmsArmor; // 0x12c(0x04)
	float LegsArmor; // 0x130(0x04)
	float FeetArmor; // 0x134(0x04)
	float HeadArmorPerLevel; // 0x138(0x04)
	float BodyArmorPerLevel; // 0x13c(0x04)
	float ArmsArmorPerLevel; // 0x140(0x04)
	float LegsArmorPerLevel; // 0x144(0x04)
	float FeetArmorPerLevel; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FSlateBrush ObjectiveIconBrush; // 0x150(0x88)
	int32_t AccountAchievementIDForKill; // 0x1d8(0x04)
	int32_t AccountStatisticsParameterID; // 0x1dc(0x04)
	int32_t AccountStatisticsParameterDelta; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct TArray<struct FWTLItemDropInfo> ItemsToDrop; // 0x1e8(0x10)
};

// ScriptStruct WTL.WTLControlledMonsterSpawnItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FWTLControlledMonsterSpawnItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	float Chance; // 0x08(0x04)
};

// ScriptStruct WTL.WTLCharacterLevelItemData
// Size: 0x18 (Inherited: 0x08)
struct FWTLCharacterLevelItemData : FTableRowBase {
	int32_t Experience; // 0x08(0x04)
	int32_t ExperienceToNextLevel; // 0x0c(0x04)
	int32_t SkillPoints; // 0x10(0x04)
	int32_t ParametersPoints; // 0x14(0x04)
};

// ScriptStruct WTL.WTLLoadingAdviceItemData
// Size: 0x20 (Inherited: 0x08)
struct FWTLLoadingAdviceItemData : FTableRowBase {
	struct FText AdviceText; // 0x08(0x18)
};

// ScriptStruct WTL.WTLLoadingScreenImagesItemData
// Size: 0x30 (Inherited: 0x08)
struct FWTLLoadingScreenImagesItemData : FTableRowBase {
	struct FSoftObjectPath Image; // 0x08(0x18)
	uint16_t AdviceID; // 0x20(0x02)
	char pad_22[0x6]; // 0x22(0x06)
	struct UTexture2D* ImageTexture; // 0x28(0x08)
};

// ScriptStruct WTL.WTLMapItemData
// Size: 0x118 (Inherited: 0x08)
struct FWTLMapItemData : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	struct FString MapPath; // 0x18(0x10)
	struct FText Name; // 0x28(0x18)
	int32_t MasterMapID; // 0x40(0x04)
	struct FVector MasterMapOffset; // 0x44(0x0c)
	int32_t PDAModuleID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TSoftObjectPtr<UTexture2D> MapTexture; // 0x58(0x28)
	struct TSoftObjectPtr<UTexture2D> LocationPreviewTexture; // 0x80(0x28)
	struct TSoftObjectPtr<UMaterial> MinimapMaterial; // 0xa8(0x28)
	float LandscapeSideSize; // 0xd0(0x04)
	struct FVector2D WorldCenterOffset; // 0xd4(0x08)
	float ScaleValue; // 0xdc(0x04)
	float ZoomInScaleDeltaRange; // 0xe0(0x04)
	float ZoomOutScaleDeltaRange; // 0xe4(0x04)
	float MapOriginalSideSize; // 0xe8(0x04)
	float MapSideSizeWithBorder; // 0xec(0x04)
	struct FVector2D FirstSectorPosition; // 0xf0(0x08)
	float SectorSize; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString FirstSectorName; // 0x100(0x10)
	char PDANetworkSignalMin; // 0x110(0x01)
	char PDANetworkSignalMax; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct WTL.WTLCharacterCustomizationItemData
// Size: 0x300 (Inherited: 0x08)
struct FWTLCharacterCustomizationItemData : FTableRowBase {
	enum class EWTLCharacterCustomizationPart Type; // 0x08(0x01)
	enum class EWTLCharacterClass ClassType; // 0x09(0x01)
	bool IsDefaultClassObject; // 0x0a(0x01)
	enum class EWTLSex Sex; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Name; // 0x10(0x18)
	struct TSoftObjectPtr<UTexture2D> ImageTexture; // 0x28(0x28)
	int32_t StoreItemID; // 0x50(0x04)
	int32_t SteamID; // 0x54(0x04)
	struct TArray<int32_t> RequiredSteamDLC; // 0x58(0x10)
	bool NeedLongPants; // 0x68(0x01)
	bool bIsHairlessHead; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x70(0x28)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMeshVariant1; // 0x98(0x28)
	struct FName MaterialSlotName0; // 0xc0(0x08)
	struct FText MaterialName0; // 0xc8(0x18)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color0; // 0xe0(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color1; // 0xf0(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color2; // 0x100(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance0_Color3; // 0x110(0x10)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter0; // 0x120(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter1; // 0x138(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter2; // 0x150(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance0_ScalarParameter3; // 0x168(0x18)
	struct FName MaterialSlotName1; // 0x180(0x08)
	struct FText MaterialName1; // 0x188(0x18)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color0; // 0x1a0(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color1; // 0x1b0(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color2; // 0x1c0(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance1_Color3; // 0x1d0(0x10)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter0; // 0x1e0(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter1; // 0x1f8(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter2; // 0x210(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance1_ScalarParameter3; // 0x228(0x18)
	struct FName MaterialSlotName2; // 0x240(0x08)
	struct FText MaterialName2; // 0x248(0x18)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color0; // 0x260(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color1; // 0x270(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color2; // 0x280(0x10)
	struct FWTLCharacterCustomizationColorParameter MaterialInstance2_Color3; // 0x290(0x10)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter0; // 0x2a0(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter1; // 0x2b8(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter2; // 0x2d0(0x18)
	struct FWTLCharacterCustomizationScalarParameter MaterialInstance2_ScalarParameter3; // 0x2e8(0x18)
};

// ScriptStruct WTL.WTLCharacterCustomizationScalarParameter
// Size: 0x18 (Inherited: 0x00)
struct FWTLCharacterCustomizationScalarParameter {
	struct FString Name; // 0x00(0x10)
	char ScalarValueCount; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct WTL.WTLCharacterCustomizationColorParameter
// Size: 0x10 (Inherited: 0x00)
struct FWTLCharacterCustomizationColorParameter {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct WTL.WTLArtefactItemData
// Size: 0x238 (Inherited: 0x08)
struct FWTLArtefactItemData : FTableRowBase {
	enum class EWTLArtefactType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText ShopDescription; // 0x40(0x18)
	int32_t Validity; // 0x58(0x04)
	int32_t Weight; // 0x5c(0x04)
	int32_t NoteID; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TSoftObjectPtr<UTexture2D> ItemViewImage; // 0x68(0x28)
	struct FText InformationContent; // 0x90(0x18)
	bool bIsCenterInformationContent; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float DropChance; // 0xac(0x04)
	enum class EWTLFaction Faction; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t FactionTechnologiesLevel; // 0xb4(0x04)
	struct TArray<struct FWTLItemClassRequirement> RPGClassRequirements; // 0xb8(0x10)
	float BasePrice; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TSoftObjectPtr<UTexture2D> InventoryIcon; // 0xd0(0x28)
	struct TSoftObjectPtr<UTexture2D> StoreIcon; // 0xf8(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeStoreIcon; // 0x120(0x28)
	struct TSoftClassPtr<UObject> ItemPickupClass; // 0x148(0x28)
	struct TSoftObjectPtr<UStaticMesh> CharacterArtefactPreviewMesh; // 0x170(0x28)
	bool CanBeUnited; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct TArray<struct FWTLCharacterEffectInfluence> Influences; // 0x1a0(0x10)
	enum class EWTLFoodActionType FoodActionType; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	int32_t HungerValue; // 0x1b4(0x04)
	int32_t ThirstValue; // 0x1b8(0x04)
	int32_t HealthValue; // 0x1bc(0x04)
	int32_t StaminaValue; // 0x1c0(0x04)
	int32_t AlcoholValue; // 0x1c4(0x04)
	float PoisonValue; // 0x1c8(0x04)
	float ChemicalsValue; // 0x1cc(0x04)
	float RadiationValue; // 0x1d0(0x04)
	float BleedingValue; // 0x1d4(0x04)
	float WoundedValue; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct TArray<struct FWTLFishCutItemInfo> FishCutItems; // 0x1e0(0x10)
	struct TArray<struct FWTLUseItemResult> ResultItems; // 0x1f0(0x10)
	bool CanBePlacedOnCommission; // 0x200(0x01)
	bool bIsItemStartQuest; // 0x201(0x01)
	char pad_202[0x2]; // 0x202(0x02)
	int32_t QuestIDToStart; // 0x204(0x04)
	bool CanTransferToSteam; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	int32_t SteamMarketID; // 0x20c(0x04)
	struct TSoftObjectPtr<UFMODEvent> UseSoundEvent; // 0x210(0x28)
};

// ScriptStruct WTL.WTLUseItemResult
// Size: 0x0c (Inherited: 0x00)
struct FWTLUseItemResult {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	int32_t Count; // 0x04(0x04)
	int32_t Condition; // 0x08(0x04)
};

// ScriptStruct WTL.WTLFishCutItemInfo
// Size: 0x60 (Inherited: 0x00)
struct FWTLFishCutItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
	int32_t MinCondition; // 0x10(0x04)
	int32_t MaxCondition; // 0x14(0x04)
	float NormalChance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FWTLQuestItemDropChance> QuestDropChances; // 0x20(0x10)
	int32_t MinInteractiveObjectID; // 0x30(0x04)
	int32_t MaxInteractiveObjectID; // 0x34(0x04)
	char CustomizationScalar; // 0x38(0x01)
	char CustomizationColor; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FString CustomizationName; // 0x40(0x10)
	struct FString ModificationData; // 0x50(0x10)
};

// ScriptStruct WTL.WTLItemClassRequirement
// Size: 0x08 (Inherited: 0x00)
struct FWTLItemClassRequirement {
	enum class EWTLCharacterClass Class; // 0x00(0x01)
	char Level; // 0x01(0x01)
	char Strength; // 0x02(0x01)
	char Dexterity; // 0x03(0x01)
	char Stamina; // 0x04(0x01)
	char Accuracy; // 0x05(0x01)
	char Intelligence; // 0x06(0x01)
	char Fortune; // 0x07(0x01)
};

// ScriptStruct WTL.WTLResourceItemData
// Size: 0x128 (Inherited: 0x08)
struct FWTLResourceItemData : FTableRowBase {
	enum class EWTLResourceType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText ShopDescription; // 0x40(0x18)
	float BasePrice; // 0x58(0x04)
	int32_t Weight; // 0x5c(0x04)
	float DropChance; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TSoftObjectPtr<UTexture2D> InventoryIcon; // 0x68(0x28)
	struct TSoftObjectPtr<UTexture2D> StoreIcon; // 0x90(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeStoreIcon; // 0xb8(0x28)
	struct TSoftClassPtr<UObject> ItemPickupClass; // 0xe0(0x28)
	bool CanBeUnited; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct FWTLCharacterEffectInfluence> Influences; // 0x110(0x10)
	bool CanBePlacedOnCommission; // 0x120(0x01)
	bool CanTransferToSteam; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	int32_t SteamMarketID; // 0x124(0x04)
};

// ScriptStruct WTL.WTLClothesItemData
// Size: 0x258 (Inherited: 0x08)
struct FWTLClothesItemData : FTableRowBase {
	enum class EWTLClothesType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText ShopDescription; // 0x40(0x18)
	int32_t MasterClothesID; // 0x58(0x04)
	bool CopyParametersFromMasterClothes; // 0x5c(0x01)
	enum class EWTLArmorClass ArmorClass; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	int32_t ArmorMin; // 0x60(0x04)
	int32_t ArmorMax; // 0x64(0x04)
	bool HaveFrontPlate; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<int32_t> AcceptableFrontPlates; // 0x70(0x10)
	bool HaveBackPlate; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<int32_t> AcceptableBackPlates; // 0x88(0x10)
	float MonsterArmorMultiplier; // 0x98(0x04)
	int32_t Condition; // 0x9c(0x04)
	int32_t ConditionDelta; // 0xa0(0x04)
	int32_t Weight; // 0xa4(0x04)
	bool CoverArms; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float ArmsArmorMultiplier; // 0xac(0x04)
	bool HidesBackpackStraps; // 0xb0(0x01)
	bool HidesBackpack; // 0xb1(0x01)
	bool ReplaceBodyPart; // 0xb2(0x01)
	bool NeedLongPants; // 0xb3(0x01)
	enum class EWTLClothesTorsoMeshVariant TorsoMeshVariant; // 0xb4(0x01)
	enum class EWTLFaction Faction; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	int32_t FactionTechnologiesLevel; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FWTLItemClassRequirement> RPGClassRequirements; // 0xc0(0x10)
	float DropChance; // 0xd0(0x04)
	int32_t MinRepairExperience; // 0xd4(0x04)
	float BasePrice; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TSoftObjectPtr<UTexture2D> InventoryIcon; // 0xe0(0x28)
	struct TSoftObjectPtr<UTexture2D> StoreIcon; // 0x108(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeStoreIcon; // 0x130(0x28)
	struct TSoftClassPtr<UObject> ItemPickupClass; // 0x158(0x28)
	struct TSoftObjectPtr<USkeletalMesh> MaleCharacterBodyMesh; // 0x180(0x28)
	struct TSoftObjectPtr<USkeletalMesh> FemaleCharacterBodyMesh; // 0x1a8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> MaleCharacterBodyMeshVariant1; // 0x1d0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> FemaleCharacterBodyMeshVariant1; // 0x1f8(0x28)
	struct TSoftObjectPtr<UStaticMesh> CharacterClothesPreviewMesh; // 0x220(0x28)
	bool CanBeCustomized; // 0x248(0x01)
	bool CanBeCamouflaged; // 0x249(0x01)
	bool CanBePlacedOnCommission; // 0x24a(0x01)
	bool CanBeViewedThroughPreviewMeshesList; // 0x24b(0x01)
	float ItemPreviewLightIntensity; // 0x24c(0x04)
	bool CanTransferToSteam; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	int32_t SteamMarketID; // 0x254(0x04)
};

// ScriptStruct WTL.WTLStuffItemData
// Size: 0x5e8 (Inherited: 0x08)
struct FWTLStuffItemData : FTableRowBase {
	enum class EWTLStuffType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText ShopDescription; // 0x40(0x18)
	int32_t MasterStuffID; // 0x58(0x04)
	bool CopyParametersFromMasterStuff; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t Condition; // 0x60(0x04)
	int32_t ConditionDelta; // 0x64(0x04)
	struct TArray<int32_t> CanBeRepairedWithItems; // 0x68(0x10)
	int32_t Weight; // 0x78(0x04)
	float DropChance; // 0x7c(0x04)
	int32_t MinRepairExperience; // 0x80(0x04)
	bool MustBeenFactionMember; // 0x84(0x01)
	enum class EWTLFaction Faction; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	int32_t FactionTechnologiesLevel; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FWTLItemClassRequirement> RPGClassRequirements; // 0x90(0x10)
	float BasePrice; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TSoftClassPtr<UObject> BlueprintClass; // 0xa8(0x28)
	struct TSoftObjectPtr<UTexture2D> InventoryIcon; // 0xd0(0x28)
	struct TSoftObjectPtr<UTexture2D> StoreIcon; // 0xf8(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeStoreIcon; // 0x120(0x28)
	struct TSoftClassPtr<UObject> ItemPickupClass; // 0x148(0x28)
	struct TSoftObjectPtr<UTexture2D> ScopeFrameTexture; // 0x170(0x28)
	struct TSoftObjectPtr<UTexture2D> ScopeReticleTexture; // 0x198(0x28)
	struct TSoftObjectPtr<UTexture2D> ScopeOpticalTrashTexture; // 0x1c0(0x28)
	struct TSoftObjectPtr<UTexture2D> ScopeReticleColorMaskTexture; // 0x1e8(0x28)
	float ScopeOverlayScale; // 0x210(0x04)
	bool HasReticleIllumination; // 0x214(0x01)
	bool ReticleIsAlwaysIlluminated; // 0x215(0x01)
	char pad_216[0x2]; // 0x216(0x02)
	struct FLinearColor ReticleIlluminationColor; // 0x218(0x10)
	struct TSoftObjectPtr<UStaticMesh> WeaponAttachmentMesh; // 0x228(0x28)
	enum class EWTLWeaponAttachmentType WeaponAttachmentType; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float WeaponAttachmentZoom; // 0x254(0x04)
	struct FVector FlareRelativeOffset; // 0x258(0x0c)
	float WeaponAttachmentRecoilMultiplier; // 0x264(0x04)
	float WeaponAttachmentDamageMultiplier; // 0x268(0x04)
	float WeaponAttachmentAccuracyMultiplier; // 0x26c(0x04)
	struct TMap<uint16_t, struct FWTLWeaponAttachmentInstallInfo> WeaponInstallInfo; // 0x270(0x50)
	int32_t MaxEnergy; // 0x2c0(0x04)
	int32_t InitialEnergy; // 0x2c4(0x04)
	int32_t EnergyConsumptionPerSecond; // 0x2c8(0x04)
	int32_t EnergyConsumptionPerUse; // 0x2cc(0x04)
	int32_t EnergyRegenerationPerSecond; // 0x2d0(0x04)
	float EnergyRegenerationDelay; // 0x2d4(0x04)
	struct TArray<int32_t> CanBeChargedWithItems; // 0x2d8(0x10)
	int32_t DamageMin; // 0x2e8(0x04)
	int32_t DamageMax; // 0x2ec(0x04)
	int32_t ArmorPiercingMin; // 0x2f0(0x04)
	int32_t ArmorPiercingMax; // 0x2f4(0x04)
	float StaminaPerUse; // 0x2f8(0x04)
	float MiningMultiplier; // 0x2fc(0x04)
	struct TSoftObjectPtr<UStaticMesh> PreviewPointerMesh; // 0x300(0x28)
	float PlacementAngleLimit; // 0x328(0x04)
	float PlacementRange; // 0x32c(0x04)
	bool CanBePlacedOnlyOnLandscape; // 0x330(0x01)
	bool CanBePlacedInSafeZone; // 0x331(0x01)
	bool CanBePlacedOnlyAtNight; // 0x332(0x01)
	char pad_333[0x1]; // 0x333(0x01)
	float PlacementTime; // 0x334(0x04)
	struct TSoftClassPtr<UObject> PlacementActorClass; // 0x338(0x28)
	bool bIsSpecialPlacementStuff; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float PlacementShapeExtendMultiplier; // 0x364(0x04)
	bool bCanBePlacedOnlyInStuffPlacementZone; // 0x368(0x01)
	enum class EWTLWeaponType ModificationWeaponType; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct FString ModificationData; // 0x370(0x10)
	bool CanBePlacedOnCommission; // 0x380(0x01)
	enum class EWTLEquipmentType EquipmentType; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct TSoftObjectPtr<UFMODEvent> ActivationSoundEvent; // 0x388(0x28)
	struct TSoftObjectPtr<UFMODEvent> DeactivationSoundEvent; // 0x3b0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> EquipmentMeshMale; // 0x3d8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> EquipmentMeshFemale; // 0x400(0x28)
	bool NeedHideGlasses; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct TMap<enum class EWTLCharacterClass, struct FTransform> MalePreviewItemTransform; // 0x430(0x50)
	struct TMap<enum class EWTLCharacterClass, struct FTransform> FemalePreviewItemTransform; // 0x480(0x50)
	struct TSoftClassPtr<UObject> Vehicle; // 0x4d0(0x28)
	struct TSoftObjectPtr<UStaticMesh> ItemPreviewMesh; // 0x4f8(0x28)
	float ItemPreviewLightIntensity; // 0x520(0x04)
	bool CanBeUsedInSafeZone; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct TSoftClassPtr<UObject> Drone; // 0x528(0x28)
	int32_t DroneCameraScreenID; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct TSoftObjectPtr<UStaticMesh> DronePreviewMesh; // 0x558(0x28)
	struct TArray<struct FTransform> DronePreviewOffsets; // 0x580(0x10)
	struct TMap<int32_t, int32_t> SprayCanWeaponModification; // 0x590(0x50)
	bool CanTransferToSteam; // 0x5e0(0x01)
	char pad_5E1[0x3]; // 0x5e1(0x03)
	int32_t SteamMarketID; // 0x5e4(0x04)
};

// ScriptStruct WTL.WTLWeaponAttachmentInstallInfo
// Size: 0xc0 (Inherited: 0x00)
struct FWTLWeaponAttachmentInstallInfo {
	struct FVector AimingOffset; // 0x00(0x0c)
	struct FVector AimingHandsOffsetMale; // 0x0c(0x0c)
	struct FVector AimingHandsOffsetFemale; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FTransform AttachmentOffset; // 0x30(0x30)
	struct TSoftObjectPtr<UStaticMesh> MountMesh; // 0x60(0x28)
	char pad_88[0x8]; // 0x88(0x08)
	struct FTransform MountOffset; // 0x90(0x30)
};

// ScriptStruct WTL.WTLMedicineItemData
// Size: 0x188 (Inherited: 0x08)
struct FWTLMedicineItemData : FTableRowBase {
	enum class EWTLMedicineType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FWTLMedicineEffect> Effects; // 0x10(0x10)
	struct TArray<struct FWTLCharacterEffectInfluence> CharacterEffectsInfluence; // 0x20(0x10)
	struct FText Name; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
	struct FText ShopDescription; // 0x60(0x18)
	int32_t Validity; // 0x78(0x04)
	int32_t Weight; // 0x7c(0x04)
	int32_t ExperienceDeltaPerUse; // 0x80(0x04)
	float DropChance; // 0x84(0x04)
	enum class EWTLFaction Faction; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t FactionTechnologiesLevel; // 0x8c(0x04)
	struct TArray<struct FWTLItemClassRequirement> RPGClassRequirements; // 0x90(0x10)
	float BasePrice; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TSoftObjectPtr<UTexture2D> InventoryIcon; // 0xa8(0x28)
	struct TSoftObjectPtr<UTexture2D> StoreIcon; // 0xd0(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeStoreIcon; // 0xf8(0x28)
	struct TSoftClassPtr<UObject> ItemPickupClass; // 0x120(0x28)
	bool CanBeUnited; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TSoftObjectPtr<UFMODEvent> UseSoundEvent; // 0x150(0x28)
	float TotalDuration; // 0x178(0x04)
	bool CanBePlacedOnCommission; // 0x17c(0x01)
	bool CanTransferToSteam; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	int32_t SteamMarketID; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct WTL.WTLMedicineEffect
// Size: 0x20 (Inherited: 0x00)
struct FWTLMedicineEffect {
	enum class EWTLMedicineEffectParameter Parameter; // 0x00(0x01)
	bool bIsPermanent; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MinValue; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* ValueCurve; // 0x10(0x08)
	float Duration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLAmmoItemData
// Size: 0x1f8 (Inherited: 0x08)
struct FWTLAmmoItemData : FTableRowBase {
	enum class EWTLAmmoType Type; // 0x08(0x01)
	enum class EWTLCaliber Caliber; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText Name; // 0x10(0x18)
	struct FString TypeName; // 0x28(0x10)
	struct FText Description; // 0x38(0x18)
	struct FText ShopDescription; // 0x50(0x18)
	int32_t MasterAmmoID; // 0x68(0x04)
	bool CopyParametersFromMasterAmmo; // 0x6c(0x01)
	enum class EWTLFaction Faction; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	int32_t FactionTechonologiesLevel; // 0x70(0x04)
	int32_t DamageMin; // 0x74(0x04)
	int32_t DamageMax; // 0x78(0x04)
	int32_t ArmorPiercingMin; // 0x7c(0x04)
	int32_t ArmorPiercingMax; // 0x80(0x04)
	float PVPDamageMultiplier; // 0x84(0x04)
	float PVEDamageMultiplier; // 0x88(0x04)
	float RobotDamageMultiplier; // 0x8c(0x04)
	float PVPArmorPiercingMultiplier; // 0x90(0x04)
	float PVEArmorPiercingMultiplier; // 0x94(0x04)
	float RobotArmorPiercingMultiplier; // 0x98(0x04)
	int32_t Accuracy; // 0x9c(0x04)
	int32_t Weight; // 0xa0(0x04)
	float InitialVelocity; // 0xa4(0x04)
	float DestroyVelocity; // 0xa8(0x04)
	float PhysicsImpulse; // 0xac(0x04)
	float RagdollImpulse; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FWTLPenetrationCapability> PenetrationCapabilities; // 0xb8(0x10)
	enum class EWTLAmmoProjectileType ProjectileType; // 0xc8(0x01)
	char ProjectileCount; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct TSoftClassPtr<UObject> ProjectileClass; // 0xd0(0x28)
	struct UCurveFloat* VelocityCurve; // 0xf8(0x08)
	struct UCurveFloat* GravityCurve; // 0x100(0x08)
	bool UseReliableHitEvent; // 0x108(0x01)
	bool UseReliableRicochetEvent; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	float ConditionDeltaMultiplier; // 0x10c(0x04)
	bool SpawnTracer; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float SpawnTracerChance; // 0x114(0x04)
	float SpawnTracerOffset; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TSoftClassPtr<UObject> TracerClass; // 0x120(0x28)
	float BasePrice; // 0x148(0x04)
	float DropChance; // 0x14c(0x04)
	struct TSoftObjectPtr<UTexture2D> InventoryIcon; // 0x150(0x28)
	struct TSoftObjectPtr<UTexture2D> StoreIcon; // 0x178(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeStoreIcon; // 0x1a0(0x28)
	struct TSoftClassPtr<UObject> ItemPickupClass; // 0x1c8(0x28)
	bool CanBeUnited; // 0x1f0(0x01)
	bool CanBePlacedOnCommission; // 0x1f1(0x01)
	bool CanTransferToSteam; // 0x1f2(0x01)
	char pad_1F3[0x1]; // 0x1f3(0x01)
	int32_t SteamMarketID; // 0x1f4(0x04)
};

// ScriptStruct WTL.WTLPenetrationCapability
// Size: 0x10 (Inherited: 0x00)
struct FWTLPenetrationCapability {
	enum class EPhysicalSurface SurfaceType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxSize; // 0x04(0x04)
	float MinVelocity; // 0x08(0x04)
	float VelocityPercentDeltaPerUnit; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLWeaponItemData
// Size: 0x200 (Inherited: 0x08)
struct FWTLWeaponItemData : FTableRowBase {
	enum class EWTLWeaponType Type; // 0x08(0x01)
	enum class EWTLCaliber Caliber; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText ShopDescription; // 0x40(0x18)
	char MagazineCapacity; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t DamageMin; // 0x5c(0x04)
	int32_t DamageMax; // 0x60(0x04)
	int32_t ArmorPiercingMin; // 0x64(0x04)
	int32_t ArmorPiercingMax; // 0x68(0x04)
	float CriticalHitChanceMultiplier; // 0x6c(0x04)
	int32_t BaseAmmoID; // 0x70(0x04)
	int32_t Accuracy; // 0x74(0x04)
	int32_t EffectiveRange; // 0x78(0x04)
	int32_t Condition; // 0x7c(0x04)
	int32_t ConditionDelta; // 0x80(0x04)
	float OpticsConditionDeltaMultiplier; // 0x84(0x04)
	int32_t Weight; // 0x88(0x04)
	float DropChance; // 0x8c(0x04)
	int32_t MinRepairExperience; // 0x90(0x04)
	enum class EWTLFaction Faction; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	int32_t FactionTechonologiesLevel; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FWTLItemClassRequirement> RPGClassRequirements; // 0xa0(0x10)
	float BasePrice; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TSoftClassPtr<UObject> BlueprintClass; // 0xb8(0x28)
	struct TSoftObjectPtr<UTexture2D> InventoryIcon; // 0xe0(0x28)
	struct TSoftObjectPtr<UTexture2D> StoreIcon; // 0x108(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeStoreIcon; // 0x130(0x28)
	struct TSoftObjectPtr<UTexture2D> KillsStatsIcon; // 0x158(0x28)
	struct TSoftClassPtr<UObject> ItemPickupClass; // 0x180(0x28)
	struct TSoftObjectPtr<UStaticMesh> CharacterWeaponPreviewMesh; // 0x1a8(0x28)
	struct TArray<struct FTransform> CharacterWeaponPreviewOffsets; // 0x1d0(0x10)
	bool CanBeCustomized; // 0x1e0(0x01)
	bool CanBePlacedOnCommission; // 0x1e1(0x01)
	bool CanBeViewedThroughPreviewMeshesList; // 0x1e2(0x01)
	char pad_1E3[0x1]; // 0x1e3(0x01)
	float ItemPreviewLightIntensity; // 0x1e4(0x04)
	int32_t MasterWeaponID; // 0x1e8(0x04)
	bool CopyParametersFromMasterWeapon; // 0x1ec(0x01)
	bool UseWeaponInstallInfoForMasterWeapon; // 0x1ed(0x01)
	char pad_1EE[0x2]; // 0x1ee(0x02)
	float ExperienceMultiplier; // 0x1f0(0x04)
	bool IsSteamMarketable; // 0x1f4(0x01)
	bool CanTransferToSteam; // 0x1f5(0x01)
	char pad_1F6[0x2]; // 0x1f6(0x02)
	int32_t SteamMarketID; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
};

// ScriptStruct WTL.WTLAICharacterDeathData
// Size: 0x20 (Inherited: 0x00)
struct FWTLAICharacterDeathData {
	bool IsBustServer; // 0x00(0x01)
	char PercentDamage; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector VectorDamage; // 0x04(0x0c)
	float AmmoPhysicsImpulse; // 0x10(0x04)
	float KillingDamage; // 0x14(0x04)
	int32_t DirectionDeathID; // 0x18(0x04)
	char ProjectileCount; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct WTL.WTLMonsterAction
// Size: 0x110 (Inherited: 0x00)
struct FWTLMonsterAction {
	bool bUseParticleSystem; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x08(0x28)
	struct FVector ParticleSystemLocationOffset; // 0x30(0x0c)
	struct FRotator ParticleSystemRotationOffset; // 0x3c(0x0c)
	struct FVector ParticleSystemScale; // 0x48(0x0c)
	struct FName ParticleSystemSocketName; // 0x54(0x08)
	bool bAttachParticleSystemToSocket; // 0x5c(0x01)
	bool bUseSound; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct TSoftObjectPtr<USoundBase> SoundToPlay; // 0x60(0x28)
	struct TSoftObjectPtr<UFMODEvent> SoundEventToPlay; // 0x88(0x28)
	float SoundVolumeMultiplier; // 0xb0(0x04)
	struct FVector SoundLocationOffset; // 0xb4(0x0c)
	struct FName SoundSocketName; // 0xc0(0x08)
	bool bAttachSoundToSocket; // 0xc8(0x01)
	bool bUseCameraShake; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	struct FVector EpicentreLocationOffset; // 0xcc(0x0c)
	float EpicentreRadius; // 0xd8(0x04)
	float ShakeStrengthMultiplier; // 0xdc(0x04)
	struct FName EpicentreSocketName; // 0xe0(0x08)
	struct TSoftClassPtr<UObject> CameraShakeToPlay; // 0xe8(0x28)
};

// ScriptStruct WTL.WTLRadioTeleportPlace
// Size: 0x08 (Inherited: 0x00)
struct FWTLRadioTeleportPlace {
	int32_t LocationID; // 0x00(0x04)
	int32_t PortalID; // 0x04(0x04)
};

// ScriptStruct WTL.WTLArenaReward
// Size: 0x0c (Inherited: 0x00)
struct FWTLArenaReward {
	int32_t Score; // 0x00(0x04)
	int32_t LootBoxID; // 0x04(0x04)
	int32_t MoneyReward; // 0x08(0x04)
};

// ScriptStruct WTL.WTLBallisticsProjectileData
// Size: 0xa0 (Inherited: 0x00)
struct FWTLBallisticsProjectileData {
	struct AWTLCharacter* Character; // 0x00(0x08)
	struct AWTLRangedWeapon* Weapon; // 0x08(0x08)
	uint16_t WeaponID; // 0x10(0x02)
	char pad_12[0xe]; // 0x12(0x0e)
	uint16_t AmmoID; // 0x20(0x02)
	char pad_22[0xe]; // 0x22(0x0e)
	struct FTransform SpawnTransform; // 0x30(0x30)
	struct FDateTime SpawnTime; // 0x60(0x08)
	float ProjectileLifeTime; // 0x68(0x04)
	struct FVector PreviousPosition; // 0x6c(0x0c)
	struct FVector CurrentPosition; // 0x78(0x0c)
	float CurrentVelocity; // 0x84(0x04)
	char HitCount; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float VelocityPenalty; // 0x8c(0x04)
	uint16_t TracerID; // 0x90(0x02)
	bool FirstIteration; // 0x92(0x01)
	bool RemoveFlag; // 0x93(0x01)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct WTL.WTLBallisticsActorPositionData
// Size: 0x18 (Inherited: 0x00)
struct FWTLBallisticsActorPositionData {
	uint64_t ServerTime; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WTL.SkeletalMeshMergeParams
// Size: 0x40 (Inherited: 0x00)
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x00(0x10)
	struct TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10(0x10)
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x20(0x10)
	int32_t StripTopLODS; // 0x30(0x04)
	char bNeedsCpuAccess : 1; // 0x34(0x01)
	char bSkeletonBefore : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct USkeleton* Skeleton; // 0x38(0x08)
};

// ScriptStruct WTL.SkelMeshMergeUVTransformMapping
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x00(0x10)
};

// ScriptStruct WTL.SkelMeshMergeUVTransform
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransform {
	struct TArray<struct FTransform> UVTransforms; // 0x00(0x10)
};

// ScriptStruct WTL.SkelMeshMergeSectionMapping_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x00(0x10)
};

// ScriptStruct WTL.WTLMonsterBurst
// Size: 0x0c (Inherited: 0x00)
struct FWTLMonsterBurst {
	bool IsBurst; // 0x00(0x01)
	char PercentDamageBurst; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float TakeDamageBurst; // 0x04(0x04)
	char MinLevelBurst; // 0x08(0x01)
	char MaxLevelBurst; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct WTL.WTLMaterialSpriteElement
// Size: 0x28 (Inherited: 0x00)
struct FWTLMaterialSpriteElement {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct WTL.WTLDisplayAnimationSet
// Size: 0x20 (Inherited: 0x00)
struct FWTLDisplayAnimationSet {
	enum class EWTLDisplayInputType InputType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InputDirection; // 0x04(0x04)
	struct UAnimMontage* ItemMontage; // 0x08(0x08)
	struct UAnimMontage* PawnMontage; // 0x10(0x08)
	float AnimationRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLCameraLimits
// Size: 0x0c (Inherited: 0x00)
struct FWTLCameraLimits {
	float YawLimit; // 0x00(0x04)
	float PitchMinLimit; // 0x04(0x04)
	float PitchMaxLimit; // 0x08(0x04)
};

// ScriptStruct WTL.WTLIngredientItemConsumeInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLIngredientItemConsumeInfo {
	int32_t CraftRecipeID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t ItemId; // 0x08(0x08)
	struct FDateTime LastConsumeTime; // 0x10(0x08)
};

// ScriptStruct WTL.WTLCharacterAnimInstanceProxy
// Size: 0x770 (Inherited: 0x760)
struct FWTLCharacterAnimInstanceProxy : FAnimInstanceProxy {
	bool bIsTestPassed; // 0x760(0x01)
	char pad_761[0xf]; // 0x761(0x0f)
};

// ScriptStruct WTL.WTLMarkerMemoryElement
// Size: 0x38 (Inherited: 0x00)
struct FWTLMarkerMemoryElement {
	float MemoryValue; // 0x00(0x04)
	struct FVector_NetQuantize WorldPosition; // 0x04(0x0c)
	char pad_10[0x20]; // 0x10(0x20)
	enum class EWTLMarkerType MarkerType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct WTL.WTLIdentificationMemoryElement
// Size: 0x30 (Inherited: 0x00)
struct FWTLIdentificationMemoryElement {
	float MemoryValue; // 0x00(0x04)
	float LastZDistance[0x3]; // 0x04(0x0c)
	bool bVisibleInThisFrame; // 0x10(0x01)
	bool bSkipInThisFrame; // 0x11(0x01)
	char pad_12[0x1e]; // 0x12(0x1e)
};

// ScriptStruct WTL.WTLIdentificationCache
// Size: 0x40 (Inherited: 0x00)
struct FWTLIdentificationCache {
	char IdentificationClassID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* Actor; // 0x08(0x08)
	struct FVector ActorLocation; // 0x10(0x0c)
	struct FVector IdentificationLocation; // 0x1c(0x0c)
	float Distance; // 0x28(0x04)
	float Condition; // 0x2c(0x04)
	float Energy; // 0x30(0x04)
	enum class EWTLFaction Faction; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t State; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct WTL.WTLCheckpointState
// Size: 0x18 (Inherited: 0x00)
struct FWTLCheckpointState {
	enum class EWTLFaction ControlFaction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime LastHackTime; // 0x08(0x08)
	struct FDateTime TimeTillNextHack; // 0x10(0x08)
};

// ScriptStruct WTL.WTLIntruderInfo
// Size: 0x10 (Inherited: 0x00)
struct FWTLIntruderInfo {
	uint64_t CharacterID; // 0x00(0x08)
	float TimeLeft; // 0x08(0x04)
	bool bIsKilled; // 0x0c(0x01)
	bool bIsLethal; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct WTL.WTLBackButtonAction
// Size: 0x118 (Inherited: 0x00)
struct FWTLBackButtonAction {
	enum class EWTLBackButtonActionType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FWTLStoreItem StoreItemData; // 0x08(0x108)
	struct UWTLCommonStoreItem* StoreItem; // 0x110(0x08)
};

// ScriptStruct WTL.WTLStoreItemTagMatchCount
// Size: 0x10 (Inherited: 0x00)
struct FWTLStoreItemTagMatchCount {
	struct UWTLCommonStoreItem* StoreItem; // 0x00(0x08)
	int32_t TagMatchCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLDroneMarker
// Size: 0x0c (Inherited: 0x00)
struct FWTLDroneMarker {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct WTL.WTLControlledMonsterActionBase
// Size: 0x60 (Inherited: 0x00)
struct FWTLControlledMonsterActionBase {
	bool ExecutedWithoutAnimation; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimSequenceBase* Animation; // 0x08(0x08)
	struct TArray<struct FWTLNotificationForAction> NotificationList; // 0x10(0x10)
	float Cooldown; // 0x20(0x04)
	bool IsInterrupted; // 0x24(0x01)
	bool IsRotateToSpringArm; // 0x25(0x01)
	bool IsAdditive; // 0x26(0x01)
	bool IsUseServerSideAnimations; // 0x27(0x01)
	float StaminaCost; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<UTexture2D> AbilityIcon; // 0x30(0x28)
	struct FName KeyName; // 0x58(0x08)
};

// ScriptStruct WTL.WTLNotificationForAction
// Size: 0x10 (Inherited: 0x00)
struct FWTLNotificationForAction {
	float Timeline; // 0x00(0x04)
	struct FName ActionName; // 0x04(0x08)
	bool IsDone; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct WTL.WTLDeminingCombinations
// Size: 0x18 (Inherited: 0x00)
struct FWTLDeminingCombinations {
	float TotalTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> Combinations; // 0x08(0x10)
};

// ScriptStruct WTL.WTLSenseEventInfo
// Size: 0x28 (Inherited: 0x00)
struct FWTLSenseEventInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* EventInstigator; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FDateTime Time; // 0x20(0x08)
};

// ScriptStruct WTL.WTLTaggedSenseEventInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLTaggedSenseEventInfo : FWTLSenseEventInfo {
	struct FString Tag; // 0x28(0x10)
};

// ScriptStruct WTL.WTLFootstepSettings
// Size: 0x0c (Inherited: 0x00)
struct FWTLFootstepSettings {
	float WalkFootstepMinInterval; // 0x00(0x04)
	float SprintFootstepMinInterval; // 0x04(0x04)
	float CrouchFootstepMinInterval; // 0x08(0x04)
};

// ScriptStruct WTL.WTLEnemyCurrentState
// Size: 0x1e (Inherited: 0x00)
struct FWTLEnemyCurrentState {
	uint16_t EnemyTypeID; // 0x00(0x02)
	uint16_t HeadClothesItemTypeID; // 0x02(0x02)
	uint16_t TorsoClothesItemTypeID; // 0x04(0x02)
	uint16_t LegsClothesItemTypeID; // 0x06(0x02)
	uint16_t FeetClothesItemTypeID; // 0x08(0x02)
	uint16_t FrontPlateTypeID; // 0x0a(0x02)
	uint16_t BackPlateTypeID; // 0x0c(0x02)
	uint16_t WeaponItemTypeID; // 0x0e(0x02)
	uint16_t AmmoTypeID; // 0x10(0x02)
	char HeadCustomizationIndex; // 0x12(0x01)
	char TorsoCustomizationIndex; // 0x13(0x01)
	char LegsCustomizationIndex; // 0x14(0x01)
	char FeetCustomizationIndex; // 0x15(0x01)
	uint16_t FirstNameIndex; // 0x16(0x02)
	uint16_t LastNameIndex; // 0x18(0x02)
	char Level; // 0x1a(0x01)
	enum class EWTLAITeam Team; // 0x1b(0x01)
	char VoiceType; // 0x1c(0x01)
	char pad_1D[0x1]; // 0x1d(0x01)
};

// ScriptStruct WTL.WTLEnemyNPCSpawnerRecord
// Size: 0x38 (Inherited: 0x00)
struct FWTLEnemyNPCSpawnerRecord {
	struct TSoftClassPtr<UObject> EnemyNPC; // 0x00(0x28)
	int32_t MinCount; // 0x28(0x04)
	int32_t MaxCount; // 0x2c(0x04)
	char MinLevel; // 0x30(0x01)
	char MaxLevel; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct WTL.WTLEventItemReward
// Size: 0x50 (Inherited: 0x00)
struct FWTLEventItemReward {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
	int32_t MinCondition; // 0x10(0x04)
	int32_t MaxCondition; // 0x14(0x04)
	float Chance; // 0x18(0x04)
	int32_t MinInteractiveObjectID; // 0x1c(0x04)
	int32_t MaxInteractiveObjectID; // 0x20(0x04)
	char CustomizationScalar; // 0x24(0x01)
	char CustomizationColor; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FString CustomizationName; // 0x28(0x10)
	struct FString ModificationData; // 0x38(0x10)
	int32_t SpecialItemGroup; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct WTL.WTLEventTask
// Size: 0x20 (Inherited: 0x00)
struct FWTLEventTask {
	struct FText Name; // 0x00(0x18)
	int32_t NeedValue; // 0x18(0x04)
	int32_t CurrentValue; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLFishingCharacterHistory
// Size: 0x18 (Inherited: 0x00)
struct FWTLFishingCharacterHistory {
	uint64_t CharacterID; // 0x00(0x08)
	int32_t SuccessTakeCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDateTime FishingTimeStart; // 0x10(0x08)
};

// ScriptStruct WTL.WTLFishingCharacter
// Size: 0x20 (Inherited: 0x00)
struct FWTLFishingCharacter {
	struct AWTLCharacter* Character; // 0x00(0x08)
	struct FWTLItem CurrentBait; // 0x08(0x08)
	struct FDateTime NextBiteTime; // 0x10(0x08)
	int32_t CurrentFishIndex; // 0x18(0x04)
	char CurrentQTEDifficulty; // 0x1c(0x01)
	char CurrentQTEErrorsCount; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct WTL.WTLFortificationReward
// Size: 0x0c (Inherited: 0x00)
struct FWTLFortificationReward {
	int32_t Score; // 0x00(0x04)
	int32_t LootBoxID; // 0x04(0x04)
	int32_t MoneyReward; // 0x08(0x04)
};

// ScriptStruct WTL.WTLMarkerInfo
// Size: 0x70 (Inherited: 0x00)
struct FWTLMarkerInfo {
	enum class EWTLMarkerType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> MarkerTexture; // 0x08(0x28)
	struct FColor IconColor; // 0x30(0x04)
	struct FColor TextColor; // 0x34(0x04)
	struct FVector2D AdditionalScale; // 0x38(0x08)
	float LifeTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TSoftObjectPtr<UCurveFloat> AlphaCurve; // 0x48(0x28)
};

// ScriptStruct WTL.WTLKnifeImpactEffect
// Size: 0x78 (Inherited: 0x00)
struct FWTLKnifeImpactEffect {
	enum class EPhysicalSurface SurfaceType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> SoundEvent; // 0x30(0x28)
	struct TArray<struct UMaterialInstance*> HitDecals; // 0x58(0x10)
	struct FVector HitDecalScale; // 0x68(0x0c)
	float HitDecalLifeSpan; // 0x74(0x04)
};

// ScriptStruct WTL.WTLVoiceDataPacket
// Size: 0x1688 (Inherited: 0x00)
struct FWTLVoiceDataPacket {
	struct FDateTime ReceiveTime; // 0x00(0x08)
	char Data[0x1680]; // 0x08(0x1680)
};

// ScriptStruct WTL.WTLCharacterDamageEffect
// Size: 0x30 (Inherited: 0x00)
struct FWTLCharacterDamageEffect {
	struct TSoftObjectPtr<UFMODEvent> SoundEvent; // 0x00(0x28)
	float HealthPercent; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLBulletFlyNearEffect
// Size: 0x60 (Inherited: 0x00)
struct FWTLBulletFlyNearEffect {
	enum class EWTLCaliber Caliber; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UFMODEvent> FlyNearSoundEvent; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> CharacterFearSoundEvent; // 0x30(0x28)
	float FringeAmount; // 0x58(0x04)
	float VingetteAmount; // 0x5c(0x04)
};

// ScriptStruct WTL.WTLFootstepEffect
// Size: 0x80 (Inherited: 0x00)
struct FWTLFootstepEffect {
	enum class EPhysicalSurface SurfaceType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UFMODEvent> SoundEvent; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> AlternativeSoundEvent; // 0x30(0x28)
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x58(0x28)
};

// ScriptStruct WTL.WTLBulletImpactEffect
// Size: 0x98 (Inherited: 0x00)
struct FWTLBulletImpactEffect {
	enum class EPhysicalSurface SurfaceType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> SoundEvent; // 0x30(0x28)
	struct TArray<struct UMaterialInstance*> HitDecals; // 0x58(0x10)
	struct FVector HitDecalScale; // 0x68(0x0c)
	float HitDecalLifeSpan; // 0x74(0x04)
	struct TArray<struct UMaterialInstance*> RicochetDecals; // 0x78(0x10)
	struct FVector RicochetDecalScale; // 0x88(0x0c)
	float RicochetDecalLifeSpan; // 0x94(0x04)
};

// ScriptStruct WTL.RespawnQueryElement
// Size: 0x10 (Inherited: 0x00)
struct FRespawnQueryElement {
	struct FDateTime RespawnTime; // 0x00(0x08)
	struct APlayerController* Controller; // 0x08(0x08)
};

// ScriptStruct WTL.WTLLootBoxTypeImage
// Size: 0x30 (Inherited: 0x00)
struct FWTLLootBoxTypeImage {
	enum class EWTLLootBoxType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLCharacterClass
// Size: 0x58 (Inherited: 0x00)
struct FWTLCharacterClass {
	enum class EWTLCharacterClass Class; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> FemaleTexture; // 0x08(0x28)
	struct TSoftObjectPtr<UTexture2D> MaleTexture; // 0x30(0x28)
};

// ScriptStruct WTL.WTLQuestFactionSetting
// Size: 0x50 (Inherited: 0x00)
struct FWTLQuestFactionSetting {
	struct FSlateColor FactionNameColor; // 0x00(0x28)
	struct TSoftObjectPtr<UTexture2D> FactionTexture; // 0x28(0x28)
};

// ScriptStruct WTL.WTLServerEventTypeColor
// Size: 0x14 (Inherited: 0x00)
struct FWTLServerEventTypeColor {
	enum class EWTLServerEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct WTL.WTLInteractivePlanSpawnFieldPoint
// Size: 0x18 (Inherited: 0x00)
struct FWTLInteractivePlanSpawnFieldPoint {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct WTL.WTLHitPointInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLHitPointInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct WTL.WTLInteractivePlantSpawnInfo
// Size: 0x08 (Inherited: 0x00)
struct FWTLInteractivePlantSpawnInfo {
	int32_t MaxCount; // 0x00(0x04)
	float Chance; // 0x04(0x04)
};

// ScriptStruct WTL.WTLPickupSpawnPointScalabilitySettings
// Size: 0x14 (Inherited: 0x00)
struct FWTLPickupSpawnPointScalabilitySettings {
	char bUseScalabilitySettings : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t InitialMaxCount; // 0x04(0x04)
	int32_t InitialCountLimit; // 0x08(0x04)
	float MaxCountDeltaPerPlayer; // 0x0c(0x04)
	float CountLimitDeltaPerPlayer; // 0x10(0x04)
};

// ScriptStruct WTL.WTLLocalizationCacheRecord
// Size: 0x20 (Inherited: 0x00)
struct FWTLLocalizationCacheRecord {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
};

// ScriptStruct WTL.WTLJunkMachineBundleData
// Size: 0x18 (Inherited: 0x00)
struct FWTLJunkMachineBundleData {
	struct TArray<struct FWTLJunkMachineItemsData> Items; // 0x00(0x10)
	float Chance; // 0x10(0x04)
	float AdditionalChanceValue; // 0x14(0x04)
};

// ScriptStruct WTL.WTLJunkMachineItemsData
// Size: 0x48 (Inherited: 0x00)
struct FWTLJunkMachineItemsData {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
	int32_t MinCondition; // 0x10(0x04)
	int32_t MaxCondition; // 0x14(0x04)
	int32_t MinInteractiveObjectID; // 0x18(0x04)
	int32_t MaxInteractiveObjectID; // 0x1c(0x04)
	char CustomizationScalar; // 0x20(0x01)
	char CustomizationColor; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FString CustomizationName; // 0x28(0x10)
	struct FString ModificationData; // 0x38(0x10)
};

// ScriptStruct WTL.WTLDelayedSpawnActorInfo
// Size: 0x48 (Inherited: 0x00)
struct FWTLDelayedSpawnActorInfo {
	float Time; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct TSoftClassPtr<UObject> ActorToSpawn; // 0x10(0x28)
	struct APawn* Instigator; // 0x38(0x08)
	struct AActor* Owner; // 0x40(0x08)
};

// ScriptStruct WTL.WTLDelayedDamageInfo
// Size: 0x58 (Inherited: 0x00)
struct FWTLDelayedDamageInfo {
	float Time; // 0x00(0x04)
	float DamageValue; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
	float Radius; // 0x14(0x04)
	struct TArray<struct AActor*> IgnoredActors; // 0x18(0x10)
	struct AWTLPlayerController* Instigator; // 0x28(0x08)
	struct TSoftClassPtr<UObject> ActorToSpawn; // 0x30(0x28)
};

// ScriptStruct WTL.WTLChunk
// Size: 0x54 (Inherited: 0x00)
struct FWTLChunk {
	struct FIntVector Position; // 0x00(0x0c)
	int32_t ID; // 0x0c(0x04)
	int8_t StateUpdate; // 0x10(0x01)
	int8_t Map[0x40]; // 0x11(0x40)
	char pad_51[0x3]; // 0x51(0x03)
};

// ScriptStruct WTL.WTLMiningSpotResource
// Size: 0x18 (Inherited: 0x00)
struct FWTLMiningSpotResource {
	uint16_t ResourceID; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float MiningChance; // 0x04(0x04)
	float CapacityCostPerUnit; // 0x08(0x04)
	int32_t MinCount; // 0x0c(0x04)
	int32_t MaxCount; // 0x10(0x04)
	int32_t MinMiningExperience; // 0x14(0x04)
};

// ScriptStruct WTL.WTLMiningZoneItem
// Size: 0x30 (Inherited: 0x00)
struct FWTLMiningZoneItem {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	float NormalMiningChance; // 0x04(0x04)
	struct TArray<struct FWTLQuestMiningChance> QuestMiningChances; // 0x08(0x10)
	float MinSignalPower; // 0x18(0x04)
	float CapacityCostPerUnit; // 0x1c(0x04)
	int32_t MinCount; // 0x20(0x04)
	int32_t MaxCount; // 0x24(0x04)
	bool CanBeDetectedWithNDPDetector; // 0x28(0x01)
	bool CanBeDetectedWithMetalDetector; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct WTL.WTLQuestMiningChance
// Size: 0x0c (Inherited: 0x00)
struct FWTLQuestMiningChance {
	int32_t QuestID; // 0x00(0x04)
	float Chance; // 0x04(0x04)
	bool CompleteQuestOnSuccess; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct WTL.WTLMissileWeaponBeamSection
// Size: 0x10 (Inherited: 0x00)
struct FWTLMissileWeaponBeamSection {
	int32_t TrajectoryID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UParticleSystemComponent* ParticleComponent; // 0x08(0x08)
};

// ScriptStruct WTL.WTLMonsterDeathData
// Size: 0x24 (Inherited: 0x00)
struct FWTLMonsterDeathData {
	bool IsBustServer; // 0x00(0x01)
	char PercentDamage; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector VectorDamage; // 0x04(0x0c)
	float AmmoPhysicsImpulse; // 0x10(0x04)
	float KillingDamage; // 0x14(0x04)
	int32_t DirectionDeathID; // 0x18(0x04)
	char ProjectileCount; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float LifeSpan; // 0x20(0x04)
};

// ScriptStruct WTL.WTLMonsterActionBase
// Size: 0x48 (Inherited: 0x00)
struct FWTLMonsterActionBase {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float Cooldown; // 0x08(0x04)
	bool IsBlockingMovement; // 0x0c(0x01)
	bool IsInterrupted; // 0x0d(0x01)
	bool IsAdditive; // 0x0e(0x01)
	bool IsUseServerSideAnimations; // 0x0f(0x01)
	float StaminaCost; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftObjectPtr<UTexture2D> AbilityIcon; // 0x18(0x28)
	enum class EWTLControlledActionKeyType ActionKey; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct WTL.WTLMonstersDataForSpawnBase
// Size: 0x38 (Inherited: 0x00)
struct FWTLMonstersDataForSpawnBase {
	struct TArray<struct AWTLMonsterPawn*> SpawnClass; // 0x00(0x10)
	float LifeTimeMonster; // 0x10(0x04)
	bool IsRandomSelectionClass; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t CountOfActiveMonsters; // 0x18(0x04)
	float IntervalSpawn; // 0x1c(0x04)
	char MinLevel; // 0x20(0x01)
	char MaxLevel; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float SpawnRadius; // 0x24(0x04)
	bool IsLimitMonsterSpawning; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t MonstersLimit; // 0x2c(0x04)
	float LifeTimeSpawn; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct WTL.WTLNPCFactionClothesInfo
// Size: 0x140 (Inherited: 0x00)
struct FWTLNPCFactionClothesInfo {
	struct TSoftObjectPtr<USkeletalMesh> HeadMesh; // 0x00(0x28)
	struct TSoftObjectPtr<USkeletalMesh> HeadSlotMesh; // 0x28(0x28)
	struct TSoftObjectPtr<USkeletalMesh> TorsoMesh; // 0x50(0x28)
	struct TSoftObjectPtr<USkeletalMesh> TorsoSlotMesh; // 0x78(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LegsMesh; // 0xa0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LegsSlotMesh; // 0xc8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> FeetMesh; // 0xf0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> FeetSlotMesh; // 0x118(0x28)
};

// ScriptStruct WTL.WTLNPCAnimationInfo
// Size: 0x20 (Inherited: 0x00)
struct FWTLNPCAnimationInfo {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float BlendIn; // 0x0c(0x04)
	float BlendOut; // 0x10(0x04)
	float MinTimeoutToPlayingNextMontage; // 0x14(0x04)
	float MaxTimeoutToPlayingNextMontage; // 0x18(0x04)
	bool NeedToTurnHeadToCharacter; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct WTL.WTLNPCSupply
// Size: 0x20 (Inherited: 0x00)
struct FWTLNPCSupply {
	int32_t QuestID; // 0x00(0x04)
	int32_t RequiredQuestStates; // 0x04(0x04)
	struct TArray<struct FWTLNPCSupplyItem> Items; // 0x08(0x10)
	int32_t SupplyListReplicaID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLNPCSupplyItem
// Size: 0x10 (Inherited: 0x00)
struct FWTLNPCSupplyItem {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	float BasePriceMultiplier; // 0x08(0x04)
	float ExperienceMultiplier; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLNPCIdleAnimation
// Size: 0x18 (Inherited: 0x00)
struct FWTLNPCIdleAnimation {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Chance; // 0x0c(0x04)
	float MinChangeDelay; // 0x10(0x04)
	float MaxChangeDelay; // 0x14(0x04)
};

// ScriptStruct WTL.WTLQuestReplicas
// Size: 0x100 (Inherited: 0x00)
struct FWTLQuestReplicas {
	int32_t QuestID; // 0x00(0x04)
	int32_t InfoReplicaID; // 0x04(0x04)
	int32_t DescriptionReplicaID; // 0x08(0x04)
	int32_t CharacterReplicaID; // 0x0c(0x04)
	int32_t DescriptionReplicaIDRepeatable; // 0x10(0x04)
	int32_t CharacterReplicaIDRepeatable; // 0x14(0x04)
	int32_t TakeReplicaID; // 0x18(0x04)
	enum class EWTLNPCReplicaAction ActionTakeQuest; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t CompleteReplicaID; // 0x20(0x04)
	enum class EWTLNPCReplicaAction ActionCompleteQuest; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t CancelReplicaID; // 0x28(0x04)
	enum class EWTLNPCReplicaAction ActionRejectQuest; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FWTLReplicaNPCTakeCompleteQuest ReplicaNPCTakeCompleteQuest; // 0x30(0x28)
	struct FWTLReplicaGreetingNpcFromStateQuest ReplicaGreetingNpcFromStateQuest; // 0x58(0x48)
	enum class EWTLNPCReplicaAction ActionGreetingCanTakeQuest; // 0xa0(0x01)
	enum class EWTLNPCReplicaAction ActionGreetingQuestInProgress; // 0xa1(0x01)
	enum class EWTLNPCReplicaAction ActionGreetingCanCompleteQuest; // 0xa2(0x01)
	enum class EWTLNPCReplicaAction ActionGreetingCanReTakeQuest; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FWTLQuestDialogReplicaInfo> DialogReplicaArray; // 0xa8(0x10)
	struct FWTLQuestConditionToExecute QuestConditionToExecute; // 0xb8(0x48)
};

// ScriptStruct WTL.WTLQuestConditionToExecute
// Size: 0x48 (Inherited: 0x00)
struct FWTLQuestConditionToExecute {
	int32_t NeedSlots; // 0x00(0x04)
	int32_t NPCReplicaIDSlot; // 0x04(0x04)
	struct TArray<int32_t> CharacterReplicaArraySlot; // 0x08(0x10)
	int32_t NeedWeight; // 0x18(0x04)
	int32_t NPCReplicaIDWeight; // 0x1c(0x04)
	struct TArray<int32_t> CharacterReplicaArrayWeight; // 0x20(0x10)
	int32_t NeedMoney; // 0x30(0x04)
	int32_t NPCReplicaIDMoney; // 0x34(0x04)
	struct TArray<int32_t> CharacterReplicaArrayMoney; // 0x38(0x10)
};

// ScriptStruct WTL.WTLQuestDialogReplicaInfo
// Size: 0x28 (Inherited: 0x00)
struct FWTLQuestDialogReplicaInfo {
	int32_t CharacterReplicaID; // 0x00(0x04)
	int32_t NPCReplicaID; // 0x04(0x04)
	struct TArray<int32_t> CharacterReplyReplicaArray; // 0x08(0x10)
	struct FString Exec; // 0x18(0x10)
};

// ScriptStruct WTL.WTLReplicaGreetingNpcFromStateQuest
// Size: 0x48 (Inherited: 0x00)
struct FWTLReplicaGreetingNpcFromStateQuest {
	int32_t NPCReplicaIDQuestNone; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> CharacterReplicaIDQuestNone; // 0x08(0x10)
	int32_t NPCReplicaIDQuestInProgress; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> CharacterReplicaIDQuestInProgress; // 0x20(0x10)
	int32_t NPCReplicaIDQuestComplete; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32_t> CharacterReplicaIDQuestComplete; // 0x38(0x10)
};

// ScriptStruct WTL.WTLReplicaNPCTakeCompleteQuest
// Size: 0x28 (Inherited: 0x00)
struct FWTLReplicaNPCTakeCompleteQuest {
	int32_t NPCReplicaIDTakeQuest; // 0x00(0x04)
	int32_t NPCReplicaIDCompleteQuest; // 0x04(0x04)
	struct TArray<int32_t> CharacterReplicaIDTakeQuest; // 0x08(0x10)
	struct TArray<int32_t> CharacterReplicaIDCompleteQuest; // 0x18(0x10)
};

// ScriptStruct WTL.WTLSteamItemInfo
// Size: 0x70 (Inherited: 0x00)
struct FWTLSteamItemInfo {
	uint64_t accountid; // 0x00(0x08)
	uint64_t ItemId; // 0x08(0x08)
	uint16_t quantity; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	uint64_t originalitemid; // 0x18(0x08)
	uint64_t itemdefid; // 0x20(0x08)
	int32_t appid; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString acquired; // 0x30(0x10)
	struct FString State; // 0x40(0x10)
	struct FString Origin; // 0x50(0x10)
	struct FString state_changed_timestamp; // 0x60(0x10)
};

// ScriptStruct WTL.WTLSteamInventoryRequest
// Size: 0x20 (Inherited: 0x00)
struct FWTLSteamInventoryRequest {
	uint64_t SteamID; // 0x00(0x08)
	uint64_t RequestID; // 0x08(0x08)
	uint64_t ItemId; // 0x10(0x08)
	uint64_t itemdefid; // 0x18(0x08)
};

// ScriptStruct WTL.WTLTakeItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FWTLTakeItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct WTL.WTLReplica
// Size: 0x20 (Inherited: 0x00)
struct FWTLReplica {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct WTL.WTLQuestInfo
// Size: 0x08 (Inherited: 0x00)
struct FWTLQuestInfo {
	int32_t ID; // 0x00(0x04)
	enum class EWTLCharacterCanTakeCompleteQuest CanTakeCompleteQuest; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct WTL.WTLPDACustomization
// Size: 0x770 (Inherited: 0x00)
struct FWTLPDACustomization {
	struct UTexture2D* BackgroundImage; // 0x00(0x08)
	struct FButtonStyle ButtonUPStyle; // 0x08(0x278)
	struct FButtonStyle ButtonDownStyle; // 0x280(0x278)
	struct FButtonStyle ButtonCircleStyle; // 0x4f8(0x278)
};

// ScriptStruct WTL.WTLPDASkillConnectorData
// Size: 0x20 (Inherited: 0x00)
struct FWTLPDASkillConnectorData {
	struct TArray<int32_t> SkillIDs; // 0x00(0x10)
	struct TArray<struct FName> BorderNames; // 0x10(0x10)
};

// ScriptStruct WTL.WTLMapCacheData
// Size: 0x100 (Inherited: 0x00)
struct FWTLMapCacheData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct AWTLPortal*> m_Portals; // 0x08(0x10)
	struct FDateTime m_PortalsTime; // 0x18(0x08)
	struct TArray<struct AWTLWaterSource*> m_WaterSources; // 0x20(0x10)
	struct FDateTime m_WaterSourcesTime; // 0x30(0x08)
	struct TArray<struct AWTLNPCActor*> m_NPCs; // 0x38(0x10)
	struct FDateTime m_NPCsTime; // 0x48(0x08)
	struct TArray<struct AWTLFortificationCommandCore*> m_FortificationCommandCores; // 0x50(0x10)
	struct FDateTime m_FortificationCommandCoresTime; // 0x60(0x08)
	struct TArray<struct AWTLBulletinBoard*> m_BulletinBoards; // 0x68(0x10)
	struct FDateTime m_BulletinBoardsTime; // 0x78(0x08)
	struct TArray<struct AWTLEventPoint*> m_EventPoints; // 0x80(0x10)
	struct FDateTime m_EventPointsTime; // 0x90(0x08)
	struct TArray<struct AWTLSafeZone*> m_SafeZones; // 0x98(0x10)
	struct FDateTime m_SafeZonesTime; // 0xa8(0x08)
	struct TArray<struct FWTLMapCacheMonster> m_Monsters; // 0xb0(0x10)
	struct FDateTime m_MonstersTime; // 0xc0(0x08)
	struct FVector m_MonstersLocation; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FWTLMapCacheCharacter> m_Characters; // 0xd8(0x10)
	struct FDateTime m_CharactersTime; // 0xe8(0x08)
	struct FVector m_CharactersLocation; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct WTL.WTLMapCacheCharacter
// Size: 0x38 (Inherited: 0x00)
struct FWTLMapCacheCharacter {
	struct AWTLCharacter* Character; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t CharacterID; // 0x18(0x08)
	struct FString CharacterName; // 0x20(0x10)
	int32_t ClanID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct WTL.WTLMapCacheMonster
// Size: 0x20 (Inherited: 0x00)
struct FWTLMapCacheMonster {
	struct AWTLMonsterPawn* Monster; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	float Distance; // 0x14(0x04)
	uint16_t MonsterID; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct WTL.WTLDamageActorInfo
// Size: 0x10 (Inherited: 0x00)
struct FWTLDamageActorInfo {
	struct AActor* Actor; // 0x00(0x08)
	float Value; // 0x08(0x04)
	bool Critical; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct WTL.WTLCharacterInventoryDeltaRecord
// Size: 0x18 (Inherited: 0x00)
struct FWTLCharacterInventoryDeltaRecord {
	char RecordType; // 0x00(0x01)
	enum class EWTLItemType ItemType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<char> ItemData; // 0x08(0x10)
};

// ScriptStruct WTL.WTLCharacterCustomizationPackedRecord
// Size: 0x40 (Inherited: 0x00)
struct FWTLCharacterCustomizationPackedRecord {
	enum class EWTLCharacterCustomizationPart PartType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t PartID; // 0x02(0x02)
	struct FWTLMaterialPackedParameters MaterialParameters0; // 0x04(0x14)
	struct FWTLMaterialPackedParameters MaterialParameters1; // 0x18(0x14)
	struct FWTLMaterialPackedParameters MaterialParameters2; // 0x2c(0x14)
};

// ScriptStruct WTL.WTLMaterialPackedParameters
// Size: 0x14 (Inherited: 0x00)
struct FWTLMaterialPackedParameters {
	struct FColor Color0; // 0x00(0x04)
	struct FColor Color1; // 0x04(0x04)
	struct FColor Color2; // 0x08(0x04)
	struct FColor Color3; // 0x0c(0x04)
	char Scalar0; // 0x10(0x01)
	char Scalar1; // 0x11(0x01)
	char Scalar2; // 0x12(0x01)
	char Scalar3; // 0x13(0x01)
};

// ScriptStruct WTL.WTLFastAccessSlotItemInfoArray
// Size: 0x118 (Inherited: 0x108)
struct FWTLFastAccessSlotItemInfoArray : FFastArraySerializer {
	struct TArray<struct FWTLFastAccessSlotItemInfo_FastArraySerializerItem> Items; // 0x108(0x10)
};

// ScriptStruct WTL.WTLFastAccessSlotItemInfo_FastArraySerializerItem
// Size: 0x18 (Inherited: 0x0c)
struct FWTLFastAccessSlotItemInfo_FastArraySerializerItem : FFastArraySerializerItem {
	enum class EWTLItemType ItemType; // 0x0c(0x01)
	char pad_D[0x1]; // 0x0d(0x01)
	uint16_t ItemTypeID; // 0x0e(0x02)
	uint16_t ScopeAttachmentTypeID; // 0x10(0x02)
	uint16_t FlashlightAttachmentTypeID; // 0x12(0x02)
	uint16_t MuzzleAttachmentTypeID; // 0x14(0x02)
	char CustomizationScalar; // 0x16(0x01)
	char CustomizationColor; // 0x17(0x01)
};

// ScriptStruct WTL.WTLCharacterItemExperienceFastArray
// Size: 0x118 (Inherited: 0x108)
struct FWTLCharacterItemExperienceFastArray : FFastArraySerializer {
	struct TArray<struct FWTLCharacterItemExperience_FastArraySerializerItem> Items; // 0x108(0x10)
};

// ScriptStruct WTL.WTLCharacterItemExperience_FastArraySerializerItem
// Size: 0x14 (Inherited: 0x0c)
struct FWTLCharacterItemExperience_FastArraySerializerItem : FFastArraySerializerItem {
	enum class EWTLItemType ItemType; // 0x0c(0x01)
	char pad_D[0x1]; // 0x0d(0x01)
	uint16_t ItemTypeID; // 0x0e(0x02)
	uint32_t Experience; // 0x10(0x04)
};

// ScriptStruct WTL.WTLCharacterQuestStateArray
// Size: 0x118 (Inherited: 0x108)
struct FWTLCharacterQuestStateArray : FFastArraySerializer {
	struct TArray<struct FWTLCharacterQuestState_FastArraySerializerItem> Items; // 0x108(0x10)
};

// ScriptStruct WTL.WTLCharacterQuestState_FastArraySerializerItem
// Size: 0x28 (Inherited: 0x0c)
struct FWTLCharacterQuestState_FastArraySerializerItem : FFastArraySerializerItem {
	uint32_t QuestID; // 0x0c(0x04)
	enum class EWTLQuestState State; // 0x10(0x01)
	char Progress1; // 0x11(0x01)
	char Progress2; // 0x12(0x01)
	char Progress3; // 0x13(0x01)
	char Progress4; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FWTLDateTime LastChangeDate; // 0x18(0x08)
	bool Active; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct WTL.WTLCharacterEffectArray
// Size: 0x118 (Inherited: 0x108)
struct FWTLCharacterEffectArray : FFastArraySerializer {
	struct TArray<struct FWTLCharacterEffect_FastArraySerializerItem> Items; // 0x108(0x10)
};

// ScriptStruct WTL.WTLCharacterEffect_FastArraySerializerItem
// Size: 0x14 (Inherited: 0x0c)
struct FWTLCharacterEffect_FastArraySerializerItem : FFastArraySerializerItem {
	enum class EWTLCharacterEffectType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Value; // 0x10(0x04)
};

// ScriptStruct WTL.WTLCharacterMapMarkerArray
// Size: 0x118 (Inherited: 0x108)
struct FWTLCharacterMapMarkerArray : FFastArraySerializer {
	struct TArray<struct FWTLDeprecatedCharacterMapMarker_FastArraySerializerItem> Items; // 0x108(0x10)
};

// ScriptStruct WTL.WTLDeprecatedCharacterMapMarker_FastArraySerializerItem
// Size: 0x38 (Inherited: 0x0c)
struct FWTLDeprecatedCharacterMapMarker_FastArraySerializerItem : FFastArraySerializerItem {
	uint32_t LocationID; // 0x0c(0x04)
	char Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector Position; // 0x14(0x0c)
	struct FString Name; // 0x20(0x10)
	bool ShowOnMinimap; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct WTL.WTLStimulatorEffect
// Size: 0x28 (Inherited: 0x00)
struct FWTLStimulatorEffect {
	struct TArray<struct FWTLMedicineEffect> MedicineEffects; // 0x00(0x10)
	struct TArray<struct FWTLCharacterEffectInfluence> CharacterEffects; // 0x10(0x10)
	float Duration; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct WTL.WTLPortalStationRequest
// Size: 0x08 (Inherited: 0x00)
struct FWTLPortalStationRequest {
	int32_t WayIndex; // 0x00(0x04)
	float LifeSpan; // 0x04(0x04)
};

// ScriptStruct WTL.WTLPortalStationWay
// Size: 0x28 (Inherited: 0x00)
struct FWTLPortalStationWay {
	int32_t LocationID; // 0x00(0x04)
	int32_t PortalID; // 0x04(0x04)
	struct FText Name; // 0x08(0x18)
	bool RouteIsAvailable; // 0x20(0x01)
	char MinCharacterLevel; // 0x21(0x01)
	char MaxCharacterLevel; // 0x22(0x01)
	enum class EWTLFaction Faction; // 0x23(0x01)
	float EnergyConsumptionMultiplier; // 0x24(0x04)
};

// ScriptStruct WTL.WTLDedicatedServerMessage
// Size: 0x50 (Inherited: 0x28)
struct FWTLDedicatedServerMessage : FWTLPacket {
	uint32_t LocationID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString MessageType; // 0x30(0x10)
	struct FString MessageData; // 0x40(0x10)
};

// ScriptStruct WTL.WTLSentMailMessages
// Size: 0x38 (Inherited: 0x28)
struct FWTLSentMailMessages : FWTLPacket {
	struct TArray<struct FWTLSentMailPackageRecord> Items; // 0x28(0x10)
};

// ScriptStruct WTL.WTLSentMailPackageRecord
// Size: 0x70 (Inherited: 0x28)
struct FWTLSentMailPackageRecord : FWTLPacket {
	struct FString ToCharacterName; // 0x28(0x10)
	struct FWTLDateTime MailDate; // 0x38(0x08)
	struct FWTLDateTime FactDeliveryDate; // 0x40(0x08)
	enum class EWTLMailPackageDeliveryType DeliveryType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32_t TotalWeight; // 0x4c(0x04)
	uint32_t TotalPrice; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString MessageText; // 0x58(0x10)
	enum class EWTLMailPackageState State; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct WTL.WTLFactionLeaderborData
// Size: 0x40 (Inherited: 0x28)
struct FWTLFactionLeaderborData : FWTLPacket {
	enum class EWTLFaction Faction; // 0x28(0x01)
	char Type; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct TArray<struct FWTLFactionLeaderborRecord> Items; // 0x30(0x10)
};

// ScriptStruct WTL.WTLFactionLeaderborRecord
// Size: 0x60 (Inherited: 0x28)
struct FWTLFactionLeaderborRecord : FWTLPacket {
	char Position; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t CharacterID; // 0x30(0x08)
	struct FString Name; // 0x38(0x10)
	char Level; // 0x48(0x01)
	enum class EWTLCharacterClass CharacterClass; // 0x49(0x01)
	enum class EWTLSex Sex; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	uint16_t ClanID; // 0x4c(0x02)
	char pad_4E[0x2]; // 0x4e(0x02)
	int64_t Score; // 0x50(0x08)
	int64_t TotalScore; // 0x58(0x08)
};

// ScriptStruct WTL.WTLEACMessage
// Size: 0x38 (Inherited: 0x28)
struct FWTLEACMessage : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLBuyCreditsInfo
// Size: 0x50 (Inherited: 0x28)
struct FWTLBuyCreditsInfo : FWTLPacket {
	uint64_t StoreItemID; // 0x28(0x08)
	struct FString Language; // 0x30(0x10)
	struct FString Currency; // 0x40(0x10)
};

// ScriptStruct WTL.WTLClanList
// Size: 0x38 (Inherited: 0x28)
struct FWTLClanList : FWTLPacket {
	struct TArray<struct FWTLClanInfo> Items; // 0x28(0x10)
};

// ScriptStruct WTL.WTLClanInfo
// Size: 0x138 (Inherited: 0x28)
struct FWTLClanInfo : FWTLPacket {
	uint16_t ID; // 0x28(0x02)
	enum class EWTLFaction Faction; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FString Name; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	int32_t MemberCount; // 0x50(0x04)
	int32_t CandidateCount; // 0x54(0x04)
	struct FString LeaderName; // 0x58(0x10)
	struct FString StewardName; // 0x68(0x10)
	float Reputation; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	double Score; // 0x80(0x08)
	char Level; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t PVPScore; // 0x8c(0x04)
	int32_t PVEScore; // 0x90(0x04)
	int32_t CraftScore; // 0x94(0x04)
	int32_t TechnologyScore; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<char> Skills; // 0xa0(0x10)
	char pad_B0[0x88]; // 0xb0(0x88)
};

// ScriptStruct WTL.WTLClanPapameters
// Size: 0x88 (Inherited: 0x00)
struct FWTLClanPapameters {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct WTL.WTLAccountCreditsChange
// Size: 0x48 (Inherited: 0x28)
struct FWTLAccountCreditsChange : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	int32_t CreditsAmount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Info; // 0x38(0x10)
};

// ScriptStruct WTL.WTLActivateCodeResult
// Size: 0x48 (Inherited: 0x28)
struct FWTLActivateCodeResult : FWTLPacket {
	bool Success; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString Code; // 0x30(0x10)
	int32_t CurrentBalance; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct WTL.WTLInAppBuyResult
// Size: 0x60 (Inherited: 0x28)
struct FWTLInAppBuyResult : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	bool Success; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString Info; // 0x38(0x10)
	int32_t CurrentBalance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FWTLDateTime PremiumEndTime; // 0x50(0x08)
	char CharacterSlotCount; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct WTL.WTLStoreItemList
// Size: 0x38 (Inherited: 0x28)
struct FWTLStoreItemList : FWTLPacket {
	struct TArray<struct FWTLStoreItem> Items; // 0x28(0x10)
};

// ScriptStruct WTL.WTLPutItemToAccountInventoryCommitRequest
// Size: 0x40 (Inherited: 0x28)
struct FWTLPutItemToAccountInventoryCommitRequest : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	uint64_t AccountInventoryID; // 0x30(0x08)
	bool Success; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct WTL.WTLPutItemToAccountInventoryResult
// Size: 0x50 (Inherited: 0x28)
struct FWTLPutItemToAccountInventoryResult : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	uint64_t AccountInventoryID; // 0x30(0x08)
	enum class EWTLItemType ItemType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	uint64_t ItemId; // 0x40(0x08)
	int32_t Count; // 0x48(0x04)
	bool Success; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct WTL.WTLPutItemToAccountInventoryRequest
// Size: 0x98 (Inherited: 0x28)
struct FWTLPutItemToAccountInventoryRequest : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	enum class EWTLItemType ItemType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	uint64_t ItemId; // 0x38(0x08)
	struct FWTLAccountInventoryItem Item; // 0x40(0x58)
};

// ScriptStruct WTL.WTLGetItemFromAccountInventoryResult
// Size: 0x90 (Inherited: 0x28)
struct FWTLGetItemFromAccountInventoryResult : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	bool Success; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FWTLAccountInventoryItem Item; // 0x38(0x58)
};

// ScriptStruct WTL.WTLGetItemFromAccountInventoryInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLGetItemFromAccountInventoryInfo : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	uint64_t AccountInventoryID; // 0x30(0x08)
	int32_t Count; // 0x38(0x04)
	bool Success; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct WTL.WTLAccountInventoryItemList
// Size: 0x40 (Inherited: 0x28)
struct FWTLAccountInventoryItemList : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	struct TArray<struct FWTLAccountInventoryItem> Items; // 0x30(0x10)
};

// ScriptStruct WTL.WTLSteamInventoryItemList
// Size: 0x38 (Inherited: 0x28)
struct FWTLSteamInventoryItemList : FWTLPacket {
	struct TArray<struct FWTLSteamInventoryItemDefinition> Items; // 0x28(0x10)
};

// ScriptStruct WTL.WTLSteamInventoryItemDefinition
// Size: 0x68 (Inherited: 0x28)
struct FWTLSteamInventoryItemDefinition : FWTLPacket {
	uint64_t itemdefid; // 0x28(0x08)
	int32_t MoneyAmount; // 0x30(0x04)
	int32_t CreditsAmount; // 0x34(0x04)
	enum class EWTLItemType ItemType; // 0x38(0x01)
	char pad_39[0x1]; // 0x39(0x01)
	uint16_t ItemTypeID; // 0x3a(0x02)
	int32_t Count; // 0x3c(0x04)
	int32_t Condition; // 0x40(0x04)
	char CustomizationScalar; // 0x44(0x01)
	char CustomizationColor; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct FString CustomizationName; // 0x48(0x10)
	struct FString ModificationData; // 0x58(0x10)
};

// ScriptStruct WTL.WTLClanScoreStatistics
// Size: 0x38 (Inherited: 0x28)
struct FWTLClanScoreStatistics : FWTLPacket {
	struct TArray<struct FWTLClanScoreStatisticsRecord> Records; // 0x28(0x10)
};

// ScriptStruct WTL.WTLClanScoreStatisticsRecord
// Size: 0x50 (Inherited: 0x28)
struct FWTLClanScoreStatisticsRecord : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	struct FString CharacterName; // 0x30(0x10)
	int32_t PVPScore; // 0x40(0x04)
	int32_t PVEScore; // 0x44(0x04)
	int32_t CraftScore; // 0x48(0x04)
	int32_t TechnologyScore; // 0x4c(0x04)
};

// ScriptStruct WTL.WTLDateTimePeriod
// Size: 0x38 (Inherited: 0x28)
struct FWTLDateTimePeriod : FWTLPacket {
	struct FWTLDateTime Start; // 0x28(0x08)
	struct FWTLDateTime End; // 0x30(0x08)
};

// ScriptStruct WTL.WTLNewCharacterMailMessage
// Size: 0xa0 (Inherited: 0x28)
struct FWTLNewCharacterMailMessage : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	struct FWTLCharacterMailMessage Message; // 0x30(0x70)
};

// ScriptStruct WTL.WTLCharacterMailMessage
// Size: 0x70 (Inherited: 0x28)
struct FWTLCharacterMailMessage : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	bool Read; // 0x30(0x01)
	char Priority; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FWTLDateTime Date; // 0x38(0x08)
	struct FString From; // 0x40(0x10)
	struct FString Subject; // 0x50(0x10)
	struct FString Text; // 0x60(0x10)
};

// ScriptStruct WTL.WTLClanActionLogPage
// Size: 0x40 (Inherited: 0x28)
struct FWTLClanActionLogPage : FWTLPacket {
	int32_t RecordsPerPage; // 0x28(0x04)
	int32_t PageIndex; // 0x2c(0x04)
	struct TArray<struct FWTLClanActionLogRecord> Records; // 0x30(0x10)
};

// ScriptStruct WTL.WTLClanActionLogRecord
// Size: 0x78 (Inherited: 0x28)
struct FWTLClanActionLogRecord : FWTLPacket {
	struct FWTLDateTime EventDate; // 0x28(0x08)
	enum class EWTLClanActionLogRecordType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	uint64_t CharacterID; // 0x38(0x08)
	struct FString CharacterName; // 0x40(0x10)
	uint64_t InstigatorCharacterID; // 0x50(0x08)
	struct FString InstigatorCharacterName; // 0x58(0x10)
	struct FString Info; // 0x68(0x10)
};

// ScriptStruct WTL.WTLClanScoreLogPage
// Size: 0x40 (Inherited: 0x28)
struct FWTLClanScoreLogPage : FWTLPacket {
	int32_t RecordsPerPage; // 0x28(0x04)
	int32_t PageIndex; // 0x2c(0x04)
	struct TArray<struct FWTLClanScoreLogRecord> Records; // 0x30(0x10)
};

// ScriptStruct WTL.WTLClanScoreLogRecord
// Size: 0x60 (Inherited: 0x28)
struct FWTLClanScoreLogRecord : FWTLPacket {
	struct FWTLDateTime EventDate; // 0x28(0x08)
	enum class EWTLClanScoreLogRecordType Type; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t PVPScoreDelta; // 0x34(0x04)
	int32_t PVEScoreDelta; // 0x38(0x04)
	int32_t CraftScoreDelta; // 0x3c(0x04)
	int32_t TechnologyScoreDelta; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	uint64_t CharacterID; // 0x48(0x08)
	struct FString CharacterName; // 0x50(0x10)
};

// ScriptStruct WTL.WTLInAppPurchase
// Size: 0x38 (Inherited: 0x28)
struct FWTLInAppPurchase : FWTLPacket {
	struct TArray<struct FWTLInAppPurchaseItem> Items; // 0x28(0x10)
};

// ScriptStruct WTL.WTLInAppPurchaseItem
// Size: 0x38 (Inherited: 0x28)
struct FWTLInAppPurchaseItem : FWTLPacket {
	uint64_t StoreItemID; // 0x28(0x08)
	float Price; // 0x30(0x04)
	int32_t Count; // 0x34(0x04)
};

// ScriptStruct WTL.WTLAchievementsPercentageList
// Size: 0x38 (Inherited: 0x28)
struct FWTLAchievementsPercentageList : FWTLPacket {
	struct TArray<struct FWTLAchievementsPercentage> Items; // 0x28(0x10)
};

// ScriptStruct WTL.WTLAchievementsPercentage
// Size: 0x30 (Inherited: 0x28)
struct FWTLAchievementsPercentage : FWTLPacket {
	uint16_t AchievementID; // 0x28(0x02)
	char pad_2A[0x2]; // 0x2a(0x02)
	float Percent; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLAccountAchievementsAndStats
// Size: 0x50 (Inherited: 0x28)
struct FWTLAccountAchievementsAndStats : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	struct TArray<struct FWTLIdentity16> Achievements; // 0x30(0x10)
	struct TArray<struct FWTLStatisticsValue> StatisticsValues; // 0x40(0x10)
};

// ScriptStruct WTL.WTLStatisticsValue
// Size: 0x38 (Inherited: 0x28)
struct FWTLStatisticsValue : FWTLPacket {
	uint16_t ParameterID; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	uint64_t Value; // 0x30(0x08)
};

// ScriptStruct WTL.WTLIdentity16
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentity16 : FWTLPacket {
	uint16_t Value; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct WTL.WTLAccountAchievementsList
// Size: 0x40 (Inherited: 0x28)
struct FWTLAccountAchievementsList : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	struct TArray<struct FWTLIdentity16> Items; // 0x30(0x10)
};

// ScriptStruct WTL.WTLTriggerAccountAchievementInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLTriggerAccountAchievementInfo : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	uint16_t AchievementID; // 0x30(0x02)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct WTL.WTLAccountStatisticsValueDelta
// Size: 0x38 (Inherited: 0x28)
struct FWTLAccountStatisticsValueDelta : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	uint16_t ParameterID; // 0x30(0x02)
	char pad_32[0x2]; // 0x32(0x02)
	uint32_t Delta; // 0x34(0x04)
};

// ScriptStruct WTL.WTLFactionLeaderRecord
// Size: 0x58 (Inherited: 0x28)
struct FWTLFactionLeaderRecord : FWTLPacket {
	enum class EWTLFaction Faction; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t CharacterID; // 0x30(0x08)
	struct FString CharacterName; // 0x38(0x10)
	uint16_t ClanID; // 0x48(0x02)
	enum class EWTLCharacterClass ClassID; // 0x4a(0x01)
	char Level; // 0x4b(0x01)
	char Rank; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	uint64_t Score; // 0x50(0x08)
};

// ScriptStruct WTL.WTLCharacterClanInfo
// Size: 0x50 (Inherited: 0x28)
struct FWTLCharacterClanInfo : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	struct FString CharacterName; // 0x30(0x10)
	uint16_t ClanID; // 0x40(0x02)
	enum class EWTLClanMemberType ClanMemberType; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	uint64_t ClanPolicyGroupID; // 0x48(0x08)
};

// ScriptStruct WTL.WTLCharacterFactionInfo
// Size: 0x48 (Inherited: 0x28)
struct FWTLCharacterFactionInfo : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	enum class EWTLFaction Faction; // 0x30(0x01)
	char Reputation; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	uint64_t Score; // 0x38(0x08)
	char Rank; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct WTL.WTLCharacterCustomizationItemRecord
// Size: 0x48 (Inherited: 0x28)
struct FWTLCharacterCustomizationItemRecord : FWTLPacket {
	int32_t ID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	uint64_t StoreItemID; // 0x30(0x08)
	struct TArray<struct FWTLIdentity32> RequiredSteamDLC; // 0x38(0x10)
};

// ScriptStruct WTL.WTLIdentity32
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentity32 : FWTLPacket {
	uint32_t Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLCharacterContactRecord
// Size: 0x58 (Inherited: 0x28)
struct FWTLCharacterContactRecord : FWTLPacket {
	enum class EWTLCharacterContactType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t CharacterID; // 0x30(0x08)
	struct FString CharacterName; // 0x38(0x10)
	struct FString Description; // 0x48(0x10)
};

// ScriptStruct WTL.WTLCheaterReport
// Size: 0x40 (Inherited: 0x28)
struct FWTLCheaterReport : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLAnticheatResponse
// Size: 0x38 (Inherited: 0x28)
struct FWTLAnticheatResponse : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLAuthorization
// Size: 0x80 (Inherited: 0x28)
struct FWTLAuthorization : FWTLPacket {
	uint64_t UserID; // 0x28(0x08)
	enum class EWTLPlatform Platform; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString Login; // 0x38(0x10)
	struct FString Password; // 0x48(0x10)
	struct FWTLVersionInfo Version; // 0x58(0x08)
	uint16_t TicketSize; // 0x60(0x02)
	char pad_62[0xe]; // 0x62(0x0e)
	struct FString UniqueDeviceID; // 0x70(0x10)
};

// ScriptStruct WTL.WTLVersionInfo
// Size: 0x08 (Inherited: 0x00)
struct FWTLVersionInfo {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct WTL.WTLSteamAchievementTrigger
// Size: 0x40 (Inherited: 0x28)
struct FWTLSteamAchievementTrigger : FWTLPacket {
	uint64_t SteamID; // 0x28(0x08)
	struct FString AchievementName; // 0x30(0x10)
};

// ScriptStruct WTL.WTLSteamFloatStatChange
// Size: 0x48 (Inherited: 0x28)
struct FWTLSteamFloatStatChange : FWTLPacket {
	uint64_t SteamID; // 0x28(0x08)
	struct FString StatName; // 0x30(0x10)
	float Value; // 0x40(0x04)
	bool bIsDeltaValue; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct WTL.WTLSteamIntStatChange
// Size: 0x48 (Inherited: 0x28)
struct FWTLSteamIntStatChange : FWTLPacket {
	uint64_t SteamID; // 0x28(0x08)
	struct FString StatName; // 0x30(0x10)
	int32_t Value; // 0x40(0x04)
	bool bIsDeltaValue; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct WTL.WTLClanSkillChange
// Size: 0x30 (Inherited: 0x28)
struct FWTLClanSkillChange : FWTLPacket {
	uint16_t ClanID; // 0x28(0x02)
	char Operation; // 0x2a(0x01)
	char SkillID; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLClanScoreChange
// Size: 0x40 (Inherited: 0x28)
struct FWTLClanScoreChange : FWTLPacket {
	uint16_t ClanID; // 0x28(0x02)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t PVPScore; // 0x2c(0x04)
	int32_t PVEScore; // 0x30(0x04)
	int32_t CraftScore; // 0x34(0x04)
	int32_t TechnologyScore; // 0x38(0x04)
	char ClanLevel; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct WTL.WTLClanMemberRequestState
// Size: 0x60 (Inherited: 0x28)
struct FWTLClanMemberRequestState : FWTLPacket {
	uint16_t ClanID; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString ClanName; // 0x30(0x10)
	struct FWTLDateTime EventDate; // 0x40(0x08)
	enum class EWTLClanMemberType ClanMemberType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString Commentary; // 0x50(0x10)
};

// ScriptStruct WTL.WTLClanMemberRequestList
// Size: 0x38 (Inherited: 0x28)
struct FWTLClanMemberRequestList : FWTLPacket {
	struct TArray<struct FWTLClanMemberRequestInfo> Items; // 0x28(0x10)
};

// ScriptStruct WTL.WTLClanMemberRequestInfo
// Size: 0x78 (Inherited: 0x28)
struct FWTLClanMemberRequestInfo : FWTLPacket {
	uint16_t ClanID; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FWTLDateTime RequestDate; // 0x30(0x08)
	uint64_t CharacterID; // 0x38(0x08)
	struct FString CharacterName; // 0x40(0x10)
	char CharacterLevel; // 0x50(0x01)
	enum class EWTLCharacterClass CharacterClass; // 0x51(0x01)
	enum class EWTLFaction CharacterFaction; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	uint64_t CharacterScore; // 0x58(0x08)
	char CharacterRank; // 0x60(0x01)
	char CharacterReputation; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FString Commentary; // 0x68(0x10)
};

// ScriptStruct WTL.WTLClanPolicyGroup
// Size: 0x40 (Inherited: 0x28)
struct FWTLClanPolicyGroup : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	struct FString Name; // 0x30(0x10)
};

// ScriptStruct WTL.WTLClanRecord
// Size: 0x40 (Inherited: 0x28)
struct FWTLClanRecord : FWTLPacket {
	uint16_t ID; // 0x28(0x02)
	enum class EWTLFaction Faction; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FString Name; // 0x30(0x10)
};

// ScriptStruct WTL.WTLRemovedClanMember
// Size: 0x40 (Inherited: 0x28)
struct FWTLRemovedClanMember : FWTLPacket {
	uint16_t ClanID; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	uint64_t CharacterID; // 0x30(0x08)
	int32_t ClanMemberCount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct WTL.WTLNewClanMember
// Size: 0x60 (Inherited: 0x28)
struct FWTLNewClanMember : FWTLPacket {
	uint16_t ClanID; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	uint64_t CharacterID; // 0x30(0x08)
	struct FString CharacterName; // 0x38(0x10)
	enum class EWTLCharacterClass CharacterClass; // 0x48(0x01)
	char CharacterLevel; // 0x49(0x01)
	enum class EWTLClanMemberType ClanMemberType; // 0x4a(0x01)
	char ClanReputation; // 0x4b(0x01)
	char pad_4C[0x4]; // 0x4c(0x04)
	uint64_t ClanPolicyGroupID; // 0x50(0x08)
	int32_t ClanMemberCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct WTL.WTLClanMember
// Size: 0x50 (Inherited: 0x28)
struct FWTLClanMember : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	struct FString Name; // 0x30(0x10)
	enum class EWTLCharacterClass Class; // 0x40(0x01)
	char Level; // 0x41(0x01)
	enum class EWTLClanMemberType ClanMemberType; // 0x42(0x01)
	char ClanReputation; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
	uint64_t ClanPolicyGroupID; // 0x48(0x08)
};

// ScriptStruct WTL.WTLServerEventInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLServerEventInfo : FWTLPacket {
	enum class EWTLServerEventType Type; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t TimeLeft; // 0x2c(0x04)
	struct FString Comment; // 0x30(0x10)
};

// ScriptStruct WTL.WTLDedicatedServerStatistics
// Size: 0x90 (Inherited: 0x28)
struct FWTLDedicatedServerStatistics : FWTLPacket {
	uint32_t ConnectionCount; // 0x28(0x04)
	uint32_t CharactersCount; // 0x2c(0x04)
	uint64_t MonstersSpawned; // 0x30(0x08)
	uint64_t MonstersKilled; // 0x38(0x08)
	uint64_t MonstersAlive; // 0x40(0x08)
	uint64_t ExperienceTotal; // 0x48(0x08)
	uint64_t ExperienceMaxValue; // 0x50(0x08)
	uint64_t MoneyProduced; // 0x58(0x08)
	uint64_t MoneyConsumed; // 0x60(0x08)
	uint64_t SlotMachinesActivationsCount; // 0x68(0x08)
	uint64_t SlotMachinesBetsMoney; // 0x70(0x08)
	uint64_t SlotMachinesRewardMoney; // 0x78(0x08)
	uint64_t SlotMachinesConsumedMoney; // 0x80(0x08)
	uint64_t SlotMachinesMaxReward; // 0x88(0x08)
};

// ScriptStruct WTL.WTLChangeCreditsResult
// Size: 0x38 (Inherited: 0x28)
struct FWTLChangeCreditsResult : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	uint32_t CreditsAmount; // 0x30(0x04)
	uint32_t MoneyAmount; // 0x34(0x04)
};

// ScriptStruct WTL.WTLChangeCreditsInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLChangeCreditsInfo : FWTLPacket {
	uint64_t accountid; // 0x28(0x08)
	uint64_t CharacterID; // 0x30(0x08)
	uint32_t CreditsAmount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct WTL.WTLClientMoveToLocationInfo
// Size: 0x48 (Inherited: 0x28)
struct FWTLClientMoveToLocationInfo : FWTLPacket {
	uint32_t LocationID; // 0x28(0x04)
	uint32_t PortalID; // 0x2c(0x04)
	struct FString DedicatedServerAddress; // 0x30(0x10)
	int32_t DedicatedServerPort; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct WTL.WTLMoveToLocationInfo
// Size: 0x4d0 (Inherited: 0x28)
struct FWTLMoveToLocationInfo : FWTLPacket {
	uint32_t LocationID; // 0x28(0x04)
	uint32_t PortalID; // 0x2c(0x04)
	struct FWTLFullCharacterInfo CharacterInfo; // 0x30(0x4a0)
};

// ScriptStruct WTL.WTLCharacterInfo
// Size: 0x110 (Inherited: 0x28)
struct FWTLCharacterInfo : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	uint64_t accountid; // 0x30(0x08)
	struct FString Name; // 0x38(0x10)
	enum class EWTLSex Sex; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FWTLDateTime CreationDate; // 0x50(0x08)
	struct FWTLDateTime LastAccessDate; // 0x58(0x08)
	char Level; // 0x60(0x01)
	enum class EWTLCharacterClass Class; // 0x61(0x01)
	uint16_t State; // 0x62(0x02)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString StateDescription; // 0x68(0x10)
	bool Online; // 0x78(0x01)
	char BaseStrength; // 0x79(0x01)
	char BaseDexterity; // 0x7a(0x01)
	char BaseStamina; // 0x7b(0x01)
	char BaseAccuracy; // 0x7c(0x01)
	char BaseIntelligence; // 0x7d(0x01)
	char BaseFortune; // 0x7e(0x01)
	char pad_7F[0x1]; // 0x7f(0x01)
	uint64_t Experience; // 0x80(0x08)
	uint16_t TotalSkillPoints; // 0x88(0x02)
	uint16_t AvailableSkillPoints; // 0x8a(0x02)
	uint32_t WeaponType0Experience; // 0x8c(0x04)
	uint32_t WeaponType1Experience; // 0x90(0x04)
	uint32_t WeaponType2Experience; // 0x94(0x04)
	uint32_t WeaponType3Experience; // 0x98(0x04)
	uint32_t WeaponType4Experience; // 0x9c(0x04)
	uint32_t WeaponType5Experience; // 0xa0(0x04)
	uint32_t WeaponType6Experience; // 0xa4(0x04)
	uint32_t WeaponType7Experience; // 0xa8(0x04)
	uint32_t WeaponType8Experience; // 0xac(0x04)
	uint32_t WeaponType9Experience; // 0xb0(0x04)
	uint32_t MedicExperience; // 0xb4(0x04)
	uint32_t CraftExperience; // 0xb8(0x04)
	uint32_t RepairExperience; // 0xbc(0x04)
	uint32_t ElectronicsExperience; // 0xc0(0x04)
	uint32_t MiningExperience; // 0xc4(0x04)
	uint32_t SurvivalExperience; // 0xc8(0x04)
	uint32_t Balance; // 0xcc(0x04)
	char InventorySlotCount; // 0xd0(0x01)
	enum class EWTLFaction Faction; // 0xd1(0x01)
	char Reputation; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)
	uint64_t Score; // 0xd8(0x08)
	char Rank; // 0xe0(0x01)
	char pad_E1[0x1]; // 0xe1(0x01)
	uint16_t ClanID; // 0xe2(0x02)
	enum class EWTLClanMemberType ClanMemberType; // 0xe4(0x01)
	char ClanReputation; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	uint64_t ClanPolicyGroupID; // 0xe8(0x08)
	enum class EWTLPlayerType PlayerType; // 0xf0(0x01)
	char BodyType; // 0xf1(0x01)
	bool PVPEnabled; // 0xf2(0x01)
	char pad_F3[0x5]; // 0xf3(0x05)
	struct FWTLDateTime PVPStateChangeDate; // 0xf8(0x08)
	struct FWTLDateTime PremiumEndTime; // 0x100(0x08)
	enum class EWTLPlatform Platform; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct WTL.WTLFullCharacterInfo
// Size: 0x4a0 (Inherited: 0x110)
struct FWTLFullCharacterInfo : FWTLCharacterInfo {
	struct FWTLCharacterCurrentState CurrentState; // 0x110(0x188)
	struct TArray<struct FWTLCharacterItemExperience> ItemExperience; // 0x298(0x10)
	struct FWTLStorageContent Inventory; // 0x2a8(0xa8)
	struct TArray<struct FWTLContactListItem> ContactList; // 0x350(0x10)
	struct TArray<struct FWTLIdentity16> Skills; // 0x360(0x10)
	struct FWTLCharacterParameters Parameters; // 0x370(0xe0)
	struct TArray<struct FWTLCharacterCustomizationRecord> CustomizationInfo; // 0x450(0x10)
	struct TArray<struct FWTLCharacterQuestState> QuestStates; // 0x460(0x10)
	struct TArray<struct FWTLDeprecatedCharacterMapMarker> MapMarkers; // 0x470(0x10)
	struct TArray<struct FWTLCharacterEffect> Effects; // 0x480(0x10)
	struct TArray<struct FWTLCharacterMailMessage> Mail; // 0x490(0x10)
};

// ScriptStruct WTL.WTLCharacterEffect
// Size: 0x30 (Inherited: 0x28)
struct FWTLCharacterEffect : FWTLPacket {
	enum class EWTLCharacterEffectType Type; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Value; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLDeprecatedCharacterMapMarker
// Size: 0x58 (Inherited: 0x28)
struct FWTLDeprecatedCharacterMapMarker : FWTLPacket {
	uint32_t LocationID; // 0x28(0x04)
	char Type; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector Position; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Name; // 0x40(0x10)
	bool ShowOnMinimap; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct WTL.WTLCharacterQuestState
// Size: 0x48 (Inherited: 0x28)
struct FWTLCharacterQuestState : FWTLPacket {
	uint32_t QuestID; // 0x28(0x04)
	enum class EWTLQuestState State; // 0x2c(0x01)
	char Progress1; // 0x2d(0x01)
	char Progress2; // 0x2e(0x01)
	char Progress3; // 0x2f(0x01)
	char Progress4; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FWTLDateTime LastChangeDate; // 0x38(0x08)
	bool Active; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct WTL.WTLCharacterCustomizationRecord
// Size: 0x108 (Inherited: 0x28)
struct FWTLCharacterCustomizationRecord : FWTLPacket {
	enum class EWTLCharacterCustomizationPart PartType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t PartID; // 0x2c(0x04)
	struct FWTLMaterialParameters MaterialParameters0; // 0x30(0x48)
	struct FWTLMaterialParameters MaterialParameters1; // 0x78(0x48)
	struct FWTLMaterialParameters MaterialParameters2; // 0xc0(0x48)
};

// ScriptStruct WTL.WTLMaterialParameters
// Size: 0x48 (Inherited: 0x28)
struct FWTLMaterialParameters : FWTLPacket {
	struct FColor Color0; // 0x28(0x04)
	struct FColor Color1; // 0x2c(0x04)
	struct FColor Color2; // 0x30(0x04)
	struct FColor Color3; // 0x34(0x04)
	float Scalar0; // 0x38(0x04)
	float Scalar1; // 0x3c(0x04)
	float Scalar2; // 0x40(0x04)
	float Scalar3; // 0x44(0x04)
};

// ScriptStruct WTL.WTLCharacterParameters
// Size: 0xe0 (Inherited: 0x28)
struct FWTLCharacterParameters : FWTLPacket {
	float CriticalDamageChanceMultiplier; // 0x28(0x04)
	float AvoidCriticalDamageChanceMultiplier; // 0x2c(0x04)
	float ResourceDropChanceMultiplier; // 0x30(0x04)
	float MaxHealthMultiplier; // 0x34(0x04)
	float MaxStaminaMultiplier; // 0x38(0x04)
	float TakenDamageAmountMultiplier; // 0x3c(0x04)
	float AccuracyMultiplier; // 0x40(0x04)
	float MovementSpeedMultiplier; // 0x44(0x04)
	float EnvironmentResistanceMultiplier; // 0x48(0x04)
	float SatietyHealthRegenerationRateMultiplier; // 0x4c(0x04)
	float HealingEfficiencyMultiplier; // 0x50(0x04)
	float WeaponHandlingSpeedMultiplier; // 0x54(0x04)
	float DeathLootLossMultiplier; // 0x58(0x04)
	float UsingItemsExperienceAmountMultiplier; // 0x5c(0x04)
	float UsingRepairKitsEfficiencyMultiplier; // 0x60(0x04)
	float SaveLockpicksChanceMultiplier; // 0x64(0x04)
	float iHR_EfficiencyMultiplier; // 0x68(0x04)
	float AdditionalInventorySlots; // 0x6c(0x04)
	float MaxInventoryWeightMultiplier; // 0x70(0x04)
	float ItemProductionSpeedMultiplier; // 0x74(0x04)
	float AdditionalProductionQueueSlots; // 0x78(0x04)
	float PvP_DamageMultiplier; // 0x7c(0x04)
	float PvP_SlowChanceOnHitMultiplier; // 0x80(0x04)
	float PvP_BleedingChanceOnHitMultiplier; // 0x84(0x04)
	float PvP_KillLootAmountMultiplier; // 0x88(0x04)
	float PvE_EnemyDamageMultiplier; // 0x8c(0x04)
	float PvE_MonsterDamageMultiplier; // 0x90(0x04)
	float PvE_MonsterKillLootAmountMultiplier; // 0x94(0x04)
	float PvE_MonsterKillExperienceAmountMultiplier; // 0x98(0x04)
	float MeleeDamageMultiplier; // 0x9c(0x04)
	float MeleeBleedingChanceMultiplier; // 0xa0(0x04)
	float MeleeCriticalDamageChanceMultiplier; // 0xa4(0x04)
	float PistolDamageMultiplier; // 0xa8(0x04)
	float PistolAccuracyMultiplier; // 0xac(0x04)
	float PistolCriticalDamageChanceMultiplier; // 0xb0(0x04)
	float SubMachineGunDamageMultiplier; // 0xb4(0x04)
	float SubMachineGunAccuracyMultiplier; // 0xb8(0x04)
	float ShotgunDamageMultiplier; // 0xbc(0x04)
	float RifleDamageMultiplier; // 0xc0(0x04)
	float RifleAccuracyMultiplier; // 0xc4(0x04)
	float AssaultRifleDamageMultiplier; // 0xc8(0x04)
	float AssaultRifleAccuracyMultiplier; // 0xcc(0x04)
	float GrenadeLauncherDamageMultiplier; // 0xd0(0x04)
	float ExplosiveDamageMultiplier; // 0xd4(0x04)
	float ArmorWeightSpeedMultiplier; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct WTL.WTLContactListItem
// Size: 0x58 (Inherited: 0x28)
struct FWTLContactListItem : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	struct FString CharacterName; // 0x30(0x10)
	bool Online; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString Location; // 0x48(0x10)
};

// ScriptStruct WTL.WTLCharacterItemExperience
// Size: 0x30 (Inherited: 0x28)
struct FWTLCharacterItemExperience : FWTLPacket {
	enum class EWTLItemType ItemType; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t ItemTypeID; // 0x2a(0x02)
	uint32_t Experience; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLCharacterCurrentState
// Size: 0x188 (Inherited: 0x28)
struct FWTLCharacterCurrentState : FWTLPacket {
	float Health; // 0x28(0x04)
	char Strength; // 0x2c(0x01)
	char Dexterity; // 0x2d(0x01)
	char Stamina; // 0x2e(0x01)
	char Accuracy; // 0x2f(0x01)
	char Intelligence; // 0x30(0x01)
	char Fortune; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	uint32_t LocationID; // 0x34(0x04)
	struct FVector LocationPosition; // 0x38(0x0c)
	enum class EWTLItemType ArmsItemType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	uint64_t ArmsItemID; // 0x48(0x08)
	enum class EWTLItemType HeadItemType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	uint64_t HeadItemID; // 0x58(0x08)
	enum class EWTLItemType TorsoItemType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	uint64_t TorsoItemID; // 0x68(0x08)
	enum class EWTLItemType LegsItemType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	uint64_t LegsItemID; // 0x78(0x08)
	enum class EWTLItemType FeetItemType; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	uint64_t FeetItemID; // 0x88(0x08)
	enum class EWTLItemType EquipmentSlot1ItemType; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	uint64_t EquipmentSlot1ItemID; // 0x98(0x08)
	enum class EWTLItemType EquipmentSlot2ItemType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	uint64_t EquipmentSlot2ItemID; // 0xa8(0x08)
	enum class EWTLItemType EquipmentSlot3ItemType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	uint64_t EquipmentSlot3ItemID; // 0xb8(0x08)
	enum class EWTLItemType EquipmentSlot4ItemType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	uint64_t EquipmentSlot4ItemID; // 0xc8(0x08)
	char EquipmentSlotStates; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FWTLFastAccessSlot> FastAccessSlots; // 0xd8(0x10)
	int32_t SafeZoneID; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FWTLIdentity32> VisitedLocations; // 0xf0(0x10)
	struct TArray<struct FWTLIdentity16> PDAModules; // 0x100(0x10)
	struct TArray<struct FWTLIdentity32> VisitedPortals; // 0x110(0x10)
	char Hunger; // 0x120(0x01)
	char Thirst; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct FWTLMedicineItemEffect MedicineEffect; // 0x128(0x30)
	struct FWTLMedicineItemEffect StimulatorEffect; // 0x158(0x30)
};

// ScriptStruct WTL.WTLMedicineItemEffect
// Size: 0x30 (Inherited: 0x28)
struct FWTLMedicineItemEffect : FWTLPacket {
	uint16_t MedicineID; // 0x28(0x02)
	char pad_2A[0x2]; // 0x2a(0x02)
	float Duration; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLFastAccessSlot
// Size: 0x38 (Inherited: 0x28)
struct FWTLFastAccessSlot : FWTLPacket {
	char SlotNumber; // 0x28(0x01)
	enum class EWTLItemType ItemType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	uint64_t ItemId; // 0x30(0x08)
};

// ScriptStruct WTL.WTLCharacterTravelInfo
// Size: 0x4f8 (Inherited: 0x28)
struct FWTLCharacterTravelInfo : FWTLPacket {
	struct FString TicketUID; // 0x28(0x10)
	uint32_t PortalID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	uint64_t SteamID; // 0x40(0x08)
	struct FWTLFullCharacterInfo CharacterInfo; // 0x48(0x4a0)
	struct TArray<struct FWTLPrivateStorageContent> PrivateStorages; // 0x4e8(0x10)
};

// ScriptStruct WTL.WTLPrivateStorageContent
// Size: 0xb0 (Inherited: 0xa8)
struct FWTLPrivateStorageContent : FWTLStorageContent {
	uint32_t NPCID; // 0xa8(0x04)
	char SlotCount; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
};

// ScriptStruct WTL.WTLArenaLocationStateChange
// Size: 0x38 (Inherited: 0x28)
struct FWTLArenaLocationStateChange : FWTLPacket {
	uint32_t ConfederationPlayersCount; // 0x28(0x04)
	uint32_t BlackSunsetPlayersCount; // 0x2c(0x04)
	uint32_t ConfederationScores; // 0x30(0x04)
	uint32_t BlackSunsetScores; // 0x34(0x04)
};

// ScriptStruct WTL.WTLArenaLocationList
// Size: 0x38 (Inherited: 0x28)
struct FWTLArenaLocationList : FWTLPacket {
	struct TArray<struct FWTLArenaLocationInfo> Data; // 0x28(0x10)
};

// ScriptStruct WTL.WTLArenaLocationInfo
// Size: 0x78 (Inherited: 0x28)
struct FWTLArenaLocationInfo : FWTLPacket {
	uint32_t ID; // 0x28(0x04)
	enum class EWTLLocationType Type; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FString Name; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	uint32_t PlayersCount; // 0x50(0x04)
	uint32_t ConfederationPlayersCount; // 0x54(0x04)
	uint32_t BlackSunsetPlayersCount; // 0x58(0x04)
	uint32_t MinPlayersCount; // 0x5c(0x04)
	uint32_t MaxPlayersCount; // 0x60(0x04)
	uint32_t MatchTime; // 0x64(0x04)
	uint32_t MaxMatchTime; // 0x68(0x04)
	uint32_t ConfederationScores; // 0x6c(0x04)
	uint32_t BlackSunsetScores; // 0x70(0x04)
	uint32_t ScoresToWin; // 0x74(0x04)
};

// ScriptStruct WTL.WTLSetActiveCharacterResult
// Size: 0x4f0 (Inherited: 0x28)
struct FWTLSetActiveCharacterResult : FWTLPacket {
	struct FString DedicatedServerHost; // 0x28(0x10)
	int32_t DedicatedServerPort; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString TicketUID; // 0x40(0x10)
	struct FWTLFullCharacterInfo CharacterInfo; // 0x50(0x4a0)
};

// ScriptStruct WTL.WTLClientAuthorizationResult
// Size: 0x128 (Inherited: 0x28)
struct FWTLClientAuthorizationResult : FWTLPacket {
	uint32_t CreditsToMoneyRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString NetUID; // 0x30(0x10)
	struct FWTLAccountInfo AccountInfo; // 0x40(0xb0)
	struct FWTLCharacterList CharacterList; // 0xf0(0x38)
};

// ScriptStruct WTL.WTLCharacterList
// Size: 0x38 (Inherited: 0x28)
struct FWTLCharacterList : FWTLPacket {
	struct TArray<struct FWTLFullCharacterInfo> Data; // 0x28(0x10)
};

// ScriptStruct WTL.WTLAccountInfo
// Size: 0xb0 (Inherited: 0x28)
struct FWTLAccountInfo : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	struct FString Login; // 0x30(0x10)
	bool Active; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FWTLDateTime CreationDate; // 0x48(0x08)
	struct FWTLDateTime ActivationDate; // 0x50(0x08)
	struct FWTLDateTime LastAccessDate; // 0x58(0x08)
	enum class EWTLSex Sex; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FWTLDateTime BirthDate; // 0x68(0x08)
	uint16_t State; // 0x70(0x02)
	char pad_72[0x6]; // 0x72(0x06)
	struct FString StateDescription; // 0x78(0x10)
	bool Online; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString EMail; // 0x90(0x10)
	int32_t Balance; // 0xa0(0x04)
	char CharacterSlotCount; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FWTLDateTime PremiumEndTime; // 0xa8(0x08)
};

// ScriptStruct WTL.WTLStatisticsCharacterParameterList
// Size: 0x38 (Inherited: 0x28)
struct FWTLStatisticsCharacterParameterList : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLStatisticsCharacterParameter
// Size: 0x40 (Inherited: 0x28)
struct FWTLStatisticsCharacterParameter : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLCharacterMainParameters
// Size: 0x30 (Inherited: 0x28)
struct FWTLCharacterMainParameters : FWTLPacket {
	int8_t Strength; // 0x28(0x01)
	int8_t Dexterity; // 0x29(0x01)
	int8_t Stamina; // 0x2a(0x01)
	int8_t Accuracy; // 0x2b(0x01)
	int8_t Intelligence; // 0x2c(0x01)
	int8_t Fortune; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct WTL.WTLDoorLockInfo
// Size: 0x50 (Inherited: 0x28)
struct FWTLDoorLockInfo : FWTLPacket {
	int64_t BuildingID; // 0x28(0x08)
	int64_t BuildingDoorID; // 0x30(0x08)
	enum class EWTLBuildingDoorLockType Type; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString KeyCode; // 0x40(0x10)
};

// ScriptStruct WTL.WTLDoorLockOperationInfo
// Size: 0x50 (Inherited: 0x28)
struct FWTLDoorLockOperationInfo : FWTLPacket {
	char pad_28[0x28]; // 0x28(0x28)
};

// ScriptStruct WTL.WTLExperienceDelta
// Size: 0x38 (Inherited: 0x28)
struct FWTLExperienceDelta : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLSkill
// Size: 0x88 (Inherited: 0x28)
struct FWTLSkill : FWTLPacket {
	char pad_28[0x60]; // 0x28(0x60)
};

// ScriptStruct WTL.WTLSkillEffect
// Size: 0x30 (Inherited: 0x28)
struct FWTLSkillEffect : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLUpdateCommissionItemInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLUpdateCommissionItemInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLReturnItemFromCommissionInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLReturnItemFromCommissionInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLPutItemOnCommissionInfo
// Size: 0x48 (Inherited: 0x28)
struct FWTLPutItemOnCommissionInfo : FWTLPacket {
	char pad_28[0x20]; // 0x28(0x20)
};

// ScriptStruct WTL.WTLBalanceDelta
// Size: 0x40 (Inherited: 0x28)
struct FWTLBalanceDelta : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLShopCommissionItems
// Size: 0xa0 (Inherited: 0x28)
struct FWTLShopCommissionItems : FWTLPacket {
	int32_t ShopID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FWTLCommissionWeaponItem> WeaponItems; // 0x30(0x10)
	struct TArray<struct FWTLCommissionAmmoItem> AmmoItems; // 0x40(0x10)
	struct TArray<struct FWTLCommissionMedicineItem> MedicineItems; // 0x50(0x10)
	struct TArray<struct FWTLCommissionStuffItem> StuffItems; // 0x60(0x10)
	struct TArray<struct FWTLCommissionClothesItem> ClothesItems; // 0x70(0x10)
	struct TArray<struct FWTLCommissionResourceItem> ResourceItems; // 0x80(0x10)
	struct TArray<struct FWTLCommissionArtefactItem> ArtefactItems; // 0x90(0x10)
};

// ScriptStruct WTL.WTLCommissionArtefactItem
// Size: 0xd0 (Inherited: 0xa0)
struct FWTLCommissionArtefactItem : FWTLArtefactItem {
	int64_t CommissionCharacterID; // 0xa0(0x08)
	struct FString CommissionCharacterName; // 0xa8(0x10)
	struct FWTLDateTime CommissionDate; // 0xb8(0x08)
	struct FWTLDateTime CommissionExpireDate; // 0xc0(0x08)
	float CommissionPrice; // 0xc8(0x04)
	int32_t CommissionMinBuyCount; // 0xcc(0x04)
};

// ScriptStruct WTL.WTLCommissionResourceItem
// Size: 0xa0 (Inherited: 0x70)
struct FWTLCommissionResourceItem : FWTLResourceItem {
	int64_t CommissionCharacterID; // 0x70(0x08)
	struct FString CommissionCharacterName; // 0x78(0x10)
	struct FWTLDateTime CommissionDate; // 0x88(0x08)
	struct FWTLDateTime CommissionExpireDate; // 0x90(0x08)
	float CommissionPrice; // 0x98(0x04)
	int32_t CommissionMinBuyCount; // 0x9c(0x04)
};

// ScriptStruct WTL.WTLCommissionClothesItem
// Size: 0xe0 (Inherited: 0xb0)
struct FWTLCommissionClothesItem : FWTLClothesItem {
	int64_t CommissionCharacterID; // 0xb0(0x08)
	struct FString CommissionCharacterName; // 0xb8(0x10)
	struct FWTLDateTime CommissionDate; // 0xc8(0x08)
	struct FWTLDateTime CommissionExpireDate; // 0xd0(0x08)
	float CommissionPrice; // 0xd8(0x04)
	int32_t CommissionMinBuyCount; // 0xdc(0x04)
};

// ScriptStruct WTL.WTLCommissionStuffItem
// Size: 0xc8 (Inherited: 0x98)
struct FWTLCommissionStuffItem : FWTLStuffItem {
	int64_t CommissionCharacterID; // 0x98(0x08)
	struct FString CommissionCharacterName; // 0xa0(0x10)
	struct FWTLDateTime CommissionDate; // 0xb0(0x08)
	struct FWTLDateTime CommissionExpireDate; // 0xb8(0x08)
	float CommissionPrice; // 0xc0(0x04)
	int32_t CommissionMinBuyCount; // 0xc4(0x04)
};

// ScriptStruct WTL.WTLCommissionMedicineItem
// Size: 0xd8 (Inherited: 0xa8)
struct FWTLCommissionMedicineItem : FWTLMedicineItem {
	int64_t CommissionCharacterID; // 0xa8(0x08)
	struct FString CommissionCharacterName; // 0xb0(0x10)
	struct FWTLDateTime CommissionDate; // 0xc0(0x08)
	struct FWTLDateTime CommissionExpireDate; // 0xc8(0x08)
	float CommissionPrice; // 0xd0(0x04)
	int32_t CommissionMinBuyCount; // 0xd4(0x04)
};

// ScriptStruct WTL.WTLCommissionAmmoItem
// Size: 0xd0 (Inherited: 0x98)
struct FWTLCommissionAmmoItem : FWTLAmmoItem {
	int64_t CommissionCharacterID; // 0x98(0x08)
	struct FString CommissionCharacterName; // 0xa0(0x10)
	struct FWTLDateTime CommissionDate; // 0xb0(0x08)
	float CommissionPrice; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FWTLDateTime CommissionExpireDate; // 0xc0(0x08)
	int32_t CommissionMinBuyCount; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct WTL.WTLCommissionWeaponItem
// Size: 0x108 (Inherited: 0xd8)
struct FWTLCommissionWeaponItem : FWTLWeaponItem {
	int64_t CommissionCharacterID; // 0xd8(0x08)
	struct FString CommissionCharacterName; // 0xe0(0x10)
	struct FWTLDateTime CommissionDate; // 0xf0(0x08)
	struct FWTLDateTime CommissionExpireDate; // 0xf8(0x08)
	float CommissionPrice; // 0x100(0x04)
	int32_t CommissionMinBuyCount; // 0x104(0x04)
};

// ScriptStruct WTL.WTLDedicatedServerAuthorization
// Size: 0x60 (Inherited: 0x28)
struct FWTLDedicatedServerAuthorization : FWTLPacket {
	struct FWTLShortVersionInfo ProtocolVersion; // 0x28(0x02)
	struct FWTLVersionInfo Version; // 0x2a(0x08)
	char Type; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	int32_t LocationID; // 0x34(0x04)
	int32_t Port; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Hash; // 0x40(0x10)
	uint32_t MinPlayersCount; // 0x50(0x04)
	uint32_t MaxPlayersCount; // 0x54(0x04)
	uint32_t MaxMatchTime; // 0x58(0x04)
	uint32_t ScoresToWin; // 0x5c(0x04)
};

// ScriptStruct WTL.WTLShortVersionInfo
// Size: 0x02 (Inherited: 0x00)
struct FWTLShortVersionInfo {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct WTL.WTLBuyItemFromShopInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLBuyItemFromShopInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLSellItemToShopInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLSellItemToShopInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLShopBuyItem
// Size: 0x40 (Inherited: 0x28)
struct FWTLShopBuyItem : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int32_t ShopID; // 0x30(0x04)
	enum class EWTLItemType ItemType; // 0x34(0x01)
	char pad_35[0x1]; // 0x35(0x01)
	int16_t ItemTypeID; // 0x36(0x02)
	float Price; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct WTL.WTLShop
// Size: 0x88 (Inherited: 0x28)
struct FWTLShop : FWTLPacket {
	int32_t ID; // 0x28(0x04)
	int32_t LocationID; // 0x2c(0x04)
	enum class EWTLShopType Type; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector Position; // 0x34(0x0c)
	struct FVector Rotation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString Name; // 0x50(0x10)
	int32_t Balance; // 0x60(0x04)
	char CommissionPercent; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t CommissionWeaponItemsCount; // 0x68(0x04)
	int32_t CommissionAmmoItemsCount; // 0x6c(0x04)
	int32_t CommissionMedicineItemsCount; // 0x70(0x04)
	int32_t CommissionStuffItemsCount; // 0x74(0x04)
	int32_t CommissionClothesItemsCount; // 0x78(0x04)
	int32_t CommissionResourceItemsCount; // 0x7c(0x04)
	int32_t CommissionArtefactItemsCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct WTL.WTLMiningPointStateChange
// Size: 0x30 (Inherited: 0x28)
struct FWTLMiningPointStateChange : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLWorldInfo
// Size: 0xa8 (Inherited: 0x28)
struct FWTLWorldInfo : FWTLPacket {
	float CurrentTime; // 0x28(0x04)
	uint16_t TimeScale; // 0x2c(0x02)
	uint16_t CreditsToMoneyRate; // 0x2e(0x02)
	struct FWTLWorldConfig Config; // 0x30(0x58)
	struct TArray<struct FWTLGroup> Groups; // 0x88(0x10)
	struct TArray<struct FWTLCharacterMuteState> CharactersMuteState; // 0x98(0x10)
};

// ScriptStruct WTL.WTLCharacterMuteState
// Size: 0x50 (Inherited: 0x28)
struct FWTLCharacterMuteState : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	bool ChatMuteState; // 0x30(0x01)
	bool VoiceMuteState; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FWTLDateTime MuteEnds; // 0x38(0x08)
	struct FString Description; // 0x40(0x10)
};

// ScriptStruct WTL.WTLGroup
// Size: 0x50 (Inherited: 0x28)
struct FWTLGroup : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	struct FString Name; // 0x30(0x10)
	struct TArray<struct FWTLGroupMember> Members; // 0x40(0x10)
};

// ScriptStruct WTL.WTLGroupMember
// Size: 0x48 (Inherited: 0x28)
struct FWTLGroupMember : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	struct FString CharacterName; // 0x30(0x10)
	bool Leader; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct WTL.WTLWorldConfig
// Size: 0x58 (Inherited: 0x28)
struct FWTLWorldConfig : FWTLPacket {
	float ExperienceMultiplier; // 0x28(0x04)
	float CharacterKillExperienceMultiplier; // 0x2c(0x04)
	float MonsterKillExperienceMultiplier; // 0x30(0x04)
	float NPCKillExperienceMultiplier; // 0x34(0x04)
	float QuestExperienceMultiplier; // 0x38(0x04)
	float ItemTypeExperienceMultiplier; // 0x3c(0x04)
	float CharacterDropChanceMultiplier; // 0x40(0x04)
	float CharacterDropCountMultiplier; // 0x44(0x04)
	float MonsterDropChanceMultiplier; // 0x48(0x04)
	float MonsterDropCountMultiplier; // 0x4c(0x04)
	float NPCDropChanceMultiplier; // 0x50(0x04)
	float NPCDropCountMultiplier; // 0x54(0x04)
};

// ScriptStruct WTL.WTLWorldTime
// Size: 0x30 (Inherited: 0x28)
struct FWTLWorldTime : FWTLPacket {
	float CurrentTime; // 0x28(0x04)
	int16_t TimeScale; // 0x2c(0x02)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct WTL.WTLGroupInvite
// Size: 0x78 (Inherited: 0x28)
struct FWTLGroupInvite : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	uint64_t GroupId; // 0x30(0x08)
	uint64_t CharacterID; // 0x38(0x08)
	uint64_t InviteInstigatorID; // 0x40(0x08)
	struct FString InviteInstigatorName; // 0x48(0x10)
	struct FString GroupName; // 0x58(0x10)
	bool Expired; // 0x68(0x01)
	char MembersCount; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FWTLDateTime InviteTime; // 0x70(0x08)
};

// ScriptStruct WTL.WTLLocationInfo
// Size: 0xd0 (Inherited: 0x28)
struct FWTLLocationInfo : FWTLPacket {
	int32_t ID; // 0x28(0x04)
	enum class EWTLLocationType Type; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FString Name; // 0x30(0x10)
	struct FWTLWeatherInfo WeatherInfo; // 0x40(0x40)
	struct TArray<struct FWTLShortCharacterInfo> Characters; // 0x80(0x10)
	struct TArray<struct FWTLLocationStorage> Storages; // 0x90(0x10)
	struct TArray<struct FWTLCamp> Camps; // 0xa0(0x10)
	struct TArray<struct FWTLBuilding> Buildings; // 0xb0(0x10)
	struct TArray<struct FWTLMiningPoint> MiningPoints; // 0xc0(0x10)
};

// ScriptStruct WTL.WTLMiningPoint
// Size: 0x60 (Inherited: 0x28)
struct FWTLMiningPoint : FWTLPacket {
	int32_t ID; // 0x28(0x04)
	int32_t LocationID; // 0x2c(0x04)
	enum class EWTLMiningPointType Type; // 0x30(0x01)
	char SubType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector Position; // 0x34(0x0c)
	struct FVector Rotation; // 0x40(0x0c)
	char ResourcePercent; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct FWTLMiningPointResource> Resources; // 0x50(0x10)
};

// ScriptStruct WTL.WTLMiningPointResource
// Size: 0x40 (Inherited: 0x28)
struct FWTLMiningPointResource : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int32_t LocationMiningPointID; // 0x30(0x04)
	int16_t ResourceID; // 0x34(0x02)
	int16_t Value; // 0x36(0x02)
	int16_t MaxValue; // 0x38(0x02)
	int16_t ValueIncrement; // 0x3a(0x02)
	int16_t ValueDecrement; // 0x3c(0x02)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct WTL.WTLBuilding
// Size: 0xa8 (Inherited: 0x28)
struct FWTLBuilding : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int32_t LocationID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t CharacterID; // 0x38(0x08)
	enum class EWTLBuildingType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector Position; // 0x44(0x0c)
	struct FVector Rotation; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FWTLDateTime CreationDate; // 0x60(0x08)
	struct FString Name; // 0x68(0x10)
	struct TArray<struct FWTLBuildingBlock> Blocks; // 0x78(0x10)
	struct TArray<struct FWTLBuildingDoor> Doors; // 0x88(0x10)
	struct TArray<struct FWTLBuildingWorkbench> Workbenches; // 0x98(0x10)
};

// ScriptStruct WTL.WTLBuildingWorkbench
// Size: 0x60 (Inherited: 0x28)
struct FWTLBuildingWorkbench : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int64_t LocationBuildingID; // 0x30(0x08)
	int64_t BuildingBlockID; // 0x38(0x08)
	int64_t LocationStorageID; // 0x40(0x08)
	char Level; // 0x48(0x01)
	char pad_49[0x17]; // 0x49(0x17)
};

// ScriptStruct WTL.WTLBuildingDoor
// Size: 0x68 (Inherited: 0x28)
struct FWTLBuildingDoor : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int64_t LocationBuildingID; // 0x30(0x08)
	int64_t BuildingBlockID; // 0x38(0x08)
	bool Closed; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	int64_t LockID; // 0x48(0x08)
	enum class EWTLBuildingDoorLockType LockType; // 0x50(0x01)
	bool Locked; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString KeyCode; // 0x58(0x10)
};

// ScriptStruct WTL.WTLBuildingBlock
// Size: 0x78 (Inherited: 0x28)
struct FWTLBuildingBlock : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int64_t LocationBuildingID; // 0x30(0x08)
	int64_t CharacterID; // 0x38(0x08)
	int32_t BlockTypeID; // 0x40(0x04)
	enum class EWTLBlockType Type; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FVector Position; // 0x48(0x0c)
	struct FVector Rotation; // 0x54(0x0c)
	enum class EWTLBuildingBlockState State; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t Condition; // 0x64(0x04)
	struct FWTLDateTime CreationDate; // 0x68(0x08)
	int64_t InteractiveObjectID; // 0x70(0x08)
};

// ScriptStruct WTL.WTLCamp
// Size: 0x68 (Inherited: 0x28)
struct FWTLCamp : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int32_t LocationID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t CharacterID; // 0x38(0x08)
	struct FVector Position; // 0x40(0x0c)
	struct FVector Rotation; // 0x4c(0x0c)
	struct FString Name; // 0x58(0x10)
};

// ScriptStruct WTL.WTLLocationStorage
// Size: 0x78 (Inherited: 0x28)
struct FWTLLocationStorage : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	int32_t LocationID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t LocationBuildingID; // 0x38(0x08)
	int64_t BuildingBlockID; // 0x40(0x08)
	enum class EWTLLocationStorageType Type; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector Position; // 0x4c(0x0c)
	struct FVector Rotation; // 0x58(0x0c)
	bool AutoDestroy; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FWTLDateTime AutoDestroyTime; // 0x68(0x08)
	char SlotCount; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct WTL.WTLShortCharacterInfo
// Size: 0x238 (Inherited: 0x28)
struct FWTLShortCharacterInfo : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	struct FString Name; // 0x30(0x10)
	enum class EWTLSex Sex; // 0x40(0x01)
	char Level; // 0x41(0x01)
	enum class EWTLCharacterClass Class; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	float Health; // 0x44(0x04)
	bool ReadyToGame; // 0x48(0x01)
	char Strength; // 0x49(0x01)
	char Dexterity; // 0x4a(0x01)
	char Stamina; // 0x4b(0x01)
	char Accuracy; // 0x4c(0x01)
	char Intelligence; // 0x4d(0x01)
	char Fortune; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct FWTLCharacterSlotItemInfo HeadItem; // 0x50(0x30)
	struct FWTLCharacterSlotItemInfo TorsoItem; // 0x80(0x30)
	struct FWTLCharacterSlotItemInfo LegsItem; // 0xb0(0x30)
	struct FWTLCharacterSlotItemInfo FeetItem; // 0xe0(0x30)
	struct FWTLCharacterSlotItemInfo ArmsItem; // 0x110(0x30)
	struct TArray<struct FWTLFastAccessSlotItemInfo> FastAccessSlots; // 0x140(0x10)
	enum class EWTLFaction Faction; // 0x150(0x01)
	char Reputation; // 0x151(0x01)
	char Rank; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	uint16_t ClanID; // 0x154(0x02)
	enum class EWTLClanMemberType ClanMemberType; // 0x156(0x01)
	enum class EWTLPlayerType PlayerType; // 0x157(0x01)
	char BodyType; // 0x158(0x01)
	bool PVPEnabled; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct TArray<struct FWTLCharacterCustomizationRecord> CustomizationInfo; // 0x160(0x10)
	struct FWTLCharacterEquipmentItemInfo EquipmentSlot1; // 0x170(0x30)
	struct FWTLCharacterEquipmentItemInfo EquipmentSlot2; // 0x1a0(0x30)
	struct FWTLCharacterEquipmentItemInfo EquipmentSlot3; // 0x1d0(0x30)
	struct FWTLCharacterEquipmentItemInfo EquipmentSlot4; // 0x200(0x30)
	char EquipmentSlotStates; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// ScriptStruct WTL.WTLCharacterEquipmentItemInfo
// Size: 0x30 (Inherited: 0x28)
struct FWTLCharacterEquipmentItemInfo : FWTLPacket {
	enum class EWTLItemType ItemType; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t ItemTypeID; // 0x2a(0x02)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLFastAccessSlotItemInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLFastAccessSlotItemInfo : FWTLPacket {
	enum class EWTLItemType ItemType; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t ItemTypeID; // 0x2a(0x02)
	uint16_t ScopeAttachmentTypeID; // 0x2c(0x02)
	uint16_t FlashlightAttachmentTypeID; // 0x2e(0x02)
	uint16_t MuzzleAttachmentTypeID; // 0x30(0x02)
	char CustomizationScalar; // 0x32(0x01)
	char CustomizationColor; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct WTL.WTLCharacterSlotItemInfo
// Size: 0x30 (Inherited: 0x28)
struct FWTLCharacterSlotItemInfo : FWTLPacket {
	enum class EWTLItemType ItemType; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t ItemTypeID; // 0x2a(0x02)
	char CustomizationScalar; // 0x2c(0x01)
	char CustomizationColor; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct WTL.WTLWeatherInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLWeatherInfo : FWTLPacket {
	enum class EWTLWeatherType WeatherType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float WindStrength; // 0x2c(0x04)
	float WindSpeed; // 0x30(0x04)
	float WindMinGustAmount; // 0x34(0x04)
	float WindMaxGustAmount; // 0x38(0x04)
	float WindAngle; // 0x3c(0x04)
};

// ScriptStruct WTL.WTLInventoryItemDelta
// Size: 0x40 (Inherited: 0x28)
struct FWTLInventoryItemDelta : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLCraftItem
// Size: 0x50 (Inherited: 0x28)
struct FWTLCraftItem : FWTLPacket {
	int32_t ID; // 0x28(0x04)
	enum class EWTLItemType ItemType; // 0x2c(0x01)
	char pad_2D[0x1]; // 0x2d(0x01)
	int16_t ItemTypeID; // 0x2e(0x02)
	int32_t ItemCount; // 0x30(0x04)
	enum class EWTLCraftType CraftType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t MinCraftExperience; // 0x38(0x04)
	int32_t CraftTime; // 0x3c(0x04)
	struct TArray<struct FWTLCraftItemPart> Parts; // 0x40(0x10)
};

// ScriptStruct WTL.WTLCraftItemPart
// Size: 0x40 (Inherited: 0x28)
struct FWTLCraftItemPart : FWTLPacket {
	int64_t ID; // 0x28(0x08)
	uint32_t CraftItemID; // 0x30(0x04)
	enum class EWTLItemType ItemType; // 0x34(0x01)
	char pad_35[0x1]; // 0x35(0x01)
	int16_t ItemTypeID; // 0x36(0x02)
	int32_t Count; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct WTL.WTLCraftRequest
// Size: 0x60 (Inherited: 0x28)
struct FWTLCraftRequest : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	int64_t CharacterID; // 0x30(0x08)
	struct FString CharacterName; // 0x38(0x10)
	uint64_t CraftItemID; // 0x48(0x08)
	struct FWTLDateTime StartTime; // 0x50(0x08)
	struct FWTLDateTime EndTime; // 0x58(0x08)
};

// ScriptStruct WTL.WTLBuildingBlockTypeList
// Size: 0x38 (Inherited: 0x28)
struct FWTLBuildingBlockTypeList : FWTLPacket {
	struct TArray<struct FWTLBuildingBlockType> Data; // 0x28(0x10)
};

// ScriptStruct WTL.WTLBuildingBlockType
// Size: 0x70 (Inherited: 0x28)
struct FWTLBuildingBlockType : FWTLPacket {
	int32_t ID; // 0x28(0x04)
	enum class EWTLBlockType Type; // 0x2c(0x01)
	char Level; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FString Name; // 0x30(0x10)
	int32_t Durability; // 0x40(0x04)
	int32_t BuildDurabilityIncrement; // 0x44(0x04)
	int32_t RepairDurabilityIncrement; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString PrefabName; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct WTL.WTLBuildingBlockResourceCostItem
// Size: 0x48 (Inherited: 0x28)
struct FWTLBuildingBlockResourceCostItem : FWTLPacket {
	int16_t ResourceID; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString ResourceName; // 0x30(0x10)
	int32_t Count; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct WTL.WTLShortTextInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLShortTextInfo : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLTextInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLTextInfo : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLConsoleCommand
// Size: 0x48 (Inherited: 0x28)
struct FWTLConsoleCommand : FWTLPacket {
	char pad_28[0x20]; // 0x28(0x20)
};

// ScriptStruct WTL.WTLVoicePacket
// Size: 0x40 (Inherited: 0x28)
struct FWTLVoicePacket : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLVoiceWorldInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLVoiceWorldInfo : FWTLPacket {
	struct TArray<struct FWTLVoiceCharacterPosition> CharacterPositions; // 0x28(0x10)
};

// ScriptStruct WTL.WTLVoiceCharacterPosition
// Size: 0x40 (Inherited: 0x28)
struct FWTLVoiceCharacterPosition : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	struct FVector Position; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct WTL.WTLChatMessage
// Size: 0x58 (Inherited: 0x28)
struct FWTLChatMessage : FWTLPacket {
	int64_t CharacterID; // 0x28(0x08)
	struct FString CharacterName; // 0x30(0x10)
	enum class EWTLChatMessageType Type; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString Text; // 0x48(0x10)
};

// ScriptStruct WTL.WTLChatMessageRequest
// Size: 0x50 (Inherited: 0x28)
struct FWTLChatMessageRequest : FWTLPacket {
	char pad_28[0x28]; // 0x28(0x28)
};

// ScriptStruct WTL.WTLConnectionCloseInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLConnectionCloseInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLClientErrorInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLClientErrorInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLCharacterDeathInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLCharacterDeathInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLCharacterDamageInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLCharacterDamageInfo : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLMonsterHitCharacterInfo
// Size: 0x58 (Inherited: 0x28)
struct FWTLMonsterHitCharacterInfo : FWTLPacket {
	char pad_28[0x30]; // 0x28(0x30)
};

// ScriptStruct WTL.WTLCharacterHitMonsterInfo
// Size: 0x58 (Inherited: 0x28)
struct FWTLCharacterHitMonsterInfo : FWTLPacket {
	char pad_28[0x30]; // 0x28(0x30)
};

// ScriptStruct WTL.WTLCharacterHitCharacterInfo
// Size: 0x58 (Inherited: 0x28)
struct FWTLCharacterHitCharacterInfo : FWTLPacket {
	char pad_28[0x30]; // 0x28(0x30)
};

// ScriptStruct WTL.WTLCurrentStateChangeInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLCurrentStateChangeInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLBuildingSettings
// Size: 0x30 (Inherited: 0x28)
struct FWTLBuildingSettings : FWTLPacket {
	int16_t UpdateInterval; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct WTL.WTLLoadAmmoInWeaponInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLLoadAmmoInWeaponInfo : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLUniteAllItemsInfo
// Size: 0x30 (Inherited: 0x28)
struct FWTLUniteAllItemsInfo : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLUniteItemsInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLUniteItemsInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLSplitItemInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLSplitItemInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLMoveItemsInfo
// Size: 0x50 (Inherited: 0x28)
struct FWTLMoveItemsInfo : FWTLPacket {
	char pad_28[0x28]; // 0x28(0x28)
};

// ScriptStruct WTL.WTLServerShutdownInfo
// Size: 0x38 (Inherited: 0x28)
struct FWTLServerShutdownInfo : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLMonsterTransform
// Size: 0x50 (Inherited: 0x28)
struct FWTLMonsterTransform : FWTLPacket {
	int64_t MonsterID; // 0x28(0x08)
	uint64_t Timestamp; // 0x30(0x08)
	struct FVector Position; // 0x38(0x0c)
	struct FVector Velocity; // 0x44(0x0c)
};

// ScriptStruct WTL.WTLCharacterTransform
// Size: 0x60 (Inherited: 0x28)
struct FWTLCharacterTransform : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	uint64_t Timestamp; // 0x30(0x08)
	char PingCategory; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector Position; // 0x3c(0x0c)
	struct FVector Rotation; // 0x48(0x0c)
	struct FVector Velocity; // 0x54(0x0c)
};

// ScriptStruct WTL.WTLCharacterMapMarker
// Size: 0x68 (Inherited: 0x28)
struct FWTLCharacterMapMarker : FWTLPacket {
	uint32_t LocationID; // 0x28(0x04)
	char Type; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FString Color; // 0x30(0x10)
	struct FVector Position; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString Name; // 0x50(0x10)
	bool ShowOnMinimap; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct WTL.WTLCharacterCustomizationInfo
// Size: 0x48 (Inherited: 0x28)
struct FWTLCharacterCustomizationInfo : FWTLPacket {
	uint64_t CharacterID; // 0x28(0x08)
	enum class EWTLSex Sex; // 0x30(0x01)
	char BodyType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FWTLCharacterCustomizationRecord> Parts; // 0x38(0x10)
};

// ScriptStruct WTL.WTLStorageOrder
// Size: 0x48 (Inherited: 0x28)
struct FWTLStorageOrder : FWTLPacket {
	enum class EWTLStorageType StorageType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t StorageID; // 0x30(0x08)
	struct TArray<struct FWTLStorageSlot> Slots; // 0x38(0x10)
};

// ScriptStruct WTL.WTLStorageSlot
// Size: 0x38 (Inherited: 0x28)
struct FWTLStorageSlot : FWTLPacket {
	char SlotNumber; // 0x28(0x01)
	enum class EWTLItemType ItemType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	uint64_t ItemId; // 0x30(0x08)
};

// ScriptStruct WTL.WTLBodyPartSlot
// Size: 0x38 (Inherited: 0x28)
struct FWTLBodyPartSlot : FWTLPacket {
	enum class EWTLBodyPart BodyPart; // 0x28(0x01)
	enum class EWTLItemType ItemType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	uint64_t ItemId; // 0x30(0x08)
};

// ScriptStruct WTL.WTLIdentityStorage
// Size: 0x38 (Inherited: 0x28)
struct FWTLIdentityStorage : FWTLPacket {
	enum class EWTLStorageType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t ID; // 0x30(0x08)
};

// ScriptStruct WTL.WTLIdentityCommissionItem
// Size: 0x38 (Inherited: 0x28)
struct FWTLIdentityCommissionItem : FWTLPacket {
	uint32_t ShopID; // 0x28(0x04)
	enum class EWTLItemType Type; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	uint64_t CommissionID; // 0x30(0x08)
};

// ScriptStruct WTL.WTLKeyValueThreeInt64Int64String
// Size: 0x48 (Inherited: 0x28)
struct FWTLKeyValueThreeInt64Int64String : FWTLPacket {
	uint64_t Key; // 0x28(0x08)
	uint64_t Value1; // 0x30(0x08)
	struct FString Value2; // 0x38(0x10)
};

// ScriptStruct WTL.WTLKeyValuePairInt64String
// Size: 0x40 (Inherited: 0x28)
struct FWTLKeyValuePairInt64String : FWTLPacket {
	uint64_t Key; // 0x28(0x08)
	struct FString Value; // 0x30(0x10)
};

// ScriptStruct WTL.WTLKeyValuePairInt16String
// Size: 0x40 (Inherited: 0x28)
struct FWTLKeyValuePairInt16String : FWTLPacket {
	uint16_t Key; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString Value; // 0x30(0x10)
};

// ScriptStruct WTL.WTLIdentityItem
// Size: 0x38 (Inherited: 0x28)
struct FWTLIdentityItem : FWTLPacket {
	enum class EWTLItemType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t ID; // 0x30(0x08)
};

// ScriptStruct WTL.WTLIdentityPair8
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentityPair8 : FWTLPacket {
	char Value1; // 0x28(0x01)
	char Value2; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct WTL.WTLIdentity8
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentity8 : FWTLPacket {
	char Value; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct WTL.WTLIdentityPair16
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentityPair16 : FWTLPacket {
	uint16_t Value1; // 0x28(0x02)
	uint16_t Value2; // 0x2a(0x02)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLIdentityPair32
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentityPair32 : FWTLPacket {
	uint32_t Value1; // 0x28(0x04)
	uint32_t Value2; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLIdentityFour64
// Size: 0x48 (Inherited: 0x28)
struct FWTLIdentityFour64 : FWTLPacket {
	uint64_t Value1; // 0x28(0x08)
	uint64_t Value2; // 0x30(0x08)
	uint64_t Value3; // 0x38(0x08)
	uint64_t Value4; // 0x40(0x08)
};

// ScriptStruct WTL.WTLIdentityThree64
// Size: 0x40 (Inherited: 0x28)
struct FWTLIdentityThree64 : FWTLPacket {
	uint64_t Value1; // 0x28(0x08)
	uint64_t Value2; // 0x30(0x08)
	uint64_t Value3; // 0x38(0x08)
};

// ScriptStruct WTL.WTLIdentityPair64
// Size: 0x38 (Inherited: 0x28)
struct FWTLIdentityPair64 : FWTLPacket {
	uint64_t Value1; // 0x28(0x08)
	uint64_t Value2; // 0x30(0x08)
};

// ScriptStruct WTL.WTLIdentity64
// Size: 0x30 (Inherited: 0x28)
struct FWTLIdentity64 : FWTLPacket {
	uint64_t Value; // 0x28(0x08)
};

// ScriptStruct WTL.WTLServerInfo
// Size: 0x58 (Inherited: 0x28)
struct FWTLServerInfo : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	struct FWTLVersionInfo Version; // 0x30(0x08)
	struct FWTLShortVersionInfo ProtocolVersion; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FWTLDateTime StartTime; // 0x40(0x08)
	int64_t UpTime; // 0x48(0x08)
	float WorldTime; // 0x50(0x04)
	int16_t TimeScale; // 0x54(0x02)
	char pad_56[0x2]; // 0x56(0x02)
};

// ScriptStruct WTL.WTLErrorInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLErrorInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLActivateTicketInfo
// Size: 0x48 (Inherited: 0x28)
struct FWTLActivateTicketInfo : FWTLPacket {
	char pad_28[0x20]; // 0x28(0x20)
};

// ScriptStruct WTL.WTLGameServerShutdownInfo
// Size: 0x40 (Inherited: 0x28)
struct FWTLGameServerShutdownInfo : FWTLPacket {
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct WTL.WTLGameServerShortInfo
// Size: 0x78 (Inherited: 0x28)
struct FWTLGameServerShortInfo : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	enum class EWTLGameServerType Type; // 0x30(0x01)
	struct FWTLShortVersionInfo ProtocolVersion; // 0x31(0x02)
	char pad_33[0x1]; // 0x33(0x01)
	struct FWTLVersionInfo Version; // 0x34(0x08)
	struct FWTLVersionInfo MinClientVersion; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString IPAddress; // 0x48(0x10)
	int16_t MainPort; // 0x58(0x02)
	int16_t PingPort; // 0x5a(0x02)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Name; // 0x60(0x10)
	int32_t MaxPlayers; // 0x70(0x04)
	int32_t PlayersCount; // 0x74(0x04)
};

// ScriptStruct WTL.WTLGameServerInfo
// Size: 0xc8 (Inherited: 0x28)
struct FWTLGameServerInfo : FWTLPacket {
	uint64_t ID; // 0x28(0x08)
	enum class EWTLGameServerType Type; // 0x30(0x01)
	struct FWTLShortVersionInfo ProtocolVersion; // 0x31(0x02)
	char pad_33[0x1]; // 0x33(0x01)
	struct FWTLVersionInfo Version; // 0x34(0x08)
	struct FWTLVersionInfo MinClientVersion; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString IPAddress; // 0x48(0x10)
	int16_t MainPort; // 0x58(0x02)
	int16_t PingPort; // 0x5a(0x02)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Name; // 0x60(0x10)
	struct FString Description; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)
	int32_t MaxPlayers; // 0xb0(0x04)
	int32_t PlayersCount; // 0xb4(0x04)
	struct FString Hash; // 0xb8(0x10)
};

// ScriptStruct WTL.WTLGameClientInfo
// Size: 0x50 (Inherited: 0x28)
struct FWTLGameClientInfo : FWTLPacket {
	struct FWTLShortVersionInfo ProtocolVersion; // 0x28(0x02)
	struct FWTLVersionInfo Version; // 0x2a(0x08)
	char pad_32[0x6]; // 0x32(0x06)
	uint64_t accountid; // 0x38(0x08)
	struct FString TicketUID; // 0x40(0x10)
};

// ScriptStruct WTL.WTLClientAuthorizationInfo
// Size: 0x58 (Inherited: 0x28)
struct FWTLClientAuthorizationInfo : FWTLPacket {
	struct FWTLShortVersionInfo ProtocolVersion; // 0x28(0x02)
	struct FWTLVersionInfo Version; // 0x2a(0x08)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString Login; // 0x38(0x10)
	struct FString Password; // 0x48(0x10)
};

// ScriptStruct WTL.WTLConnectionTest
// Size: 0x38 (Inherited: 0x28)
struct FWTLConnectionTest : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLPing
// Size: 0x30 (Inherited: 0x28)
struct FWTLPing : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLEvent
// Size: 0x38 (Inherited: 0x28)
struct FWTLEvent : FWTLPacket {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct WTL.WTLEventHeader
// Size: 0x30 (Inherited: 0x28)
struct FWTLEventHeader : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLResponse
// Size: 0x58 (Inherited: 0x28)
struct FWTLResponse : FWTLPacket {
	char pad_28[0x30]; // 0x28(0x30)
};

// ScriptStruct WTL.WTLRequest
// Size: 0x30 (Inherited: 0x28)
struct FWTLRequest : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLServerMessageHeader
// Size: 0x30 (Inherited: 0x28)
struct FWTLServerMessageHeader : FWTLPacket {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct WTL.WTLQuestAchievements
// Size: 0x18 (Inherited: 0x00)
struct FWTLQuestAchievements {
	int32_t QuestID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWTLQuestAchievementStaticMesh> Meshes; // 0x08(0x10)
};

// ScriptStruct WTL.WTLQuestAchievementStaticMesh
// Size: 0x10 (Inherited: 0x00)
struct FWTLQuestAchievementStaticMesh {
	struct AStaticMeshActor* StaticMesh; // 0x00(0x08)
	int32_t QuestStatesForShowMesh; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLQuestState
// Size: 0x18 (Inherited: 0x00)
struct FWTLQuestState {
	int32_t QuestID; // 0x00(0x04)
	enum class EWTLQuestState State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FWTLDateTime LastChangeDate; // 0x08(0x08)
	bool Active; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct WTL.WTLRandomMiningPoint
// Size: 0x14 (Inherited: 0x00)
struct FWTLRandomMiningPoint {
	struct FVector Position; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float Capacity; // 0x10(0x04)
};

// ScriptStruct WTL.WTLRangedWeaponFireAnimation
// Size: 0x18 (Inherited: 0x00)
struct FWTLRangedWeaponFireAnimation {
	float MaxTime; // 0x00(0x04)
	float ElapsedTime; // 0x04(0x04)
	struct FVector2D LastValue; // 0x08(0x08)
	float MultiplierX; // 0x10(0x04)
	float MultiplierY; // 0x14(0x04)
};

// ScriptStruct WTL.InlineTextImageStyleRow
// Size: 0xa0 (Inherited: 0x08)
struct FInlineTextImageStyleRow : FTableRowBase {
	struct FInlineTextImageStyle InlineTextImageStyle; // 0x08(0x98)
};

// ScriptStruct WTL.HyperlinkTextStyleRow
// Size: 0x508 (Inherited: 0x08)
struct FHyperlinkTextStyleRow : FTableRowBase {
	struct FHyperlinkStyle HyperlinkStyle; // 0x08(0x500)
};

// ScriptStruct WTL.WTLScriptedEventInfo
// Size: 0x04 (Inherited: 0x00)
struct FWTLScriptedEventInfo {
	enum class EWTLScriptedEventMethodType Method; // 0x00(0x04)
};

// ScriptStruct WTL.WTLAnnounceEventScriptedEventInfo
// Size: 0x20 (Inherited: 0x04)
struct FWTLAnnounceEventScriptedEventInfo : FWTLScriptedEventInfo {
	enum class EWTLServerEventType EventType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString EventDescription; // 0x08(0x10)
	float EventDuration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLSpawnEnemyScriptedEventInfo
// Size: 0x60 (Inherited: 0x04)
struct FWTLSpawnEnemyScriptedEventInfo : FWTLScriptedEventInfo {
	float LifeSpan; // 0x04(0x04)
	uint16_t EnemyId; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FString EnemyAssetClass; // 0x10(0x10)
	uint16_t Count; // 0x20(0x02)
	char MinLevel; // 0x22(0x01)
	char MaxLevel; // 0x23(0x01)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FVector> Locations; // 0x28(0x10)
	float SpawnRange; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FWTLItemDropInfo> AdditionalLoot; // 0x40(0x10)
	struct FString CustomTag; // 0x50(0x10)
};

// ScriptStruct WTL.WTLSpawnMonsterScriptedEventInfo
// Size: 0x48 (Inherited: 0x04)
struct FWTLSpawnMonsterScriptedEventInfo : FWTLScriptedEventInfo {
	float LifeSpan; // 0x04(0x04)
	uint16_t MonsterID; // 0x08(0x02)
	uint16_t Count; // 0x0a(0x02)
	char MinLevel; // 0x0c(0x01)
	char MaxLevel; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FVector> Locations; // 0x10(0x10)
	float SpawnRange; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FWTLItemDropInfo> AdditionalLoot; // 0x28(0x10)
	struct FString CustomTag; // 0x38(0x10)
};

// ScriptStruct WTL.WTLSpawnObjectScriptedEventInfo
// Size: 0x38 (Inherited: 0x04)
struct FWTLSpawnObjectScriptedEventInfo : FWTLScriptedEventInfo {
	float LifeSpan; // 0x04(0x04)
	struct FString AssetClass; // 0x08(0x10)
	struct TArray<struct FTransform> Transforms; // 0x18(0x10)
	struct FString CustomTag; // 0x28(0x10)
};

// ScriptStruct WTL.WTLAdditionalLoot
// Size: 0x28 (Inherited: 0x00)
struct FWTLAdditionalLoot {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	uint16_t MinCount; // 0x04(0x02)
	uint16_t MaxCount; // 0x06(0x02)
	uint32_t MinCondition; // 0x08(0x04)
	uint32_t MaxCondition; // 0x0c(0x04)
	float NormalChance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ModificationData; // 0x18(0x10)
};

// ScriptStruct WTL.WTLDriverInfo
// Size: 0x88 (Inherited: 0x00)
struct FWTLDriverInfo {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct WTL.WTLSettings
// Size: 0x420 (Inherited: 0x00)
struct FWTLSettings {
	struct FWTLConnectionSettings Connection; // 0x00(0x18)
	struct FWTLDedicatedServerSettings DedicatedServer; // 0x18(0x108)
	struct FWTLReputationSettings Reputation; // 0x120(0x10)
	struct FWTLArenaSettings Arena; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FWTLWorldConfig WorldConfig; // 0x138(0x58)
	struct FWTLGameSettings Game; // 0x190(0xd0)
	struct FWTLGraphicsSettings Graphics; // 0x260(0x78)
	struct FWTLAudioSettings Audio; // 0x2d8(0x24)
	struct FWTLControlsSettings Controls; // 0x2fc(0x18)
	char pad_314[0x4]; // 0x314(0x04)
	struct FWTLInterfaceSettings Interface; // 0x318(0x48)
	struct FWTLPostProcessSettings PostProcess; // 0x360(0x14)
	char pad_374[0x4]; // 0x374(0x04)
	struct FWTLLocalCharacterSettings LocalCharacter; // 0x378(0x10)
	struct FWTLSecuritySettings Security; // 0x388(0x20)
	struct FWTLIdentificationSettings Identification; // 0x3a8(0x14)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FWTLVOIPSettings VOIP; // 0x3c0(0x18)
	struct FWTLFortificationCaptureSettings FortificationCaptureSettings; // 0x3d8(0x34)
	struct FWTLGameplaySettings Gameplay; // 0x40c(0x08)
	struct FWTLGodConsoleSettings GodConsole; // 0x414(0x0b)
	bool IsLoadFromGameUserSettings; // 0x41f(0x01)
};

// ScriptStruct WTL.WTLGodConsoleSettings
// Size: 0x0b (Inherited: 0x00)
struct FWTLGodConsoleSettings {
	bool bIsShowFavouritesWeaponsList; // 0x00(0x01)
	bool bIsShowFavouritesAmmosList; // 0x01(0x01)
	bool bIsShowFavouritesMedicineList; // 0x02(0x01)
	bool bIsShowFavouritesStuffList; // 0x03(0x01)
	bool bIsShowFavouritesClothesList; // 0x04(0x01)
	bool bIsShowFavouritesResourcesList; // 0x05(0x01)
	bool bIsShowFavouritesArtefactsList; // 0x06(0x01)
	bool bIsShowFavouritesKitsList; // 0x07(0x01)
	bool bIsShowFavouritesMonstersList; // 0x08(0x01)
	bool bIsShowFavouritesLocationsList; // 0x09(0x01)
	bool bIsShowFavouritesQuestsList; // 0x0a(0x01)
};

// ScriptStruct WTL.WTLGameplaySettings
// Size: 0x08 (Inherited: 0x00)
struct FWTLGameplaySettings {
	int32_t PrimeTimeBeginHour; // 0x00(0x04)
	int32_t PrimeTimeEndHour; // 0x04(0x04)
};

// ScriptStruct WTL.WTLFortificationCaptureSettings
// Size: 0x34 (Inherited: 0x00)
struct FWTLFortificationCaptureSettings {
	int32_t ScoreForCharacterKill; // 0x00(0x04)
	int32_t ScoreForCharacterResurection; // 0x04(0x04)
	int32_t ScoreForCharacterDeath; // 0x08(0x04)
	int32_t ScoreForNPCKill; // 0x0c(0x04)
	int32_t ScoreForPointCapture; // 0x10(0x04)
	int32_t ScoreForPointReconfiguration; // 0x14(0x04)
	int32_t ScoreForPointRestored; // 0x18(0x04)
	int32_t ScoreForPointJamming; // 0x1c(0x04)
	float ScoreMultiplierForLoose; // 0x20(0x04)
	int32_t ScoreMultiplierForScanning; // 0x24(0x04)
	int32_t ScanningPerOneScore; // 0x28(0x04)
	int32_t JammersScoringIntervalSeconds; // 0x2c(0x04)
	int32_t ScoreLimitForCapture; // 0x30(0x04)
};

// ScriptStruct WTL.WTLVOIPSettings
// Size: 0x18 (Inherited: 0x00)
struct FWTLVOIPSettings {
	int32_t RecordDeviceID; // 0x00(0x04)
	bool bIsEnabled; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<uint64_t> CharacterBlackList; // 0x08(0x10)
};

// ScriptStruct WTL.WTLIdentificationSettings
// Size: 0x14 (Inherited: 0x00)
struct FWTLIdentificationSettings {
	bool bIsPlayersIdentificationEnabled; // 0x00(0x01)
	bool bIsMonstersIdentificationEnabled; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MonstersSimplifiedIdentificationEnableDistance; // 0x04(0x04)
	bool bIsNPCIdentificationEnabled; // 0x08(0x01)
	bool bAlwaysShowGroupAndClanMembers; // 0x09(0x01)
	bool bAlwaysShowFriendlyDevices; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	int32_t SimplifiedIdentificationEnableDistance; // 0x0c(0x04)
	float IdentificationTransparency; // 0x10(0x04)
};

// ScriptStruct WTL.WTLSecuritySettings
// Size: 0x20 (Inherited: 0x00)
struct FWTLSecuritySettings {
	float StandbyRxTriggerTime; // 0x00(0x04)
	int32_t StandbyRxAttempts; // 0x04(0x04)
	float StandbyTxTriggerTime; // 0x08(0x04)
	int32_t StandbyTxAttempts; // 0x0c(0x04)
	float BadPingTriggerTimeInterval; // 0x10(0x04)
	int32_t BadPingValue; // 0x14(0x04)
	float JoinTimeTreshold; // 0x18(0x04)
	int32_t TimeDiscrepancyDetectionAttemts; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLLocalCharacterSettings
// Size: 0x10 (Inherited: 0x00)
struct FWTLLocalCharacterSettings {
	struct FString Cache; // 0x00(0x10)
};

// ScriptStruct WTL.WTLPostProcessSettings
// Size: 0x14 (Inherited: 0x00)
struct FWTLPostProcessSettings {
	float GammaLevel; // 0x00(0x04)
	float Contrast; // 0x04(0x04)
	float RedBalance; // 0x08(0x04)
	float GreenBalance; // 0x0c(0x04)
	float BlueBalance; // 0x10(0x04)
};

// ScriptStruct WTL.WTLInterfaceSettings
// Size: 0x48 (Inherited: 0x00)
struct FWTLInterfaceSettings {
	struct FString PDAInterfaceColor; // 0x00(0x10)
	bool PDAFirstIndicatorOn; // 0x10(0x01)
	bool PDASecondIndicatorOn; // 0x11(0x01)
	bool PDAAchievementsSimplifiedView; // 0x12(0x01)
	bool CrosshairVisibility; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString CrosshairColor; // 0x18(0x10)
	bool PlayerStatusVisibility; // 0x28(0x01)
	bool WeaponInfoVisibility; // 0x29(0x01)
	bool FastAccessSlotsVisibility; // 0x2a(0x01)
	bool LevelBarVisibility; // 0x2b(0x01)
	bool MinimapVisibility; // 0x2c(0x01)
	bool MinimapTimeVisibility; // 0x2d(0x01)
	bool ShowMinimapLocalTime; // 0x2e(0x01)
	bool FPSCounterVisibility; // 0x2f(0x01)
	bool HighLightQuestItemsOnlyForActiveQuest; // 0x30(0x01)
	bool ShowActiveQuestInfoWhenPDAQuestLogShow; // 0x31(0x01)
	bool HideTextChatArea; // 0x32(0x01)
	bool CollapseChatAfterMessageSent; // 0x33(0x01)
	bool SelectCommonFilterAfterCollapseChat; // 0x34(0x01)
	bool FilterCensorshipInChat; // 0x35(0x01)
	bool UseStrongDumbCensorshipFilter; // 0x36(0x01)
	bool ShowDamageIdentification; // 0x37(0x01)
	bool ShowUnarmedCrosshair; // 0x38(0x01)
	bool ShowUseHint; // 0x39(0x01)
	bool ShowCharacterPreviewInInventory; // 0x3a(0x01)
	bool ShowDamagePointerWithHiddenHUD; // 0x3b(0x01)
	bool HideFastAccessSlotsAfterSomeTime; // 0x3c(0x01)
	bool ShowOptionalWarnings; // 0x3d(0x01)
	bool ShowNotEnoughStaminaToJumpWarning; // 0x3e(0x01)
	bool ShowNotEnoughStaminaToSprintWarning; // 0x3f(0x01)
	bool ShowCannotSprintInventoryOverloadWarning; // 0x40(0x01)
	bool ShowNoNutsInInventoryToThrowWarning; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct WTL.WTLControlsSettings
// Size: 0x18 (Inherited: 0x00)
struct FWTLControlsSettings {
	float MouseSensitivity; // 0x00(0x04)
	float MouseSensitivityInMiniGames; // 0x04(0x04)
	bool MouseInvert; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GamepadAimingSensitivity; // 0x0c(0x04)
	bool GamepadAimingInvert; // 0x10(0x01)
	bool ChangeSensitivityOnAim; // 0x11(0x01)
	bool AimToggle; // 0x12(0x01)
	bool AutomaticallyReloadWeapon; // 0x13(0x01)
	bool CrouchToggle; // 0x14(0x01)
	bool SprintToggle; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct WTL.WTLAudioSettings
// Size: 0x24 (Inherited: 0x00)
struct FWTLAudioSettings {
	int32_t AudioDriver; // 0x00(0x04)
	int32_t SpeakerMode; // 0x04(0x04)
	int32_t AudioQualityLevel; // 0x08(0x04)
	float MasterVolume; // 0x0c(0x04)
	float MusicVolume; // 0x10(0x04)
	float EffectsVolume; // 0x14(0x04)
	float CharacterVoiceVolume; // 0x18(0x04)
	float SpeechVolume; // 0x1c(0x04)
	float UIVolume; // 0x20(0x04)
};

// ScriptStruct WTL.WTLGraphicsSettings
// Size: 0x78 (Inherited: 0x00)
struct FWTLGraphicsSettings {
	struct FString Renderer; // 0x00(0x10)
	int32_t ScreenResolutionX; // 0x10(0x04)
	int32_t ScreenResolutionY; // 0x14(0x04)
	int32_t ResolutionScale; // 0x18(0x04)
	int32_t ScreenMode; // 0x1c(0x04)
	bool VSync; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t TextureStreaming; // 0x24(0x04)
	int32_t TextureStreamingPoolSize; // 0x28(0x04)
	int32_t FrameLimit; // 0x2c(0x04)
	bool FullDynamicLight; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t FSR2; // 0x34(0x04)
	float FSR2Sharpness; // 0x38(0x04)
	float MotionBlur; // 0x3c(0x04)
	bool UseContactShadows; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t MotionBlurQuality; // 0x44(0x04)
	bool TemporalAA; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t TemporalAAQuality; // 0x4c(0x04)
	float ImageSharpness; // 0x50(0x04)
	int32_t AntiAliasingQuality; // 0x54(0x04)
	int32_t ProcessingQuality; // 0x58(0x04)
	int32_t ShadowQuality; // 0x5c(0x04)
	int32_t TextureQuality; // 0x60(0x04)
	int32_t ViewDistanceQuality; // 0x64(0x04)
	int32_t AmbientOcclusionType; // 0x68(0x04)
	float FOV; // 0x6c(0x04)
	int32_t CloudsType; // 0x70(0x04)
	bool ShowEffectsAfterDeath; // 0x74(0x01)
	bool ShowWindEffects; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
};

// ScriptStruct WTL.WTLGameSettings
// Size: 0xd0 (Inherited: 0x00)
struct FWTLGameSettings {
	struct FString Language; // 0x00(0x10)
	struct FString LastLogin; // 0x10(0x10)
	bool IsSavePassword; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString LastPassword; // 0x28(0x10)
	struct FString LastPlayedServerName; // 0x38(0x10)
	struct FString LastEmail; // 0x48(0x10)
	bool EnableTutorial; // 0x58(0x01)
	bool TrackVehicleTurnWithCamera; // 0x59(0x01)
	bool RotateCameraInIdle; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	float CameraSpeedInIdle; // 0x5c(0x04)
	bool AutomaticallyAcceptMarkers; // 0x60(0x01)
	bool NVIDIAHighlightsEnabled; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<struct FString> CharactersTextChatMuteList; // 0x68(0x10)
	struct TArray<uint16_t> TutorialMessagesStoredData; // 0x78(0x10)
	struct TArray<struct FWTLTutorialWarningMessageStoredData> TutorialWarningMessagesStoredData; // 0x88(0x10)
	struct TArray<struct FWTLStoreItemInCart> StoreItemsInCart; // 0x98(0x10)
	struct TArray<struct FWTLMinimapScaleValue> MinimapScaleValues; // 0xa8(0x10)
	struct FWTLCustomizationItemsCount LastCustomizationItemsCountInStore; // 0xb8(0x10)
	bool CacheAssetsOnStartup; // 0xc8(0x01)
	bool IsShowCharacterPositionWhenOpenPDAMap; // 0xc9(0x01)
	bool IsHideActiveQuestInfo; // 0xca(0x01)
	bool IsHUDHideByUser; // 0xcb(0x01)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct WTL.WTLCustomizationItemsCount
// Size: 0x10 (Inherited: 0x00)
struct FWTLCustomizationItemsCount {
	struct TArray<struct FWTLCustomizationItemCount> Array; // 0x00(0x10)
};

// ScriptStruct WTL.WTLCustomizationItemCount
// Size: 0x04 (Inherited: 0x00)
struct FWTLCustomizationItemCount {
	enum class EWTLSex Sex; // 0x00(0x01)
	enum class EWTLCharacterClass ClassType; // 0x01(0x01)
	uint16_t Count; // 0x02(0x02)
};

// ScriptStruct WTL.WTLMinimapScaleValue
// Size: 0x08 (Inherited: 0x00)
struct FWTLMinimapScaleValue {
	int32_t LocationID; // 0x00(0x04)
	float ScaleValue; // 0x04(0x04)
};

// ScriptStruct WTL.WTLStoreItemInCart
// Size: 0x10 (Inherited: 0x00)
struct FWTLStoreItemInCart {
	uint64_t ID; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLTutorialWarningMessageStoredData
// Size: 0x18 (Inherited: 0x00)
struct FWTLTutorialWarningMessageStoredData {
	char pad_0[0x10]; // 0x00(0x10)
	uint16_t ID; // 0x10(0x02)
	bool IsDoNotShowAgain; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	int32_t ShowCount; // 0x14(0x04)
};

// ScriptStruct WTL.WTLArenaSettings
// Size: 0x04 (Inherited: 0x00)
struct FWTLArenaSettings {
	int32_t MinFactionPlayersToReward; // 0x00(0x04)
};

// ScriptStruct WTL.WTLReputationSettings
// Size: 0x10 (Inherited: 0x00)
struct FWTLReputationSettings {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float UpdatePeriod; // 0x04(0x04)
	int32_t MinUpdateValue; // 0x08(0x04)
	int32_t MaxUpdateValue; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLDedicatedServerSettings
// Size: 0x108 (Inherited: 0x00)
struct FWTLDedicatedServerSettings {
	struct FString Host; // 0x00(0x10)
	int32_t MainPort; // 0x10(0x04)
	int32_t MinPlayersCount; // 0x14(0x04)
	int32_t MaxPlayersCount; // 0x18(0x04)
	int32_t RoundTime; // 0x1c(0x04)
	int32_t ClientDefaultNetSpeed; // 0x20(0x04)
	float DefaultPlayerInvulnerableTime; // 0x24(0x04)
	int32_t StatisticsUpdateInterval; // 0x28(0x04)
	float CharacterDistance; // 0x2c(0x04)
	float MonsterDistance; // 0x30(0x04)
	float MonsterSleepDistance; // 0x34(0x04)
	int32_t DroppedItemTTL; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString DBServer; // 0x40(0x10)
	struct FString DBName; // 0x50(0x10)
	struct FString StatDBName; // 0x60(0x10)
	struct FString DBUserName; // 0x70(0x10)
	struct FString DBPassword; // 0x80(0x10)
	enum class EDBDriverType DBDriverType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t DBUpdateThreadsCount; // 0x94(0x04)
	float CharacterAutosaveInterval; // 0x98(0x04)
	float CharacterAutosaveTimeDelta; // 0x9c(0x04)
	int32_t MaxCharacterLevel; // 0xa0(0x04)
	int32_t MaxCharacterLevelForPVEMode; // 0xa4(0x04)
	struct FString ZabbixServer; // 0xa8(0x10)
	int32_t ZabbixPort; // 0xb8(0x04)
	float NetLagTime; // 0xbc(0x04)
	float SafeZoneEnterInvulnerableChargeSeconds; // 0xc0(0x04)
	float SafeZoneLeaveInvulnerableCooldownSeconds; // 0xc4(0x04)
	bool CharacterDropEnabled; // 0xc8(0x01)
	bool IsArenaLocation; // 0xc9(0x01)
	bool PVPEnabled; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	float GeneralChatDistance; // 0xcc(0x04)
	int32_t MaxConnectionsToTickPerServerFrame; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString SteamAPIKey; // 0xd8(0x10)
	int32_t TimeToConsumeSteamItem; // 0xe8(0x04)
	float ClientSideCharacterHitLeeway; // 0xec(0x04)
	float ClientSideMonsterHitLeeway; // 0xf0(0x04)
	float ClientSideEnemyNPCHitLeeway; // 0xf4(0x04)
	bool UseReplicationGraph; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float ReplicationGraphCellSize; // 0xfc(0x04)
	bool BlockMonsterSpawnOnFortificationCapture; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct WTL.WTLConnectionSettings
// Size: 0x18 (Inherited: 0x00)
struct FWTLConnectionSettings {
	struct FString Host; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WTL.WTLVoiceSettings
// Size: 0x08 (Inherited: 0x00)
struct FWTLVoiceSettings {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Port; // 0x04(0x04)
};

// ScriptStruct WTL.WTLSlotMachineData
// Size: 0x30 (Inherited: 0x00)
struct FWTLSlotMachineData {
	struct TArray<int32_t> IDSlots; // 0x00(0x10)
	struct TArray<int32_t> IDSymbolsSelected; // 0x10(0x10)
	struct AWTLCharacter* Character; // 0x20(0x08)
	enum class EWTLSlotMachineState State; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct WTL.WTLServerStatistics
// Size: 0x150 (Inherited: 0x00)
struct FWTLServerStatistics {
	struct FWTLServerStatisticsMonsters Monsters; // 0x00(0x108)
	struct FWTLServerStatisticsExperience Experience; // 0x108(0x10)
	struct FWTLServerStatisticsMoney Money; // 0x118(0x10)
	struct FWTLServerStatisticsSlotMachines SlotMachines; // 0x128(0x28)
};

// ScriptStruct WTL.WTLServerStatisticsSlotMachines
// Size: 0x28 (Inherited: 0x00)
struct FWTLServerStatisticsSlotMachines {
	uint64_t ActivationsCount; // 0x00(0x08)
	uint64_t BetsMoney; // 0x08(0x08)
	uint64_t RewardMoney; // 0x10(0x08)
	uint64_t ConsumedMoney; // 0x18(0x08)
	uint64_t MaxReward; // 0x20(0x08)
};

// ScriptStruct WTL.WTLServerStatisticsMoney
// Size: 0x10 (Inherited: 0x00)
struct FWTLServerStatisticsMoney {
	uint64_t TotalProduced; // 0x00(0x08)
	uint64_t TotalConsumed; // 0x08(0x08)
};

// ScriptStruct WTL.WTLServerStatisticsExperience
// Size: 0x10 (Inherited: 0x00)
struct FWTLServerStatisticsExperience {
	uint64_t Total; // 0x00(0x08)
	uint64_t MaxValue; // 0x08(0x08)
};

// ScriptStruct WTL.WTLServerStatisticsMonsters
// Size: 0x108 (Inherited: 0x00)
struct FWTLServerStatisticsMonsters {
	uint64_t Spawned; // 0x00(0x08)
	uint64_t Killed; // 0x08(0x08)
	uint64_t Alive; // 0x10(0x08)
	struct TMap<int32_t, uint64_t> SpawnedByClass; // 0x18(0x50)
	struct TMap<int32_t, uint64_t> KilledByClass; // 0x68(0x50)
	struct TMap<int32_t, uint64_t> AliveByClass; // 0xb8(0x50)
};

// ScriptStruct WTL.WTLThrowingDeviceBeamSection
// Size: 0x10 (Inherited: 0x00)
struct FWTLThrowingDeviceBeamSection {
	int32_t TrajectoryID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UParticleSystemComponent* ParticleComponent; // 0x08(0x08)
};

// ScriptStruct WTL.WTLDebugSuggestion
// Size: 0x18 (Inherited: 0x00)
struct FWTLDebugSuggestion {
	enum class EWTLDebugSuggestionType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CharacterName; // 0x08(0x10)
};

// ScriptStruct WTL.WTLSuggestion
// Size: 0x30 (Inherited: 0x00)
struct FWTLSuggestion {
	struct FText Text; // 0x00(0x18)
	struct FText DisplayedText; // 0x18(0x18)
};

// ScriptStruct WTL.WTLMonsterSpawnerTaskInfo
// Size: 0x40 (Inherited: 0x00)
struct FWTLMonsterSpawnerTaskInfo {
	int32_t ID; // 0x00(0x04)
	char MinLevel; // 0x04(0x01)
	char MaxLevel; // 0x05(0x01)
	char Rank; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float MinLifeSpan; // 0x08(0x04)
	float MaxLifeSpan; // 0x0c(0x04)
	enum class EWTLFaction Faction; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector Location; // 0x14(0x0c)
	float Health; // 0x20(0x04)
	float Delay; // 0x24(0x04)
	float CurrentDelay; // 0x28(0x04)
	bool Destroy; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FString TargetActorName; // 0x30(0x10)
};

// ScriptStruct WTL.WTLSellItemsQuestRestrictions
// Size: 0x20 (Inherited: 0x00)
struct FWTLSellItemsQuestRestrictions {
	struct FWTLItem Item; // 0x00(0x08)
	enum class EWTLCheckType CheckType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FWTLQuestIDState> QuestsToCheck; // 0x10(0x10)
};

// ScriptStruct WTL.WTLQuestIDState
// Size: 0x08 (Inherited: 0x00)
struct FWTLQuestIDState {
	int32_t ID; // 0x00(0x04)
	enum class EWTLQuestState State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct WTL.WTLQuestItemLockInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLQuestItemLockInfo {
	enum class EWTLItemType Type; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t TypeID; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CustomizationName; // 0x08(0x10)
};

// ScriptStruct WTL.WTLBundleItem
// Size: 0x10 (Inherited: 0x00)
struct FWTLBundleItem {
	uint64_t StoreItemID; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLPremiumItemData
// Size: 0x58 (Inherited: 0x00)
struct FWTLPremiumItemData {
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x00(0x28)
	int32_t DaysCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText Name; // 0x30(0x18)
	int32_t Price; // 0x48(0x04)
	int32_t Discount; // 0x4c(0x04)
	int32_t DiscountPercent; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct WTL.WTLCreditsItemData
// Size: 0x58 (Inherited: 0x00)
struct FWTLCreditsItemData {
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x00(0x28)
	uint64_t StoreItemID; // 0x28(0x08)
	struct FText Name; // 0x30(0x18)
	float USDPrice; // 0x48(0x04)
	int32_t RUBPrice; // 0x4c(0x04)
	int32_t Discount; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct WTL.WTLComboBoxStringSound
// Size: 0x58 (Inherited: 0x00)
struct FWTLComboBoxStringSound {
	enum class EWTLComboBoxStringType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UFMODEvent> PressedSoundEvent; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> SelectionChangeSoundEvent; // 0x30(0x28)
};

// ScriptStruct WTL.WTLCheckBoxSound
// Size: 0x80 (Inherited: 0x00)
struct FWTLCheckBoxSound {
	enum class EWTLCheckBoxType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UFMODEvent> CheckedSoundEvent; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> UncheckedSoundEvent; // 0x30(0x28)
	struct TSoftObjectPtr<UFMODEvent> HoveredSoundEvent; // 0x58(0x28)
};

// ScriptStruct WTL.WTLSwitcherSound
// Size: 0x58 (Inherited: 0x00)
struct FWTLSwitcherSound {
	enum class EWTLSwitcherType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UFMODEvent> ButtonPressedSoundEvent; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> ButtonHoveredSoundEvent; // 0x30(0x28)
};

// ScriptStruct WTL.WTLCommonClickedItemSound
// Size: 0x58 (Inherited: 0x00)
struct FWTLCommonClickedItemSound {
	enum class EWTLCommonClickedItemType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UFMODEvent> MouseButtonDownSoundEvent; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> HoveredSoundEvent; // 0x30(0x28)
};

// ScriptStruct WTL.WTLCommonButtonSound
// Size: 0x58 (Inherited: 0x00)
struct FWTLCommonButtonSound {
	enum class EWTLCommonButtonType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UFMODEvent> PressedSoundEvent; // 0x08(0x28)
	struct TSoftObjectPtr<UFMODEvent> HoveredSoundEvent; // 0x30(0x28)
};

// ScriptStruct WTL.WTLSexTexture
// Size: 0x30 (Inherited: 0x00)
struct FWTLSexTexture {
	enum class EWTLSex Sex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLItemRequirement
// Size: 0x20 (Inherited: 0x00)
struct FWTLItemRequirement {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	struct FString CustomizationName; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLSteamInventoryItem
// Size: 0x10 (Inherited: 0x00)
struct FWTLSteamInventoryItem {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct WTL.WTLGiveItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FWTLGiveItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
	int32_t Condition; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLBodyPartButtonStyle
// Size: 0x280 (Inherited: 0x00)
struct FWTLBodyPartButtonStyle {
	enum class EWTLCharacterCustomizationPart BodyPartType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FButtonStyle ButtonStyle; // 0x08(0x278)
};

// ScriptStruct WTL.WTLItemTypeStoreButtonStyle
// Size: 0x280 (Inherited: 0x00)
struct FWTLItemTypeStoreButtonStyle {
	enum class EWTLStoreItemType StoreItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FButtonStyle ButtonStyle; // 0x08(0x278)
};

// ScriptStruct WTL.WTLEquipmentTypeTexture
// Size: 0x30 (Inherited: 0x00)
struct FWTLEquipmentTypeTexture {
	enum class EWTLEquipmentType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLPrivateLootItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLPrivateLootItemInfo {
	uint64_t CharacterID; // 0x00(0x08)
	enum class EWTLItemType ItemType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	uint64_t ItemId; // 0x10(0x08)
};

// ScriptStruct WTL.WTLEmotionAnimation
// Size: 0x20 (Inherited: 0x00)
struct FWTLEmotionAnimation {
	int32_t EmotionTypeID; // 0x00(0x04)
	int32_t EmotionID; // 0x04(0x04)
	bool BlockCameraRotation; // 0x08(0x01)
	bool HideUsableItem; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UAnimMontage* MaleMontage; // 0x10(0x08)
	struct UAnimMontage* FemaleMontage; // 0x18(0x08)
};

// ScriptStruct WTL.WTLLocationSpawnPickup
// Size: 0x90 (Inherited: 0x00)
struct FWTLLocationSpawnPickup {
	struct TSoftClassPtr<UObject> PickupClass; // 0x00(0x28)
	int32_t Quality; // 0x28(0x04)
	float Chance; // 0x2c(0x04)
	int32_t MinCount; // 0x30(0x04)
	int32_t MaxCount; // 0x34(0x04)
	int32_t MinCondition; // 0x38(0x04)
	int32_t MaxCondition; // 0x3c(0x04)
	int32_t MinInteractiveObjectID; // 0x40(0x04)
	int32_t MaxInteractiveObjectID; // 0x44(0x04)
	char CustomizationScalar; // 0x48(0x01)
	char CustomizationColor; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FString CustomizationName; // 0x50(0x10)
	struct FString ModificationData; // 0x60(0x10)
	struct FDateTime NextSpawnTime; // 0x70(0x08)
	float MinTimeBetweenSpawn; // 0x78(0x04)
	float MaxTimeBetweenSpawn; // 0x7c(0x04)
	float MinBlackListTimeout; // 0x80(0x04)
	float MaxBlackListTimeout; // 0x84(0x04)
	int32_t MaxInstanceCount; // 0x88(0x04)
	int32_t CurrentInstanceCount; // 0x8c(0x04)
};

// ScriptStruct WTL.WTLArenaFactionScore
// Size: 0x08 (Inherited: 0x00)
struct FWTLArenaFactionScore {
	enum class EWTLFaction Faction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Score; // 0x04(0x04)
};

// ScriptStruct WTL.WTLFactionColor
// Size: 0x14 (Inherited: 0x00)
struct FWTLFactionColor {
	enum class EWTLFaction Faction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct WTL.WTLFactionTexture
// Size: 0x30 (Inherited: 0x00)
struct FWTLFactionTexture {
	enum class EWTLFaction Faction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLCraftObjectProcessRecord
// Size: 0x30 (Inherited: 0x00)
struct FWTLCraftObjectProcessRecord {
	uint64_t UniqueId; // 0x00(0x08)
	uint64_t CharacterID; // 0x08(0x08)
	struct FString CharacterName; // 0x10(0x10)
	int32_t CraftItemID; // 0x20(0x04)
	float ProductionTime; // 0x24(0x04)
	float ProductionTimeLeft; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLMovementMemoryElement
// Size: 0x40 (Inherited: 0x00)
struct FWTLMovementMemoryElement {
	struct FTransform Transform; // 0x00(0x30)
	float Delta; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct WTL.WTLQTEState
// Size: 0x10 (Inherited: 0x00)
struct FWTLQTEState {
	char NextKeyID; // 0x00(0x01)
	char Step; // 0x01(0x01)
	char SequenceLength; // 0x02(0x01)
	char FishingDifficulty; // 0x03(0x01)
	float FishingSequenceValue; // 0x04(0x04)
	float FishingSequenceLength; // 0x08(0x04)
	bool bIsInQTE; // 0x0c(0x01)
	bool bCanCancel; // 0x0d(0x01)
	enum class EWTLQTEType Type; // 0x0e(0x01)
	bool bNeedToHideUsableItem; // 0x0f(0x01)
};

// ScriptStruct WTL.WTLLowerBodyAnimation
// Size: 0x10 (Inherited: 0x00)
struct FWTLLowerBodyAnimation {
	struct UAnimMontage* MontageLeft; // 0x00(0x08)
	struct UAnimMontage* MontageRight; // 0x08(0x08)
};

// ScriptStruct WTL.WTLCharacterMedicineEffect
// Size: 0x10 (Inherited: 0x00)
struct FWTLCharacterMedicineEffect {
	float TimeLeft; // 0x00(0x04)
	int32_t EffectID; // 0x04(0x04)
	int16_t MedicineID; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct WTL.SpeedModifiers
// Size: 0x08 (Inherited: 0x00)
struct FSpeedModifiers {
	float ReloadSpeedModifier; // 0x00(0x04)
	float EquipSpeedModifier; // 0x04(0x04)
};

// ScriptStruct WTL.WTLMedicineEffectImageInfo
// Size: 0x40 (Inherited: 0x00)
struct FWTLMedicineEffectImageInfo {
	enum class EWTLMedicineEffectParameter Parameter; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x08(0x28)
	struct FLinearColor Color; // 0x30(0x10)
};

// ScriptStruct WTL.WTLDebugCharacterClanInfo
// Size: 0x08 (Inherited: 0x00)
struct FWTLDebugCharacterClanInfo {
	int32_t ClanID; // 0x00(0x04)
	enum class EWTLClanMemberType ClanMemberType; // 0x04(0x01)
	bool bIsUsed; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct WTL.WTLBPIdentityItemType
// Size: 0x08 (Inherited: 0x00)
struct FWTLBPIdentityItemType {
	enum class EWTLItemType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TypeID; // 0x04(0x04)
};

// ScriptStruct WTL.LipSyncData
// Size: 0x24 (Inherited: 0x00)
struct FLipSyncData {
	float E; // 0x00(0x04)
	float FV; // 0x04(0x04)
	float AI; // 0x08(0x04)
	float L; // 0x0c(0x04)
	float O; // 0x10(0x04)
	float ETC; // 0x14(0x04)
	float U; // 0x18(0x04)
	float WQ; // 0x1c(0x04)
	float MBP; // 0x20(0x04)
};

// ScriptStruct WTL.WTLLanguageInfo
// Size: 0x98 (Inherited: 0x00)
struct FWTLLanguageInfo {
	struct FString Culture; // 0x00(0x10)
	struct FSlateBrush Brush; // 0x10(0x88)
};

// ScriptStruct WTL.WTLSteamServerInfo
// Size: 0x68 (Inherited: 0x00)
struct FWTLSteamServerInfo {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct WTL.WTLCommissionItemTypeCount
// Size: 0x08 (Inherited: 0x00)
struct FWTLCommissionItemTypeCount {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct WTL.WTLBarterDeal
// Size: 0x180 (Inherited: 0x00)
struct FWTLBarterDeal {
	struct AWTLCharacter* Character1; // 0x00(0x08)
	struct AWTLCharacter* Character2; // 0x08(0x08)
	uint64_t CharacterID1; // 0x10(0x08)
	uint64_t CharacterID2; // 0x18(0x08)
	struct FWTLStorageContent CharacterItems1; // 0x20(0xa8)
	struct FWTLStorageContent CharacterItems2; // 0xc8(0xa8)
	int32_t CharacterMoneyAmount1; // 0x170(0x04)
	int32_t CharacterMoneyAmount2; // 0x174(0x04)
	bool CharacterReady1; // 0x178(0x01)
	bool CharacterReady2; // 0x179(0x01)
	bool CharacterAgreement1; // 0x17a(0x01)
	bool CharacterAgreement2; // 0x17b(0x01)
	char pad_17C[0x4]; // 0x17c(0x04)
};

// ScriptStruct WTL.WTLBarterDealRequest
// Size: 0x48 (Inherited: 0x00)
struct FWTLBarterDealRequest {
	struct FDateTime RequestDate; // 0x00(0x08)
	struct AWTLCharacter* FromCharacter; // 0x08(0x08)
	uint64_t FromCharacterID; // 0x10(0x08)
	struct FString FromCharacterName; // 0x18(0x10)
	struct AWTLCharacter* ToCharacter; // 0x28(0x08)
	uint64_t ToCharacterID; // 0x30(0x08)
	struct FString Message; // 0x38(0x10)
};

// ScriptStruct WTL.WTLClanStorageMoneyLogRecord
// Size: 0x40 (Inherited: 0x00)
struct FWTLClanStorageMoneyLogRecord {
	struct FWTLDateTime EventDate; // 0x00(0x08)
	char TabIndex; // 0x08(0x01)
	enum class EWTLClanStorageMoneyOperationType OperationType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	uint64_t CharacterID; // 0x10(0x08)
	struct FString CharacterName; // 0x18(0x10)
	int32_t MoneyAmount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Description; // 0x30(0x10)
};

// ScriptStruct WTL.WTLClanStorageItemLogRecord
// Size: 0x50 (Inherited: 0x00)
struct FWTLClanStorageItemLogRecord {
	struct FWTLDateTime EventDate; // 0x00(0x08)
	char TabIndex; // 0x08(0x01)
	enum class EWTLClanStorageItemOperationType OperationType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	uint64_t CharacterID; // 0x10(0x08)
	struct FString CharacterName; // 0x18(0x10)
	enum class EWTLItemType ItemType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t ItemId; // 0x30(0x08)
	uint16_t ItemTypeID; // 0x38(0x02)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t Count; // 0x3c(0x04)
	struct FString Description; // 0x40(0x10)
};

// ScriptStruct WTL.WTLAmmoCaliberStatInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLAmmoCaliberStatInfo {
	int32_t DamageMin; // 0x00(0x04)
	int32_t DamageMax; // 0x04(0x04)
	int32_t ArmorPiercingMin; // 0x08(0x04)
	int32_t ArmorPiercingMax; // 0x0c(0x04)
	int32_t AccuracyMin; // 0x10(0x04)
	int32_t AccuracyMax; // 0x14(0x04)
};

// ScriptStruct WTL.WTLWeaponStatInfo
// Size: 0x0c (Inherited: 0x00)
struct FWTLWeaponStatInfo {
	int32_t MinDamage; // 0x00(0x04)
	int32_t MaxDamage; // 0x04(0x04)
	float DPS; // 0x08(0x04)
};

// ScriptStruct WTL.WTLWeaponTypeStatInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLWeaponTypeStatInfo {
	int32_t MinDamage; // 0x00(0x04)
	int32_t MaxDamage; // 0x04(0x04)
	int32_t MinAccuracy; // 0x08(0x04)
	int32_t MaxAccuracy; // 0x0c(0x04)
	int32_t MinConditionDelta; // 0x10(0x04)
	int32_t MaxConditionDelta; // 0x14(0x04)
};

// ScriptStruct WTL.WTLClanInviteInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLClanInviteInfo {
	uint16_t ClanID; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString SenderCharacterName; // 0x08(0x10)
};

// ScriptStruct WTL.WTLClanIcons
// Size: 0x78 (Inherited: 0x00)
struct FWTLClanIcons {
	struct TSoftObjectPtr<UTexture2D> SmallIcon; // 0x00(0x28)
	struct TSoftObjectPtr<UTexture2D> MediumIcon; // 0x28(0x28)
	struct TSoftObjectPtr<UTexture2D> LargeIcon; // 0x50(0x28)
};

// ScriptStruct WTL.WTLCraftObjectState
// Size: 0xd0 (Inherited: 0x00)
struct FWTLCraftObjectState {
	int32_t CraftObjectID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FWTLStorageContent Content; // 0x08(0xa8)
	struct FMulticastInlineDelegate OnStorageContentChanged; // 0xb0(0x10)
	struct TArray<struct FWTLCraftObjectProcess> Processes; // 0xc0(0x10)
};

// ScriptStruct WTL.WTLCraftObjectProcess
// Size: 0x20 (Inherited: 0x00)
struct FWTLCraftObjectProcess {
	uint64_t UniqueId; // 0x00(0x08)
	uint64_t CharacterID; // 0x08(0x08)
	int32_t CraftItemID; // 0x10(0x04)
	float ProductionTime; // 0x14(0x04)
	float ProductionTimeLeft; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct WTL.WTLCommissionListItemData
// Size: 0x30 (Inherited: 0x00)
struct FWTLCommissionListItemData {
	enum class EWTLItemType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t ID; // 0x08(0x08)
	uint16_t TypeID; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t Count; // 0x14(0x04)
	int32_t CommissionMinBuyCount; // 0x18(0x04)
	float CommissionPrice; // 0x1c(0x04)
	struct FDateTime CommissionDate; // 0x20(0x08)
	struct FDateTime CommissionExpireDate; // 0x28(0x08)
};

// ScriptStruct WTL.WTLGlobalLevelObjectRecord
// Size: 0x20 (Inherited: 0x00)
struct FWTLGlobalLevelObjectRecord {
	int32_t ID; // 0x00(0x04)
	enum class EWTLGlobalLevelObjectType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t State; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString StateInfo; // 0x10(0x10)
};

// ScriptStruct WTL.WTLSlotMachineRecord
// Size: 0x08 (Inherited: 0x00)
struct FWTLSlotMachineRecord {
	int32_t ID; // 0x00(0x04)
	int32_t Balance; // 0x04(0x04)
};

// ScriptStruct WTL.WTLFortificationObjectRecord
// Size: 0xe8 (Inherited: 0x00)
struct FWTLFortificationObjectRecord {
	int32_t ID; // 0x00(0x04)
	enum class EWTLFortificationObjectType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	uint64_t CharacterID; // 0x08(0x08)
	uint64_t CharacterGroupID; // 0x10(0x08)
	uint16_t CharacterClanID; // 0x18(0x02)
	enum class EWTLFaction CharacterFaction; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FVector Position; // 0x1c(0x0c)
	struct FVector Rotation; // 0x28(0x0c)
	char SlotCount; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	uint32_t Condition; // 0x38(0x04)
	float Energy; // 0x3c(0x04)
	struct FWTLStorageContent StorageContent; // 0x40(0xa8)
};

// ScriptStruct WTL.WTLLocationFortificationCommandCoreRecord
// Size: 0x28 (Inherited: 0x00)
struct FWTLLocationFortificationCommandCoreRecord {
	int32_t CommandCoreID; // 0x00(0x04)
	float Energy; // 0x04(0x04)
	struct FDateTime LastCaptureTime; // 0x08(0x08)
	enum class EWTLFaction ControlFaction; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FWTLFortificationCaptureScoreRecord> CaptureScore; // 0x18(0x10)
};

// ScriptStruct WTL.WTLFortificationCaptureScoreRecord
// Size: 0x18 (Inherited: 0x00)
struct FWTLFortificationCaptureScoreRecord {
	uint64_t CharacterID; // 0x00(0x08)
	enum class EWTLFaction CharacterFaction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KillsCount; // 0x0c(0x04)
	int32_t DeathsCount; // 0x10(0x04)
	int32_t Score; // 0x14(0x04)
};

// ScriptStruct WTL.WTLLocationPlaceableStuffRecord
// Size: 0x58 (Inherited: 0x00)
struct FWTLLocationPlaceableStuffRecord {
	uint64_t ItemId; // 0x00(0x08)
	uint16_t StuffID; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	uint64_t CharacterID; // 0x10(0x08)
	struct FString CharacterName; // 0x18(0x10)
	uint64_t CharacterGroupID; // 0x28(0x08)
	uint16_t CharacterClanID; // 0x30(0x02)
	enum class EWTLFaction CharacterFaction; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	struct FVector Position; // 0x34(0x0c)
	struct FVector Rotation; // 0x40(0x0c)
	uint32_t Condition; // 0x4c(0x04)
	float Energy; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct WTL.WTLLocationStorageRecord
// Size: 0xe8 (Inherited: 0x00)
struct FWTLLocationStorageRecord {
	uint64_t CharacterID; // 0x00(0x08)
	struct FString CharacterName; // 0x08(0x10)
	uint64_t CharacterGroupID; // 0x18(0x08)
	uint16_t CharacterClanID; // 0x20(0x02)
	enum class EWTLFaction CharacterFaction; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FVector Position; // 0x24(0x0c)
	struct FVector Rotation; // 0x30(0x0c)
	char SlotCount; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FWTLStorageContent Content; // 0x40(0xa8)
};

// ScriptStruct WTL.WTLClanStorage
// Size: 0x30 (Inherited: 0x00)
struct FWTLClanStorage {
	uint64_t ID; // 0x00(0x08)
	int32_t NPCID; // 0x08(0x04)
	uint16_t ClanID; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FWTLClanStorageTab> Tabs; // 0x10(0x10)
	struct FMulticastInlineDelegate OnStorageContentChanged; // 0x20(0x10)
};

// ScriptStruct WTL.WTLClanStorageTab
// Size: 0xf8 (Inherited: 0x00)
struct FWTLClanStorageTab {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	char ImageIndex; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	uint64_t Money; // 0x28(0x08)
	struct FWTLStorageContent StorageContent; // 0x30(0xa8)
	struct TArray<uint64_t> CanPutClanPolicyGroups; // 0xd8(0x10)
	struct TArray<uint64_t> CanTakeClanPolicyGroups; // 0xe8(0x10)
};

// ScriptStruct WTL.WTLCommissionStorage
// Size: 0x78 (Inherited: 0x00)
struct FWTLCommissionStorage {
	int32_t NPCID; // 0x00(0x04)
	int32_t Money; // 0x04(0x04)
	struct TArray<struct FWTLCommissionWeaponItem> WeaponItems; // 0x08(0x10)
	struct TArray<struct FWTLCommissionAmmoItem> AmmoItems; // 0x18(0x10)
	struct TArray<struct FWTLCommissionMedicineItem> MedicineItems; // 0x28(0x10)
	struct TArray<struct FWTLCommissionStuffItem> StuffItems; // 0x38(0x10)
	struct TArray<struct FWTLCommissionClothesItem> ClothesItems; // 0x48(0x10)
	struct TArray<struct FWTLCommissionResourceItem> ResourceItems; // 0x58(0x10)
	struct TArray<struct FWTLCommissionArtefactItem> ArtefactItems; // 0x68(0x10)
};

// ScriptStruct WTL.WTLPrivateStorage
// Size: 0xc0 (Inherited: 0x00)
struct FWTLPrivateStorage {
	int32_t NPCID; // 0x00(0x04)
	char SlotCount; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FWTLStorageContent StorageContent; // 0x08(0xa8)
	struct FMulticastInlineDelegate OnStorageContentChanged; // 0xb0(0x10)
};

// ScriptStruct WTL.WTLInteractiveResourceGatherType
// Size: 0x30 (Inherited: 0x00)
struct FWTLInteractiveResourceGatherType {
	struct TArray<struct FWTLInteractiveResourceGatherItem> RequireItems; // 0x00(0x10)
	struct TArray<struct FWTLInteractiveResourceResultItem> ResultItems; // 0x10(0x10)
	float MinResourceValueToGather; // 0x20(0x04)
	float MinResourceValueDecrement; // 0x24(0x04)
	float MaxResourceValueDecrement; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WTL.WTLInteractiveResourceResultItem
// Size: 0x08 (Inherited: 0x00)
struct FWTLInteractiveResourceResultItem {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct WTL.WTLInteractiveResourceGatherItem
// Size: 0x0c (Inherited: 0x00)
struct FWTLInteractiveResourceGatherItem {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	int32_t Count; // 0x04(0x04)
	bool ConsumeAfterGather; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct WTL.WTLWaterContainer
// Size: 0x08 (Inherited: 0x00)
struct FWTLWaterContainer {
	enum class EWTLItemType EmptyItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t EmptyItemTypeID; // 0x02(0x02)
	enum class EWTLItemType FullItemType; // 0x04(0x01)
	char pad_5[0x1]; // 0x05(0x01)
	uint16_t FullItemTypeID; // 0x06(0x02)
};

// ScriptStruct WTL.WTLActionTimerWidgetType
// Size: 0x30 (Inherited: 0x00)
struct FWTLActionTimerWidgetType {
	enum class EWTLActionTimerWidgetType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLLocalCharactersData
// Size: 0x50 (Inherited: 0x00)
struct FWTLLocalCharactersData {
	struct TMap<uint64_t, struct FWTLLocalCharacterData> PerCharacterData; // 0x00(0x50)
};

// ScriptStruct WTL.WTLLocalCharacterData
// Size: 0xa8 (Inherited: 0x00)
struct FWTLLocalCharacterData {
	bool bIsFlashlightEnabled; // 0x00(0x01)
	char MonocularZoomModeIndex; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<uint64_t, char> m_WeaponsFireModeMemory; // 0x08(0x50)
	struct TMap<uint64_t, char> m_StuffsModeMemory; // 0x58(0x50)
};

// ScriptStruct WTL.WTLLocationNameWithID
// Size: 0x20 (Inherited: 0x00)
struct FWTLLocationNameWithID {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Name; // 0x08(0x18)
};

// ScriptStruct WTL.WTLWidgetWithOrder
// Size: 0x10 (Inherited: 0x00)
struct FWTLWidgetWithOrder {
	struct UUserWidget* Widget; // 0x00(0x08)
	int32_t Order; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLDaytimeCubemapScenario
// Size: 0x20 (Inherited: 0x00)
struct FWTLDaytimeCubemapScenario {
	struct UTextureCube* SourceCubemap; // 0x00(0x08)
	struct UTextureCube* DestinationCubemap; // 0x08(0x08)
	float FromDayTime; // 0x10(0x04)
	float ToDayTime; // 0x14(0x04)
	enum class EWTLDaytimeCubemapBlendType BlendType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct WTL.WTLDaytimeCubemap
// Size: 0x10 (Inherited: 0x00)
struct FWTLDaytimeCubemap {
	float DayTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTextureCube* Texture; // 0x08(0x08)
};

// ScriptStruct WTL.WTLCaptureTarget
// Size: 0x10 (Inherited: 0x00)
struct FWTLCaptureTarget {
	float DayTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTextureRenderTargetCube* Target; // 0x08(0x08)
};

// ScriptStruct WTL.WTLCharacterEffectTypeColor
// Size: 0x14 (Inherited: 0x00)
struct FWTLCharacterEffectTypeColor {
	enum class EWTLCharacterEffectType EffectType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct WTL.WTLConsoleScript
// Size: 0x20 (Inherited: 0x00)
struct FWTLConsoleScript {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FString> Commands; // 0x10(0x10)
};

// ScriptStruct WTL.WTLCustomizationColorIngredient
// Size: 0x0c (Inherited: 0x00)
struct FWTLCustomizationColorIngredient {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct WTL.WTLShortMovementInfo
// Size: 0x10 (Inherited: 0x00)
struct FWTLShortMovementInfo {
	char Yaw; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
};

// ScriptStruct WTL.WTLUFunctionInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLUFunctionInfo {
	struct UObject* Object; // 0x00(0x08)
	struct FString UFunctionName; // 0x08(0x10)
};

// ScriptStruct WTL.WTLCharacterStateIndicatorTextureIdentity
// Size: 0x30 (Inherited: 0x00)
struct FWTLCharacterStateIndicatorTextureIdentity {
	enum class EWTLCharacterStateIndicatorType StateIndicatorType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLCharacterEffectTextureIdentity
// Size: 0x30 (Inherited: 0x00)
struct FWTLCharacterEffectTextureIdentity {
	enum class EWTLCharacterEffectType EffectType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct WTL.WTLDefaultClassParameters
// Size: 0x06 (Inherited: 0x00)
struct FWTLDefaultClassParameters {
	char Strength; // 0x00(0x01)
	char Dexterity; // 0x01(0x01)
	char Stamina; // 0x02(0x01)
	char Accuracy; // 0x03(0x01)
	char Intelligence; // 0x04(0x01)
	char Fortune; // 0x05(0x01)
};

// ScriptStruct WTL.WTLArenaSelectedEquipmentItem
// Size: 0x06 (Inherited: 0x00)
struct FWTLArenaSelectedEquipmentItem {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	char SlotNumber; // 0x04(0x01)
	char pad_5[0x1]; // 0x05(0x01)
};

// ScriptStruct WTL.WTLVisualItemCount
// Size: 0x10 (Inherited: 0x00)
struct FWTLVisualItemCount {
	uint64_t ItemId; // 0x00(0x08)
	int32_t ItemCountInNewSlot; // 0x08(0x04)
	int32_t OldItemCount; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLSellItemInfo
// Size: 0x48 (Inherited: 0x00)
struct FWTLSellItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ItemName; // 0x08(0x18)
	uint64_t ItemId; // 0x20(0x08)
	uint16_t ItemTypeID; // 0x28(0x02)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t ItemCount; // 0x2c(0x04)
	int32_t ItemMinBuyCount; // 0x30(0x04)
	float ItemCommissionPrice; // 0x34(0x04)
	uint64_t ItemCommissionCharacterID; // 0x38(0x08)
	int32_t ItemWeight; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct WTL.WTLComboBoxSubTypeOption
// Size: 0x20 (Inherited: 0x00)
struct FWTLComboBoxSubTypeOption {
	struct FText SubTypeName; // 0x00(0x18)
	int16_t SubTypeNumber; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct WTL.WTLExtractItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLExtractItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t ItemId; // 0x08(0x08)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WTL.WTLSellingItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLSellingItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t ItemId; // 0x08(0x08)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WTL.WTLSellItems
// Size: 0x70 (Inherited: 0x00)
struct FWTLSellItems {
	struct TArray<struct FWTLCommissionWeaponItem> WeaponItems; // 0x00(0x10)
	struct TArray<struct FWTLCommissionAmmoItem> AmmoItems; // 0x10(0x10)
	struct TArray<struct FWTLCommissionMedicineItem> MedicineItems; // 0x20(0x10)
	struct TArray<struct FWTLCommissionStuffItem> StuffItems; // 0x30(0x10)
	struct TArray<struct FWTLCommissionClothesItem> ClothesItems; // 0x40(0x10)
	struct TArray<struct FWTLCommissionResourceItem> ResourceItems; // 0x50(0x10)
	struct TArray<struct FWTLCommissionArtefactItem> ArtefactItems; // 0x60(0x10)
};

// ScriptStruct WTL.WTLBuyItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FWTLBuyItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t ItemTypeID; // 0x02(0x02)
	float Price; // 0x04(0x04)
	float PriceMultiplier; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
};

// ScriptStruct WTL.UpdatingReflestionCapture
// Size: 0x10 (Inherited: 0x00)
struct FUpdatingReflestionCapture {
	struct AReflectionCapture* Object; // 0x00(0x08)
	float LastUpdateLevelTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct WTL.WTLFastAccessSlotBindPermissions
// Size: 0x30 (Inherited: 0x00)
struct FWTLFastAccessSlotBindPermissions {
	struct TArray<enum class EWTLWeaponType> WeaponTypes; // 0x00(0x10)
	struct TArray<enum class EWTLMedicineType> MedicineTypes; // 0x10(0x10)
	struct TArray<enum class EWTLStuffType> StuffTypes; // 0x20(0x10)
};

// ScriptStruct WTL.WTLGeneratedSellItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FWTLGeneratedSellItemInfo {
	enum class EWTLItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ItemTypeID; // 0x04(0x04)
	int32_t Condition; // 0x08(0x04)
	float PriceMultiplier; // 0x0c(0x04)
	bool RoundNumberPrice; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MinBuyCount; // 0x14(0x04)
};

// ScriptStruct WTL.WTLCustomQuestRequirementState
// Size: 0x48 (Inherited: 0x00)
struct FWTLCustomQuestRequirementState {
	struct FString Name; // 0x00(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x10(0x28)
	int32_t NeedCount; // 0x38(0x04)
	int32_t CurrentCount; // 0x3c(0x04)
	bool UseBitMaskForProgress; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct WTL.WTLEnemyNPCKillRequirementState
// Size: 0x28 (Inherited: 0x00)
struct FWTLEnemyNPCKillRequirementState {
	int32_t EnemyNPCID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString EnemyNPCName; // 0x08(0x10)
	char MinLevel; // 0x18(0x01)
	char MaxLevel; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t NeedCount; // 0x1c(0x04)
	int32_t CurrentCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct WTL.WTLMonsterKillRequirementState
// Size: 0x28 (Inherited: 0x00)
struct FWTLMonsterKillRequirementState {
	int32_t MonsterID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString MonsterName; // 0x08(0x10)
	char MinLevel; // 0x18(0x01)
	char MaxLevel; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t NeedCount; // 0x1c(0x04)
	int32_t CurrentCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct WTL.WTLLanguageOption
// Size: 0x20 (Inherited: 0x00)
struct FWTLLanguageOption {
	struct FString LanguageName; // 0x00(0x10)
	struct FString LanguagePrefix; // 0x10(0x10)
};

// ScriptStruct WTL.WTLOptionsParameter
// Size: 0x30 (Inherited: 0x00)
struct FWTLOptionsParameter {
	struct FText ParameterName; // 0x00(0x18)
	struct FString ParameterPrefix; // 0x18(0x10)
	bool bIsHiddenForUser; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct WTL.WTLRadialMenuEmotionsInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FWTLRadialMenuEmotionsInfoArray {
	struct TArray<struct FWTLRadialMenuEmotionInfo> RadialMenuEmotionsInfo; // 0x00(0x10)
};

// ScriptStruct WTL.WTLUseMenuActionInfo
// Size: 0x58 (Inherited: 0x50)
struct FWTLUseMenuActionInfo : FWTLRadialMenuActionInfo {
	enum class EWTLUseMenuActionType Type; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct WTL.WTLUseMenuButtonInfo
// Size: 0x38 (Inherited: 0x00)
struct FWTLUseMenuButtonInfo {
	enum class EWTLUseMenuActionType ActionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* Object; // 0x08(0x08)
	struct FString UFunctionName; // 0x10(0x10)
	struct FText CustomButtonDescription; // 0x20(0x18)
};

// ScriptStruct WTL.WTLRadialMenuButton
// Size: 0x18 (Inherited: 0x00)
struct FWTLRadialMenuButton {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct WTL.WTLPopupButtonInfo
// Size: 0x38 (Inherited: 0x00)
struct FWTLPopupButtonInfo {
	struct FText ButtonName; // 0x00(0x18)
	uint64_t ID; // 0x18(0x08)
	struct UObject* Object; // 0x20(0x08)
	struct FString UFunctionName; // 0x28(0x10)
};

// ScriptStruct WTL.WTLPopupDialogButtonInfo
// Size: 0x30 (Inherited: 0x00)
struct FWTLPopupDialogButtonInfo {
	struct FText Text; // 0x00(0x18)
	uint64_t ID; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct WTL.WTLMessageDialogButtonInfo
// Size: 0x58 (Inherited: 0x00)
struct FWTLMessageDialogButtonInfo {
	struct FText Text; // 0x00(0x18)
	char pad_18[0x10]; // 0x18(0x10)
	struct FSlateColor TextColor; // 0x28(0x28)
	bool IsSetTextColor; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct WTL.WTLCharacterStateIndicatorTypeConfig
// Size: 0x90 (Inherited: 0x00)
struct FWTLCharacterStateIndicatorTypeConfig {
	enum class EWTLCharacterStateIndicatorType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSlateBrush IconBrush; // 0x08(0x88)
};

// ScriptStruct WTL.WTLCharacterEffectTypeConfig
// Size: 0x90 (Inherited: 0x00)
struct FWTLCharacterEffectTypeConfig {
	enum class EWTLCharacterEffectType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSlateBrush IconBrush; // 0x08(0x88)
};

// ScriptStruct WTL.WTLNotificationTypeConfig
// Size: 0x68 (Inherited: 0x00)
struct FWTLNotificationTypeConfig {
	enum class EWTLHUDNotificationType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x08(0x28)
	struct FLinearColor Color; // 0x30(0x10)
	struct TSoftObjectPtr<UFMODEvent> SoundEvent; // 0x40(0x28)
};

// ScriptStruct WTL.WTLCustomizationPartsLoadPermissions
// Size: 0x02 (Inherited: 0x00)
struct FWTLCustomizationPartsLoadPermissions {
	enum class EWTLCharacterCustomizationPart PartType; // 0x00(0x01)
	bool bIsPermissionToLoad; // 0x01(0x01)
};

// ScriptStruct WTL.WTLCustomizationRecord
// Size: 0x110 (Inherited: 0x00)
struct FWTLCustomizationRecord {
	struct FWTLCharacterCustomizationRecord CustomizationRecord; // 0x00(0x108)
	char MaterialIndex; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct WTL.WTLHUDVisibleException
// Size: 0x10 (Inherited: 0x00)
struct FWTLHUDVisibleException {
	struct UWTLHUDWidgetBase* FullscreenWidget; // 0x00(0x08)
	struct UWTLHUDWidgetBase* ExceptionWidget; // 0x08(0x08)
};

// ScriptStruct WTL.WTLHUDFullscreenWidget
// Size: 0x10 (Inherited: 0x00)
struct FWTLHUDFullscreenWidget {
	struct UWTLWidgetBase* Widget; // 0x00(0x08)
	enum class EWTLInputMode InputMode; // 0x08(0x01)
	bool bWasVisible; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct WTL.WTLInputSetting
// Size: 0x98 (Inherited: 0x00)
struct FWTLInputSetting {
	struct FName ActionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FKey MainKey; // 0x20(0x18)
	bool bIsMainKeySet; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FKey AlternateKey; // 0x40(0x18)
	bool bIsAlternateKeySet; // 0x58(0x01)
	bool bIsAlternateKeyAllow; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FKey DefaultMainKey; // 0x60(0x18)
	struct FKey DefaultAlternateKey; // 0x78(0x18)
	float AxisScale; // 0x90(0x04)
	enum class EWTLKeyCategory Category; // 0x94(0x01)
	bool bIsMouseKeysCanBind; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
};

// ScriptStruct WTL.WTLMapCanvasMarker
// Size: 0x78 (Inherited: 0x00)
struct FWTLMapCanvasMarker {
	struct FWTLMapMarker Marker; // 0x00(0x70)
	struct UWTLCommonMapMarker* MarkerWidget; // 0x70(0x08)
};

// ScriptStruct WTL.WTLMapMarker
// Size: 0x70 (Inherited: 0x00)
struct FWTLMapMarker {
	struct FString MarkerName; // 0x00(0x10)
	struct FString MarkerTime; // 0x10(0x10)
	struct FText ToolTipText; // 0x20(0x18)
	struct AActor* MarkerActor; // 0x38(0x08)
	struct FVector MarkerLocation; // 0x40(0x0c)
	enum class EWTLMapMarkerType MarkerType; // 0x4c(0x01)
	char MarkerSubTypeNumber; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FLinearColor MarkerColor; // 0x50(0x10)
	char MarkerZOrder; // 0x60(0x01)
	bool bIsSticking; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32_t MarkerIndex; // 0x64(0x04)
	float Radius; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct WTL.WTLTakenDamageRecord
// Size: 0x20 (Inherited: 0x00)
struct FWTLTakenDamageRecord {
	struct FDateTime LastDamageTime; // 0x00(0x08)
	int32_t HitCount; // 0x08(0x04)
	float DamageValue; // 0x0c(0x04)
	uint64_t GroupId; // 0x10(0x08)
	uint16_t ClanID; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct WTL.WTLWeaponTypeDamageModifier
// Size: 0x08 (Inherited: 0x00)
struct FWTLWeaponTypeDamageModifier {
	enum class EWTLWeaponType WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DamageMultiplier; // 0x04(0x04)
};

// ScriptStruct WTL.EnergyFieldDamageEvent
// Size: 0x18 (Inherited: 0x10)
struct FEnergyFieldDamageEvent : FDamageEvent {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct WTL.SuffocationDamageEvent
// Size: 0x18 (Inherited: 0x10)
struct FSuffocationDamageEvent : FDamageEvent {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct WTL.MonsterDamageEvent
// Size: 0x20 (Inherited: 0x10)
struct FMonsterDamageEvent : FDamageEvent {
	enum class EWTLColliderType ColliderType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ArmorPiercingValue; // 0x14(0x04)
	bool UseArmor; // 0x18(0x01)
	bool Critical; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct WTL.MedicineDamageEvent
// Size: 0x18 (Inherited: 0x10)
struct FMedicineDamageEvent : FDamageEvent {
	int16_t MedicineID; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t EffectID; // 0x14(0x04)
};

// ScriptStruct WTL.CharacterEffectDamageEvent
// Size: 0x18 (Inherited: 0x10)
struct FCharacterEffectDamageEvent : FDamageEvent {
	enum class EWTLCharacterEffectType EffectType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct WTL.SuicideDamageEvent
// Size: 0x10 (Inherited: 0x10)
struct FSuicideDamageEvent : FDamageEvent {
};

// ScriptStruct WTL.MeleeDamageEvent
// Size: 0xc0 (Inherited: 0xb0)
struct FMeleeDamageEvent : FPointDamageEvent {
	uint16_t WeaponTypeID; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float ImpulseMultiplier; // 0xb4(0x04)
	bool Critical; // 0xb8(0x01)
	enum class EWTLColliderType ColliderType; // 0xb9(0x01)
	bool UseArmor; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	float ArmorPiercingValue; // 0xbc(0x04)
};

// ScriptStruct WTL.ItemAnimationSet
// Size: 0x18 (Inherited: 0x00)
struct FItemAnimationSet {
	struct UAnimMontage* Item; // 0x00(0x08)
	struct UAnimMontage* PawnMale; // 0x08(0x08)
	float ActionDurationWithoutAnimation; // 0x10(0x04)
	float AnimationRate; // 0x14(0x04)
};

