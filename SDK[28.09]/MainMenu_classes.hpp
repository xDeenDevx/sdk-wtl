#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x8A0 - 0x6D0)
// BlueprintGeneratedClass MainMenu.MainMenu_C
class AMainMenu_C : public AWTLMainMenuLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_MainMenu_Pawn_C*                   CameraPawn;                                        // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Acc;                                               // 0x6E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DesiredCameraPosition;                             // 0x6F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            OriginalCameraPosition;                            // 0x720(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            CharacterCameraPosition;                           // 0x750(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            CharacterHeadCameraPosition;                       // 0x780(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            CharacterTorsoCameraPosition;                      // 0x7B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            CharacterLegsCameraPosition;                       // 0x7E0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            CharacterFeetCameraPosition;                       // 0x810(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            CharacterWatchesCameraPosition;                    // 0x840(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            CharacterBackpackCameraPosition;                   // 0x870(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void MoveCameraToOriginalPoint();
	void MoveCameraToCharacterTorsoPoint();
	void MoveCameraToCharacterPoint();
	void MoveCameraToCharacterHeadPoint();
	void MoveCameraToCharacterLegsPoint();
	void MoveCameraToCharacterFeetPoint();
	void MoveCameraToCharacterWatchesPoint();
	void MoveCameraToCharacterBackpackPoint();
	void MoveCameraToCharacterCommonPoint();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenu(int32 EntryPoint, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_Array_Get_Item, class ABP_MainMenu_Pawn_C* K2Node_DynamicCast_AsBP_Main_Menu_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, const struct FTransform& CallFunc_TInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_2, bool CallFunc_K2_SetActorTransform_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_3, bool CallFunc_K2_SetActorTransform_ReturnValue_3);
};

}


