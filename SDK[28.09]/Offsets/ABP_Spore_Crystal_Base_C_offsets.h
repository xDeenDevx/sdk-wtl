namespace offsets
{
	namespace ABP_Spore_Crystal_Base_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto FMODAudio = 0x228; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto Sphere = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto SpherePush = 0x238; // Size: 8, Type: struct USphereComponent*
			constexpr auto NS_Crystal_Laser = 0x240; // Size: 8, Type: struct UNiagaraComponent*
			constexpr auto SM_LProp_Crystals_01 = 0x248; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DefaultSceneRoot = 0x250; // Size: 8, Type: struct USceneComponent*
			constexpr auto ColorA = 0x258; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorB = 0x268; // Size: 16, Type: struct FLinearColor
			constexpr auto DeltaSec = 0x278; // Size: 4, Type: float
			constexpr auto MaxSpeed = 0x27c; // Size: 4, Type: float
			constexpr auto IsDestroy = 0x280; // Size: 1, Type: bool
			constexpr auto IsFreeze = 0x281; // Size: 1, Type: bool
			constexpr auto MyColorID = 0x284; // Size: 4, Type: int32_t
			constexpr auto StartLocation = 0x288; // Size: 12, Type: struct FVector
			constexpr auto EndLocation = 0x294; // Size: 12, Type: struct FVector
			constexpr auto SpeedMode = 0x2a0; // Size: 4, Type: int32_t
			constexpr auto MoveDirection = 0x2a4; // Size: 4, Type: int32_t
			constexpr auto IsLocationCorrection = 0x2a8; // Size: 1, Type: bool
			constexpr auto CorrectLocation = 0x2ac; // Size: 12, Type: struct FVector
			constexpr auto WaitUpdateCorrectLocation = 0x2b8; // Size: 4, Type: float
			constexpr auto IsCheckCrystal = 0x2bc; // Size: 1, Type: bool
	}
} 
