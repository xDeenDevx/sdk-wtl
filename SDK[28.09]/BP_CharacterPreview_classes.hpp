#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x618 - 0x610)
// BlueprintGeneratedClass BP_CharacterPreview.BP_CharacterPreview_C
class ABP_CharacterPreview_C : public AWTLCharacterPreview
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_CharacterPreview_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CharacterPreview(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


