// BlueprintGeneratedClass BP_Pawn_Spore.BP_Pawn_Spore_C
// Size: 0xfa8 (Inherited: 0xf10)
struct ABP_Pawn_Spore_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UBP_BulletHell_ConeAttack_C* BP_BulletHell_ConeAttack; // 0xf18(0x08)
	struct UBP_BulletHell_FillConeAttack_C* BP_BulletHell_FillConeAttack; // 0xf20(0x08)
	struct UParticleSystemComponent* P_Growth_PoisonSpores_ProjectX; // 0xf28(0x08)
	struct UParticleSystemComponent* P_Dust; // 0xf30(0x08)
	struct UCapsuleComponent* Capsule; // 0xf38(0x08)
	struct UBPAC_SpawnMonsters_C* BPAC_SpawnMonsters; // 0xf40(0x08)
	struct UBP_LegendaryMonsterComponent_C* BP_LegendaryMonsterComponent; // 0xf48(0x08)
	float DeltaSec; // 0xf50(0x04)
	enum class E_StateObject State; // 0xf54(0x01)
	char pad_F55[0x3]; // 0xf55(0x03)
	float DesiredHideZ; // 0xf58(0x04)
	float DesiredVisibleZ; // 0xf5c(0x04)
	float CurrentOffsetZ; // 0xf60(0x04)
	float DelaySpawnMonsters; // 0xf64(0x04)
	float DesiredOffsetZ; // 0xf68(0x04)
	float SpeedOffsetZ; // 0xf6c(0x04)
	float myHealthAlpha; // 0xf70(0x04)
	bool IsShowTower; // 0xf74(0x01)
	char pad_F75[0x3]; // 0xf75(0x03)
	struct FMulticastInlineDelegate ShowTower; // 0xf78(0x10)
	struct FMulticastInlineDelegate HideTower; // 0xf88(0x10)
	bool IsDeath; // 0xf98(0x01)
	char pad_F99[0x7]; // 0xf99(0x07)
	struct AActor* TargetActor; // 0xfa0(0x08)

	void CheckStateToTeleport(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.CheckStateToTeleport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateState(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateOffsetZ(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.UpdateOffsetZ // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ActivateHealthBar(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.ActivateHealthBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnAllSupportDead(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.OnAllSupportDead // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnSupportSpawnedFinish(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.OnSupportSpawnedFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveDestroyed(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnActionTrigger(struct FName ActionName); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.OnActionTrigger // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Pawn_Spore(int32_t EntryPoint); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.ExecuteUbergraph_BP_Pawn_Spore // (Final|UbergraphFunction) // @ game+0x1ad0090
	void HideTower__DelegateSignature(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.HideTower__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ShowTower__DelegateSignature(); // Function BP_Pawn_Spore.BP_Pawn_Spore_C.ShowTower__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
};

