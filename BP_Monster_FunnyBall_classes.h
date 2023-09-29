// BlueprintGeneratedClass BP_Monster_FunnyBall.BP_Monster_FunnyBall_C
// Size: 0xf84 (Inherited: 0xf10)
struct ABP_Monster_FunnyBall_C : AWTLMonsterPawnBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0xf18(0x08)
	struct UStaticMeshComponent* ST_AlienSporeSphera01; // 0xf20(0x08)
	struct USceneComponent* Scene; // 0xf28(0x08)
	float DeltaSec; // 0xf30(0x04)
	char pad_F34[0x4]; // 0xf34(0x04)
	struct AActor* MyTarget; // 0xf38(0x08)
	struct FRotator CurrentRotation; // 0xf40(0x0c)
	struct FRotator TargetRotation; // 0xf4c(0x0c)
	struct FVector CurrentDirection; // 0xf58(0x0c)
	struct FVector DesiredDirection; // 0xf64(0x0c)
	bool IsDeath; // 0xf70(0x01)
	bool IsCanGiveDamage; // 0xf71(0x01)
	char pad_F72[0x2]; // 0xf72(0x02)
	struct FVector SpawnLocation; // 0xf74(0x0c)
	float WalkingDistance; // 0xf80(0x04)

	void OnDeath(); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.OnDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateAccRotation(); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.CUpdateAccRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateMoveToTarget(); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.SUpdateMoveToTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SFindTarget(); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.SFindTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_Monster_SphereWithThorns_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.BndEvt__BP_Monster_SphereWithThorns_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_FunnyBall(int32_t EntryPoint); // Function BP_Monster_FunnyBall.BP_Monster_FunnyBall_C.ExecuteUbergraph_BP_Monster_FunnyBall // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

