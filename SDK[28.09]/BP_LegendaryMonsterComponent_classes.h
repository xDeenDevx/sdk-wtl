// BlueprintGeneratedClass BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C
// Size: 0x119 (Inherited: 0xb0)
struct UBP_LegendaryMonsterComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UWBP_HUD_LegendaryMonsterInfo_C* myWidget; // 0xb8(0x08)
	struct AWTLCharacter* LocalPlayerCharacter; // 0xc0(0x08)
	struct AActor* MyActor; // 0xc8(0x08)
	float DetectionDistance; // 0xd0(0x04)
	float DetectionDistanceSquared; // 0xd4(0x04)
	struct FS_HUD_LMI_Data HUDData; // 0xd8(0x40)
	bool IsVisible; // 0x118(0x01)

	void GetLocalPlayerCharacter(bool& Valid, struct AWTLCharacter*& WTLCharacter); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetLocalPlayerCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void GetOwnerAsActor(bool& Valid, struct AActor*& Actor); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetOwnerAsActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void GetHealthAlpha(float& Value); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetHealthAlpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	bool CheckDistance(float& DistanceSquared); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.CheckDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void GetInstanceWidget(struct UWBP_HUD_LegendaryMonsterInfo_C*& ReturnWidget); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.GetInstanceWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ad0090
	void UpdateWidget(); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_LegendaryMonsterComponent(int32_t EntryPoint); // Function BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C.ExecuteUbergraph_BP_LegendaryMonsterComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

