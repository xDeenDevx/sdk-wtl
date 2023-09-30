// BlueprintGeneratedClass BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C
// Size: 0x127c (Inherited: 0x1240)
struct ABP_Shuttle_Spawn_RangSymbiont_Base_C : ABP_Shuttle_Spawn_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1240(0x08)
	struct UParticleSystemComponent* P_ElectroExpo; // 0x1248(0x08)
	struct UFMODAudioComponent* FE_AirFriction; // 0x1250(0x08)
	struct USkeletalMeshComponent* SK_UfoCapsule2; // 0x1258(0x08)
	struct USkeletalMeshComponent* SK_UfoCapsule1; // 0x1260(0x08)
	struct USkeletalMeshComponent* SK_UfoCapsule; // 0x1268(0x08)
	struct UMaterialInstance* MeshMaterial; // 0x1270(0x08)
	float ReLifeTime; // 0x1278(0x04)

	void ReceiveBeginPlay(); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void COnActivationStarted(); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnActivationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void COnBeginPlayFinish(); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnBeginPlayFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void COnHitLanded(); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnHitLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnActivationFinish(); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.SOnActivationFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnSpawnMonster(); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.SOnSpawnMonster // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void COnDestroySpawn(); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.COnDestroySpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Shuttle_Spawn_RangSymbiont_Base(int32_t EntryPoint); // Function BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C.ExecuteUbergraph_BP_Shuttle_Spawn_RangSymbiont_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

