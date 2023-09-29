// BlueprintGeneratedClass BPAC_SpawnMonsters.BPAC_SpawnMonsters_C
// Size: 0x170 (Inherited: 0xb0)
struct UBPAC_SpawnMonsters_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float DeltaSec; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct AWTLMonsterPawn* MonsterClass; // 0xc0(0x08)
	int32_t MinLevel; // 0xc8(0x04)
	int32_t MaxLevel; // 0xcc(0x04)
	float MinIntervalSpawn; // 0xd0(0x04)
	float MaxIntervalSpawn; // 0xd4(0x04)
	float CurrentIntervalSpawn; // 0xd8(0x04)
	bool IsSpawnActivated; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct TArray<struct AWTLMonsterPawn*> myMonsterList; // 0xe0(0x10)
	float InnerRadius; // 0xf0(0x04)
	float OuterRadius; // 0xf4(0x04)
	float TwistingAngle; // 0xf8(0x04)
	int32_t NumberOfRings; // 0xfc(0x04)
	int32_t PointsPerRing; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct FVector> SpawnLocationList; // 0x108(0x10)
	int32_t CurrentIDLocation; // 0x118(0x04)
	enum class E_GenerateStatus EGenerateStatus; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct AActor* MonsterOwner; // 0x120(0x08)
	struct FMulticastInlineDelegate OnAllMonstersDead; // 0x128(0x10)
	int32_t CurrentRing; // 0x138(0x04)
	int32_t CurrentPoint; // 0x13c(0x04)
	float CurrentTwistingAngle; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FMulticastInlineDelegate OnSpawnMonstersFinish; // 0x148(0x10)
	bool IsShuffleLocationList; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct TArray<struct FVector> AddLocalOffsetLocationList; // 0x160(0x10)

	void SKillAllMonsters(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.SKillAllMonsters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SCheckMonsterList(bool& Result, int32_t& CountAliveMonsters); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.SCheckMonsterList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SGenerateLocations(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.SGenerateLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SSpawn(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.SSpawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SUpdateSpawn(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.SUpdateSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SSpawnDeactivate(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.SSpawnDeactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void SSpawnActivate(struct AActor* inMonsterOwner); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.SSpawnActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnSpawnActivated(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.OnSpawnActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnSpawnDeactivate(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.OnSpawnDeactivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnAllMonstersDead_Event(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.OnAllMonstersDead_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnSpawnMonstersFinish_Event(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.OnSpawnMonstersFinish_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnMyMonsterDeath(struct AWTLMonsterPawn* Monster); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.OnMyMonsterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BPAC_SpawnMonsters(int32_t EntryPoint); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.ExecuteUbergraph_BPAC_SpawnMonsters // (Final|UbergraphFunction) // @ game+0x1ad0090
	void OnSpawnMonstersFinish__DelegateSignature(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.OnSpawnMonstersFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnAllMonstersDead__DelegateSignature(); // Function BPAC_SpawnMonsters.BPAC_SpawnMonsters_C.OnAllMonstersDead__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
};

