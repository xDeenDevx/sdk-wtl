// BlueprintGeneratedClass BP_Projectile_Tornado.BP_Projectile_Tornado_C
// Size: 0x2b8 (Inherited: 0x2b0)
struct ABP_Projectile_Tornado_C : ABP_Projectile_Fire_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)

	void ReceiveBeginPlay(); // Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void OnDamageToCharacter(struct AWTLCharacter* Character, float MultiplyDamage); // Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.OnDamageToCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void OnHit(); // Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.OnHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_Projectile_Tornado(int32_t EntryPoint); // Function BP_Projectile_Tornado.BP_Projectile_Tornado_C.ExecuteUbergraph_BP_Projectile_Tornado // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

