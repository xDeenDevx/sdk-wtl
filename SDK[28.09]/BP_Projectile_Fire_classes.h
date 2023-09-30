// BlueprintGeneratedClass BP_Projectile_Fire.BP_Projectile_Fire_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_Projectile_Fire_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x228(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x230(0x08)
	struct UFMODAudioComponent* FE_Anomaly_FireField_Splash; // 0x238(0x08)
	struct UParticleSystemComponent* P_Explo_Toxic; // 0x240(0x08)
	struct UDecalComponent* Decal; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x258(0x08)
	struct FVector StartLoc; // 0x260(0x0c)
	struct FVector EndLoc; // 0x26c(0x0c)
	float Damage; // 0x278(0x04)
	bool IsShot; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct FVector NewVelocity; // 0x280(0x0c)
	float AngleA; // 0x28c(0x04)
	float Speed; // 0x290(0x04)
	float AngleB; // 0x294(0x04)
	float Len; // 0x298(0x04)
	float Height; // 0x29c(0x04)
	enum class EWTLCharacterEffectType EffectType; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float RadiusDamage; // 0x2a4(0x04)
	float GravityScale; // 0x2a8(0x04)
	float RepAngleB; // 0x2ac(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_Projectile_Fire.BP_Projectile_Fire_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Projectile_Fire.BP_Projectile_Fire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void Initialize(struct FVector StartLocation, struct FVector EndLocation, float Damage, float SetAngleB); // Function BP_Projectile_Fire.BP_Projectile_Fire_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Projectile_Fire.BP_Projectile_Fire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void OnDamageToCharacter(struct AWTLCharacter* Character, float MultiplyDamage); // Function BP_Projectile_Fire.BP_Projectile_Fire_C.OnDamageToCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnHit(); // Function BP_Projectile_Fire.BP_Projectile_Fire_C.OnHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Projectile_Fire(int32_t EntryPoint); // Function BP_Projectile_Fire.BP_Projectile_Fire_C.ExecuteUbergraph_BP_Projectile_Fire // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

