// BlueprintGeneratedClass BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C
// Size: 0xfa9 (Inherited: 0xf10)
struct ABP_Monster_Spore_Intro_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UCapsuleComponent* Capsule; // 0xf18(0x08)
	struct USkeletalMeshComponent* SK_ProjectX_AlienFlowerA_01; // 0xf20(0x08)
	struct UNiagaraComponent* NS_Spore_Outgrowth_Death; // 0xf28(0x08)
	struct UFMODAudioComponent* FE_Monster_Dino_Roar_01; // 0xf30(0x08)
	struct FName State; // 0xf38(0x08)
	struct FName OldState; // 0xf40(0x08)
	struct FMulticastInlineDelegate ChangeStage; // 0xf48(0x10)
	struct FMulticastInlineDelegate OnSporeDeath; // 0xf58(0x10)
	bool IsDeath; // 0xf68(0x01)
	char pad_F69[0x7]; // 0xf69(0x07)
	struct AActor* CurrentAbility; // 0xf70(0x08)
	int32_t StageID; // 0xf78(0x04)
	int32_t MaxStage; // 0xf7c(0x04)
	struct TArray<struct AActor*> AbilityClassList; // 0xf80(0x10)
	struct TArray<struct USkeletalMeshComponent*> ChildrenList; // 0xf90(0x10)
	struct ABP_Spawner_ToxicSpitter_C* ToxicSpitterObject; // 0xfa0(0x08)
	bool IsNeedSpawnToxicSpitter; // 0xfa8(0x01)

	void SSpawnToxicSpitter(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.SSpawnToxicSpitter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CCreateChildren(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.CCreateChildren // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateStateChildren(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.CUpdateStateChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateShield(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.UpdateShield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.OnDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckHealth(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.SCheckHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUseAbility(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.SUseAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SChangeState(struct FName NewState); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.SChangeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SInit(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.SInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnBeginPlayFinish(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.K2_OnBeginPlayFinish // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnStateChange(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.OnStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void EventOnDeath(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.EventOnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnClientBulletHit(struct APawn* DamageInstigator, struct FHitResult& HitResult, int32_t WeaponID, int32_t AmmoID); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.K2_OnClientBulletHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_Spore_Intro(int32_t EntryPoint); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.ExecuteUbergraph_BP_Monster_Spore_Intro // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
	void OnSporeDeath__DelegateSignature(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.OnSporeDeath__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ChangeStage__DelegateSignature(); // Function BP_Monster_Spore_Intro.BP_Monster_Spore_Intro_C.ChangeStage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
};

