namespace offsets
{
	namespace UWTLHUDPlayerStatus
	{
			constexpr auto pbHealth = 0x268; // Size: 8, Type: struct UWTLCommonAlphaSectionProgressBar*
			constexpr auto pbStamina = 0x270; // Size: 8, Type: struct UWTLCommonAlphaSectionProgressBar*
			constexpr auto bHunger = 0x278; // Size: 8, Type: struct UBorder*
			constexpr auto pbHunger = 0x280; // Size: 8, Type: struct UWTLCommonAlphaSectionProgressBar*
			constexpr auto tbHunger = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto bThirst = 0x290; // Size: 8, Type: struct UBorder*
			constexpr auto pbThirst = 0x298; // Size: 8, Type: struct UWTLCommonAlphaSectionProgressBar*
			constexpr auto tbThirst = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto pbOxygen = 0x2a8; // Size: 8, Type: struct UWTLCommonAlphaSectionProgressBar*
			constexpr auto wsPlayerInVehicle = 0x2b0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto wsPlayerPose = 0x2b8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto tbLevel = 0x2c0; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbPvPMode = 0x2c8; // Size: 8, Type: struct UTextBlock*
			constexpr auto imgHoldBreath = 0x2d0; // Size: 8, Type: struct UImage*
			constexpr auto imgArmorCondition = 0x2d8; // Size: 8, Type: struct UImage*
			constexpr auto imgProhibitedPvP = 0x2e0; // Size: 8, Type: struct UImage*
			constexpr auto cpChatMute = 0x2e8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto cpVoice = 0x2f0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto imgVoice = 0x2f8; // Size: 8, Type: struct UImage*
			constexpr auto imgVoiceMute = 0x300; // Size: 8, Type: struct UImage*
			constexpr auto wsTurretZoneMark = 0x308; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto m_PlayerController = 0x310; // Size: 8, Type: struct AWTLPlayerController*
			constexpr auto m_PlayerState = 0x318; // Size: 8, Type: struct AWTLPlayerState*
			constexpr auto DefaultStaminaProgressBarColor = 0x34c; // Size: 16, Type: struct FLinearColor
			constexpr auto LowStaminaProgressBarColor = 0x35c; // Size: 16, Type: struct FLinearColor
			constexpr auto ArmorMediumCondition = 0x36c; // Size: 16, Type: struct FLinearColor
			constexpr auto ArmorLowCondition = 0x37c; // Size: 16, Type: struct FLinearColor
			constexpr auto StaminaProgressBarFlickerAnimation = 0x390; // Size: 8, Type: struct UWidgetAnimation*
	}
} 
