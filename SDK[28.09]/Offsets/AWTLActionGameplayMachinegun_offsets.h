namespace offsets
{
	namespace AWTLActionGameplayMachinegun
	{
			constexpr auto m_StorageContent = 0x280; // Size: 168, Type: struct FWTLStorageContent
			constexpr auto MachinegunRotation = 0x328; // Size: 12, Type: struct FRotator
			constexpr auto StandMesh = 0x338; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Mesh = 0x340; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto ShootAudioComponent = 0x348; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto MachinegunName = 0x350; // Size: 24, Type: struct FText
			constexpr auto WeaponID = 0x368; // Size: 4, Type: int32_t
			constexpr auto FireRate = 0x36c; // Size: 4, Type: int32_t
			constexpr auto TemperatureIncreasingPerShot = 0x370; // Size: 4, Type: float
			constexpr auto OverheatTemperature = 0x374; // Size: 4, Type: float
			constexpr auto TemperatureToStartFire = 0x378; // Size: 4, Type: float
			constexpr auto TemperatureCooldownPerSecond = 0x37c; // Size: 4, Type: float
			constexpr auto OverheatAccuracy = 0x380; // Size: 4, Type: float
			constexpr auto RotationSpeed = 0x384; // Size: 4, Type: float
			constexpr auto MaxAmmoWeight = 0x388; // Size: 4, Type: int32_t
			constexpr auto CameraLimits = 0x38c; // Size: 12, Type: struct FWTLCameraLimits
			constexpr auto m_CurrentCharacter = 0x3a8; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto m_CurrentTemperatureOverheat = 0x3c0; // Size: 4, Type: float
			constexpr auto m_bIsCoolingDown = 0x3c4; // Size: 1, Type: bool
			constexpr auto bIsInUse = 0x3d8; // Size: 1, Type: bool
			constexpr auto bIsInAction = 0x3d9; // Size: 1, Type: bool
	}
} 
