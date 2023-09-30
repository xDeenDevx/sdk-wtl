namespace offsets
{
	namespace ABP_Pawn_Thorn_C
	{
			constexpr auto UberGraphFrame = 0xf10; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto FE_Monster_Devourer_Spike_00 = 0xf18; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto BP_BulletHell_ConeAttack = 0xf20; // Size: 8, Type: struct UBP_BulletHell_ConeAttack_C*
			constexpr auto AIPerception = 0xf28; // Size: 8, Type: struct UAIPerceptionComponent*
			constexpr auto FMODAudio = 0xf30; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto DeltaSec = 0xf38; // Size: 4, Type: float
			constexpr auto TimeToNesxtFlyLocation = 0xf3c; // Size: 4, Type: float
			constexpr auto MaxFlyDistance = 0xf40; // Size: 4, Type: float
			constexpr auto TimeReloadAttack = 0xf44; // Size: 4, Type: float
			constexpr auto CurrentReloadAttack = 0xf48; // Size: 4, Type: float
			constexpr auto SpawnLocation = 0xf4c; // Size: 12, Type: struct FVector
			constexpr auto TargetLocation = 0xf58; // Size: 12, Type: struct FVector
			constexpr auto LookAtLocation = 0xf64; // Size: 12, Type: struct FVector
			constexpr auto VectorHitOffset = 0xf70; // Size: 12, Type: struct FVector
			constexpr auto TargetActor = 0xf80; // Size: 8, Type: struct AActor*
			constexpr auto CurrentFlyRotation = 0xf88; // Size: 12, Type: struct FRotator
			constexpr auto DesiredFlyRotation = 0xf94; // Size: 12, Type: struct FRotator
			constexpr auto CurrentLookRotation = 0xfa0; // Size: 12, Type: struct FRotator
			constexpr auto DesiredLookRotation = 0xfac; // Size: 12, Type: struct FRotator
			constexpr auto IsDeath = 0xfb8; // Size: 1, Type: bool
			constexpr auto TraceID = 0xfb9; // Size: 1, Type: char
			constexpr auto Reload = 0xfbc; // Size: 4, Type: float
			constexpr auto DeathData = 0xfc0; // Size: 36, Type: struct FWTLMonsterDeathData
	}
} 
