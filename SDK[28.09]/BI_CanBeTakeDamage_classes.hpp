#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BI_CanBeTakeDamage.BI_CanBeTakeDamage_C
class IBI_CanBeTakeDamage_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBI_CanBeTakeDamage_C* GetDefaultObj();

	void DecrementHealth(float Value);
	void IncrementHealth(float Value);
	void GetName(class FText* Result);
	void GetHealthAlpha(float* Result);
	void CanBeTakeDamage(bool* Result);
	void IsAlive(bool* Result);
	void GetMaxHealth(float* Result);
	void GetCurrentHealth(float* Result);
};

}


