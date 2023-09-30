#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x78 - 0x0)
// ScriptStruct SCUE4.SafeVector3D
struct FSafeVector3D
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueX;                                             // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueY;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueZ;                                             // 0x30(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftX;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftY;                                            // 0x50(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftZ;                                            // 0x60(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x70(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_153F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SCUE4.SafeRotator
struct FSafeRotator
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueX;                                             // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueY;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueZ;                                             // 0x30(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftX;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftY;                                            // 0x50(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftZ;                                            // 0x60(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x70(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1543[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// ScriptStruct SCUE4.SafeTransform
struct FSafeTransform
{
public:
	struct FSafeVector3D                         Scale;                                             // 0x0(0x78)(Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSafeVector3D                         Position;                                          // 0x78(0x78)(Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSafeRotator                          Rotation;                                          // 0xF0(0x78)(Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct SCUE4.SafeColor
struct FSafeColor
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueR;                                             // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueG;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueB;                                             // 0x30(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueA;                                             // 0x40(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftR;                                            // 0x50(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftG;                                            // 0x60(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftB;                                            // 0x70(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftA;                                            // 0x80(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x90(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1550[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct SCUE4.SafeVector4D
struct FSafeVector4D
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueX;                                             // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueY;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueZ;                                             // 0x30(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueW;                                             // 0x40(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftX;                                            // 0x50(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftY;                                            // 0x60(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftZ;                                            // 0x70(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftW;                                            // 0x80(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x90(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1552[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SCUE4.SafeVector2D
struct FSafeVector2D
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueX;                                             // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueY;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftX;                                            // 0x30(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ShiftY;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x50(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1554[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SCUE4.SafeText
struct FSafeText
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueValue;                                         // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Shift;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1556[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SCUE4.SafeString
struct FSafeString
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueValue;                                         // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Shift;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1558[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SCUE4.SafeName
struct FSafeName
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueValue;                                         // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Shift;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_155A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SCUE4.SafeFloat
struct FSafeFloat
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueValue;                                         // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Shift;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_155B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SCUE4.SafeInt
struct FSafeInt
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueValue;                                         // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Shift;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_155D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SCUE4.SafeByte
struct FSafeByte
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueValue;                                         // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Shift;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1561[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SCUE4.SafeBool
struct FSafeBool
{
public:
	class FString                                Internal;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                TrueValue;                                         // 0x10(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Shift;                                             // 0x20(0x10)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flag;                                              // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1565[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


