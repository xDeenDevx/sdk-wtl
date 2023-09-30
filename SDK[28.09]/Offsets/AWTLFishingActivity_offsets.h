namespace offsets
{
	namespace AWTLFishingActivity
	{
			constexpr auto m_Character = 0x250; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto m_FishingRod = 0x258; // Size: 8, Type: struct AWTLFishingItem*
			constexpr auto m_FishingVolume = 0x260; // Size: 8, Type: struct AWTLFishingVolume*
			constexpr auto m_Fish = 0x268; // Size: 8, Type: struct AWTLFish*
			constexpr auto m_bFishingInProcess = 0x270; // Size: 1, Type: bool
			constexpr auto m_FloatStartPosition = 0x274; // Size: 12, Type: struct FVector
			constexpr auto m_CharacterPosition = 0x280; // Size: 12, Type: struct FVector
			constexpr auto m_RodResistanceReplicated = 0x308; // Size: 1, Type: char
			constexpr auto m_bPulling = 0x324; // Size: 1, Type: bool
			constexpr auto FishingRodTiltCurve = 0x338; // Size: 8, Type: struct UCurveFloat*
			constexpr auto FishingRodResistanceCurve = 0x340; // Size: 8, Type: struct UCurveFloat*
			constexpr auto MovementMultiplier = 0x348; // Size: 4, Type: float
			constexpr auto PullingSpeed = 0x34c; // Size: 4, Type: float
			constexpr auto CameraShakeInterpSpeed = 0x350; // Size: 4, Type: float
			constexpr auto ForwardAlphaToCatchFish = 0x354; // Size: 1, Type: char
			constexpr auto DrawDebugLines = 0x355; // Size: 1, Type: bool
			constexpr auto ZoneMaxWidth = 0x35c; // Size: 4, Type: float
			constexpr auto CollisionObjectTypes = 0x360; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto CameraShake = 0x370; // Size: 8, Type: struct UCameraShakeBase*
			constexpr auto CameraShakeClass = 0x378; // Size: 8, Type: UMatineeCameraShake*
			constexpr auto CameraLimits = 0x380; // Size: 12, Type: struct FWTLCameraLimits
			constexpr auto DesiredFOV = 0x38c; // Size: 4, Type: float
			constexpr auto m_FishingConeAngle = 0x390; // Size: 4, Type: float
			constexpr auto m_ZoneMaxLenght = 0x394; // Size: 4, Type: float
			constexpr auto m_DirectionToCharacter = 0x398; // Size: 12, Type: struct FVector
			constexpr auto m_RightVector = 0x3a4; // Size: 12, Type: struct FVector
	}
} 
