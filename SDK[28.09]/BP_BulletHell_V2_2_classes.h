// BlueprintGeneratedClass BP_BulletHell_V2_2.BP_BulletHell_V2_1_C
// Size: 0x268 (Inherited: 0x251)
struct ABP_BulletHell_V2_1_C : ABP_BulletHell_Base_V2_C {
	char pad_251[0x7]; // 0x251(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UParticleSystemComponent* P_Fey_Nettles_Targeting; // 0x260(0x08)

	void OnDestroy(struct AActor* inHitActor, struct FVector inImpactPoint); // Function BP_BulletHell_V2_2.BP_BulletHell_V2_1_C.OnDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BulletHell_V2_2(int32_t EntryPoint); // Function BP_BulletHell_V2_2.BP_BulletHell_V2_1_C.ExecuteUbergraph_BP_BulletHell_V2_2 // (Final|UbergraphFunction) // @ game+0x1ad0090
};

