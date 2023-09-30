namespace offsets
{
	namespace AWTLEffectVolume
	{
			constexpr auto m_ZoneSphere = 0x228; // Size: 8, Type: struct USphereComponent*
			constexpr auto EffectByRadiusMultiplierCurve = 0x230; // Size: 8, Type: struct UCurveFloat*
			constexpr auto MaxEffectByRadiusMultiplierCurve = 0x238; // Size: 8, Type: struct UCurveFloat*
			constexpr auto EffectType = 0x240; // Size: 1, Type: enum class EWTLCharacterEffectType
			constexpr auto EffectValuePerSecond = 0x244; // Size: 4, Type: float
			constexpr auto MaxEffectValue = 0x248; // Size: 4, Type: float
	}
} 
