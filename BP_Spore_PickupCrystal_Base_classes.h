// BlueprintGeneratedClass BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C
// Size: 0x294 (Inherited: 0x220)
struct ABP_Spore_PickupCrystal_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FE_SlotMachine_CylinderStop_Beep3; // 0x228(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x230(0x08)
	struct USphereComponent* Sphere; // 0x238(0x08)
	float DeltaSec; // 0x240(0x04)
	struct FLinearColor EmissiveColor; // 0x244(0x10)
	float EmissivePower; // 0x254(0x04)
	struct FName State; // 0x258(0x08)
	struct FVector DesiredLocation; // 0x260(0x0c)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct AActor* MyCrystal; // 0x270(0x08)
	struct AActor* DesiredClassCrystal; // 0x278(0x08)
	int32_t ColorID; // 0x280(0x04)
	bool UseEndLocation; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct FVector EndLocation; // 0x288(0x0c)

	void Init(); // Function BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateState(); // Function BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UserConstructionScript(); // Function BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_SporeCrystal_Base_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C.BndEvt__BP_SporeCrystal_Base_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Spore_PickupCrystal_Base(int32_t EntryPoint); // Function BP_Spore_PickupCrystal_Base.BP_Spore_PickupCrystal_Base_C.ExecuteUbergraph_BP_Spore_PickupCrystal_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

