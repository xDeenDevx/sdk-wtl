namespace offsets
{
	namespace AWTLFortificationObject
	{
			constexpr auto ID = 0x240; // Size: 4, Type: int32_t
			constexpr auto Type = 0x244; // Size: 1, Type: enum class EWTLFortificationObjectType
			constexpr auto SlotCount = 0x245; // Size: 1, Type: char
			constexpr auto NeedSaveState = 0x246; // Size: 1, Type: bool
			constexpr auto SaveInterval = 0x248; // Size: 4, Type: float
			constexpr auto CharacterID = 0x250; // Size: 8, Type: uint64_t
			constexpr auto CharacterGroupID = 0x258; // Size: 8, Type: uint64_t
			constexpr auto CharacterClanID = 0x260; // Size: 2, Type: uint16_t
			constexpr auto Faction = 0x262; // Size: 1, Type: enum class EWTLFaction
			constexpr auto Condition = 0x264; // Size: 4, Type: int32_t
			constexpr auto Energy = 0x268; // Size: 4, Type: float
	}
} 
