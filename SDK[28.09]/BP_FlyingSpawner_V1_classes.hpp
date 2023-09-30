#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD4 (0x2F4 - 0x220)
// BlueprintGeneratedClass BP_FlyingSpawner_V1.BP_FlyingSpawner_V1_C
class ABP_FlyingSpawner_V1_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       Scene1;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere1;                                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_AlienJellyfish_01;                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSec;                                          // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health;                                            // 0x254(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealth;                                         // 0x258(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x25C(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxMonsters;                                       // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TagForMonsters;                                    // 0x26C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7BB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Spore_Outgrowth_Data>       SpawnLocationList;                                 // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SpawnID;                                           // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7BD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                SpawnClass;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       MonsterLocations;                                  // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               SpawnLocation;                                     // 0x2A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DesiredLocation;                                   // 0x2B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDeath;                                           // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7BF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PtBoss;                                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  State;                                             // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     MaterialInst;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MyBlock;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReady;                                           // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeSpawn;                                         // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeSpawn;                                  // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FlyingSpawner_V1_C* GetDefaultObj();

	void GetCurrentHealth(float* Result);
	void GetMaxHealth(float* Result);
	void IsAlive(bool* Result, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void CanBeTakeDamage(bool* Result);
	void GetHealthAlpha(float* Result, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void GetName(class FText* Result);
	void CVFXHealth(float CallFunc_GetHealthAlpha_Result, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void CheckBoss(bool* Result, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAlive_Result);
	void OnDeath(const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateMove(TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void Init(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FlyingSpawner_Block_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, const class FString& CallFunc_GetDisplayName_ReturnValue, TArray<class ABP_FlyingSpawner_V1_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Conv_StringToName_ReturnValue);
	void CheskSpawnMonster(bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, int32 CallFunc_CalculateMonsterLevel_Level, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class AWTLMonsterPawn> K2Node_ClassDynamicCast_AsWTLMonster_Pawn, bool K2Node_ClassDynamicCast_bSuccess, class AWTLMonsterPawn* CallFunc_SpawnMonster_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TArray<class AWTLMonsterPawn*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class AActor* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class AWTLMonsterPawn* K2Node_DynamicCast_AsWTLMonster_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DecrementHealth(float Value);
	void IncrementHealth(float Value);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_FlyingSpawner_V1(int32 EntryPoint, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, float K2Node_Event_Value_1, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result, float K2Node_Event_Value, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsAlive_Result_1, float CallFunc_FClamp_ReturnValue_1, TArray<class ABP_Actor_Spore_Boss_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_CheckBoss_Result, class ABP_Actor_Spore_Boss_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AWTLWeapon* K2Node_DynamicCast_AsWTLWeapon, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AWTLCharacter*>& CallFunc_GetAllCharactersForMonster_Characters, enum class EWTLBPCheckResult CallFunc_GetAllCharactersForMonster_Result, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_2, float CallFunc_Lerp_ReturnValue);
};

}


