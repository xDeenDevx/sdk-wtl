namespace offsets
{
	namespace UWidgetComponent
	{
			constexpr auto Space = 0x468; // Size: 1, Type: enum class EWidgetSpace
			constexpr auto TimingPolicy = 0x469; // Size: 1, Type: enum class EWidgetTimingPolicy
			constexpr auto WidgetClass = 0x470; // Size: 8, Type: UUserWidget*
			constexpr auto DrawSize = 0x478; // Size: 8, Type: struct FIntPoint
			constexpr auto bManuallyRedraw = 0x480; // Size: 1, Type: bool
			constexpr auto bRedrawRequested = 0x481; // Size: 1, Type: bool
			constexpr auto RedrawTime = 0x484; // Size: 4, Type: float
			constexpr auto CurrentDrawSize = 0x490; // Size: 8, Type: struct FIntPoint
			constexpr auto bDrawAtDesiredSize = 0x498; // Size: 1, Type: bool
			constexpr auto Pivot = 0x49c; // Size: 8, Type: struct FVector2D
			constexpr auto bReceiveHardwareInput = 0x4a4; // Size: 1, Type: bool
			constexpr auto bWindowFocusable = 0x4a5; // Size: 1, Type: bool
			constexpr auto WindowVisibility = 0x4a6; // Size: 1, Type: enum class EWindowVisibility
			constexpr auto bApplyGammaCorrection = 0x4a7; // Size: 1, Type: bool
			constexpr auto OwnerPlayer = 0x4a8; // Size: 8, Type: struct ULocalPlayer*
			constexpr auto BackgroundColor = 0x4b0; // Size: 16, Type: struct FLinearColor
			constexpr auto TintColorAndOpacity = 0x4c0; // Size: 16, Type: struct FLinearColor
			constexpr auto OpacityFromTexture = 0x4d0; // Size: 4, Type: float
			constexpr auto BlendMode = 0x4d4; // Size: 1, Type: enum class EWidgetBlendMode
			constexpr auto bIsTwoSided = 0x4d5; // Size: 1, Type: bool
			constexpr auto TickWhenOffscreen = 0x4d6; // Size: 1, Type: bool
			constexpr auto BodySetup = 0x4d8; // Size: 8, Type: struct UBodySetup*
			constexpr auto TranslucentMaterial = 0x4e0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TranslucentMaterial_OneSided = 0x4e8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial = 0x4f0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial_OneSided = 0x4f8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial = 0x500; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial_OneSided = 0x508; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto RenderTarget = 0x510; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto MaterialInstance = 0x518; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto bAddedToScreen = 0x520; // Size: 1, Type: bool
			constexpr auto bEditTimeUsable = 0x521; // Size: 1, Type: bool
			constexpr auto SharedLayerName = 0x524; // Size: 8, Type: struct FName
			constexpr auto LayerZOrder = 0x52c; // Size: 4, Type: int32_t
			constexpr auto GeometryMode = 0x530; // Size: 1, Type: enum class EWidgetGeometryMode
			constexpr auto CylinderArcAngle = 0x534; // Size: 4, Type: float
			constexpr auto TickMode = 0x538; // Size: 1, Type: enum class ETickMode
			constexpr auto Widget = 0x560; // Size: 8, Type: struct UUserWidget*
	}
} 
