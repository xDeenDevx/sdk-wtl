namespace offsets
{
	namespace UCableComponent
	{
			constexpr auto bAttachStart = 0x468; // Size: 1, Type: bool
			constexpr auto bAttachEnd = 0x469; // Size: 1, Type: bool
			constexpr auto AttachEndTo = 0x470; // Size: 40, Type: struct FComponentReference
			constexpr auto AttachEndToSocketName = 0x498; // Size: 8, Type: struct FName
			constexpr auto EndLocation = 0x4a0; // Size: 12, Type: struct FVector
			constexpr auto CableLength = 0x4ac; // Size: 4, Type: float
			constexpr auto NumSegments = 0x4b0; // Size: 4, Type: int32_t
			constexpr auto SubstepTime = 0x4b4; // Size: 4, Type: float
			constexpr auto SolverIterations = 0x4b8; // Size: 4, Type: int32_t
			constexpr auto bEnableStiffness = 0x4bc; // Size: 1, Type: bool
			constexpr auto bUseSubstepping = 0x4bd; // Size: 1, Type: bool
			constexpr auto bSkipCableUpdateWhenNotVisible = 0x4be; // Size: 1, Type: bool
			constexpr auto bSkipCableUpdateWhenNotOwnerRecentlyRendered = 0x4bf; // Size: 1, Type: bool
			constexpr auto bEnableCollision = 0x4c0; // Size: 1, Type: bool
			constexpr auto CollisionFriction = 0x4c4; // Size: 4, Type: float
			constexpr auto CableForce = 0x4c8; // Size: 12, Type: struct FVector
			constexpr auto CableGravityScale = 0x4d4; // Size: 4, Type: float
			constexpr auto CableWidth = 0x4d8; // Size: 4, Type: float
			constexpr auto NumSides = 0x4dc; // Size: 4, Type: int32_t
			constexpr auto TileMaterial = 0x4e0; // Size: 4, Type: float
	}
} 
