#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x1290 - 0x127C)
// BlueprintGeneratedClass BP_Shuttle_Spawn_ProjectX.BP_Shuttle_Spawn_ProjectX_C
class ABP_Shuttle_Spawn_ProjectX_C : public ABP_Shuttle_Spawn_RangSymbiont_Base_C
{
public:
	uint8                                        Pad_13C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Shuttle_Tail_0;                                 // 0x1288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Shuttle_Spawn_ProjectX_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Shuttle_Spawn_ProjectX(int32 EntryPoint);
};

}


