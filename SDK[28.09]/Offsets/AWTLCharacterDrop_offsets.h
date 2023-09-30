namespace offsets
{
	namespace AWTLCharacterDrop
	{
			constexpr auto m_CharacterID = 0x270; // Size: 8, Type: uint64_t
			constexpr auto m_CharacterGroupID = 0x278; // Size: 8, Type: uint64_t
			constexpr auto m_CharacterClanID = 0x280; // Size: 2, Type: uint16_t
			constexpr auto m_CharacterFaction = 0x282; // Size: 1, Type: enum class EWTLFaction
			constexpr auto m_SlotsCount = 0x284; // Size: 4, Type: int32_t
			constexpr auto m_StorageContent = 0x288; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto m_SceneComponent = 0x330; // Size: 8, Type: struct USceneComponent*
			constexpr auto m_StaticMeshComponent = 0x338; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto IsHighLighted = 0x340; // Size: 1, Type: bool
	}
} 
