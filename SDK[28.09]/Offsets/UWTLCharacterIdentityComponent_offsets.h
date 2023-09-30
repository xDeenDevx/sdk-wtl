namespace offsets
{
	namespace UWTLCharacterIdentityComponent
	{
			constexpr auto m_IdentificationMemory = 0x4f8; // Size: 80, Type: struct TMap<struct AActor*, struct FWTLIdentificationMemoryElement>
			constexpr auto m_MarkersMemory = 0x548; // Size: 16, Type: struct TArray<struct FWTLMarkerMemoryElement>
			constexpr auto m_Font = 0x558; // Size: 8, Type: struct UFont*
			constexpr auto m_IdentificationIconsAtlas = 0x560; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_IdentificationAIIconsAtlas = 0x568; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_HealthbarSliceTexture = 0x570; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_BorderTexture = 0x578; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_MobileResurrectionPointIconTexture = 0x580; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_MobileHealPointIconTexture = 0x588; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_ElectronicBaitTexture = 0x590; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_FortificationSafeZoneJammerTexture = 0x598; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_ConfederationIconTexture = 0x5a0; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_BlackSunsetIconTexture = 0x5a8; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_PVPEnabledIconTexture = 0x5b0; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_FounderIconTexture = 0x5b8; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_DroneIconTexture = 0x5c0; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_MortarIconTexture = 0x5c8; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_ConfederationHealthbarLogo = 0x5d0; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_BlackSunsetHealthbarLogo = 0x5d8; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_HealthbarOnlyBackground = 0x5e0; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_ClanMembersSimplifiedIcon = 0x5e8; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_ClanCommanderSimplifiedIcon = 0x5f0; // Size: 8, Type: struct UTexture2D*
			constexpr auto m_CharacterClassIcons = 0x5f8; // Size: 80, Type: struct TMap<enum class EWTLCharacterClass, struct FCanvasIcon>
			constexpr auto m_CharacterStaffIcons = 0x648; // Size: 80, Type: struct TMap<enum class EWTLPlayerType, struct FCanvasIcon>
			constexpr auto m_CharacterEffectIcons = 0x698; // Size: 80, Type: struct TMap<enum class EWTLCharacterEffectType, struct FCanvasIcon>
			constexpr auto MemoryAlphaColorCurve = 0x740; // Size: 8, Type: struct UCurveFloat*
			constexpr auto FriendTextColor = 0x748; // Size: 16, Type: struct FLinearColor
			constexpr auto NeutralTextColor = 0x758; // Size: 16, Type: struct FLinearColor
			constexpr auto EnemyTextColor = 0x768; // Size: 16, Type: struct FLinearColor
			constexpr auto AgressorTextColor = 0x778; // Size: 16, Type: struct FLinearColor
			constexpr auto FriendClanTextColor = 0x788; // Size: 16, Type: struct FLinearColor
			constexpr auto NeutralClanTextColor = 0x798; // Size: 16, Type: struct FLinearColor
			constexpr auto EnemyClanTextColor = 0x7a8; // Size: 16, Type: struct FLinearColor
			constexpr auto GroupMemberNameColor = 0x7b8; // Size: 16, Type: struct FLinearColor
			constexpr auto ClanMemberNameColor = 0x7c8; // Size: 16, Type: struct FLinearColor
			constexpr auto ReputationColorCurve = 0x7d8; // Size: 8, Type: struct UCurveLinearColor*
			constexpr auto IconTradeForExperienceColor = 0x7e0; // Size: 16, Type: struct FLinearColor
			constexpr auto MonsterDangerLevelColorNone = 0x7f0; // Size: 4, Type: struct FColor
			constexpr auto MonsterDangerLevelColorLow = 0x7f4; // Size: 4, Type: struct FColor
			constexpr auto MonsterDangerLevelColorBelowNormal = 0x7f8; // Size: 4, Type: struct FColor
			constexpr auto MonsterDangerLevelColorNormal = 0x7fc; // Size: 4, Type: struct FColor
			constexpr auto MonsterDangerLevelColorAboveNormal = 0x800; // Size: 4, Type: struct FColor
			constexpr auto MonsterDangerLevelColorHigh = 0x804; // Size: 4, Type: struct FColor
			constexpr auto MonsterDangerLevelColorCritical = 0x808; // Size: 4, Type: struct FColor
			constexpr auto IdentityConeCheckInterval = 0x80c; // Size: 4, Type: float
			constexpr auto DistanceDependentIdentityWidgetOffset = 0x810; // Size: 4, Type: float
			constexpr auto IdentificationWidgetMinimumScale = 0x814; // Size: 4, Type: float
			constexpr auto IdentificationWidgetMaximumScale = 0x818; // Size: 4, Type: float
			constexpr auto IdentificationVerticalScreenPositionTreshold = 0x81c; // Size: 4, Type: float
			constexpr auto IdentityGainPerSec = 0x824; // Size: 4, Type: float
			constexpr auto IdentityCooldownPerSec = 0x828; // Size: 4, Type: float
			constexpr auto IdentityLimit = 0x82c; // Size: 4, Type: float
			constexpr auto IdentityLevelToSpot = 0x830; // Size: 4, Type: float
			constexpr auto FarScreenRadiusStart = 0x834; // Size: 4, Type: float
			constexpr auto FarScreenRadiusEnd = 0x838; // Size: 4, Type: float
			constexpr auto bIsDebugEnabled = 0x83c; // Size: 1, Type: bool
			constexpr auto bIsIdentityEnabled = 0x83d; // Size: 1, Type: bool
			constexpr auto bIsPlayersIdentityEnabled = 0x83e; // Size: 1, Type: bool
			constexpr auto bIsMonstersIdentityEnabled = 0x83f; // Size: 1, Type: bool
			constexpr auto bIsLevelObjectsIdentityEnabled = 0x840; // Size: 1, Type: bool
			constexpr auto bIsNPCIdentityEnabled = 0x841; // Size: 1, Type: bool
			constexpr auto bIsEnemyNPCIdentityEnabled = 0x842; // Size: 1, Type: bool
			constexpr auto IdentityDistance = 0x844; // Size: 4, Type: float
			constexpr auto FOVConeRadiusDivider = 0x848; // Size: 4, Type: float
			constexpr auto IdentificationScaleup = 0x84c; // Size: 4, Type: float
			constexpr auto SimplifiedIdentificationType = 0x850; // Size: 1, Type: enum class EWTLSimplifiedIdentificationType
			constexpr auto IdentificationTransparency = 0x854; // Size: 4, Type: float
			constexpr auto IdentificationOverheadOffsetByDistanceCurve = 0x858; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
	}
} 
