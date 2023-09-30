namespace offsets
{
	namespace ABP_MonsterBase_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto MaxSpeed = 0xf18; // Size: 4, Type: float
			constexpr auto AccelerationSpeed = 0xf1c; // Size: 4, Type: float
			constexpr auto DistanceSquare = 0xf20; // Size: 4, Type: float
			constexpr auto ToSpeed = 0xf24; // Size: 4, Type: float
			constexpr auto CurrentSpeed = 0xf28; // Size: 4, Type: float
			constexpr auto DirectionTurn = 0xf2c; // Size: 4, Type: float
			constexpr auto OldDirectionTurn = 0xf30; // Size: 4, Type: float
			constexpr auto SpeedRotation = 0xf34; // Size: 4, Type: float
			constexpr auto SpeedRatio = 0xf38; // Size: 4, Type: float
			constexpr auto TimeInConeEnemy = 0xf3c; // Size: 4, Type: float
			constexpr auto MyDeltaTime = 0xf40; // Size: 4, Type: float
			constexpr auto TimeMove = 0xf44; // Size: 4, Type: float
			constexpr auto StateMonster = 0xf48; // Size: 1, Type: enum class StateMonster
			constexpr auto BiasMode = 0xf49; // Size: 1, Type: enum class E_MonsterBiasMode
			constexpr auto Currenthit = 0xf4a; // Size: 1, Type: char
			constexpr auto StateMoveTo = 0xf4b; // Size: 1, Type: enum class E_MoveToBase
			constexpr auto CurrentRotation = 0xf4c; // Size: 12, Type: struct FRotator
			constexpr auto AddRotatorCapsule = 0xf58; // Size: 12, Type: struct FRotator
			constexpr auto AddRotator = 0xf64; // Size: 12, Type: struct FRotator
			constexpr auto AddRotatorFromTarget = 0xf70; // Size: 12, Type: struct FRotator
			constexpr auto ReadyToAttack = 0xf7c; // Size: 1, Type: bool
			constexpr auto WaitTurn = 0xf7d; // Size: 1, Type: bool
			constexpr auto IsMoveForward = 0xf7e; // Size: 1, Type: bool
			constexpr auto TargetLocation = 0xf80; // Size: 12, Type: struct FVector
			constexpr auto VectorForward = 0xf8c; // Size: 12, Type: struct FVector
			constexpr auto LocationStartMoveTo = 0xf98; // Size: 12, Type: struct FVector
			constexpr auto LeftHit = 0xfa4; // Size: 140, Type: struct FHitResult
			constexpr auto RightHit = 0x1030; // Size: 140, Type: struct FHitResult
			constexpr auto MIdleHit = 0x10bc; // Size: 140, Type: struct FHitResult
			constexpr auto ToDirection = 0x1148; // Size: 4, Type: int32_t
			constexpr auto BiasDirection = 0x114c; // Size: 4, Type: int32_t
			constexpr auto CharacterTemp = 0x1150; // Size: 8, Type: struct AWTLCharacter*
			constexpr auto TaskMoveTo = 0x1158; // Size: 8, Type: struct UBTTask_BlueprintBase*
			constexpr auto MyTargetActor = 0x1160; // Size: 8, Type: struct AActor*
			constexpr auto WayPoints = 0x1168; // Size: 16, Type: struct TArray<struct FDS_WayPoint>
			constexpr auto DamageInstigators = 0x1178; // Size: 16, Type: struct TArray<struct APawn*>
			constexpr auto MyCharacterMovement = 0x1188; // Size: 8, Type: struct UCharacterMovementComponent*
			constexpr auto IsAttack = 0x1190; // Size: 1, Type: bool
			constexpr auto IsUnderground = 0x1191; // Size: 1, Type: bool
			constexpr auto IsDestroyObject = 0x1192; // Size: 1, Type: bool
			constexpr auto ProjectileStoneClass = 0x1198; // Size: 8, Type: AActor*
	}
} 
