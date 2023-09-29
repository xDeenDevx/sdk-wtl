// BlueprintGeneratedClass BP_Tornado.BP_Tornado_C
// Size: 0x26d (Inherited: 0x220)
struct ABP_Tornado_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* ST_StormBody_Small; // 0x228(0x08)
	struct UStaticMeshComponent* ST_StormBody_Back_Small; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float DesiredScale; // 0x240(0x04)
	float DeltaSec; // 0x244(0x04)
	float StartTime; // 0x248(0x04)
	float CurrentTime; // 0x24c(0x04)
	float EndTime; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct UCurveFloat* CurveTornadoScale; // 0x258(0x08)
	bool IsDestroy; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float LifeTime; // 0x264(0x04)
	float CurrentScale; // 0x268(0x04)
	bool IsSpawnSystem; // 0x26c(0x01)

	void SApplyDamage(); // Function BP_Tornado.BP_Tornado_C.SApplyDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void CUpdateScale(); // Function BP_Tornado.BP_Tornado_C.CUpdateScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UpdateTime(); // Function BP_Tornado.BP_Tornado_C.UpdateTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_Tornado.BP_Tornado_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_Tornado.BP_Tornado_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Tornado(int32_t EntryPoint); // Function BP_Tornado.BP_Tornado_C.ExecuteUbergraph_BP_Tornado // (Final|UbergraphFunction) // @ game+0x1ad0090
};

