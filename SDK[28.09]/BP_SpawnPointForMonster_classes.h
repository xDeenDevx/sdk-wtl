// BlueprintGeneratedClass BP_SpawnPointForMonster.BP_SpawnPointForMonster_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_SpawnPointForMonster_C : AActor {
	struct UBillboardComponent* billboard; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	bool IsAnchor; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float OffsetZ; // 0x234(0x04)
	float DistanceTrace; // 0x238(0x04)
	int32_t NumIteration; // 0x23c(0x04)

	void TraceUp(struct FVector StartLocation, float DistanceTrace, struct FVector& HitLocation, bool& IsHit); // Function BP_SpawnPointForMonster.BP_SpawnPointForMonster_C.TraceUp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void DrawPointLocation(); // Function BP_SpawnPointForMonster.BP_SpawnPointForMonster_C.DrawPointLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void UserConstructionScript(); // Function BP_SpawnPointForMonster.BP_SpawnPointForMonster_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
};

