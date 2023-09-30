#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x127C - 0x1240)
// BlueprintGeneratedClass BP_Shuttle_Spawn_RangSymbiont_Base.BP_Shuttle_Spawn_RangSymbiont_Base_C
class ABP_Shuttle_Spawn_RangSymbiont_Base_C : public ABP_Shuttle_Spawn_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_ElectroExpo;                                     // 0x1248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FE_AirFriction;                                    // 0x1250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_UfoCapsule2;                                    // 0x1258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_UfoCapsule1;                                    // 0x1260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_UfoCapsule;                                     // 0x1268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstance*                     MeshMaterial;                                      // 0x1270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReLifeTime;                                        // 0x1278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Shuttle_Spawn_RangSymbiont_Base_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void COnActivationStarted();
	void COnBeginPlayFinish();
	void COnHitLanded();
	void SOnActivationFinish();
	void SOnSpawnMonster();
	void COnDestroySpawn();
	void ExecuteUbergraph_BP_Shuttle_Spawn_RangSymbiont_Base(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class AWTLMonsterPawn* CallFunc_SpawnMonster_ReturnValue, class ABP_MonsterBase_C* K2Node_DynamicCast_AsBP_Monster_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetLifetime_ReturnValue, class FName Temp_name_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FWTLMonsterItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class AWTLMonsterPawn> K2Node_ClassDynamicCast_AsWTLMonster_Pawn, bool K2Node_ClassDynamicCast_bSuccess);
};

}


