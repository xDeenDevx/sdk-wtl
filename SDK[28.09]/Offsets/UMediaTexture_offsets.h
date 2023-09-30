namespace offsets
{
	namespace UMediaTexture
	{
			constexpr auto AddressX = 0xd8; // Size: 1, Type: enum class TextureAddress
			constexpr auto AddressY = 0xd9; // Size: 1, Type: enum class TextureAddress
			constexpr auto AutoClear = 0xda; // Size: 1, Type: bool
			constexpr auto ClearColor = 0xdc; // Size: 16, Type: struct FLinearColor
			constexpr auto EnableGenMips = 0xec; // Size: 1, Type: bool
			constexpr auto NumMips = 0xed; // Size: 1, Type: char
			constexpr auto NewStyleOutput = 0xee; // Size: 1, Type: bool
			constexpr auto OutputFormat = 0xef; // Size: 1, Type: enum class MediaTextureOutputFormat
			constexpr auto CurrentAspectRatio = 0xf0; // Size: 4, Type: float
			constexpr auto CurrentOrientation = 0xf4; // Size: 1, Type: enum class MediaTextureOrientation
			constexpr auto MediaPlayer = 0xf8; // Size: 8, Type: struct UMediaPlayer*
	}
} 
