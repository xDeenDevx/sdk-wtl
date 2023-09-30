namespace offsets
{
	namespace AWTLDynamicSkyLevelScriptActor
	{
			constexpr auto SkyDayTime = 0x728; // Size: 4, Type: float
			constexpr auto SkyDayTimeOffset = 0x72c; // Size: 4, Type: float
			constexpr auto m_DesiredWindSpeed = 0x730; // Size: 4, Type: float
			constexpr auto m_DesiredWindActiveTime = 0x738; // Size: 4, Type: float
			constexpr auto m_DesiredWindAngle = 0x740; // Size: 4, Type: float
			constexpr auto m_WindSpeedChangeSpeed = 0x744; // Size: 4, Type: float
			constexpr auto m_WindAngleChangeSpeed = 0x748; // Size: 4, Type: float
			constexpr auto bCanWeatherChangeOnThisLocation = 0x74c; // Size: 1, Type: bool
			constexpr auto bCanUseRainOnThisLocation = 0x74d; // Size: 1, Type: bool
			constexpr auto RainDensityScaleMultiplier = 0x750; // Size: 4, Type: float
			constexpr auto m_WeatherChangeStartServerTime = 0x788; // Size: 4, Type: float
			constexpr auto m_WeatherChangeEndServerTime = 0x78c; // Size: 4, Type: float
			constexpr auto m_CurrentWeather = 0x790; // Size: 1, Type: enum class EWTLWeatherType
			constexpr auto m_TransitionWeather = 0x791; // Size: 1, Type: enum class EWTLWeatherType
			constexpr auto LightingTargetPointsCount = 0x7a8; // Size: 4, Type: int32_t
			constexpr auto RainLightingIntervalMin = 0x7ac; // Size: 4, Type: float
			constexpr auto RainLightingIntervalMax = 0x7b0; // Size: 4, Type: float
			constexpr auto RainLighingChance = 0x7b4; // Size: 4, Type: float
			constexpr auto HeavyRainLightingIntervalMin = 0x7b8; // Size: 4, Type: float
			constexpr auto HeavyRainLightingIntervalMax = 0x7bc; // Size: 4, Type: float
			constexpr auto HeavyRainLighingChance = 0x7c0; // Size: 4, Type: float
			constexpr auto UseWetSurfaceForLandscape = 0x7c4; // Size: 1, Type: bool
			constexpr auto bShowDebugInfo = 0x800; // Size: 1, Type: bool
			constexpr auto DebugWeatherChangeSpeed = 0x804; // Size: 4, Type: float
			constexpr auto CaptureComponent = 0x808; // Size: 8, Type: struct USceneCaptureComponentCube*
			constexpr auto CaptureScene = 0x810; // Size: 1, Type: bool
			constexpr auto CaptureTargets = 0x818; // Size: 16, Type: struct TArray<struct FWTLCaptureTarget>
			constexpr auto SunLight = 0x828; // Size: 8, Type: struct UDirectionalLightComponent*
			constexpr auto MoonLight = 0x830; // Size: 8, Type: struct UDirectionalLightComponent*
			constexpr auto SkyLightComponent = 0x838; // Size: 8, Type: struct USkyLightComponent*
			constexpr auto ExponentialHeightFog = 0x840; // Size: 8, Type: struct AExponentialHeightFog*
			constexpr auto ExponentialFogDesityCurve = 0x848; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ExponentialFogInscatteringColorCurve = 0x850; // Size: 8, Type: struct UCurveLinearColor*
			constexpr auto WindSource = 0x860; // Size: 8, Type: struct AWindDirectionalSource*
			constexpr auto CanUseWindOnThisLocation = 0x868; // Size: 1, Type: bool
			constexpr auto WindMinGustAmountMin = 0x86c; // Size: 4, Type: float
			constexpr auto WindMinGustAmountMax = 0x870; // Size: 4, Type: float
			constexpr auto WindMaxGustAmountMin = 0x874; // Size: 4, Type: float
			constexpr auto WindMaxGustAmountMax = 0x878; // Size: 4, Type: float
			constexpr auto WindSpeedMin = 0x87c; // Size: 4, Type: float
			constexpr auto WindSpeedMax = 0x880; // Size: 4, Type: float
			constexpr auto WindActiveTimeMin = 0x884; // Size: 4, Type: float
			constexpr auto WindActiveTimeMax = 0x888; // Size: 4, Type: float
			constexpr auto WindChangeSpeedMin = 0x88c; // Size: 4, Type: float
			constexpr auto WindChangeSpeedMax = 0x890; // Size: 4, Type: float
			constexpr auto WindChangeAngleSpeedMin = 0x894; // Size: 4, Type: float
			constexpr auto WindChangeAngleSpeedMax = 0x898; // Size: 4, Type: float
			constexpr auto WindMinSpeedWithClearWeather = 0x89c; // Size: 4, Type: float
			constexpr auto WindMaxSpeedWithClearWeather = 0x8a0; // Size: 4, Type: float
			constexpr auto WindMinSpeedWithCloudyWeather = 0x8a4; // Size: 4, Type: float
			constexpr auto WindMaxSpeedWithCloudyWeather = 0x8a8; // Size: 4, Type: float
			constexpr auto WindMinSpeedWithRainWeather = 0x8ac; // Size: 4, Type: float
			constexpr auto WindMaxSpeedWithRainWeather = 0x8b0; // Size: 4, Type: float
			constexpr auto WindMinSpeedWithHeavyRainWeather = 0x8b4; // Size: 4, Type: float
			constexpr auto WindMaxSpeedWithHeavyRainWeather = 0x8b8; // Size: 4, Type: float
	}
} 
