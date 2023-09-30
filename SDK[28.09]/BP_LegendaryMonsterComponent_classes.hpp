#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x119 - 0xB0)
// BlueprintGeneratedClass BP_LegendaryMonsterComponent.BP_LegendaryMonsterComponent_C
class UBP_LegendaryMonsterComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWBP_HUD_LegendaryMonsterInfo_C*       MyWidget;                                          // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWTLCharacter*                         LocalPlayerCharacter;                              // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MyActor;                                           // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DetectionDistance;                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DetectionDistanceSquared;                          // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_HUD_LMI_Data                       HUDData;                                           // 0xD8(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_LegendaryMonsterComponent_C* GetDefaultObj();

	void GetLocalPlayerCharacter(bool* Valid, class AWTLCharacter** WTLCharacter, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_AIInterface_IsAlive_ReturnValue, class AWTLCharacter* K2Node_DynamicCast_AsWTLCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetOwnerAsActor(bool* Valid, class AActor** Actor, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result, bool CallFunc_IsValid_ReturnValue_1);
	void GetHealthAlpha(float* Value, bool CallFunc_GetOwnerAsActor_Valid, class AActor* CallFunc_GetOwnerAsActor_Actor, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealthAlpha_Result);
	bool CheckDistance(float* DistanceSquared, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetInstanceWidget(class UWBP_HUD_LegendaryMonsterInfo_C** ReturnWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<class UWBP_HUD_LegendaryMonsterInfo_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void UpdateWidget(class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_GetInstanceWidget_ReturnWidget, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_LegendaryMonsterComponent(int32 EntryPoint, float CallFunc_GetHealthAlpha_Value, bool CallFunc_GetLocalPlayerCharacter_Valid, class AWTLCharacter* CallFunc_GetLocalPlayerCharacter_WTLCharacter, class UWBP_HUD_LegendaryMonsterInfo_C* CallFunc_GetInstanceWidget_ReturnWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetOwnerAsActor_Valid, class AActor* CallFunc_GetOwnerAsActor_Actor, bool CallFunc_GetOwnerAsActor_Valid_1, class AActor* CallFunc_GetOwnerAsActor_Actor_1, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CheckDistance_ReturnValue, float CallFunc_CheckDistance_DistanceSquared, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetHealthAlpha_Value_1, const struct FS_HUD_LMI_Data& K2Node_MakeStruct_S_HUD_LMI_Data, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IBI_CanBeTakeDamage_C> K2Node_DynamicCast_AsBI_Can_be_Take_Damage, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetName_Result, const struct FS_HUD_LMI_Data& K2Node_MakeStruct_S_HUD_LMI_Data_1, const struct FS_HUD_LMI_Data& K2Node_MakeStruct_S_HUD_LMI_Data_2);
};

}


