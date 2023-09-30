// BlueprintGeneratedClass BP_BulletHell_V2_1.BP_BulletHell_V2_0_C
// Size: 0x268 (Inherited: 0x251)
struct ABP_BulletHell_V2_0_C : ABP_BulletHell_Base_V2_C {
	char pad_251[0x7]; // 0x251(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UParticleSystemComponent* P_Fey_Nettles_Targeting; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function BP_BulletHell_V2_1.BP_BulletHell_V2_0_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_BulletHell_V2_1.BP_BulletHell_V2_0_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroy(struct AActor* inHitActor, struct FVector inImpactPoint); // Function BP_BulletHell_V2_1.BP_BulletHell_V2_0_C.OnDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BulletHell_V2_1(int32_t EntryPoint); // Function BP_BulletHell_V2_1.BP_BulletHell_V2_0_C.ExecuteUbergraph_BP_BulletHell_V2_1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

