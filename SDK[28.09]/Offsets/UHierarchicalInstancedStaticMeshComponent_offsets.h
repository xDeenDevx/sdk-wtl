namespace offsets
{
	namespace UHierarchicalInstancedStaticMeshComponent
	{
			constexpr auto SortedInstances = 0x588; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumBuiltInstances = 0x598; // Size: 4, Type: int32_t
			constexpr auto BuiltInstanceBounds = 0x5a0; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBounds = 0x5bc; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBoundsList = 0x5d8; // Size: 16, Type: struct TArray<struct FBox>
			constexpr auto bEnableDensityScaling = 0x5e8; // Size: 1, Type: char
			constexpr auto OcclusionLayerNumNodes = 0x5f0; // Size: 4, Type: int32_t
			constexpr auto CacheMeshExtendedBounds = 0x5f4; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto bDisableCollision = 0x610; // Size: 1, Type: bool
			constexpr auto InstanceCountToRender = 0x614; // Size: 4, Type: int32_t
	}
} 
