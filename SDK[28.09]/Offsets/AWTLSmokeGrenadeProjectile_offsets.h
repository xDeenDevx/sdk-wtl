namespace offsets
{
	namespace AWTLSmokeGrenadeProjectile
	{
			constexpr auto m_ParticleProgress = 0x410; // Size: 1, Type: char
			constexpr auto m_CollisionProgress = 0x411; // Size: 1, Type: char
			constexpr auto m_ExplodeLocation = 0x414; // Size: 12, Type: struct FVector
			constexpr auto m_bNeedDestroyParticles = 0x420; // Size: 1, Type: bool
			constexpr auto Cylinder = 0x430; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto TimeToHideIdentify = 0x438; // Size: 4, Type: float
			constexpr auto TimeToStopHideIdentify = 0x43c; // Size: 4, Type: float
			constexpr auto TimeToDestroyFX = 0x440; // Size: 4, Type: float
	}
} 
