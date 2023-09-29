// BlueprintGeneratedClass BP_SporeSpike.BP_SporeSpike_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_SporeSpike_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SK_Whip_01; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UAB_Whip_01_Skeleton_C* myAnimInstance; // 0x238(0x08)
	struct FVector TargetLocation; // 0x240(0x0c)
	bool LocationFound; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct AActor* TargetActor; // 0x250(0x08)

	void SetAttackLocationn(struct FVector Location); // Function BP_SporeSpike.BP_SporeSpike_C.SetAttackLocationn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnSpikeAttack(); // Function BP_SporeSpike.BP_SporeSpike_C.OnSpikeAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnAttackLocation(struct FVector Location); // Function BP_SporeSpike.BP_SporeSpike_C.OnAttackLocation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_SporeSpike.BP_SporeSpike_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_SporeSpike.BP_SporeSpike_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_SporeSpike(int32_t EntryPoint); // Function BP_SporeSpike.BP_SporeSpike_C.ExecuteUbergraph_BP_SporeSpike // (Final|UbergraphFunction) // @ game+0x1ad0090
};

