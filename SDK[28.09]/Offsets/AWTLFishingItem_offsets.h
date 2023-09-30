namespace offsets
{
	namespace AWTLFishingItem
	{
			constexpr auto m_Controller = 0x458; // Size: 8, Type: struct AWTLPlayerController*
			constexpr auto FloatFlowAnimation = 0x460; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto FloatBiteAnimation = 0x468; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto FloatAttachSocket = 0x470; // Size: 8, Type: struct FName
			constexpr auto FishingActivityAsset = 0x478; // Size: 8, Type: AWTLFishingActivity*
			constexpr auto HitCollisionObjectTypes = 0x480; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto MouseSesivityCurve = 0x490; // Size: 8, Type: struct UCurveFloat*
			constexpr auto MouseSensivity = 0x498; // Size: 4, Type: float
			constexpr auto DrawDebugLines = 0x49c; // Size: 1, Type: bool
			constexpr auto CollisionObjectTypes = 0x4a0; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto CrosshairWidgetClass = 0x4b0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto m_bFloatVisibility = 0x4d8; // Size: 1, Type: bool
			constexpr auto m_FloatLocation = 0x4dc; // Size: 12, Type: struct FVector
			constexpr auto FishingThrowAnimMontage = 0x508; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FishingThrowEndAnimMontage = 0x510; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FishingPecksAnimMontage = 0x518; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FishingPecksEndAnimMontage = 0x520; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FishingLeftHookAnimMontage = 0x528; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FishingUpHookAnimMontage = 0x530; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FishingRightHookAnimMontage = 0x538; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FishingDownHookAnimMontage = 0x540; // Size: 8, Type: struct UAnimMontage*
			constexpr auto m_FishingCurrentAnimMontage = 0x548; // Size: 8, Type: struct UAnimMontage*
			constexpr auto m_RodHorizontalTilt = 0x558; // Size: 4, Type: float
			constexpr auto m_Resistance = 0x560; // Size: 4, Type: float
			constexpr auto m_Activity = 0x578; // Size: 8, Type: struct AWTLFishingActivity*
			constexpr auto m_LastFishingZoneID = 0x588; // Size: 4, Type: int32_t
			constexpr auto m_CathedFishID = 0x58c; // Size: 4, Type: int32_t
			constexpr auto OnFishingItemPutToInventory = 0x598; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFishingRodCanThrow = 0x5a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFloatVisibilityChanged = 0x5b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto FloatMesh = 0x5c8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto FishingRope = 0x5d0; // Size: 8, Type: struct UCableComponent*
			constexpr auto FishMesh = 0x5d8; // Size: 8, Type: struct USkeletalMeshComponent*
	}
} 
