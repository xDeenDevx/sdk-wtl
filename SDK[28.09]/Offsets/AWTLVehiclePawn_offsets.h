namespace offsets
{
	namespace AWTLVehiclePawn
	{
			constexpr auto m_ItemInventoryID = 0x19d0; // Size: 8, Type: uint64_t
			constexpr auto m_bPlayHightGravityMontage = 0x1a40; // Size: 1, Type: bool
			constexpr auto VehicleMesh = 0x1a58; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto Horn = 0x1a60; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto Engine = 0x1a68; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto Sideslip = 0x1a70; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto WheelSlipOnAcceleation = 0x1a78; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto LandingSound = 0x1a80; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto HitSound = 0x1a88; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto HeadLight = 0x1a90; // Size: 8, Type: struct USpotLightComponent*
			constexpr auto HeadLightBoneName = 0x1a98; // Size: 8, Type: struct FName
			constexpr auto Smoke = 0x1aa0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto SmokeFromForwardWheel = 0x1aa8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto SmokeFromRearWheel = 0x1ab0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto UseSimpleDustFromWheels = 0x1ab8; // Size: 1, Type: bool
			constexpr auto ForwardWheelDustDensity = 0x1abc; // Size: 4, Type: float
			constexpr auto ForwardWheelDustDensityForBraking = 0x1ac0; // Size: 4, Type: float
			constexpr auto RearWheelDustDensity = 0x1ac4; // Size: 4, Type: float
			constexpr auto RearWheelDustDensityForBraking = 0x1ac8; // Size: 4, Type: float
			constexpr auto RearWheelRocksDensity = 0x1acc; // Size: 4, Type: float
			constexpr auto RearWheelRocksDensityForBraking = 0x1ad0; // Size: 4, Type: float
			constexpr auto NewDirection = 0x1ad7; // Size: 1, Type: enum class EWTLCharacterStunhitDirection
			constexpr auto m_BrakePressed = 0x1ae8; // Size: 1, Type: bool
			constexpr auto m_EngineBraking = 0x1ae9; // Size: 1, Type: bool
			constexpr auto m_bAlreadySpawned = 0x1b2c; // Size: 1, Type: bool
			constexpr auto m_bLeaveVehicle = 0x1b2d; // Size: 1, Type: bool
			constexpr auto m_bEjectCharacter = 0x1b2e; // Size: 1, Type: bool
			constexpr auto m_bEnteringInSafeZone = 0x1b2f; // Size: 1, Type: bool
			constexpr auto m_bInWater = 0x1b30; // Size: 1, Type: bool
			constexpr auto m_bIsInAnomaly = 0x1b31; // Size: 1, Type: bool
			constexpr auto CharacterIdleMontage = 0x1b58; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterLandingMontage = 0x1b60; // Size: 8, Type: struct UAnimMontage*
			constexpr auto VehicleLandingMontage = 0x1b68; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterUnlandingMontage = 0x1b70; // Size: 8, Type: struct UAnimMontage*
			constexpr auto VehicleUnlandingMontage = 0x1b78; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterStopIdleMontage = 0x1b80; // Size: 8, Type: struct UAnimMontage*
			constexpr auto VehicleStopIdleMontage = 0x1b88; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterRidingMontage = 0x1b90; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterAccelerationMontage = 0x1b98; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterReverseMontage = 0x1ba0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterJumpMontage = 0x1ba8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterSlideRightMontage = 0x1bb0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CharacterSlideLeftMontage = 0x1bb8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto VehicleHightGravityMontage = 0x1bc0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto m_MoveRight = 0x1bcc; // Size: 4, Type: float
			constexpr auto MaxSpeedInKmPerH = 0x1bd0; // Size: 4, Type: float
			constexpr auto MaxBackwardSpeedInKmPerH = 0x1bd4; // Size: 4, Type: float
			constexpr auto TurnRateMultiplierCurve = 0x1bd8; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto YawInputMultiplierCurve = 0x1c00; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto YawInputMultiplier = 0x1c28; // Size: 4, Type: float
			constexpr auto UseYawInputCorrectionInTurnBraking = 0x1c2c; // Size: 1, Type: bool
			constexpr auto BodyTiltYAngleCurve = 0x1c30; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto BodyTiltYSpeed = 0x1c58; // Size: 4, Type: float
			constexpr auto BodyTiltXSpeed = 0x1c60; // Size: 4, Type: float
			constexpr auto MaxBodyTiltX = 0x1c64; // Size: 4, Type: float
			constexpr auto ForwardWheelRotationSpeed = 0x1c68; // Size: 4, Type: float
			constexpr auto FWheelUpdateSlopeTraceDistance = 0x1c6c; // Size: 4, Type: float
			constexpr auto BWheelUpdateSlopeTraceDistance = 0x1c70; // Size: 4, Type: float
			constexpr auto YawInputCurveMultiplier = 0x1c74; // Size: 4, Type: float
			constexpr auto YawInterpolationSpeed = 0x1c78; // Size: 4, Type: float
			constexpr auto NormalBrakingFrictionFactor = 0x1c7c; // Size: 4, Type: float
			constexpr auto StoppingBrakingFrictionFactor = 0x1c80; // Size: 4, Type: float
			constexpr auto EngineBrakingFrictionFactor = 0x1c84; // Size: 4, Type: float
			constexpr auto FrontWheelRadius = 0x1c88; // Size: 4, Type: float
			constexpr auto RearWheelRadius = 0x1c8c; // Size: 4, Type: float
			constexpr auto WheelsMagicConstant = 0x1c90; // Size: 4, Type: float
			constexpr auto SuspensionType = 0x1c94; // Size: 1, Type: enum class EWTLSuspensionType
			constexpr auto FrontSuspensionTravel = 0x1c98; // Size: 4, Type: float
			constexpr auto FrontSuspensionDampingSpeed = 0x1c9c; // Size: 4, Type: float
			constexpr auto FrontSuspensionReboundSpeed = 0x1ca0; // Size: 4, Type: float
			constexpr auto FrontSuspensionBalancingSpeed = 0x1ca4; // Size: 4, Type: float
			constexpr auto FrontSuspensionMinLoadOnBraking = 0x1ca8; // Size: 4, Type: float
			constexpr auto FrontSuspensionMaxLoadOnBraking = 0x1cac; // Size: 4, Type: float
			constexpr auto FrontSuspensionMinLoadOnAcceleration = 0x1cb0; // Size: 4, Type: float
			constexpr auto FrontSuspensionMaxLoadOnAcceleration = 0x1cb4; // Size: 4, Type: float
			constexpr auto RearSuspensionTravel = 0x1cb8; // Size: 4, Type: float
			constexpr auto RearSuspensionDampingSpeed = 0x1cbc; // Size: 4, Type: float
			constexpr auto RearSuspensionReboundSpeed = 0x1cc0; // Size: 4, Type: float
			constexpr auto RearSuspensionBalancingSpeed = 0x1cc4; // Size: 4, Type: float
			constexpr auto SuspensionSpeedMultiplierOnLanded = 0x1cc8; // Size: 4, Type: float
			constexpr auto SuspensionRollThreshold = 0x1ccc; // Size: 4, Type: float
			constexpr auto SuspensionRollInterpolationSpeedUp = 0x1cd0; // Size: 4, Type: float
			constexpr auto SuspensionRollInterpolationSpeedDown = 0x1cd4; // Size: 4, Type: float
			constexpr auto SuspensionBodyPositionInterpolationSpeed = 0x1cd8; // Size: 4, Type: float
			constexpr auto SuspensionWheelTraceProfileName = 0x1cdc; // Size: 8, Type: struct FName
			constexpr auto SuspensionMagicConstant = 0x1ce4; // Size: 4, Type: float
			constexpr auto SuspensionTraceRollRelationConstant = 0x1ce8; // Size: 4, Type: float
			constexpr auto MagicConstant2 = 0x1cec; // Size: 4, Type: float
			constexpr auto SuspensionUseConstantInterpolation = 0x1cf0; // Size: 1, Type: bool
			constexpr auto CheckForwardObstructionBoneName = 0x1cf4; // Size: 8, Type: struct FName
			constexpr auto CheckBackwardObstructionBoneName = 0x1cfc; // Size: 8, Type: struct FName
			constexpr auto CheckForwardObstructionTraceDistance = 0x1d04; // Size: 4, Type: float
			constexpr auto CheckBackwardObstructionTraceDistance = 0x1d08; // Size: 4, Type: float
			constexpr auto MinJumpTimeInterval = 0x1d0c; // Size: 4, Type: float
			constexpr auto MinJumpToLandedTimeInterval = 0x1d10; // Size: 4, Type: float
			constexpr auto MinJumpRollValue = 0x1d14; // Size: 4, Type: float
			constexpr auto MinJumpSpeed = 0x1d18; // Size: 4, Type: float
			constexpr auto MaxJumpZVelocity = 0x1d1c; // Size: 4, Type: float
			constexpr auto FrontWheelToGroundDistanceJumpThreshold = 0x1d20; // Size: 4, Type: float
			constexpr auto RearWheelToGroundDistanceJumpThreshold = 0x1d24; // Size: 4, Type: float
			constexpr auto LandingVelocityToTakeDamage = 0x1d28; // Size: 4, Type: float
			constexpr auto LandingVelocityToEjectCharacter = 0x1d2c; // Size: 4, Type: float
			constexpr auto InAirRollDelta = 0x1d30; // Size: 4, Type: float
			constexpr auto InAirRollDeltaSpeed = 0x1d34; // Size: 4, Type: float
			constexpr auto SteeringSpeed = 0x1d38; // Size: 4, Type: float
			constexpr auto SteeringUseConstantInterpolation = 0x1d3c; // Size: 1, Type: bool
			constexpr auto NewDesiredInputForwardValueInterSpeed = 0x1d40; // Size: 4, Type: float
			constexpr auto FallingAnimationBlendWeight = 0x1d44; // Size: 4, Type: float
			constexpr auto m_bUseHeadlight = 0x1d5c; // Size: 1, Type: bool
			constexpr auto m_HeadlightMode = 0x1d5d; // Size: 1, Type: char
			constexpr auto m_bUseRadio = 0x1d5e; // Size: 1, Type: bool
			constexpr auto m_bVehicleVisibility = 0x1d5f; // Size: 1, Type: bool
			constexpr auto EngineSoundMode = 0x1d60; // Size: 1, Type: enum class EWTLVehicleEngineSoundMode
			constexpr auto EngineMinRPM = 0x1d64; // Size: 4, Type: float
			constexpr auto EngineMaxRPM = 0x1d68; // Size: 4, Type: float
			constexpr auto EngineRPMIncreaseSpeed = 0x1d6c; // Size: 4, Type: float
			constexpr auto EngineRPMDropSpeed = 0x1d70; // Size: 4, Type: float
			constexpr auto CanDoWheelSlipOnAcceleration = 0x1d74; // Size: 1, Type: bool
			constexpr auto DropAccelerationInAir = 0x1d75; // Size: 1, Type: bool
			constexpr auto CameraDistance = 0x1d90; // Size: 4, Type: float
			constexpr auto MinCameraDistance = 0x1d9c; // Size: 4, Type: float
			constexpr auto MaxCameraDistance = 0x1da0; // Size: 4, Type: float
			constexpr auto CameraDistanceChangeSpeed = 0x1da8; // Size: 4, Type: float
			constexpr auto TimeToResetCameraRotation = 0x1dac; // Size: 4, Type: float
			constexpr auto CameraRotationSpeed = 0x1db4; // Size: 4, Type: float
			constexpr auto m_bAffectedByAlcohol = 0x1e6c; // Size: 1, Type: bool
			constexpr auto CollisionObjectTypes = 0x1e70; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
	}
} 
