namespace offsets
{
	namespace UReflectionCaptureComponent
	{
			constexpr auto CaptureOffsetComponent = 0x1f8; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto ReflectionSourceType = 0x200; // Size: 1, Type: enum class EReflectionSourceType
			constexpr auto MobileReflectionCompression = 0x201; // Size: 1, Type: enum class EMobileReflectionCompression
			constexpr auto Cubemap = 0x208; // Size: 8, Type: struct UTextureCube*
			constexpr auto SourceCubemapAngle = 0x210; // Size: 4, Type: float
			constexpr auto Brightness = 0x214; // Size: 4, Type: float
			constexpr auto bModifyMaxValueRGBM = 0x218; // Size: 1, Type: bool
			constexpr auto MaxValueRGBM = 0x21c; // Size: 4, Type: float
			constexpr auto CaptureOffset = 0x220; // Size: 12, Type: struct FVector
			constexpr auto MapBuildDataId = 0x22c; // Size: 16, Type: struct FGuid
			constexpr auto CachedEncodedHDRCubemap = 0x250; // Size: 8, Type: struct UTextureCube*
	}
} 
