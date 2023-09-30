namespace offsets
{
	namespace ABP_Pawn_Spore_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto BP_BulletHell_ConeAttack = 0xf18; // Size: 8, Type: struct UBP_BulletHell_ConeAttack_C*
			constexpr auto BP_BulletHell_FillConeAttack = 0xf20; // Size: 8, Type: struct UBP_BulletHell_FillConeAttack_C*
			constexpr auto P_Growth_PoisonSpores_ProjectX = 0xf28; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto P_Dust = 0xf30; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto Capsule = 0xf38; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto BPAC_SpawnMonsters = 0xf40; // Size: 8, Type: struct UBPAC_SpawnMonsters_C*
			constexpr auto BP_LegendaryMonsterComponent = 0xf48; // Size: 8, Type: struct UBP_LegendaryMonsterComponent_C*
			constexpr auto DeltaSec = 0xf50; // Size: 4, Type: float
			constexpr auto State = 0xf54; // Size: 1, Type: enum class E_StateObject
			constexpr auto DesiredHideZ = 0xf58; // Size: 4, Type: float
			constexpr auto DesiredVisibleZ = 0xf5c; // Size: 4, Type: float
			constexpr auto CurrentOffsetZ = 0xf60; // Size: 4, Type: float
			constexpr auto DelaySpawnMonsters = 0xf64; // Size: 4, Type: float
			constexpr auto DesiredOffsetZ = 0xf68; // Size: 4, Type: float
			constexpr auto SpeedOffsetZ = 0xf6c; // Size: 4, Type: float
			constexpr auto myHealthAlpha = 0xf70; // Size: 4, Type: float
			constexpr auto IsShowTower = 0xf74; // Size: 1, Type: bool
			constexpr auto ShowTower = 0xf78; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto HideTower = 0xf88; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto IsDeath = 0xf98; // Size: 1, Type: bool
			constexpr auto TargetActor = 0xfa0; // Size: 8, Type: struct AActor*
	}
} 
