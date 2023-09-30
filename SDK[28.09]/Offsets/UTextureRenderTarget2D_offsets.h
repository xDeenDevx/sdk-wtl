namespace offsets
{
	namespace UTextureRenderTarget2D
	{
			constexpr auto SizeX = 0xe0; // Size: 4, Type: int32_t
			constexpr auto SizeY = 0xe4; // Size: 4, Type: int32_t
			constexpr auto ClearColor = 0xe8; // Size: 16, Type: struct FLinearColor
			constexpr auto AddressX = 0xf8; // Size: 1, Type: enum class TextureAddress
			constexpr auto AddressY = 0xf9; // Size: 1, Type: enum class TextureAddress
			constexpr auto bForceLinearGamma = 0xfa; // Size: 1, Type: char
			constexpr auto bHDR = 0xfa; // Size: 1, Type: char
			constexpr auto bGPUSharedFlag = 0xfa; // Size: 1, Type: char
			constexpr auto RenderTargetFormat = 0xfb; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto bAutoGenerateMips = 0xfc; // Size: 1, Type: char
			constexpr auto MipsSamplerFilter = 0xfd; // Size: 1, Type: enum class TextureFilter
			constexpr auto MipsAddressU = 0xfe; // Size: 1, Type: enum class TextureAddress
			constexpr auto MipsAddressV = 0xff; // Size: 1, Type: enum class TextureAddress
			constexpr auto OverrideFormat = 0x100; // Size: 1, Type: enum class EPixelFormat
	}
} 
