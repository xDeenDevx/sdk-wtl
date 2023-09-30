namespace offsets
{
	namespace UWTLHUDGodConsoleWindowScripts
	{
			constexpr auto cpToolBar = 0x260; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto wsToolBar = 0x268; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto btnBack = 0x270; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto tbCurrentEditableScript = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto tbScriptsCount = 0x280; // Size: 8, Type: struct UTextBlock*
			constexpr auto wsScripts = 0x288; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto sbScripts = 0x290; // Size: 8, Type: struct UScrollBox*
			constexpr auto etbScriptText = 0x298; // Size: 8, Type: struct UMultiLineEditableTextBox*
			constexpr auto btnExecute = 0x2a0; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto btnSave = 0x2a8; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto vbManageButtons = 0x2b0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto btnCreate = 0x2b8; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto btnEdit = 0x2c0; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto btnRename = 0x2c8; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto etbNewScriptFileName = 0x2d0; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto btnDelete = 0x2d8; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto btnDeleteAll = 0x2e0; // Size: 8, Type: struct UWTLCommonTextButton*
			constexpr auto m_ScriptsWidgets = 0x2f8; // Size: 16, Type: struct TArray<struct UWTLHUDGodConsoleWindowScript*>
			constexpr auto m_SelectedScriptWidget = 0x318; // Size: 8, Type: struct UWTLHUDGodConsoleWindowScript*
			constexpr auto ScriptWidgetClass = 0x378; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
