namespace offsets
{
	namespace ALevelSequenceActor
	{
			constexpr auto PlaybackSettings = 0x230; // Size: 20, Type: struct FMovieSceneSequencePlaybackSettings
			constexpr auto SequencePlayer = 0x248; // Size: 8, Type: struct ULevelSequencePlayer*
			constexpr auto LevelSequence = 0x250; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto CameraSettings = 0x268; // Size: 2, Type: struct FLevelSequenceCameraSettings
			constexpr auto BurnInOptions = 0x270; // Size: 8, Type: struct ULevelSequenceBurnInOptions*
			constexpr auto BindingOverrides = 0x278; // Size: 8, Type: struct UMovieSceneBindingOverrides*
			constexpr auto bAutoPlay = 0x280; // Size: 1, Type: char
			constexpr auto bOverrideInstanceData = 0x280; // Size: 1, Type: char
			constexpr auto bReplicatePlayback = 0x280; // Size: 1, Type: char
			constexpr auto DefaultInstanceData = 0x288; // Size: 8, Type: struct UObject*
			constexpr auto BurnInInstance = 0x290; // Size: 8, Type: struct ULevelSequenceBurnIn*
			constexpr auto bShowBurnin = 0x298; // Size: 1, Type: bool
	}
} 
