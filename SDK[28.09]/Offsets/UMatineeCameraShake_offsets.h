namespace offsets
{
	namespace UMatineeCameraShake
	{
			constexpr auto OscillationDuration = 0x98; // Size: 4, Type: float
			constexpr auto OscillationBlendInTime = 0x9c; // Size: 4, Type: float
			constexpr auto OscillationBlendOutTime = 0xa0; // Size: 4, Type: float
			constexpr auto RotOscillation = 0xa4; // Size: 36, Type: struct FROscillator
			constexpr auto LocOscillation = 0xc8; // Size: 36, Type: struct FVOscillator
			constexpr auto FOVOscillation = 0xec; // Size: 12, Type: struct FFOscillator
			constexpr auto AnimPlayRate = 0xf8; // Size: 4, Type: float
			constexpr auto AnimScale = 0xfc; // Size: 4, Type: float
			constexpr auto AnimBlendInTime = 0x100; // Size: 4, Type: float
			constexpr auto AnimBlendOutTime = 0x104; // Size: 4, Type: float
			constexpr auto RandomAnimSegmentDuration = 0x108; // Size: 4, Type: float
			constexpr auto Anim = 0x110; // Size: 8, Type: struct UCameraAnim*
			constexpr auto bRandomAnimSegment = 0x118; // Size: 1, Type: char
			constexpr auto OscillatorTimeRemaining = 0x11c; // Size: 4, Type: float
			constexpr auto AnimInst = 0x120; // Size: 8, Type: struct UCameraAnimInst*
	}
} 
