// BlueprintGeneratedClass BP_BulletHell_Component.BP_BulletHell_Component_C
// Size: 0x105 (Inherited: 0xb0)
struct UBP_BulletHell_Component_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AActor* BulletInstance; // 0xb8(0x08)
	float ReloadTime; // 0xc0(0x04)
	float DelayAttack; // 0xc4(0x04)
	float DeltaSec; // 0xc8(0x04)
	float CurrentReloadTime; // 0xcc(0x04)
	float CurrentDelayAttack; // 0xd0(0x04)
	bool IsReadyToShoot; // 0xd4(0x01)
	bool IsReadyToAttack; // 0xd5(0x01)
	bool IsAttack; // 0xd6(0x01)
	char pad_D7[0x1]; // 0xd7(0x01)
	struct FVector TargetLocation; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct AActor* TargetActor; // 0xe8(0x08)
	int32_t TypeAttack; // 0xf0(0x04)
	bool IsOneShoot; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FVector SpawnOffsetLocation; // 0xf8(0x0c)
	bool UseTargetActor; // 0x104(0x01)

	void Reload(); // Function BP_BulletHell_Component.BP_BulletHell_Component_C.Reload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void StopAttack(); // Function BP_BulletHell_Component.BP_BulletHell_Component_C.StopAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void StartAttack(struct FVector InTargetLocation, struct AActor* inTargetActor, bool inOneShoot, struct FVector OffsetLocation); // Function BP_BulletHell_Component.BP_BulletHell_Component_C.StartAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateTime(); // Function BP_BulletHell_Component.BP_BulletHell_Component_C.SUpdateTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_BulletHell_Component.BP_BulletHell_Component_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BulletHell_Component(int32_t EntryPoint); // Function BP_BulletHell_Component.BP_BulletHell_Component_C.ExecuteUbergraph_BP_BulletHell_Component // (Final|UbergraphFunction) // @ game+0x1ad0090
};

