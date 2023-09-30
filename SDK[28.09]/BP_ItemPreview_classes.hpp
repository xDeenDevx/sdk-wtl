#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x3D0 - 0x3A0)
// BlueprintGeneratedClass BP_ItemPreview.BP_ItemPreview_C
class ABP_ItemPreview_C : public AWTLItemPreview
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                   RectLight4;                                        // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight3;                                        // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight2;                                        // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight1;                                        // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight;                                         // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ItemPreview_C* GetDefaultObj();

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ItemPreview(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4);
};

}


