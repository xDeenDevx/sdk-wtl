// BlueprintGeneratedClass BP_Character_Explosion.BP_Character_Explosion_C
// Size: 0x2a0 (Inherited: 0x220)
struct ABP_Character_Explosion_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* BloodDecal; // 0x228(0x08)
	struct USphereComponent* Skeleton; // 0x230(0x08)
	struct UParticleSystemComponent* Blood; // 0x238(0x08)
	struct USphereComponent* RootSphere; // 0x240(0x08)
	struct UStaticMeshComponent* Bone7; // 0x248(0x08)
	struct UStaticMeshComponent* Bone6; // 0x250(0x08)
	struct UStaticMeshComponent* Bone5; // 0x258(0x08)
	struct UStaticMeshComponent* Bone4; // 0x260(0x08)
	struct UStaticMeshComponent* Skull; // 0x268(0x08)
	struct UStaticMeshComponent* Bone2; // 0x270(0x08)
	struct UStaticMeshComponent* Bone1; // 0x278(0x08)
	struct UStaticMeshComponent* Bone; // 0x280(0x08)
	struct UStaticMeshComponent* Ribs; // 0x288(0x08)
	struct UStaticMeshComponent* Bone3; // 0x290(0x08)
	float DisValue; // 0x298(0x04)
	float DisSpeed; // 0x29c(0x04)

	void SetDissolveValue(struct UStaticMeshComponent* InComponent); // Function BP_Character_Explosion.BP_Character_Explosion_C.SetDissolveValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateDissolve(); // Function BP_Character_Explosion.BP_Character_Explosion_C.UpdateDissolve // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Impulse(struct UStaticMeshComponent* InComponent); // Function BP_Character_Explosion.BP_Character_Explosion_C.Impulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Character_Explosion.BP_Character_Explosion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Character_Explosion.BP_Character_Explosion_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Character_Explosion(int32_t EntryPoint); // Function BP_Character_Explosion.BP_Character_Explosion_C.ExecuteUbergraph_BP_Character_Explosion // (Final|UbergraphFunction) // @ game+0x1ad0090
};

