namespace offsets
{
	namespace UWTLHumanoidAnimInstance
	{
			constexpr auto Sex = 0x2c0; // Size: 1, Type: enum class EWTLSex
			constexpr auto LookDirection = 0x2c4; // Size: 12, Type: struct FVector
			constexpr auto SideVelocity = 0x2d0; // Size: 4, Type: float
			constexpr auto ForwardVelocity = 0x2d4; // Size: 4, Type: float
			constexpr auto VelocityZ = 0x2d8; // Size: 4, Type: float
			constexpr auto CameraAimOffset = 0x2dc; // Size: 4, Type: float
			constexpr auto bIsInAir = 0x2e0; // Size: 1, Type: bool
			constexpr auto bIsAiming = 0x2e1; // Size: 1, Type: bool
			constexpr auto bIsCrouch = 0x2e2; // Size: 1, Type: bool
			constexpr auto bIsInCombatMode = 0x2e3; // Size: 1, Type: bool
			constexpr auto InstanceState = 0x2e4; // Size: 1, Type: enum class EWTLHumanoidAnimInstanceState
			constexpr auto ItemEquipTime = 0x2e8; // Size: 4, Type: float
			constexpr auto ItemUnequipTime = 0x2ec; // Size: 4, Type: float
			constexpr auto UsableItemID = 0x2f0; // Size: 4, Type: int32_t
			constexpr auto UsableItemType = 0x2f4; // Size: 1, Type: enum class EWTLItemType
			constexpr auto IdleAnimation = 0x2f8; // Size: 8, Type: struct UAnimSequence*
			constexpr auto SnuggleAnimation = 0x300; // Size: 8, Type: struct UAnimSequence*
			constexpr auto AimOffsetBlendSpace = 0x308; // Size: 8, Type: struct UAimOffsetBlendSpace1D*
			constexpr auto AimingHandsTranslation = 0x310; // Size: 12, Type: struct FVector
			constexpr auto AimingHandsOffset = 0x31c; // Size: 12, Type: struct FVector
			constexpr auto bIsUnequip = 0x328; // Size: 1, Type: bool
	}
} 
