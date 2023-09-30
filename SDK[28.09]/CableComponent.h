/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CableComponent.

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000220 - 0x000228)
class ACableActor : public AActor
{ 
public:
	UCableComponent*                                   CableComponent;                                             // 0x0220   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0090 (0x000470 - 0x000500)
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0468   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0469   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x046A   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0470   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x0498   (0x0008)  
	FVector                                            EndLocation;                                                // 0x04A0   (0x000C)  
	float                                              CableLength;                                                // 0x04AC   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x04B0   (0x0004)  
	float                                              SubstepTime;                                                // 0x04B4   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x04B8   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x04BC   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x04BD   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x04BE   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x04BF   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x04C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x04C1   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x04C4   (0x0004)  
	FVector                                            CableForce;                                                 // 0x04C8   (0x000C)  
	float                                              CableGravityScale;                                          // 0x04D4   (0x0004)  
	float                                              CableWidth;                                                 // 0x04D8   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x04DC   (0x0004)  
	float                                              TileMaterial;                                               // 0x04E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x04E4   (0x001C)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);                                              // [0x11164d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);                                           // [0x11162e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x11160d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	USceneComponent* GetAttachedComponent();                                                                                 // [0x1116240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	AActor* GetAttachedActor();                                                                                              // [0x11162c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

