namespace offsets
{
	namespace AWTLSkyLevelScriptActor
	{
			constexpr auto m_DesiredWindSpeed = 0x734; // Size: 4, Type: float
			constexpr auto m_DesiredWindActiveTime = 0x738; // Size: 4, Type: float
			constexpr auto m_DesiredWindAngle = 0x740; // Size: 4, Type: float
			constexpr auto m_WindSpeedChangeSpeed = 0x744; // Size: 4, Type: float
			constexpr auto m_WindAngleChangeSpeed = 0x748; // Size: 4, Type: float
			constexpr auto bShowDebugInfo = 0x74c; // Size: 1, Type: bool
			constexpr auto CaptureComponent = 0x750; // Size: 8, Type: struct USceneCaptureComponentCube*
			constexpr auto CaptureScene = 0x758; // Size: 1, Type: bool
			constexpr auto CaptureLandscape = 0x759; // Size: 1, Type: bool
			constexpr auto CapturePosition = 0x75c; // Size: 12, Type: struct FVector
			constexpr auto CaptureTargets = 0x768; // Size: 16, Type: struct TArray<struct FWTLCaptureTarget>
			constexpr auto SunLight = 0x778; // Size: 8, Type: struct ADirectionalLight*
			constexpr auto SunAngleCurve = 0x780; // Size: 8, Type: struct UCurveFloat*
			constexpr auto SunBrightnessCurve = 0x788; // Size: 8, Type: struct UCurveFloat*
			constexpr auto SunColorCurve = 0x790; // Size: 8, Type: struct UCurveLinearColor*
			constexpr auto SunIntensity = 0x798; // Size: 4, Type: float
			constexpr auto SkyLightComponent = 0x7a0; // Size: 8, Type: struct USkyLightComponent*
			constexpr auto SkyLightBrightnessCurve = 0x7a8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto SkyLightColorCurve = 0x7b0; // Size: 8, Type: struct UCurveLinearColor*
			constexpr auto SkyLightIntensity = 0x7b8; // Size: 4, Type: float
			constexpr auto SkyLightMinLowerHemisphereIntensity = 0x7bc; // Size: 4, Type: float
			constexpr auto SkyLightMaxLowerHemisphereIntensity = 0x7c0; // Size: 4, Type: float
			constexpr auto SkyLightRecapture = 0x7c4; // Size: 1, Type: bool
			constexpr auto SkyLightRecaptureInterval = 0x7c8; // Size: 4, Type: float
			constexpr auto DaytimeCubemaps = 0x7d0; // Size: 16, Type: struct TArray<struct FWTLDaytimeCubemap>
			constexpr auto ExponentialHeightFog = 0x7e0; // Size: 8, Type: struct AExponentialHeightFog*
			constexpr auto ExponentialFogDesityCurve = 0x7e8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ExponentialFogInscatteringColorCurve = 0x7f0; // Size: 8, Type: struct UCurveLinearColor*
			constexpr auto CloudsIntensityCurve = 0x7f8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto UpdateReflectionCaptures = 0x800; // Size: 1, Type: bool
			constexpr auto ReflectionCaptureTimerInterval = 0x804; // Size: 4, Type: float
			constexpr auto ReflectionCaptureMaxUpdatesPerIteration = 0x808; // Size: 4, Type: int32_t
			constexpr auto ReflectionCaptureTimeDelta = 0x80c; // Size: 4, Type: float
			constexpr auto ReflectionCaptureMaxDistance = 0x810; // Size: 4, Type: float
			constexpr auto WindSource = 0x818; // Size: 8, Type: struct AWindDirectionalSource*
			constexpr auto WindMinGustAmountMin = 0x820; // Size: 4, Type: float
			constexpr auto WindMinGustAmountMax = 0x824; // Size: 4, Type: float
			constexpr auto WindMaxGustAmountMin = 0x828; // Size: 4, Type: float
			constexpr auto WindMaxGustAmountMax = 0x82c; // Size: 4, Type: float
			constexpr auto WindSpeedMin = 0x830; // Size: 4, Type: float
			constexpr auto WindSpeedMax = 0x834; // Size: 4, Type: float
			constexpr auto WindActiveTimeMin = 0x838; // Size: 4, Type: float
			constexpr auto WindActiveTimeMax = 0x83c; // Size: 4, Type: float
			constexpr auto WindChangeSpeedMin = 0x840; // Size: 4, Type: float
			constexpr auto WindChangeSpeedMax = 0x844; // Size: 4, Type: float
	}
} 
