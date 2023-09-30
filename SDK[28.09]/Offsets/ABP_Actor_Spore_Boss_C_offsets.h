namespace offsets
{
	namespace ABP_Actor_Spore_Boss_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto FE_CaveMonster_00 = 0x228; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FE_Monster_Dino_Roar_02_1 = 0x230; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FE_Monster_Dino_Roar_05_1 = 0x238; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FE_Monster_Dino_Roar_06_1 = 0x240; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FE_Monster_Dino_Roar_07_1 = 0x248; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FE_Rock_impact = 0x250; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto BP_LegendaryMonsterComponent = 0x258; // Size: 8, Type: struct UBP_LegendaryMonsterComponent_C*
			constexpr auto Sphere = 0x260; // Size: 8, Type: struct USphereComponent*
			constexpr auto SK_MH01 = 0x268; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto DefaultSceneRoot = 0x270; // Size: 8, Type: struct USceneComponent*
			constexpr auto DeltaSec = 0x278; // Size: 4, Type: float
			constexpr auto OutgrowthSpawnData = 0x280; // Size: 16, Type: struct TArray<struct FS_Spore_Outgrowth_Data>
			constexpr auto OutgrowthCooldownTime = 0x290; // Size: 4, Type: float
			constexpr auto MyOutgrowth = 0x298; // Size: 8, Type: struct ABP_Monster_Spore_Outgrowth_C*
			constexpr auto Health = 0x2a0; // Size: 4, Type: float
			constexpr auto MaxHealth = 0x2a4; // Size: 4, Type: float
			constexpr auto NextStageOfHealth = 0x2a8; // Size: 4, Type: float
			constexpr auto CurrentAbility = 0x2b0; // Size: 8, Type: struct AActor*
			constexpr auto CurrentAbilityID = 0x2b8; // Size: 4, Type: int32_t
			constexpr auto CurrentAbilityLevel = 0x2bc; // Size: 4, Type: int32_t
			constexpr auto MaxCountAbility = 0x2c0; // Size: 4, Type: int32_t
			constexpr auto IsDeath = 0x2c4; // Size: 1, Type: bool
			constexpr auto AbilityChance = 0x2c8; // Size: 16, Type: struct TArray<struct FS_Ability_Chance>
			constexpr auto NextStageEvent = 0x2d8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CountStage = 0x2e8; // Size: 4, Type: float
			constexpr auto IsIntroFinish = 0x2ec; // Size: 1, Type: bool
			constexpr auto MyOutgrowthList = 0x2f0; // Size: 16, Type: struct TArray<struct ABP_Monster_Spore_Outgrowth_C*>
			constexpr auto IsReadyAbility = 0x300; // Size: 1, Type: bool
			constexpr auto CurrentSpawnHornet = 0x304; // Size: 4, Type: int32_t
			constexpr auto IsCanSpawnOutgrowth = 0x308; // Size: 1, Type: bool
	}
} 
