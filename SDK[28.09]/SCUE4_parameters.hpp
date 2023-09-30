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

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetVector4DEqualFSV
struct USCLibrary_SCO_Pure_SetVector4DEqualFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F[0x8];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetVector3DEqualFSV
struct USCLibrary_SCO_Pure_SetVector3DEqualFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetVector2DEqualFSV
struct USCLibrary_SCO_Pure_SetVector2DEqualFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetTransformEqualFST
struct USCLibrary_SCO_Pure_SetTransformEqualFST_Params
{
public:
	struct FTransform                            NT;                                                // 0x0(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeTransform                        FST;                                               // 0x30(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x1A0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetTextEqualFST
struct USCLibrary_SCO_Pure_SetTextEqualFST_Params
{
public:
	class FText                                  NT;                                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             FST;                                               // 0x18(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x50(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetStringEqualFSS
struct USCLibrary_SCO_Pure_SetStringEqualFSS_Params
{
public:
	class FString                                NS;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           FSS;                                               // 0x10(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualVector4D
struct USCLibrary_SCO_Pure_SetSafeVector4DEqualVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualFSV
struct USCLibrary_SCO_Pure_SetSafeVector4DEqualFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualVector3D
struct USCLibrary_SCO_Pure_SetSafeVector3DEqualVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualFSV
struct USCLibrary_SCO_Pure_SetSafeVector3DEqualFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualVector2D
struct USCLibrary_SCO_Pure_SetSafeVector2DEqualVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualFSV
struct USCLibrary_SCO_Pure_SetSafeVector2DEqualFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x340 (0x340 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualTransform
struct USCLibrary_SCO_Pure_SetSafeTransformEqualTransform_Params
{
public:
	struct FSafeTransform                        FST;                                               // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SST;                                               // 0x170(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0x1A0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeTransform                        ReturnValue;                                       // 0x1D0(0x168)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x470 (0x470 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualFST
struct USCLibrary_SCO_Pure_SetSafeTransformEqualFST_Params
{
public:
	struct FSafeTransform                        FST;                                               // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeTransform                        SST;                                               // 0x168(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0x2D0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeTransform                        ReturnValue;                                       // 0x300(0x168)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualText
struct USCLibrary_SCO_Pure_SetSafeTextEqualText_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NT;                                                // 0x38(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Output;                                            // 0x50(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ReturnValue;                                       // 0x68(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualFST
struct USCLibrary_SCO_Pure_SetSafeTextEqualFST_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ST;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Output;                                            // 0x70(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ReturnValue;                                       // 0x88(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualString
struct USCLibrary_SCO_Pure_SetSafeStringEqualString_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NS;                                                // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Output;                                            // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           ReturnValue;                                       // 0x58(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualFSS
struct USCLibrary_SCO_Pure_SetSafeStringEqualFSS_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           SS;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Output;                                            // 0x70(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           ReturnValue;                                       // 0x80(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualRotator
struct USCLibrary_SCO_Pure_SetSafeRotatorEqualRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualFSR
struct USCLibrary_SCO_Pure_SetSafeRotatorEqualFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_37[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualName
struct USCLibrary_SCO_Pure_SetSafeNameEqualName_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NN;                                                // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Output;                                            // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             ReturnValue;                                       // 0x48(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualFSN
struct USCLibrary_SCO_Pure_SetSafeNameEqualFSN_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             SSN;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Output;                                            // 0x70(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualInt
struct USCLibrary_SCO_Pure_SetSafeIntEqualInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualFSI
struct USCLibrary_SCO_Pure_SetSafeIntEqualFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFSF
struct USCLibrary_SCO_Pure_SetSafeFloatEqualFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFloat
struct USCLibrary_SCO_Pure_SetSafeFloatEqualFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1D8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualFSC
struct USCLibrary_SCO_Pure_SetSafeColorEqualFSC_Params
{
public:
	struct FSafeColor                            FSC;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            SSC;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualColor
struct USCLibrary_SCO_Pure_SetSafeColorEqualColor_Params
{
public:
	struct FSafeColor                            FSC;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SSC;                                               // 0x98(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            ReturnValue;                                       // 0xB8(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualFSB
struct USCLibrary_SCO_Pure_SetSafeByteEqualFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualByte
struct USCLibrary_SCO_Pure_SetSafeByteEqualByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualFSB
struct USCLibrary_SCO_Pure_SetSafeBoolEqualFSB_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeBool                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualBool
struct USCLibrary_SCO_Pure_SetSafeBoolEqualBool_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetRotatorEqualFSR
struct USCLibrary_SCO_Pure_SetRotatorEqualFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_59[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetNameEqualFSN
struct USCLibrary_SCO_Pure_SetNameEqualFSN_Params
{
public:
	class FName                                  NN;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             FSN;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetIntEqualFSI
struct USCLibrary_SCO_Pure_SetIntEqualFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetFloatEqualFSF
struct USCLibrary_SCO_Pure_SetFloatEqualFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetColorEqualFSC
struct USCLibrary_SCO_Pure_SetColorEqualFSC_Params
{
public:
	struct FLinearColor                          NC;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            FSC;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetByteEqualFSB
struct USCLibrary_SCO_Pure_SetByteEqualFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_SetBoolEqualFSB
struct USCLibrary_SCO_Pure_SetBoolEqualFSB_Params
{
public:
	bool                                         NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DTimesFSV
struct USCLibrary_SCO_Pure_GetVector4DTimesFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerFSV
struct USCLibrary_SCO_Pure_GetVector4DSmallerFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerEqualFSV
struct USCLibrary_SCO_Pure_GetVector4DSmallerEqualFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusFSV
struct USCLibrary_SCO_Pure_GetVector4DPlusFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusEqualFSV
struct USCLibrary_SCO_Pure_GetVector4DPlusEqualFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DNotEqualFSV
struct USCLibrary_SCO_Pure_GetVector4DNotEqualFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DModFSV
struct USCLibrary_SCO_Pure_GetVector4DModFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusFSV
struct USCLibrary_SCO_Pure_GetVector4DMinusFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusEqualFSV
struct USCLibrary_SCO_Pure_GetVector4DMinusEqualFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterFSV
struct USCLibrary_SCO_Pure_GetVector4DGreaterFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterEqualFSV
struct USCLibrary_SCO_Pure_GetVector4DGreaterEqualFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DEqualFSV
struct USCLibrary_SCO_Pure_GetVector4DEqualFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DDivideFSV
struct USCLibrary_SCO_Pure_GetVector4DDivideFSV_Params
{
public:
	struct FVector4                              NV;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         FSV;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DTimesFSV
struct USCLibrary_SCO_Pure_GetVector3DTimesFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerFSV
struct USCLibrary_SCO_Pure_GetVector3DSmallerFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerEqualFSV
struct USCLibrary_SCO_Pure_GetVector3DSmallerEqualFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusFSV
struct USCLibrary_SCO_Pure_GetVector3DPlusFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusEqualFSV
struct USCLibrary_SCO_Pure_GetVector3DPlusEqualFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DNotEqualFSV
struct USCLibrary_SCO_Pure_GetVector3DNotEqualFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DModFSV
struct USCLibrary_SCO_Pure_GetVector3DModFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusFSV
struct USCLibrary_SCO_Pure_GetVector3DMinusFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusEqualFSV
struct USCLibrary_SCO_Pure_GetVector3DMinusEqualFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterFSV
struct USCLibrary_SCO_Pure_GetVector3DGreaterFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterEqualFSV
struct USCLibrary_SCO_Pure_GetVector3DGreaterEqualFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DEqualFSV
struct USCLibrary_SCO_Pure_GetVector3DEqualFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DDivideFSV
struct USCLibrary_SCO_Pure_GetVector3DDivideFSV_Params
{
public:
	struct FVector                               NV;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         FSV;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DTimesFSV
struct USCLibrary_SCO_Pure_GetVector2DTimesFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerFSV
struct USCLibrary_SCO_Pure_GetVector2DSmallerFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerEqualFSV
struct USCLibrary_SCO_Pure_GetVector2DSmallerEqualFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusFSV
struct USCLibrary_SCO_Pure_GetVector2DPlusFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusEqualFSV
struct USCLibrary_SCO_Pure_GetVector2DPlusEqualFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DNotEqualFSV
struct USCLibrary_SCO_Pure_GetVector2DNotEqualFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DModFSV
struct USCLibrary_SCO_Pure_GetVector2DModFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusFSV
struct USCLibrary_SCO_Pure_GetVector2DMinusFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusEqualFSV
struct USCLibrary_SCO_Pure_GetVector2DMinusEqualFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterFSV
struct USCLibrary_SCO_Pure_GetVector2DGreaterFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterEqualFSV
struct USCLibrary_SCO_Pure_GetVector2DGreaterEqualFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DEqualFSV
struct USCLibrary_SCO_Pure_GetVector2DEqualFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DDivideFSV
struct USCLibrary_SCO_Pure_GetVector2DDivideFSV_Params
{
public:
	struct FVector2D                             NV;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         FSV;                                               // 0x8(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTransformNotEqualFST
struct USCLibrary_SCO_Pure_GetTransformNotEqualFST_Params
{
public:
	struct FTransform                            NT;                                                // 0x0(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeTransform                        FST;                                               // 0x30(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x198(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTransformEqualFST
struct USCLibrary_SCO_Pure_GetTransformEqualFST_Params
{
public:
	struct FTransform                            NT;                                                // 0x0(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeTransform                        FST;                                               // 0x30(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x198(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTextSmallerFST
struct USCLibrary_SCO_Pure_GetTextSmallerFST_Params
{
public:
	class FText                                  NT;                                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             FST;                                               // 0x18(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusFST
struct USCLibrary_SCO_Pure_GetTextPlusFST_Params
{
public:
	class FText                                  NT;                                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             FST;                                               // 0x18(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x50(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusEqualFST
struct USCLibrary_SCO_Pure_GetTextPlusEqualFST_Params
{
public:
	class FText                                  NT;                                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             FST;                                               // 0x18(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x50(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTextNotEqualFST
struct USCLibrary_SCO_Pure_GetTextNotEqualFST_Params
{
public:
	class FText                                  NT;                                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             FST;                                               // 0x18(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTextGreaterFST
struct USCLibrary_SCO_Pure_GetTextGreaterFST_Params
{
public:
	class FText                                  NT;                                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             FST;                                               // 0x18(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetTextEqualFST
struct USCLibrary_SCO_Pure_GetTextEqualFST_Params
{
public:
	class FText                                  NT;                                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             FST;                                               // 0x18(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetStringSmallerFSS
struct USCLibrary_SCO_Pure_GetStringSmallerFSS_Params
{
public:
	class FString                                NS;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           FSS;                                               // 0x10(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusFSS
struct USCLibrary_SCO_Pure_GetStringPlusFSS_Params
{
public:
	class FString                                NS;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           FSS;                                               // 0x10(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusEqualFSS
struct USCLibrary_SCO_Pure_GetStringPlusEqualFSS_Params
{
public:
	class FString                                NS;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           FSS;                                               // 0x10(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetStringNotEqualFSS
struct USCLibrary_SCO_Pure_GetStringNotEqualFSS_Params
{
public:
	class FString                                NS;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           FSS;                                               // 0x10(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetStringGreaterFSS
struct USCLibrary_SCO_Pure_GetStringGreaterFSS_Params
{
public:
	class FString                                NS;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           FSS;                                               // 0x10(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetStringEqualFSS
struct USCLibrary_SCO_Pure_GetStringEqualFSS_Params
{
public:
	class FString                                NS;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           FSS;                                               // 0x10(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DTimesVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DTimesFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DSmallerVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DSmallerFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DSmallerEqualVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DSmallerEqualFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DPlusVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DPlusFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DPlusEqualVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DPlusEqualFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DNotEqualVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DNotEqualFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DModVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DModFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DMinusVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DMinusFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DMinusEqualVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DMinusEqualFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DIncreaseFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DIncreaseFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Output;                                            // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xB0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DGreaterVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DGreaterFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DGreaterEqualVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DGreaterEqualFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DEqualVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DEqualFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideVector4D
struct USCLibrary_SCO_Pure_GetSafeVector4DDivideVector4D_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              NV;                                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xC0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DDivideFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         SSV;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Output;                                            // 0x130(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0x140(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDecreaseFSV
struct USCLibrary_SCO_Pure_GetSafeVector4DDecreaseFSV_Params
{
public:
	struct FSafeVector4D                         FSV;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Output;                                            // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector4D                         ReturnValue;                                       // 0xB0(0x98)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DTimesVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DTimesFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DSmallerVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DSmallerFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DSmallerEqualVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DSmallerEqualFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DPlusVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DPlusFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DPlusEqualVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DPlusEqualFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DNotEqualVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DNotEqualFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_259[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DModVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DModFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DMinusVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DMinusFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DMinusEqualVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DMinusEqualFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_278[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DIncreaseFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DIncreaseFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x78(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x88(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DGreaterVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DGreaterFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DGreaterEqualVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DGreaterEqualFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DEqualVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B6[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DEqualFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideVector3D
struct USCLibrary_SCO_Pure_GetSafeVector3DDivideVector3D_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NV;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DDivideFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector3D                         SSV;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDecreaseFSV
struct USCLibrary_SCO_Pure_GetSafeVector3DDecreaseFSV_Params
{
public:
	struct FSafeVector3D                         FSV;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x78(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeVector3D                         ReturnValue;                                       // 0x88(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DTimesVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DTimesFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DSmallerVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DSmallerFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DSmallerEqualVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DSmallerEqualFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DPlusVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DPlusFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DPlusEqualVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DPlusEqualFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DNotEqualVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_328[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DNotEqualFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DModVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DModFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DMinusVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DMinusFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DMinusEqualVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DMinusEqualFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DIncreaseFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DIncreaseFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x58(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x60(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DGreaterVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_341[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DGreaterFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_346[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DGreaterEqualVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DGreaterEqualFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DEqualVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DEqualFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_353[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideVector2D
struct USCLibrary_SCO_Pure_GetSafeVector2DDivideVector2D_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NV;                                                // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DDivideFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         SSV;                                               // 0x58(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDecreaseFSV
struct USCLibrary_SCO_Pure_GetSafeVector2DDecreaseFSV_Params
{
public:
	struct FSafeVector2D                         FSV;                                               // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Output;                                            // 0x58(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeVector2D                         ReturnValue;                                       // 0x60(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualTransform
struct USCLibrary_SCO_Pure_GetSafeTransformNotEqualTransform_Params
{
public:
	struct FSafeTransform                        FST;                                               // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            NT;                                                // 0x170(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2D8 (0x2D8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualFST
struct USCLibrary_SCO_Pure_GetSafeTransformNotEqualFST_Params
{
public:
	struct FSafeTransform                        FST;                                               // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeTransform                        SST;                                               // 0x168(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x1B0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualTransform
struct USCLibrary_SCO_Pure_GetSafeTransformEqualTransform_Params
{
public:
	struct FSafeTransform                        FST;                                               // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            NT;                                                // 0x170(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2D8 (0x2D8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualFST
struct USCLibrary_SCO_Pure_GetSafeTransformEqualFST_Params
{
public:
	struct FSafeTransform                        FST;                                               // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeTransform                        SST;                                               // 0x168(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerText
struct USCLibrary_SCO_Pure_GetSafeTextSmallerText_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NT;                                                // 0x38(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerFST
struct USCLibrary_SCO_Pure_GetSafeTextSmallerFST_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ST;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusText
struct USCLibrary_SCO_Pure_GetSafeTextPlusText_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NT;                                                // 0x38(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Output;                                            // 0x50(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ReturnValue;                                       // 0x68(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusFST
struct USCLibrary_SCO_Pure_GetSafeTextPlusFST_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ST;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Output;                                            // 0x70(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ReturnValue;                                       // 0x88(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualText
struct USCLibrary_SCO_Pure_GetSafeTextPlusEqualText_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NT;                                                // 0x38(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Output;                                            // 0x50(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ReturnValue;                                       // 0x68(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualFST
struct USCLibrary_SCO_Pure_GetSafeTextPlusEqualFST_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ST;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Output;                                            // 0x70(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ReturnValue;                                       // 0x88(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualText
struct USCLibrary_SCO_Pure_GetSafeTextNotEqualText_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NT;                                                // 0x38(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualFST
struct USCLibrary_SCO_Pure_GetSafeTextNotEqualFST_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ST;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterText
struct USCLibrary_SCO_Pure_GetSafeTextGreaterText_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NT;                                                // 0x38(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterFST
struct USCLibrary_SCO_Pure_GetSafeTextGreaterFST_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ST;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualText
struct USCLibrary_SCO_Pure_GetSafeTextEqualText_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NT;                                                // 0x38(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualFST
struct USCLibrary_SCO_Pure_GetSafeTextEqualFST_Params
{
public:
	struct FSafeText                             FST;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSafeText                             ST;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerString
struct USCLibrary_SCO_Pure_GetSafeStringSmallerString_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NS;                                                // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerFSS
struct USCLibrary_SCO_Pure_GetSafeStringSmallerFSS_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           SS;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusString
struct USCLibrary_SCO_Pure_GetSafeStringPlusString_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NS;                                                // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Output;                                            // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           ReturnValue;                                       // 0x58(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusFSS
struct USCLibrary_SCO_Pure_GetSafeStringPlusFSS_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           SS;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Output;                                            // 0x70(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           ReturnValue;                                       // 0x80(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualString
struct USCLibrary_SCO_Pure_GetSafeStringPlusEqualString_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NS;                                                // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Output;                                            // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           ReturnValue;                                       // 0x58(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualFSS
struct USCLibrary_SCO_Pure_GetSafeStringPlusEqualFSS_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           SS;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Output;                                            // 0x70(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           ReturnValue;                                       // 0x80(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualString
struct USCLibrary_SCO_Pure_GetSafeStringNotEqualString_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NS;                                                // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualFSS
struct USCLibrary_SCO_Pure_GetSafeStringNotEqualFSS_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           SS;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterString
struct USCLibrary_SCO_Pure_GetSafeStringGreaterString_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NS;                                                // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterFSS
struct USCLibrary_SCO_Pure_GetSafeStringGreaterFSS_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           SS;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualString
struct USCLibrary_SCO_Pure_GetSafeStringEqualString_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NS;                                                // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualFSS
struct USCLibrary_SCO_Pure_GetSafeStringEqualFSS_Params
{
public:
	struct FSafeString                           FSS;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeString                           SS;                                                // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_441[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorTimesRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorTimesFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_463[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorSmallerRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_464[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorSmallerFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_467[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorSmallerEqualRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_491[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorSmallerEqualFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_499[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorPlusRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorPlusFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorPlusEqualRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorPlusEqualFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorNotEqualRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorNotEqualFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorModRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorModFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_500[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorMinusRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorMinusFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_504[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorMinusEqualRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorMinusEqualFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_522[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorIncreaseFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorIncreaseFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x78(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_524[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x88(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorGreaterRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorGreaterFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorGreaterEqualRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_532[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorGreaterEqualFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_537[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorEqualRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x84(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorEqualFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideRotator
struct USCLibrary_SCO_Pure_GetSafeRotatorDivideRotator_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NR;                                                // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x84(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSafeRotator                          ReturnValue;                                       // 0x90(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorDivideFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeRotator                          SSR;                                               // 0x78(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0xF0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_557[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x100(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDecreaseFSR
struct USCLibrary_SCO_Pure_GetSafeRotatorDecreaseFSR_Params
{
public:
	struct FSafeRotator                          FSR;                                               // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Output;                                            // 0x78(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_55A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          ReturnValue;                                       // 0x88(0x78)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerName
struct USCLibrary_SCO_Pure_GetSafeNameSmallerName_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NN;                                                // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerFSN
struct USCLibrary_SCO_Pure_GetSafeNameSmallerFSN_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             SSN;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_561[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusName
struct USCLibrary_SCO_Pure_GetSafeNamePlusName_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NN;                                                // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Output;                                            // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             ReturnValue;                                       // 0x48(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusFSN
struct USCLibrary_SCO_Pure_GetSafeNamePlusFSN_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             SSN;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Output;                                            // 0x70(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualName
struct USCLibrary_SCO_Pure_GetSafeNamePlusEqualName_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NN;                                                // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Output;                                            // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             ReturnValue;                                       // 0x48(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualFSN
struct USCLibrary_SCO_Pure_GetSafeNamePlusEqualFSN_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             SSN;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Output;                                            // 0x70(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualName
struct USCLibrary_SCO_Pure_GetSafeNameNotEqualName_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NN;                                                // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_589[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualFSN
struct USCLibrary_SCO_Pure_GetSafeNameNotEqualFSN_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             SSN;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterName
struct USCLibrary_SCO_Pure_GetSafeNameGreaterName_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NN;                                                // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterFSN
struct USCLibrary_SCO_Pure_GetSafeNameGreaterFSN_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             SSN;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualName
struct USCLibrary_SCO_Pure_GetSafeNameEqualName_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NN;                                                // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualFSN
struct USCLibrary_SCO_Pure_GetSafeNameEqualFSN_Params
{
public:
	struct FSafeName                             FSN;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             SSN;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorInt
struct USCLibrary_SCO_Pure_GetSafeIntXorInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorFSI
struct USCLibrary_SCO_Pure_GetSafeIntXorFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesInt
struct USCLibrary_SCO_Pure_GetSafeIntTimesInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesFSI
struct USCLibrary_SCO_Pure_GetSafeIntTimesFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerInt
struct USCLibrary_SCO_Pure_GetSafeIntSmallerInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerFSI
struct USCLibrary_SCO_Pure_GetSafeIntSmallerFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualInt
struct USCLibrary_SCO_Pure_GetSafeIntSmallerEqualInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualFSI
struct USCLibrary_SCO_Pure_GetSafeIntSmallerEqualFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_603[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRInt
struct USCLibrary_SCO_Pure_GetSafeIntShiftRInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRFSI
struct USCLibrary_SCO_Pure_GetSafeIntShiftRFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_616[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLInt
struct USCLibrary_SCO_Pure_GetSafeIntShiftLInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLFSI
struct USCLibrary_SCO_Pure_GetSafeIntShiftLFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_625[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusInt
struct USCLibrary_SCO_Pure_GetSafeIntPlusInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusFSI
struct USCLibrary_SCO_Pure_GetSafeIntPlusFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_645[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualInt
struct USCLibrary_SCO_Pure_GetSafeIntPlusEqualInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualFSI
struct USCLibrary_SCO_Pure_GetSafeIntPlusEqualFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrInt
struct USCLibrary_SCO_Pure_GetSafeIntOrInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrFSI
struct USCLibrary_SCO_Pure_GetSafeIntOrFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_661[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotInt
struct USCLibrary_SCO_Pure_GetSafeIntNotInt_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x8(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotFSI
struct USCLibrary_SCO_Pure_GetSafeIntNotFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_676[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualInt
struct USCLibrary_SCO_Pure_GetSafeIntNotEqualInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_677[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualFSI
struct USCLibrary_SCO_Pure_GetSafeIntNotEqualFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_694[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModInt
struct USCLibrary_SCO_Pure_GetSafeIntModInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModFSI
struct USCLibrary_SCO_Pure_GetSafeIntModFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusInt
struct USCLibrary_SCO_Pure_GetSafeIntMinusInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusFSI
struct USCLibrary_SCO_Pure_GetSafeIntMinusFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualInt
struct USCLibrary_SCO_Pure_GetSafeIntMinusEqualInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualFSI
struct USCLibrary_SCO_Pure_GetSafeIntMinusEqualFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntIncreaseFSI
struct USCLibrary_SCO_Pure_GetSafeIntIncreaseFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterInt
struct USCLibrary_SCO_Pure_GetSafeIntGreaterInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterFSI
struct USCLibrary_SCO_Pure_GetSafeIntGreaterFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualInt
struct USCLibrary_SCO_Pure_GetSafeIntGreaterEqualInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_706[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualFSI
struct USCLibrary_SCO_Pure_GetSafeIntGreaterEqualFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualInt
struct USCLibrary_SCO_Pure_GetSafeIntEqualInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_711[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualFSI
struct USCLibrary_SCO_Pure_GetSafeIntEqualFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_718[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideInt
struct USCLibrary_SCO_Pure_GetSafeIntDivideInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideFSI
struct USCLibrary_SCO_Pure_GetSafeIntDivideFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_736[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDecreaseFSI
struct USCLibrary_SCO_Pure_GetSafeIntDecreaseFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndInt
struct USCLibrary_SCO_Pure_GetSafeIntAndInt_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NI;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndFSI
struct USCLibrary_SCO_Pure_GetSafeIntAndFSI_Params
{
public:
	struct FSafeInt                              FSI;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeInt                              SSI;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_761[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFSF
struct USCLibrary_SCO_Pure_GetSafeFloatTimesFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_772[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFloat
struct USCLibrary_SCO_Pure_GetSafeFloatTimesFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFSF
struct USCLibrary_SCO_Pure_GetSafeFloatSmallerFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_788[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFloat
struct USCLibrary_SCO_Pure_GetSafeFloatSmallerFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_789[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFSF
struct USCLibrary_SCO_Pure_GetSafeFloatSmallerEqualFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFloat
struct USCLibrary_SCO_Pure_GetSafeFloatSmallerEqualFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFSF
struct USCLibrary_SCO_Pure_GetSafeFloatPlusFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFloat
struct USCLibrary_SCO_Pure_GetSafeFloatPlusFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFSF
struct USCLibrary_SCO_Pure_GetSafeFloatPlusEqualFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFloat
struct USCLibrary_SCO_Pure_GetSafeFloatPlusEqualFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFSF
struct USCLibrary_SCO_Pure_GetSafeFloatNotEqualFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFloat
struct USCLibrary_SCO_Pure_GetSafeFloatNotEqualFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFSF
struct USCLibrary_SCO_Pure_GetSafeFloatModFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_803[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFloat
struct USCLibrary_SCO_Pure_GetSafeFloatModFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFSF
struct USCLibrary_SCO_Pure_GetSafeFloatMinusFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_812[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFloat
struct USCLibrary_SCO_Pure_GetSafeFloatMinusFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFSF
struct USCLibrary_SCO_Pure_GetSafeFloatMinusEqualFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFloat
struct USCLibrary_SCO_Pure_GetSafeFloatMinusEqualFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatIncreaseFSF
struct USCLibrary_SCO_Pure_GetSafeFloatIncreaseFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_835[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFSF
struct USCLibrary_SCO_Pure_GetSafeFloatGreaterFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_839[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFloat
struct USCLibrary_SCO_Pure_GetSafeFloatGreaterFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFSF
struct USCLibrary_SCO_Pure_GetSafeFloatGreaterEqualFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_843[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFloat
struct USCLibrary_SCO_Pure_GetSafeFloatGreaterEqualFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_847[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFSF
struct USCLibrary_SCO_Pure_GetSafeFloatEqualFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFloat
struct USCLibrary_SCO_Pure_GetSafeFloatEqualFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFSF
struct USCLibrary_SCO_Pure_GetSafeFloatDivideFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            SSF;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFloat
struct USCLibrary_SCO_Pure_GetSafeFloatDivideFloat_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NF;                                                // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDecreaseFSF
struct USCLibrary_SCO_Pure_GetSafeFloatDecreaseFSF_Params
{
public:
	struct FSafeFloat                            FSF;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_864[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualFSC
struct USCLibrary_SCO_Pure_GetSafeColorNotEqualFSC_Params
{
public:
	struct FSafeColor                            FSC;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            SSC;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualColor
struct USCLibrary_SCO_Pure_GetSafeColorNotEqualColor_Params
{
public:
	struct FSafeColor                            FSC;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NC;                                                // 0x98(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualFSC
struct USCLibrary_SCO_Pure_GetSafeColorEqualFSC_Params
{
public:
	struct FSafeColor                            FSC;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            SSC;                                               // 0x98(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualColor
struct USCLibrary_SCO_Pure_GetSafeColorEqualColor_Params
{
public:
	struct FSafeColor                            FSC;                                               // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NC;                                                // 0x98(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorFSB
struct USCLibrary_SCO_Pure_GetSafeByteXorFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorByte
struct USCLibrary_SCO_Pure_GetSafeByteXorByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesFSB
struct USCLibrary_SCO_Pure_GetSafeByteTimesFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesByte
struct USCLibrary_SCO_Pure_GetSafeByteTimesByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerFSB
struct USCLibrary_SCO_Pure_GetSafeByteSmallerFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualFSB
struct USCLibrary_SCO_Pure_GetSafeByteSmallerEqualFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualByte
struct USCLibrary_SCO_Pure_GetSafeByteSmallerEqualByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E8[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerByte
struct USCLibrary_SCO_Pure_GetSafeByteSmallerByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRFSB
struct USCLibrary_SCO_Pure_GetSafeByteShiftRFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRByte
struct USCLibrary_SCO_Pure_GetSafeByteShiftRByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_910[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLFSB
struct USCLibrary_SCO_Pure_GetSafeByteShiftLFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLByte
struct USCLibrary_SCO_Pure_GetSafeByteShiftLByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusFSB
struct USCLibrary_SCO_Pure_GetSafeBytePlusFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualFSB
struct USCLibrary_SCO_Pure_GetSafeBytePlusEqualFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_933[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualByte
struct USCLibrary_SCO_Pure_GetSafeBytePlusEqualByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_943[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusByte
struct USCLibrary_SCO_Pure_GetSafeBytePlusByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_955[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrFSB
struct USCLibrary_SCO_Pure_GetSafeByteOrFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrByte
struct USCLibrary_SCO_Pure_GetSafeByteOrByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_962[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotFSB
struct USCLibrary_SCO_Pure_GetSafeByteNotFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_964[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualFSB
struct USCLibrary_SCO_Pure_GetSafeByteNotEqualFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_967[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualByte
struct USCLibrary_SCO_Pure_GetSafeByteNotEqualByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_969[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotByte
struct USCLibrary_SCO_Pure_GetSafeByteNotByte_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x8(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModFSB
struct USCLibrary_SCO_Pure_GetSafeByteModFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_990[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModByte
struct USCLibrary_SCO_Pure_GetSafeByteModByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_994[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusFSB
struct USCLibrary_SCO_Pure_GetSafeByteMinusFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_996[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualFSB
struct USCLibrary_SCO_Pure_GetSafeByteMinusEqualFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualByte
struct USCLibrary_SCO_Pure_GetSafeByteMinusEqualByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusByte
struct USCLibrary_SCO_Pure_GetSafeByteMinusByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteIncreaseFSB
struct USCLibrary_SCO_Pure_GetSafeByteIncreaseFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterFSB
struct USCLibrary_SCO_Pure_GetSafeByteGreaterFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualFSB
struct USCLibrary_SCO_Pure_GetSafeByteGreaterEqualFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualByte
struct USCLibrary_SCO_Pure_GetSafeByteGreaterEqualByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D0[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterByte
struct USCLibrary_SCO_Pure_GetSafeByteGreaterByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D4[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualFSB
struct USCLibrary_SCO_Pure_GetSafeByteEqualFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualByte
struct USCLibrary_SCO_Pure_GetSafeByteEqualByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideFSB
struct USCLibrary_SCO_Pure_GetSafeByteDivideFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideByte
struct USCLibrary_SCO_Pure_GetSafeByteDivideByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDecreaseFSB
struct USCLibrary_SCO_Pure_GetSafeByteDecreaseFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndFSB
struct USCLibrary_SCO_Pure_GetSafeByteAndFSB_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeByte                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndByte
struct USCLibrary_SCO_Pure_GetSafeByteAndByte_Params
{
public:
	struct FSafeByte                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F8[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrFSB
struct USCLibrary_SCO_Pure_GetSafeBoolOrFSB_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeBool                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrBool
struct USCLibrary_SCO_Pure_GetSafeBoolOrBool_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualFSB
struct USCLibrary_SCO_Pure_GetSafeBoolNotEqualFSB_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeBool                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualBool
struct USCLibrary_SCO_Pure_GetSafeBoolNotEqualBool_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A36[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualFSB
struct USCLibrary_SCO_Pure_GetSafeBoolEqualFSB_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeBool                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A53[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualBool
struct USCLibrary_SCO_Pure_GetSafeBoolEqualBool_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A60[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndFSB
struct USCLibrary_SCO_Pure_GetSafeBoolAndFSB_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeBool                             SSB;                                               // 0x38(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A63[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndBool
struct USCLibrary_SCO_Pure_GetSafeBoolAndBool_Params
{
public:
	struct FSafeBool                             FSB;                                               // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NB;                                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Output;                                            // 0x39(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A66[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             ReturnValue;                                       // 0x40(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorTimesFSR
struct USCLibrary_SCO_Pure_GetRotatorTimesFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A68[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerFSR
struct USCLibrary_SCO_Pure_GetRotatorSmallerFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerEqualFSR
struct USCLibrary_SCO_Pure_GetRotatorSmallerEqualFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A75[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusFSR
struct USCLibrary_SCO_Pure_GetRotatorPlusFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A78[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusEqualFSR
struct USCLibrary_SCO_Pure_GetRotatorPlusEqualFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A81[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A83[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorNotEqualFSR
struct USCLibrary_SCO_Pure_GetRotatorNotEqualFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorModFSR
struct USCLibrary_SCO_Pure_GetRotatorModFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusFSR
struct USCLibrary_SCO_Pure_GetRotatorMinusFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A91[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A92[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusEqualFSR
struct USCLibrary_SCO_Pure_GetRotatorMinusEqualFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterFSR
struct USCLibrary_SCO_Pure_GetRotatorGreaterFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterEqualFSR
struct USCLibrary_SCO_Pure_GetRotatorGreaterEqualFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorEqualFSR
struct USCLibrary_SCO_Pure_GetRotatorEqualFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorDivideFSR
struct USCLibrary_SCO_Pure_GetRotatorDivideFSR_Params
{
public:
	struct FRotator                              NR;                                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeRotator                          FSR;                                               // 0x10(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetNameSmallerFSN
struct USCLibrary_SCO_Pure_GetNameSmallerFSN_Params
{
public:
	class FName                                  NN;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             FSN;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusFSN
struct USCLibrary_SCO_Pure_GetNamePlusFSN_Params
{
public:
	class FName                                  NN;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             FSN;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusEqualFSN
struct USCLibrary_SCO_Pure_GetNamePlusEqualFSN_Params
{
public:
	class FName                                  NN;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             FSN;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetNameNotEqualFSN
struct USCLibrary_SCO_Pure_GetNameNotEqualFSN_Params
{
public:
	class FName                                  NN;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             FSN;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B32[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetNameGreaterFSN
struct USCLibrary_SCO_Pure_GetNameGreaterFSN_Params
{
public:
	class FName                                  NN;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             FSN;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B35[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetNameEqualFSN
struct USCLibrary_SCO_Pure_GetNameEqualFSN_Params
{
public:
	class FName                                  NN;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeName                             FSN;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B37[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntXorFSI
struct USCLibrary_SCO_Pure_GetIntXorFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntTimesFSI
struct USCLibrary_SCO_Pure_GetIntTimesFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerFSI
struct USCLibrary_SCO_Pure_GetIntSmallerFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B49[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerEqualFSI
struct USCLibrary_SCO_Pure_GetIntSmallerEqualFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftRFSI
struct USCLibrary_SCO_Pure_GetIntShiftRFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B52[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B53[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftLFSI
struct USCLibrary_SCO_Pure_GetIntShiftLFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B79[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusFSI
struct USCLibrary_SCO_Pure_GetIntPlusFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B92[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B93[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusEqualFSI
struct USCLibrary_SCO_Pure_GetIntPlusEqualFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntOrFSI
struct USCLibrary_SCO_Pure_GetIntOrFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntNotEqualFSI
struct USCLibrary_SCO_Pure_GetIntNotEqualFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntModFSI
struct USCLibrary_SCO_Pure_GetIntModFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusFSI
struct USCLibrary_SCO_Pure_GetIntMinusFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusEqualFSI
struct USCLibrary_SCO_Pure_GetIntMinusEqualFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterFSI
struct USCLibrary_SCO_Pure_GetIntGreaterFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterEqualFSI
struct USCLibrary_SCO_Pure_GetIntGreaterEqualFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntEqualFSI
struct USCLibrary_SCO_Pure_GetIntEqualFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BED[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntDivideFSI
struct USCLibrary_SCO_Pure_GetIntDivideFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetIntAndFSI
struct USCLibrary_SCO_Pure_GetIntAndFSI_Params
{
public:
	int32                                        NI;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeInt                              FSI;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatTimesFSF
struct USCLibrary_SCO_Pure_GetFloatTimesFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerFSF
struct USCLibrary_SCO_Pure_GetFloatSmallerFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C00[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerEqualFSF
struct USCLibrary_SCO_Pure_GetFloatSmallerEqualFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C03[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C04[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusFSF
struct USCLibrary_SCO_Pure_GetFloatPlusFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C06[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C07[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusEqualFSF
struct USCLibrary_SCO_Pure_GetFloatPlusEqualFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C09[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C33[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatNotEqualFSF
struct USCLibrary_SCO_Pure_GetFloatNotEqualFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C34[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C35[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatModFSF
struct USCLibrary_SCO_Pure_GetFloatModFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C38[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C39[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusFSF
struct USCLibrary_SCO_Pure_GetFloatMinusFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusEqualFSF
struct USCLibrary_SCO_Pure_GetFloatMinusEqualFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C46[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C47[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterFSF
struct USCLibrary_SCO_Pure_GetFloatGreaterFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterEqualFSF
struct USCLibrary_SCO_Pure_GetFloatGreaterEqualFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C50[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C51[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatEqualFSF
struct USCLibrary_SCO_Pure_GetFloatEqualFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C56[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetFloatDivideFSF
struct USCLibrary_SCO_Pure_GetFloatDivideFSF_Params
{
public:
	float                                        NF;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeFloat                            FSF;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetColorNotEqualFSC
struct USCLibrary_SCO_Pure_GetColorNotEqualFSC_Params
{
public:
	struct FLinearColor                          NC;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            FSC;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C65[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetColorEqualFSC
struct USCLibrary_SCO_Pure_GetColorEqualFSC_Params
{
public:
	struct FLinearColor                          NC;                                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSafeColor                            FSC;                                               // 0x10(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C69[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteXorFSB
struct USCLibrary_SCO_Pure_GetByteXorFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteTimesFSB
struct USCLibrary_SCO_Pure_GetByteTimesFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C90[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerFSB
struct USCLibrary_SCO_Pure_GetByteSmallerFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerEqualFSB
struct USCLibrary_SCO_Pure_GetByteSmallerEqualFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftRFSB
struct USCLibrary_SCO_Pure_GetByteShiftRFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftLFSB
struct USCLibrary_SCO_Pure_GetByteShiftLFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusFSB
struct USCLibrary_SCO_Pure_GetBytePlusFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusEqualFSB
struct USCLibrary_SCO_Pure_GetBytePlusEqualFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteOrFSB
struct USCLibrary_SCO_Pure_GetByteOrFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteNotEqualFSB
struct USCLibrary_SCO_Pure_GetByteNotEqualFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteModFSB
struct USCLibrary_SCO_Pure_GetByteModFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D15[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D19[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusFSB
struct USCLibrary_SCO_Pure_GetByteMinusFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D35[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D37[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusEqualFSB
struct USCLibrary_SCO_Pure_GetByteMinusEqualFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D52[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D54[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterFSB
struct USCLibrary_SCO_Pure_GetByteGreaterFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterEqualFSB
struct USCLibrary_SCO_Pure_GetByteGreaterEqualFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D65[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D66[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteEqualFSB
struct USCLibrary_SCO_Pure_GetByteEqualFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteDivideFSB
struct USCLibrary_SCO_Pure_GetByteDivideFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D85[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetByteAndFSB
struct USCLibrary_SCO_Pure_GetByteAndFSB_Params
{
public:
	uint8                                        NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D86[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeByte                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D99[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetBoolOrFSB
struct USCLibrary_SCO_Pure_GetBoolOrFSB_Params
{
public:
	bool                                         NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetBoolNotEqualFSB
struct USCLibrary_SCO_Pure_GetBoolNotEqualFSB_Params
{
public:
	bool                                         NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetBoolEqualFSB
struct USCLibrary_SCO_Pure_GetBoolEqualFSB_Params
{
public:
	bool                                         NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCO_Pure_GetBoolAndFSB
struct USCLibrary_SCO_Pure_GetBoolAndFSB_Params
{
public:
	bool                                         NB;                                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSafeBool                             FSB;                                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4DWithKey
struct USCLibrary_SCL_Pure_SetSafeVector4DWithKey_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E01[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Value;                                             // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ReturnValue;                                       // 0xC0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4D
struct USCLibrary_SCL_Pure_SetSafeVector4D_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E11[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Value;                                             // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3DWithKey
struct USCLibrary_SCL_Pure_SetSafeVector3DWithKey_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x88(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x94(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3D
struct USCLibrary_SCL_Pure_SetSafeVector3D_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x78(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x84(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2DWithKey
struct USCLibrary_SCL_Pure_SetSafeVector2DWithKey_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Value;                                             // 0x68(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2D
struct USCLibrary_SCL_Pure_SetSafeVector2D_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Value;                                             // 0x58(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransformWithKey
struct USCLibrary_SCL_Pure_SetSafeTransformWithKey_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x168(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E55[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x180(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x1B0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransform
struct USCLibrary_SCL_Pure_SetSafeTransform_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E59[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x170(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x1A0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeTextWithKey
struct USCLibrary_SCL_Pure_SetSafeTextWithKey_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x48(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x60(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeText
struct USCLibrary_SCL_Pure_SetSafeText_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x38(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x50(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeStringWithKey
struct USCLibrary_SCL_Pure_SetSafeStringWithKey_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x48(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x58(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeString
struct USCLibrary_SCL_Pure_SetSafeString_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotatorWithKey
struct USCLibrary_SCL_Pure_SetSafeRotatorWithKey_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x88(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x94(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotator
struct USCLibrary_SCL_Pure_SetSafeRotator_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x78(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x84(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeNameWithKey
struct USCLibrary_SCL_Pure_SetSafeNameWithKey_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x48(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeName
struct USCLibrary_SCL_Pure_SetSafeName_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x38(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeIntWithKey
struct USCLibrary_SCL_Pure_SetSafeIntWithKey_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x48(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeInt
struct USCLibrary_SCL_Pure_SetSafeInt_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloatWithKey
struct USCLibrary_SCL_Pure_SetSafeFloatWithKey_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x48(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloat
struct USCLibrary_SCL_Pure_SetSafeFloat_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeColorWithKey
struct USCLibrary_SCL_Pure_SetSafeColorWithKey_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xB8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeColor
struct USCLibrary_SCL_Pure_SetSafeColor_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x98(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeByteWithKey
struct USCLibrary_SCL_Pure_SetSafeByteWithKey_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x48(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x49(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F71[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeByte
struct USCLibrary_SCL_Pure_SetSafeByte_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F75[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeBoolWithKey
struct USCLibrary_SCL_Pure_SetSafeBoolWithKey_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x48(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x49(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_SetSafeBool
struct USCLibrary_SCL_Pure_SetSafeBool_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4DWithKey
struct USCLibrary_SCL_Pure_GetSafeVector4DWithKey_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4D
struct USCLibrary_SCL_Pure_GetSafeVector4D_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3DWithKey
struct USCLibrary_SCL_Pure_GetSafeVector3DWithKey_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3D
struct USCLibrary_SCL_Pure_GetSafeVector3D_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1017[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2DWithKey
struct USCLibrary_SCL_Pure_GetSafeVector2DWithKey_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2D
struct USCLibrary_SCL_Pure_GetSafeVector2D_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransformWithKey
struct USCLibrary_SCL_Pure_GetSafeTransformWithKey_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x168(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x180(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransform
struct USCLibrary_SCL_Pure_GetSafeTransform_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1022[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x170(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeTextWithKey
struct USCLibrary_SCL_Pure_GetSafeTextWithKey_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeText
struct USCLibrary_SCL_Pure_GetSafeText_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeStringWithKey
struct USCLibrary_SCL_Pure_GetSafeStringWithKey_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeString
struct USCLibrary_SCL_Pure_GetSafeString_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotatorWithKey
struct USCLibrary_SCL_Pure_GetSafeRotatorWithKey_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1070[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotator
struct USCLibrary_SCL_Pure_GetSafeRotator_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1096[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeNameWithKey
struct USCLibrary_SCL_Pure_GetSafeNameWithKey_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeName
struct USCLibrary_SCL_Pure_GetSafeName_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeIntWithKey
struct USCLibrary_SCL_Pure_GetSafeIntWithKey_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeInt
struct USCLibrary_SCL_Pure_GetSafeInt_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloatWithKey
struct USCLibrary_SCL_Pure_GetSafeFloatWithKey_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10BA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloat
struct USCLibrary_SCL_Pure_GetSafeFloat_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeColorWithKey
struct USCLibrary_SCL_Pure_GetSafeColorWithKey_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeColor
struct USCLibrary_SCL_Pure_GetSafeColor_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x98(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeByteWithKey
struct USCLibrary_SCL_Pure_GetSafeByteWithKey_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeByte
struct USCLibrary_SCL_Pure_GetSafeByte_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeBoolWithKey
struct USCLibrary_SCL_Pure_GetSafeBoolWithKey_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Pure_GetSafeBool
struct USCLibrary_SCL_Pure_GetSafeBool_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4DWithKey
struct USCLibrary_SCL_Callable_SetSafeVector4DWithKey_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Value;                                             // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ReturnValue;                                       // 0xC0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4D
struct USCLibrary_SCL_Callable_SetSafeVector4D_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Value;                                             // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3DWithKey
struct USCLibrary_SCL_Callable_SetSafeVector3DWithKey_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x88(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x94(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3D
struct USCLibrary_SCL_Callable_SetSafeVector3D_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x78(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x84(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2DWithKey
struct USCLibrary_SCL_Callable_SetSafeVector2DWithKey_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Value;                                             // 0x68(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2D
struct USCLibrary_SCL_Callable_SetSafeVector2D_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Value;                                             // 0x58(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransformWithKey
struct USCLibrary_SCL_Callable_SetSafeTransformWithKey_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x168(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1156[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x180(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x1B0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransform
struct USCLibrary_SCL_Callable_SetSafeTransform_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x170(0x30)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x1A0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeTextWithKey
struct USCLibrary_SCL_Callable_SetSafeTextWithKey_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x48(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x60(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeText
struct USCLibrary_SCL_Callable_SetSafeText_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x38(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x50(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeStringWithKey
struct USCLibrary_SCL_Callable_SetSafeStringWithKey_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x48(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x58(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeString
struct USCLibrary_SCL_Callable_SetSafeString_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotatorWithKey
struct USCLibrary_SCL_Callable_SetSafeRotatorWithKey_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x88(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x94(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotator
struct USCLibrary_SCL_Callable_SetSafeRotator_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x78(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x84(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeNameWithKey
struct USCLibrary_SCL_Callable_SetSafeNameWithKey_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x48(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeName
struct USCLibrary_SCL_Callable_SetSafeName_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x38(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeIntWithKey
struct USCLibrary_SCL_Callable_SetSafeIntWithKey_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x48(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeInt
struct USCLibrary_SCL_Callable_SetSafeInt_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloatWithKey
struct USCLibrary_SCL_Callable_SetSafeFloatWithKey_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x48(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloat
struct USCLibrary_SCL_Callable_SetSafeFloat_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeColorWithKey
struct USCLibrary_SCL_Callable_SetSafeColorWithKey_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xB8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeColor
struct USCLibrary_SCL_Callable_SetSafeColor_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x98(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeByteWithKey
struct USCLibrary_SCL_Callable_SetSafeByteWithKey_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x48(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x49(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeByte
struct USCLibrary_SCL_Callable_SetSafeByte_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1291[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeBoolWithKey
struct USCLibrary_SCL_Callable_SetSafeBoolWithKey_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x48(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x49(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetSafeBool
struct USCLibrary_SCL_Callable_SetSafeBool_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeText
struct USCLibrary_SCL_Callable_SetRawSafeText_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeString
struct USCLibrary_SCL_Callable_SetRawSafeString_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeName
struct USCLibrary_SCL_Callable_SetRawSafeName_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeInt
struct USCLibrary_SCL_Callable_SetRawSafeInt_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeFloat
struct USCLibrary_SCL_Callable_SetRawSafeFloat_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeByte
struct USCLibrary_SCL_Callable_SetRawSafeByte_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeBool
struct USCLibrary_SCL_Callable_SetRawSafeBool_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4DWithKey
struct USCLibrary_SCL_Callable_GetSafeVector4DWithKey_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4D
struct USCLibrary_SCL_Callable_GetSafeVector4D_Params
{
public:
	struct FSafeVector4D                         SV;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3DWithKey
struct USCLibrary_SCL_Callable_GetSafeVector3DWithKey_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3D
struct USCLibrary_SCL_Callable_GetSafeVector3D_Params
{
public:
	struct FSafeVector3D                         SV;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2DWithKey
struct USCLibrary_SCL_Callable_GetSafeVector2DWithKey_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2D
struct USCLibrary_SCL_Callable_GetSafeVector2D_Params
{
public:
	struct FSafeVector2D                         SV;                                                // 0x0(0x58)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransformWithKey
struct USCLibrary_SCL_Callable_GetSafeTransformWithKey_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x168(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1335[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x180(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransform
struct USCLibrary_SCL_Callable_GetSafeTransform_Params
{
public:
	struct FSafeTransform                        ST;                                                // 0x0(0x168)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x170(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeTextWithKey
struct USCLibrary_SCL_Callable_GetSafeTextWithKey_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeText
struct USCLibrary_SCL_Callable_GetSafeText_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeStringWithKey
struct USCLibrary_SCL_Callable_GetSafeStringWithKey_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeString
struct USCLibrary_SCL_Callable_GetSafeString_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotatorWithKey
struct USCLibrary_SCL_Callable_GetSafeRotatorWithKey_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x88(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_136C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotator
struct USCLibrary_SCL_Callable_GetSafeRotator_Params
{
public:
	struct FSafeRotator                          SR;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x78(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_136F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeNameWithKey
struct USCLibrary_SCL_Callable_GetSafeNameWithKey_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeName
struct USCLibrary_SCL_Callable_GetSafeName_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeIntWithKey
struct USCLibrary_SCL_Callable_GetSafeIntWithKey_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1374[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeInt
struct USCLibrary_SCL_Callable_GetSafeInt_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloatWithKey
struct USCLibrary_SCL_Callable_GetSafeFloatWithKey_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1385[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloat
struct USCLibrary_SCL_Callable_GetSafeFloat_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1386[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeColorWithKey
struct USCLibrary_SCL_Callable_GetSafeColorWithKey_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeColor
struct USCLibrary_SCL_Callable_GetSafeColor_Params
{
public:
	struct FSafeColor                            SC;                                                // 0x0(0x98)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x98(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeByteWithKey
struct USCLibrary_SCL_Callable_GetSafeByteWithKey_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeByte
struct USCLibrary_SCL_Callable_GetSafeByte_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeBoolWithKey
struct USCLibrary_SCL_Callable_GetSafeBoolWithKey_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetSafeBool
struct USCLibrary_SCL_Callable_GetSafeBool_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeText
struct USCLibrary_SCL_Callable_GetRawSafeText_Params
{
public:
	struct FSafeText                             ST;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeString
struct USCLibrary_SCL_Callable_GetRawSafeString_Params
{
public:
	struct FSafeString                           SS;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeName
struct USCLibrary_SCL_Callable_GetRawSafeName_Params
{
public:
	struct FSafeName                             SN;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeInt
struct USCLibrary_SCL_Callable_GetRawSafeInt_Params
{
public:
	struct FSafeInt                              SI;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeFloat
struct USCLibrary_SCL_Callable_GetRawSafeFloat_Params
{
public:
	struct FSafeFloat                            SF;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeByte
struct USCLibrary_SCL_Callable_GetRawSafeByte_Params
{
public:
	struct FSafeByte                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeBool
struct USCLibrary_SCL_Callable_GetRawSafeBool_Params
{
public:
	struct FSafeBool                             SB;                                                // 0x0(0x38)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SCUE4.SafeGameInstance.HideGameGuardConsole
struct USafeGameInstance_HideGameGuardConsole_Params
{
public:
	bool                                         Set;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


