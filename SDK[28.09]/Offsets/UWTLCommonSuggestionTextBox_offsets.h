namespace offsets
{
	namespace UWTLCommonSuggestionTextBox
	{
			constexpr auto TextBox = 0x260; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto MenuAnchor = 0x268; // Size: 8, Type: struct UMenuAnchor*
			constexpr auto m_SuggestionList = 0x278; // Size: 8, Type: struct UWTLCommonSuggestionList*
			constexpr auto SuggestionListWidgetClass = 0x280; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto VisibleSuggestionsWithoutScroll = 0x2a8; // Size: 4, Type: int32_t
			constexpr auto SuggestionTextHeight = 0x2ac; // Size: 4, Type: float
			constexpr auto bIsSuggestAccountCharacters = 0x2b0; // Size: 1, Type: bool
			constexpr auto bIsSuggestFriends = 0x2b1; // Size: 1, Type: bool
			constexpr auto OverrideFont = 0x2b2; // Size: 1, Type: bool
			constexpr auto Font = 0x2b8; // Size: 88, Type: struct FSlateFontInfo
	}
} 
