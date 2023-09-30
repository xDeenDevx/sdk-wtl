namespace offsets
{
	namespace UDrawFrustumComponent
	{
			constexpr auto FrustumColor = 0x440; // Size: 4, Type: struct FColor
			constexpr auto FrustumAngle = 0x444; // Size: 4, Type: float
			constexpr auto FrustumAspectRatio = 0x448; // Size: 4, Type: float
			constexpr auto FrustumStartDist = 0x44c; // Size: 4, Type: float
			constexpr auto FrustumEndDist = 0x450; // Size: 4, Type: float
			constexpr auto Texture = 0x458; // Size: 8, Type: struct UTexture*
	}
} 
