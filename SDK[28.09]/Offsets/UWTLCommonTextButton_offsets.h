namespace offsets
{
	namespace UWTLCommonTextButton
	{
			constexpr auto tbButton = 0x340; // Size: 8, Type: struct UTextBlock*
			constexpr auto Text = 0x348; // Size: 24, Type: struct FText
			constexpr auto ButtonText = 0x360; // Size: 1, Type: enum class EWTLButtonText
			constexpr auto bUseTextFont = 0x361; // Size: 1, Type: bool
			constexpr auto TextFont = 0x368; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto bUseTextFontSize = 0x3c0; // Size: 1, Type: bool
			constexpr auto TextFontSize = 0x3c4; // Size: 4, Type: int32_t
			constexpr auto bCapitalizeText = 0x3c8; // Size: 1, Type: bool
			constexpr auto TextColor = 0x3d0; // Size: 40, Type: struct FSlateColor
	}
} 
