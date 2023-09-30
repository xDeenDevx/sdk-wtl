// BlueprintGeneratedClass BP_ElectronicBait.BP_ElectronicBait_C
// Size: 0x422 (Inherited: 0x408)
struct ABP_ElectronicBait_C : AWTLElectronicBait {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UFMODAudioComponent* NoiseComponent; // 0x410(0x08)
	struct UParticleSystemComponent* Particles_Sparks; // 0x418(0x08)
	bool IsActive; // 0x420(0x01)
	bool IsCharged; // 0x421(0x01)

	void OnRep_IsCharged(); // Function BP_ElectronicBait.BP_ElectronicBait_C.OnRep_IsCharged // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnDestroyed(); // Function BP_ElectronicBait.BP_ElectronicBait_C.K2_OnDestroyed // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void Deactivate(); // Function BP_ElectronicBait.BP_ElectronicBait_C.Deactivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Activate(); // Function BP_ElectronicBait.BP_ElectronicBait_C.Activate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnEnergyChanged(float EnergyValue); // Function BP_ElectronicBait.BP_ElectronicBait_C.OnEnergyChanged // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_ElectronicBait.BP_ElectronicBait_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void OnConditionChanged(float ConditionValue); // Function BP_ElectronicBait.BP_ElectronicBait_C.OnConditionChanged // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BPCharged(); // Function BP_ElectronicBait.BP_ElectronicBait_C.BPCharged // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_ElectronicBait(int32_t EntryPoint); // Function BP_ElectronicBait.BP_ElectronicBait_C.ExecuteUbergraph_BP_ElectronicBait // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

