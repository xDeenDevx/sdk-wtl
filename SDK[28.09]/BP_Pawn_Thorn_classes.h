// BlueprintGeneratedClass BP_Pawn_Thorn.BP_Pawn_Thorn_C
// Size: 0xfe4 (Inherited: 0xf10)
struct ABP_Pawn_Thorn_C : AWTLMonsterPawnInputMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UFMODAudioComponent* FE_Monster_Devourer_Spike_00; // 0xf18(0x08)
	struct UBP_BulletHell_ConeAttack_C* BP_BulletHell_ConeAttack; // 0xf20(0x08)
	struct UAIPerceptionComponent* AIPerception; // 0xf28(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0xf30(0x08)
	float DeltaSec; // 0xf38(0x04)
	float TimeToNesxtFlyLocation; // 0xf3c(0x04)
	float MaxFlyDistance; // 0xf40(0x04)
	float TimeReloadAttack; // 0xf44(0x04)
	float CurrentReloadAttack; // 0xf48(0x04)
	struct FVector SpawnLocation; // 0xf4c(0x0c)
	struct FVector TargetLocation; // 0xf58(0x0c)
	struct FVector LookAtLocation; // 0xf64(0x0c)
	struct FVector VectorHitOffset; // 0xf70(0x0c)
	char pad_F7C[0x4]; // 0xf7c(0x04)
	struct AActor* TargetActor; // 0xf80(0x08)
	struct FRotator CurrentFlyRotation; // 0xf88(0x0c)
	struct FRotator DesiredFlyRotation; // 0xf94(0x0c)
	struct FRotator CurrentLookRotation; // 0xfa0(0x0c)
	struct FRotator DesiredLookRotation; // 0xfac(0x0c)
	bool IsDeath; // 0xfb8(0x01)
	char TraceID; // 0xfb9(0x01)
	char pad_FBA[0x2]; // 0xfba(0x02)
	float Reload; // 0xfbc(0x04)
	struct FWTLMonsterDeathData DeathData; // 0xfc0(0x24)

	void Attack(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.Attack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateDeath(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.UpdateDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SApplyDamageToTargetActor(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SApplyDamageToTargetActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CDrawAttackTracer(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.CDrawAttackTracer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SActorIsEnemy(struct AActor* pActor, bool& Result, struct AActor*& Actor); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SActorIsEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void SUpdateAttack(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SUpdateAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateTargetActor(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SUpdateTargetActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void DrawDebug(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.DrawDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateHitTrace(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SUpdateHitTrace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateInput(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SUpdateInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateRotation(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SUpdateRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetRandomLocation(struct FVector& Location); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.GetRandomLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void SUpdateFlying(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.SUpdateFlying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnActionTrigger(struct FName ActionName); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.OnActionTrigger // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDeathBpEvent(struct FWTLMonsterDeathData DeathData); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.OnDeathBpEvent // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnDeathEvent(); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.K2_OnDeathEvent // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_Pawn_CanyonHornet_V2_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(struct AActor* Actor, struct FAIStimulus Stimulus); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.BndEvt__BP_Pawn_CanyonHornet_V2_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnServerDeathBpEvent(struct FWTLMonsterDeathData DeathData); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.OnServerDeathBpEvent // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Pawn_Thorn(int32_t EntryPoint); // Function BP_Pawn_Thorn.BP_Pawn_Thorn_C.ExecuteUbergraph_BP_Pawn_Thorn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

