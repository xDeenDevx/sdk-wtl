namespace offsets
{
	namespace UCineCameraComponent
	{
			constexpr auto FilmbackSettings = 0x7c0; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto Filmback = 0x7cc; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto LensSettings = 0x7d8; // Size: 24, Type: struct FCameraLensSettings
			constexpr auto FocusSettings = 0x7f0; // Size: 88, Type: struct FCameraFocusSettings
			constexpr auto CurrentFocalLength = 0x848; // Size: 4, Type: float
			constexpr auto CurrentAperture = 0x84c; // Size: 4, Type: float
			constexpr auto CurrentFocusDistance = 0x850; // Size: 4, Type: float
			constexpr auto FilmbackPresets = 0x860; // Size: 16, Type: struct TArray<struct FNamedFilmbackPreset>
			constexpr auto LensPresets = 0x870; // Size: 16, Type: struct TArray<struct FNamedLensPreset>
			constexpr auto DefaultFilmbackPresetName = 0x880; // Size: 16, Type: struct FString
			constexpr auto DefaultFilmbackPreset = 0x890; // Size: 16, Type: struct FString
			constexpr auto DefaultLensPresetName = 0x8a0; // Size: 16, Type: struct FString
			constexpr auto DefaultLensFocalLength = 0x8b0; // Size: 4, Type: float
			constexpr auto DefaultLensFStop = 0x8b4; // Size: 4, Type: float
	}
} 
