namespace offsets
{
	namespace UMovieSceneSubSection
	{
			constexpr auto Parameters = 0xe8; // Size: 36, Type: struct FMovieSceneSectionParameters
			constexpr auto StartOffset = 0x10c; // Size: 4, Type: float
			constexpr auto TimeScale = 0x110; // Size: 4, Type: float
			constexpr auto PrerollTime = 0x114; // Size: 4, Type: float
			constexpr auto SubSequence = 0x118; // Size: 8, Type: struct UMovieSceneSequence*
			constexpr auto ActorToRecord = 0x120; // Size: 28, Type: 
			constexpr auto TargetSequenceName = 0x140; // Size: 16, Type: struct FString
			constexpr auto TargetPathToRecordTo = 0x150; // Size: 16, Type: struct FDirectoryPath
	}
} 
