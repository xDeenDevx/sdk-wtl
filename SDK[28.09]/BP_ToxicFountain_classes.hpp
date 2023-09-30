#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x268 - 0x220)
// BlueprintGeneratedClass BP_ToxicFountain.BP_ToxicFountain_C
class ABP_ToxicFountain_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UFMODAudioComponent*                   FMODAudio1;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        SoundVolume_Volume_08451F1641F62CE8F88A9F8A382870D0; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SoundVolume__Direction_08451F1641F62CE8F88A9F8A382870D0; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_130C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SoundVolume;                                       // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeStart;                                         // 0x250(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Emitter;                                           // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Emitter2;                                          // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ToxicFountain_C* GetDefaultObj();

	void SoundVolume__FinishedFunc();
	void SoundVolume__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ToxicFountain(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_GetServerTimeSeconds_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_GetServerTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsActive_ReturnValue, float CallFunc_GetServerTimeSeconds_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<class AWTLCharacter*>& CallFunc_GetListCharactersInRange_ResultList, enum class EWTLBPCheckResult CallFunc_GetListCharactersInRange_Result, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class AWTLCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EWTLBPActionResult CallFunc_AddEffectToCharacter_Result, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_GetServerTimeSeconds_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_ComponentHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
};

}


