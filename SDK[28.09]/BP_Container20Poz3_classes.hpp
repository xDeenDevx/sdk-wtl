#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x23C - 0x220)
// BlueprintGeneratedClass BP_Container20Poz3.BP_Container20Poz3_C
class ABP_Container20Poz3_C : public AActor
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                          PaintColor;                                        // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Logo;                                              // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Container20Poz3_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


