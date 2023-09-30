// BlueprintGeneratedClass BP_Walker_SplineMesh_V2.BP_Walker_SplineMesh_V2_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_Walker_SplineMesh_V2_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UArrowComponent* Arrow; // 0x228(0x08)
	struct USplineMeshComponent* SplineMesh; // 0x230(0x08)
	struct UMaterialInstanceDynamic* myDynamicMaterial; // 0x238(0x08)

	void UpdateMesh(float inStartLenght, float inCurrentLenght, struct USplineComponent* inSpline); // Function BP_Walker_SplineMesh_V2.BP_Walker_SplineMesh_V2_C.UpdateMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Walker_SplineMesh_V2.BP_Walker_SplineMesh_V2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Walker_SplineMesh_V2.BP_Walker_SplineMesh_V2_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Walker_SplineMesh_V2.BP_Walker_SplineMesh_V2_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Walker_SplineMesh_V2(int32_t EntryPoint); // Function BP_Walker_SplineMesh_V2.BP_Walker_SplineMesh_V2_C.ExecuteUbergraph_BP_Walker_SplineMesh_V2 // (Final|UbergraphFunction) // @ game+0x1ad0090
};

