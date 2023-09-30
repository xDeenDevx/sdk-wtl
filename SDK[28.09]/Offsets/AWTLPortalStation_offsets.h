namespace offsets
{
	namespace AWTLPortalStation
	{
			constexpr auto EnergyModuleIDs = 0x2b0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto Ways = 0x2c0; // Size: 16, Type: struct TArray<struct FWTLPortalStationWay>
			constexpr auto RequestLifespan = 0x2d0; // Size: 4, Type: float
			constexpr auto PortalFXEvent = 0x2d8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto PortalZoneComponent = 0x388; // Size: 8, Type: struct UBoxComponent*
			constexpr auto PortalFXComponent = 0x390; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto PortalAudioEffectsComponent = 0x398; // Size: 8, Type: struct UFMODAudioComponent*
	}
} 
