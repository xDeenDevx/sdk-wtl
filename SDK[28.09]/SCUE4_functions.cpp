#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SCUE4.SCLibrary
// (None)

class UClass* USCLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SCLibrary");

	return Clss;
}


// SCLibrary SCUE4.Default__SCLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USCLibrary* USCLibrary::GetDefaultObj()
{
	static class USCLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USCLibrary*>(USCLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SCUE4.SCLibrary.SCO_Pure_SetVector4DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_SetVector4DEqualFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetVector4DEqualFSV");

	Params::USCLibrary_SCO_Pure_SetVector4DEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetVector3DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_SetVector3DEqualFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetVector3DEqualFSV");

	Params::USCLibrary_SCO_Pure_SetVector3DEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetVector2DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_SetVector2DEqualFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetVector2DEqualFSV");

	Params::USCLibrary_SCO_Pure_SetVector2DEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetTransformEqualFST
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  NT                                                               (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCO_Pure_SetTransformEqualFST(struct FTransform& NT, struct FSafeTransform& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetTransformEqualFST");

	Params::USCLibrary_SCO_Pure_SetTransformEqualFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetTextEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCO_Pure_SetTextEqualFST(class FText& NT, struct FSafeText& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetTextEqualFST");

	Params::USCLibrary_SCO_Pure_SetTextEqualFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetStringEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCO_Pure_SetStringEqualFSS(class FString& NS, struct FSafeString& FSS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetStringEqualFSS");

	Params::USCLibrary_SCO_Pure_SetStringEqualFSS_Params Parms{};

	Parms.NS = NS;
	Parms.FSS = FSS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeVector4DEqualVector4D");

	Params::USCLibrary_SCO_Pure_SetSafeVector4DEqualVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeVector4DEqualFSV");

	Params::USCLibrary_SCO_Pure_SetSafeVector4DEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeVector3DEqualVector3D");

	Params::USCLibrary_SCO_Pure_SetSafeVector3DEqualVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeVector3DEqualFSV");

	Params::USCLibrary_SCO_Pure_SetSafeVector3DEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeVector2DEqualVector2D");

	Params::USCLibrary_SCO_Pure_SetSafeVector2DEqualVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeVector2DEqualFSV");

	Params::USCLibrary_SCO_Pure_SetSafeVector2DEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SST                                                              (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Output                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeTransform              ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualTransform(struct FSafeTransform& FST, struct FTransform& SST, struct FTransform* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeTransformEqualTransform");

	Params::USCLibrary_SCO_Pure_SetSafeTransformEqualTransform_Params Parms{};

	Parms.FST = FST;
	Parms.SST = SST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualFST
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeTransform              SST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Output                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeTransform              ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualFST(struct FSafeTransform& FST, struct FSafeTransform& SST, struct FTransform* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeTransformEqualFST");

	Params::USCLibrary_SCO_Pure_SetSafeTransformEqualFST_Params Parms{};

	Parms.FST = FST;
	Parms.SST = SST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Output                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualText(struct FSafeText& FST, class FText& NT, class FText* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeTextEqualText");

	Params::USCLibrary_SCO_Pure_SetSafeTextEqualText_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Output                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualFST(struct FSafeText& FST, struct FSafeText& ST, class FText* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeTextEqualFST");

	Params::USCLibrary_SCO_Pure_SetSafeTextEqualFST_Params Parms{};

	Parms.FST = FST;
	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Output                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualString(struct FSafeString& FSS, class FString& NS, class FString* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeStringEqualString");

	Params::USCLibrary_SCO_Pure_SetSafeStringEqualString_Params Parms{};

	Parms.FSS = FSS;
	Parms.NS = NS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Output                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualFSS(struct FSafeString& FSS, struct FSafeString& SS, class FString* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeStringEqualFSS");

	Params::USCLibrary_SCO_Pure_SetSafeStringEqualFSS_Params Parms{};

	Parms.FSS = FSS;
	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeRotatorEqualRotator");

	Params::USCLibrary_SCO_Pure_SetSafeRotatorEqualRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeRotatorEqualFSR");

	Params::USCLibrary_SCO_Pure_SetSafeRotatorEqualFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualName(struct FSafeName& FSN, class FName& NN, class FName* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeNameEqualName");

	Params::USCLibrary_SCO_Pure_SetSafeNameEqualName_Params Parms{};

	Parms.FSN = FSN;
	Parms.NN = NN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   SSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualFSN(struct FSafeName& FSN, struct FSafeName& SSN, class FName* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeNameEqualFSN");

	Params::USCLibrary_SCO_Pure_SetSafeNameEqualFSN_Params Parms{};

	Parms.FSN = FSN;
	Parms.SSN = SSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeIntEqualInt");

	Params::USCLibrary_SCO_Pure_SetSafeIntEqualInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeIntEqualFSI");

	Params::USCLibrary_SCO_Pure_SetSafeIntEqualFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeFloatEqualFSF");

	Params::USCLibrary_SCO_Pure_SetSafeFloatEqualFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeFloatEqualFloat");

	Params::USCLibrary_SCO_Pure_SetSafeFloatEqualFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualFSC
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  SSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualFSC(struct FSafeColor& FSC, struct FSafeColor& SSC, struct FLinearColor* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeColorEqualFSC");

	Params::USCLibrary_SCO_Pure_SetSafeColorEqualFSC_Params Parms{};

	Parms.FSC = FSC;
	Parms.SSC = SSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                SSC                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualColor(struct FSafeColor& FSC, struct FLinearColor& SSC, struct FLinearColor* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeColorEqualColor");

	Params::USCLibrary_SCO_Pure_SetSafeColorEqualColor_Params Parms{};

	Parms.FSC = FSC;
	Parms.SSC = SSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeByteEqualFSB");

	Params::USCLibrary_SCO_Pure_SetSafeByteEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeByteEqualByte");

	Params::USCLibrary_SCO_Pure_SetSafeByteEqualByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualFSB(struct FSafeBool& FSB, struct FSafeBool& SSB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeBoolEqualFSB");

	Params::USCLibrary_SCO_Pure_SetSafeBoolEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualBool(struct FSafeBool& FSB, bool& NB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetSafeBoolEqualBool");

	Params::USCLibrary_SCO_Pure_SetSafeBoolEqualBool_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetRotatorEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_SetRotatorEqualFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetRotatorEqualFSR");

	Params::USCLibrary_SCO_Pure_SetRotatorEqualFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetNameEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCO_Pure_SetNameEqualFSN(class FName& NN, struct FSafeName& FSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetNameEqualFSN");

	Params::USCLibrary_SCO_Pure_SetNameEqualFSN_Params Parms{};

	Parms.NN = NN;
	Parms.FSN = FSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetIntEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_SetIntEqualFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetIntEqualFSI");

	Params::USCLibrary_SCO_Pure_SetIntEqualFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetFloatEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_SetFloatEqualFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetFloatEqualFSF");

	Params::USCLibrary_SCO_Pure_SetFloatEqualFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetColorEqualFSC
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor                NC                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCO_Pure_SetColorEqualFSC(struct FLinearColor& NC, struct FSafeColor& FSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetColorEqualFSC");

	Params::USCLibrary_SCO_Pure_SetColorEqualFSC_Params Parms{};

	Parms.NC = NC;
	Parms.FSC = FSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetByteEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_SetByteEqualFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetByteEqualFSB");

	Params::USCLibrary_SCO_Pure_SetByteEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_SetBoolEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_SetBoolEqualFSB(bool& NB, struct FSafeBool& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_SetBoolEqualFSB");

	Params::USCLibrary_SCO_Pure_SetBoolEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DTimesFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_GetVector4DTimesFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DTimesFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DTimesFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector4DSmallerFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DSmallerFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DSmallerFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector4DSmallerEqualFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DSmallerEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DSmallerEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_GetVector4DPlusFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DPlusFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DPlusFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_GetVector4DPlusEqualFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DPlusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DPlusEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DNotEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector4DNotEqualFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DNotEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DNotEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DModFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_GetVector4DModFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DModFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DModFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_GetVector4DMinusFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DMinusFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DMinusFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_GetVector4DMinusEqualFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DMinusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DMinusEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector4DGreaterFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DGreaterFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DGreaterFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector4DGreaterEqualFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DGreaterEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DGreaterEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector4DEqualFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector4DDivideFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCO_Pure_GetVector4DDivideFSV(struct FVector4& NV, struct FSafeVector4D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector4DDivideFSV");

	Params::USCLibrary_SCO_Pure_GetVector4DDivideFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DTimesFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_GetVector3DTimesFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DTimesFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DTimesFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector3DSmallerFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DSmallerFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DSmallerFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector3DSmallerEqualFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DSmallerEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DSmallerEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_GetVector3DPlusFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DPlusFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DPlusFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_GetVector3DPlusEqualFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DPlusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DPlusEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DNotEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector3DNotEqualFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DNotEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DNotEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DModFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_GetVector3DModFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DModFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DModFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_GetVector3DMinusFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DMinusFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DMinusFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_GetVector3DMinusEqualFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DMinusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DMinusEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector3DGreaterFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DGreaterFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DGreaterFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector3DGreaterEqualFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DGreaterEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DGreaterEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector3DEqualFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector3DDivideFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCO_Pure_GetVector3DDivideFSV(struct FVector& NV, struct FSafeVector3D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector3DDivideFSV");

	Params::USCLibrary_SCO_Pure_GetVector3DDivideFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DTimesFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_GetVector2DTimesFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DTimesFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DTimesFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector2DSmallerFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DSmallerFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DSmallerFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector2DSmallerEqualFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DSmallerEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DSmallerEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_GetVector2DPlusFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DPlusFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DPlusFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_GetVector2DPlusEqualFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DPlusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DPlusEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DNotEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector2DNotEqualFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DNotEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DNotEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DModFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_GetVector2DModFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DModFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DModFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_GetVector2DMinusFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DMinusFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DMinusFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_GetVector2DMinusEqualFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DMinusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DMinusEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector2DGreaterFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DGreaterFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DGreaterFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector2DGreaterEqualFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DGreaterEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DGreaterEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetVector2DEqualFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DEqualFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DEqualFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetVector2DDivideFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCO_Pure_GetVector2DDivideFSV(struct FVector2D& NV, struct FSafeVector2D& FSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetVector2DDivideFSV");

	Params::USCLibrary_SCO_Pure_GetVector2DDivideFSV_Params Parms{};

	Parms.NV = NV;
	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTransformNotEqualFST
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  NT                                                               (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetTransformNotEqualFST(struct FTransform& NT, struct FSafeTransform& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTransformNotEqualFST");

	Params::USCLibrary_SCO_Pure_GetTransformNotEqualFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTransformEqualFST
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  NT                                                               (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetTransformEqualFST(struct FTransform& NT, struct FSafeTransform& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTransformEqualFST");

	Params::USCLibrary_SCO_Pure_GetTransformEqualFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTextSmallerFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetTextSmallerFST(class FText& NT, struct FSafeText& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTextSmallerFST");

	Params::USCLibrary_SCO_Pure_GetTextSmallerFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCO_Pure_GetTextPlusFST(class FText& NT, struct FSafeText& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTextPlusFST");

	Params::USCLibrary_SCO_Pure_GetTextPlusFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCO_Pure_GetTextPlusEqualFST(class FText& NT, struct FSafeText& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTextPlusEqualFST");

	Params::USCLibrary_SCO_Pure_GetTextPlusEqualFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTextNotEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetTextNotEqualFST(class FText& NT, struct FSafeText& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTextNotEqualFST");

	Params::USCLibrary_SCO_Pure_GetTextNotEqualFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTextGreaterFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetTextGreaterFST(class FText& NT, struct FSafeText& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTextGreaterFST");

	Params::USCLibrary_SCO_Pure_GetTextGreaterFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetTextEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetTextEqualFST(class FText& NT, struct FSafeText& FST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetTextEqualFST");

	Params::USCLibrary_SCO_Pure_GetTextEqualFST_Params Parms{};

	Parms.NT = NT;
	Parms.FST = FST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetStringSmallerFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetStringSmallerFSS(class FString& NS, struct FSafeString& FSS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetStringSmallerFSS");

	Params::USCLibrary_SCO_Pure_GetStringSmallerFSS_Params Parms{};

	Parms.NS = NS;
	Parms.FSS = FSS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCO_Pure_GetStringPlusFSS(class FString& NS, struct FSafeString& FSS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetStringPlusFSS");

	Params::USCLibrary_SCO_Pure_GetStringPlusFSS_Params Parms{};

	Parms.NS = NS;
	Parms.FSS = FSS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCO_Pure_GetStringPlusEqualFSS(class FString& NS, struct FSafeString& FSS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetStringPlusEqualFSS");

	Params::USCLibrary_SCO_Pure_GetStringPlusEqualFSS_Params Parms{};

	Parms.NS = NS;
	Parms.FSS = FSS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetStringNotEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetStringNotEqualFSS(class FString& NS, struct FSafeString& FSS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetStringNotEqualFSS");

	Params::USCLibrary_SCO_Pure_GetStringNotEqualFSS_Params Parms{};

	Parms.NS = NS;
	Parms.FSS = FSS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetStringGreaterFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetStringGreaterFSS(class FString& NS, struct FSafeString& FSS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetStringGreaterFSS");

	Params::USCLibrary_SCO_Pure_GetStringGreaterFSS_Params Parms{};

	Parms.NS = NS;
	Parms.FSS = FSS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetStringEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetStringEqualFSS(class FString& NS, struct FSafeString& FSS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetStringEqualFSS");

	Params::USCLibrary_SCO_Pure_GetStringEqualFSS_Params Parms{};

	Parms.NS = NS;
	Parms.FSS = FSS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DTimesVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DTimesVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DTimesFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DTimesFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerVector4D(struct FSafeVector4D& FSV, struct FVector4& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DSmallerVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DSmallerVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DSmallerFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DSmallerFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualVector4D(struct FSafeVector4D& FSV, struct FVector4& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DSmallerEqualVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DSmallerEqualVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DSmallerEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DSmallerEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DPlusVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DPlusVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DPlusFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DPlusFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusEqualVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DPlusEqualVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DPlusEqualVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusEqualFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DPlusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DPlusEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualVector4D(struct FSafeVector4D& FSV, struct FVector4& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DNotEqualVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DNotEqualVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DNotEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DNotEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DModVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DModVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DModFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DModFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DMinusVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DMinusVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DMinusFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DMinusFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusEqualVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DMinusEqualVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DMinusEqualVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusEqualFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DMinusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DMinusEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DIncreaseFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DIncreaseFSV(struct FSafeVector4D& FSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DIncreaseFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DIncreaseFSV_Params Parms{};

	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterVector4D(struct FSafeVector4D& FSV, struct FVector4& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DGreaterVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DGreaterVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DGreaterFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DGreaterFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualVector4D(struct FSafeVector4D& FSV, struct FVector4& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DGreaterEqualVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DGreaterEqualVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DGreaterEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DGreaterEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DEqualVector4D(struct FSafeVector4D& FSV, struct FVector4& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DEqualVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DEqualVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector4DEqualFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideVector4D(struct FSafeVector4D& FSV, struct FVector4& NV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DDivideVector4D");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DDivideVector4D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideFSV(struct FSafeVector4D& FSV, struct FSafeVector4D& SSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DDivideFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DDivideFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDecreaseFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector4D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDecreaseFSV(struct FSafeVector4D& FSV, struct FVector4* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector4DDecreaseFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector4DDecreaseFSV_Params Parms{};

	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DTimesVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DTimesVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DTimesFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DTimesFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerVector3D(struct FSafeVector3D& FSV, struct FVector& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DSmallerVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DSmallerVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DSmallerFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DSmallerFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualVector3D(struct FSafeVector3D& FSV, struct FVector& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DSmallerEqualVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DSmallerEqualVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DSmallerEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DSmallerEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DPlusVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DPlusVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DPlusFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DPlusFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DPlusEqualVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DPlusEqualVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DPlusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DPlusEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualVector3D(struct FSafeVector3D& FSV, struct FVector& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DNotEqualVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DNotEqualVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DNotEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DNotEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DModVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DModVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DModFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DModFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DMinusVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DMinusVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DMinusFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DMinusFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DMinusEqualVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DMinusEqualVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DMinusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DMinusEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DIncreaseFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DIncreaseFSV(struct FSafeVector3D& FSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DIncreaseFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DIncreaseFSV_Params Parms{};

	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterVector3D(struct FSafeVector3D& FSV, struct FVector& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DGreaterVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DGreaterVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DGreaterFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DGreaterFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualVector3D(struct FSafeVector3D& FSV, struct FVector& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DGreaterEqualVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DGreaterEqualVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DGreaterEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DGreaterEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualVector3D(struct FSafeVector3D& FSV, struct FVector& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DEqualVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DEqualVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideVector3D(struct FSafeVector3D& FSV, struct FVector& NV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DDivideVector3D");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DDivideVector3D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideFSV(struct FSafeVector3D& FSV, struct FSafeVector3D& SSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DDivideFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DDivideFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDecreaseFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector3D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDecreaseFSV(struct FSafeVector3D& FSV, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector3DDecreaseFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector3DDecreaseFSV_Params Parms{};

	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DTimesVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DTimesVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DTimesFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DTimesFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DSmallerVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DSmallerVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DSmallerFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DSmallerFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DSmallerEqualVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DSmallerEqualVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DSmallerEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DSmallerEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DPlusVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DPlusVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DPlusFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DPlusFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DPlusEqualVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DPlusEqualVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DPlusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DPlusEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DNotEqualVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DNotEqualVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DNotEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DNotEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DModVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DModVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DModFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DModFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DMinusVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DMinusVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DMinusFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DMinusFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DMinusEqualVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DMinusEqualVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DMinusEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DMinusEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DIncreaseFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DIncreaseFSV(struct FSafeVector2D& FSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DIncreaseFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DIncreaseFSV_Params Parms{};

	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DGreaterVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DGreaterVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DGreaterFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DGreaterFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DGreaterEqualVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DGreaterEqualVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DGreaterEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DGreaterEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DEqualVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DEqualVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualFSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DEqualFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DEqualFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NV                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideVector2D(struct FSafeVector2D& FSV, struct FVector2D& NV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DDivideVector2D");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DDivideVector2D_Params Parms{};

	Parms.FSV = FSV;
	Parms.NV = NV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               SSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideFSV(struct FSafeVector2D& FSV, struct FSafeVector2D& SSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DDivideFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DDivideFSV_Params Parms{};

	Parms.FSV = FSV;
	Parms.SSV = SSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDecreaseFSV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               FSV                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeVector2D               ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDecreaseFSV(struct FSafeVector2D& FSV, struct FVector2D* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeVector2DDecreaseFSV");

	Params::USCLibrary_SCO_Pure_GetSafeVector2DDecreaseFSV_Params Parms{};

	Parms.FSV = FSV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  NT                                                               (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualTransform(struct FSafeTransform& FST, struct FTransform& NT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTransformNotEqualTransform");

	Params::USCLibrary_SCO_Pure_GetSafeTransformNotEqualTransform_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeTransform              SST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualFST(struct FSafeTransform& FST, struct FSafeTransform& SST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTransformNotEqualFST");

	Params::USCLibrary_SCO_Pure_GetSafeTransformNotEqualFST_Params Parms{};

	Parms.FST = FST;
	Parms.SST = SST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  NT                                                               (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTransformEqualTransform(struct FSafeTransform& FST, struct FTransform& NT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTransformEqualTransform");

	Params::USCLibrary_SCO_Pure_GetSafeTransformEqualTransform_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              FST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeTransform              SST                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTransformEqualFST(struct FSafeTransform& FST, struct FSafeTransform& SST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTransformEqualFST");

	Params::USCLibrary_SCO_Pure_GetSafeTransformEqualFST_Params Parms{};

	Parms.FST = FST;
	Parms.SST = SST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextSmallerText(struct FSafeText& FST, class FText& NT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextSmallerText");

	Params::USCLibrary_SCO_Pure_GetSafeTextSmallerText_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextSmallerFST(struct FSafeText& FST, struct FSafeText& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextSmallerFST");

	Params::USCLibrary_SCO_Pure_GetSafeTextSmallerFST_Params Parms{};

	Parms.FST = FST;
	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Output                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusText(struct FSafeText& FST, class FText& NT, class FText* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextPlusText");

	Params::USCLibrary_SCO_Pure_GetSafeTextPlusText_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Output                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusFST(struct FSafeText& FST, struct FSafeText& ST, class FText* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextPlusFST");

	Params::USCLibrary_SCO_Pure_GetSafeTextPlusFST_Params Parms{};

	Parms.FST = FST;
	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Output                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualText(struct FSafeText& FST, class FText& NT, class FText* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextPlusEqualText");

	Params::USCLibrary_SCO_Pure_GetSafeTextPlusEqualText_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Output                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualFST(struct FSafeText& FST, struct FSafeText& ST, class FText* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextPlusEqualFST");

	Params::USCLibrary_SCO_Pure_GetSafeTextPlusEqualFST_Params Parms{};

	Parms.FST = FST;
	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualText(struct FSafeText& FST, class FText& NT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextNotEqualText");

	Params::USCLibrary_SCO_Pure_GetSafeTextNotEqualText_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualFST(struct FSafeText& FST, struct FSafeText& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextNotEqualFST");

	Params::USCLibrary_SCO_Pure_GetSafeTextNotEqualFST_Params Parms{};

	Parms.FST = FST;
	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextGreaterText(struct FSafeText& FST, class FText& NT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextGreaterText");

	Params::USCLibrary_SCO_Pure_GetSafeTextGreaterText_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextGreaterFST(struct FSafeText& FST, struct FSafeText& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextGreaterFST");

	Params::USCLibrary_SCO_Pure_GetSafeTextGreaterFST_Params Parms{};

	Parms.FST = FST;
	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NT                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextEqualText(struct FSafeText& FST, class FText& NT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextEqualText");

	Params::USCLibrary_SCO_Pure_GetSafeTextEqualText_Params Parms{};

	Parms.FST = FST;
	Parms.NT = NT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualFST
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   FST                                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeTextEqualFST(struct FSafeText& FST, struct FSafeText& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeTextEqualFST");

	Params::USCLibrary_SCO_Pure_GetSafeTextEqualFST_Params Parms{};

	Parms.FST = FST;
	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringSmallerString(struct FSafeString& FSS, class FString& NS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringSmallerString");

	Params::USCLibrary_SCO_Pure_GetSafeStringSmallerString_Params Parms{};

	Parms.FSS = FSS;
	Parms.NS = NS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringSmallerFSS(struct FSafeString& FSS, struct FSafeString& SS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringSmallerFSS");

	Params::USCLibrary_SCO_Pure_GetSafeStringSmallerFSS_Params Parms{};

	Parms.FSS = FSS;
	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Output                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusString(struct FSafeString& FSS, class FString& NS, class FString* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringPlusString");

	Params::USCLibrary_SCO_Pure_GetSafeStringPlusString_Params Parms{};

	Parms.FSS = FSS;
	Parms.NS = NS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Output                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusFSS(struct FSafeString& FSS, struct FSafeString& SS, class FString* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringPlusFSS");

	Params::USCLibrary_SCO_Pure_GetSafeStringPlusFSS_Params Parms{};

	Parms.FSS = FSS;
	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Output                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualString(struct FSafeString& FSS, class FString& NS, class FString* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringPlusEqualString");

	Params::USCLibrary_SCO_Pure_GetSafeStringPlusEqualString_Params Parms{};

	Parms.FSS = FSS;
	Parms.NS = NS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Output                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualFSS(struct FSafeString& FSS, struct FSafeString& SS, class FString* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringPlusEqualFSS");

	Params::USCLibrary_SCO_Pure_GetSafeStringPlusEqualFSS_Params Parms{};

	Parms.FSS = FSS;
	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualString(struct FSafeString& FSS, class FString& NS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringNotEqualString");

	Params::USCLibrary_SCO_Pure_GetSafeStringNotEqualString_Params Parms{};

	Parms.FSS = FSS;
	Parms.NS = NS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualFSS(struct FSafeString& FSS, struct FSafeString& SS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringNotEqualFSS");

	Params::USCLibrary_SCO_Pure_GetSafeStringNotEqualFSS_Params Parms{};

	Parms.FSS = FSS;
	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringGreaterString(struct FSafeString& FSS, class FString& NS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringGreaterString");

	Params::USCLibrary_SCO_Pure_GetSafeStringGreaterString_Params Parms{};

	Parms.FSS = FSS;
	Parms.NS = NS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringGreaterFSS(struct FSafeString& FSS, struct FSafeString& SS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringGreaterFSS");

	Params::USCLibrary_SCO_Pure_GetSafeStringGreaterFSS_Params Parms{};

	Parms.FSS = FSS;
	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NS                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringEqualString(struct FSafeString& FSS, class FString& NS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringEqualString");

	Params::USCLibrary_SCO_Pure_GetSafeStringEqualString_Params Parms{};

	Parms.FSS = FSS;
	Parms.NS = NS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualFSS
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 FSS                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeStringEqualFSS(struct FSafeString& FSS, struct FSafeString& SS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeStringEqualFSS");

	Params::USCLibrary_SCO_Pure_GetSafeStringEqualFSS_Params Parms{};

	Parms.FSS = FSS;
	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorTimesRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorTimesRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorTimesFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorTimesFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerRotator(struct FSafeRotator& FSR, struct FRotator& NR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorSmallerRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorSmallerRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerFSR
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorSmallerFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorSmallerFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualRotator(struct FSafeRotator& FSR, struct FRotator& NR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorSmallerEqualRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorSmallerEqualRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualFSR
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorSmallerEqualFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorSmallerEqualFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorPlusRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorPlusRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorPlusFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorPlusFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorPlusEqualRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorPlusEqualRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorPlusEqualFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorPlusEqualFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualRotator(struct FSafeRotator& FSR, struct FRotator& NR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorNotEqualRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorNotEqualRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualFSR
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorNotEqualFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorNotEqualFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorModRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorModRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorModFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorModFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorMinusRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorMinusRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorMinusFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorMinusFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorMinusEqualRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorMinusEqualRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorMinusEqualFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorMinusEqualFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorIncreaseFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorIncreaseFSR(struct FSafeRotator& FSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorIncreaseFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorIncreaseFSR_Params Parms{};

	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterRotator(struct FSafeRotator& FSR, struct FRotator& NR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorGreaterRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorGreaterRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterFSR
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorGreaterFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorGreaterFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualRotator(struct FSafeRotator& FSR, struct FRotator& NR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorGreaterEqualRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorGreaterEqualRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualFSR
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorGreaterEqualFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorGreaterEqualFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualRotator(struct FSafeRotator& FSR, struct FRotator& NR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorEqualRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorEqualRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualFSR
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorEqualFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorEqualFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideRotator(struct FSafeRotator& FSR, struct FRotator& NR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorDivideRotator");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorDivideRotator_Params Parms{};

	Parms.FSR = FSR;
	Parms.NR = NR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeRotator                SSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideFSR(struct FSafeRotator& FSR, struct FSafeRotator& SSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorDivideFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorDivideFSR_Params Parms{};

	Parms.FSR = FSR;
	Parms.SSR = SSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDecreaseFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDecreaseFSR(struct FSafeRotator& FSR, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeRotatorDecreaseFSR");

	Params::USCLibrary_SCO_Pure_GetSafeRotatorDecreaseFSR_Params Parms{};

	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameSmallerName(struct FSafeName& FSN, class FName& NN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameSmallerName");

	Params::USCLibrary_SCO_Pure_GetSafeNameSmallerName_Params Parms{};

	Parms.FSN = FSN;
	Parms.NN = NN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   SSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameSmallerFSN(struct FSafeName& FSN, struct FSafeName& SSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameSmallerFSN");

	Params::USCLibrary_SCO_Pure_GetSafeNameSmallerFSN_Params Parms{};

	Parms.FSN = FSN;
	Parms.SSN = SSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusName(struct FSafeName& FSN, class FName& NN, class FName* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNamePlusName");

	Params::USCLibrary_SCO_Pure_GetSafeNamePlusName_Params Parms{};

	Parms.FSN = FSN;
	Parms.NN = NN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   SSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusFSN(struct FSafeName& FSN, struct FSafeName& SSN, class FName* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNamePlusFSN");

	Params::USCLibrary_SCO_Pure_GetSafeNamePlusFSN_Params Parms{};

	Parms.FSN = FSN;
	Parms.SSN = SSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualName(struct FSafeName& FSN, class FName& NN, class FName* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNamePlusEqualName");

	Params::USCLibrary_SCO_Pure_GetSafeNamePlusEqualName_Params Parms{};

	Parms.FSN = FSN;
	Parms.NN = NN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   SSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualFSN(struct FSafeName& FSN, struct FSafeName& SSN, class FName* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNamePlusEqualFSN");

	Params::USCLibrary_SCO_Pure_GetSafeNamePlusEqualFSN_Params Parms{};

	Parms.FSN = FSN;
	Parms.SSN = SSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualName(struct FSafeName& FSN, class FName& NN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameNotEqualName");

	Params::USCLibrary_SCO_Pure_GetSafeNameNotEqualName_Params Parms{};

	Parms.FSN = FSN;
	Parms.NN = NN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   SSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualFSN(struct FSafeName& FSN, struct FSafeName& SSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameNotEqualFSN");

	Params::USCLibrary_SCO_Pure_GetSafeNameNotEqualFSN_Params Parms{};

	Parms.FSN = FSN;
	Parms.SSN = SSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameGreaterName(struct FSafeName& FSN, class FName& NN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameGreaterName");

	Params::USCLibrary_SCO_Pure_GetSafeNameGreaterName_Params Parms{};

	Parms.FSN = FSN;
	Parms.NN = NN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   SSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameGreaterFSN(struct FSafeName& FSN, struct FSafeName& SSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameGreaterFSN");

	Params::USCLibrary_SCO_Pure_GetSafeNameGreaterFSN_Params Parms{};

	Parms.FSN = FSN;
	Parms.SSN = SSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameEqualName(struct FSafeName& FSN, class FName& NN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameEqualName");

	Params::USCLibrary_SCO_Pure_GetSafeNameEqualName_Params Parms{};

	Parms.FSN = FSN;
	Parms.NN = NN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   SSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeNameEqualFSN(struct FSafeName& FSN, struct FSafeName& SSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeNameEqualFSN");

	Params::USCLibrary_SCO_Pure_GetSafeNameEqualFSN_Params Parms{};

	Parms.FSN = FSN;
	Parms.SSN = SSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntXorInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntXorInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntXorFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntXorFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntTimesInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntTimesInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntTimesFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntTimesFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntSmallerInt(struct FSafeInt& FSI, int32& NI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntSmallerInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntSmallerInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntSmallerFSI(struct FSafeInt& FSI, struct FSafeInt& SSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntSmallerFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntSmallerFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualInt(struct FSafeInt& FSI, int32& NI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntSmallerEqualInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntSmallerEqualInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualFSI(struct FSafeInt& FSI, struct FSafeInt& SSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntSmallerEqualFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntSmallerEqualFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntShiftRInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntShiftRInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntShiftRFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntShiftRFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntShiftLInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntShiftLInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntShiftLFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntShiftLFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntPlusInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntPlusInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntPlusFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntPlusFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntPlusEqualInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntPlusEqualInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntPlusEqualFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntPlusEqualFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntOrInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntOrInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntOrFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntOrFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotInt(int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntNotInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntNotInt_Params Parms{};

	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotFSI(struct FSafeInt& FSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntNotFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntNotFSI_Params Parms{};

	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualInt(struct FSafeInt& FSI, int32& NI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntNotEqualInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntNotEqualInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualFSI(struct FSafeInt& FSI, struct FSafeInt& SSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntNotEqualFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntNotEqualFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntModInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntModInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntModInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntModFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntModFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntModFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntMinusInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntMinusInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntMinusFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntMinusFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntMinusEqualInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntMinusEqualInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntMinusEqualFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntMinusEqualFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntIncreaseFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntIncreaseFSI(struct FSafeInt& FSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntIncreaseFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntIncreaseFSI_Params Parms{};

	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntGreaterInt(struct FSafeInt& FSI, int32& NI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntGreaterInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntGreaterInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntGreaterFSI(struct FSafeInt& FSI, struct FSafeInt& SSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntGreaterFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntGreaterFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualInt(struct FSafeInt& FSI, int32& NI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntGreaterEqualInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntGreaterEqualInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualFSI(struct FSafeInt& FSI, struct FSafeInt& SSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntGreaterEqualFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntGreaterEqualFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntEqualInt(struct FSafeInt& FSI, int32& NI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntEqualInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntEqualInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeIntEqualFSI(struct FSafeInt& FSI, struct FSafeInt& SSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntEqualFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntEqualFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntDivideInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntDivideInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntDivideFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntDivideFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDecreaseFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntDecreaseFSI(struct FSafeInt& FSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntDecreaseFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntDecreaseFSI_Params Parms{};

	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndInt(struct FSafeInt& FSI, int32& NI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntAndInt");

	Params::USCLibrary_SCO_Pure_GetSafeIntAndInt_Params Parms{};

	Parms.FSI = FSI;
	Parms.NI = NI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    SSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndFSI(struct FSafeInt& FSI, struct FSafeInt& SSI, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeIntAndFSI");

	Params::USCLibrary_SCO_Pure_GetSafeIntAndFSI_Params Parms{};

	Parms.FSI = FSI;
	Parms.SSI = SSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatTimesFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatTimesFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatTimesFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatTimesFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatSmallerFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatSmallerFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFloat(struct FSafeFloat& FSF, float& NF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatSmallerFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatSmallerFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatSmallerEqualFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatSmallerEqualFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFloat(struct FSafeFloat& FSF, float& NF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatSmallerEqualFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatSmallerEqualFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatPlusFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatPlusFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatPlusFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatPlusFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatPlusEqualFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatPlusEqualFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatPlusEqualFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatPlusEqualFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatNotEqualFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatNotEqualFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFloat(struct FSafeFloat& FSF, float& NF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatNotEqualFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatNotEqualFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatModFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatModFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatModFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatModFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatMinusFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatMinusFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatMinusFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatMinusFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatMinusEqualFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatMinusEqualFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatMinusEqualFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatMinusEqualFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatIncreaseFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatIncreaseFSF(struct FSafeFloat& FSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatIncreaseFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatIncreaseFSF_Params Parms{};

	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatGreaterFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatGreaterFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFloat(struct FSafeFloat& FSF, float& NF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatGreaterFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatGreaterFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatGreaterEqualFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatGreaterEqualFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFloat(struct FSafeFloat& FSF, float& NF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatGreaterEqualFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatGreaterEqualFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatEqualFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatEqualFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFloat(struct FSafeFloat& FSF, float& NF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatEqualFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatEqualFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  SSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFSF(struct FSafeFloat& FSF, struct FSafeFloat& SSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatDivideFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatDivideFSF_Params Parms{};

	Parms.FSF = FSF;
	Parms.SSF = SSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFloat(struct FSafeFloat& FSF, float& NF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatDivideFloat");

	Params::USCLibrary_SCO_Pure_GetSafeFloatDivideFloat_Params Parms{};

	Parms.FSF = FSF;
	Parms.NF = NF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDecreaseFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDecreaseFSF(struct FSafeFloat& FSF, float* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeFloatDecreaseFSF");

	Params::USCLibrary_SCO_Pure_GetSafeFloatDecreaseFSF_Params Parms{};

	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualFSC
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  SSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualFSC(struct FSafeColor& FSC, struct FSafeColor& SSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeColorNotEqualFSC");

	Params::USCLibrary_SCO_Pure_GetSafeColorNotEqualFSC_Params Parms{};

	Parms.FSC = FSC;
	Parms.SSC = SSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                NC                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualColor(struct FSafeColor& FSC, struct FLinearColor& NC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeColorNotEqualColor");

	Params::USCLibrary_SCO_Pure_GetSafeColorNotEqualColor_Params Parms{};

	Parms.FSC = FSC;
	Parms.NC = NC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualFSC
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  SSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeColorEqualFSC(struct FSafeColor& FSC, struct FSafeColor& SSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeColorEqualFSC");

	Params::USCLibrary_SCO_Pure_GetSafeColorEqualFSC_Params Parms{};

	Parms.FSC = FSC;
	Parms.SSC = SSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                NC                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeColorEqualColor(struct FSafeColor& FSC, struct FLinearColor& NC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeColorEqualColor");

	Params::USCLibrary_SCO_Pure_GetSafeColorEqualColor_Params Parms{};

	Parms.FSC = FSC;
	Parms.NC = NC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteXorFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteXorFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteXorByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteXorByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteTimesFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteTimesFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteTimesByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteTimesByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteSmallerFSB(struct FSafeByte& FSB, struct FSafeByte& SSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteSmallerFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteSmallerFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualFSB(struct FSafeByte& FSB, struct FSafeByte& SSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteSmallerEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteSmallerEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualByte(struct FSafeByte& FSB, uint8& NB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteSmallerEqualByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteSmallerEqualByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteSmallerByte(struct FSafeByte& FSB, uint8& NB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteSmallerByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteSmallerByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteShiftRFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteShiftRFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteShiftRByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteShiftRByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteShiftLFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteShiftLFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteShiftLByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteShiftLByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBytePlusFSB");

	Params::USCLibrary_SCO_Pure_GetSafeBytePlusFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBytePlusEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeBytePlusEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBytePlusEqualByte");

	Params::USCLibrary_SCO_Pure_GetSafeBytePlusEqualByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBytePlusByte");

	Params::USCLibrary_SCO_Pure_GetSafeBytePlusByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteOrFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteOrFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteOrByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteOrByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotFSB(struct FSafeByte& FSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteNotFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteNotFSB_Params Parms{};

	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualFSB(struct FSafeByte& FSB, struct FSafeByte& SSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteNotEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteNotEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualByte(struct FSafeByte& FSB, uint8& NB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteNotEqualByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteNotEqualByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotByte(uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteNotByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteNotByte_Params Parms{};

	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteModFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteModFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteModFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteModByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteModByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteModByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteMinusFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteMinusFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteMinusEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteMinusEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteMinusEqualByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteMinusEqualByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteMinusByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteMinusByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteIncreaseFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteIncreaseFSB(struct FSafeByte& FSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteIncreaseFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteIncreaseFSB_Params Parms{};

	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteGreaterFSB(struct FSafeByte& FSB, struct FSafeByte& SSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteGreaterFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteGreaterFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualFSB(struct FSafeByte& FSB, struct FSafeByte& SSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteGreaterEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteGreaterEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualByte(struct FSafeByte& FSB, uint8& NB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteGreaterEqualByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteGreaterEqualByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteGreaterByte(struct FSafeByte& FSB, uint8& NB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteGreaterByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteGreaterByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteEqualFSB(struct FSafeByte& FSB, struct FSafeByte& SSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetSafeByteEqualByte(struct FSafeByte& FSB, uint8& NB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteEqualByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteEqualByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteDivideFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteDivideFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteDivideByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteDivideByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDecreaseFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteDecreaseFSB(struct FSafeByte& FSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteDecreaseFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteDecreaseFSB_Params Parms{};

	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndFSB(struct FSafeByte& FSB, struct FSafeByte& SSB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteAndFSB");

	Params::USCLibrary_SCO_Pure_GetSafeByteAndFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndByte(struct FSafeByte& FSB, uint8& NB, uint8* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeByteAndByte");

	Params::USCLibrary_SCO_Pure_GetSafeByteAndByte_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrFSB(struct FSafeBool& FSB, struct FSafeBool& SSB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolOrFSB");

	Params::USCLibrary_SCO_Pure_GetSafeBoolOrFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrBool(struct FSafeBool& FSB, bool& NB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolOrBool");

	Params::USCLibrary_SCO_Pure_GetSafeBoolOrBool_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualFSB(struct FSafeBool& FSB, struct FSafeBool& SSB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolNotEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeBoolNotEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualBool(struct FSafeBool& FSB, bool& NB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolNotEqualBool");

	Params::USCLibrary_SCO_Pure_GetSafeBoolNotEqualBool_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualFSB(struct FSafeBool& FSB, struct FSafeBool& SSB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolEqualFSB");

	Params::USCLibrary_SCO_Pure_GetSafeBoolEqualFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualBool(struct FSafeBool& FSB, bool& NB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolEqualBool");

	Params::USCLibrary_SCO_Pure_GetSafeBoolEqualBool_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   SSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndFSB(struct FSafeBool& FSB, struct FSafeBool& SSB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolAndFSB");

	Params::USCLibrary_SCO_Pure_GetSafeBoolAndFSB_Params Parms{};

	Parms.FSB = FSB;
	Parms.SSB = SSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndBool(struct FSafeBool& FSB, bool& NB, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetSafeBoolAndBool");

	Params::USCLibrary_SCO_Pure_GetSafeBoolAndBool_Params Parms{};

	Parms.FSB = FSB;
	Parms.NB = NB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorTimesFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_GetRotatorTimesFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorTimesFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorTimesFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetRotatorSmallerFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorSmallerFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorSmallerFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetRotatorSmallerEqualFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorSmallerEqualFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorSmallerEqualFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_GetRotatorPlusFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorPlusFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorPlusFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_GetRotatorPlusEqualFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorPlusEqualFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorPlusEqualFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorNotEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetRotatorNotEqualFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorNotEqualFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorNotEqualFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorModFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_GetRotatorModFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorModFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorModFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_GetRotatorMinusFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorMinusFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorMinusFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_GetRotatorMinusEqualFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorMinusEqualFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorMinusEqualFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetRotatorGreaterFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorGreaterFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorGreaterFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetRotatorGreaterEqualFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorGreaterEqualFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorGreaterEqualFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorEqualFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetRotatorEqualFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorEqualFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorEqualFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetRotatorDivideFSR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    NR                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FSafeRotator                FSR                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCO_Pure_GetRotatorDivideFSR(struct FRotator& NR, struct FSafeRotator& FSR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetRotatorDivideFSR");

	Params::USCLibrary_SCO_Pure_GetRotatorDivideFSR_Params Parms{};

	Parms.NR = NR;
	Parms.FSR = FSR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetNameSmallerFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetNameSmallerFSN(class FName& NN, struct FSafeName& FSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetNameSmallerFSN");

	Params::USCLibrary_SCO_Pure_GetNameSmallerFSN_Params Parms{};

	Parms.NN = NN;
	Parms.FSN = FSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCO_Pure_GetNamePlusFSN(class FName& NN, struct FSafeName& FSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetNamePlusFSN");

	Params::USCLibrary_SCO_Pure_GetNamePlusFSN_Params Parms{};

	Parms.NN = NN;
	Parms.FSN = FSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCO_Pure_GetNamePlusEqualFSN(class FName& NN, struct FSafeName& FSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetNamePlusEqualFSN");

	Params::USCLibrary_SCO_Pure_GetNamePlusEqualFSN_Params Parms{};

	Parms.NN = NN;
	Parms.FSN = FSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetNameNotEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetNameNotEqualFSN(class FName& NN, struct FSafeName& FSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetNameNotEqualFSN");

	Params::USCLibrary_SCO_Pure_GetNameNotEqualFSN_Params Parms{};

	Parms.NN = NN;
	Parms.FSN = FSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetNameGreaterFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetNameGreaterFSN(class FName& NN, struct FSafeName& FSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetNameGreaterFSN");

	Params::USCLibrary_SCO_Pure_GetNameGreaterFSN_Params Parms{};

	Parms.NN = NN;
	Parms.FSN = FSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetNameEqualFSN
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NN                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeName                   FSN                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetNameEqualFSN(class FName& NN, struct FSafeName& FSN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetNameEqualFSN");

	Params::USCLibrary_SCO_Pure_GetNameEqualFSN_Params Parms{};

	Parms.NN = NN;
	Parms.FSN = FSN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntXorFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntXorFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntXorFSI");

	Params::USCLibrary_SCO_Pure_GetIntXorFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntTimesFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntTimesFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntTimesFSI");

	Params::USCLibrary_SCO_Pure_GetIntTimesFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetIntSmallerFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntSmallerFSI");

	Params::USCLibrary_SCO_Pure_GetIntSmallerFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetIntSmallerEqualFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntSmallerEqualFSI");

	Params::USCLibrary_SCO_Pure_GetIntSmallerEqualFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftRFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntShiftRFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntShiftRFSI");

	Params::USCLibrary_SCO_Pure_GetIntShiftRFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftLFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntShiftLFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntShiftLFSI");

	Params::USCLibrary_SCO_Pure_GetIntShiftLFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntPlusFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntPlusFSI");

	Params::USCLibrary_SCO_Pure_GetIntPlusFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntPlusEqualFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntPlusEqualFSI");

	Params::USCLibrary_SCO_Pure_GetIntPlusEqualFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntOrFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntOrFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntOrFSI");

	Params::USCLibrary_SCO_Pure_GetIntOrFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntNotEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetIntNotEqualFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntNotEqualFSI");

	Params::USCLibrary_SCO_Pure_GetIntNotEqualFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntModFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntModFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntModFSI");

	Params::USCLibrary_SCO_Pure_GetIntModFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntMinusFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntMinusFSI");

	Params::USCLibrary_SCO_Pure_GetIntMinusFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntMinusEqualFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntMinusEqualFSI");

	Params::USCLibrary_SCO_Pure_GetIntMinusEqualFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetIntGreaterFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntGreaterFSI");

	Params::USCLibrary_SCO_Pure_GetIntGreaterFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetIntGreaterEqualFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntGreaterEqualFSI");

	Params::USCLibrary_SCO_Pure_GetIntGreaterEqualFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntEqualFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetIntEqualFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntEqualFSI");

	Params::USCLibrary_SCO_Pure_GetIntEqualFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntDivideFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntDivideFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntDivideFSI");

	Params::USCLibrary_SCO_Pure_GetIntDivideFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetIntAndFSI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NI                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeInt                    FSI                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCO_Pure_GetIntAndFSI(int32& NI, struct FSafeInt& FSI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetIntAndFSI");

	Params::USCLibrary_SCO_Pure_GetIntAndFSI_Params Parms{};

	Parms.NI = NI;
	Parms.FSI = FSI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatTimesFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_GetFloatTimesFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatTimesFSF");

	Params::USCLibrary_SCO_Pure_GetFloatTimesFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetFloatSmallerFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatSmallerFSF");

	Params::USCLibrary_SCO_Pure_GetFloatSmallerFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetFloatSmallerEqualFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatSmallerEqualFSF");

	Params::USCLibrary_SCO_Pure_GetFloatSmallerEqualFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_GetFloatPlusFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatPlusFSF");

	Params::USCLibrary_SCO_Pure_GetFloatPlusFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_GetFloatPlusEqualFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatPlusEqualFSF");

	Params::USCLibrary_SCO_Pure_GetFloatPlusEqualFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatNotEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetFloatNotEqualFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatNotEqualFSF");

	Params::USCLibrary_SCO_Pure_GetFloatNotEqualFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatModFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_GetFloatModFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatModFSF");

	Params::USCLibrary_SCO_Pure_GetFloatModFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_GetFloatMinusFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatMinusFSF");

	Params::USCLibrary_SCO_Pure_GetFloatMinusFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_GetFloatMinusEqualFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatMinusEqualFSF");

	Params::USCLibrary_SCO_Pure_GetFloatMinusEqualFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetFloatGreaterFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatGreaterFSF");

	Params::USCLibrary_SCO_Pure_GetFloatGreaterFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetFloatGreaterEqualFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatGreaterEqualFSF");

	Params::USCLibrary_SCO_Pure_GetFloatGreaterEqualFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatEqualFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetFloatEqualFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatEqualFSF");

	Params::USCLibrary_SCO_Pure_GetFloatEqualFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetFloatDivideFSF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NF                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeFloat                  FSF                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCO_Pure_GetFloatDivideFSF(float& NF, struct FSafeFloat& FSF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetFloatDivideFSF");

	Params::USCLibrary_SCO_Pure_GetFloatDivideFSF_Params Parms{};

	Parms.NF = NF;
	Parms.FSF = FSF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetColorNotEqualFSC
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor                NC                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetColorNotEqualFSC(struct FLinearColor& NC, struct FSafeColor& FSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetColorNotEqualFSC");

	Params::USCLibrary_SCO_Pure_GetColorNotEqualFSC_Params Parms{};

	Parms.NC = NC;
	Parms.FSC = FSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetColorEqualFSC
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor                NC                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeColor                  FSC                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetColorEqualFSC(struct FLinearColor& NC, struct FSafeColor& FSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetColorEqualFSC");

	Params::USCLibrary_SCO_Pure_GetColorEqualFSC_Params Parms{};

	Parms.NC = NC;
	Parms.FSC = FSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteXorFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteXorFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteXorFSB");

	Params::USCLibrary_SCO_Pure_GetByteXorFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteTimesFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteTimesFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteTimesFSB");

	Params::USCLibrary_SCO_Pure_GetByteTimesFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetByteSmallerFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteSmallerFSB");

	Params::USCLibrary_SCO_Pure_GetByteSmallerFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetByteSmallerEqualFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteSmallerEqualFSB");

	Params::USCLibrary_SCO_Pure_GetByteSmallerEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftRFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteShiftRFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteShiftRFSB");

	Params::USCLibrary_SCO_Pure_GetByteShiftRFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftLFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteShiftLFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteShiftLFSB");

	Params::USCLibrary_SCO_Pure_GetByteShiftLFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetBytePlusFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetBytePlusFSB");

	Params::USCLibrary_SCO_Pure_GetBytePlusFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetBytePlusEqualFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetBytePlusEqualFSB");

	Params::USCLibrary_SCO_Pure_GetBytePlusEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteOrFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteOrFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteOrFSB");

	Params::USCLibrary_SCO_Pure_GetByteOrFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteNotEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetByteNotEqualFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteNotEqualFSB");

	Params::USCLibrary_SCO_Pure_GetByteNotEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteModFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteModFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteModFSB");

	Params::USCLibrary_SCO_Pure_GetByteModFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteMinusFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteMinusFSB");

	Params::USCLibrary_SCO_Pure_GetByteMinusFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteMinusEqualFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteMinusEqualFSB");

	Params::USCLibrary_SCO_Pure_GetByteMinusEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetByteGreaterFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteGreaterFSB");

	Params::USCLibrary_SCO_Pure_GetByteGreaterFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetByteGreaterEqualFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteGreaterEqualFSB");

	Params::USCLibrary_SCO_Pure_GetByteGreaterEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetByteEqualFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteEqualFSB");

	Params::USCLibrary_SCO_Pure_GetByteEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteDivideFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteDivideFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteDivideFSB");

	Params::USCLibrary_SCO_Pure_GetByteDivideFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetByteAndFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeByte                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCO_Pure_GetByteAndFSB(uint8& NB, struct FSafeByte& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetByteAndFSB");

	Params::USCLibrary_SCO_Pure_GetByteAndFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetBoolOrFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetBoolOrFSB(bool& NB, struct FSafeBool& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetBoolOrFSB");

	Params::USCLibrary_SCO_Pure_GetBoolOrFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetBoolNotEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetBoolNotEqualFSB(bool& NB, struct FSafeBool& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetBoolNotEqualFSB");

	Params::USCLibrary_SCO_Pure_GetBoolNotEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetBoolEqualFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetBoolEqualFSB(bool& NB, struct FSafeBool& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetBoolEqualFSB");

	Params::USCLibrary_SCO_Pure_GetBoolEqualFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCO_Pure_GetBoolAndFSB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               NB                                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSafeBool                   FSB                                                              (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCO_Pure_GetBoolAndFSB(bool& NB, struct FSafeBool& FSB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCO_Pure_GetBoolAndFSB");

	Params::USCLibrary_SCO_Pure_GetBoolAndFSB_Params Parms{};

	Parms.NB = NB;
	Parms.FSB = FSB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Pure_SetSafeVector4DWithKey(struct FSafeVector4D& SV, const class FString& Key, struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeVector4DWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeVector4DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Pure_SetSafeVector4D(struct FSafeVector4D& SV, struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeVector4D");

	Params::USCLibrary_SCL_Pure_SetSafeVector4D_Params Parms{};

	Parms.SV = SV;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Pure_SetSafeVector3DWithKey(struct FSafeVector3D& SV, const class FString& Key, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeVector3DWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeVector3DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Pure_SetSafeVector3D(struct FSafeVector3D& SV, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeVector3D");

	Params::USCLibrary_SCL_Pure_SetSafeVector3D_Params Parms{};

	Parms.SV = SV;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Pure_SetSafeVector2DWithKey(struct FSafeVector2D& SV, const class FString& Key, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeVector2DWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeVector2DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Pure_SetSafeVector2D(struct FSafeVector2D& SV, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeVector2D");

	Params::USCLibrary_SCL_Pure_SetSafeVector2D_Params Parms{};

	Parms.SV = SV;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransformWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Value                                                            (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Pure_SetSafeTransformWithKey(struct FSafeTransform& ST, const class FString& Key, struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeTransformWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeTransformWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Value                                                            (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Pure_SetSafeTransform(struct FSafeTransform& ST, struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeTransform");

	Params::USCLibrary_SCL_Pure_SetSafeTransform_Params Parms{};

	Parms.ST = ST;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeTextWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Value                                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Pure_SetSafeTextWithKey(struct FSafeText& ST, const class FString& Key, class FText Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeTextWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeTextWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Value                                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Pure_SetSafeText(struct FSafeText& ST, class FText Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeText");

	Params::USCLibrary_SCL_Pure_SetSafeText_Params Parms{};

	Parms.ST = ST;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeStringWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Pure_SetSafeStringWithKey(struct FSafeString& SS, const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeStringWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeStringWithKey_Params Parms{};

	Parms.SS = SS;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Pure_SetSafeString(struct FSafeString& SS, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeString");

	Params::USCLibrary_SCL_Pure_SetSafeString_Params Parms{};

	Parms.SS = SS;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotatorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Pure_SetSafeRotatorWithKey(struct FSafeRotator& SR, const class FString& Key, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeRotatorWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeRotatorWithKey_Params Parms{};

	Parms.SR = SR;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Pure_SetSafeRotator(struct FSafeRotator& SR, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeRotator");

	Params::USCLibrary_SCL_Pure_SetSafeRotator_Params Parms{};

	Parms.SR = SR;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeNameWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Pure_SetSafeNameWithKey(struct FSafeName& SN, const class FString& Key, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeNameWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeNameWithKey_Params Parms{};

	Parms.SN = SN;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Pure_SetSafeName(struct FSafeName& SN, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeName");

	Params::USCLibrary_SCL_Pure_SetSafeName_Params Parms{};

	Parms.SN = SN;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeIntWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Pure_SetSafeIntWithKey(struct FSafeInt& SI, const class FString& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeIntWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeIntWithKey_Params Parms{};

	Parms.SI = SI;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Pure_SetSafeInt(struct FSafeInt& SI, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeInt");

	Params::USCLibrary_SCL_Pure_SetSafeInt_Params Parms{};

	Parms.SI = SI;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloatWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Pure_SetSafeFloatWithKey(struct FSafeFloat& SF, const class FString& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeFloatWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeFloatWithKey_Params Parms{};

	Parms.SF = SF;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Pure_SetSafeFloat(struct FSafeFloat& SF, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeFloat");

	Params::USCLibrary_SCL_Pure_SetSafeFloat_Params Parms{};

	Parms.SF = SF;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeColorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Pure_SetSafeColorWithKey(struct FSafeColor& SC, const class FString& Key, struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeColorWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeColorWithKey_Params Parms{};

	Parms.SC = SC;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Pure_SetSafeColor(struct FSafeColor& SC, struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeColor");

	Params::USCLibrary_SCL_Pure_SetSafeColor_Params Parms{};

	Parms.SC = SC;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeByteWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Pure_SetSafeByteWithKey(struct FSafeByte& SB, const class FString& Key, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeByteWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeByteWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Pure_SetSafeByte(struct FSafeByte& SB, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeByte");

	Params::USCLibrary_SCL_Pure_SetSafeByte_Params Parms{};

	Parms.SB = SB;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeBoolWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Pure_SetSafeBoolWithKey(struct FSafeBool& SB, const class FString& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeBoolWithKey");

	Params::USCLibrary_SCL_Pure_SetSafeBoolWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_SetSafeBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Pure_SetSafeBool(struct FSafeBool& SB, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_SetSafeBool");

	Params::USCLibrary_SCL_Pure_SetSafeBool_Params Parms{};

	Parms.SB = SB;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Pure_GetSafeVector4DWithKey(struct FSafeVector4D& SV, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeVector4DWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeVector4DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Pure_GetSafeVector4D(struct FSafeVector4D& SV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeVector4D");

	Params::USCLibrary_SCL_Pure_GetSafeVector4D_Params Parms{};

	Parms.SV = SV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Pure_GetSafeVector3DWithKey(struct FSafeVector3D& SV, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeVector3DWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeVector3DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Pure_GetSafeVector3D(struct FSafeVector3D& SV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeVector3D");

	Params::USCLibrary_SCL_Pure_GetSafeVector3D_Params Parms{};

	Parms.SV = SV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Pure_GetSafeVector2DWithKey(struct FSafeVector2D& SV, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeVector2DWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeVector2DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Pure_GetSafeVector2D(struct FSafeVector2D& SV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeVector2D");

	Params::USCLibrary_SCL_Pure_GetSafeVector2D_Params Parms{};

	Parms.SV = SV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransformWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Pure_GetSafeTransformWithKey(struct FSafeTransform& ST, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeTransformWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeTransformWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Pure_GetSafeTransform(struct FSafeTransform& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeTransform");

	Params::USCLibrary_SCL_Pure_GetSafeTransform_Params Parms{};

	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeTextWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Pure_GetSafeTextWithKey(struct FSafeText& ST, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeTextWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeTextWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Pure_GetSafeText(struct FSafeText& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeText");

	Params::USCLibrary_SCL_Pure_GetSafeText_Params Parms{};

	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeStringWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Pure_GetSafeStringWithKey(struct FSafeString& SS, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeStringWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeStringWithKey_Params Parms{};

	Parms.SS = SS;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Pure_GetSafeString(struct FSafeString& SS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeString");

	Params::USCLibrary_SCL_Pure_GetSafeString_Params Parms{};

	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotatorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Pure_GetSafeRotatorWithKey(struct FSafeRotator& SR, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeRotatorWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeRotatorWithKey_Params Parms{};

	Parms.SR = SR;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Pure_GetSafeRotator(struct FSafeRotator& SR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeRotator");

	Params::USCLibrary_SCL_Pure_GetSafeRotator_Params Parms{};

	Parms.SR = SR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeNameWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Pure_GetSafeNameWithKey(struct FSafeName& SN, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeNameWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeNameWithKey_Params Parms{};

	Parms.SN = SN;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Pure_GetSafeName(struct FSafeName& SN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeName");

	Params::USCLibrary_SCL_Pure_GetSafeName_Params Parms{};

	Parms.SN = SN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeIntWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Pure_GetSafeIntWithKey(struct FSafeInt& SI, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeIntWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeIntWithKey_Params Parms{};

	Parms.SI = SI;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Pure_GetSafeInt(struct FSafeInt& SI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeInt");

	Params::USCLibrary_SCL_Pure_GetSafeInt_Params Parms{};

	Parms.SI = SI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloatWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Pure_GetSafeFloatWithKey(struct FSafeFloat& SF, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeFloatWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeFloatWithKey_Params Parms{};

	Parms.SF = SF;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Pure_GetSafeFloat(struct FSafeFloat& SF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeFloat");

	Params::USCLibrary_SCL_Pure_GetSafeFloat_Params Parms{};

	Parms.SF = SF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeColorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Pure_GetSafeColorWithKey(struct FSafeColor& SC, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeColorWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeColorWithKey_Params Parms{};

	Parms.SC = SC;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Pure_GetSafeColor(struct FSafeColor& SC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeColor");

	Params::USCLibrary_SCL_Pure_GetSafeColor_Params Parms{};

	Parms.SC = SC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeByteWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Pure_GetSafeByteWithKey(struct FSafeByte& SB, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeByteWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeByteWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Pure_GetSafeByte(struct FSafeByte& SB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeByte");

	Params::USCLibrary_SCL_Pure_GetSafeByte_Params Parms{};

	Parms.SB = SB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeBoolWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Pure_GetSafeBoolWithKey(struct FSafeBool& SB, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeBoolWithKey");

	Params::USCLibrary_SCL_Pure_GetSafeBoolWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Pure_GetSafeBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Pure_GetSafeBool(struct FSafeBool& SB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Pure_GetSafeBool");

	Params::USCLibrary_SCL_Pure_GetSafeBool_Params Parms{};

	Parms.SB = SB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Callable_SetSafeVector4DWithKey(struct FSafeVector4D& SV, const class FString& Key, struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeVector4DWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeVector4DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Callable_SetSafeVector4D(struct FSafeVector4D& SV, struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeVector4D");

	Params::USCLibrary_SCL_Callable_SetSafeVector4D_Params Parms{};

	Parms.SV = SV;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Callable_SetSafeVector3DWithKey(struct FSafeVector3D& SV, const class FString& Key, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeVector3DWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeVector3DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Callable_SetSafeVector3D(struct FSafeVector3D& SV, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeVector3D");

	Params::USCLibrary_SCL_Callable_SetSafeVector3D_Params Parms{};

	Parms.SV = SV;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Callable_SetSafeVector2DWithKey(struct FSafeVector2D& SV, const class FString& Key, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeVector2DWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeVector2DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Callable_SetSafeVector2D(struct FSafeVector2D& SV, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeVector2D");

	Params::USCLibrary_SCL_Callable_SetSafeVector2D_Params Parms{};

	Parms.SV = SV;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransformWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Value                                                            (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Callable_SetSafeTransformWithKey(struct FSafeTransform& ST, const class FString& Key, struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeTransformWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeTransformWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Value                                                            (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Callable_SetSafeTransform(struct FSafeTransform& ST, struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeTransform");

	Params::USCLibrary_SCL_Callable_SetSafeTransform_Params Parms{};

	Parms.ST = ST;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeTextWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Value                                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Callable_SetSafeTextWithKey(struct FSafeText& ST, const class FString& Key, class FText Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeTextWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeTextWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Value                                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Callable_SetSafeText(struct FSafeText& ST, class FText Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeText");

	Params::USCLibrary_SCL_Callable_SetSafeText_Params Parms{};

	Parms.ST = ST;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeStringWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_SetSafeStringWithKey(struct FSafeString& SS, const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeStringWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeStringWithKey_Params Parms{};

	Parms.SS = SS;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_SetSafeString(struct FSafeString& SS, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeString");

	Params::USCLibrary_SCL_Callable_SetSafeString_Params Parms{};

	Parms.SS = SS;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotatorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Callable_SetSafeRotatorWithKey(struct FSafeRotator& SR, const class FString& Key, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeRotatorWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeRotatorWithKey_Params Parms{};

	Parms.SR = SR;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Callable_SetSafeRotator(struct FSafeRotator& SR, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeRotator");

	Params::USCLibrary_SCL_Callable_SetSafeRotator_Params Parms{};

	Parms.SR = SR;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeNameWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Callable_SetSafeNameWithKey(struct FSafeName& SN, const class FString& Key, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeNameWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeNameWithKey_Params Parms{};

	Parms.SN = SN;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Callable_SetSafeName(struct FSafeName& SN, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeName");

	Params::USCLibrary_SCL_Callable_SetSafeName_Params Parms{};

	Parms.SN = SN;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeIntWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Callable_SetSafeIntWithKey(struct FSafeInt& SI, const class FString& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeIntWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeIntWithKey_Params Parms{};

	Parms.SI = SI;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Callable_SetSafeInt(struct FSafeInt& SI, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeInt");

	Params::USCLibrary_SCL_Callable_SetSafeInt_Params Parms{};

	Parms.SI = SI;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloatWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Callable_SetSafeFloatWithKey(struct FSafeFloat& SF, const class FString& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeFloatWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeFloatWithKey_Params Parms{};

	Parms.SF = SF;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Callable_SetSafeFloat(struct FSafeFloat& SF, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeFloat");

	Params::USCLibrary_SCL_Callable_SetSafeFloat_Params Parms{};

	Parms.SF = SF;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeColorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Callable_SetSafeColorWithKey(struct FSafeColor& SC, const class FString& Key, struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeColorWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeColorWithKey_Params Parms{};

	Parms.SC = SC;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Callable_SetSafeColor(struct FSafeColor& SC, struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeColor");

	Params::USCLibrary_SCL_Callable_SetSafeColor_Params Parms{};

	Parms.SC = SC;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeByteWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Callable_SetSafeByteWithKey(struct FSafeByte& SB, const class FString& Key, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeByteWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeByteWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Callable_SetSafeByte(struct FSafeByte& SB, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeByte");

	Params::USCLibrary_SCL_Callable_SetSafeByte_Params Parms{};

	Parms.SB = SB;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeBoolWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Callable_SetSafeBoolWithKey(struct FSafeBool& SB, const class FString& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeBoolWithKey");

	Params::USCLibrary_SCL_Callable_SetSafeBoolWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetSafeBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Callable_SetSafeBool(struct FSafeBool& SB, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetSafeBool");

	Params::USCLibrary_SCL_Callable_SetSafeBool_Params Parms{};

	Parms.SB = SB;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Callable_SetRawSafeText(struct FSafeText& ST, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetRawSafeText");

	Params::USCLibrary_SCL_Callable_SetRawSafeText_Params Parms{};

	Parms.ST = ST;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_SetRawSafeString(struct FSafeString& SS, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetRawSafeString");

	Params::USCLibrary_SCL_Callable_SetRawSafeString_Params Parms{};

	Parms.SS = SS;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Callable_SetRawSafeName(struct FSafeName& SN, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetRawSafeName");

	Params::USCLibrary_SCL_Callable_SetRawSafeName_Params Parms{};

	Parms.SN = SN;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Callable_SetRawSafeInt(struct FSafeInt& SI, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetRawSafeInt");

	Params::USCLibrary_SCL_Callable_SetRawSafeInt_Params Parms{};

	Parms.SI = SI;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Callable_SetRawSafeFloat(struct FSafeFloat& SF, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetRawSafeFloat");

	Params::USCLibrary_SCL_Callable_SetRawSafeFloat_Params Parms{};

	Parms.SF = SF;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Callable_SetRawSafeByte(struct FSafeByte& SB, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetRawSafeByte");

	Params::USCLibrary_SCL_Callable_SetRawSafeByte_Params Parms{};

	Parms.SB = SB;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Callable_SetRawSafeBool(struct FSafeBool& SB, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_SetRawSafeBool");

	Params::USCLibrary_SCL_Callable_SetRawSafeBool_Params Parms{};

	Parms.SB = SB;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Callable_GetSafeVector4DWithKey(struct FSafeVector4D& SV, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeVector4DWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeVector4DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector4D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USCLibrary::SCL_Callable_GetSafeVector4D(struct FSafeVector4D& SV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeVector4D");

	Params::USCLibrary_SCL_Callable_GetSafeVector4D_Params Parms{};

	Parms.SV = SV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Callable_GetSafeVector3DWithKey(struct FSafeVector3D& SV, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeVector3DWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeVector3DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector3D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USCLibrary::SCL_Callable_GetSafeVector3D(struct FSafeVector3D& SV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeVector3D");

	Params::USCLibrary_SCL_Callable_GetSafeVector3D_Params Parms{};

	Parms.SV = SV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2DWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Callable_GetSafeVector2DWithKey(struct FSafeVector2D& SV, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeVector2DWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeVector2DWithKey_Params Parms{};

	Parms.SV = SV;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeVector2D               SV                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USCLibrary::SCL_Callable_GetSafeVector2D(struct FSafeVector2D& SV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeVector2D");

	Params::USCLibrary_SCL_Callable_GetSafeVector2D_Params Parms{};

	Parms.SV = SV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransformWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Callable_GetSafeTransformWithKey(struct FSafeTransform& ST, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeTransformWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeTransformWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeTransform              ST                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USCLibrary::SCL_Callable_GetSafeTransform(struct FSafeTransform& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeTransform");

	Params::USCLibrary_SCL_Callable_GetSafeTransform_Params Parms{};

	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeTextWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Callable_GetSafeTextWithKey(struct FSafeText& ST, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeTextWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeTextWithKey_Params Parms{};

	Parms.ST = ST;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USCLibrary::SCL_Callable_GetSafeText(struct FSafeText& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeText");

	Params::USCLibrary_SCL_Callable_GetSafeText_Params Parms{};

	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeStringWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetSafeStringWithKey(struct FSafeString& SS, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeStringWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeStringWithKey_Params Parms{};

	Parms.SS = SS;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetSafeString(struct FSafeString& SS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeString");

	Params::USCLibrary_SCL_Callable_GetSafeString_Params Parms{};

	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotatorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Callable_GetSafeRotatorWithKey(struct FSafeRotator& SR, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeRotatorWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeRotatorWithKey_Params Parms{};

	Parms.SR = SR;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeRotator                SR                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator USCLibrary::SCL_Callable_GetSafeRotator(struct FSafeRotator& SR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeRotator");

	Params::USCLibrary_SCL_Callable_GetSafeRotator_Params Parms{};

	Parms.SR = SR;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeNameWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Callable_GetSafeNameWithKey(struct FSafeName& SN, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeNameWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeNameWithKey_Params Parms{};

	Parms.SN = SN;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USCLibrary::SCL_Callable_GetSafeName(struct FSafeName& SN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeName");

	Params::USCLibrary_SCL_Callable_GetSafeName_Params Parms{};

	Parms.SN = SN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeIntWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Callable_GetSafeIntWithKey(struct FSafeInt& SI, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeIntWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeIntWithKey_Params Parms{};

	Parms.SI = SI;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USCLibrary::SCL_Callable_GetSafeInt(struct FSafeInt& SI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeInt");

	Params::USCLibrary_SCL_Callable_GetSafeInt_Params Parms{};

	Parms.SI = SI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloatWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Callable_GetSafeFloatWithKey(struct FSafeFloat& SF, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeFloatWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeFloatWithKey_Params Parms{};

	Parms.SF = SF;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USCLibrary::SCL_Callable_GetSafeFloat(struct FSafeFloat& SF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeFloat");

	Params::USCLibrary_SCL_Callable_GetSafeFloat_Params Parms{};

	Parms.SF = SF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeColorWithKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Callable_GetSafeColorWithKey(struct FSafeColor& SC, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeColorWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeColorWithKey_Params Parms{};

	Parms.SC = SC;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSafeColor                  SC                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USCLibrary::SCL_Callable_GetSafeColor(struct FSafeColor& SC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeColor");

	Params::USCLibrary_SCL_Callable_GetSafeColor_Params Parms{};

	Parms.SC = SC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeByteWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Callable_GetSafeByteWithKey(struct FSafeByte& SB, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeByteWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeByteWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 USCLibrary::SCL_Callable_GetSafeByte(struct FSafeByte& SB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeByte");

	Params::USCLibrary_SCL_Callable_GetSafeByte_Params Parms{};

	Parms.SB = SB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeBoolWithKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Callable_GetSafeBoolWithKey(struct FSafeBool& SB, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeBoolWithKey");

	Params::USCLibrary_SCL_Callable_GetSafeBoolWithKey_Params Parms{};

	Parms.SB = SB;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetSafeBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USCLibrary::SCL_Callable_GetSafeBool(struct FSafeBool& SB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetSafeBool");

	Params::USCLibrary_SCL_Callable_GetSafeBool_Params Parms{};

	Parms.SB = SB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeText                   ST                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetRawSafeText(struct FSafeText& ST)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetRawSafeText");

	Params::USCLibrary_SCL_Callable_GetRawSafeText_Params Parms{};

	Parms.ST = ST;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeString                 SS                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetRawSafeString(struct FSafeString& SS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetRawSafeString");

	Params::USCLibrary_SCL_Callable_GetRawSafeString_Params Parms{};

	Parms.SS = SS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeName                   SN                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetRawSafeName(struct FSafeName& SN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetRawSafeName");

	Params::USCLibrary_SCL_Callable_GetRawSafeName_Params Parms{};

	Parms.SN = SN;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeInt                    SI                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetRawSafeInt(struct FSafeInt& SI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetRawSafeInt");

	Params::USCLibrary_SCL_Callable_GetRawSafeInt_Params Parms{};

	Parms.SI = SI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeFloat                  SF                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetRawSafeFloat(struct FSafeFloat& SF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetRawSafeFloat");

	Params::USCLibrary_SCL_Callable_GetRawSafeFloat_Params Parms{};

	Parms.SF = SF;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeByte                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetRawSafeByte(struct FSafeByte& SB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetRawSafeByte");

	Params::USCLibrary_SCL_Callable_GetRawSafeByte_Params Parms{};

	Parms.SB = SB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSafeBool                   SB                                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USCLibrary::SCL_Callable_GetRawSafeBool(struct FSafeBool& SB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SCLibrary", "SCL_Callable_GetRawSafeBool");

	Params::USCLibrary_SCL_Callable_GetRawSafeBool_Params Parms{};

	Parms.SB = SB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SCUE4.SCUE4Settings
// (None)

class UClass* USCUE4Settings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SCUE4Settings");

	return Clss;
}


// SCUE4Settings SCUE4.Default__SCUE4Settings
// (Public, ClassDefaultObject, ArchetypeObject)

class USCUE4Settings* USCUE4Settings::GetDefaultObj()
{
	static class USCUE4Settings* Default = nullptr;

	if (!Default)
		Default = static_cast<USCUE4Settings*>(USCUE4Settings::StaticClass()->DefaultObject);

	return Default;
}


// Class SCUE4.SafeGameInstance
// (None)

class UClass* USafeGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeGameInstance");

	return Clss;
}


// SafeGameInstance SCUE4.Default__SafeGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USafeGameInstance* USafeGameInstance::GetDefaultObj()
{
	static class USafeGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USafeGameInstance*>(USafeGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SCUE4.SafeGameInstance.HideGameGuardConsole
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Set                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USafeGameInstance::HideGameGuardConsole(bool Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeGameInstance", "HideGameGuardConsole");

	Params::USafeGameInstance_HideGameGuardConsole_Params Parms{};

	Parms.Set = Set;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


