namespace offsets
{
	namespace UMovieSceneEventTrack
	{
			constexpr auto bFireEventsWhenForwards = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenBackwards = 0x80; // Size: 1, Type: char
			constexpr auto EventPosition = 0x84; // Size: 1, Type: enum class EFireEventsAtPosition
			constexpr auto Sections = 0x88; // Size: 16, Type: struct TArray<struct UMovieSceneSection*>
	}
} 
