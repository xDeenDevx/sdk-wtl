// BlueprintGeneratedClass BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C
// Size: 0xf5b (Inherited: 0xf10)
struct ABP_Monster_Spore_Outgrowth_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UFMODAudioComponent* FE_Spore_Outgrowth_Death_00_1; // 0xf18(0x08)
	struct UNiagaraComponent* NS_Healing_Outgrowth; // 0xf20(0x08)
	struct UNiagaraComponent* NS_Spore_Outgrowth_Death; // 0xf28(0x08)
	struct USphereComponent* Sphere; // 0xf30(0x08)
	struct UStaticMeshComponent* ST_AlienSporeSphera02; // 0xf38(0x08)
	struct FDateTime SDateStart; // 0xf40(0x08)
	float DeltaSec; // 0xf48(0x04)
	float TimeRecover; // 0xf4c(0x04)
	float MaxScale; // 0xf50(0x04)
	float CurrentRecoverAlpha; // 0xf54(0x04)
	bool IsRecover; // 0xf58(0x01)
	bool IsDeath; // 0xf59(0x01)
	bool IsSetLifeTime; // 0xf5a(0x01)

	void SCheckOwner(); // Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.SCheckOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.OnDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateRecover(); // Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.UpdateRecover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_Spore_Outgrowth(int32_t EntryPoint); // Function BP_Monster_Spore_Outgrowth.BP_Monster_Spore_Outgrowth_C.ExecuteUbergraph_BP_Monster_Spore_Outgrowth // (Final|UbergraphFunction) // @ game+0x1ad0090
};

