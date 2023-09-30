#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x290 - 0x280)
// BlueprintGeneratedClass BP_MainMenu_Pawn.BP_MainMenu_Pawn_C
class ABP_MainMenu_Pawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                  CineCamera;                                        // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MainMenu_Pawn_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MainMenu_Pawn(int32 EntryPoint);
};

}


