// BlueprintGeneratedClass BP_MonsterBase.BP_MonsterBase_C
// Size: 0x11a0 (Inherited: 0xf10)
struct ABP_MonsterBase_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	float MaxSpeed; // 0xf18(0x04)
	float AccelerationSpeed; // 0xf1c(0x04)
	float DistanceSquare; // 0xf20(0x04)
	float ToSpeed; // 0xf24(0x04)
	float CurrentSpeed; // 0xf28(0x04)
	float DirectionTurn; // 0xf2c(0x04)
	float OldDirectionTurn; // 0xf30(0x04)
	float SpeedRotation; // 0xf34(0x04)
	float SpeedRatio; // 0xf38(0x04)
	float TimeInConeEnemy; // 0xf3c(0x04)
	float MyDeltaTime; // 0xf40(0x04)
	float TimeMove; // 0xf44(0x04)
	enum class StateMonster StateMonster; // 0xf48(0x01)
	enum class E_MonsterBiasMode BiasMode; // 0xf49(0x01)
	char Currenthit; // 0xf4a(0x01)
	enum class E_MoveToBase StateMoveTo; // 0xf4b(0x01)
	struct FRotator CurrentRotation; // 0xf4c(0x0c)
	struct FRotator AddRotatorCapsule; // 0xf58(0x0c)
	struct FRotator AddRotator; // 0xf64(0x0c)
	struct FRotator AddRotatorFromTarget; // 0xf70(0x0c)
	bool ReadyToAttack; // 0xf7c(0x01)
	bool WaitTurn; // 0xf7d(0x01)
	bool IsMoveForward; // 0xf7e(0x01)
	char pad_F7F[0x1]; // 0xf7f(0x01)
	struct FVector TargetLocation; // 0xf80(0x0c)
	struct FVector VectorForward; // 0xf8c(0x0c)
	struct FVector LocationStartMoveTo; // 0xf98(0x0c)
	struct FHitResult LeftHit; // 0xfa4(0x8c)
	struct FHitResult RightHit; // 0x1030(0x8c)
	struct FHitResult MIdleHit; // 0x10bc(0x8c)
	int32_t ToDirection; // 0x1148(0x04)
	int32_t BiasDirection; // 0x114c(0x04)
	struct AWTLCharacter* CharacterTemp; // 0x1150(0x08)
	struct UBTTask_BlueprintBase* TaskMoveTo; // 0x1158(0x08)
	struct AActor* MyTargetActor; // 0x1160(0x08)
	struct TArray<struct FDS_WayPoint> WayPoints; // 0x1168(0x10)
	struct TArray<struct APawn*> DamageInstigators; // 0x1178(0x10)
	struct UCharacterMovementComponent* MyCharacterMovement; // 0x1188(0x08)
	bool IsAttack; // 0x1190(0x01)
	bool IsUnderground; // 0x1191(0x01)
	bool IsDestroyObject; // 0x1192(0x01)
	char pad_1193[0x5]; // 0x1193(0x05)
	struct AActor* ProjectileStoneClass; // 0x1198(0x08)

	void SphereAttackV1(float InDistance, float InRadius, bool InIsMultiTrace, struct TArray<struct FHitResult>& OutHitsResult); // Function BP_MonsterBase.BP_MonsterBase_C.SphereAttackV1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void FarAttackBallLightning(struct FVector StartLocation, struct FVector EndLocation, float RadiusW, float Scale1D); // Function BP_MonsterBase.BP_MonsterBase_C.FarAttackBallLightning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetDirectionRotationFromEnemy (float AcceptableAngleFromEnemy, float& AngleYaw); // Function BP_MonsterBase.BP_MonsterBase_C.GetDirectionRotationFromEnemy  // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void GetDownPoint(struct FVector& Location); // Function BP_MonsterBase.BP_MonsterBase_C.GetDownPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void UpdateTimeMove(); // Function BP_MonsterBase.BP_MonsterBase_C.UpdateTimeMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateMoveFromTargetTrace(); // Function BP_MonsterBase.BP_MonsterBase_C.UpdateMoveFromTargetTrace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void MyAngleDirectionFromEnemy(float& ResultAngle); // Function BP_MonsterBase.BP_MonsterBase_C.MyAngleDirectionFromEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void GetVectorToEnemy(struct FVector& Vector); // Function BP_MonsterBase.BP_MonsterBase_C.GetVectorToEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void DecrementDeltaTimeOffConeEnemy(); // Function BP_MonsterBase.BP_MonsterBase_C.DecrementDeltaTimeOffConeEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void IncrementDeltaTimeInConeEnemy(); // Function BP_MonsterBase.BP_MonsterBase_C.IncrementDeltaTimeInConeEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckInConeEnemy(float HalfAngle, bool& Result); // Function BP_MonsterBase.BP_MonsterBase_C.CheckInConeEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void SetBiasMode(struct AActor* TargetActor, enum class E_MonsterBiasMode BiasMode); // Function BP_MonsterBase.BP_MonsterBase_C.SetBiasMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetRightTrace(bool& IsHit, float& LengthSquared); // Function BP_MonsterBase.BP_MonsterBase_C.GetRightTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void GetMidleTrace(bool& IsHit, float& LengthSquared); // Function BP_MonsterBase.BP_MonsterBase_C.GetMidleTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void GetLeftTrace(bool& IsHit, float& LengthSquared); // Function BP_MonsterBase.BP_MonsterBase_C.GetLeftTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void StopMove(); // Function BP_MonsterBase.BP_MonsterBase_C.StopMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void StartMove(); // Function BP_MonsterBase.BP_MonsterBase_C.StartMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateMoveToBase(); // Function BP_MonsterBase.BP_MonsterBase_C.UpdateMoveToBase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void FarAttackStone(struct FVector StartLocation, struct FVector EndLocation, float RadiusW, float Scale1D); // Function BP_MonsterBase.BP_MonsterBase_C.FarAttackStone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void AddImpulseToCharacter(struct AWTLCharacter* Character, struct FVector Vector, float Power); // Function BP_MonsterBase.BP_MonsterBase_C.AddImpulseToCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void EffectToCharacter(struct AWTLCharacter* Character, float Chance, enum class EWTLCharacterEffectType Effect, float MinAmount, float MaxAmount); // Function BP_MonsterBase.BP_MonsterBase_C.EffectToCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void DamageToCharacter(struct AActor* Object, float DamageMultiplier, bool InCheckVisible, struct AWTLCharacter*& Character); // Function BP_MonsterBase.BP_MonsterBase_C.DamageToCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ClearDamageInstigators(); // Function BP_MonsterBase.BP_MonsterBase_C.ClearDamageInstigators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetRandomInstigator(struct APawn*& Result); // Function BP_MonsterBase.BP_MonsterBase_C.GetRandomInstigator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void AddDamageInstigator(struct APawn* DamageInstigator); // Function BP_MonsterBase.BP_MonsterBase_C.AddDamageInstigator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnNotifyEnd_8ABCD9F545F02F37885D9DBAFD8EF8A3(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyEnd_8ABCD9F545F02F37885D9DBAFD8EF8A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnNotifyBegin_8ABCD9F545F02F37885D9DBAFD8EF8A3(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyBegin_8ABCD9F545F02F37885D9DBAFD8EF8A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnInterrupted_8ABCD9F545F02F37885D9DBAFD8EF8A3(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnInterrupted_8ABCD9F545F02F37885D9DBAFD8EF8A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnBlendOut_8ABCD9F545F02F37885D9DBAFD8EF8A3(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnBlendOut_8ABCD9F545F02F37885D9DBAFD8EF8A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnCompleted_8ABCD9F545F02F37885D9DBAFD8EF8A3(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnCompleted_8ABCD9F545F02F37885D9DBAFD8EF8A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnNotifyEnd_D60F49D045A1DD8A024745BFDC6F4742(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyEnd_D60F49D045A1DD8A024745BFDC6F4742 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnNotifyBegin_D60F49D045A1DD8A024745BFDC6F4742(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyBegin_D60F49D045A1DD8A024745BFDC6F4742 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnInterrupted_D60F49D045A1DD8A024745BFDC6F4742(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnInterrupted_D60F49D045A1DD8A024745BFDC6F4742 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnBlendOut_D60F49D045A1DD8A024745BFDC6F4742(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnBlendOut_D60F49D045A1DD8A024745BFDC6F4742 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnCompleted_D60F49D045A1DD8A024745BFDC6F4742(struct FName NotifyName); // Function BP_MonsterBase.BP_MonsterBase_C.OnCompleted_D60F49D045A1DD8A024745BFDC6F4742 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_MonsterBase.BP_MonsterBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnHeavyDamage(bool Value); // Function BP_MonsterBase.BP_MonsterBase_C.OnHeavyDamage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_MonsterBase.BP_MonsterBase_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnReplicatedMovement(float DeltaTime); // Function BP_MonsterBase.BP_MonsterBase_C.OnReplicatedMovement // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_MonsterBase.BP_MonsterBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void OnRep_RunAttack(enum class EWTLMonsterActionType IDAction); // Function BP_MonsterBase.BP_MonsterBase_C.OnRep_RunAttack // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_MonsterBase(int32_t EntryPoint); // Function BP_MonsterBase.BP_MonsterBase_C.ExecuteUbergraph_BP_MonsterBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

