// BlueprintGeneratedClass BP_Monster_Tentacle.BP_Monster_Tentacle_C
// Size: 0xf41 (Inherited: 0xf10)
struct ABP_Monster_Tentacle_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UParticleSystemComponent* ParticleSystem1; // 0xf18(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0xf20(0x08)
	struct UArrowComponent* Arrow1; // 0xf28(0x08)
	float DeltaSec; // 0xf30(0x04)
	float CurrentMeshOffsetZ; // 0xf34(0x04)
	struct FName State; // 0xf38(0x08)
	bool isCheckOwner; // 0xf40(0x01)

	void CheckOwner(bool& IsAlive); // Function BP_Monster_Tentacle.BP_Monster_Tentacle_C.CheckOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateMesh(); // Function BP_Monster_Tentacle.BP_Monster_Tentacle_C.UpdateMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CheckEnemy(); // Function BP_Monster_Tentacle.BP_Monster_Tentacle_C.CheckEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SInit(); // Function BP_Monster_Tentacle.BP_Monster_Tentacle_C.SInit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_Tentacle.BP_Monster_Tentacle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_Tentacle.BP_Monster_Tentacle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_Tentacle(int32_t EntryPoint); // Function BP_Monster_Tentacle.BP_Monster_Tentacle_C.ExecuteUbergraph_BP_Monster_Tentacle // (Final|UbergraphFunction) // @ game+0x1ad0090
};

