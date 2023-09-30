#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2B8 - 0x2B0)
// BlueprintGeneratedClass BP_Projectile_Tornado.BP_Projectile_Tornado_C
class ABP_Projectile_Tornado_C : public ABP_Projectile_Fire_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class ABP_Projectile_Tornado_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnDamageToCharacter(class AWTLCharacter* Character, float MultiplyDamage);
	void OnHit();
	void ExecuteUbergraph_BP_Projectile_Tornado(int32 EntryPoint, class AWTLCharacter* K2Node_Event_Character, float K2Node_Event_MultiplyDamage, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Tornado_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


