namespace offsets
{
	namespace AWTLSteelTarget
	{
			constexpr auto m_IsActivate = 0x220; // Size: 1, Type: bool
			constexpr auto m_RecoveryCooldown = 0x22c; // Size: 4, Type: float
			constexpr auto m_FallImpulseMultiplier = 0x230; // Size: 4, Type: float
			constexpr auto m_RecoverySpeed = 0x234; // Size: 4, Type: float
			constexpr auto m_MaximumImpulseValue = 0x238; // Size: 4, Type: float
			constexpr auto MinRecoveryCooldownTime = 0x23c; // Size: 4, Type: float
			constexpr auto MaxRecoveryCooldownTime = 0x240; // Size: 4, Type: float
			constexpr auto RecoverCurve = 0x248; // Size: 8, Type: struct UCurveFloat*
			constexpr auto FallCurve = 0x250; // Size: 8, Type: struct UCurveFloat*
			constexpr auto StandMesh = 0x298; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto TargetMesh = 0x2a0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Type = 0x2a8; // Size: 1, Type: enum class FSteelTargetType
			constexpr auto HitsToFall = 0x2ac; // Size: 4, Type: int32_t
			constexpr auto RiseDelayMin = 0x2b0; // Size: 4, Type: float
			constexpr auto RiseDelayMax = 0x2b4; // Size: 4, Type: float
			constexpr auto FallSound = 0x2b8; // Size: 40, Type: struct TSoftObjectPtr<USoundBase>
			constexpr auto RiseSound = 0x2e0; // Size: 40, Type: struct TSoftObjectPtr<USoundBase>
	}
} 
