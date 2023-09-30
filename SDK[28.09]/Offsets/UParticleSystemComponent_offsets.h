namespace offsets
{
	namespace UParticleSystemComponent
	{
			constexpr auto Template = 0x440; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EmitterMaterials = 0x448; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto SkelMeshComponents = 0x458; // Size: 16, Type: struct TArray<struct USkeletalMeshComponent*>
			constexpr auto bResetOnDetach = 0x469; // Size: 1, Type: char
			constexpr auto bUpdateOnDedicatedServer = 0x469; // Size: 1, Type: char
			constexpr auto bAllowRecycling = 0x469; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x469; // Size: 1, Type: char
			constexpr auto bAutoAttachWeldSimulatedBodies = 0x469; // Size: 1, Type: char
			constexpr auto bWarmingUp = 0x46a; // Size: 1, Type: char
			constexpr auto bOverrideLODMethod = 0x46a; // Size: 1, Type: char
			constexpr auto bSkipUpdateDynamicDataDuringTick = 0x46a; // Size: 1, Type: char
			constexpr auto LODMethod = 0x475; // Size: 1, Type: enum class ParticleSystemLODMethod
			constexpr auto RequiredSignificance = 0x476; // Size: 1, Type: enum class EParticleSignificanceLevel
			constexpr auto InstanceParameters = 0x478; // Size: 16, Type: struct TArray<struct FParticleSysParam>
			constexpr auto OnParticleSpawn = 0x488; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleBurst = 0x498; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleDeath = 0x4a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleCollide = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bOldPositionValid = 0x4c8; // Size: 1, Type: bool
			constexpr auto OldPosition = 0x4cc; // Size: 12, Type: struct FVector
			constexpr auto PartSysVelocity = 0x4d8; // Size: 12, Type: struct FVector
			constexpr auto WarmupTime = 0x4e4; // Size: 4, Type: float
			constexpr auto WarmupTickRate = 0x4e8; // Size: 4, Type: float
			constexpr auto SecondsBeforeInactive = 0x4f0; // Size: 4, Type: float
			constexpr auto MaxTimeBeforeForceUpdateTransform = 0x4f8; // Size: 4, Type: float
			constexpr auto ReplayClips = 0x518; // Size: 16, Type: struct TArray<struct UParticleSystemReplay*>
			constexpr auto CustomTimeDilation = 0x530; // Size: 4, Type: float
			constexpr auto AutoAttachParent = 0x588; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x590; // Size: 8, Type: struct FName
			constexpr auto AutoAttachLocationRule = 0x598; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachRotationRule = 0x599; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachScaleRule = 0x59a; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto OnSystemFinished = 0x5c8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
