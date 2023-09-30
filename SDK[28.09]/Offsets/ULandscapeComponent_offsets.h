namespace offsets
{
	namespace ULandscapeComponent
	{
			constexpr auto SectionBaseX = 0x440; // Size: 4, Type: int32_t
			constexpr auto SectionBaseY = 0x444; // Size: 4, Type: int32_t
			constexpr auto ComponentSizeQuads = 0x448; // Size: 4, Type: int32_t
			constexpr auto SubsectionSizeQuads = 0x44c; // Size: 4, Type: int32_t
			constexpr auto NumSubsections = 0x450; // Size: 4, Type: int32_t
			constexpr auto OverrideMaterial = 0x458; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OverrideHoleMaterial = 0x460; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OverrideMaterials = 0x468; // Size: 16, Type: struct TArray<struct FLandscapeComponentMaterialOverride>
			constexpr auto MaterialInstances = 0x478; // Size: 16, Type: struct TArray<struct UMaterialInstanceConstant*>
			constexpr auto MaterialInstancesDynamic = 0x488; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto LODIndexToMaterialIndex = 0x498; // Size: 16, Type: struct TArray<int8_t>
			constexpr auto MaterialIndexToDisabledTessellationMaterial = 0x4a8; // Size: 16, Type: struct TArray<int8_t>
			constexpr auto XYOffsetmapTexture = 0x4b8; // Size: 8, Type: struct UTexture2D*
			constexpr auto WeightmapScaleBias = 0x4c0; // Size: 16, Type: struct FVector4
			constexpr auto WeightmapSubsectionOffset = 0x4d0; // Size: 4, Type: float
			constexpr auto HeightmapScaleBias = 0x4e0; // Size: 16, Type: struct FVector4
			constexpr auto CachedLocalBox = 0x4f0; // Size: 28, Type: struct FBox
			constexpr auto CollisionComponent = 0x50c; // Size: 28, Type: 
			constexpr auto HeightmapTexture = 0x528; // Size: 8, Type: struct UTexture2D*
			constexpr auto WeightmapLayerAllocations = 0x530; // Size: 16, Type: struct TArray<struct FWeightmapLayerAllocationInfo>
			constexpr auto WeightmapTextures = 0x540; // Size: 16, Type: struct TArray<struct UTexture2D*>
			constexpr auto LODStreamingProxy = 0x550; // Size: 8, Type: struct ULandscapeLODStreamingProxy*
			constexpr auto MapBuildDataId = 0x558; // Size: 16, Type: struct FGuid
			constexpr auto IrrelevantLights = 0x568; // Size: 16, Type: struct TArray<struct FGuid>
			constexpr auto CollisionMipLevel = 0x578; // Size: 4, Type: int32_t
			constexpr auto SimpleCollisionMipLevel = 0x57c; // Size: 4, Type: int32_t
			constexpr auto NegativeZBoundsExtension = 0x580; // Size: 4, Type: float
			constexpr auto PositiveZBoundsExtension = 0x584; // Size: 4, Type: float
			constexpr auto StaticLightingResolution = 0x588; // Size: 4, Type: float
			constexpr auto ForcedLOD = 0x58c; // Size: 4, Type: int32_t
			constexpr auto LODBias = 0x590; // Size: 4, Type: int32_t
			constexpr auto StateId = 0x594; // Size: 16, Type: struct FGuid
			constexpr auto BakedTextureMaterialGuid = 0x5a4; // Size: 16, Type: struct FGuid
			constexpr auto GIBakedBaseColorTexture = 0x5b8; // Size: 8, Type: struct UTexture2D*
			constexpr auto MobileBlendableLayerMask = 0x5c0; // Size: 1, Type: char
			constexpr auto MobileMaterialInterface = 0x5c8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MobileMaterialInterfaces = 0x5d0; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto MobileWeightmapTextures = 0x5e0; // Size: 16, Type: struct TArray<struct UTexture2D*>
	}
} 
