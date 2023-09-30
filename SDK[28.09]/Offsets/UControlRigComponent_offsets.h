namespace offsets
{
	namespace UControlRigComponent
	{
			constexpr auto ControlRigClass = 0x440; // Size: 8, Type: UControlRig*
			constexpr auto OnPostInitializeDelegate = 0x448; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPreSetupDelegate = 0x458; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPostSetupDelegate = 0x468; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPreUpdateDelegate = 0x478; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPostUpdateDelegate = 0x488; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MappedElements = 0x498; // Size: 16, Type: struct TArray<struct FControlRigComponentMappedElement>
			constexpr auto bResetTransformBeforeTick = 0x4a8; // Size: 1, Type: bool
			constexpr auto bResetInitialsBeforeSetup = 0x4a9; // Size: 1, Type: bool
			constexpr auto bUpdateRigOnTick = 0x4aa; // Size: 1, Type: bool
			constexpr auto bUpdateInEditor = 0x4ab; // Size: 1, Type: bool
			constexpr auto bDrawBones = 0x4ac; // Size: 1, Type: bool
			constexpr auto ControlRig = 0x4b0; // Size: 8, Type: struct UControlRig*
	}
} 
