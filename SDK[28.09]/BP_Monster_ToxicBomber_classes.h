// BlueprintGeneratedClass BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C
// Size: 0xf55 (Inherited: 0xf10)
struct ABP_Monster_ToxicBomber_C : AWTLMonsterPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf10(0x08)
	struct UArrowComponent* Arrow1; // 0xf18(0x08)
	struct FName State; // 0xf20(0x08)
	float DeltaSec; // 0xf28(0x04)
	float TimeReload; // 0xf2c(0x04)
	float TimeSpawn; // 0xf30(0x04)
	float CurrentTimeReload; // 0xf34(0x04)
	float CurrentTimeSpawn; // 0xf38(0x04)
	float CurrentTimeDelayShot; // 0xf3c(0x04)
	float TimeDelayShot; // 0xf40(0x04)
	float TimeShot; // 0xf44(0x04)
	float CurrentTimeShot; // 0xf48(0x04)
	struct FName CState; // 0xf4c(0x08)
	bool IsDeath; // 0xf54(0x01)

	void SFindCharacter(); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.SFindCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateCollision(); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.UpdateCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateState(); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.SUpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnActionTrigger(struct FName ActionName); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.OnActionTrigger // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Monster_ToxicBomber(int32_t EntryPoint); // Function BP_Monster_ToxicBomber.BP_Monster_ToxicBomber_C.ExecuteUbergraph_BP_Monster_ToxicBomber // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

