// BlueprintGeneratedClass BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C
// Size: 0x424 (Inherited: 0x400)
struct ABP_EventPoint_SpawnMonsters_C : ABP_EventPointBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct TArray<struct ABP_MonsterSpawnerBase_C*> SpawnPoints; // 0x408(0x10)
	bool UpdateData; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	int32_t MinLevel; // 0x41c(0x04)
	int32_t MaxLevel; // 0x420(0x04)

	void UserConstructionScript(); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnStart(); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.K2_OnStart // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnFinish(bool Successful); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.K2_OnFinish // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnMonsterDead(struct AWTLMonsterPawn* MonsterPawn, struct ABP_MonsterSpawnerBase_C* Spawner); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.OnMonsterDead // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnEventTaskCompleted(int32_t TaskIndex); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.K2_OnEventTaskCompleted // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_EventPoint_SpawnMonsters(int32_t EntryPoint); // Function BP_EventPoint_SpawnMonsters.BP_EventPoint_SpawnMonsters_C.ExecuteUbergraph_BP_EventPoint_SpawnMonsters // (Final|UbergraphFunction) // @ game+0x1ad0090
};

