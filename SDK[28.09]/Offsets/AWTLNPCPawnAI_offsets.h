namespace offsets
{
	namespace AWTLNPCPawnAI
	{
			constexpr auto Capsule = 0x280; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto Mesh = 0x288; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshHead = 0x290; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshTorso = 0x298; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshLegs = 0x2a0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshFeet = 0x2a8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshHeadSlot = 0x2b0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshTorsoSlot = 0x2b8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshLegsSlot = 0x2c0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshFeetSlot = 0x2c8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MovementComponent = 0x2d0; // Size: 8, Type: struct UWTLPawnMovementComponent*
			constexpr auto CurrentSpeed = 0x318; // Size: 4, Type: float
			constexpr auto WeaponPickup = 0x320; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto AmmoPickup = 0x348; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MinDamage = 0x370; // Size: 4, Type: float
			constexpr auto MaxDamage = 0x374; // Size: 4, Type: float
	}
} 
