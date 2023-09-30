namespace offsets
{
	namespace AWTLMortar
	{
			constexpr auto m_StorageContent = 0x3c0; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto RootMesh = 0x468; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto Mesh = 0x470; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto Arrow = 0x478; // Size: 8, Type: struct UArrowComponent*
			constexpr auto DirectionArrow = 0x480; // Size: 8, Type: struct UArrowComponent*
			constexpr auto ClickSound = 0x488; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FireSound = 0x490; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto m_Character = 0x498; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto CharacterUsingMontage = 0x4a8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterUsingMontageThirdPerson = 0x4b0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterFireMontage = 0x4b8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto MortarFireMontage = 0x4c0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterLoadMontage = 0x4c8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto MortarLoadMontage = 0x4d0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CameraLimits = 0x4d8; // Size: 12, Type: struct FWTLCameraLimits
			constexpr auto InclineStep = 0x4e4; // Size: 4, Type: float
			constexpr auto InclineBigStep = 0x4e8; // Size: 4, Type: float
			constexpr auto MinIncline = 0x4ec; // Size: 4, Type: float
			constexpr auto MaxIncline = 0x4f0; // Size: 4, Type: float
			constexpr auto RotationStep = 0x4f4; // Size: 4, Type: float
			constexpr auto RotationSpeed = 0x4f8; // Size: 4, Type: float
			constexpr auto MinYaw = 0x4fc; // Size: 4, Type: float
			constexpr auto MaxYaw = 0x500; // Size: 4, Type: float
			constexpr auto MaxPitch = 0x504; // Size: 4, Type: float
			constexpr auto MinPitch = 0x508; // Size: 4, Type: float
			constexpr auto AmmoCaliber = 0x50c; // Size: 1, Type: enum class EWTLCaliber
			constexpr auto DistanceCurve = 0x510; // Size: 8, Type: struct UCurveFloat*
			constexpr auto TimeCurve = 0x518; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ActorsToSpawn = 0x520; // Size: 80, Type: struct TMap<int32_t, struct TSoftClassPtr<UObject>>
			constexpr auto ExplosionsToSpawn = 0x570; // Size: 80, Type: struct TMap<int32_t, struct TSoftClassPtr<UObject>>
			constexpr auto m_bIsLoaded = 0x5c0; // Size: 1, Type: bool
			constexpr auto m_Incline = 0x5d0; // Size: 4, Type: float
			constexpr auto m_YawRotation = 0x5e0; // Size: 4, Type: float
	}
} 
