namespace offsets
{
	namespace AWTLCommandCoreTurret
	{
			constexpr auto Stand = 0x298; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Body = 0x2a0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto Muzzle = 0x2a8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto ProjectilesEmitter = 0x2b0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto VisionZone = 0x2b8; // Size: 8, Type: struct USphereComponent*
			constexpr auto AudioComponent = 0x2c0; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto TurretSoundEvent = 0x2c8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto FireRate = 0x324; // Size: 4, Type: float
			constexpr auto MinDamage = 0x328; // Size: 4, Type: float
			constexpr auto MaxDamage = 0x32c; // Size: 4, Type: float
			constexpr auto Prewarm = 0x330; // Size: 4, Type: float
			constexpr auto Cooldown = 0x334; // Size: 4, Type: float
			constexpr auto TargetToFollow = 0x338; // Size: 8, Type: struct APawn*
	}
} 
