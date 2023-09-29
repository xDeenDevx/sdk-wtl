// BlueprintGeneratedClass BP_Actor_Puddle.BP_Actor_Puddle_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_Actor_Puddle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x228(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x230(0x08)
	struct UParticleSystemComponent* PS_Gobble; // 0x238(0x08)
	struct UDecalComponent* Decal; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float LifeTime; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct UMaterialInstanceDynamic* MatInst; // 0x258(0x08)
	float CurrentLifeTime; // 0x260(0x04)

	void ReceiveBeginPlay(); // Function BP_Actor_Puddle.BP_Actor_Puddle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Actor_Puddle.BP_Actor_Puddle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Actor_Puddle(int32_t EntryPoint); // Function BP_Actor_Puddle.BP_Actor_Puddle_C.ExecuteUbergraph_BP_Actor_Puddle // (Final|UbergraphFunction) // @ game+0x1ad0090
};

