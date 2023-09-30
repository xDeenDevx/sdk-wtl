// BlueprintGeneratedClass BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C
// Size: 0x309 (Inherited: 0x220)
struct ABP_Actor_Spore_Boss_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FE_CaveMonster_00; // 0x228(0x08)
	struct UFMODAudioComponent* FE_Monster_Dino_Roar_02_1; // 0x230(0x08)
	struct UFMODAudioComponent* FE_Monster_Dino_Roar_05_1; // 0x238(0x08)
	struct UFMODAudioComponent* FE_Monster_Dino_Roar_06_1; // 0x240(0x08)
	struct UFMODAudioComponent* FE_Monster_Dino_Roar_07_1; // 0x248(0x08)
	struct UFMODAudioComponent* FE_Rock_impact; // 0x250(0x08)
	struct UBP_LegendaryMonsterComponent_C* BP_LegendaryMonsterComponent; // 0x258(0x08)
	struct USphereComponent* Sphere; // 0x260(0x08)
	struct USkeletalMeshComponent* SK_MH01; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float DeltaSec; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct FS_Spore_Outgrowth_Data> OutgrowthSpawnData; // 0x280(0x10)
	float OutgrowthCooldownTime; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct ABP_Monster_Spore_Outgrowth_C* MyOutgrowth; // 0x298(0x08)
	float Health; // 0x2a0(0x04)
	float MaxHealth; // 0x2a4(0x04)
	float NextStageOfHealth; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct AActor* CurrentAbility; // 0x2b0(0x08)
	int32_t CurrentAbilityID; // 0x2b8(0x04)
	int32_t CurrentAbilityLevel; // 0x2bc(0x04)
	int32_t MaxCountAbility; // 0x2c0(0x04)
	bool IsDeath; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct TArray<struct FS_Ability_Chance> AbilityChance; // 0x2c8(0x10)
	struct FMulticastInlineDelegate NextStageEvent; // 0x2d8(0x10)
	float CountStage; // 0x2e8(0x04)
	bool IsIntroFinish; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct TArray<struct ABP_Monster_Spore_Outgrowth_C*> MyOutgrowthList; // 0x2f0(0x10)
	bool IsReadyAbility; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t CurrentSpawnHornet; // 0x304(0x04)
	bool IsCanSpawnOutgrowth; // 0x308(0x01)

	void GetName(struct FText& Result); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.GetName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetHealthAlpha(float& Result); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.GetHealthAlpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetCurrentHealth(float& Result); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.GetCurrentHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetMaxHealth(float& Result); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.GetMaxHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void IsAlive(bool& Result); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.IsAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CanBeTakeDamage(bool& Result); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.CanBeTakeDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SDestroyCharacterInRange(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SDestroyCharacterInRange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SSpawnSporeSpikeSpawner(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SSpawnSporeSpikeSpawner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void AnyGrowthIsAlive(bool& Result); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.AnyGrowthIsAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckEvent(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.CheckEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateHealthBar(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.CUpdateHealthBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Spawn Toxic Hornet Spawner(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.Spawn Toxic Hornet Spawner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroySpikesNextLevel(struct AActor* DestroyedActor); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.OnDestroySpikesNextLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroyIntro(struct AActor* DestroyedActor); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.OnDestroyIntro // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckNextStage(bool& NextStageRun); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.CheckNextStage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CalculateNextStageOfHealth(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.CalculateNextStageOfHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUseAbility(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SUseAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateAbilityChance(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.UpdateAbilityChance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SInit(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SInit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateOutgrowth(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SUpdateOutgrowth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroyOutgrowth(struct AActor* DestroyedActor); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.OnDestroyOutgrowth // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void IncrementHealth(float Value); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.IncrementHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void DecrementHealth(float Value); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.DecrementHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateAFX(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.CUpdateAFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnTakeDamage(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.OnTakeDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnRoar(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.OnRoar // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroyHornetSpawner(struct AActor* DestroyedActor); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.OnDestroyHornetSpawner // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnNextStage(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SOnNextStage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SSpawnControllerOfFlyingSpawners(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SSpawnControllerOfFlyingSpawners // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnSpawnToxicHornetSpawner(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.SOnSpawnToxicHornetSpawner // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Actor_Spore_Boss(int32_t EntryPoint); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.ExecuteUbergraph_BP_Actor_Spore_Boss // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
	void NextStageEvent__DelegateSignature(); // Function BP_Actor_Spore_Boss.BP_Actor_Spore_Boss_C.NextStageEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
};

