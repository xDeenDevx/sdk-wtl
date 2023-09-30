#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x1220 - 0x11E8)
// WidgetBlueprintGeneratedClass WBP_MainMenu_CharacterListItem.WBP_MainMenu_CharacterListItem_C
class UWBP_MainMenu_CharacterListItem_C : public UWTLMainMenuCharacterListItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      EditBtnAttentionAnim;                              // 0x11F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x11F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x1200(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x1208(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x1210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgCredits;                                        // 0x1218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_CharacterListItem_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_MainMenu_CharacterListItem(int32 EntryPoint);
};

}


