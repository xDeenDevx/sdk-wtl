// BlueprintGeneratedClass BP_FortificationCommandCore.BP_FortificationCommandCore_C
// Size: 0x498 (Inherited: 0x480)
struct ABP_FortificationCommandCore_C : AWTLFortificationCommandCore {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct TArray<struct AActor*> Decorations; // 0x488(0x10)

	void K2_OnIntruderKilled(struct APawn* Victim); // Function BP_FortificationCommandCore.BP_FortificationCommandCore_C.K2_OnIntruderKilled // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnControlFactionChanged(enum class EWTLFaction Faction); // Function BP_FortificationCommandCore.BP_FortificationCommandCore_C.OnControlFactionChanged // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_FortificationCommandCore(int32_t EntryPoint); // Function BP_FortificationCommandCore.BP_FortificationCommandCore_C.ExecuteUbergraph_BP_FortificationCommandCore // (Final|UbergraphFunction) // @ game+0x1ad0090
};

