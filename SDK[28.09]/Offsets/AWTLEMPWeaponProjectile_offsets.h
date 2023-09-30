namespace offsets
{
	namespace AWTLEMPWeaponProjectile
	{
			constexpr auto m_bActivate = 0x300; // Size: 1, Type: bool
			constexpr auto Explosion = 0x308; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto Emitter = 0x330; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto Radius = 0x358; // Size: 4, Type: float
			constexpr auto MakeDamageToPlaceableStuff = 0x35c; // Size: 1, Type: bool
			constexpr auto MinPlaceableStuffDamagePercent = 0x360; // Size: 4, Type: float
			constexpr auto MaxPlaceableStuffPercent = 0x364; // Size: 4, Type: float
			constexpr auto MinEnergyPercent = 0x368; // Size: 4, Type: float
			constexpr auto MaxEnergyPercent = 0x36c; // Size: 4, Type: float
			constexpr auto StuffDisabledTime = 0x370; // Size: 4, Type: float
			constexpr auto MinShieldDamage = 0x374; // Size: 4, Type: float
			constexpr auto MaxShieldDamage = 0x378; // Size: 4, Type: float
			constexpr auto EquipmentIDOnCharacter = 0x380; // Size: 16, Type: struct TArray<int32_t>
	}
} 
