// BlueprintGeneratedClass BP_SplineToUp.BP_SplineToUp_C
// Size: 0x29d (Inherited: 0x220)
struct ABP_SplineToUp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x228(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x230(0x08)
	struct UNiagaraComponent* NS_TintacleUp; // 0x238(0x08)
	struct UBillboardComponent* billboard; // 0x240(0x08)
	int32_t CountSpline; // 0x248(0x04)
	float DeltaSec; // 0x24c(0x04)
	struct TArray<struct USplineComponent*> SplineList; // 0x250(0x10)
	struct FName State; // 0x260(0x08)
	struct FVector CurrentVector; // 0x268(0x0c)
	float HeightStep; // 0x274(0x04)
	float CurrentHeight; // 0x278(0x04)
	float MaxHeight; // 0x27c(0x04)
	float AngularStep; // 0x280(0x04)
	float Radius; // 0x284(0x04)
	float MinRadius; // 0x288(0x04)
	float MaxRadius; // 0x28c(0x04)
	float CurrentLenght; // 0x290(0x04)
	float OldLenght; // 0x294(0x04)
	float MaxLenght; // 0x298(0x04)
	bool IsDeactivate; // 0x29c(0x01)

	void CheckOwner(); // Function BP_SplineToUp.BP_SplineToUp_C.CheckOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateDestroy(); // Function BP_SplineToUp.BP_SplineToUp_C.UpdateDestroy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateNS(); // Function BP_SplineToUp.BP_SplineToUp_C.UpdateNS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateLenght(); // Function BP_SplineToUp.BP_SplineToUp_C.UpdateLenght // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void AddWalkerSplineMesh(float InDistance, struct USplineComponent* SplineOwner); // Function BP_SplineToUp.BP_SplineToUp_C.AddWalkerSplineMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GenerateSpline(); // Function BP_SplineToUp.BP_SplineToUp_C.GenerateSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CInit(); // Function BP_SplineToUp.BP_SplineToUp_C.CInit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_SplineToUp.BP_SplineToUp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_SplineToUp.BP_SplineToUp_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_SplineToUp(int32_t EntryPoint); // Function BP_SplineToUp.BP_SplineToUp_C.ExecuteUbergraph_BP_SplineToUp // (Final|UbergraphFunction) // @ game+0x1ad0090
};

