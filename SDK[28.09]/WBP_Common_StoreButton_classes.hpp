#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x478 - 0x460)
// WidgetBlueprintGeneratedClass WBP_Common_StoreButton.WBP_Common_StoreButton_C
class UWBP_Common_StoreButton_C : public UWTLCommonStoreButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      IdleAnim;                                          // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ImgStore;                                          // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Common_StoreButton_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_Common_StoreButton(int32 EntryPoint);
};

}


