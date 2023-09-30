namespace offsets
{
	namespace UWTLHUDFPSCounter
	{
			constexpr auto hbMain = 0x268; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbFPSCounter = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto LowFPSColor = 0x298; // Size: 40, Type: struct FSlateColor
			constexpr auto MediumFPSColor = 0x2c0; // Size: 40, Type: struct FSlateColor
			constexpr auto HighFPSColor = 0x2e8; // Size: 40, Type: struct FSlateColor
			constexpr auto PositionWhenMinimapIsVisible = 0x310; // Size: 8, Type: struct FVector2D
			constexpr auto PositionWhenMinimapNotVisible = 0x318; // Size: 8, Type: struct FVector2D
	}
} 
