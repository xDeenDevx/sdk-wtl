namespace offsets
{
	namespace AWTLMonocular
	{
			constexpr auto ZoomModes = 0x458; // Size: 16, Type: struct TArray<char>
			constexpr auto HUDFont = 0x468; // Size: 8, Type: struct UFont*
			constexpr auto HUDBatteryAtlas = 0x470; // Size: 8, Type: struct UTexture2D*
			constexpr auto HUDInfoAtlas = 0x478; // Size: 8, Type: struct UTexture2D*
			constexpr auto MaxRange = 0x480; // Size: 4, Type: float
			constexpr auto m_ScopeFlareComponent = 0x620; // Size: 8, Type: struct UMaterialBillboardComponent*
			constexpr auto m_ScopeFlareMaterialInstance = 0x628; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto bIsUsingMonocular = 0x630; // Size: 1, Type: bool
			constexpr auto HandsShakingSpeed = 0x634; // Size: 4, Type: float
			constexpr auto MaxVerticalHandsShaking = 0x638; // Size: 4, Type: float
			constexpr auto MaxHorizontalHandsShaking = 0x63c; // Size: 4, Type: float
	}
} 
