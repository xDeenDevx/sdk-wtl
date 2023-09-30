namespace offsets
{
	namespace UArrowComponent
	{
			constexpr auto ArrowColor = 0x440; // Size: 4, Type: struct FColor
			constexpr auto ArrowSize = 0x444; // Size: 4, Type: float
			constexpr auto ArrowLength = 0x448; // Size: 4, Type: float
			constexpr auto ScreenSize = 0x44c; // Size: 4, Type: float
			constexpr auto bIsScreenSizeScaled = 0x450; // Size: 1, Type: char
			constexpr auto bTreatAsASprite = 0x450; // Size: 1, Type: char
	}
} 
