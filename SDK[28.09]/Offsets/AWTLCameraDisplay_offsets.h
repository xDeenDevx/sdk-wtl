namespace offsets
{
	namespace AWTLCameraDisplay
	{
			constexpr auto DesiredFOV = 0x468; // Size: 4, Type: float
			constexpr auto FOVChangeSpeed = 0x46c; // Size: 4, Type: float
			constexpr auto ScreenWidget = 0x470; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto CameraPitchDesiredValue = 0x478; // Size: 4, Type: float
			constexpr auto AnimationsList = 0x480; // Size: 16, Type: struct TArray<struct FWTLDisplayAnimationSet>
			constexpr auto CharacterUsingMontage = 0x4b0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto TabletUsingMontage = 0x4b8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterButtonMontage = 0x4c0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto TabletButtonMontage = 0x4c8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto TabletWithOpenedAntennasAnim = 0x4d0; // Size: 8, Type: struct UAnimationAsset*
	}
} 
