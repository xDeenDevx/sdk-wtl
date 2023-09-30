/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NVIDIAGfeSDK.

/// Class /Script/NVIDIAGfeSDK.HighlightsFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/NVIDIAGfeSDK.InitHighlights
/// Size: 0x00D0 (0x000030 - 0x000100)
class UInitHighlights : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x0050   (0x00B0)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.InitHighlights.InitHighlights
	UInitHighlights* InitHighlights(UObject* WorldContextObject, FString InGameName, bool Video, bool Screenshots);          // [0xb6e2c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.HighlightsConfigureAsync
/// Size: 0x0048 (0x000030 - 0x000078)
class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
	UHighlightsConfigureAsync* HighlightsConfigure(UObject* WorldContextObject, FGfeSDKHighlightConfigParams& ConfigParams); // [0xb6e730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.HighlightsOpenGroupAsync
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0050   (0x0068)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
	UHighlightsOpenGroupAsync* HighlightsOpenGroup(UObject* WorldContextObject, FGfeSDKHighlightOpenGroupParams& Params);    // [0xb6ea00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.HighlightsCloseGroupAsync
/// Size: 0x0040 (0x000030 - 0x000070)
class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
	UHighlightsCloseGroupAsync* HighlightsCloseGroup(UObject* WorldContextObject, FString GroupId, bool& DestroyHighlights); // [0xb6ecf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.HighlightsSetScreenshotAsync
/// Size: 0x0048 (0x000030 - 0x000078)
class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
	UHighlightsSetScreenshotAsync* HighlightsSetScreenshot(UObject* WorldContextObject, FString GroupId, FString HighlightId); // [0xb6f040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.HighlightsSetVideoAsync
/// Size: 0x0050 (0x000030 - 0x000080)
class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
	UHighlightsSetVideoAsync* HighlightsSetVideo(UObject* WorldContextObject, FString GroupId, FString HighlightId, int32_t& StartDelta, int32_t& EndDelta); // [0xb6f3f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.HighlightsSummaryAsync
/// Size: 0x0038 (0x000030 - 0x000068)
class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
	UHighlightsSummaryAsync* HighlightsOpenSummary(UObject* WorldContextObject, FGfeSDKHighlightSummaryParams& Params);      // [0xb6f8b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.HighlightsGetNumberAsync
/// Size: 0x0040 (0x000030 - 0x000070)
class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
	UHighlightsGetNumberAsync* HighlightsGetNumberOfHighlights(UObject* WorldContextObject, FString GroupId, EGfeSDKHighlightType& TagFilter, EGfeSDKHighlightSignificance& SignificanceFilter); // [0xb6fb30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/NVIDIAGfeSDK.RequestPermissionsAsync
/// Size: 0x0038 (0x000030 - 0x000068)
class URequestPermissionsAsync : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
	URequestPermissionsAsync* GFERequestPermissions(UObject* WorldContextObject, bool Video, bool Screenshots);              // [0xb6ff20] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKCreateResponse
