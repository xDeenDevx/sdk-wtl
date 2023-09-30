namespace offsets
{
	namespace UWTLHUDIndicators
	{
			constexpr auto m_World = 0x268; // Size: 8, Type: struct UWorld*
			constexpr auto m_SharedData = 0x270; // Size: 8, Type: struct UWTLSharedData*
			constexpr auto cpMain = 0x278; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto wbIndicators = 0x280; // Size: 8, Type: struct UWrapBox*
			constexpr auto CharacterStateIndicatorWidgetClass = 0x2d8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CharacterEffectIndicatorWidgetClass = 0x300; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MedicineItemEffectIndicatorWidgetClass = 0x328; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto EquipmentSlotItemUseIndicatorWidgetClass = 0x350; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto bDebugShowAllCharacterStateIndicators = 0x378; // Size: 1, Type: bool
			constexpr auto bDebugShowAllCharacterEffectsIndicators = 0x379; // Size: 1, Type: bool
			constexpr auto IndicatorsWrapBoxDefaultWidth = 0x37c; // Size: 4, Type: float
			constexpr auto IndicatorsWrapBoxShorterWidth = 0x380; // Size: 4, Type: float
	}
} 
