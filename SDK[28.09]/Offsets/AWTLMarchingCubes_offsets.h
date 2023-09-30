namespace offsets
{
	namespace AWTLMarchingCubes
	{
			constexpr auto m_ProcMesh = 0x4628; // Size: 8, Type: struct UProceduralMeshComponent*
			constexpr auto Chunks = 0x4640; // Size: 16, Type: struct TArray<struct FWTLChunk>
			constexpr auto pCellSize = 0x4660; // Size: 12, Type: struct FVector
			constexpr auto pChunkSize = 0x466c; // Size: 12, Type: struct FIntVector
			constexpr auto GridSize = 0x4678; // Size: 12, Type: struct FIntVector
			constexpr auto Material = 0x4688; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto m_RateUpdateChunk = 0x4690; // Size: 4, Type: float
			constexpr auto IsDrawDebug = 0x4694; // Size: 1, Type: bool
	}
} 
