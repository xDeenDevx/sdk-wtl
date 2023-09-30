/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieSceneCapture.

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0030 (0x000028 - 0x000058)
class UMovieSceneCaptureProtocolBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0028   (0x0028)  MISSED
	EMovieSceneCaptureProtocolState                    State;                                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	bool IsCapturing();                                                                                                      // [0x3061900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	EMovieSceneCaptureProtocolState GetState();                                                                              // [0x2957740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0000 (0x000058 - 0x000058)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0038 (0x000058 - 0x000090)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
	FString                                            Filename;                                                   // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	FCompositionGraphCapturePasses                     IncludeRenderPasses;                                        // 0x0058   (0x0010)  
	bool                                               bCaptureFramesInHDR;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            HDRCompressionQuality;                                      // 0x006C   (0x0004)  
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FSoftObjectPath                                    PostProcessingMaterial;                                     // 0x0078   (0x0018)  
	bool                                               bDisableScreenPercentage;                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	UMaterialInterface*                                PostProcessingMaterialPtr;                                  // 0x0098   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x00A0   (0x0020)  MISSED
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0010 (0x000058 - 0x000068)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x0070 (0x000068 - 0x0000D8)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0068   (0x0070)  MISSED
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
public:
	int32_t                                            CompressionQuality;                                         // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
