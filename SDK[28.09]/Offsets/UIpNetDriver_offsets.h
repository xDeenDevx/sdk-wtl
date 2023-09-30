namespace offsets
{
	namespace UIpNetDriver
	{
			constexpr auto LogPortUnreach = 0x748; // Size: 1, Type: char
			constexpr auto AllowPlayerPortUnreach = 0x748; // Size: 1, Type: char
			constexpr auto MaxPortCountToTry = 0x74c; // Size: 4, Type: uint32_t
			constexpr auto ServerDesiredSocketReceiveBufferBytes = 0x75c; // Size: 4, Type: uint32_t
			constexpr auto ServerDesiredSocketSendBufferBytes = 0x760; // Size: 4, Type: uint32_t
			constexpr auto ClientDesiredSocketReceiveBufferBytes = 0x764; // Size: 4, Type: uint32_t
			constexpr auto ClientDesiredSocketSendBufferBytes = 0x768; // Size: 4, Type: uint32_t
			constexpr auto MaxSecondsInReceive = 0x770; // Size: 8, Type: double
			constexpr auto NbPacketsBetweenReceiveTimeTest = 0x778; // Size: 4, Type: int32_t
			constexpr auto ResolutionConnectionTimeout = 0x77c; // Size: 4, Type: float
	}
} 
