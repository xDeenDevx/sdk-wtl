// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (Native|Public|BlueprintCallable) // @ game+0x300edd0
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Native|Public|BlueprintCallable) // @ game+0x2925ac0
	float GetSimulationTime(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x300eba0
	int32_t GetNumSubsteps(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x300ebe0
	int32_t GetNumKinematicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x300ec70
	int32_t GetNumIterations(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x300ec10
	int32_t GetNumDynamicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x300ec40
	int32_t GetNumCloths(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x300eca0
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x300ecf0
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (Native|Public|BlueprintCallable) // @ game+0x300ecd0
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (Native|Public|BlueprintCallable) // @ game+0x2925aa0
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<struct FVector> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x04)
	int32_t MaxBoneWeights; // 0x7c(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

