namespace offsets
{
	namespace AWTLDrone
	{
			constexpr auto DroneSkeletalMesh = 0x290; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto OverlapComponent = 0x298; // Size: 8, Type: struct USphereComponent*
			constexpr auto WingsSound = 0x2a0; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto LifeTimeInWorld = 0x2a8; // Size: 4, Type: float
			constexpr auto DroneMaxCondition = 0x2ac; // Size: 4, Type: float
			constexpr auto DroneDamageMultiplier = 0x2b0; // Size: 4, Type: float
			constexpr auto MaxDistanceFromCharacter = 0x2b4; // Size: 4, Type: float
			constexpr auto SelfDestructionDamageValue = 0x2b8; // Size: 4, Type: float
			constexpr auto SelfDestructionMinDamageValue = 0x2bc; // Size: 4, Type: float
			constexpr auto SelfDestructionRadius = 0x2c0; // Size: 4, Type: float
			constexpr auto DissolvingSpeed = 0x2c4; // Size: 4, Type: float
			constexpr auto ExplosionFX = 0x2c8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto SelfDestructionExplosionFX = 0x2f0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto DroneHeight = 0x318; // Size: 4, Type: float
			constexpr auto MovementMode = 0x31c; // Size: 1, Type: enum class EWTLDroneMovementMode
			constexpr auto RotationSpeed = 0x320; // Size: 4, Type: float
			constexpr auto Radius = 0x328; // Size: 4, Type: float
			constexpr auto Height = 0x334; // Size: 4, Type: float
			constexpr auto RotationAxis = 0x338; // Size: 12, Type: struct FVector
			constexpr auto Clockwise = 0x344; // Size: 1, Type: bool
			constexpr auto HeightAboveCharacter = 0x348; // Size: 4, Type: float
			constexpr auto RotateAroundCharacter = 0x358; // Size: 1, Type: bool
			constexpr auto RotationSpeedIfFollowCharacterFromAbove = 0x35c; // Size: 4, Type: float
			constexpr auto RotationRadiusIfFollowCharacterFromAbove = 0x360; // Size: 4, Type: float
			constexpr auto DroneHeightInterpSpeed = 0x364; // Size: 4, Type: float
			constexpr auto MaxHeight = 0x38c; // Size: 4, Type: float
			constexpr auto DamageMultipliers = 0x390; // Size: 80, Type: struct TMap<enum class EWTLWeaponType, float>
			constexpr auto ReputationDelta = 0x3e0; // Size: 4, Type: float
			constexpr auto AIMakeNoise = 0x3e4; // Size: 1, Type: bool
			constexpr auto AINoiseDistance = 0x3e8; // Size: 4, Type: float
			constexpr auto AINoiseTag = 0x3ec; // Size: 8, Type: struct FName
			constexpr auto DroneCondition = 0x408; // Size: 4, Type: float
			constexpr auto DroneItemID = 0x428; // Size: 8, Type: uint64_t
			constexpr auto DroneItemTypeID = 0x430; // Size: 2, Type: uint16_t
			constexpr auto Faction = 0x432; // Size: 1, Type: enum class EWTLFaction
			constexpr auto m_Character = 0x438; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto m_bDestroyDrone = 0x440; // Size: 1, Type: bool
			constexpr auto m_bIsFalling = 0x441; // Size: 1, Type: bool
			constexpr auto m_bSelfDestruction = 0x442; // Size: 1, Type: bool
			constexpr auto WeaponItemID = 0x444; // Size: 4, Type: int32_t
			constexpr auto AmmoItemID = 0x448; // Size: 4, Type: int32_t
			constexpr auto FireMode = 0x44c; // Size: 1, Type: enum class EWTLFireMode
			constexpr auto TimeBetweenShots = 0x450; // Size: 4, Type: float
	}
} 
