namespace offsets
{
	namespace UWBP_HUD_LegendaryMonsterInfo_C
	{
			constexpr auto UberGraphFrame = 0x268; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto imgIconLeft = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto imgIconRight = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto imgProgressBar = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto sbProgressBar = 0x288; // Size: 8, Type: struct USizeBox*
			constexpr auto tbMonsterName = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto DeltaSec = 0x298; // Size: 4, Type: float
			constexpr auto InstigatorComponent = 0x2a0; // Size: 8, Type: struct UBP_LegendaryMonsterComponent_C*
			constexpr auto MaxWidth = 0x2a8; // Size: 4, Type: float
			constexpr auto myMaterialInst = 0x2b0; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto mySkullLMaterialInst = 0x2b8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto mySkullRMaterialInst = 0x2c0; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto DesiredHUDData = 0x2c8; // Size: 64, Type: struct FS_HUD_LMI_Data
			constexpr auto CurrentHUDData = 0x308; // Size: 64, Type: struct FS_HUD_LMI_Data
			constexpr auto IsPropertyChanged = 0x348; // Size: 1, Type: bool
			constexpr auto CurrentInstigatorDistanceSquared = 0x34c; // Size: 4, Type: float
			constexpr auto State = 0x350; // Size: 1, Type: enum class E_State_HUD_LMI
			constexpr auto CurrentAlpha = 0x354; // Size: 4, Type: float
			constexpr auto CurrentValue = 0x358; // Size: 4, Type: float
			constexpr auto DesiredValue = 0x35c; // Size: 4, Type: float
			constexpr auto InitValue = 0x360; // Size: 4, Type: float
	}
} 
