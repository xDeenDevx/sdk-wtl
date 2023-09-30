namespace offsets
{
	namespace UWTLNetworkController
	{
			constexpr auto OnConnected = 0x1c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnConnectError = 0x1d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnDisconnected = 0x1e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnDisconnectOnConnectCanceled = 0x1f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bIsDedicatedServer = 0x200; // Size: 1, Type: bool
	}
} 
