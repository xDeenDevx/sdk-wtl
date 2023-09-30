namespace offsets
{
	namespace AWTLAICharacter
	{
			constexpr auto WeaponTypeDamageMultipliers = 0x698; // Size: 80, Type: struct TMap<enum class EWTLWeaponType, float>
			constexpr auto PhysicalSurface = 0x6e8; // Size: 1, Type: enum class EPhysicalSurface
			constexpr auto Level = 0x6e9; // Size: 1, Type: char
			constexpr auto HeadArmor = 0x6ec; // Size: 4, Type: float
			constexpr auto BodyArmor = 0x6f0; // Size: 4, Type: float
			constexpr auto ArmsArmor = 0x6f4; // Size: 4, Type: float
			constexpr auto LegsArmor = 0x6f8; // Size: 4, Type: float
			constexpr auto FeetArmor = 0x6fc; // Size: 4, Type: float
			constexpr auto LifespanAfterDeath = 0x700; // Size: 4, Type: float
			constexpr auto IsBurst = 0x704; // Size: 1, Type: bool
			constexpr auto PercentDamageBurst = 0x705; // Size: 1, Type: char
			constexpr auto TakeDamageBurst = 0x708; // Size: 4, Type: float
			constexpr auto MinLevelBurst = 0x70c; // Size: 1, Type: char
			constexpr auto MaxLevelBurst = 0x70d; // Size: 1, Type: char
			constexpr auto m_PublicStorageContent = 0x710; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto m_SummaryStorageContent = 0x7b8; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto m_PrivateStorageContent = 0x860; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto AdditionalLoot = 0x908; // Size: 16, Type: struct TArray<struct FWTLItemDropInfo>
			constexpr auto MaxLevel = 0x918; // Size: 1, Type: char
			constexpr auto ExperienceDropCountMultiplierDelta = 0x91c; // Size: 4, Type: float
			constexpr auto ExperienceDropChanceMultiplierDelta = 0x920; // Size: 4, Type: float
			constexpr auto m_MultiplierParameters = 0x924; // Size: 4, Type: float
			constexpr auto m_LocationDead = 0x928; // Size: 12, Type: struct FVector
			constexpr auto m_Health = 0x934; // Size: 4, Type: float
			constexpr auto m_bIsInStealthMode = 0x938; // Size: 1, Type: bool
			constexpr auto AICharacterID = 0x93c; // Size: 4, Type: int32_t
			constexpr auto IDIcon = 0x940; // Size: 1, Type: char
			constexpr auto MeshPhysicsAsset = 0x948; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto OffsetRotationMesh = 0x950; // Size: 12, Type: struct FRotator
			constexpr auto DangerLevel = 0x95c; // Size: 4, Type: float
			constexpr auto KillZ = 0x960; // Size: 4, Type: float
	}
} 
