#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6D (0x28D - 0x220)
// BlueprintGeneratedClass BP_Monster_StoneProjectile.BP_Monster_StoneProjectile_C
class ABP_Monster_StoneProjectile_C : public AWTLDynamicReplicatedActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Stone;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               Vector;                                            // 0x238(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           Gravity;                                           // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           Velocity;                                          // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Power;                                             // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   Meshes;                                            // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       ScaleForMeshes;                                    // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        IdMesh;                                            // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDamag;                                          // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDamag;                                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUseStun;                                        // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Monster_StoneProjectile_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnHit();
	void SetVector(const struct FVector& InVector, float Scale1D);
	void ExecuteUbergraph_BP_Monster_StoneProjectile(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class ABP_ElectronicBait_C* K2Node_DynamicCast_AsBP_Electronic_Bait, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetFloatValue_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Monster_StonePhys_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_InVector, float K2Node_CustomEvent_Scale1D, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item_1, bool CallFunc_HasAuthority_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_ApplyDamage_ReturnValue_1);
};

}


