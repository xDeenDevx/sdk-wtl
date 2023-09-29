// BlueprintGeneratedClass BP_GrainOfLife_Projectile.BP_GrainOfLife_Projectile_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_GrainOfLife_Projectile_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* P_Ultimate_Seed_Projectile; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x238(0x08)
	bool IsDestroy; // 0x240(0x01)

	void OnRep_IsDestroy(); // Function BP_GrainOfLife_Projectile.BP_GrainOfLife_Projectile_C.OnRep_IsDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_Spit_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_GrainOfLife_Projectile.BP_GrainOfLife_Projectile_C.BndEvt__BP_Spit_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_GrainOfLife_Projectile.BP_GrainOfLife_Projectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroySpawner(struct AActor* DestroyedActor); // Function BP_GrainOfLife_Projectile.BP_GrainOfLife_Projectile_C.OnDestroySpawner // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_GrainOfLife_Projectile(int32_t EntryPoint); // Function BP_GrainOfLife_Projectile.BP_GrainOfLife_Projectile_C.ExecuteUbergraph_BP_GrainOfLife_Projectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

