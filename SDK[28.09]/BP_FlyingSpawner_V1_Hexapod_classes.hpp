#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x318 - 0x2F4)
// BlueprintGeneratedClass BP_FlyingSpawner_V1_Hexapod.BP_FlyingSpawner_V1_Hexapod_C
class ABP_FlyingSpawner_V1_Hexapod_C : public ABP_FlyingSpawner_V1_C
{
public:
	uint8                                        Pad_1129[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UFMODAudioComponent*                   FE_Monster_Dino_Roar_01_0;                         // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio;                                         // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_UltimateLooping;                                 // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FlyingSpawner_V1_Hexapod_C* GetDefaultObj();

	void OnDeath(enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void CUpdateVFX(bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_FlyingSpawner_V1_Hexapod(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EWTLBPCheckResult CallFunc_WTLSwitchHasAuthority_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


