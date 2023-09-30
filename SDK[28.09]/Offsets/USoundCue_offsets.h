namespace offsets
{
	namespace USoundCue
	{
			constexpr auto bPrimeOnLoad = 0x1b8; // Size: 1, Type: char
			constexpr auto FirstNode = 0x1c0; // Size: 8, Type: struct USoundNode*
			constexpr auto VolumeMultiplier = 0x1c8; // Size: 4, Type: float
			constexpr auto PitchMultiplier = 0x1cc; // Size: 4, Type: float
			constexpr auto AttenuationOverrides = 0x1d0; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto SubtitlePriority = 0x570; // Size: 4, Type: float
			constexpr auto bOverrideAttenuation = 0x578; // Size: 1, Type: char
			constexpr auto bExcludeFromRandomNodeBranchCulling = 0x578; // Size: 1, Type: char
			constexpr auto CookedQualityIndex = 0x57c; // Size: 4, Type: int32_t
			constexpr auto bHasPlayWhenSilent = 0x580; // Size: 1, Type: char
	}
} 
