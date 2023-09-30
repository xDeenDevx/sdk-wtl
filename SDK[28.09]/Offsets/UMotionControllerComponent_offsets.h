namespace offsets
{
	namespace UMotionControllerComponent
	{
			constexpr auto PlayerIndex = 0x440; // Size: 4, Type: int32_t
			constexpr auto hand = 0x444; // Size: 1, Type: enum class EControllerHand
			constexpr auto MotionSource = 0x448; // Size: 8, Type: struct FName
			constexpr auto bDisableLowLatencyUpdate = 0x450; // Size: 1, Type: char
			constexpr auto CurrentTrackingStatus = 0x454; // Size: 1, Type: enum class ETrackingStatus
			constexpr auto bDisplayDeviceModel = 0x455; // Size: 1, Type: bool
			constexpr auto DisplayModelSource = 0x458; // Size: 8, Type: struct FName
			constexpr auto CustomDisplayMesh = 0x460; // Size: 8, Type: struct UStaticMesh*
			constexpr auto DisplayMeshMaterialOverrides = 0x468; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto DisplayComponent = 0x4e0; // Size: 8, Type: struct UPrimitiveComponent*
	}
} 
