// BlueprintGeneratedClass BP_BulletHell_FillConeAttack.BP_BulletHell_FillConeAttack_C
// Size: 0x15c (Inherited: 0x105)
struct UBP_BulletHell_FillConeAttack_C : UBP_BulletHell_Component_C {
	char pad_105[0x3]; // 0x105(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	float SpreadAngle; // 0x110(0x04)
	float PitchAngle; // 0x114(0x04)
	float RollAngle; // 0x118(0x04)
	float YawAngle; // 0x11c(0x04)
	struct FVector UpAxis; // 0x120(0x0c)
	struct FVector ForwardAxis; // 0x12c(0x0c)
	struct FVector Direction; // 0x138(0x0c)
	struct FVector RightVector; // 0x144(0x0c)
	bool IsStartShot; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	int32_t NumShots; // 0x154(0x04)
	int32_t CurrentNumShots; // 0x158(0x04)

	void Shot(); // Function BP_BulletHell_FillConeAttack.BP_BulletHell_FillConeAttack_C.Shot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateAttack(); // Function BP_BulletHell_FillConeAttack.BP_BulletHell_FillConeAttack_C.SUpdateAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_BulletHell_FillConeAttack.BP_BulletHell_FillConeAttack_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BulletHell_FillConeAttack(int32_t EntryPoint); // Function BP_BulletHell_FillConeAttack.BP_BulletHell_FillConeAttack_C.ExecuteUbergraph_BP_BulletHell_FillConeAttack // (Final|UbergraphFunction) // @ game+0x1ad0090
};

