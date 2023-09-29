// BlueprintGeneratedClass BP_Spore_Spawner_Monsters.BP_Spore_Spawner_Monsters_C
// Size: 0x270 (Inherited: 0x220)
struct ABP_Spore_Spawner_Monsters_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct AActor*> MonsterList; // 0x230(0x10)
	int32_t CurrentSpawnClassID; // 0x240(0x04)
	int32_t MaxSpawnClassID; // 0x244(0x04)
	bool IsDeath; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	int32_t MaxCountMonsterClass; // 0x24c(0x04)
	int32_t CountMonsterClass; // 0x250(0x04)
	int32_t MinCountMonsters; // 0x254(0x04)
	float AngularStep; // 0x258(0x04)
	float StartAngle; // 0x25c(0x04)
	int32_t NeedSpawn; // 0x260(0x04)
	struct FVector SpawnLocation; // 0x264(0x0c)

	void ReceiveTick(float DeltaSeconds); // Function BP_Spore_Spawner_Monsters.BP_Spore_Spawner_Monsters_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Spore_Spawner_Monsters(int32_t EntryPoint); // Function BP_Spore_Spawner_Monsters.BP_Spore_Spawner_Monsters_C.ExecuteUbergraph_BP_Spore_Spawner_Monsters // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

