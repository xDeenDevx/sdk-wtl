// BlueprintGeneratedClass BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C
// Size: 0x2f4 (Inherited: 0x220)
struct ABP_FlyingSpawner_V1_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* Scene1; // 0x228(0x08)
	struct USphereComponent* Sphere1; // 0x230(0x08)
	struct USkeletalMeshComponent* SK_AlienJellyfish_01; // 0x238(0x08)
	struct USceneComponent* Scene; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float DeltaSec; // 0x250(0x04)
	float Health; // 0x254(0x04)
	float MaxHealth; // 0x258(0x04)
	struct FVector Location; // 0x25c(0x0c)
	int32_t MaxMonsters; // 0x268(0x04)
	struct FName TagForMonsters; // 0x26c(0x08)
	char pad_274[0x4]; // 0x274(0x04)
	struct TArray<struct FS_Spore_Outgrowth_Data> SpawnLocationList; // 0x278(0x10)
	int32_t SpawnID; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct AActor* SpawnClass; // 0x290(0x08)
	struct TArray<struct FVector> MonsterLocations; // 0x298(0x10)
	struct FVector SpawnLocation; // 0x2a8(0x0c)
	struct FVector DesiredLocation; // 0x2b4(0x0c)
	bool IsDeath; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct AActor* ptBoss; // 0x2c8(0x08)
	struct FName State; // 0x2d0(0x08)
	struct UMaterialInstance* MaterialInst; // 0x2d8(0x08)
	struct AActor* myBlock; // 0x2e0(0x08)
	bool IsReady; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float TimeSpawn; // 0x2ec(0x04)
	float CurrentTimeSpawn; // 0x2f0(0x04)

	void GetCurrentHealth(float& Result); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.GetCurrentHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetMaxHealth(float& Result); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.GetMaxHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void IsAlive(bool& Result); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.IsAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CanBeTakeDamage(bool& Result); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.CanBeTakeDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetHealthAlpha(float& Result); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.GetHealthAlpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetName(struct FText& Result); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.GetName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CVFXHealth(); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.CVFXHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckBoss(bool& Result); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.CheckBoss // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.OnDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateMove(); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.UpdateMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init(); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheskSpawnMonster(); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.CheskSpawnMonster // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void DecrementHealth(float Value); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.DecrementHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void IncrementHealth(float Value); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.IncrementHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_FlyingSpawner_V1(int32_t EntryPoint); // Function BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C.ExecuteUbergraph_BP_FlyingSpawner_V1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

