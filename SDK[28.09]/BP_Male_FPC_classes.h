// BlueprintGeneratedClass BP_Male_FPC.BP_Male_FPC_C
// Size: 0x1ac9 (Inherited: 0x19d0)
struct ABP_Male_FPC_C : AWTLCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x19d0(0x08)
	struct UNiagaraComponent* Niagara; // 0x19d8(0x08)
	struct USkeletalMeshComponent* NiagaraTestMerge; // 0x19e0(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x19e8(0x08)
	struct UStaticMeshComponent* FlashlightBackplate; // 0x19f0(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x19f8(0x08)
	float EyeBlink_NewTrack_0_314643A648B6C5BD1513ADABC0DC0988; // 0x1a00(0x04)
	enum class ETimelineDirection EyeBlink__Direction_314643A648B6C5BD1513ADABC0DC0988; // 0x1a04(0x01)
	char pad_1A05[0x3]; // 0x1a05(0x03)
	struct UTimelineComponent* EyeBlink; // 0x1a08(0x08)
	float Timeline_0_NewTrack_0_4F0570FC49EB6A568CBAEE83D70FD335; // 0x1a10(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4F0570FC49EB6A568CBAEE83D70FD335; // 0x1a14(0x01)
	char pad_1A15[0x3]; // 0x1a15(0x03)
	struct UTimelineComponent* Timeline_1; // 0x1a18(0x08)
	struct FName BoneName; // 0x1a20(0x08)
	char LocalComplesion; // 0x1a28(0x01)
	bool IsLockingRotation; // 0x1a29(0x01)
	char pad_1A2A[0x6]; // 0x1a2a(0x06)
	struct FSkeletalMeshMergeParams Params; // 0x1a30(0x40)
	struct UNiagaraComponent* TeleportationEffect; // 0x1a70(0x08)
	struct TSoftObjectPtr<UFMODEvent> DeathEffectEvent; // 0x1a78(0x28)
	struct TSoftObjectPtr<UFMODEvent> CharacterBloodEvent; // 0x1aa0(0x28)
	bool isCanTeleport; // 0x1ac8(0x01)

	void UserConstructionScript(); // Function BP_Male_FPC.BP_Male_FPC_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void EyeBlink__FinishedFunc(); // Function BP_Male_FPC.BP_Male_FPC_C.EyeBlink__FinishedFunc // (BlueprintEvent) // @ game+0x1ad0090
	void EyeBlink__UpdateFunc(); // Function BP_Male_FPC.BP_Male_FPC_C.EyeBlink__UpdateFunc // (BlueprintEvent) // @ game+0x1ad0090
	void Timeline_0__FinishedFunc(); // Function BP_Male_FPC.BP_Male_FPC_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ad0090
	void Timeline_0__UpdateFunc(); // Function BP_Male_FPC.BP_Male_FPC_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Male_FPC.BP_Male_FPC_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void K2_ShowEffectsAfterDeath(); // Function BP_Male_FPC.BP_Male_FPC_C.K2_ShowEffectsAfterDeath // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void K2_ShowTeleportationDeviceEffect(); // Function BP_Male_FPC.BP_Male_FPC_C.K2_ShowTeleportationDeviceEffect // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void K2_OnDeath(); // Function BP_Male_FPC.BP_Male_FPC_C.K2_OnDeath // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void K2_ShowExplosionEffectsAfterDeath(); // Function BP_Male_FPC.BP_Male_FPC_C.K2_ShowExplosionEffectsAfterDeath // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Male_FPC(int32_t EntryPoint); // Function BP_Male_FPC.BP_Male_FPC_C.ExecuteUbergraph_BP_Male_FPC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

