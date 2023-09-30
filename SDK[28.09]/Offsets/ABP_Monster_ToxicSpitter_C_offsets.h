namespace offsets
{
	namespace ABP_Monster_ToxicSpitter_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto SpotLight = 0xf18; // Size: 8, Type: struct USpotLightComponent*
			constexpr auto BackMesh = 0xf20; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Arrow1 = 0xf28; // Size: 8, Type: struct UArrowComponent*
			constexpr auto EnemyTarget = 0xf30; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto DeltaSec = 0xf38; // Size: 4, Type: float
			constexpr auto IsAttack = 0xf3c; // Size: 1, Type: bool
			constexpr auto FindDistance = 0xf40; // Size: 4, Type: float
			constexpr auto IsDeath = 0xf44; // Size: 1, Type: bool
			constexpr auto TimeReloadAttack = 0xf48; // Size: 4, Type: float
			constexpr auto MaxTimeReloadAttack = 0xf4c; // Size: 4, Type: float
			constexpr auto IsReadyToAttack = 0xf50; // Size: 1, Type: bool
			constexpr auto MatInst = 0xf58; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
