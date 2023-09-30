namespace offsets
{
	namespace USplineMeshComponent
	{
			constexpr auto SplineParams = 0x4d8; // Size: 88, Type: struct FSplineMeshParams
			constexpr auto SplineUpDir = 0x530; // Size: 12, Type: struct FVector
			constexpr auto SplineBoundaryMin = 0x53c; // Size: 4, Type: float
			constexpr auto CachedMeshBodySetupGuid = 0x540; // Size: 16, Type: struct FGuid
			constexpr auto BodySetup = 0x550; // Size: 8, Type: struct UBodySetup*
			constexpr auto SplineBoundaryMax = 0x558; // Size: 4, Type: float
			constexpr auto bAllowSplineEditingPerInstance = 0x55c; // Size: 1, Type: char
			constexpr auto bSmoothInterpRollScale = 0x55c; // Size: 1, Type: char
			constexpr auto bMeshDirty = 0x55c; // Size: 1, Type: char
			constexpr auto ForwardAxis = 0x55d; // Size: 1, Type: enum class ESplineMeshAxis
			constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x560; // Size: 4, Type: float
	}
} 
