#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NVIDIAGfeSDK.HighlightsFunctionLibrary
// (None)

class UClass* UHighlightsFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsFunctionLibrary");

	return Clss;
}


// HighlightsFunctionLibrary NVIDIAGfeSDK.Default__HighlightsFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsFunctionLibrary* UHighlightsFunctionLibrary::GetDefaultObj()
{
	static class UHighlightsFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsFunctionLibrary*>(UHighlightsFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UHighlightsFunctionLibrary::Poll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsFunctionLibrary", "Poll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGfeSDKCreateResponse       InitProperties                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               VideoGranted                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ScreenshotsGranted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGfeSDKPermission       Video                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGfeSDKPermission       Screenshots                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHighlightsFunctionLibrary::ChekIfHighlightsAvailable(struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, enum class EGfeSDKPermission* Video, enum class EGfeSDKPermission* Screenshots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsFunctionLibrary", "ChekIfHighlightsAvailable");

	Params::UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params Parms{};

	Parms.InitProperties = InitProperties;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VideoGranted != nullptr)
		*VideoGranted = Parms.VideoGranted;

	if (ScreenshotsGranted != nullptr)
		*ScreenshotsGranted = Parms.ScreenshotsGranted;

	if (Video != nullptr)
		*Video = Parms.Video;

	if (Screenshots != nullptr)
		*Screenshots = Parms.Screenshots;

}


// Class NVIDIAGfeSDK.InitHighlights
// (None)

class UClass* UInitHighlights::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InitHighlights");

	return Clss;
}


// InitHighlights NVIDIAGfeSDK.Default__InitHighlights
// (Public, ClassDefaultObject, ArchetypeObject)

class UInitHighlights* UInitHighlights::GetDefaultObj()
{
	static class UInitHighlights* Default = nullptr;

