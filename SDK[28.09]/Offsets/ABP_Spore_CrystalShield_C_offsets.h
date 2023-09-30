namespace offsets
{
	namespace ABP_Spore_CrystalShield_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Sphere = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Scene = 0x230; // Size: 8, Type: struct USceneComponent*
			constexpr auto State = 0x238; // Size: 8, Type: struct FName
			constexpr auto Color = 0x240; // Size: 16, Type: struct FLinearColor
			constexpr auto Level = 0x250; // Size: 4, Type: int32_t
			constexpr auto SpawnList = 0x258; // Size: 16, Type: struct TArray<struct ABP_SpawnPoint_Crystal_C*>
			constexpr auto IgnoreColorIDList = 0x268; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto IsDestroy = 0x278; // Size: 1, Type: bool
	}
} 
