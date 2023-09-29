// BlueprintGeneratedClass BP_Swarm_1.BP_Swarm_0_C
// Size: 0xf55 (Inherited: 0xf10)
struct ABP_Swarm_0_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UParticleSystemComponent* PS_PhaseShift_Looping; // 0xf18(0x08)
	struct UFMODAudioComponent* FE_Flies; // 0xf20(0x08)
	struct AActor* mTargetActor; // 0xf28(0x08)
	float DeltaSec; // 0xf30(0x04)
	float DelayFindTargetTime; // 0xf34(0x04)
	struct FVector StartLocation; // 0xf38(0x0c)
	float SpeedRotation; // 0xf44(0x04)
	float DesiredSpeedRotation; // 0xf48(0x04)
	float TimeChangeSpeedRotation; // 0xf4c(0x04)
	float TimeReloadAttack; // 0xf50(0x04)
	bool IsDeath; // 0xf54(0x01)

	void SUpdateAttackEnemy(); // Function BP_Swarm_1.BP_Swarm_0_C.SUpdateAttackEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateSpeedRotation(); // Function BP_Swarm_1.BP_Swarm_0_C.SUpdateSpeedRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateMovement(); // Function BP_Swarm_1.BP_Swarm_0_C.SUpdateMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateRotation(); // Function BP_Swarm_1.BP_Swarm_0_C.SUpdateRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckTargetActor(bool& Result); // Function BP_Swarm_1.BP_Swarm_0_C.SCheckTargetActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void SFindTarget(); // Function BP_Swarm_1.BP_Swarm_0_C.SFindTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Swarm_1.BP_Swarm_0_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Swarm_1.BP_Swarm_0_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Swarm_1.BP_Swarm_0_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Swarm_1(int32_t EntryPoint); // Function BP_Swarm_1.BP_Swarm_0_C.ExecuteUbergraph_BP_Swarm_1 // (Final|UbergraphFunction) // @ game+0x1ad0090
};

