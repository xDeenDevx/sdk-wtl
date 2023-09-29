// BlueprintGeneratedClass BP_Spawner_ToxicBomber.BP_Spawner_ToxicBomber_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_Spawner_ToxicBomber_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float DeltaSec; // 0x230(0x04)
	float AngularStep; // 0x234(0x04)
	float MaxCount; // 0x238(0x04)
	float MinDistance; // 0x23c(0x04)
	float MaxDinstance; // 0x240(0x04)
	bool IsDestroy; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	float TimeReload; // 0x248(0x04)
	float CurrentTimeReload; // 0x24c(0x04)

	void Spawn(); // Function BP_Spawner_ToxicBomber.BP_Spawner_ToxicBomber_C.Spawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Spawner_ToxicBomber.BP_Spawner_ToxicBomber_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Spawner_ToxicBomber.BP_Spawner_ToxicBomber_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Spawner_ToxicBomber(int32_t EntryPoint); // Function BP_Spawner_ToxicBomber.BP_Spawner_ToxicBomber_C.ExecuteUbergraph_BP_Spawner_ToxicBomber // (Final|UbergraphFunction) // @ game+0x1ad0090
};

