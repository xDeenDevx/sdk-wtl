namespace offsets
{
	namespace AWTLBulletinBoard
	{
			constexpr auto Mesh = 0x240; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BulletinMesh1 = 0x248; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BulletinMesh2 = 0x250; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BulletinMesh3 = 0x258; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Bulletin1CenterLocation = 0x260; // Size: 12, Type: struct FVector
			constexpr auto Bulletin2CenterLocation = 0x26c; // Size: 12, Type: struct FVector
			constexpr auto Bulletin3CenterLocation = 0x278; // Size: 12, Type: struct FVector
			constexpr auto BulletinHorizontalLocationDelta = 0x284; // Size: 4, Type: float
			constexpr auto BulletinVerticalLocationDelta = 0x288; // Size: 4, Type: float
			constexpr auto BulletinRotationDelta = 0x28c; // Size: 4, Type: float
			constexpr auto BulletinOriginalScale = 0x290; // Size: 12, Type: struct FVector
			constexpr auto BulletinScaleDelta = 0x29c; // Size: 4, Type: float
			constexpr auto BulletinMaterials = 0x2a0; // Size: 16, Type: struct TArray<struct UMaterialInstance*>
			constexpr auto QuestList = 0x2b0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto Faction = 0x2c0; // Size: 1, Type: enum class EWTLFaction
			constexpr auto m_IsActive = 0x2c1; // Size: 1, Type: bool
	}
} 
