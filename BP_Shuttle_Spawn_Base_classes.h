// BlueprintGeneratedClass BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C
// Size: 0x1240 (Inherited: 0x11a0)
struct ABP_Shuttle_Spawn_Base_C : ABP_MonsterBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11a0(0x08)
	struct UNiagaraComponent* NS_Shuttle_Tail; // 0x11a8(0x08)
	struct UParticleSystemComponent* PS_LandedExplosion_V01; // 0x11b0(0x08)
	struct UParticleSystemComponent* PS_Atmospheric_Explosion_V1; // 0x11b8(0x08)
	struct UParticleSystemComponent* PS_AirFriction_V01; // 0x11c0(0x08)
	struct AWTLMonsterPawn* MonsterSpawn; // 0x11c8(0x08)
	int32_t MinLevelSpawn; // 0x11d0(0x04)
	int32_t MaxLevelSpawn; // 0x11d4(0x04)
	int32_t CountMonster; // 0x11d8(0x04)
	int32_t MaxAliveMonsters; // 0x11dc(0x04)
	bool StealthMode; // 0x11e0(0x01)
	char pad_11E1[0x3]; // 0x11e1(0x03)
	float DeltaSec; // 0x11e4(0x04)
	bool IsLanded; // 0x11e8(0x01)
	bool IsBeginPlayFinish; // 0x11e9(0x01)
	bool DestroySpawn; // 0x11ea(0x01)
	char pad_11EB[0x1]; // 0x11eb(0x01)
	float DelayDestroy; // 0x11ec(0x04)
	float DamageRadius; // 0x11f0(0x04)
	float DamageExplosion; // 0x11f4(0x04)
	bool IsActivationStarted; // 0x11f8(0x01)
	char pad_11F9[0x3]; // 0x11f9(0x03)
	float DurationActivation; // 0x11fc(0x04)
	float DelayActivation; // 0x1200(0x04)
	float GravityScale; // 0x1204(0x04)
	struct FName AddTag; // 0x1208(0x08)
	bool IsActivationFinish; // 0x1210(0x01)
	bool IsSpawnMonster; // 0x1211(0x01)
	char pad_1212[0x2]; // 0x1212(0x02)
	float DelaySpawnMonster; // 0x1214(0x04)
	bool IsDestroySpawn; // 0x1218(0x01)
	char pad_1219[0x7]; // 0x1219(0x07)
	struct TArray<struct ABP_MonsterBase_C*> MyAliveMonsters; // 0x1220(0x10)
	struct TArray<struct ABP_MonsterBase_C*> TempList; // 0x1230(0x10)

	void OnRep_IsDestroySpawn(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.OnRep_IsDestroySpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnRep_IsActivationFinish(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.OnRep_IsActivationFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnRep_IsActivationStarted(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.OnRep_IsActivationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnRep_IsBeginPlayFinish(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.OnRep_IsBeginPlayFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnRep_IsLanded(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.OnRep_IsLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void COnHitLanded(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.COnHitLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnHitLanded(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SOnHitLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void SOnBeginPlayFinish(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SOnBeginPlayFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void COnBeginPlayFinish(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.COnBeginPlayFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnDamageToCharacter(struct AWTLCharacter* Character); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SOnDamageToCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnActivationStarted(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SOnActivationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void COnActivationStarted(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.COnActivationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnActivationFinish(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SOnActivationFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void COnActivationFinish(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.COnActivationFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateSpawnMonster(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SUpdateSpawnMonster // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnSpawnMonster(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SOnSpawnMonster // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckMyAliveMonsters(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.CheckMyAliveMonsters // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SOnDestroySpawn(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.SOnDestroySpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void COnDestroySpawn(); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.COnDestroySpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Shuttle_Spawn_Base(int32_t EntryPoint); // Function BP_Shuttle_Spawn_Base.BP_Shuttle_Spawn_Base_C.ExecuteUbergraph_BP_Shuttle_Spawn_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

