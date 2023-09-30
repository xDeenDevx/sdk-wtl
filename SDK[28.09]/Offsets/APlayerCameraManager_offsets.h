namespace offsets
{
	namespace APlayerCameraManager
	{
			constexpr auto PCOwner = 0x220; // Size: 8, Type: struct APlayerController*
			constexpr auto TransformComponent = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto DefaultFOV = 0x238; // Size: 4, Type: float
			constexpr auto DefaultOrthoWidth = 0x240; // Size: 4, Type: float
			constexpr auto DefaultAspectRatio = 0x248; // Size: 4, Type: float
			constexpr auto CameraCache = 0x290; // Size: 1520, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCache = 0x880; // Size: 1520, Type: struct FCameraCacheEntry
			constexpr auto ViewTarget = 0xe70; // Size: 1536, Type: struct FTViewTarget
			constexpr auto PendingViewTarget = 0x1470; // Size: 1536, Type: struct FTViewTarget
			constexpr auto CameraCachePrivate = 0x1aa0; // Size: 1520, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCachePrivate = 0x2090; // Size: 1520, Type: struct FCameraCacheEntry
			constexpr auto ModifierList = 0x2680; // Size: 16, Type: struct TArray<struct UCameraModifier*>
			constexpr auto DefaultModifiers = 0x2690; // Size: 16, Type: struct TArray<UCameraModifier*>
			constexpr auto FreeCamDistance = 0x26a0; // Size: 4, Type: float
			constexpr auto FreeCamOffset = 0x26a4; // Size: 12, Type: struct FVector
			constexpr auto ViewTargetOffset = 0x26b0; // Size: 12, Type: struct FVector
			constexpr auto OnAudioFadeChangeEvent = 0x26c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CameraLensEffects = 0x26e0; // Size: 16, Type: struct TArray<struct AEmitterCameraLensEffectBase*>
			constexpr auto CachedCameraShakeMod = 0x26f0; // Size: 8, Type: struct UCameraModifier_CameraShake*
			constexpr auto AnimInstPool[8] = 0x26f8; // Size: 64, Type: struct UCameraAnimInst*
			constexpr auto PostProcessBlendCache = 0x2738; // Size: 16, Type: struct TArray<struct FPostProcessSettings>
			constexpr auto ActiveAnims = 0x2758; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto FreeAnims = 0x2768; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto AnimCameraActor = 0x2778; // Size: 8, Type: struct ACameraActor*
			constexpr auto bIsOrthographic = 0x2780; // Size: 1, Type: char
			constexpr auto bDefaultConstrainAspectRatio = 0x2780; // Size: 1, Type: char
			constexpr auto bClientSimulatingViewTarget = 0x2780; // Size: 1, Type: char
			constexpr auto bUseClientSideCameraUpdates = 0x2780; // Size: 1, Type: char
			constexpr auto bGameCameraCutThisFrame = 0x2781; // Size: 1, Type: char
			constexpr auto ViewPitchMin = 0x2784; // Size: 4, Type: float
			constexpr auto ViewPitchMax = 0x2788; // Size: 4, Type: float
			constexpr auto ViewYawMin = 0x278c; // Size: 4, Type: float
			constexpr auto ViewYawMax = 0x2790; // Size: 4, Type: float
			constexpr auto ViewRollMin = 0x2794; // Size: 4, Type: float
			constexpr auto ViewRollMax = 0x2798; // Size: 4, Type: float
			constexpr auto ServerUpdateCameraTimeout = 0x27a0; // Size: 4, Type: float
	}
} 
