namespace offsets
{
	namespace UWTLCharacterAddStaticMeshNotify
	{
			constexpr auto m_MeshComponent = 0x38; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto MeshComponentName = 0x40; // Size: 8, Type: struct FName
			constexpr auto Mesh = 0x48; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto AttachBoneName = 0x70; // Size: 8, Type: struct FName
			constexpr auto MeshRelativeTransform = 0x80; // Size: 48, Type: struct FTransform
	}
} 
