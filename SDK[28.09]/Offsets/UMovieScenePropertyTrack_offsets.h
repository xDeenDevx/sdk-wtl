namespace offsets
{
	namespace UMovieScenePropertyTrack
	{
			constexpr auto SectionToKey = 0x78; // Size: 8, Type: struct UMovieSceneSection*
			constexpr auto PropertyBinding = 0x80; // Size: 20, Type: struct FMovieScenePropertyBinding
			constexpr auto Sections = 0x98; // Size: 16, Type: struct TArray<struct UMovieSceneSection*>
	}
} 
