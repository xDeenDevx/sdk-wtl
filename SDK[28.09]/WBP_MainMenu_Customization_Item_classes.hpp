#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x5E0 - 0x5C0)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Customization_Item.WBP_MainMenu_Customization_Item_C
class UWBP_MainMenu_Customization_Item_C : public UWTLMainMenuCustomizationItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowPurchasedAnim;                                 // 0x5C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ImgCredits;                                        // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgNoImage;                                        // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Customization_Item_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_MainMenu_Customization_Item(int32 EntryPoint);
};

}


