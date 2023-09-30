namespace offsets
{
	namespace USoundClass
	{
			constexpr auto Properties = 0x28; // Size: 128, Type: struct FSoundClassProperties
			constexpr auto ChildClasses = 0xa8; // Size: 16, Type: struct TArray<struct USoundClass*>
			constexpr auto PassiveSoundMixModifiers = 0xb8; // Size: 16, Type: struct TArray<struct FPassiveSoundMixModifier>
			constexpr auto ParentClass = 0xc8; // Size: 8, Type: struct USoundClass*
	}
} 
