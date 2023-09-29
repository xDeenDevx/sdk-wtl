// BlueprintGeneratedClass BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C
// Size: 0x28d (Inherited: 0x220)
struct ABP_Monster_StoneProjectile_C : AWTLDynamicReplicatedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Stone; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct FVector Vector; // 0x238(0x0c)
	float Time; // 0x244(0x04)
	struct UCurveFloat* Gravity; // 0x248(0x08)
	struct UCurveFloat* Velocity; // 0x250(0x08)
	float Power; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct UStaticMesh*> Meshes; // 0x260(0x10)
	struct TArray<struct FVector> ScaleForMeshes; // 0x270(0x10)
	int32_t IdMesh; // 0x280(0x04)
	float minDamag; // 0x284(0x04)
	float maxDamag; // 0x288(0x04)
	bool CanUseStun; // 0x28c(0x01)

	void ReceiveBeginPlay(); // Function BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void OnHit(); // Function BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C.OnHit // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SetVector(struct FVector InVector, float Scale1D); // Function BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C.SetVector // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_StoneProjectile(int32_t EntryPoint); // Function BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C.ExecuteUbergraph_BP_Monster_StoneProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

