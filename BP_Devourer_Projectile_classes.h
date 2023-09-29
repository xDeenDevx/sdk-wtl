// BlueprintGeneratedClass BP_Devourer_Projectile.BP_Devourer_Projectile_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_Devourer_Projectile_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x228(0x08)
	struct UStaticMeshComponent* SM_AlienSpiderCecoaliensa_Projectile; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool IsSpikeRemoved; // 0x240(0x01)
	enum class EWTLCharacterStunhitDirection SpikeLocation; // 0x241(0x01)
	char pad_242[0x2]; // 0x242(0x02)
	struct FVector StartLocation; // 0x244(0x0c)

	void GetMesh(struct UStaticMeshComponent*& SM_AlienSpiderCecoaliensa_Projectile); // Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.GetMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void OnBloodSplatter(); // Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.OnBloodSplatter // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Devourer_Projectile(int32_t EntryPoint); // Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ExecuteUbergraph_BP_Devourer_Projectile // (Final|UbergraphFunction) // @ game+0x1ad0090
};

