namespace offsets
{
	namespace UNiagaraComponentRendererProperties
	{
			constexpr auto ComponentType = 0x80; // Size: 8, Type: USceneComponent*
			constexpr auto ComponentCountLimit = 0x88; // Size: 4, Type: uint32_t
			constexpr auto EnabledBinding = 0x90; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto bAssignComponentsOnParticleID = 0xe8; // Size: 1, Type: bool
			constexpr auto bOnlyCreateComponentsOnParticleSpawn = 0xe9; // Size: 1, Type: bool
			constexpr auto TemplateComponent = 0xf0; // Size: 8, Type: struct USceneComponent*
			constexpr auto PropertyBindings = 0xf8; // Size: 16, Type: struct TArray<struct FNiagaraComponentPropertyBinding>
	}
} 
