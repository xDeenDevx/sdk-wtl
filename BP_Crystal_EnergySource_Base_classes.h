// BlueprintGeneratedClass BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C
// Size: 0x27c (Inherited: 0x220)
struct ABP_Crystal_EnergySource_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct UNiagaraComponent* NS_Crystal_Laser; // 0x238(0x08)
	struct UNiagaraComponent* NS_Crystal_Particles; // 0x240(0x08)
	struct UStaticMeshComponent* SM_LProp_Crystals_05; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float DeltaSec; // 0x258(0x04)
	int32_t ColorID; // 0x25c(0x04)
	char Energy; // 0x260(0x01)
	char MaxEnergy; // 0x261(0x01)
	char pad_262[0x2]; // 0x262(0x02)
	float CurrentEnergy; // 0x264(0x04)
	float TimeSpawnPickupCrystal; // 0x268(0x04)
	float ReloadSpawnPickupCrystal; // 0x26c(0x04)
	int32_t MaxSpawnPickupCrystal; // 0x270(0x04)
	bool IsDestroy; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	float NeedEnergy; // 0x278(0x04)

	void SRemoveCrystals(); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.SRemoveCrystals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SSpawnPickupCrystal(struct FVector SpawnLocation, bool UseEndLocation, struct FVector EndLocation); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.SSpawnPickupCrystal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SDelaySpawnPickupCrystal(); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.SDelaySpawnPickupCrystal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SAddEnergy(float Value); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.SAddEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateEnergy(); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.SUpdateEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateVFX(); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.CUpdateVFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Crystal_EnergySource_Base(int32_t EntryPoint); // Function BP_Crystal_EnergySource_Base.BP_Crystal_EnergySource_Base_C.ExecuteUbergraph_BP_Crystal_EnergySource_Base // (Final|UbergraphFunction) // @ game+0x1ad0090
};

