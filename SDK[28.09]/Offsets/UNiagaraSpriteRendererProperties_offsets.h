namespace offsets
{
	namespace UNiagaraSpriteRendererProperties
	{
			constexpr auto Material = 0x80; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto SourceMode = 0x88; // Size: 1, Type: enum class ENiagaraRendererSourceDataMode
			constexpr auto MaterialUserParamBinding = 0x90; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto Alignment = 0xb0; // Size: 1, Type: enum class ENiagaraSpriteAlignment
			constexpr auto FacingMode = 0xb1; // Size: 1, Type: enum class ENiagaraSpriteFacingMode
			constexpr auto PivotInUVSpace = 0xb4; // Size: 8, Type: struct FVector2D
			constexpr auto SortMode = 0xbc; // Size: 1, Type: enum class ENiagaraSortMode
			constexpr auto SubImageSize = 0xc0; // Size: 8, Type: struct FVector2D
			constexpr auto bSubImageBlend = 0xc8; // Size: 1, Type: char
			constexpr auto bRemoveHMDRollInVR = 0xc8; // Size: 1, Type: char
			constexpr auto bSortOnlyWhenTranslucent = 0xc8; // Size: 1, Type: char
			constexpr auto bGpuLowLatencyTranslucency = 0xc8; // Size: 1, Type: char
			constexpr auto MinFacingCameraBlendDistance = 0xcc; // Size: 4, Type: float
			constexpr auto MaxFacingCameraBlendDistance = 0xd0; // Size: 4, Type: float
			constexpr auto bEnableCameraDistanceCulling = 0xd4; // Size: 1, Type: char
			constexpr auto MinCameraDistance = 0xd8; // Size: 4, Type: float
			constexpr auto MaxCameraDistance = 0xdc; // Size: 4, Type: float
			constexpr auto RendererVisibility = 0xe0; // Size: 4, Type: uint32_t
			constexpr auto PositionBinding = 0xe8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x140; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VelocityBinding = 0x198; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteRotationBinding = 0x1f0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteSizeBinding = 0x248; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteFacingBinding = 0x2a0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteAlignmentBinding = 0x2f8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SubImageIndexBinding = 0x350; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterialBinding = 0x3a8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial1Binding = 0x400; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial2Binding = 0x458; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial3Binding = 0x4b0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CameraOffsetBinding = 0x508; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto UVScaleBinding = 0x560; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialRandomBinding = 0x5b8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CustomSortingBinding = 0x610; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto NormalizedAgeBinding = 0x668; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RendererVisibilityTagBinding = 0x6c0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialParameterBindings = 0x718; // Size: 16, Type: struct TArray<struct FNiagaraMaterialAttributeBinding>
	}
} 
