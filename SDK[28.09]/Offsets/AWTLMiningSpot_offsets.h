namespace offsets
{
	namespace AWTLMiningSpot
	{
			constexpr auto m_Capacity = 0x230; // Size: 4, Type: float
			constexpr auto MiningSpotRootComponent = 0x248; // Size: 8, Type: struct USceneComponent*
			constexpr auto Mesh = 0x250; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto MaterialOverride = 0x258; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto MeshChangeParticles = 0x280; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto MeshChangeSoundEvent = 0x2a8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto EmptyHitParticles = 0x2d0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto EmptyHitSoundEvent = 0x2f8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto SuccessHitParticles = 0x320; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto SuccessHitSoundEvent = 0x348; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto Resources = 0x370; // Size: 16, Type: struct TArray<struct FWTLMiningSpotResource>
			constexpr auto MinEmptyHitCapacityCost = 0x380; // Size: 4, Type: float
			constexpr auto MaxEmptyHitCapacityCost = 0x384; // Size: 4, Type: float
			constexpr auto MaxCapacity = 0x388; // Size: 4, Type: float
			constexpr auto MinCapacityRegenerationPerSecond = 0x38c; // Size: 4, Type: float
			constexpr auto MaxCapacityRegenerationPerSecond = 0x390; // Size: 4, Type: float
			constexpr auto CapacityRestoreTimeout = 0x394; // Size: 4, Type: float
			constexpr auto PerCapacityPercentMeshes = 0x398; // Size: 80, Type: struct TMap<float, struct TSoftObjectPtr<UStaticMesh>>
	}
} 
