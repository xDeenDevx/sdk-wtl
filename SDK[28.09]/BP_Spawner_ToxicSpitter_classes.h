// BlueprintGeneratedClass BP_Spawner_ToxicSpitter.BP_Spawner_ToxicSpitter_C
// Size: 0x26c (Inherited: 0x220)
struct ABP_Spawner_ToxicSpitter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct AActor* SpawnClass; // 0x230(0x08)
	struct TArray<struct ABP_SpawnPointForMonster_WithArrow_C*> SpawnLocationList; // 0x238(0x10)
	int32_t CurrentLocationID; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct ABP_Actor_Spore_Boss_C* MyBoss; // 0x250(0x08)
	bool IsDestroy; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float TimeRespawn; // 0x25c(0x04)
	float MaxTimeRespawn; // 0x260(0x04)
	float DeltaSec; // 0x264(0x04)
	int32_t SpawnMaxIteration; // 0x268(0x04)

	void SpawnMonster(); // Function BP_Spawner_ToxicSpitter.BP_Spawner_ToxicSpitter_C.SpawnMonster // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init(); // Function BP_Spawner_ToxicSpitter.BP_Spawner_ToxicSpitter_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Spawner_ToxicSpitter.BP_Spawner_ToxicSpitter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Spawner_ToxicSpitter.BP_Spawner_ToxicSpitter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Spawner_ToxicSpitter(int32_t EntryPoint); // Function BP_Spawner_ToxicSpitter.BP_Spawner_ToxicSpitter_C.ExecuteUbergraph_BP_Spawner_ToxicSpitter // (Final|UbergraphFunction) // @ game+0x1ad0090
};

