#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x300 - 0x2E8)
// WidgetBlueprintGeneratedClass WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C
class UWBP_Common_CreditsAmount_C : public UWTLCommonCreditsAmount
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CreditsTopUpAnim;                                  // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ImgCredits;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Common_CreditsAmount_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_Common_CreditsAmount(int32 EntryPoint);
};

}


