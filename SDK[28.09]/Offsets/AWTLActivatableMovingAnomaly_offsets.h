namespace offsets
{
	namespace AWTLActivatableMovingAnomaly
	{
			constexpr auto MinEnergy = 0x2d8; // Size: 4, Type: float
			constexpr auto MaxEnergy = 0x2dc; // Size: 4, Type: float
			constexpr auto EnergyPerSecond = 0x2e0; // Size: 4, Type: float
			constexpr auto Energy = 0x2e4; // Size: 4, Type: float
			constexpr auto State = 0x2e8; // Size: 1, Type: enum class EWTLActivatableAnomalyState
			constexpr auto EnergyToActivate = 0x2ec; // Size: 4, Type: float
			constexpr auto ActivationDelay = 0x2f0; // Size: 4, Type: float
			constexpr auto StayActivatedTime = 0x2f4; // Size: 4, Type: float
			constexpr auto EnergyDecrementAfterActivation = 0x2f8; // Size: 4, Type: float
	}
} 
