// BlueprintGeneratedClass BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C
// Size: 0x2b8 (Inherited: 0x220)
struct ABP_ControllerOfFlyingSpawners_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FE_Spore_Overlord_03_1; // 0x228(0x08)
	struct UFMODAudioComponent* FE_Spore_Overlord_01_1; // 0x230(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x238(0x08)
	struct UArrowComponent* Arrow; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float DeltaSec; // 0x250(0x04)
	float StartTimeSeconds; // 0x254(0x04)
	int32_t CountSpawn; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct AActor*> SpawnComponentList; // 0x260(0x10)
	struct FRotator DesiredRotation; // 0x270(0x0c)
	float AngularSpeed; // 0x27c(0x04)
	bool IsReady; // 0x280(0x01)
	bool IsDestroy; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct TArray<struct FVector> SpawnerLocations; // 0x288(0x10)
	float myTime; // 0x298(0x04)
	struct FName StateAFX; // 0x29c(0x08)
	int32_t CurrentSpawnerIDSound; // 0x2a4(0x04)
	struct TArray<struct AActor*> AliveSpawnerList; // 0x2a8(0x10)

	void CUpdateLocationFX(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.CUpdateLocationFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void DestroyAllSpawner(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.DestroyAllSpawner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckSpawners(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.CheckSpawners // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateRotation(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.UpdateRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CalculateCurrentRotation(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.CalculateCurrentRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateAFX(); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.CUpdateAFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_ControllerOfFlyingSpawners_Base(int32_t EntryPoint); // Function BP_ControllerOfFlyingSpawners_Base.BP_ControllerOfFlyingSpawners_Base_C.ExecuteUbergraph_BP_ControllerOfFlyingSpawners_Base // (Final|UbergraphFunction) // @ game+0x1ad0090
};

