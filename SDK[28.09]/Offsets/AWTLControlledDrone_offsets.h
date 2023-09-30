namespace offsets
{
	namespace AWTLControlledDrone
	{
			constexpr auto m_CurrentYawInputValue = 0x510; // Size: 4, Type: float
			constexpr auto m_bShowPreparing = 0x515; // Size: 1, Type: bool
			constexpr auto m_MovementComponent = 0x5d8; // Size: 8, Type: struct UWTLFloatingPawnMovement*
			constexpr auto CameraCaptureComponent = 0x5e0; // Size: 8, Type: struct USceneCaptureComponent2D*
			constexpr auto Horn = 0x5e8; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto HitSound = 0x5f0; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto Indicator = 0x5f8; // Size: 8, Type: struct UPointLightComponent*
			constexpr auto Dust = 0x600; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto TextureTarget = 0x608; // Size: 8, Type: struct UTexture*
			constexpr auto ReplicateCameraRotation = 0x610; // Size: 1, Type: bool
			constexpr auto CameraFramerate = 0x614; // Size: 4, Type: float
			constexpr auto RenderTargetWidth = 0x618; // Size: 4, Type: int32_t
			constexpr auto RenderTargetHeight = 0x61c; // Size: 4, Type: int32_t
			constexpr auto CameraMaxPitchAngle = 0x620; // Size: 4, Type: float
			constexpr auto CameraMinPitchAngle = 0x624; // Size: 4, Type: float
			constexpr auto CameraPitchSensivityMultiplier = 0x628; // Size: 4, Type: float
			constexpr auto CameraYawSensivityMultiplier = 0x62c; // Size: 4, Type: float
			constexpr auto AlternativePitchSensivityMultiplier = 0x630; // Size: 4, Type: float
			constexpr auto AlternativeYawSensivityMultiplier = 0x634; // Size: 4, Type: float
			constexpr auto DroneAcceleration = 0x638; // Size: 4, Type: float
			constexpr auto m_PreparationTime = 0x63c; // Size: 4, Type: float
			constexpr auto UseAlternativeInputMode = 0x640; // Size: 1, Type: bool
			constexpr auto MinMovementRotationSpeedCorrection = 0x644; // Size: 4, Type: float
			constexpr auto MaxMovementRotationSpeedCorrection = 0x648; // Size: 4, Type: float
			constexpr auto YawInputDeadZone = 0x64c; // Size: 4, Type: float
			constexpr auto MainAbilityType = 0x650; // Size: 1, Type: enum class EWTLControlledDroneAbilityType
			constexpr auto SecondAbilityType = 0x651; // Size: 1, Type: enum class EWTLControlledDroneAbilityType
			constexpr auto InteractiveTrace = 0x652; // Size: 1, Type: enum class ETraceTypeQuery
			constexpr auto MaxDistanceForScaning = 0x670; // Size: 4, Type: float
			constexpr auto PauseBetweenAbility1 = 0x674; // Size: 4, Type: float
			constexpr auto EnergyPercentConsumptionPerUseAbility = 0x680; // Size: 4, Type: float
			constexpr auto PreparationProgressPerSecond = 0x684; // Size: 4, Type: float
			constexpr auto AlternativeAbilityPreparationProgressPerSecond = 0x688; // Size: 4, Type: float
			constexpr auto MainAbilityEffect = 0x690; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CollisionObjectTypes = 0x6b8; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto CanSearchCharacters = 0x6c8; // Size: 1, Type: bool
			constexpr auto CanSearchMonsters = 0x6c9; // Size: 1, Type: bool
			constexpr auto CanSearchNPC = 0x6ca; // Size: 1, Type: bool
			constexpr auto CanSearchPlaceableStuffs = 0x6cb; // Size: 1, Type: bool
			constexpr auto CanSearchStashes = 0x6cc; // Size: 1, Type: bool
			constexpr auto AlternativeDroneMaterials = 0x6d0; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto m_JammingIntencity = 0x714; // Size: 4, Type: float
	}
} 
