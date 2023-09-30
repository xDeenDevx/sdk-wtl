#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x268 - 0x251)
// BlueprintGeneratedClass BP_BulletHell_V2_0.BP_BulletHell_V2_0_C
class ABP_BulletHell_V2_0_C : public ABP_BulletHell_Base_V2_C
{
public:
	uint8                                        Pad_FF9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*              P_Fey_Nettles_Targeting;                           // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BulletHell_V2_0_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDestroy(class AActor* InHitActor, const struct FVector& InImpactPoint);
	void ExecuteUbergraph_BP_BulletHell_V2_0(int32 EntryPoint, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_inHitActor, const struct FVector& K2Node_Event_inImpactPoint, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}


