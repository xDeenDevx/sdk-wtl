namespace offsets
{
	namespace USplineComponent
	{
			constexpr auto SplineCurves = 0x440; // Size: 112, Type: struct FSplineCurves
			constexpr auto SplineInfo = 0x4b0; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineRotInfo = 0x4c8; // Size: 24, Type: struct FInterpCurveQuat
			constexpr auto SplineScaleInfo = 0x4e0; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineReparamTable = 0x4f8; // Size: 24, Type: struct FInterpCurveFloat
			constexpr auto bAllowSplineEditingPerInstance = 0x510; // Size: 1, Type: bool
			constexpr auto ReparamStepsPerSegment = 0x514; // Size: 4, Type: int32_t
			constexpr auto Duration = 0x518; // Size: 4, Type: float
			constexpr auto bStationaryEndpoints = 0x51c; // Size: 1, Type: bool
			constexpr auto bSplineHasBeenEdited = 0x51d; // Size: 1, Type: bool
			constexpr auto bModifiedByConstructionScript = 0x51e; // Size: 1, Type: bool
			constexpr auto bInputSplinePointsToConstructionScript = 0x51f; // Size: 1, Type: bool
			constexpr auto bDrawDebug = 0x520; // Size: 1, Type: bool
			constexpr auto bClosedLoop = 0x521; // Size: 1, Type: bool
			constexpr auto bLoopPositionOverride = 0x522; // Size: 1, Type: bool
			constexpr auto LoopPosition = 0x524; // Size: 4, Type: float
			constexpr auto DefaultUpVector = 0x528; // Size: 12, Type: struct FVector
	}
} 
