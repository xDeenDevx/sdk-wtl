// BlueprintGeneratedClass BP_BirdFly_001.BP_BirdFly_001_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABP_BirdFly_001_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* Bird_5; // 0x228(0x08)
	struct USplineComponent* Spline_5; // 0x230(0x08)
	struct USkeletalMeshComponent* Bird_4; // 0x238(0x08)
	struct USplineComponent* Spline_4; // 0x240(0x08)
	struct USkeletalMeshComponent* Bird_3; // 0x248(0x08)
	struct USplineComponent* Spline_3; // 0x250(0x08)
	struct USkeletalMeshComponent* Bird_2; // 0x258(0x08)
	struct USplineComponent* Spline_2; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct UAnimSequence* AnimFly; // 0x270(0x08)
	float SpeedRotation_2; // 0x278(0x04)
	float SpeedRotation_3; // 0x27c(0x04)
	float SpeedRotation_4; // 0x280(0x04)
	float SpeedRotation_5; // 0x284(0x04)
	struct UCurveVector* Traectory_2; // 0x288(0x08)
	struct UCurveVector* Traectory_3; // 0x290(0x08)
	struct UCurveVector* Traectory_4; // 0x298(0x08)
	bool IsFlying; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float Rate; // 0x2a4(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_BirdFly_001.BP_BirdFly_001_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_BirdFly_001.BP_BirdFly_001_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BirdFly_001(int32_t EntryPoint); // Function BP_BirdFly_001.BP_BirdFly_001_C.ExecuteUbergraph_BP_BirdFly_001 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

