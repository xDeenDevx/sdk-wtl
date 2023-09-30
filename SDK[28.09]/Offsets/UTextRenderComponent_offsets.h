namespace offsets
{
	namespace UTextRenderComponent
	{
			constexpr auto Text = 0x440; // Size: 24, Type: struct FText
			constexpr auto TextMaterial = 0x458; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Font = 0x460; // Size: 8, Type: struct UFont*
			constexpr auto HorizontalAlignment = 0x468; // Size: 1, Type: enum class EHorizTextAligment
			constexpr auto VerticalAlignment = 0x469; // Size: 1, Type: enum class EVerticalTextAligment
			constexpr auto TextRenderColor = 0x46c; // Size: 4, Type: struct FColor
			constexpr auto XScale = 0x470; // Size: 4, Type: float
			constexpr auto YScale = 0x474; // Size: 4, Type: float
			constexpr auto WorldSize = 0x478; // Size: 4, Type: float
			constexpr auto InvDefaultSize = 0x47c; // Size: 4, Type: float
			constexpr auto HorizSpacingAdjust = 0x480; // Size: 4, Type: float
			constexpr auto VertSpacingAdjust = 0x484; // Size: 4, Type: float
			constexpr auto bAlwaysRenderAsText = 0x488; // Size: 1, Type: char
	}
} 
