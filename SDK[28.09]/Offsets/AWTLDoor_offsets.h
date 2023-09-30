namespace offsets
{
	namespace AWTLDoor
	{
			constexpr auto m_bIsOpened = 0x260; // Size: 1, Type: bool
			constexpr auto m_StaticMeshComponent = 0x268; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto m_SkeletalMeshComponent = 0x270; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto m_DoorOpenAnimation = 0x278; // Size: 8, Type: struct UAnimMontage*
			constexpr auto m_DoorCloseAnimation = 0x280; // Size: 8, Type: struct UAnimMontage*
	}
} 
