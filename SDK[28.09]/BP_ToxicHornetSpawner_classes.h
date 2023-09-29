// BlueprintGeneratedClass BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_ToxicHornetSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float DeltaSec; // 0x230(0x04)
	float CurrentRespawnTime; // 0x234(0x04)
	struct TArray<struct ABP_SpawnPointForMonster_C*> SpawnPointList; // 0x238(0x10)
	bool IsAvailableSpawningPoints; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float RespawnTime; // 0x24c(0x04)
	struct TArray<struct AActor*> HornetSpawnerList; // 0x250(0x10)
	float Difficulty; // 0x260(0x04)
	bool IsActivated; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct ABP_SplineToUp_C* MyTentacle; // 0x268(0x08)
	bool IsTentacleStop; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	int32_t CountIterationSpawn; // 0x274(0x04)

	void UpdateGravity(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.UpdateGravity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateTentacle(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.CUpdateTentacle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCalculateRespawnTime(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.SCalculateRespawnTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateDifficulty(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.SUpdateDifficulty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateSpawn(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.SUpdateSpawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	bool SInitSpawnPointList(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.SInitSpawnPointList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnNextStage(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.OnNextStage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnTentacleUP(); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.OnTentacleUP // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_ToxicHornetSpawner(int32_t EntryPoint); // Function BP_ToxicHornetSpawner.BP_ToxicHornetSpawner_C.ExecuteUbergraph_BP_ToxicHornetSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

