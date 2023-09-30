namespace offsets
{
	namespace ABP_Monster_Spore_Intro_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Capsule = 0xf18; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto SK_ProjectX_AlienFlowerA_01 = 0xf20; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto NS_Spore_Outgrowth_Death = 0xf28; // Size: 8, Type: struct UNiagaraComponent*
			constexpr auto FE_Monster_Dino_Roar_01 = 0xf30; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto State = 0xf38; // Size: 8, Type: struct FName
			constexpr auto OldState = 0xf40; // Size: 8, Type: struct FName
			constexpr auto ChangeStage = 0xf48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSporeDeath = 0xf58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto IsDeath = 0xf68; // Size: 1, Type: bool
			constexpr auto CurrentAbility = 0xf70; // Size: 8, Type: struct AActor*
			constexpr auto StageID = 0xf78; // Size: 4, Type: int32_t
			constexpr auto MaxStage = 0xf7c; // Size: 4, Type: int32_t
			constexpr auto AbilityClassList = 0xf80; // Size: 16, Type: struct TArray<AActor*>
			constexpr auto ChildrenList = 0xf90; // Size: 16, Type: struct TArray<struct USkeletalMeshComponent*>
			constexpr auto ToxicSpitterObject = 0xfa0; // Size: 8, Type: struct ABP_Spawner_ToxicSpitter_C*
			constexpr auto IsNeedSpawnToxicSpitter = 0xfa8; // Size: 1, Type: bool
	}
} 
