namespace offsets
{
	namespace UWidgetInteractionComponent
	{
			constexpr auto OnHoveredWidgetChanged = 0x1f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto VirtualUserIndex = 0x218; // Size: 4, Type: int32_t
			constexpr auto PointerIndex = 0x21c; // Size: 4, Type: int32_t
			constexpr auto TraceChannel = 0x220; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto InteractionDistance = 0x224; // Size: 4, Type: float
			constexpr auto InteractionSource = 0x228; // Size: 1, Type: enum class EWidgetInteractionSource
			constexpr auto bEnableHitTesting = 0x229; // Size: 1, Type: bool
			constexpr auto bShowDebug = 0x22a; // Size: 1, Type: bool
			constexpr auto DebugSphereLineThickness = 0x22c; // Size: 4, Type: float
			constexpr auto DebugLineThickness = 0x230; // Size: 4, Type: float
			constexpr auto DebugColor = 0x234; // Size: 16, Type: struct FLinearColor
			constexpr auto CustomHitResult = 0x2c0; // Size: 140, Type: struct FHitResult
			constexpr auto LocalHitLocation = 0x34c; // Size: 8, Type: struct FVector2D
			constexpr auto LastLocalHitLocation = 0x354; // Size: 8, Type: struct FVector2D
			constexpr auto HoveredWidgetComponent = 0x360; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto LastHitResult = 0x368; // Size: 140, Type: struct FHitResult
			constexpr auto bIsHoveredWidgetInteractable = 0x3f4; // Size: 1, Type: bool
			constexpr auto bIsHoveredWidgetFocusable = 0x3f5; // Size: 1, Type: bool
			constexpr auto bIsHoveredWidgetHitTestVisible = 0x3f6; // Size: 1, Type: bool
	}
} 
