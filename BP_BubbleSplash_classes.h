// BlueprintGeneratedClass BP_BubbleSplash.BP_BubbleSplash_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_BubbleSplash_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* Decal; // 0x228(0x08)
	struct USkeletalMeshComponent* SK_HexapodSmall_Ulcer_01_Plane; // 0x230(0x08)
	struct USceneComponent* Scene; // 0x238(0x08)
	struct UCapsuleComponent* Capsule; // 0x240(0x08)
	float LifeTime; // 0x248(0x04)
	float DeltaSec; // 0x24c(0x04)
	char State; // 0x250(0x01)
	bool IsDeath; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	float Health; // 0x254(0x04)
	float ScaleAlpha; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct AWTLCharacter*> CharacterList; // 0x260(0x10)
	int32_t ID; // 0x270(0x04)
	float DelayBloodFX; // 0x274(0x04)

	void CheckEnemy(); // Function BP_BubbleSplash.BP_BubbleSplash_C.CheckEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_BubbleSplash.BP_BubbleSplash_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_BubbleSplash.BP_BubbleSplash_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_BubbleSplash.BP_BubbleSplash_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void OnDeath(); // Function BP_BubbleSplash.BP_BubbleSplash_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnTakeDamage(struct FVector ToVector); // Function BP_BubbleSplash.BP_BubbleSplash_C.OnTakeDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_BubbleSplash(int32_t EntryPoint); // Function BP_BubbleSplash.BP_BubbleSplash_C.ExecuteUbergraph_BP_BubbleSplash // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

