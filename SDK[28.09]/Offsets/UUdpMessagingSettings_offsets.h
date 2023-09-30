namespace offsets
{
	namespace UUdpMessagingSettings
	{
			constexpr auto EnabledByDefault = 0x28; // Size: 1, Type: bool
			constexpr auto EnableTransport = 0x29; // Size: 1, Type: bool
			constexpr auto bAutoRepair = 0x2a; // Size: 1, Type: bool
			constexpr auto bStopServiceWhenAppDeactivates = 0x2b; // Size: 1, Type: bool
			constexpr auto UnicastEndpoint = 0x30; // Size: 16, Type: struct FString
			constexpr auto MulticastEndpoint = 0x40; // Size: 16, Type: struct FString
			constexpr auto MessageFormat = 0x50; // Size: 1, Type: enum class EUdpMessageFormat
			constexpr auto MulticastTimeToLive = 0x51; // Size: 1, Type: char
			constexpr auto StaticEndpoints = 0x58; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto EnableTunnel = 0x68; // Size: 1, Type: bool
			constexpr auto TunnelUnicastEndpoint = 0x70; // Size: 16, Type: struct FString
			constexpr auto TunnelMulticastEndpoint = 0x80; // Size: 16, Type: struct FString
			constexpr auto RemoteTunnelEndpoints = 0x90; // Size: 16, Type: struct TArray<struct FString>
	}
} 
