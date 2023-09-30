namespace offsets
{
	namespace UTextureRenderTargetVolume
	{
			constexpr auto SizeX = 0xe0; // Size: 4, Type: int32_t
			constexpr auto SizeY = 0xe4; // Size: 4, Type: int32_t
			constexpr auto SizeZ = 0xe8; // Size: 4, Type: int32_t
			constexpr auto ClearColor = 0xec; // Size: 16, Type: struct FLinearColor
			constexpr auto OverrideFormat = 0xfc; // Size: 1, Type: enum class EPixelFormat
			constexpr auto bHDR = 0xfd; // Size: 1, Type: char
			constexpr auto bForceLinearGamma = 0xfd; // Size: 1, Type: char
	}
} 
