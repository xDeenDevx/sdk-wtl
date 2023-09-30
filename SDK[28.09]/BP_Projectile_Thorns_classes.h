// BlueprintGeneratedClass BP_Projectile_Thorns.BP_Projectile_Thorns_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_Projectile_Thorns_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float DeltaSec; // 0x230(0x04)
	float Distance; // 0x234(0x04)
	float CurrentDistance; // 0x238(0x04)
	float Width; // 0x23c(0x04)
	float Speed; // 0x240(0x04)
	float Deep; // 0x244(0x04)
	struct FVector StartLocation; // 0x248(0x0c)
	struct FVector CurrentLocation; // 0x254(0x0c)
	struct FVector DesiredLocation; // 0x260(0x0c)
	bool RIsDestroy; // 0x26c(0x01)
	bool IsDestroy; // 0x26d(0x01)
	char pad_26E[0x2]; // 0x26e(0x02)
	float DelayDamage; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UParticleSystemComponent* PartSys; // 0x278(0x08)
	struct UFMODAudioComponent* FMODSound; // 0x280(0x08)

	void SUpdateDamage(); // Function BP_Projectile_Thorns.BP_Projectile_Thorns_C.SUpdateDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateMove(); // Function BP_Projectile_Thorns.BP_Projectile_Thorns_C.UpdateMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Projectile_Thorns.BP_Projectile_Thorns_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Projectile_Thorns.BP_Projectile_Thorns_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroy(); // Function BP_Projectile_Thorns.BP_Projectile_Thorns_C.OnDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_Projectile_Thorns.BP_Projectile_Thorns_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Projectile_Thorns(int32_t EntryPoint); // Function BP_Projectile_Thorns.BP_Projectile_Thorns_C.ExecuteUbergraph_BP_Projectile_Thorns // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

