#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E0 - 0x2D0)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Announcer.WBP_MainMenu_Announcer_C
class UWBP_MainMenu_Announcer_C : public UWTLMainMenuAnnouncer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewAnnouncementAnim;                               // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Announcer_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_MainMenu_Announcer(int32 EntryPoint);
};

}


