namespace offsets
{
	namespace UMovieSceneSequencePlayer
	{
			constexpr auto OnPlay = 0x410; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayReverse = 0x420; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStop = 0x430; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPause = 0x440; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFinished = 0x450; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Status = 0x460; // Size: 1, Type: enum class EMovieScenePlayerStatus
			constexpr auto bReversePlayback = 0x464; // Size: 1, Type: char
			constexpr auto Sequence = 0x468; // Size: 8, Type: struct UMovieSceneSequence*
			constexpr auto StartTime = 0x470; // Size: 4, Type: struct FFrameNumber
			constexpr auto DurationFrames = 0x474; // Size: 4, Type: int32_t
			constexpr auto DurationSubFrames = 0x478; // Size: 4, Type: float
			constexpr auto CurrentNumLoops = 0x47c; // Size: 4, Type: int32_t
			constexpr auto PlaybackSettings = 0x480; // Size: 20, Type: struct FMovieSceneSequencePlaybackSettings
			constexpr auto RootTemplateInstance = 0x498; // Size: 232, Type: struct FMovieSceneRootEvaluationTemplateInstance
			constexpr auto NetSyncProps = 0x5e8; // Size: 16, Type: struct FMovieSceneSequenceReplProperties
			constexpr auto PlaybackClient = 0x5f8; // Size: 16, Type: struct TScriptInterface<IMovieScenePlaybackClient>
			constexpr auto TickManager = 0x608; // Size: 8, Type: struct UMovieSceneSequenceTickManager*
	}
} 
