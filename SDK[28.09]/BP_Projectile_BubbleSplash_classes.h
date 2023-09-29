// BlueprintGeneratedClass BP_Projectile_BubbleSplash.BP_Projectile_BubbleSplash_C
// Size: 0x270 (Inherited: 0x220)
struct ABP_Projectile_BubbleSplash_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FE_Anomaly_FireField_Splash; // 0x228(0x08)
	struct UStaticMeshComponent* ST_ProgectX_AlienEgg03; // 0x230(0x08)
	struct USceneComponent* Scene; // 0x238(0x08)
	struct USphereComponent* Sphere; // 0x240(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x248(0x08)
	struct FVector DownLocation; // 0x250(0x0c)
	struct FVector UpLocation; // 0x25c(0x0c)
	struct ABP_Actor_BubbleSplash_Zone_C* MyBubbleSplashZone; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function BP_Projectile_BubbleSplash.BP_Projectile_BubbleSplash_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_Projectile_BubbleSplash_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Projectile_BubbleSplash.BP_Projectile_BubbleSplash_C.BndEvt__BP_Projectile_BubbleSplash_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void OnSplash(struct FVector SplashLocation); // Function BP_Projectile_BubbleSplash.BP_Projectile_BubbleSplash_C.OnSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Projectile_BubbleSplash(int32_t EntryPoint); // Function BP_Projectile_BubbleSplash.BP_Projectile_BubbleSplash_C.ExecuteUbergraph_BP_Projectile_BubbleSplash // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

