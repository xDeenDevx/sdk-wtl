#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BI_FortificationDecoration.BI_FortificationDecoration_C
class IBI_FortificationDecoration_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBI_FortificationDecoration_C* GetDefaultObj();

	void OnFactionChanged(enum class EWTLFaction NewFaction);
};

}


