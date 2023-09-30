// BlueprintGeneratedClass BP_SporeSpike_V2.BP_SporeSpike_V2_C
// Size: 0x27c (Inherited: 0x220)
struct ABP_SporeSpike_V2_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FE_RockFall_01; // 0x228(0x08)
	struct UFMODAudioComponent* FE_Monster_CecoaliensaBrute_FootStep; // 0x230(0x08)
	struct USkeletalMeshComponent* SK_Whip_01; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct UAB_Whip_01_Skeleton_C* myAnimInstance; // 0x248(0x08)
	bool LocationFound; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct AActor* TargetActor; // 0x258(0x08)
	bool IsUseInitLocation; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct FVector TargetLocation; // 0x264(0x0c)
	struct FVector tmpLocation; // 0x270(0x0c)

	void Init(struct FVector TargetLocation); // Function BP_SporeSpike_V2.BP_SporeSpike_V2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_SporeSpike_V2.BP_SporeSpike_V2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void OnSpikeAttack(); // Function BP_SporeSpike_V2.BP_SporeSpike_V2_C.OnSpikeAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnAttackLocation(struct FVector Location); // Function BP_SporeSpike_V2.BP_SporeSpike_V2_C.OnAttackLocation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_SporeSpike_V2.BP_SporeSpike_V2_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_SporeSpike_V2(int32_t EntryPoint); // Function BP_SporeSpike_V2.BP_SporeSpike_V2_C.ExecuteUbergraph_BP_SporeSpike_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

