namespace offsets
{
	namespace UWTLFlashlightMountComponent
	{
			constexpr auto FlashDeltaTime = 0x298; // Size: 4, Type: float
			constexpr auto LightComponent = 0x2a0; // Size: 8, Type: struct USpotLightComponent*
			constexpr auto FlashlightMesh = 0x2a8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ToggleSoundEvent = 0x2b0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto BrokenFlashlightEvent = 0x2d8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto FaultyFlashlightCurve = 0x300; // Size: 8, Type: struct UCurveFloat*
			constexpr auto MinTimeBetweenFlashes = 0x308; // Size: 4, Type: float
			constexpr auto MaxTimeBetweenFlashes = 0x30c; // Size: 4, Type: float
			constexpr auto bBrokenFlash = 0x310; // Size: 1, Type: bool
	}
} 
