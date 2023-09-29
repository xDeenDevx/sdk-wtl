// BlueprintGeneratedClass BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C
// Size: 0xf60 (Inherited: 0xf10)
struct ABP_Monster_ToxicSpitter_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct USpotLightComponent* SpotLight; // 0xf18(0x08)
	struct UStaticMeshComponent* BackMesh; // 0xf20(0x08)
	struct UArrowComponent* Arrow1; // 0xf28(0x08)
	struct AWTLCharacter* EnemyTarget; // 0xf30(0x08)
	float DeltaSec; // 0xf38(0x04)
	bool IsAttack; // 0xf3c(0x01)
	char pad_F3D[0x3]; // 0xf3d(0x03)
	float FindDistance; // 0xf40(0x04)
	bool IsDeath; // 0xf44(0x01)
	char pad_F45[0x3]; // 0xf45(0x03)
	float TimeReloadAttack; // 0xf48(0x04)
	float MaxTimeReloadAttack; // 0xf4c(0x04)
	bool IsReadyToAttack; // 0xf50(0x01)
	char pad_F51[0x7]; // 0xf51(0x07)
	struct UMaterialInstanceDynamic* MatInst; // 0xf58(0x08)

	void CVFXUpdateHealth(); // Function BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C.CVFXUpdateHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateFarAttack(); // Function BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C.UpdateFarAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void FindEnemy(); // Function BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C.FindEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_ToxicSpitter(int32_t EntryPoint); // Function BP_Monster_ToxicSpitter.BP_Monster_ToxicSpitter_C.ExecuteUbergraph_BP_Monster_ToxicSpitter // (Final|UbergraphFunction) // @ game+0x1ad0090
};

