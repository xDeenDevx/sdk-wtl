// BlueprintGeneratedClass BP_Walker_Spore_V2.BP_Walker_Spore_V2_C
// Size: 0x306 (Inherited: 0x280)
struct ABP_Walker_Spore_V2_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Fey_Ult_Seed; // 0x288(0x08)
	struct UArrowComponent* Arrow; // 0x290(0x08)
	struct UBillboardComponent* billboard; // 0x298(0x08)
	struct USphereComponent* Sphere; // 0x2a0(0x08)
	float DeltaSec; // 0x2a8(0x04)
	struct FVector StartLocation; // 0x2ac(0x0c)
	struct USplineComponent* mySpline; // 0x2b8(0x08)
	struct FVector TargetLocation; // 0x2c0(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct AActor* myOwner; // 0x2d0(0x08)
	bool IsUpdatePoints; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t StateUpdatePoints; // 0x2dc(0x04)
	int32_t CurrentIDSplinePoint; // 0x2e0(0x04)
	float CurrentLenght; // 0x2e4(0x04)
	float OldLenght; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct ABP_Walker_SplineMesh_V2_C*> Meshes; // 0x2f0(0x10)
	float Speed; // 0x300(0x04)
	bool IsAddSplineMesh; // 0x304(0x01)
	bool IsDestroy; // 0x305(0x01)

	void CRemoveAllMeshes(); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.CRemoveAllMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void DeactivateWalker(); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.DeactivateWalker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateSplineMesh(); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.UpdateSplineMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdatePoints(); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.UpdatePoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SInit(struct FVector inStartLocation, struct FVector InTargetLocation, struct AActor* inOwner); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.SInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Walker_Spore_V2(int32_t EntryPoint); // Function BP_Walker_Spore_V2.BP_Walker_Spore_V2_C.ExecuteUbergraph_BP_Walker_Spore_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

