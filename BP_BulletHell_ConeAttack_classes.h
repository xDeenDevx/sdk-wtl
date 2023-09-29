// BlueprintGeneratedClass BP_BulletHell_ConeAttack.BP_BulletHell_ConeAttack_C
// Size: 0x13c (Inherited: 0x105)
struct UBP_BulletHell_ConeAttack_C : UBP_BulletHell_Component_C {
	char pad_105[0x3]; // 0x105(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	float SpreadAngle; // 0x110(0x04)
	float StartAngle; // 0x114(0x04)
	struct FVector Axis; // 0x118(0x0c)
	struct FVector Direction; // 0x124(0x0c)
	bool IsStartShot; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t NumShots; // 0x134(0x04)
	int32_t CurrentNumShots; // 0x138(0x04)

	void Shot(); // Function BP_BulletHell_ConeAttack.BP_BulletHell_ConeAttack_C.Shot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateAttack(); // Function BP_BulletHell_ConeAttack.BP_BulletHell_ConeAttack_C.SUpdateAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_BulletHell_ConeAttack.BP_BulletHell_ConeAttack_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BulletHell_ConeAttack(int32_t EntryPoint); // Function BP_BulletHell_ConeAttack.BP_BulletHell_ConeAttack_C.ExecuteUbergraph_BP_BulletHell_ConeAttack // (Final|UbergraphFunction) // @ game+0x1ad0090
};

