namespace offsets
{
	namespace USceneCaptureComponent2D
	{
			constexpr auto ProjectionType = 0x2b0; // Size: 1, Type: enum class ECameraProjectionMode
			constexpr auto FOVAngle = 0x2b4; // Size: 4, Type: float
			constexpr auto OrthoWidth = 0x2b8; // Size: 4, Type: float
			constexpr auto TextureTarget = 0x2c0; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto CompositeMode = 0x2c8; // Size: 1, Type: enum class ESceneCaptureCompositeMode
			constexpr auto PostProcessSettings = 0x2d0; // Size: 1360, Type: struct FPostProcessSettings
			constexpr auto PostProcessBlendWeight = 0x820; // Size: 4, Type: float
			constexpr auto bOverride_CustomNearClippingPlane = 0x824; // Size: 1, Type: char
			constexpr auto CustomNearClippingPlane = 0x828; // Size: 4, Type: float
			constexpr auto bUseCustomProjectionMatrix = 0x82c; // Size: 1, Type: bool
			constexpr auto CustomProjectionMatrix = 0x830; // Size: 64, Type: struct FMatrix
			constexpr auto bEnableClipPlane = 0x870; // Size: 1, Type: bool
			constexpr auto ClipPlaneBase = 0x874; // Size: 12, Type: struct FVector
			constexpr auto ClipPlaneNormal = 0x880; // Size: 12, Type: struct FVector
			constexpr auto bCameraCutThisFrame = 0x88c; // Size: 1, Type: char
			constexpr auto bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 0x88c; // Size: 1, Type: char
			constexpr auto bDisableFlipCopyGLES = 0x890; // Size: 1, Type: bool
	}
} 
