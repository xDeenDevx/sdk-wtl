namespace offsets
{
	namespace UMRMeshComponent
	{
			constexpr auto Material = 0x450; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto WireframeMaterial = 0x458; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bCreateMeshProxySections = 0x460; // Size: 1, Type: bool
			constexpr auto bUpdateNavMeshOnMeshUpdate = 0x461; // Size: 1, Type: bool
			constexpr auto bNeverCreateCollisionMesh = 0x462; // Size: 1, Type: bool
			constexpr auto CachedBodySetup = 0x468; // Size: 8, Type: struct UBodySetup*
			constexpr auto BodySetups = 0x470; // Size: 16, Type: struct TArray<struct UBodySetup*>
	}
} 
