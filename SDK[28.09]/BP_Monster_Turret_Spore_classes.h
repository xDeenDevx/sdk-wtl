// BlueprintGeneratedClass BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C
// Size: 0xf58 (Inherited: 0xf10)
struct ABP_Monster_Turret_Spore_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct USceneComponent* SceneSpawnPoint; // 0xf18(0x08)
	float DeltaSec; // 0xf20(0x04)
	bool IsInit; // 0xf24(0x01)
	bool IsScaled; // 0xf25(0x01)
	bool IsDeath; // 0xf26(0x01)
	char pad_F27[0x1]; // 0xf27(0x01)
	float MyScale; // 0xf28(0x04)
	float MaxScale; // 0xf2c(0x04)
	float ReloadTimeToSpawn; // 0xf30(0x04)
	char pad_F34[0x4]; // 0xf34(0x04)
	struct AActor* MyWalker; // 0xf38(0x08)
	struct AWTLMonsterPawn* myMonster; // 0xf40(0x08)
	float CurrentReloadTimeToSpawn; // 0xf48(0x04)
	bool IsOffsetZ; // 0xf4c(0x01)
	char pad_F4D[0x3]; // 0xf4d(0x03)
	float TargetOffsetZ; // 0xf50(0x04)
	float CurrentOffsetZ; // 0xf54(0x04)

	void UpdateOffsetZ(); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.UpdateOffsetZ // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateSpawnMyMonster(); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.SUpdateSpawnMyMonster // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckOwner(); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.CheckOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateScale(); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.UpdateScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void Init(); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnMonsterDeath(); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.OnMonsterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_Turret_Spore(int32_t EntryPoint); // Function BP_Monster_Turret_Spore.BP_Monster_Turret_Spore_C.ExecuteUbergraph_BP_Monster_Turret_Spore // (Final|UbergraphFunction) // @ game+0x1ad0090
};

