namespace offsets
{
	namespace UWTLCommonCountdownWindow
	{
			constexpr auto bBackgroundBlur = 0x260; // Size: 8, Type: struct UBackgroundBlur*
			constexpr auto rtbCountDownTitle = 0x268; // Size: 8, Type: struct UWTLRichTextBlock*
			constexpr auto ucCountdownSlider = 0x270; // Size: 8, Type: struct UWTLCommonCountdownSlider*
			constexpr auto tbCountDown = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto ucBtnCancel = 0x280; // Size: 8, Type: struct UWTLCommonHotkeyButton*
			constexpr auto CountdownTitleText = 0x2c0; // Size: 24, Type: struct FText
			constexpr auto Timeout = 0x2d8; // Size: 4, Type: int32_t
			constexpr auto bIsBlockCancelButton = 0x2dc; // Size: 1, Type: bool
			constexpr auto CancelActionFunctionInfo = 0x2e0; // Size: 24, Type: struct FWTLUFunctionInfo
			constexpr auto CountdownActionFunctionInfo = 0x2f8; // Size: 24, Type: struct FWTLUFunctionInfo
	}
} 
