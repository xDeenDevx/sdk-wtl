// BlueprintGeneratedClass BP_HealPoint.BP_HealPoint_C
// Size: 0x252 (Inherited: 0x220)
struct ABP_HealPoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* PS_HealingGranate; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct UStaticMeshComponent* SM_LProp_Crystals_06; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float Health; // 0x248(0x04)
	float MaxHealth; // 0x24c(0x04)
	bool IsDestroy; // 0x250(0x01)
	char RepHealthPercent; // 0x251(0x01)

	void CUpdateHealth(); // Function BP_HealPoint.BP_HealPoint_C.CUpdateHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UserConstructionScript(); // Function BP_HealPoint.BP_HealPoint_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_HealPoint.BP_HealPoint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_HealPoint.BP_HealPoint_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_HealPoint(int32_t EntryPoint); // Function BP_HealPoint.BP_HealPoint_C.ExecuteUbergraph_BP_HealPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

