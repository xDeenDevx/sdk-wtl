namespace offsets
{
	namespace AWTLMine
	{
			constexpr auto m_Activated = 0x288; // Size: 1, Type: bool
			constexpr auto ActivateZone = 0x290; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DamageZone = 0x298; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Mesh = 0x2a0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DamageOrigin = 0x2a8; // Size: 8, Type: struct USceneComponent*
			constexpr auto ActivationSound = 0x2b0; // Size: 8, Type: struct USoundCue*
			constexpr auto ActivationSoundEvent = 0x2b8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto ExplosionFX = 0x2e0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ExplosionFXRotation = 0x308; // Size: 12, Type: struct FRotator
			constexpr auto bIsRelaseMode = 0x314; // Size: 1, Type: bool
			constexpr auto bIsUpgraded = 0x315; // Size: 1, Type: bool
			constexpr auto DestructibleObjectTypes = 0x318; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto DestructibleImpulse = 0x328; // Size: 4, Type: float
			constexpr auto DestructibleDamageMultiplier = 0x32c; // Size: 4, Type: float
			constexpr auto m_CharacterFaction = 0x330; // Size: 1, Type: enum class EWTLFaction
			constexpr auto m_bCharacterInPVP = 0x331; // Size: 1, Type: bool
			constexpr auto ExplosionDelay = 0x334; // Size: 4, Type: float
			constexpr auto DamageFalloff = 0x338; // Size: 4, Type: float
	}
} 
