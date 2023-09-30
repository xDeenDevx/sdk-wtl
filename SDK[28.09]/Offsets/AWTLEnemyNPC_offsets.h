namespace offsets
{
	namespace AWTLEnemyNPC
	{
			constexpr auto HealthValue = 0x4b8; // Size: 4, Type: float
			constexpr auto CurrentState = 0x4bc; // Size: 30, Type: struct FWTLEnemyCurrentState
			constexpr auto ExclamationMap = 0x4e0; // Size: 80, Type: struct TMap<enum class EWTLEnemyNPCExclamationType, struct TSoftObjectPtr<UFMODEvent>>
			constexpr auto bIsWeaponEmpty = 0x531; // Size: 1, Type: bool
			constexpr auto LastTakeHitInfo = 0x538; // Size: 544, Type: struct FTakeHitInfo
			constexpr auto bIsDead = 0x758; // Size: 1, Type: bool
			constexpr auto m_HandsState = 0x759; // Size: 1, Type: enum class EWTLHandsState
			constexpr auto bIsInvulnerable = 0x7bc; // Size: 1, Type: bool
			constexpr auto CameraBoneName = 0x7c0; // Size: 8, Type: struct FName
			constexpr auto bCanUseFlashlight = 0x7c8; // Size: 1, Type: bool
			constexpr auto CharacterInfo = 0x7d0; // Size: 272, Type: struct FWTLCharacterInfo
			constexpr auto DeathExclamationChance = 0x8e0; // Size: 4, Type: float
			constexpr auto TakeDamageExclamationChance = 0x8e4; // Size: 4, Type: float
			constexpr auto DeathSoundEvent = 0x8e8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto TakeDamageLowHPEvent = 0x910; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto TakeDamageMediumHPEvent = 0x938; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto TakeDamageHighHPEvent = 0x960; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto FootstepSettings = 0x988; // Size: 12, Type: struct FWTLFootstepSettings
			constexpr auto UsableItemInHands = 0x9b8; // Size: 8, Type: struct AWTLUsable*
			constexpr auto bBroadcastDeathToKillers = 0xa30; // Size: 1, Type: bool
			constexpr auto MeshHead = 0xa38; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshLegs = 0xa40; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshFeet = 0xa48; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshHeadSlot = 0xa50; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshTorsoSlot = 0xa58; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshLegsSlot = 0xa60; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MeshFeetSlot = 0xa68; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto BackpackSlot = 0xa70; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto WeaponPreviewSlot = 0xa78; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto VoiceComponent = 0xa80; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto AdditionalLoot = 0xa88; // Size: 16, Type: struct TArray<struct FWTLItemDropInfo>
			constexpr auto CurrentTarget = 0xb38; // Size: 8, Type: struct AActor*
	}
} 
