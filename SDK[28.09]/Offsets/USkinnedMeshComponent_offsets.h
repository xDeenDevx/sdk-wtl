namespace offsets
{
	namespace USkinnedMeshComponent
	{
			constexpr auto SkeletalMesh = 0x470; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto MasterPoseComponent = 0x478; // Size: 8, Type: struct TWeakObjectPtr<USkinnedMeshComponent>
			constexpr auto SkinCacheUsage = 0x480; // Size: 16, Type: struct TArray<enum class ESkinCacheUsage>
			constexpr auto VertexOffsetUsage = 0x490; // Size: 16, Type: struct TArray<struct FVertexOffsetUsage>
			constexpr auto PhysicsAssetOverride = 0x598; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto ForcedLodModel = 0x5a0; // Size: 4, Type: int32_t
			constexpr auto MinLodModel = 0x5a4; // Size: 4, Type: int32_t
			constexpr auto StreamingDistanceMultiplier = 0x5b0; // Size: 4, Type: float
			constexpr auto LODInfo = 0x5c0; // Size: 16, Type: struct TArray<struct FSkelMeshComponentLODInfo>
			constexpr auto VisibilityBasedAnimTickOption = 0x5f4; // Size: 1, Type: enum class EVisibilityBasedAnimTickOption
			constexpr auto bOverrideMinLOD = 0x5f6; // Size: 1, Type: char
			constexpr auto bUseBoundsFromMasterPoseComponent = 0x5f6; // Size: 1, Type: char
			constexpr auto bForceWireframe = 0x5f6; // Size: 1, Type: char
			constexpr auto bDisplayBones = 0x5f6; // Size: 1, Type: char
			constexpr auto bDisableMorphTarget = 0x5f6; // Size: 1, Type: char
			constexpr auto bHideSkin = 0x5f7; // Size: 1, Type: char
			constexpr auto bPerBoneMotionBlur = 0x5f7; // Size: 1, Type: char
			constexpr auto bComponentUseFixedSkelBounds = 0x5f7; // Size: 1, Type: char
			constexpr auto bConsiderAllBodiesForBounds = 0x5f7; // Size: 1, Type: char
			constexpr auto bSyncAttachParentLOD = 0x5f7; // Size: 1, Type: char
			constexpr auto bCanHighlightSelectedSections = 0x5f7; // Size: 1, Type: char
			constexpr auto bRecentlyRendered = 0x5f7; // Size: 1, Type: char
			constexpr auto bCastCapsuleDirectShadow = 0x5f7; // Size: 1, Type: char
			constexpr auto bCastCapsuleIndirectShadow = 0x5f8; // Size: 1, Type: char
			constexpr auto bCPUSkinning = 0x5f8; // Size: 1, Type: char
			constexpr auto bEnableUpdateRateOptimizations = 0x5f8; // Size: 1, Type: char
			constexpr auto bDisplayDebugUpdateRateOptimizations = 0x5f8; // Size: 1, Type: char
			constexpr auto bRenderStatic = 0x5f8; // Size: 1, Type: char
			constexpr auto bIgnoreMasterPoseComponentLOD = 0x5f8; // Size: 1, Type: char
			constexpr auto bCachedLocalBoundsUpToDate = 0x5f9; // Size: 1, Type: char
			constexpr auto bForceMeshObjectUpdate = 0x5f9; // Size: 1, Type: char
			constexpr auto CapsuleIndirectShadowMinVisibility = 0x5fc; // Size: 4, Type: float
			constexpr auto CachedWorldSpaceBounds = 0x610; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto CachedWorldToLocalTransform = 0x630; // Size: 64, Type: struct FMatrix
	}
} 
