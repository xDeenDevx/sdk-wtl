namespace offsets
{
	namespace AWTLPlaceableStuff
	{
			constexpr auto m_CharacterID = 0x290; // Size: 8, Type: uint64_t
			constexpr auto m_CharacterName = 0x298; // Size: 16, Type: struct FString
			constexpr auto m_CharacterGroupID = 0x2a8; // Size: 8, Type: uint64_t
			constexpr auto m_CharacterClanID = 0x2b0; // Size: 2, Type: uint16_t
			constexpr auto m_CharacterFaction = 0x2b2; // Size: 1, Type: enum class EWTLFaction
			constexpr auto CanTakeDamageFromFactionMembers = 0x360; // Size: 1, Type: bool
			constexpr auto DamageToConditionMultiplier = 0x364; // Size: 4, Type: float
			constexpr auto ExplosionDamageMultiplier = 0x368; // Size: 4, Type: float
			constexpr auto m_Condition = 0x36c; // Size: 4, Type: uint32_t
			constexpr auto StuffID = 0x370; // Size: 4, Type: int32_t
			constexpr auto SaveStateToDB = 0x374; // Size: 1, Type: bool
			constexpr auto SaveStateToDBInterval = 0x378; // Size: 4, Type: float
			constexpr auto FullStuffName = 0x380; // Size: 24, Type: struct FText
	}
} 
