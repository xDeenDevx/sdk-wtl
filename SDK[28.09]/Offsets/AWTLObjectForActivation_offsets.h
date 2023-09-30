namespace offsets
{
	namespace AWTLObjectForActivation
	{
			constexpr auto bIsMoveBack = 0x24c; // Size: 1, Type: bool
			constexpr auto DelayMoveBack = 0x250; // Size: 4, Type: float
			constexpr auto DurationMove = 0x254; // Size: 4, Type: float
			constexpr auto aEndPosition = 0x258; // Size: 8, Type: struct AActor*
			constexpr auto NumberActivationsToActivate = 0x260; // Size: 4, Type: uint32_t
			constexpr auto DirectionActivate = 0x264; // Size: 4, Type: int32_t
	}
} 
