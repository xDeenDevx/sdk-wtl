namespace offsets
{
	namespace UNiagaraComponent
	{
			constexpr auto Asset = 0x440; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto TickBehavior = 0x448; // Size: 1, Type: enum class ENiagaraTickBehavior
			constexpr auto OverrideParameters = 0x450; // Size: 200, Type: struct FNiagaraUserRedirectionParameterStore
			constexpr auto bForceSolo = 0x518; // Size: 1, Type: char
			constexpr auto bEnableGpuComputeDebug = 0x518; // Size: 1, Type: char
			constexpr auto bAutoDestroy = 0x544; // Size: 1, Type: char
			constexpr auto bRenderingEnabled = 0x544; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x544; // Size: 1, Type: char
			constexpr auto bAutoAttachWeldSimulatedBodies = 0x544; // Size: 1, Type: char
			constexpr auto MaxTimeBeforeForceUpdateTransform = 0x548; // Size: 4, Type: float
			constexpr auto EmitterMaterials = 0x550; // Size: 16, Type: struct TArray<struct FNiagaraMaterialOverride>
			constexpr auto OnSystemFinished = 0x568; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AutoAttachParent = 0x578; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x580; // Size: 8, Type: struct FName
			constexpr auto AutoAttachLocationRule = 0x588; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachRotationRule = 0x589; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachScaleRule = 0x58a; // Size: 1, Type: enum class EAttachmentRule
	}
} 
