#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.AnimGraph
struct UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
struct UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint.AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C.ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint
struct UAB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_C_ExecuteUbergraph_AB_ProjectX_AlienFlowerA_01_Skeleton_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_117D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Monster_Spore_Intro_C*             K2Node_DynamicCast_AsBP_Monster_Spore_Intro;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_117E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


