namespace offsets
{
	namespace AWTLPortal
	{
			constexpr auto Active = 0x238; // Size: 1, Type: bool
			constexpr auto AllowedFactions = 0x240; // Size: 16, Type: struct TArray<enum class EWTLFaction>
			constexpr auto SphereComponent = 0x250; // Size: 8, Type: struct USphereComponent*
			constexpr auto MeshComponent = 0x258; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto NavModifierComponent = 0x260; // Size: 8, Type: struct UNavModifierComponent*
			constexpr auto LocationID = 0x268; // Size: 4, Type: int32_t
			constexpr auto ID = 0x26c; // Size: 4, Type: int32_t
			constexpr auto AlwaysVisibleOnMap = 0x270; // Size: 1, Type: bool
			constexpr auto ExitPortal = 0x271; // Size: 1, Type: bool
			constexpr auto RedirectSafeZone = 0x274; // Size: 4, Type: int32_t
			constexpr auto MinCharacterLevel = 0x278; // Size: 1, Type: char
			constexpr auto MaxCharacterLevel = 0x279; // Size: 1, Type: char
			constexpr auto m_PlayerStarts = 0x2a0; // Size: 16, Type: struct TArray<struct AWTLPlayerStart*>
	}
} 
