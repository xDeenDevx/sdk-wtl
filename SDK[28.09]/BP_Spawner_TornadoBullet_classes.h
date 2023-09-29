// BlueprintGeneratedClass BP_Spawner_TornadoBullet.BP_Spawner_TornadoBullet_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_Spawner_TornadoBullet_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void Shot(struct FVector Direction, float PhaseShiftPI); // Function BP_Spawner_TornadoBullet.BP_Spawner_TornadoBullet_C.Shot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Spawner_TornadoBullet.BP_Spawner_TornadoBullet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Spawner_TornadoBullet(int32_t EntryPoint); // Function BP_Spawner_TornadoBullet.BP_Spawner_TornadoBullet_C.ExecuteUbergraph_BP_Spawner_TornadoBullet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

