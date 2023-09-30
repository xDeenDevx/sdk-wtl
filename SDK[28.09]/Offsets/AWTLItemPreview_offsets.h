namespace offsets
{
	namespace AWTLItemPreview
	{
			constexpr auto BoxComponent = 0x298; // Size: 8, Type: struct UBoxComponent*
			constexpr auto StaticMesh = 0x2a0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BackgroundPlane = 0x2a8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto SceneCapture = 0x2b0; // Size: 8, Type: struct USceneCaptureComponent2D*
			constexpr auto MuzzleAttachment = 0x2b8; // Size: 8, Type: struct UWTLWeaponAttachment*
			constexpr auto MuzzleMount = 0x2c0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto FlashlightAttachment = 0x2c8; // Size: 8, Type: struct UWTLWeaponAttachment*
			constexpr auto FlashlightMount = 0x2d0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ScopeAttachment = 0x2d8; // Size: 8, Type: struct UWTLWeaponAttachment*
			constexpr auto ScopeMount = 0x2e0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto RenderTargetSquare = 0x2e8; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto RenderTargetLandscape = 0x2f0; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto SquareTextureBackgroundPlaneScale = 0x2f8; // Size: 12, Type: struct FVector
			constexpr auto LandscapeTextureBackgroundPlaneScale = 0x304; // Size: 12, Type: struct FVector
			constexpr auto SquareItemPreviewStudioMaterial = 0x310; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto LandscapeItemPreviewStudioMaterial = 0x338; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto SquareBackgroundPlaneLocationOffset = 0x360; // Size: 12, Type: struct FVector
			constexpr auto LandscapeBackgroundPlaneLocationOffset = 0x36c; // Size: 12, Type: struct FVector
			constexpr auto Light1LocationOffset = 0x378; // Size: 12, Type: struct FVector
			constexpr auto Light2LocationOffset = 0x384; // Size: 12, Type: struct FVector
			constexpr auto ClothesHelmetZOffset = 0x390; // Size: 4, Type: float
			constexpr auto ClothesJacketZOffset = 0x394; // Size: 4, Type: float
			constexpr auto ZoomingParallax = 0x398; // Size: 1, Type: bool
			constexpr auto IntensityMultiplier = 0x39c; // Size: 4, Type: float
	}
} 
