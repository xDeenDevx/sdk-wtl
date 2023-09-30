namespace offsets
{
	namespace UInstancedStaticMeshComponent
	{
			constexpr auto PerInstanceSMData = 0x4d0; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshInstanceData>
			constexpr auto NumCustomDataFloats = 0x4e0; // Size: 4, Type: int32_t
			constexpr auto PerInstanceSMCustomData = 0x4e8; // Size: 16, Type: struct TArray<float>
			constexpr auto InstancingRandomSeed = 0x4f8; // Size: 4, Type: int32_t
			constexpr auto InstanceStartCullDistance = 0x4fc; // Size: 4, Type: int32_t
			constexpr auto InstanceEndCullDistance = 0x500; // Size: 4, Type: int32_t
			constexpr auto InstanceReorderTable = 0x508; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumPendingLightmaps = 0x560; // Size: 4, Type: int32_t
			constexpr auto CachedMappings = 0x568; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshMappingInfo>
	}
} 
