// BlueprintGeneratedClass BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C
// Size: 0x2f4 (Inherited: 0x220)
struct ABP_Seagull_FishingEviroment_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x228(0x08)
	struct UStaticMeshComponent* Fish; // 0x230(0x08)
	struct USphereComponent* Sphere; // 0x238(0x08)
	struct USkeletalMeshComponent* SeagullMesh1; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float Angle; // 0x250(0x04)
	struct FVector StartLocation; // 0x254(0x0c)
	struct FVector PrevLocation; // 0x260(0x0c)
	float MovementSpeed; // 0x26c(0x04)
	float Radius; // 0x270(0x04)
	struct FVector DivingLocation; // 0x274(0x0c)
	float TimerToDiving; // 0x280(0x04)
	float TimerToDivingCounter; // 0x284(0x04)
	float DeltaTime; // 0x288(0x04)
	bool DivingInProccess; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FVector TargetLocation; // 0x290(0x0c)
	bool IsCurrentMovementDown; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	float DivingSpeed; // 0x2a0(0x04)
	float DefaultRadius; // 0x2a4(0x04)
	float RInterSpeed; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UAB_Seagull_Enviroment_C* AnimBP; // 0x2b0(0x08)
	float MovementTime; // 0x2b8(0x04)
	float G; // 0x2bc(0x04)
	struct FVector NewStartLocation; // 0x2c0(0x0c)
	float TimeTillNextSound; // 0x2cc(0x04)
	float MinTimeToDiving; // 0x2d0(0x04)
	float MaxTimeToDiving; // 0x2d4(0x04)
	struct UPrimitiveComponent* PrevWaterComponent; // 0x2d8(0x08)
	bool bUnderWater; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float MovementDirection; // 0x2e4(0x04)
	float Health; // 0x2e8(0x04)
	bool IsAlive; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	float TimeTillNextSpawn; // 0x2f0(0x04)

	void OnIsAlive(); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnIsAlive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnRep_IsAlive(); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnRep_IsAlive // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Seagull_FishingEviroment(int32_t EntryPoint); // Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ExecuteUbergraph_BP_Seagull_FishingEviroment // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

