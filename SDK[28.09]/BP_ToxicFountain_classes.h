// BlueprintGeneratedClass BP_ToxicFountain.BP_ToxicFountain_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_ToxicFountain_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x228(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float SoundVolume_Volume_08451F1641F62CE8F88A9F8A382870D0; // 0x240(0x04)
	enum class ETimelineDirection SoundVolume__Direction_08451F1641F62CE8F88A9F8A382870D0; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* SoundVolume; // 0x248(0x08)
	float TimeStart; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct UParticleSystemComponent* Emitter; // 0x258(0x08)
	struct UParticleSystemComponent* Emitter2; // 0x260(0x08)

	void SoundVolume__FinishedFunc(); // Function BP_ToxicFountain.BP_ToxicFountain_C.SoundVolume__FinishedFunc // (BlueprintEvent) // @ game+0x1ad0090
	void SoundVolume__UpdateFunc(); // Function BP_ToxicFountain.BP_ToxicFountain_C.SoundVolume__UpdateFunc // (BlueprintEvent) // @ game+0x1ad0090
	void ReceiveBeginPlay(); // Function BP_ToxicFountain.BP_ToxicFountain_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ad0090
	void ReceiveTick(float DeltaSeconds); // Function BP_ToxicFountain.BP_ToxicFountain_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ad0090
	void ExecuteUbergraph_BP_ToxicFountain(int32_t EntryPoint); // Function BP_ToxicFountain.BP_ToxicFountain_C.ExecuteUbergraph_BP_ToxicFountain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ad0090
};

