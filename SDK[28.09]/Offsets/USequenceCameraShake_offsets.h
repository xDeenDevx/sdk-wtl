namespace offsets
{
	namespace USequenceCameraShake
	{
			constexpr auto Sequence = 0x98; // Size: 8, Type: struct UCameraAnimationSequence*
			constexpr auto PlayRate = 0xa0; // Size: 4, Type: float
			constexpr auto Scale = 0xa4; // Size: 4, Type: float
			constexpr auto BlendInTime = 0xa8; // Size: 4, Type: float
			constexpr auto BlendOutTime = 0xac; // Size: 4, Type: float
			constexpr auto RandomSegmentDuration = 0xb0; // Size: 4, Type: float
			constexpr auto bRandomSegment = 0xb4; // Size: 1, Type: bool
			constexpr auto Player = 0xb8; // Size: 8, Type: struct USequenceCameraShakeSequencePlayer*
			constexpr auto CameraStandIn = 0xc0; // Size: 8, Type: struct USequenceCameraShakeCameraStandIn*
	}
} 
