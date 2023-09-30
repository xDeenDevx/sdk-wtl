namespace offsets
{
	namespace AWTLMovingAnomaly
	{
			constexpr auto WayPoints = 0x270; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto StartWayPoint = 0x280; // Size: 8, Type: struct AWTLAnomalyWayPoint*
			constexpr auto MovingType = 0x288; // Size: 1, Type: enum class EWTLWayPointMovingType
			constexpr auto MinSpeed = 0x28c; // Size: 4, Type: float
			constexpr auto MaxSpeed = 0x290; // Size: 4, Type: float
			constexpr auto PositionSynchronizationInterval = 0x294; // Size: 4, Type: float
			constexpr auto m_CurrentWayPointPosition = 0x2a0; // Size: 12, Type: struct FVector_NetQuantize
			constexpr auto m_CurrentSpeed = 0x2ac; // Size: 4, Type: float
			constexpr auto m_SynchronizationPosition = 0x2b0; // Size: 12, Type: struct FVector
			constexpr auto ActivationVolume = 0x2c0; // Size: 8, Type: struct UStaticMeshComponent*
	}
} 
