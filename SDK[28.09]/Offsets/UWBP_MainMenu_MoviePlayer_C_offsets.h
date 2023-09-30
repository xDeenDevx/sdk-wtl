namespace offsets
{
	namespace UWBP_MainMenu_MoviePlayer_C
	{
			constexpr auto UberGraphFrame = 0x2b8; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto imgBlackScreen = 0x2c0; // Size: 8, Type: struct UImage*
			constexpr auto imgMovie = 0x2c8; // Size: 8, Type: struct UImage*
			constexpr auto MediaPlayer = 0x2d0; // Size: 8, Type: struct UMediaPlayer*
			constexpr auto OnTimerExec = 0x2d8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMediaClosed = 0x2e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto TimerHandle = 0x2f8; // Size: 8, Type: struct FTimerHandle
			constexpr auto AudioComponent = 0x300; // Size: 8, Type: struct UAudioComponent*
	}
} 
