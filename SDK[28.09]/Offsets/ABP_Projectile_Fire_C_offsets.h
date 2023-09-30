namespace offsets
{
	namespace ABP_Projectile_Fire_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto ProjectileMovement = 0x228; // Size: 8, Type: struct UProjectileMovementComponent*
			constexpr auto Sphere1 = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto FE_Anomaly_FireField_Splash = 0x238; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto P_Explo_Toxic = 0x240; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto Decal = 0x248; // Size: 8, Type: struct UDecalComponent*
			constexpr auto Sphere = 0x250; // Size: 8, Type: struct USphereComponent*
			constexpr auto ParticleSystem = 0x258; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto StartLoc = 0x260; // Size: 12, Type: struct FVector
			constexpr auto EndLoc = 0x26c; // Size: 12, Type: struct FVector
			constexpr auto Damage = 0x278; // Size: 4, Type: float
			constexpr auto IsShot = 0x27c; // Size: 1, Type: bool
			constexpr auto NewVelocity = 0x280; // Size: 12, Type: struct FVector
			constexpr auto AngleA = 0x28c; // Size: 4, Type: float
			constexpr auto Speed = 0x290; // Size: 4, Type: float
			constexpr auto AngleB = 0x294; // Size: 4, Type: float
			constexpr auto Len = 0x298; // Size: 4, Type: float
			constexpr auto Height = 0x29c; // Size: 4, Type: float
			constexpr auto EffectType = 0x2a0; // Size: 1, Type: enum class EWTLCharacterEffectType
			constexpr auto RadiusDamage = 0x2a4; // Size: 4, Type: float
			constexpr auto GravityScale = 0x2a8; // Size: 4, Type: float
			constexpr auto RepAngleB = 0x2ac; // Size: 4, Type: float
	}
} 
