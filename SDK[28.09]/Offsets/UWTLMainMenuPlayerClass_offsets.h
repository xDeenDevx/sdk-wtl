namespace offsets
{
	namespace UWTLMainMenuPlayerClass
	{
			constexpr auto imgSelectedBorder = 0x340; // Size: 8, Type: struct UImage*
			constexpr auto wsSex = 0x348; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto wsFemalePlayerClass = 0x350; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto wsMalePlayerClass = 0x358; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto PlayerClass = 0x3b0; // Size: 1, Type: enum class EWTLCharacterClass
			constexpr auto DefaultClassColor = 0x3b4; // Size: 16, Type: struct FLinearColor
			constexpr auto HoveredClassColor = 0x3c4; // Size: 16, Type: struct FLinearColor
			constexpr auto SelectedClassColor = 0x3d4; // Size: 16, Type: struct FLinearColor
			constexpr auto DescriptionText = 0x3e8; // Size: 24, Type: struct FText
			constexpr auto PlayerClassDescriptionWidgetClass = 0x400; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto FemaleClassFullSizeImage = 0x428; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto MaleClassFullSizeImage = 0x450; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
	}
} 
