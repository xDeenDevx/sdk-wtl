// BlueprintGeneratedClass BP_SporeSpike_SpawnerFromOutgrowth.BP_SporeSpike_SpawnerFromOutgrowth_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_SporeSpike_SpawnerFromOutgrowth_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct AWTLCharacter*> CharactersList; // 0x230(0x10)
	int32_t CurrentTestID; // 0x240(0x04)
	float StepRotationYaw; // 0x244(0x04)

	void ReceiveBeginPlay(); // Function BP_SporeSpike_SpawnerFromOutgrowth.BP_SporeSpike_SpawnerFromOutgrowth_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_SporeSpike_SpawnerFromOutgrowth.BP_SporeSpike_SpawnerFromOutgrowth_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_SporeSpike_SpawnerFromOutgrowth(int32_t EntryPoint); // Function BP_SporeSpike_SpawnerFromOutgrowth.BP_SporeSpike_SpawnerFromOutgrowth_C.ExecuteUbergraph_BP_SporeSpike_SpawnerFromOutgrowth // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

