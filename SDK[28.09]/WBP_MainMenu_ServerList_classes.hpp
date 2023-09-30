#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2F8 - 0x2E0)
// WidgetBlueprintGeneratedClass WBP_MainMenu_ServerList.WBP_MainMenu_ServerList_C
class UWBP_MainMenu_ServerList_C : public UWTLMainMenuServerList
{
public:
	class UThrobber*                             ThConnectLoader;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     ThRefreshLoader;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_ServerList_Item_C*       UI_MainMenu_ServerListItem;                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_ServerList_C* GetDefaultObj();

};

}


