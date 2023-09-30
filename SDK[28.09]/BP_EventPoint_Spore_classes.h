// BlueprintGeneratedClass BP_EventPoint_Spore.BP_EventPoint_Spore_C
// Size: 0x47c (Inherited: 0x424)
struct ABP_EventPoint_Spore_C : ABP_EventPoint_SpawnMonsters_C {
	char pad_424[0x4]; // 0x424(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UPostProcessComponent* PostProcess; // 0x430(0x08)
	float DeltaSec; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct AActor* ActorSpore; // 0x440(0x08)
	struct FName EventTag; // 0x448(0x08)
	struct TArray<struct ABP_SpawnPointForMonster_C*> SpawnPointList; // 0x450(0x10)
	bool IsBeginSpawnSupport; // 0x460(0x01)
	bool IsEndSpawnSupport; // 0x461(0x01)
	char pad_462[0x2]; // 0x462(0x02)
	int32_t CurrentIDSpawnPoint; // 0x464(0x04)
	float DelaySpawnTime; // 0x468(0x04)
	float CurrentDelaySpawnTime; // 0x46c(0x04)
	float DelayCheck; // 0x470(0x04)
	float ReloadThornsAttack; // 0x474(0x04)
	float CurrentReloadThornsAttack; // 0x478(0x04)

	void SGetRandomClosestCharacter(int32_t CountCharacters, bool& Valid, struct AWTLCharacter*& Character); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.SGetRandomClosestCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateThornsAttack(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.SUpdateThornsAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckSpore(bool& Result); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.CheckSpore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateSpawnSupport(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.UpdateSpawnSupport // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckSupport(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.CheckSupport // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	bool CheckSpawnPointList(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.CheckSpawnPointList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SpawnProjectX(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.SpawnProjectX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SpawnVFXObjects(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.SpawnVFXObjects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnFinish(bool Successful); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.K2_OnFinish // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnMyMonsterDeath(struct AWTLMonsterPawn* Monster); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.OnMyMonsterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnStart(); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.K2_OnStart // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_EventPoint_Spore(int32_t EntryPoint); // Function BP_EventPoint_Spore.BP_EventPoint_Spore_C.ExecuteUbergraph_BP_EventPoint_Spore // (Final|UbergraphFunction) // @ game+0x1ad0090
};

