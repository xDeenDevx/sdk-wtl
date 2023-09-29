// BlueprintGeneratedClass BP_BulletHell_Base_V2.BP_BulletHell_Base_V2_C
// Size: 0x251 (Inherited: 0x220)
struct ABP_BulletHell_Base_V2_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float DeltaSec; // 0x230(0x04)
	float Radius; // 0x234(0x04)
	struct FVector OldLocation; // 0x238(0x0c)
	bool IsDestroy; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	float Speed; // 0x248(0x04)
	float Damage; // 0x24c(0x04)
	bool IsCheckSphereTrace; // 0x250(0x01)

	void UpdateMove(); // Function BP_BulletHell_Base_V2.BP_BulletHell_Base_V2_C.UpdateMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_BulletHell_Base_V2.BP_BulletHell_Base_V2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_BulletHell_Base_V2.BP_BulletHell_Base_V2_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDestroy(struct AActor* inHitActor, struct FVector inImpactPoint); // Function BP_BulletHell_Base_V2.BP_BulletHell_Base_V2_C.OnDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BulletHell_Base_V2(int32_t EntryPoint); // Function BP_BulletHell_Base_V2.BP_BulletHell_Base_V2_C.ExecuteUbergraph_BP_BulletHell_Base_V2 // (Final|UbergraphFunction) // @ game+0x1ad0090
};

