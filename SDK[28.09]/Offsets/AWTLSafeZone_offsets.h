namespace offsets
{
	namespace AWTLSafeZone
	{
			constexpr auto SphereComponent = 0x228; // Size: 8, Type: struct USphereComponent*
			constexpr auto MeshComponent = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto NavModifierComponent = 0x238; // Size: 8, Type: struct UNavModifierComponent*
			constexpr auto ID = 0x240; // Size: 4, Type: int32_t
			constexpr auto Faction = 0x244; // Size: 1, Type: enum class EWTLFaction
			constexpr auto RedirectSafeZoneID = 0x248; // Size: 4, Type: int32_t
			constexpr auto Active = 0x24c; // Size: 1, Type: bool
			constexpr auto bNeedToHideSphereOnDeactivation = 0x24d; // Size: 1, Type: bool
			constexpr auto Type = 0x24e; // Size: 1, Type: enum class EWTLSafeZoneType
			constexpr auto CanRespawnWhenDisabled = 0x24f; // Size: 1, Type: bool
			constexpr auto bAllowToShowOnMinimap = 0x250; // Size: 1, Type: bool
			constexpr auto m_PlayerStarts = 0x258; // Size: 16, Type: struct TArray<struct AWTLPlayerStart*>
			constexpr auto m_PlayerStartsCount = 0x268; // Size: 4, Type: int32_t
	}
} 
