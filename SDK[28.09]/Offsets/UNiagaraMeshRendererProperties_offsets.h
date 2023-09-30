namespace offsets
{
	namespace UNiagaraMeshRendererProperties
	{
			constexpr auto ParticleMesh = 0x80; // Size: 8, Type: struct UStaticMesh*
			constexpr auto SortMode = 0x88; // Size: 1, Type: enum class ENiagaraSortMode
			constexpr auto bOverrideMaterials = 0x8c; // Size: 1, Type: char
			constexpr auto bSortOnlyWhenTranslucent = 0x8c; // Size: 1, Type: char
			constexpr auto OverrideMaterials = 0x90; // Size: 16, Type: struct TArray<struct FNiagaraMeshMaterialOverride>
			constexpr auto SubImageSize = 0xa0; // Size: 8, Type: struct FVector2D
			constexpr auto bSubImageBlend = 0xa8; // Size: 1, Type: char
			constexpr auto FacingMode = 0xac; // Size: 1, Type: enum class ENiagaraMeshFacingMode
			constexpr auto bLockedAxisEnable = 0xb0; // Size: 1, Type: char
			constexpr auto LockedAxis = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto LockedAxisSpace = 0xc0; // Size: 1, Type: enum class ENiagaraMeshLockedAxisSpace
			constexpr auto PivotOffset = 0xc4; // Size: 12, Type: struct FVector
			constexpr auto PivotOffsetSpace = 0xd0; // Size: 1, Type: enum class ENiagaraMeshPivotOffsetSpace
			constexpr auto bEnableFrustumCulling = 0xd4; // Size: 1, Type: char
			constexpr auto bEnableCameraDistanceCulling = 0xd4; // Size: 1, Type: char
			constexpr auto MinCameraDistance = 0xd8; // Size: 4, Type: float
			constexpr auto MaxCameraDistance = 0xdc; // Size: 4, Type: float
			constexpr auto RendererVisibility = 0xe0; // Size: 4, Type: uint32_t
			constexpr auto PositionBinding = 0xe8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x140; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VelocityBinding = 0x198; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MeshOrientationBinding = 0x1f0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ScaleBinding = 0x248; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SubImageIndexBinding = 0x2a0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterialBinding = 0x2f8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial1Binding = 0x350; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial2Binding = 0x3a8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial3Binding = 0x400; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialRandomBinding = 0x458; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CustomSortingBinding = 0x4b0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto NormalizedAgeBinding = 0x508; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CameraOffsetBinding = 0x560; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RendererVisibilityTagBinding = 0x5b8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
	}
} 
