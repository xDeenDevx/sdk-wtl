// BlueprintGeneratedClass BP_Walker_Spore.BP_Walker_Spore_C
// Size: 0x31d (Inherited: 0x280)
struct ABP_Walker_Spore_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Fey_Ult_Seed; // 0x288(0x08)
	struct UArrowComponent* Arrow; // 0x290(0x08)
	struct UBillboardComponent* billboard; // 0x298(0x08)
	struct USphereComponent* Sphere; // 0x2a0(0x08)
	float DeltaSec; // 0x2a8(0x04)
	struct FVector StartLocation; // 0x2ac(0x0c)
	struct USplineComponent* mySpline; // 0x2b8(0x08)
	struct FVector TargetLocation; // 0x2c0(0x0c)
	struct FVector ImpactNormal; // 0x2cc(0x0c)
	float Speed; // 0x2d8(0x04)
	struct FVector ImpactPoint; // 0x2dc(0x0c)
	struct FVector OldImpactPoint; // 0x2e8(0x0c)
	int32_t DirID; // 0x2f4(0x04)
	float OldLenght; // 0x2f8(0x04)
	int32_t SetDirID; // 0x2fc(0x04)
	float OldLenght100; // 0x300(0x04)
	bool IsUpdateSplinePoints; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	int32_t CurrentPointID; // 0x308(0x04)
	int32_t CountIteration; // 0x30c(0x04)
	int32_t Counter; // 0x310(0x04)
	bool IsStartWalkerOnClient; // 0x314(0x01)
	bool IsFinish; // 0x315(0x01)
	char pad_316[0x2]; // 0x316(0x02)
	float CurrentLenght; // 0x318(0x04)
	bool SpawnSpore; // 0x31c(0x01)

	void UpdateSplinePoints(); // Function BP_Walker_Spore.BP_Walker_Spore_C.UpdateSplinePoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckSplineLenght(); // Function BP_Walker_Spore.BP_Walker_Spore_C.CheckSplineLenght // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void AddWalkerSplineMesh(float InDistance); // Function BP_Walker_Spore.BP_Walker_Spore_C.AddWalkerSplineMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateMovement(); // Function BP_Walker_Spore.BP_Walker_Spore_C.UpdateMovement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init(); // Function BP_Walker_Spore.BP_Walker_Spore_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Walker_Spore.BP_Walker_Spore_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Walker_Spore.BP_Walker_Spore_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Walker_Spore(int32_t EntryPoint); // Function BP_Walker_Spore.BP_Walker_Spore_C.ExecuteUbergraph_BP_Walker_Spore // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