public:
	bool                                               bCompressed;                                                // 0x00D8   (0x0001)  
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x00DA   (0x000E)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCaptureInterface : public UInterface
{ 
public:
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x01F8 (0x000028 - 0x000220)
class UMovieSceneCapture : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	FSoftClassPath                                     ImageCaptureProtocolType;                                   // 0x0038   (0x0018)  
	FSoftClassPath                                     AudioCaptureProtocolType;                                   // 0x0050   (0x0018)  
	UMovieSceneImageCaptureProtocolBase*               ImageCaptureProtocol;                                       // 0x0068   (0x0008)  
	UMovieSceneAudioCaptureProtocolBase*               AudioCaptureProtocol;                                       // 0x0070   (0x0008)  
	FMovieSceneCaptureSettings                         Settings;                                                   // 0x0078   (0x0070)  
	bool                                               bUseSeparateProcess;                                        // 0x00E8   (0x0001)  
	bool                                               bCloseEditorWhenCaptureStarts;                              // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FString                                            AdditionalCommandLineArguments;                             // 0x00F0   (0x0010)  
	FString                                            InheritedCommandLineArguments;                              // 0x0100   (0x0010)  
	unsigned char                                      UnknownData02_6[0x110];                                     // 0x0110   (0x0110)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	void SetImageCaptureProtocolType(UClass* ProtocolType);                                                                  // [0x30610f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	void SetAudioCaptureProtocolType(UClass* ProtocolType);                                                                  // [0x3060fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();                                                               // [0xe7e490] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();                                                               // [0x1034820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0020 (0x000220 - 0x000240)
class ULevelCapture : public UMovieSceneCapture
{ 
public:
	bool                                               bAutoStartCapture;                                          // 0x0220   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0221   (0x000B)  MISSED
	FGuid                                              PrerequisiteActorId;                                        // 0x022C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x023C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCaptureEnvironment : public UObject
{ 
public:
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	UWorld*                                            World;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x0060   (0x0078)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	void StopCapturingFinalPixels();                                                                                         // [0x30620b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	void StartCapturingFinalPixels(FCapturedPixelsID& StreamID);                                                             // [0x30620f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	void ResolveBuffer(UTexture* Buffer, FCapturedPixelsID& BufferID);                                                       // [0x30622a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	void OnWarmUp();                                                                                                         // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	void OnTick();                                                                                                           // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	void OnStartCapture();                                                                                                   // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	bool OnSetup();                                                                                                          // [0x30624d0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	void OnPreTick();                                                                                                        // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);                       // [0x1ad0090] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	void OnPauseCapture();                                                                                                   // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	void OnFinalize();                                                                                                       // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	void OnCaptureFrame();                                                                                                   // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	bool OnCanFinalize();                                                                                                    // [0x30624a0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	void OnBeginFinalize();                                                                                                  // [0x1ad0090] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	FFrameMetrics GetCurrentFrameMetrics();                                                                                  // [0x3061f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	FString GenerateFilename(FFrameMetrics& InFrameMetrics);                                                                 // [0x3061f70] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
public:
	EDesiredImageFormat                                Format;                                                     // 0x00D8   (0x0001)  
	bool                                               bEnableCompression;                                         // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00DA   (0x0002)  MISSED
	int32_t                                            CompressionQuality;                                         // 0x00DC   (0x0004)  


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& StreamID, FFrameMetrics& FrameMetrics, bool bCopyImageData); // [0x3062860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	FString GenerateFilenameForCurrentFrame();                                                                               // [0x3062c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	FString GenerateFilenameForBuffer(UTexture* Buffer, FCapturedPixelsID& StreamID);                                        // [0x3062c90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0018 (0x000068 - 0x000080)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
public:
	bool                                               bUseCompression;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              CompressionQuality;                                         // 0x006C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCompositionGraphCapturePasses
{ 
	TArray<FString>                                    Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFrameMetrics
{ 
	float                                              TotalElapsedTime;                                           // 0x0000   (0x0004)  
	float                                              FrameDelta;                                                 // 0x0004   (0x0004)  
	int32_t                                            FrameNumber;                                                // 0x0008   (0x0004)  
	int32_t                                            NumDroppedFrames;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FMovieSceneCaptureSettings
{ 
	FDirectoryPath                                     OutputDirectory;                                            // 0x0000   (0x0010)  
	UClass*                                            GameModeOverride;                                           // 0x0010   (0x0008)  
	FString                                            OutputFormat;                                               // 0x0018   (0x0010)  
	bool                                               bOverwriteExisting;                                         // 0x0028   (0x0001)  
	bool                                               bUseRelativeFrameNumbers;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            HandleFrames;                                               // 0x002C   (0x0004)  
	FString                                            MovieExtension;                                             // 0x0030   (0x0010)  
	char                                               ZeroPadFrameNumbers;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0044   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         CustomFrameRate;                                            // 0x0050   (0x0008)  
	FCaptureResolution                                 Resolution;                                                 // 0x0058   (0x0008)  
	bool                                               bEnableTextureStreaming;                                    // 0x0060   (0x0001)  
	bool                                               bCinematicEngineScalability;                                // 0x0061   (0x0001)  
	bool                                               bCinematicMode;                                             // 0x0062   (0x0001)  
	bool                                               bAllowMovement;                                             // 0x0063   (0x0001)  
	bool                                               bAllowTurning;                                              // 0x0064   (0x0001)  
	bool                                               bShowPlayer;                                                // 0x0065   (0x0001)  
	bool                                               bShowHUD;                                                   // 0x0066   (0x0001)  
	bool                                               bUsePathTracer;                                             // 0x0067   (0x0001)  
	int32_t                                            PathTracerSamplePerPixel;                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCaptureResolution
{ 
	int32_t                                            ResX;                                                       // 0x0000   (0x0004)  
	int32_t                                            ResY;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCapturedPixels
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCapturedPixelsID
{ 
	TMap<FName, FName>                                 Identifiers;                                                // 0x0000   (0x0050)  
};

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
/// Size: 0x07
enum EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                                                                      = 0,
	HCGM_P3DCI                                                                       = 1,
	HCGM_Rec2020                                                                     = 2,
	HCGM_ACES                                                                        = 3,
	HCGM_ACEScg                                                                      = 4,
	HCGM_Linear                                                                      = 5,
	HCGM_MAX                                                                         = 6
};

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
/// Size: 0x05
enum EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle                                            = 0,
	EMovieSceneCaptureProtocolState__Initialized                                     = 1,
	EMovieSceneCaptureProtocolState__Capturing                                       = 2,
	EMovieSceneCaptureProtocolState__Finalizing                                      = 3,
	EMovieSceneCaptureProtocolState__EMovieSceneCaptureProtocolState_MAX             = 4
};

