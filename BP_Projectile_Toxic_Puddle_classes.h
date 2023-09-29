// BlueprintGeneratedClass BP_Projectile_Toxic_Puddle.BP_Projectile_Toxic_Puddle_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Projectile_Toxic_Puddle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* P_Fey_Primary; // 0x228(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x230(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x238(0x08)
	struct UNiagaraComponent* NS_ToxicProdectile; // 0x240(0x08)
	struct USphereComponent* Sphere; // 0x248(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x250(0x08)

	void BndEvt__BP_Projectile_Toxic_Puddle_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Projectile_Toxic_Puddle.BP_Projectile_Toxic_Puddle_C.BndEvt__BP_Projectile_Toxic_Puddle_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Projectile_Toxic_Puddle.BP_Projectile_Toxic_Puddle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Projectile_Toxic_Puddle(int32_t EntryPoint); // Function BP_Projectile_Toxic_Puddle.BP_Projectile_Toxic_Puddle_C.ExecuteUbergraph_BP_Projectile_Toxic_Puddle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

