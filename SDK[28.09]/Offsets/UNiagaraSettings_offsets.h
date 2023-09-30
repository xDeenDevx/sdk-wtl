namespace offsets
{
	namespace UNiagaraSettings
	{
			constexpr auto DefaultEffectType = 0x38; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto QualityLevels = 0x50; // Size: 16, Type: struct TArray<struct FText>
			constexpr auto ComponentRendererWarningsPerClass = 0x60; // Size: 80, Type: struct TMap<struct FString, struct FText>
			constexpr auto DefaultRenderTargetFormat = 0xb0; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto DefaultGridFormat = 0xb1; // Size: 1, Type: enum class ENiagaraGpuBufferFormat
			constexpr auto DefaultEffectTypePtr = 0xb8; // Size: 8, Type: struct UNiagaraEffectType*
	}
} 
