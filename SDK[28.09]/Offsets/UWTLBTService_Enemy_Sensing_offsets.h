namespace offsets
{
	namespace UWTLBTService_Enemy_Sensing
	{
			constexpr auto bSensePlayers = 0x70; // Size: 1, Type: bool
			constexpr auto bSenseOtherEnemies = 0x71; // Size: 1, Type: bool
			constexpr auto bHearNoises = 0x72; // Size: 1, Type: bool
			constexpr auto bInterruptCurrentTaskOnSpotted = 0x73; // Size: 1, Type: bool
			constexpr auto SightRadius = 0x74; // Size: 4, Type: float
			constexpr auto PeripheralVisionAngle = 0x78; // Size: 4, Type: float
			constexpr auto HearingMaxSoundAge = 0x7c; // Size: 4, Type: float
			constexpr auto HearingThreshold = 0x80; // Size: 4, Type: float
			constexpr auto LOSHearingThreshold = 0x84; // Size: 4, Type: float
			constexpr auto SoundOcclusionChannel = 0x88; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto TargetSpottedKey = 0x90; // Size: 40, Type: struct FBlackboardKeySelector
			constexpr auto RemoteLocationListenedKey = 0xb8; // Size: 40, Type: struct FBlackboardKeySelector
	}
} 
