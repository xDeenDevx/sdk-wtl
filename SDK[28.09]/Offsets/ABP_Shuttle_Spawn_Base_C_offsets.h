namespace offsets
{
	namespace ABP_Shuttle_Spawn_Base_C
	{
			constexpr auto UberGraphFrame = 0x11a0; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto NS_Shuttle_Tail = 0x11a8; // Size: 8, Type: struct UNiagaraComponent*
			constexpr auto PS_LandedExplosion_V01 = 0x11b0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto PS_Atmospheric_Explosion_V1 = 0x11b8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto PS_AirFriction_V01 = 0x11c0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto MonsterSpawn = 0x11c8; // Size: 8, Type: AWTLMonsterPawn*
			constexpr auto MinLevelSpawn = 0x11d0; // Size: 4, Type: int32_t
			constexpr auto MaxLevelSpawn = 0x11d4; // Size: 4, Type: int32_t
			constexpr auto CountMonster = 0x11d8; // Size: 4, Type: int32_t
			constexpr auto MaxAliveMonsters = 0x11dc; // Size: 4, Type: int32_t
			constexpr auto StealthMode = 0x11e0; // Size: 1, Type: bool
			constexpr auto DeltaSec = 0x11e4; // Size: 4, Type: float
			constexpr auto IsLanded = 0x11e8; // Size: 1, Type: bool
			constexpr auto IsBeginPlayFinish = 0x11e9; // Size: 1, Type: bool
			constexpr auto DestroySpawn = 0x11ea; // Size: 1, Type: bool
			constexpr auto DelayDestroy = 0x11ec; // Size: 4, Type: float
			constexpr auto DamageRadius = 0x11f0; // Size: 4, Type: float
			constexpr auto DamageExplosion = 0x11f4; // Size: 4, Type: float
			constexpr auto IsActivationStarted = 0x11f8; // Size: 1, Type: bool
			constexpr auto DurationActivation = 0x11fc; // Size: 4, Type: float
			constexpr auto DelayActivation = 0x1200; // Size: 4, Type: float
			constexpr auto GravityScale = 0x1204; // Size: 4, Type: float
			constexpr auto AddTag = 0x1208; // Size: 8, Type: struct FName
			constexpr auto IsActivationFinish = 0x1210; // Size: 1, Type: bool
			constexpr auto IsSpawnMonster = 0x1211; // Size: 1, Type: bool
			constexpr auto DelaySpawnMonster = 0x1214; // Size: 4, Type: float
			constexpr auto IsDestroySpawn = 0x1218; // Size: 1, Type: bool
			constexpr auto MyAliveMonsters = 0x1220; // Size: 16, Type: struct TArray<struct ABP_MonsterBase_C*>
			constexpr auto TempList = 0x1230; // Size: 16, Type: struct TArray<struct ABP_MonsterBase_C*>
	}
} 