	if (!Default)
		Default = static_cast<UInitHighlights*>(UInitHighlights::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.InitHighlights.InitHighlights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InGameName                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Video                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Screenshots                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInitHighlights*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInitHighlights* UInitHighlights::InitHighlights(class UObject* WorldContextObject, const class FString& InGameName, bool Video, bool Screenshots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InitHighlights", "InitHighlights");

	Params::UInitHighlights_InitHighlights_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InGameName = InGameName;
	Parms.Video = Video;
	Parms.Screenshots = Screenshots;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.HighlightsConfigureAsync
// (None)

class UClass* UHighlightsConfigureAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsConfigureAsync");

	return Clss;
}


// HighlightsConfigureAsync NVIDIAGfeSDK.Default__HighlightsConfigureAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsConfigureAsync* UHighlightsConfigureAsync::GetDefaultObj()
{
	static class UHighlightsConfigureAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsConfigureAsync*>(UHighlightsConfigureAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightConfigParamsConfigParams                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsConfigureAsync*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsConfigureAsync* UHighlightsConfigureAsync::HighlightsConfigure(class UObject* WorldContextObject, struct FGfeSDKHighlightConfigParams& ConfigParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsConfigureAsync", "HighlightsConfigure");

	Params::UHighlightsConfigureAsync_HighlightsConfigure_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ConfigParams = ConfigParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
// (None)

class UClass* UHighlightsOpenGroupAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsOpenGroupAsync");

	return Clss;
}


// HighlightsOpenGroupAsync NVIDIAGfeSDK.Default__HighlightsOpenGroupAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::GetDefaultObj()
{
	static class UHighlightsOpenGroupAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsOpenGroupAsync*>(UHighlightsOpenGroupAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightOpenGroupParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsOpenGroupAsync*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::HighlightsOpenGroup(class UObject* WorldContextObject, struct FGfeSDKHighlightOpenGroupParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsOpenGroupAsync", "HighlightsOpenGroup");

	Params::UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
// (None)

class UClass* UHighlightsCloseGroupAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsCloseGroupAsync");

	return Clss;
}


// HighlightsCloseGroupAsync NVIDIAGfeSDK.Default__HighlightsCloseGroupAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::GetDefaultObj()
{
	static class UHighlightsCloseGroupAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsCloseGroupAsync*>(UHighlightsCloseGroupAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GroupId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DestroyHighlights                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsCloseGroupAsync*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::HighlightsCloseGroup(class UObject* WorldContextObject, const class FString& GroupId, bool& DestroyHighlights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsCloseGroupAsync", "HighlightsCloseGroup");

	Params::UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupId = GroupId;
	Parms.DestroyHighlights = DestroyHighlights;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
// (None)

class UClass* UHighlightsSetScreenshotAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsSetScreenshotAsync");

	return Clss;
}


// HighlightsSetScreenshotAsync NVIDIAGfeSDK.Default__HighlightsSetScreenshotAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::GetDefaultObj()
{
	static class UHighlightsSetScreenshotAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsSetScreenshotAsync*>(UHighlightsSetScreenshotAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GroupId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      HighlightId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsSetScreenshotAsync*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::HighlightsSetScreenshot(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsSetScreenshotAsync", "HighlightsSetScreenshot");

	Params::UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupId = GroupId;
	Parms.HighlightId = HighlightId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.HighlightsSetVideoAsync
// (None)

class UClass* UHighlightsSetVideoAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsSetVideoAsync");

	return Clss;
}


// HighlightsSetVideoAsync NVIDIAGfeSDK.Default__HighlightsSetVideoAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::GetDefaultObj()
{
	static class UHighlightsSetVideoAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsSetVideoAsync*>(UHighlightsSetVideoAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GroupId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      HighlightId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartDelta                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndDelta                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsSetVideoAsync*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::HighlightsSetVideo(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId, int32& StartDelta, int32& EndDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsSetVideoAsync", "HighlightsSetVideo");

	Params::UHighlightsSetVideoAsync_HighlightsSetVideo_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupId = GroupId;
	Parms.HighlightId = HighlightId;
	Parms.StartDelta = StartDelta;
	Parms.EndDelta = EndDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.HighlightsSummaryAsync
// (None)

class UClass* UHighlightsSummaryAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsSummaryAsync");

	return Clss;
}


// HighlightsSummaryAsync NVIDIAGfeSDK.Default__HighlightsSummaryAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsSummaryAsync* UHighlightsSummaryAsync::GetDefaultObj()
{
	static class UHighlightsSummaryAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsSummaryAsync*>(UHighlightsSummaryAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightSummaryParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsSummaryAsync*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsSummaryAsync* UHighlightsSummaryAsync::HighlightsOpenSummary(class UObject* WorldContextObject, struct FGfeSDKHighlightSummaryParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsSummaryAsync", "HighlightsOpenSummary");

	Params::UHighlightsSummaryAsync_HighlightsOpenSummary_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.HighlightsGetNumberAsync
// (None)

class UClass* UHighlightsGetNumberAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighlightsGetNumberAsync");

	return Clss;
}


// HighlightsGetNumberAsync NVIDIAGfeSDK.Default__HighlightsGetNumberAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::GetDefaultObj()
{
	static class UHighlightsGetNumberAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighlightsGetNumberAsync*>(UHighlightsGetNumberAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GroupId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGfeSDKHighlightType    TagFilter                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGfeSDKHighlightSignificanceSignificanceFilter                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsGetNumberAsync*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const class FString& GroupId, enum class EGfeSDKHighlightType& TagFilter, enum class EGfeSDKHighlightSignificance& SignificanceFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighlightsGetNumberAsync", "HighlightsGetNumberOfHighlights");

	Params::UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupId = GroupId;
	Parms.TagFilter = TagFilter;
	Parms.SignificanceFilter = SignificanceFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NVIDIAGfeSDK.RequestPermissionsAsync
// (None)

class UClass* URequestPermissionsAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RequestPermissionsAsync");

	return Clss;
}


// RequestPermissionsAsync NVIDIAGfeSDK.Default__RequestPermissionsAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class URequestPermissionsAsync* URequestPermissionsAsync::GetDefaultObj()
{
	static class URequestPermissionsAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<URequestPermissionsAsync*>(URequestPermissionsAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Video                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Screenshots                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URequestPermissionsAsync*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URequestPermissionsAsync* URequestPermissionsAsync::GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RequestPermissionsAsync", "GFERequestPermissions");

	Params::URequestPermissionsAsync_GFERequestPermissions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Video = Video;
	Parms.Screenshots = Screenshots;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


