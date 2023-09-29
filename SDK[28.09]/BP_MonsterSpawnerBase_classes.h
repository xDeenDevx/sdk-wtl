// BlueprintGeneratedClass BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C
// Size: 0x500 (Inherited: 0x400)
struct ABP_MonsterSpawnerBase_C : AWTLMonsterSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UArrowComponent* Arrow; // 0x408(0x08)
	struct UBillboardComponent* billboard; // 0x410(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x418(0x08)
	struct TArray<struct AWTLMonsterPawn*> FreeMonsterPoints; // 0x420(0x10)
	struct TArray<struct ABP_SpawnPointForMonster_C*> SpawnPoints; // 0x430(0x10)
	struct TArray<int32_t> TempIdSpawnPoint; // 0x440(0x10)
	int32_t TempId; // 0x450(0x04)
	bool DrawSpawnPointsInRadius; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	int32_t CurrentID; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct AWTLMonsterPawn* FreePtr; // 0x460(0x08)
	struct FMulticastInlineDelegate EventOnMonsterDead; // 0x468(0x10)
	bool RandomSpawnPoint; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct AWTLMonsterPawn* FindMonsterClass; // 0x480(0x08)
	struct AWTLMonsterPawn* ReplaceMonsterClass; // 0x488(0x08)
	int32_t CountMonstersReplaced; // 0x490(0x04)
	float Distance; // 0x494(0x04)
	struct FVector SpawnLocation; // 0x498(0x0c)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FString NameSpawnClass; // 0x4a8(0x10)
	struct FString MonsterLimit; // 0x4b8(0x10)
	int32_t CountSpawnPoints; // 0x4c8(0x04)
	bool SetSpawnPointAnchor; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	struct FMulticastInlineDelegate EventOnMonsterSpawned; // 0x4d0(0x10)
	struct ABP_FortificationCommandCore_C* MyFortificationCommandCore; // 0x4e0(0x08)
	int32_t RandomID; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TArray<struct ABP_SpawnPointForMonster_C*> CorrectSpawnPoints; // 0x4f0(0x10)

	void DrawSpawnPoints(); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.DrawSpawnPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GenerateSpawnPoints(); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.GenerateSpawnPoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ShowRadiusSpawn(); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ShowRadiusSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReplaceMonsters(); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ReplaceMonsters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SpawnMonster(struct AWTLMonsterPawn* Monster, struct FVector Location, char Level); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.SpawnMonster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UserConstructionScript(); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnSpawnMonster(); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.OnSpawnMonster // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void OnDeadMonster(struct AWTLMonsterPawn* Pawn); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.OnDeadMonster // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void K2_MonsterSpawned(struct AWTLMonsterPawn* Pawn); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.K2_MonsterSpawned // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_MonsterSpawnerBase(int32_t EntryPoint); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ExecuteUbergraph_BP_MonsterSpawnerBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
	void EventOnMonsterSpawned__DelegateSignature(struct AWTLMonsterPawn* Monster, struct ABP_MonsterSpawnerBase_C* Spawner); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.EventOnMonsterSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void EventOnMonsterDead__DelegateSignature(struct AWTLMonsterPawn* MonsterPawn, struct ABP_MonsterSpawnerBase_C* Spawner); // Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.EventOnMonsterDead__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
};

