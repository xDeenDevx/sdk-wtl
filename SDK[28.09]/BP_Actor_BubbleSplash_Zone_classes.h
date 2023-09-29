// BlueprintGeneratedClass BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_Actor_BubbleSplash_Zone_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* Decal; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float LifeTime; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UMaterialInstanceDynamic* MatInst; // 0x240(0x08)
	float CurrentLifeTime; // 0x248(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Actor_BubbleSplash_Zone(int32_t EntryPoint); // Function BP_Actor_BubbleSplash_Zone.BP_Actor_BubbleSplash_Zone_C.ExecuteUbergraph_BP_Actor_BubbleSplash_Zone // (Final|UbergraphFunction) // @ game+0x1ad0090
};

