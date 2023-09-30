namespace offsets
{
	namespace AWTLBulletHellBase
	{
			constexpr auto m_ProcMesh = 0x320; // Size: 8, Type: struct UProceduralMeshComponent*
			constexpr auto UseBillboard = 0x328; // Size: 1, Type: bool
			constexpr auto Material = 0x330; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto RenderMesh = 0x338; // Size: 8, Type: struct UStaticMesh*
			constexpr auto TailMaterial = 0x340; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto AutoDestroy = 0x348; // Size: 1, Type: bool
			constexpr auto AttackMode = 0x34c; // Size: 4, Type: int32_t
			constexpr auto SpawnAxisX = 0x350; // Size: 12, Type: struct FVector
			constexpr auto PhysicsFps = 0x35c; // Size: 4, Type: float
			constexpr auto ServerStartDelay = 0x360; // Size: 4, Type: float
			constexpr auto ClientStartDelay = 0x364; // Size: 4, Type: float
			constexpr auto MeshUpdateRate = 0x368; // Size: 4, Type: float
			constexpr auto LoopDuration = 0x36c; // Size: 4, Type: float
			constexpr auto SpawnRate = 0x370; // Size: 4, Type: float
			constexpr auto RotateSpawnAxisX = 0x374; // Size: 12, Type: struct FRotator
			constexpr auto SpawnCountBurst = 0x380; // Size: 4, Type: float
			constexpr auto IsLinearSpawn = 0x384; // Size: 1, Type: bool
			constexpr auto BulletSpeed = 0x388; // Size: 8, Type: struct FVector2D
			constexpr auto LifeTime = 0x390; // Size: 8, Type: struct FVector2D
			constexpr auto BounceCount = 0x398; // Size: 8, Type: struct FVector2D
			constexpr auto OnlyNegativeZ = 0x3a0; // Size: 1, Type: bool
			constexpr auto UseConeSpread = 0x3a1; // Size: 1, Type: bool
			constexpr auto ConeSpread = 0x3a4; // Size: 8, Type: struct FVector2D
			constexpr auto ConeSpreadRadius = 0x3ac; // Size: 8, Type: struct FVector2D
			constexpr auto Drag = 0x3b4; // Size: 12, Type: struct FVector
			constexpr auto Gravity = 0x3c0; // Size: 12, Type: struct FVector
			constexpr auto UseCurveBulletSpeed = 0x3cc; // Size: 1, Type: bool
			constexpr auto CurveBulletSpeed = 0x3d0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto UseCurveScaleLocation = 0x3d8; // Size: 1, Type: bool
			constexpr auto CurveScaleLocation = 0x3e0; // Size: 8, Type: struct UCurveVector*
			constexpr auto CurveSpeedScale = 0x3e8; // Size: 4, Type: float
			constexpr auto UseTail = 0x3ec; // Size: 1, Type: bool
			constexpr auto DistFromVelocity = 0x3f0; // Size: 4, Type: float
			constexpr auto Damage = 0x3f4; // Size: 8, Type: struct FVector2D
			constexpr auto CollisionTime = 0x3fc; // Size: 4, Type: float
			constexpr auto SphereTraceRadius = 0x400; // Size: 4, Type: float
			constexpr auto CollisionTraceQuery = 0x408; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto SpawnActorOnHit = 0x418; // Size: 1, Type: bool
			constexpr auto SpawnActor = 0x420; // Size: 8, Type: AActor*
			constexpr auto DrawDebugTime = 0x428; // Size: 4, Type: float
			constexpr auto ServerDrawDebugTrace = 0x42c; // Size: 1, Type: enum class EDrawDebugTrace
			constexpr auto ClientDrawDebugTrace = 0x42d; // Size: 1, Type: enum class EDrawDebugTrace
			constexpr auto BulletRadius = 0x430; // Size: 4, Type: float
			constexpr auto StartTime = 0x434; // Size: 4, Type: float
	}
} 
