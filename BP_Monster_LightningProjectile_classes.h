// BlueprintGeneratedClass BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C
// Size: 0x28c (Inherited: 0x220)
struct ABP_Monster_LightningProjectile_C : AWTLDynamicReplicatedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* PS_BallLightning; // 0x228(0x08)
	struct UStaticMeshComponent* Stone; // 0x230(0x08)
	struct USphereComponent* Sphere; // 0x238(0x08)
	struct FVector Vector; // 0x240(0x0c)
	float Time; // 0x24c(0x04)
	struct UCurveFloat* Gravity; // 0x250(0x08)
	struct UCurveFloat* Velocity; // 0x258(0x08)
	float Power; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct UStaticMesh*> Meshes; // 0x268(0x10)
	struct TArray<struct FVector> ScaleForMeshes; // 0x278(0x10)
	int32_t IdMesh; // 0x288(0x04)

	void OnHit(); // Function BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C.OnHit // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SetVector(struct FVector InVector, float Scale1D); // Function BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C.SetVector // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_LightningProjectile(int32_t EntryPoint); // Function BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C.ExecuteUbergraph_BP_Monster_LightningProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

