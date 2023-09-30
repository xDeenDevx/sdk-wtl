namespace offsets
{
	namespace ABP_SplineToUp_C
	{
			constexpr auto UberGraphFrame = 0x220; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto FMODAudio1 = 0x228; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FMODAudio = 0x230; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto NS_TintacleUp = 0x238; // Size: 8, Type: struct UNiagaraComponent*
			constexpr auto billboard = 0x240; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto CountSpline = 0x248; // Size: 4, Type: int32_t
			constexpr auto DeltaSec = 0x24c; // Size: 4, Type: float
			constexpr auto SplineList = 0x250; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto State = 0x260; // Size: 8, Type: struct FName
			constexpr auto CurrentVector = 0x268; // Size: 12, Type: struct FVector
			constexpr auto HeightStep = 0x274; // Size: 4, Type: float
			constexpr auto CurrentHeight = 0x278; // Size: 4, Type: float
			constexpr auto MaxHeight = 0x27c; // Size: 4, Type: float
			constexpr auto AngularStep = 0x280; // Size: 4, Type: float
			constexpr auto Radius = 0x284; // Size: 4, Type: float
			constexpr auto MinRadius = 0x288; // Size: 4, Type: float
			constexpr auto MaxRadius = 0x28c; // Size: 4, Type: float
			constexpr auto CurrentLenght = 0x290; // Size: 4, Type: float
			constexpr auto OldLenght = 0x294; // Size: 4, Type: float
			constexpr auto MaxLenght = 0x298; // Size: 4, Type: float
			constexpr auto IsDeactivate = 0x29c; // Size: 1, Type: bool
	}
} 
