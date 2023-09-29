// BlueprintGeneratedClass BP_Spore_CrystalShield.BP_Spore_CrystalShield_C
// Size: 0x279 (Inherited: 0x220)
struct ABP_Spore_CrystalShield_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Sphere; // 0x228(0x08)
	struct USceneComponent* Scene; // 0x230(0x08)
	struct FName State; // 0x238(0x08)
	struct FLinearColor Color; // 0x240(0x10)
	int32_t Level; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct ABP_SpawnPoint_Crystal_C*> SpawnList; // 0x258(0x10)
	struct TArray<int32_t> IgnoreColorIDList; // 0x268(0x10)
	bool IsDestroy; // 0x278(0x01)

	void SDestroyCharacterInRange(); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.SDestroyCharacterInRange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckPickupCrystal(); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.SCheckPickupCrystal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckCrystal(); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.SCheckCrystal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SRemoveIgnoreColorID(int32_t ColorID); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.SRemoveIgnoreColorID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SAddIgnoreColorID(int32_t ColorID); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.SAddIgnoreColorID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SInit(); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.SInit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateState(); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateVFXShield(); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.CUpdateVFXShield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Spore_CrystalShield(int32_t EntryPoint); // Function BP_Spore_CrystalShield.BP_Spore_CrystalShield_C.ExecuteUbergraph_BP_Spore_CrystalShield // (Final|UbergraphFunction) // @ game+0x1ad0090
};

