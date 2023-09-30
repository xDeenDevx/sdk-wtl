#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class NVIDIAGfeSDK.HighlightsFunctionLibrary
class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHighlightsFunctionLibrary* GetDefaultObj();

	void Poll();
	void ChekIfHighlightsAvailable(struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, enum class EGfeSDKPermission* Video, enum class EGfeSDKPermission* Screenshots);
};

// 0xD0 (0x100 - 0x30)
// Class NVIDIAGfeSDK.InitHighlights
class UInitHighlights : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInitHighlights* GetDefaultObj();

	class UInitHighlights* InitHighlights(class UObject* WorldContextObject, const class FString& InGameName, bool Video, bool Screenshots);
};

// 0x48 (0x78 - 0x30)
// Class NVIDIAGfeSDK.HighlightsConfigureAsync
class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_140[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHighlightsConfigureAsync* GetDefaultObj();

	class UHighlightsConfigureAsync* HighlightsConfigure(class UObject* WorldContextObject, struct FGfeSDKHighlightConfigParams& ConfigParams);
};

// 0x88 (0xB8 - 0x30)
// Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_149[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHighlightsOpenGroupAsync* GetDefaultObj();

	class UHighlightsOpenGroupAsync* HighlightsOpenGroup(class UObject* WorldContextObject, struct FGfeSDKHighlightOpenGroupParams& Params);
};

// 0x40 (0x70 - 0x30)
// Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHighlightsCloseGroupAsync* GetDefaultObj();

	class UHighlightsCloseGroupAsync* HighlightsCloseGroup(class UObject* WorldContextObject, const class FString& GroupId, bool& DestroyHighlights);
};

// 0x48 (0x78 - 0x30)
// Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_154[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHighlightsSetScreenshotAsync* GetDefaultObj();

	class UHighlightsSetScreenshotAsync* HighlightsSetScreenshot(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId);
};

// 0x50 (0x80 - 0x30)
// Class NVIDIAGfeSDK.HighlightsSetVideoAsync
class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHighlightsSetVideoAsync* GetDefaultObj();

	class UHighlightsSetVideoAsync* HighlightsSetVideo(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId, int32& StartDelta, int32& EndDelta);
};

// 0x38 (0x68 - 0x30)
// Class NVIDIAGfeSDK.HighlightsSummaryAsync
class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHighlightsSummaryAsync* GetDefaultObj();

	class UHighlightsSummaryAsync* HighlightsOpenSummary(class UObject* WorldContextObject, struct FGfeSDKHighlightSummaryParams& Params);
};

// 0x40 (0x70 - 0x30)
// Class NVIDIAGfeSDK.HighlightsGetNumberAsync
class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_187[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHighlightsGetNumberAsync* GetDefaultObj();

	class UHighlightsGetNumberAsync* HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const class FString& GroupId, enum class EGfeSDKHighlightType& TagFilter, enum class EGfeSDKHighlightSignificance& SignificanceFilter);
};

// 0x38 (0x68 - 0x30)
// Class NVIDIAGfeSDK.RequestPermissionsAsync
class URequestPermissionsAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_193[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URequestPermissionsAsync* GetDefaultObj();

	class URequestPermissionsAsync* GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots);
};

}


