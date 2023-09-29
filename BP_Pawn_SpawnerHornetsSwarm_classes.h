// BlueprintGeneratedClass BP_Pawn_SpawnerHornetsSwarm.BP_Pawn_SpawnerHornetsSwarm_C
// Size: 0xf2c (Inherited: 0xf10)
struct ABP_Pawn_SpawnerHornetsSwarm_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UBPAC_SpawnMonsters_C* BPAC_SpawnMonsters; // 0xf18(0x08)
	float DeltaSec; // 0xf20(0x04)
	bool IsDeath; // 0xf24(0x01)
	char pad_F25[0x3]; // 0xf25(0x03)
	float TimeSpawnSwarm; // 0xf28(0x04)

	void ReceiveBeginPlay(); // Function BP_Pawn_SpawnerHornetsSwarm.BP_Pawn_SpawnerHornetsSwarm_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Pawn_SpawnerHornetsSwarm.BP_Pawn_SpawnerHornetsSwarm_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnMonsterDeath(); // Function BP_Pawn_SpawnerHornetsSwarm.BP_Pawn_SpawnerHornetsSwarm_C.OnMonsterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Pawn_SpawnerHornetsSwarm.BP_Pawn_SpawnerHornetsSwarm_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnActionTrigger(struct FName ActionName); // Function BP_Pawn_SpawnerHornetsSwarm.BP_Pawn_SpawnerHornetsSwarm_C.OnActionTrigger // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Pawn_SpawnerHornetsSwarm(int32_t EntryPoint); // Function BP_Pawn_SpawnerHornetsSwarm.BP_Pawn_SpawnerHornetsSwarm_C.ExecuteUbergraph_BP_Pawn_SpawnerHornetsSwarm // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

