namespace offsets
{
	namespace AWTLRadioBomb
	{
			constexpr auto IsDebug = 0x270; // Size: 1, Type: bool
			constexpr auto Mesh = 0x278; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DamageZoneMesh = 0x280; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ExplosionFX = 0x288; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto HearingDamageDuration = 0x2b0; // Size: 4, Type: float
			constexpr auto DeminingActivityAsset = 0x2b8; // Size: 8, Type: AWTLDeminingActivity*
			constexpr auto ExplosionAdditionalRotation = 0x2c0; // Size: 12, Type: struct FRotator
			constexpr auto FriendBombOutline = 0x2cc; // Size: 1, Type: char
			constexpr auto m_Activity = 0x2d0; // Size: 8, Type: struct AWTLDeminingActivity*
			constexpr auto m_bSpawnExplosion = 0x2d8; // Size: 1, Type: bool
			constexpr auto m_bActivated = 0x2d9; // Size: 1, Type: bool
			constexpr auto m_bCharacterInPVP = 0x2da; // Size: 1, Type: bool
			constexpr auto m_Faction = 0x2e4; // Size: 1, Type: enum class EWTLFaction
			constexpr auto m_OwnerName = 0x2e8; // Size: 16, Type: struct FString
	}
} 
