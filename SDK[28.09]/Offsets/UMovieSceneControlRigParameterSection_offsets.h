namespace offsets
{
	namespace UMovieSceneControlRigParameterSection
	{
			constexpr auto ControlRig = 0x148; // Size: 8, Type: struct UControlRig*
			constexpr auto ControlsMask = 0x150; // Size: 16, Type: struct TArray<bool>
			constexpr auto TransformMask = 0x160; // Size: 4, Type: struct FMovieSceneTransformMask
			constexpr auto bAdditive = 0x164; // Size: 1, Type: bool
			constexpr auto bApplyBoneFilter = 0x165; // Size: 1, Type: bool
			constexpr auto BoneFilter = 0x168; // Size: 16, Type: struct FInputBlendPose
			constexpr auto Weight = 0x178; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto ControlChannelMap = 0x218; // Size: 80, Type: struct TMap<struct FName, struct FChannelMapInfo>
			constexpr auto EnumParameterNamesAndCurves = 0x268; // Size: 16, Type: struct TArray<struct FEnumParameterNameAndCurve>
			constexpr auto IntegerParameterNamesAndCurves = 0x278; // Size: 16, Type: struct TArray<struct FIntegerParameterNameAndCurve>
	}
} 
