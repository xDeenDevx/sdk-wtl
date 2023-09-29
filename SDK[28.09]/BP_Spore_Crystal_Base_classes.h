// BlueprintGeneratedClass BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C
// Size: 0x2bd (Inherited: 0x220)
struct ABP_Spore_Crystal_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x228(0x08)
	struct UStaticMeshComponent* Sphere; // 0x230(0x08)
	struct USphereComponent* SpherePush; // 0x238(0x08)
	struct UNiagaraComponent* NS_Crystal_Laser; // 0x240(0x08)
	struct UStaticMeshComponent* SM_LProp_Crystals_01; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct FLinearColor ColorA; // 0x258(0x10)
	struct FLinearColor ColorB; // 0x268(0x10)
	float DeltaSec; // 0x278(0x04)
	float MaxSpeed; // 0x27c(0x04)
	bool IsDestroy; // 0x280(0x01)
	bool IsFreeze; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	int32_t MyColorID; // 0x284(0x04)
	struct FVector StartLocation; // 0x288(0x0c)
	struct FVector EndLocation; // 0x294(0x0c)
	int32_t SpeedMode; // 0x2a0(0x04)
	int32_t MoveDirection; // 0x2a4(0x04)
	bool IsLocationCorrection; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	struct FVector CorrectLocation; // 0x2ac(0x0c)
	float WaitUpdateCorrectLocation; // 0x2b8(0x04)
	bool IsCheckCrystal; // 0x2bc(0x01)

	void CUpdateLocationSound(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.CUpdateLocationSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateRotation(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.CUpdateRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnRep_CorrectLocation(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.OnRep_CorrectLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateCorrectLocation(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.SUpdateCorrectLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	struct FVector GetForwardDir(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.GetForwardDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	float GetSpeed(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.GetSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void CUpdateLaser(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.CUpdateLaser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateColor(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.CUpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckCrystalEnergySource(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.SCheckCrystalEnergySource // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateGround(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.SUpdateGround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateMove(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.UpdateMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateOverlap(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.SUpdateOverlap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UserConstructionScript(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Spore_Crystal_Base(int32_t EntryPoint); // Function BP_Spore_Crystal_Base.BP_Spore_Crystal_Base_C.ExecuteUbergraph_BP_Spore_Crystal_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