/// Size: 0x0068 (0x000000 - 0x000068)
struct FGfeSDKCreateResponse
{ 
	uint16_t                                           VersionMajor;                                               // 0x0000   (0x0002)  
	uint16_t                                           VersionMinor;                                               // 0x0002   (0x0002)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            NVIDIAGfeVersion;                                           // 0x0008   (0x0010)  
	TMap<EGfeSDKScope, EGfeSDKPermission>              ScopePermissions;                                           // 0x0018   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGfeSDKHighlightSummaryParams
{ 
	TArray<FGfeSDKHighlightGroupView>                  GroupViews;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightGroupView
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGfeSDKHighlightGroupView
{ 
	FString                                            GroupId;                                                    // 0x0000   (0x0010)  
	EGfeSDKHighlightType                               TagsFilter;                                                 // 0x0010   (0x0001)  
	EGfeSDKHighlightSignificance                       SignificanceFilter;                                         // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightVideoParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGfeSDKHighlightVideoParams
{ 
	FString                                            GroupId;                                                    // 0x0000   (0x0010)  
	FString                                            HighlightId;                                                // 0x0010   (0x0010)  
	int32_t                                            StartDelta;                                                 // 0x0020   (0x0004)  
	int32_t                                            EndDelta;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGfeSDKHighlightScreenshotParams
{ 
	FString                                            GroupId;                                                    // 0x0000   (0x0010)  
	FString                                            HighlightId;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGfeSDKHighlightCloseGroupParams
{ 
	FString                                            GroupId;                                                    // 0x0000   (0x0010)  
	bool                                               DestroyHighlights;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGfeSDKHighlightOpenGroupParams
{ 
	FString                                            GroupId;                                                    // 0x0000   (0x0010)  
	TMap<FString, FString>                             GroupDescriptionTranslationTable;                           // 0x0010   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKPermissionsChangedData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGfeSDKPermissionsChangedData
{ 
	TMap<EGfeSDKScope, EGfeSDKPermission>              ScopePermissions;                                           // 0x0000   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGfeSDKRequestPermissionsParams
{ 
	TArray<EGfeSDKScope>                               Scopes;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightConfigParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGfeSDKHighlightConfigParams
{ 
	TArray<FGfeSDKHighlightDefinition>                 HighlightDefinitions;                                       // 0x0000   (0x0010)  
	FString                                            DefaultLocale;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightDefinition
/// Size: 0x0068 (0x000000 - 0x000068)
struct FGfeSDKHighlightDefinition
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	bool                                               UserDefaultInterest;                                        // 0x0010   (0x0001)  
	EGfeSDKHighlightType                               HighlightTags;                                              // 0x0011   (0x0001)  
	EGfeSDKHighlightSignificance                       Significance;                                               // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0013   (0x0005)  MISSED
	TMap<FString, FString>                             NameTranslationTable;                                       // 0x0018   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKCreateInputParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGfeSDKCreateInputParams
{ 
	FString                                            AppName;                                                    // 0x0000   (0x0010)  
	TArray<EGfeSDKScope>                               RequiredScopes;                                             // 0x0010   (0x0010)  
	bool                                               PollForCallbacks;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKReturnCode
/// Size: 0x39
enum EGfeSDKReturnCode : uint8_t
{
	EGfeSDKReturnCode__Success                                                       = 0,
	EGfeSDKReturnCode__SuccessIpcOldSdk                                              = 1,
	EGfeSDKReturnCode__SuccessIpcOldGfe                                              = 2,
	EGfeSDKReturnCode__Error                                                         = 3,
	EGfeSDKReturnCode__ErrorGfeVersion                                               = 4,
	EGfeSDKReturnCode__ErrorSdkVersion                                               = 5,
	EGfeSDKReturnCode__ErrorModuleNotLoaded                                          = 6,
	EGfeSDKReturnCode__ErrorWrongTimeRangeSet                                        = 7,
	EGfeSDKReturnCode__ErrorGeneric                                                  = 8,
	EGfeSDKReturnCode__ErrorNotImplemented                                           = 9,
	EGfeSDKReturnCode__ErrorInvalidParameter                                         = 10,
	EGfeSDKReturnCode__ErrorNotSet                                                   = 11,
	EGfeSDKReturnCode__ErrorShadowplayIRDisabled                                     = 12,
	EGfeSDKReturnCode__ErrorSDKInUse                                                 = 13,
	EGfeSDKReturnCode__ErrorGroupNotFound                                            = 14,
	EGfeSDKReturnCode__ErrorFileNotFound                                             = 15,
	EGfeSDKReturnCode__ErrorHighlightsSetupFailed                                    = 16,
	EGfeSDKReturnCode__ErrorHighlightsNotConfigured                                  = 17,
	EGfeSDKReturnCode__ErrorHighlightSaveFailed                                      = 18,
	EGfeSDKReturnCode__ErrorUnexpectedException                                      = 19,
	EGfeSDKReturnCode__ErrorNoHighlights                                             = 20,
	EGfeSDKReturnCode__ErrorNoConnection                                             = 21,
	EGfeSDKReturnCode__ErrorPermissionNotGranted                                     = 22,
	EGfeSDKReturnCode__ErrorPermissionDenied                                         = 23,
	EGfeSDKReturnCode__ErrorInvalidHandle                                            = 24,
	EGfeSDKReturnCode__ErrorUnhandledException                                       = 25,
	EGfeSDKReturnCode__ErrorOutOfMemory                                              = 26,
	EGfeSDKReturnCode__ErrorLoadLibrary                                              = 27,
	EGfeSDKReturnCode__ErrorLibraryCallFailed                                        = 28,
	EGfeSDKReturnCode__ErrorIPCFailed                                                = 29,
	EGfeSDKReturnCode__ErrorConnection                                               = 30,
	EGfeSDKReturnCode__ErrorLibCallTimeout                                           = 32,
	EGfeSDKReturnCode__ErrorApplicationLookupFailed                                  = 33,
	EGfeSDKReturnCode__ErrorApplicationNotKnown                                      = 34,
	EGfeSDKReturnCode__ErrorFeatureDisabled                                          = 35,
	EGfeSDKReturnCode__ErrorAppNoOptimization                                        = 36,
	EGfeSDKReturnCode__ErrorAppSettingsRead                                          = 37,
	EGfeSDKReturnCode__ErrorAppSettingsWrite                                         = 38,
	EGfeSDKReturnCode__EGfeSDKReturnCode_MAX                                         = 39
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKScope
/// Size: 0x04
enum EGfeSDKScope : uint8_t
{
	EGfeSDKScope__Highlights                                                         = 0,
	EGfeSDKScope__HighlightsRecordVideo                                              = 1,
	EGfeSDKScope__HighlightsRecordScreenshot                                         = 2,
	EGfeSDKScope__MAX                                                                = 3
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKPermission
/// Size: 0x05
enum EGfeSDKPermission : uint8_t
{
	EGfeSDKPermission__Granted                                                       = 0,
	EGfeSDKPermission__Denied                                                        = 1,
	EGfeSDKPermission__MustAsk                                                       = 2,
	EGfeSDKPermission__Unknown                                                       = 3,
	EGfeSDKPermission__MAX                                                           = 4
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightSignificance
/// Size: 0x09
enum EGfeSDKHighlightSignificance : uint8_t
{
	EGfeSDKHighlightSignificance__NONE                                               = 0,
	EGfeSDKHighlightSignificance__ExtremelyBad                                       = 1,
	EGfeSDKHighlightSignificance__VeryBad                                            = 2,
	EGfeSDKHighlightSignificance__Bad                                                = 4,
	EGfeSDKHighlightSignificance__Neutral                                            = 8,
	EGfeSDKHighlightSignificance__Good                                               = 16,
	EGfeSDKHighlightSignificance__VeryGood                                           = 32,
	EGfeSDKHighlightSignificance__ExtremelyGood                                      = 64,
	EGfeSDKHighlightSignificance__MAX                                                = 128
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightType
/// Size: 0x07
enum EGfeSDKHighlightType : uint8_t
{
	EGfeSDKHighlightType__NONE                                                       = 0,
	EGfeSDKHighlightType__Milestone                                                  = 1,
	EGfeSDKHighlightType__Achievement                                                = 2,
	EGfeSDKHighlightType__Incident                                                   = 4,
	EGfeSDKHighlightType__StateChange                                                = 8,
	EGfeSDKHighlightType__Unannounced                                                = 16,
	EGfeSDKHighlightType__MAX                                                        = 32
};

