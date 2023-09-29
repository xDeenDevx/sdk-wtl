// BlueprintGeneratedClass BP_Shuttle_Spawn_ProjectX.BP_Shuttle_Spawn_ProjectX_C
// Size: 0x1290 (Inherited: 0x127c)
struct ABP_Shuttle_Spawn_ProjectX_C : ABP_Shuttle_Spawn_RangSymbiont_Base_C {
	char pad_127C[0x4]; // 0x127c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1280(0x08)
	struct UNiagaraComponent* NS_Shuttle_Tail_1; // 0x1288(0x08)

	void ReceiveBeginPlay(); // Function BP_Shuttle_Spawn_ProjectX.BP_Shuttle_Spawn_ProjectX_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Shuttle_Spawn_ProjectX(int32_t EntryPoint); // Function BP_Shuttle_Spawn_ProjectX.BP_Shuttle_Spawn_ProjectX_C.ExecuteUbergraph_BP_Shuttle_Spawn_ProjectX // (Final|UbergraphFunction) // @ game+0x1ad0090
};

