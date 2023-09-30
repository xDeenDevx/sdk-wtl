namespace offsets
{
	namespace ABP_Monster_StoneProjectile_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Stone = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Sphere = 0x230; // Size: 8, Type: struct USphereComponent*
			constexpr auto Vector = 0x238; // Size: 12, Type: struct FVector
			constexpr auto Time = 0x244; // Size: 4, Type: float
			constexpr auto Gravity = 0x248; // Size: 8, Type: struct UCurveFloat*
			constexpr auto Velocity = 0x250; // Size: 8, Type: struct UCurveFloat*
			constexpr auto Power = 0x258; // Size: 4, Type: float
			constexpr auto Meshes = 0x260; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto ScaleForMeshes = 0x270; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto IdMesh = 0x280; // Size: 4, Type: int32_t
			constexpr auto minDamag = 0x284; // Size: 4, Type: float
			constexpr auto maxDamag = 0x288; // Size: 4, Type: float
			constexpr auto CanUseStun = 0x28c; // Size: 1, Type: bool
	}
} 
