namespace offsets
{
	namespace USkyLightComponent
	{
			constexpr auto bRealTimeCapture = 0x228; // Size: 1, Type: bool
			constexpr auto SourceType = 0x229; // Size: 1, Type: enum class ESkyLightSourceType
			constexpr auto Cubemap = 0x230; // Size: 8, Type: struct UTextureCube*
			constexpr auto SourceCubemapAngle = 0x238; // Size: 4, Type: float
			constexpr auto CubemapResolution = 0x23c; // Size: 4, Type: int32_t
			constexpr auto SkyDistanceThreshold = 0x240; // Size: 4, Type: float
			constexpr auto bCaptureEmissiveOnly = 0x244; // Size: 1, Type: bool
			constexpr auto bLowerHemisphereIsBlack = 0x245; // Size: 1, Type: bool
			constexpr auto LowerHemisphereColor = 0x248; // Size: 16, Type: struct FLinearColor
			constexpr auto OcclusionMaxDistance = 0x258; // Size: 4, Type: float
			constexpr auto Contrast = 0x25c; // Size: 4, Type: float
			constexpr auto OcclusionExponent = 0x260; // Size: 4, Type: float
			constexpr auto MinOcclusion = 0x264; // Size: 4, Type: float
			constexpr auto OcclusionTint = 0x268; // Size: 4, Type: struct FColor
			constexpr auto bCloudAmbientOcclusion = 0x26c; // Size: 1, Type: char
			constexpr auto CloudAmbientOcclusionStrength = 0x270; // Size: 4, Type: float
			constexpr auto CloudAmbientOcclusionExtent = 0x274; // Size: 4, Type: float
			constexpr auto CloudAmbientOcclusionMapResolutionScale = 0x278; // Size: 4, Type: float
			constexpr auto CloudAmbientOcclusionApertureScale = 0x27c; // Size: 4, Type: float
			constexpr auto OcclusionCombineMode = 0x280; // Size: 1, Type: enum class EOcclusionCombineMode
			constexpr auto BlendDestinationCubemap = 0x338; // Size: 8, Type: struct UTextureCube*
	}
} 
