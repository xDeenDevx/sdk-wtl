namespace offsets
{
	namespace UWTLPDAMailMessageItem
	{
			constexpr auto cbSelect = 0x2b0; // Size: 8, Type: struct UWTLCommonCheckBox*
			constexpr auto imgPriority = 0x2b8; // Size: 8, Type: struct UImage*
			constexpr auto tbSubject = 0x2c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto ReadBrushColor = 0x2d4; // Size: 16, Type: struct FLinearColor
			constexpr auto NotReadBrushColor = 0x2e4; // Size: 16, Type: struct FLinearColor
			constexpr auto CheckedBrushColor = 0x2f4; // Size: 16, Type: struct FLinearColor
			constexpr auto ReadTextColor = 0x304; // Size: 16, Type: struct FLinearColor
			constexpr auto NotReadTextColor = 0x314; // Size: 16, Type: struct FLinearColor
			constexpr auto ReadFont = 0x328; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto NotReadFont = 0x380; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto HighPriorityColor = 0x3d8; // Size: 16, Type: struct FLinearColor
			constexpr auto CriticalPriorityColor = 0x3e8; // Size: 16, Type: struct FLinearColor
	}
} 
