namespace offsets
{
	namespace UMovieSceneSkeletalAnimationTrack
	{
			constexpr auto AnimationSections = 0x80; // Size: 16, Type: struct TArray<struct UMovieSceneSection*>
			constexpr auto bUseLegacySectionIndexBlend = 0x90; // Size: 1, Type: bool
			constexpr auto RootMotionParams = 0x98; // Size: 48, Type: struct FMovieSceneSkeletalAnimRootMotionTrackParams
			constexpr auto bBlendFirstChildOfRoot = 0xc8; // Size: 1, Type: bool
	}
} 
