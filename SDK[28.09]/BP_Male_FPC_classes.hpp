#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF9 (0x1AC9 - 0x19D0)
// BlueprintGeneratedClass BP_Male_FPC.BP_Male_FPC_C
class ABP_Male_FPC_C : public AWTLCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x19D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x19D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NiagaraTestMerge;                                  // 0x19E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x19E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FlashlightBackplate;                               // 0x19F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPhysicalAnimationComponent*           PhysicalAnimation;                                 // 0x19F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        EyeBlink_NewTrack_0_314643A648B6C5BD1513ADABC0DC0988; // 0x1A00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                EyeBlink__Direction_314643A648B6C5BD1513ADABC0DC0988; // 0x1A04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_173[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EyeBlink;                                          // 0x1A08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_4F0570FC49EB6A568CBAEE83D70FD335; // 0x1A10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_4F0570FC49EB6A568CBAEE83D70FD335; // 0x1A14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_174[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x1A18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x1A20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        LocalComplesion;                                   // 0x1A28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLockingRotation;                                 // 0x1A29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_175[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkeletalMeshMergeParams              Params;                                            // 0x1A30(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNiagaraComponent*                     TeleportationEffect;                               // 0x1A70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFMODEvent>             DeathEffectEvent;                                  // 0x1A78(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UFMODEvent>             CharacterBloodEvent;                               // 0x1AA0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsCanTeleport;                                     // 0x1AC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Male_FPC_C* GetDefaultObj();

	void UserConstructionScript();
	void EyeBlink__FinishedFunc();
	void EyeBlink__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void K2_ShowEffectsAfterDeath();
	void K2_ShowTeleportationDeviceEffect();
	void K2_OnDeath();
	void K2_ShowExplosionEffectsAfterDeath();
	void ExecuteUbergraph_BP_Male_FPC(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSkeletalCenterOfMass_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FVector& CallFunc_GetSkeletalCenterOfMass_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_GetSkeletalCenterOfMass_ReturnValue_2, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, class ABP_Character_Explosion_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, float Temp_float_Variable, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent_2, bool K2Node_DynamicCast_bSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2);
};

}


