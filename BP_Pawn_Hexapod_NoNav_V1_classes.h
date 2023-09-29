// BlueprintGeneratedClass BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C
// Size: 0xf85 (Inherited: 0xf10)
struct ABP_Pawn_Hexapod_NoNav_V1_C : AWTLMonsterPawnBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	float DeltaSec; // 0xf18(0x04)
	float GrowthTime; // 0xf1c(0x04)
	float MaxGrowthTime; // 0xf20(0x04)
	float WalkDistance; // 0xf24(0x04)
	struct FName State; // 0xf28(0x08)
	struct FVector InputDir; // 0xf30(0x0c)
	struct FVector CurrentDir; // 0xf3c(0x0c)
	struct FVector DesiredDir; // 0xf48(0x0c)
	char pad_F54[0x4]; // 0xf54(0x04)
	struct AActor* MyEnemy; // 0xf58(0x08)
	struct FVector TempDir; // 0xf60(0x0c)
	float MultiplySpeedRotation; // 0xf6c(0x04)
	float FrightRadius; // 0xf70(0x04)
	float AttackDistance; // 0xf74(0x04)
	float RemainingActionTime; // 0xf78(0x04)
	float DelayForCheck; // 0xf7c(0x04)
	float MeshScale; // 0xf80(0x04)
	bool IsDeath; // 0xf84(0x01)

	void CUpdateOrientRotationToMove(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.CUpdateOrientRotationToMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckAttackEnemy(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.SCheckAttackEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCalculateMultiSpeedRotation(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.SCalculateMultiSpeedRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateTempDir(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.SUpdateTempDir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckEnemy(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.SCheckEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateFright(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.SUpdateFright // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateMovement(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.SUpdateMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCalculateDir(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.SCalculateDir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void DrawDebug(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.DrawDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	struct FVector GetDesiredLocation(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.GetDesiredLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void UpdateRotation(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.UpdateRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateGrowth(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.UpdateGrowth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_Pawn_HexapodSmall_NoNav_V1_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.BndEvt__BP_Pawn_HexapodSmall_NoNav_V1_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void OnActionTrigger(struct FName ActionName); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.OnActionTrigger // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Pawn_Hexapod_NoNav_V1(int32_t EntryPoint); // Function BP_Pawn_Hexapod_NoNav_V1.BP_Pawn_Hexapod_NoNav_V1_C.ExecuteUbergraph_BP_Pawn_Hexapod_NoNav_V1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

