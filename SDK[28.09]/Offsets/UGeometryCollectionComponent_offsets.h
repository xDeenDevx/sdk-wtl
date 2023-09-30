namespace offsets
{
	namespace UGeometryCollectionComponent
	{
			constexpr auto ChaosSolverActor = 0x470; // Size: 8, Type: struct AChaosSolverActor*
			constexpr auto RestCollection = 0x558; // Size: 8, Type: struct UGeometryCollection*
			constexpr auto InitializationFields = 0x560; // Size: 16, Type: struct TArray<struct AFieldSystemActor*>
			constexpr auto Simulating = 0x570; // Size: 1, Type: bool
			constexpr auto ObjectType = 0x578; // Size: 1, Type: enum class EObjectStateTypeEnum
			constexpr auto EnableClustering = 0x579; // Size: 1, Type: bool
			constexpr auto ClusterGroupIndex = 0x57c; // Size: 4, Type: int32_t
			constexpr auto MaxClusterLevel = 0x580; // Size: 4, Type: int32_t
			constexpr auto DamageThreshold = 0x588; // Size: 16, Type: struct TArray<float>
			constexpr auto ClusterConnectionType = 0x598; // Size: 1, Type: enum class EClusterConnectionTypeEnum
			constexpr auto CollisionGroup = 0x59c; // Size: 4, Type: int32_t
			constexpr auto CollisionSampleFraction = 0x5a0; // Size: 4, Type: float
			constexpr auto LinearEtherDrag = 0x5a4; // Size: 4, Type: float
			constexpr auto AngularEtherDrag = 0x5a8; // Size: 4, Type: float
			constexpr auto PhysicalMaterial = 0x5b0; // Size: 8, Type: struct UChaosPhysicalMaterial*
			constexpr auto InitialVelocityType = 0x5b8; // Size: 1, Type: enum class EInitialVelocityTypeEnum
			constexpr auto InitialLinearVelocity = 0x5bc; // Size: 12, Type: struct FVector
			constexpr auto InitialAngularVelocity = 0x5c8; // Size: 12, Type: struct FVector
			constexpr auto PhysicalMaterialOverride = 0x5d8; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto CacheParameters = 0x5e0; // Size: 80, Type: struct FGeomComponentCacheParameters
			constexpr auto NotifyGeometryCollectionPhysicsStateChange = 0x630; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto NotifyGeometryCollectionPhysicsLoadingStateChange = 0x640; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChaosBreakEvent = 0x668; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DesiredCacheTime = 0x678; // Size: 4, Type: float
			constexpr auto CachePlayback = 0x67c; // Size: 1, Type: bool
			constexpr auto OnChaosPhysicsCollision = 0x680; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bNotifyBreaks = 0x690; // Size: 1, Type: bool
			constexpr auto bNotifyCollisions = 0x691; // Size: 1, Type: bool
			constexpr auto bEnableReplication = 0x692; // Size: 1, Type: bool
			constexpr auto bEnableAbandonAfterLevel = 0x693; // Size: 1, Type: bool
			constexpr auto ReplicationAbandonClusterLevel = 0x694; // Size: 4, Type: int32_t
			constexpr auto RepData = 0x698; // Size: 24, Type: struct FGeometryCollectionRepData
			constexpr auto DummyBodySetup = 0x8c8; // Size: 8, Type: struct UBodySetup*
	}
} 
