namespace offsets
{
	namespace AWTLUsable
	{
			constexpr auto m_ItemID = 0x238; // Size: 8, Type: int64_t
			constexpr auto m_ItemTypeID = 0x240; // Size: 2, Type: int16_t
			constexpr auto m_bIsSnuggled = 0x292; // Size: 1, Type: bool
			constexpr auto PauseBetweenUse = 0x2b8; // Size: 4, Type: float
			constexpr auto m_FastAccessSlotIndex = 0x2bc; // Size: 4, Type: int32_t
			constexpr auto SkeletalMesh = 0x2c0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto HideFastAccessSlots = 0x2d0; // Size: 1, Type: bool
			constexpr auto EquipSequenceSet = 0x2e0; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto EquipTimeWithoutAnimation = 0x2f8; // Size: 4, Type: float
			constexpr auto UnequipSequenceSet = 0x300; // Size: 24, Type: struct FItemAnimationSet
			constexpr auto UnequipTimeWithoutAnimation = 0x318; // Size: 4, Type: float
			constexpr auto MaleIdleStateAnimation = 0x320; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto FemaleIdleStateAnimation = 0x328; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto MaleSnuggleAnimation = 0x330; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto FemaleSnuggleAnimation = 0x338; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto MaleAimOffsetBlendSpace = 0x340; // Size: 8, Type: struct UAimOffsetBlendSpace1D*
			constexpr auto FemaleAimOffsetBlendSpace = 0x348; // Size: 8, Type: struct UAimOffsetBlendSpace1D*
			constexpr auto IdleSequenceSetArray = 0x350; // Size: 16, Type: struct TArray<struct FItemAnimationSet>
			constexpr auto IdleAnimationTimeoutMin = 0x360; // Size: 4, Type: float
			constexpr auto IdleAnimationTimeoutMax = 0x364; // Size: 4, Type: float
			constexpr auto bCanBeSnuggled = 0x368; // Size: 1, Type: bool
			constexpr auto SnuggleTraceRange = 0x36c; // Size: 4, Type: float
			constexpr auto AnimationFloatParameters = 0x370; // Size: 16, Type: struct TArray<float>
			constexpr auto AnimationVectorParameters = 0x380; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto FemaleAnimationFloatParameters = 0x390; // Size: 16, Type: struct TArray<float>
			constexpr auto FemaleAnimationVectorParameters = 0x3a0; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto HandsOffset = 0x3b0; // Size: 12, Type: struct FVector
	}
} 
