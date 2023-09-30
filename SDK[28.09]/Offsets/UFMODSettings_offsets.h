namespace offsets
{
	namespace UFMODSettings
	{
			constexpr auto bLoadAllBanks = 0x28; // Size: 1, Type: bool
			constexpr auto bLoadAllSampleData = 0x29; // Size: 1, Type: bool
			constexpr auto bEnableLiveUpdate = 0x2a; // Size: 1, Type: bool
			constexpr auto bEnableEditorLiveUpdate = 0x2b; // Size: 1, Type: bool
			constexpr auto BankOutputDirectory = 0x30; // Size: 16, Type: struct FDirectoryPath
			constexpr auto OutputFormat = 0x40; // Size: 1, Type: enum class EFMODSpeakerMode
			constexpr auto bVol0Virtual = 0x41; // Size: 1, Type: bool
			constexpr auto Vol0VirtualLevel = 0x44; // Size: 4, Type: float
			constexpr auto SampleRate = 0x48; // Size: 4, Type: int32_t
			constexpr auto bMatchHardwareSampleRate = 0x4c; // Size: 1, Type: bool
			constexpr auto RealChannelCount = 0x50; // Size: 4, Type: int32_t
			constexpr auto TotalChannelCount = 0x54; // Size: 4, Type: int32_t
			constexpr auto DSPBufferLength = 0x58; // Size: 4, Type: int32_t
			constexpr auto DSPBufferCount = 0x5c; // Size: 4, Type: int32_t
			constexpr auto FileBufferSize = 0x60; // Size: 4, Type: int32_t
			constexpr auto StudioUpdatePeriod = 0x64; // Size: 4, Type: int32_t
			constexpr auto InitialOutputDriverName = 0x68; // Size: 16, Type: struct FString
			constexpr auto bLockAllBuses = 0x78; // Size: 1, Type: bool
			constexpr auto MemoryPoolSizes = 0x7c; // Size: 20, Type: struct FCustomPoolSizes
			constexpr auto LiveUpdatePort = 0x90; // Size: 4, Type: int32_t
			constexpr auto EditorLiveUpdatePort = 0x94; // Size: 4, Type: int32_t
			constexpr auto PluginFiles = 0x98; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ContentBrowserPrefix = 0xa8; // Size: 16, Type: struct FString
			constexpr auto ForcePlatformName = 0xb8; // Size: 16, Type: struct FString
			constexpr auto MasterBankName = 0xc8; // Size: 16, Type: struct FString
			constexpr auto SkipLoadBankName = 0xd8; // Size: 16, Type: struct FString
			constexpr auto WavWriterPath = 0xe8; // Size: 16, Type: struct FString
	}
} 
