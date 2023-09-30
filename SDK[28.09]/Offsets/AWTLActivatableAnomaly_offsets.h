namespace offsets
{
	namespace AWTLActivatableAnomaly
	{
			constexpr auto MinEnergy = 0x270; // Size: 4, Type: float
			constexpr auto MaxEnergy = 0x274; // Size: 4, Type: float
			constexpr auto EnergyPerSecond = 0x278; // Size: 4, Type: float
			constexpr auto Energy = 0x27c; // Size: 4, Type: float
			constexpr auto State = 0x280; // Size: 1, Type: enum class EWTLActivatableAnomalyState
			constexpr auto EnergyToActivate = 0x284; // Size: 4, Type: float
			constexpr auto ActivationDelay = 0x288; // Size: 4, Type: float
			constexpr auto StayActivatedTime = 0x28c; // Size: 4, Type: float
			constexpr auto EnergyDecrementAfterActivation = 0x290; // Size: 4, Type: float
	}
} 
