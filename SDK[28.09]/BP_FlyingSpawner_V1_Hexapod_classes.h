// BlueprintGeneratedClass BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C
// Size: 0x318 (Inherited: 0x2f4)
struct ABP_FlyingSpawner_V1_Hexapod_C : ABP_FlyingSpawner_V1_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UFMODAudioComponent* FE_Monster_Dino_Roar_01_1; // 0x300(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x308(0x08)
	struct UParticleSystemComponent* P_UltimateLooping; // 0x310(0x08)

	void OnDeath(); // Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.OnDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateVFX(); // Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.CUpdateVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_FlyingSpawner_V1_Hexapod(int32_t EntryPoint); // Function BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C.ExecuteUbergraph_BP_FlyingSpawner_V1_Hexapod // (Final|UbergraphFunction) // @ game+0x1ad0090
};

