#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x28C - 0x220)
// BlueprintGeneratedClass BP_Monster_LightningProjectile.BP_Monster_LightningProjectile_C
class ABP_Monster_LightningProjectile_C : public AWTLDynamicReplicatedActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*              PS_BallLightning;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Stone;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               Vector;                                            // 0x240(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           Gravity;                                           // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           Velocity;                                          // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Power;                                             // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   Meshes;                                            // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       ScaleForMeshes;                                    // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        IdMesh;                                            // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Monster_LightningProjectile_C* GetDefaultObj();

	void OnHit();
	void SetVector(const struct FVector& InVector, float Scale1D);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Monster_LightningProjectile(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& K2Node_CustomEvent_InVector, float K2Node_CustomEvent_Scale1D, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class ABP_ElectronicBait_C* K2Node_DynamicCast_AsBP_Electronic_Bait, bool K2Node_DynamicCast_bSuccess, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, enum class EWTLBPActionResult CallFunc_AddEffectToCharacter_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Array_Index_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult);
};

}


