namespace offsets
{
	namespace APostProcessVolume
	{
			constexpr auto Settings = 0x260; // Size: 1360, Type: struct FPostProcessSettings
			constexpr auto Priority = 0x7b0; // Size: 4, Type: float
			constexpr auto BlendRadius = 0x7b4; // Size: 4, Type: float
			constexpr auto BlendWeight = 0x7b8; // Size: 4, Type: float
			constexpr auto bEnabled = 0x7bc; // Size: 1, Type: char
			constexpr auto bUnbound = 0x7bc; // Size: 1, Type: char
	}
} 
