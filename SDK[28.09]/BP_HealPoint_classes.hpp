#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x252 - 0x220)
// BlueprintGeneratedClass BP_HealPoint.BP_HealPoint_C
class ABP_HealPoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*              PS_HealingGranate;                                 // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_LProp_Crystals_06;                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Health;                                            // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealth;                                         // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDestroy;                                         // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        RepHealthPercent;                                  // 0x251(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HealPoint_C* GetDefaultObj();

	void CUpdateHealth(float TmpAlpha, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void UserConstructionScript(const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_HealPoint(int32 EntryPoint, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable, int32 CallFunc_Round_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_HealCharacterByPercentRet_RestoredHealth, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_AIInterface_IsAlive_ReturnValue);
};

}


