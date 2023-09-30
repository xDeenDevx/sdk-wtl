namespace offsets
{
	namespace UWTLControlledDroneScreen
	{
			constexpr auto tbSpeed = 0x268; // Size: 8, Type: struct UTextBlock*
			constexpr auto pbScanning = 0x270; // Size: 8, Type: struct UProgressBar*
			constexpr auto imgSignal1 = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto imgSignal2 = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto imgSignal3 = 0x288; // Size: 8, Type: struct UImage*
			constexpr auto pbHeight = 0x290; // Size: 8, Type: struct UProgressBar*
			constexpr auto wsSwitcher = 0x298; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto cpWarningMessage = 0x2a0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto cpScanningResult = 0x2a8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto tbScanningResultNum = 0x2b0; // Size: 8, Type: struct UTextBlock*
			constexpr auto pbCooldown = 0x2b8; // Size: 8, Type: struct UProgressBar*
			constexpr auto pbCondition = 0x2c0; // Size: 8, Type: struct UProgressBar*
			constexpr auto CameraRotation = 0x2c8; // Size: 4, Type: float
			constexpr auto tbDistance = 0x2d0; // Size: 8, Type: struct UTextBlock*
			constexpr auto pbEnergy = 0x2d8; // Size: 8, Type: struct UProgressBar*
			constexpr auto tbSerialNumber = 0x2e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto imgCircle = 0x2e8; // Size: 8, Type: struct UImage*
			constexpr auto imgArrow = 0x2f0; // Size: 8, Type: struct UImage*
			constexpr auto tbNorth = 0x2f8; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbHeight = 0x300; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbCooldown = 0x308; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbCondiiton = 0x310; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbWarningMessage = 0x318; // Size: 8, Type: struct UTextBlock*
			constexpr auto thLoadingConf = 0x320; // Size: 8, Type: struct UThrobber*
			constexpr auto imgConfLogo = 0x328; // Size: 8, Type: struct UImage*
			constexpr auto imgBSLogo = 0x330; // Size: 8, Type: struct UImage*
			constexpr auto thLoadingBS = 0x338; // Size: 8, Type: struct UThrobber*
			constexpr auto thLoadingNone = 0x340; // Size: 8, Type: struct UThrobber*
			constexpr auto imgOrigin = 0x348; // Size: 8, Type: struct UImage*
			constexpr auto imgCross = 0x350; // Size: 8, Type: struct UImage*
			constexpr auto cpSatellite = 0x358; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto imgSatellite = 0x360; // Size: 8, Type: struct UImage*
			constexpr auto imgSatelliteCross = 0x368; // Size: 8, Type: struct UImage*
			constexpr auto cpMainCanvasPanel = 0x370; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto tbDroneLocation = 0x378; // Size: 8, Type: struct UTextBlock*
			constexpr auto cpSelfDestruction = 0x380; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto bIsThirdPerson = 0x388; // Size: 1, Type: bool
			constexpr auto SuccessfulScanSound = 0x390; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto FailedScanSound = 0x3b8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto WarningSound = 0x3e0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto MainColor = 0x408; // Size: 40, Type: struct FSlateColor
			constexpr auto TargetWidget = 0x430; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto tbPongScore1 = 0x458; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbPongScore2 = 0x460; // Size: 8, Type: struct UTextBlock*
			constexpr auto imgPongPlayer1 = 0x468; // Size: 8, Type: struct UImage*
			constexpr auto imgPongPlayer2 = 0x470; // Size: 8, Type: struct UImage*
			constexpr auto imgPongBall = 0x478; // Size: 8, Type: struct UImage*
			constexpr auto PlatformSpeed = 0x480; // Size: 4, Type: float
			constexpr auto BallSpeed = 0x48c; // Size: 4, Type: float
			constexpr auto PongBallHitSound = 0x490; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto m_bShowGlitch = 0x542; // Size: 1, Type: bool
			constexpr auto MinGlitchOpacity = 0x548; // Size: 4, Type: float
			constexpr auto MaxGlitchOpacity = 0x54c; // Size: 4, Type: float
			constexpr auto m_bLineTraceIsBlocked = 0x550; // Size: 1, Type: bool
			constexpr auto m_bShowSatelliteCross = 0x551; // Size: 1, Type: bool
	}
} 
