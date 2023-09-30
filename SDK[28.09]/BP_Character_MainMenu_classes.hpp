#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x5B8 - 0x5A0)
// BlueprintGeneratedClass BP_Character_MainMenu.BP_Character_MainMenu_C
class ABP_Character_MainMenu_C : public AWTLMainMenuCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        EyeBlink_NewTrack_0_2938E1A04E1409EE58A4BB8331E7642D; // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EyeBlink__Direction_2938E1A04E1409EE58A4BB8331E7642D; // 0x5AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_141C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EyeBlink;                                          // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Character_MainMenu_C* GetDefaultObj();

	void EyeBlink__FinishedFunc();
	void EyeBlink__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Character_MainMenu(int32 EntryPoint);
};

}


