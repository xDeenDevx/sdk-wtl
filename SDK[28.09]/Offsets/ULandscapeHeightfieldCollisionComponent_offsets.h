namespace offsets
{
	namespace ULandscapeHeightfieldCollisionComponent
	{
			constexpr auto ComponentLayerInfos = 0x440; // Size: 16, Type: struct TArray<struct ULandscapeLayerInfoObject*>
			constexpr auto SectionBaseX = 0x450; // Size: 4, Type: int32_t
			constexpr auto SectionBaseY = 0x454; // Size: 4, Type: int32_t
			constexpr auto CollisionSizeQuads = 0x458; // Size: 4, Type: int32_t
			constexpr auto CollisionScale = 0x45c; // Size: 4, Type: float
			constexpr auto SimpleCollisionSizeQuads = 0x460; // Size: 4, Type: int32_t
			constexpr auto CollisionQuadFlags = 0x468; // Size: 16, Type: struct TArray<char>
			constexpr auto HeightfieldGuid = 0x478; // Size: 16, Type: struct FGuid
			constexpr auto CachedLocalBox = 0x488; // Size: 28, Type: struct FBox
			constexpr auto RenderComponent = 0x4a4; // Size: 28, Type: 
			constexpr auto CookedPhysicalMaterials = 0x4d0; // Size: 16, Type: struct TArray<struct UPhysicalMaterial*>
	}
} 
