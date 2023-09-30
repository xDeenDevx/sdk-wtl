namespace offsets
{
	namespace UNiagaraLightRendererProperties
	{
			constexpr auto bUseInverseSquaredFalloff = 0x80; // Size: 1, Type: char
			constexpr auto bAffectsTranslucency = 0x80; // Size: 1, Type: char
			constexpr auto RadiusScale = 0x84; // Size: 4, Type: float
			constexpr auto ColorAdd = 0x88; // Size: 12, Type: struct FVector
			constexpr auto LightRenderingEnabledBinding = 0x98; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto LightExponentBinding = 0xf0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PositionBinding = 0x148; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x1a0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RadiusBinding = 0x1f8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VolumetricScatteringBinding = 0x250; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
	}
} 
