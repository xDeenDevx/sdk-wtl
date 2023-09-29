// BlueprintGeneratedClass BP_Walker_SplineMesh.BP_Walker_SplineMesh_C
// Size: 0x259 (Inherited: 0x220)
struct ABP_Walker_SplineMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UArrowComponent* Arrow; // 0x228(0x08)
	struct USplineMeshComponent* SplineMesh; // 0x230(0x08)
	struct USplineComponent* mySpline; // 0x238(0x08)
	float myPositionDistance; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UMaterialInstanceDynamic* myDynamicMaterial; // 0x248(0x08)
	struct ABP_Walker_Spore_C* MyWalker; // 0x250(0x08)
	bool IsDeath; // 0x258(0x01)

	void UpdateMesh(); // Function BP_Walker_SplineMesh.BP_Walker_SplineMesh_C.UpdateMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init Mesh(struct UStaticMesh* NewStaticMesh, struct USplineComponent* Spline, float PositionDistance, struct ABP_Walker_Spore_C* InWalker); // Function BP_Walker_SplineMesh.BP_Walker_SplineMesh_C.Init Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Walker_SplineMesh.BP_Walker_SplineMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Walker_SplineMesh.BP_Walker_SplineMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Walker_SplineMesh(int32_t EntryPoint); // Function BP_Walker_SplineMesh.BP_Walker_SplineMesh_C.ExecuteUbergraph_BP_Walker_SplineMesh // (Final|UbergraphFunction) // @ game+0x1ad0090
};

