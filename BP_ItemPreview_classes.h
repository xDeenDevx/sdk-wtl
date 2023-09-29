// BlueprintGeneratedClass BP_ItemPreview.BP_ItemPreview_C
// Size: 0x3d0 (Inherited: 0x3a0)
struct ABP_ItemPreview_C : AWTLItemPreview {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct URectLightComponent* RectLight4; // 0x3a8(0x08)
	struct URectLightComponent* RectLight3; // 0x3b0(0x08)
	struct URectLightComponent* RectLight2; // 0x3b8(0x08)
	struct URectLightComponent* RectLight1; // 0x3c0(0x08)
	struct URectLightComponent* RectLight; // 0x3c8(0x08)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_ItemPreview.BP_ItemPreview_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_ItemPreview(int32_t EntryPoint); // Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview // (Final|UbergraphFunction) // @ game+0x1ad0090
};

