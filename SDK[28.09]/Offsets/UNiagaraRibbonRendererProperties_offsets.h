namespace offsets
{
	namespace UNiagaraRibbonRendererProperties
	{
			constexpr auto Material = 0x80; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaterialUserParamBinding = 0x88; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto FacingMode = 0xa8; // Size: 1, Type: enum class ENiagaraRibbonFacingMode
			constexpr auto UV0Settings = 0xac; // Size: 36, Type: struct FNiagaraRibbonUVSettings
			constexpr auto UV1Settings = 0xd0; // Size: 36, Type: struct FNiagaraRibbonUVSettings
			constexpr auto DrawDirection = 0xf4; // Size: 1, Type: enum class ENiagaraRibbonDrawDirection
			constexpr auto CurveTension = 0xf8; // Size: 4, Type: float
			constexpr auto TessellationMode = 0xfc; // Size: 1, Type: enum class ENiagaraRibbonTessellationMode
			constexpr auto TessellationFactor = 0x100; // Size: 4, Type: int32_t
			constexpr auto bUseConstantFactor = 0x104; // Size: 1, Type: bool
			constexpr auto TessellationAngle = 0x108; // Size: 4, Type: float
			constexpr auto bScreenSpaceTessellation = 0x10c; // Size: 1, Type: bool
			constexpr auto PositionBinding = 0x110; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x168; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VelocityBinding = 0x1c0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto NormalizedAgeBinding = 0x218; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonTwistBinding = 0x270; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonWidthBinding = 0x2c8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonFacingBinding = 0x320; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonIdBinding = 0x378; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonLinkOrderBinding = 0x3d0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialRandomBinding = 0x428; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterialBinding = 0x480; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial1Binding = 0x4d8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial2Binding = 0x530; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial3Binding = 0x588; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto U0OverrideBinding = 0x5e0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto V0RangeOverrideBinding = 0x638; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto U1OverrideBinding = 0x690; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto V1RangeOverrideBinding = 0x6e8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
	}
} 
