namespace offsets
{
	namespace UWTLPDASkillInfo
	{
			constexpr auto hbSkillID = 0x260; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbSkillID = 0x268; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbName = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbType = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsInfo = 0x280; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto hbRequiredLevel = 0x288; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbRequiredLevel = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto hbPointsToLearn = 0x298; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbPointsToLearn = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto vbDependencies = 0x2a8; // Size: 8, Type: struct UVerticalBox*
			constexpr auto hbMustHaveSkills = 0x2b0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto hbMustHaveSkillsDependencies = 0x2b8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto hbMustHaveOneOfSkills = 0x2c0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto hbMustHaveOneOfSkillsDependencies = 0x2c8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto hbMustNotHaveSkills = 0x2d0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto hbMustNotHaveSkillsDependencies = 0x2d8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto tbDescription = 0x2e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto SkillDependenceWidgetClass = 0x2e8; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
