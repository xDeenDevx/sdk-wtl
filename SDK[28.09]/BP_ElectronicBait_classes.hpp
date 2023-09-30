#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x422 - 0x408)
// BlueprintGeneratedClass BP_ElectronicBait.BP_ElectronicBait_C
class ABP_ElectronicBait_C : public AWTLElectronicBait
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UFMODAudioComponent*                   NoiseComponent;                                    // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*              Particles_Sparks;                                  // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x420(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCharged;                                         // 0x421(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ElectronicBait_C* GetDefaultObj();

	void OnRep_IsCharged(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void K2_OnDestroyed();
	void Deactivate();
	void Activate();
	void OnEnergyChanged(float EnergyValue);
	void ReceiveBeginPlay();
	void OnConditionChanged(float ConditionValue);
	void BPCharged();
	void ExecuteUbergraph_BP_ElectronicBait(int32 EntryPoint, bool CallFunc_IsActive_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsActive_ReturnValue_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ElectonicExplosion_C* CallFunc_FinishSpawningActor_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsActive_ReturnValue_2, float CallFunc_BPGetCondition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsActive_ReturnValue_3, bool CallFunc_IsActive_ReturnValue_4, float K2Node_Event_EnergyValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_3, bool K2Node_SwitchEnum_CmpSuccess_3, float CallFunc_BPGetEnergy_ReturnValue, float K2Node_Event_ConditionValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_4, bool K2Node_SwitchEnum_CmpSuccess_4);
};

}


