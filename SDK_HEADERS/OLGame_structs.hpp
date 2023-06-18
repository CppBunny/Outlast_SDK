/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OLGame_structs.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct OLGame.OLPawn.GameplayParams
// 0x0038
struct FGameplayParams
{
	uint8_t                                            RMM;                                           // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            CameraMode;                                    // 0x0001 (0x0001) [0x0000000000000000]               
	float                                              MinYaw;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxYaw;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MinPitchWS;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MaxPitchWS;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MinPitchCS;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MaxPitchCS;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              ViewLimitsApproachCoeff;                       // 0x001C (0x0004) [0x0000000000000000]               
	float                                              FOVOverride;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           DisableCollisions : 1;                         // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IgnorePawnCollisions : 1;                      // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CollisionHeight;                               // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              CollisionRadius;                               // 0x002C (0x0004) [0x0000000000000000]               
	uint8_t                                            Physics;                                       // 0x0030 (0x0001) [0x0000000000000000]               
	uint32_t                                           BothHandsNeeded : 1;                           // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLPawn.SpecialMoveParameters
// 0x0058
struct FSpecialMoveParameters
{
	struct FGameplayParams                             GP;                                            // 0x0000 (0x0038) [0x0000000000000000]               
	uint8_t                                            NextLocomotionMode;                            // 0x0038 (0x0001) [0x0000000000000000]               
	struct FName                                       AnimName;                                      // 0x003C (0x0008) [0x0000000000000000]               
	uint32_t                                           bNoAnim : 1;                                   // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AnimBlendInTime;                               // 0x0048 (0x0004) [0x0000000000000000]               
	uint32_t                                           bExitOnBlendOut : 1;                           // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayAnimWhenPositioned : 1;                   // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bTargettedYawSmoothing : 1;                    // 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAlwaysInterruptible : 1;                      // 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bInterruptibleAfterTrigger : 1;                // 0x004C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCollisionChangeOnTrigger : 1;                 // 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           CameraInputEnabled : 1;                        // 0x004C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           PlayerInputEnabled : 1;                        // 0x004C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           KeepLocomotionMode : 1;                        // 0x004C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           AdjustPosition : 1;                            // 0x004C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           AdjustOrientation : 1;                         // 0x004C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           UseAnimTimeForPositionAdjustment : 1;          // 0x004C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bUsePawnVelocityForPositionning : 1;           // 0x004C (0x0004) [0x0000000000000000] [0x00001000] 
	float                                              PositionningLinearVelocity;                    // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              PositionningAngularVelocity;                   // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPawn.AdjustPositionData
// 0x0038
struct FAdjustPositionData
{
	uint32_t                                           Active : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Done : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     PositionError;                                 // 0x0004 (0x000C) [0x0000000000000000]               
	float                                              HeadingError;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            TargetType;                                    // 0x0014 (0x0001) [0x0000000000000000]               
	struct FVector                                     OriginalPosition;                              // 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    OriginalRotation;                              // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              CorrectionTime;                                // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              ElapsedTime;                                   // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPawn.ProceduralAnimData
// 0x001C
struct FProceduralAnimData
{
	struct FVector                                     PositionDelta;                                 // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              HeadingDelta;                                  // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bWaitForNotify : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TotalTime;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ElapsedTime;                                   // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPawn.TurningData
// 0x0028
struct FTurningData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartYaw;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StartSpeed;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              InitialDeltaYaw;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              SmoothedTargetYaw;                             // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     FocalPoint;                                    // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLAIContextualVOAsset.VOMapping
// 0x0014
struct FVOMapping
{
	uint8_t                                            VOContext;                                     // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<class UAkEvent*>                            Events;                                        // 0x0004 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyModifiers
// 0x0014
struct FEnemyModifiers
{
	uint32_t                                           bShouldAttack : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseKillingBlow : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAlwaysLookAtPlayer : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bDisableRepulsion : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bSpawnWithNavMeshObstacle : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bUseForMusic : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bForceUseForStressBreath : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bDisableKnockbackFromPlayer : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bUseGroup : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	class UStaticMesh*                                 WeaponMeshToUse;                               // 0x0004 (0x0008) [0x0000000020000000]  CPF_Deprecated)
	uint8_t                                            WeaponToUse;                                   // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bInterruptVOOnChase : 1;                       // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAttackOnProximity : 1;                        // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct OLGame.OLEnemyPawn.NanoSwarmEmitter
// 0x0010
struct FNanoSwarmEmitter
{
	class UParticleSystemComponent*                    Emitter;                                       // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BoneName;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.VOInstance
// 0x0014
struct FVOInstance
{
	TArray<uint32_t>                                   EventsPlayed;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumUnplayedEvents;                             // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.DelayedVO
// 0x0005
struct FDelayedVO
{
	float                                              TimeRemaining;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            VOContext;                                     // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.SpeedValues
// 0x000C
struct FSpeedValues
{
	float                                              PatrolSpeed;                                   // 0x0000 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigateSpeed;                              // 0x0004 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ChaseSpeed;                                    // 0x0008 (0x0004) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct OLGame.OLEnemyPawn.VisionCone
// 0x0010
struct FVisionCone
{
	float                                              Distance;                                      // 0x0000 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              PeekingDistance;                               // 0x0004 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HorizontalAngle;                               // 0x0008 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              VerticalAngle;                                 // 0x000C (0x0004) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct OLGame.OLEnemyPawn.VisionParameters
// 0x0030
struct FVisionParameters
{
	float                                              WideConeReactionTime;                          // 0x0000 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LoseTargetTime;                                // 0x0004 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FVisionCone                                 NarrowCone;                                    // 0x0008 (0x0010) [0x0000000000004000] (CPF_Config)  
	struct FVisionCone                                 WideCone;                                      // 0x0018 (0x0010) [0x0000000000004000] (CPF_Config)  
	float                                              CloseDistance;                                 // 0x0028 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CrouchMultiplier;                              // 0x002C (0x0004) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct OLGame.OLEnemyPawn.WeaponTypeData
// 0x0009
struct FWeaponTypeData
{
	class UStaticMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.ActorFactoryOLAI.ShaderValues
// 0x0014
struct FShaderValues
{
	uint32_t                                           bOverride_UniformColor : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                UniformColor;                                  // 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLWaitPointComponent.WaitPoint
// 0x0024
struct FWaitPoint
{
	struct FVector                                     Offset;                                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              ForwardYaw;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bForReversed : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsValid : 1;                                  // 0x0010 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FVector                                     Point;                                         // 0x0014 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bInUse : 1;                                    // 0x0020 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct OLGame.OLAnimCycleBreaker.CycleBreaker
// 0x0044
struct FCycleBreaker
{
	float                                              MinWeight;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxWeight;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPlayStartToEnd : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MinDuration;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDuration;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinRate;                                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRate;                                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInSpeed;                                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutSpeed;                                 // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Probability;                                   // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LayerProbability;                              // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UClass*>                              SpecificClasses;                               // 0x002C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CurrentWeight;                                 // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetWeight;                                  // 0x0040 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLHero.NVGlitchData
// 0x001C
struct FNVGlitchData
{
	uint32_t                                           bGlitching : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentLevel;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              NextGlitchTime;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            GlitchType;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              TargetLevel;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.LocomotionModeParameters
// 0x0040
struct FLocomotionModeParameters
{
	struct FGameplayParams                             GP;                                            // 0x0000 (0x0038) [0x0000000000000000]               
	float                                              NeckOffsetSide;                                // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              NeckOffsetFwd;                                 // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.AIPositionPoint
// 0x002C
struct FAIPositionPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     LocationOnNavMesh;                             // 0x000C (0x000C) [0x0000000000000000]               
	TArray<class AOLEnemyPawn*>                        PawnsOccupying;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bValid : 1;                                    // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLHero.AIPositionPawnInfo
// 0x0010
struct FAIPositionPawnInfo
{
	class AOLEnemyPawn*                                Enemy;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PointIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TimeToNextChange;                              // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CameraParameters
// 0x0018
struct FCameraParameters
{
	float                                              MinYaw;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxYaw;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MinPitchWS;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxPitchWS;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MinPitchCS;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MaxPitchCS;                                    // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.AttachmentData
// 0x0060
struct FAttachmentData
{
	class UPrimitiveComponent*                         AttachedComp;                                  // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bHideWhenDone : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     PositionOffset;                                // 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotationOffset;                                // 0x0024 (0x000C) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAttached : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              StartTimestamp;                                // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     BlendStartPos;                                 // 0x0038 (0x000C) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0xC];                               		// 0x0044 (0x000C) MISSED OFFSET
	struct FQuat                                       BlendStartRot;                                 // 0x0050 (0x0010) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CornerPeekData
// 0x006C
struct FCornerPeekData
{
	class AOLCornerMarker*                             CornerMarker;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            PeekPosition;                                  // 0x0008 (0x0001) [0x0000000000000000]               
	struct FVector                                     CornerLocation;                                // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     FwdDir;                                        // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     SideDir;                                       // 0x0024 (0x000C) [0x0000000000000000]               
	uint32_t                                           bRoundedCorner : 1;                            // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              IKStrength;                                    // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              LastInterpActivatedTime;                       // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              LastDisconnectTime;                            // 0x003C (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisconnecting : 1;                            // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AnchorPos;                                     // 0x0044 (0x000C) [0x0000000000000000]               
	struct FQuat                                       AnchorRot;                                     // 0x0050 (0x0010) [0x0000000000000000]               
	struct FVector                                     JointTargetPos;                                // 0x0060 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.HandIKData
// 0x0024
struct FHandIKData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            IKTarget;                                      // 0x0004 (0x0001) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FadeInTime;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              FadeOutTime;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     EffectorOffset;                                // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.InvestigationPoint
// 0x001C
struct FInvestigationPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	class AActor*                                      InteractiveActor;                              // 0x000C (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0014 (0x0001) [0x0000000000000000]               
	uint32_t                                           bOccupied : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLBot.Disturbance
// 0x0010
struct FDisturbance
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              TimeSinceUpdate;                               // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.AnimationData
// 0x003C
struct FAnimationData
{
	struct FName                                       AnimationName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bLoop : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOnWaypoint : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              EndTime;                                       // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bAlign : 1;                                    // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AlignLocation;                                 // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     AlignRotation;                                 // 0x0030 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.MovementData
// 0x0029
struct FMovementData
{
	class AActor*                                      DestinationActor;                              // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     DestinationPoint;                              // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     ValidatedMovePoint;                            // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              DestinationBuffer;                             // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsDynamic : 1;                                // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsInvestigation : 1;                          // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFocusOnActor : 1;                             // 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            Type;                                          // 0x0028 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.DelayedNoise
// 0x0018
struct FDelayedNoise
{
	struct FName                                       NoiseType;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              TimeToNoise;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBTBehavior.BehaviorState
// 0x0008
struct FBehaviorState
{
	class UOLBTTask*                                   Task;                                          // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBTCompositeNode.OLBTNodeChild
// 0x0014
struct FOLBTNodeChild
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UOLBTNode*                                   Node;                                          // 0x0008 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	int32_t                                            DrawY;                                         // 0x0010 (0x0004) [0x0000000800000000]               
};

// ScriptStruct OLGame.OLBTPlayAnimNode.AnimData
// 0x0020
struct FAnimData
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartTime;                                     // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndTime;                                       // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudState
// 0x0018
struct FCamcorderHudState
{
	int32_t                                            ZoomFactor;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CamcorderMode;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            BatteryLeft;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            RecStatucState;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MainOpacityState;                              // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            BatteryCountState;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudObjects
// 0x0038
struct FCamcorderHudObjects
{
	class UGFxObject*                                  ZoomTrackerMC;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  NVStatusMC;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  BatteryBarMC;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  RecStatucMC;                                   // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  MainOpacity;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  BatteryCount;                                  // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  RecordingTimeLabel;                            // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCheatManager.DebugTrajectoryPoint
// 0x0018
struct FDebugTrajectoryPoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Speed;                                         // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            PointType;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEngine.CheckpointTime
// 0x0010
struct FCheckpointTime
{
	int32_t                                            SecondsSinceMidnight;                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Day;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Month;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Year;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLDoor.DoorShakeData
// 0x0040
struct FDoorShakeData
{
	float                                              Rate;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RateVariation;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Intensity;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IntensityVariation;                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TotalDuration;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AmplitudeYaw;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AmplitudeTrans;                                // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FrequencyYaw;                                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FrequencyTrans;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShakeDuration;                                 // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeExp;                                       // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bShakeCamera : 1;                              // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bActive : 1;                                   // 0x002C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	float                                              GlobalStartedTime;                             // 0x0030 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ShakeStartedTime;                              // 0x0034 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NextShakeStartTime;                            // 0x0038 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              OriginalTranslationX;                          // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLDoor.DoorSoundEvents
// 0x0030
struct FDoorSoundEvents
{
	class UAkEvent*                                    SndLocked;                                     // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndPush;                                       // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndOpening;                                    // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndClosing;                                    // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndSlowClose;                                  // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndBash;                                       // 0x0028 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OLGame.OLDoor.DoorMeshDirData
// 0x0068
struct FDoorMeshDirData
{
	class UStaticMesh*                                 MainMesh;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               ForwardBreakingMesh;                           // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    ForwardBreakingAnimSet;                        // 0x0010 (0x0008) [0x0000000000000000]               
	struct FName                                       ForwardBreakingAnimation;                      // 0x0018 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               ForwardBrokenMesh;                             // 0x0020 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    ForwardBrokenAnimSet;                          // 0x0028 (0x0008) [0x0000000000000000]               
	struct FName                                       ForwardBrokenAnimation;                        // 0x0030 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               BackwardBreakingMesh;                          // 0x0038 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    BackwardBreakingAnimSet;                       // 0x0040 (0x0008) [0x0000000000000000]               
	struct FName                                       BackwardBreakingAnimation;                     // 0x0048 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               BackwardBrokenMesh;                            // 0x0050 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    BackwardBrokenAnimSet;                         // 0x0058 (0x0008) [0x0000000000000000]               
	struct FName                                       BackwardBrokenAnimation;                       // 0x0060 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLDoor.DoorMeshTypeData
// 0x00E8
struct FDoorMeshTypeData
{
	struct FDoorMeshDirData                            NormalData;                                    // 0x0000 (0x0068) [0x0000000000000000]               
	struct FDoorMeshDirData                            ReversedData;                                  // 0x0068 (0x0068) [0x0000000000000000]               
	TArray<class UMaterialInstance*>                   Materials;                                     // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            DoorMaterialForSound;                          // 0x00E0 (0x0001) [0x0000000000000000]               
	float                                              OcclusionFactor;                               // 0x00E4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyNanoCloud.MorphingTransition
// 0x0010
struct FMorphingTransition
{
	float                                              PreValue;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              PostValue;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              EndTime;                                       // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OLGame.OLEngine.SaveFileInfo
// 0x0028
struct FSaveFileInfo
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       CheckpointName;                                // 0x0010 (0x0008) [0x0000000000000000]               
	struct FCheckpointTime                             Time;                                          // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFXManager.BlurData
// 0x001C
struct FBlurData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Amount;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Desaturation;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFXManager.CameraGlitchData
// 0x0015
struct FCameraGlitchData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartedTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextGlitchDelay;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CurrentGlitchEffect;                           // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            GlitchType;                                    // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFXManager.MovieEffectData
// 0x0030
struct FMovieEffectData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartedTime;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Intensity;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class UTextureMovie*                               Movie;                                         // 0x000C (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SndEventStop;                                  // 0x0014 (0x0008) [0x0000000000000000]               
	TArray<struct FVector2D>                           Anim;                                          // 0x001C (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              Duration;                                      // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLGameStateList.OLGameState
// 0x0014
struct FOLGameState
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AutoActivateOnCheckpointReached;               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPersistAfterDeath : 1;                        // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bActivated : 1;                                // 0x0010 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct OLGame.OLHeroCamera.CameraWaveData
// 0x000C
struct FCameraWaveData
{
	float                                              Amplitude;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartPhase;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHeroCamera.CameraShakeData
// 0x007C
struct FCameraShakeData
{
	float                                              Intensity;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInTime;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPositionless : 1;                             // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FCameraWaveData                             YawWaveA;                                      // 0x0014 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             YawWaveB;                                      // 0x0020 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             PitchWaveA;                                    // 0x002C (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             PitchWaveB;                                    // 0x0038 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             RollWaveA;                                     // 0x0044 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             RollWaveB;                                     // 0x0050 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	uint32_t                                           bActive : 1;                                   // 0x005C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              StartedTime;                                   // 0x0060 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     SourceLocation;                                // 0x0064 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              YawOffset;                                     // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PitchOffset;                                   // 0x0074 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RollOffset;                                    // 0x0078 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLHeroCamera.TargettedSmoothingData
// 0x0014
struct FTargettedSmoothingData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TargetAngleWS;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartAngleWS;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHeroCamera.CamView
// 0x0018
struct FCamView
{
	struct FVector                                     Loc;                                           // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Yaw;                                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Roll;                                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHeroCamera.SmoothingData
// 0x0024
struct FSmoothingData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCamView                                    ViewWS;                                        // 0x0004 (0x0018) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x001C (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHeroCamera.ViewLimits
// 0x0010
struct FViewLimits
{
	float                                              MinYaw;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxYaw;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MinPitch;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxPitch;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHUD.SubtitleData
// 0x002C
struct FSubtitleData
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      Speaker;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEvent;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              EffectiveDistance;                             // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              TimeFired;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUseAsImportant : 1;                           // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOccluded : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct OLGame.OLHUD.GenericMessage
// 0x0015
struct FGenericMessage
{
	class FString                                      MessageText;                                   // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              RemainingTime;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            MessageType;                                   // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLMainHud.MainHudState
// 0x0004
struct FMainHudState
{
	uint32_t                                           bRecordingNotificationIconVisible : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bObjectiveNotificationIconVisible : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCheckpointNotificationIconVisible : 1;        // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDocumentNotificationIconVisible : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct OLGame.OLMainHud.MainHudObjects
// 0x0010
struct FMainHudObjects
{
	class UGFxObject*                                  NotificationIcons;                             // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  SavingMessage;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLNavigationHandle.MovePoint
// 0x001C
struct FMovePoint
{
	struct FVector                                     Destination;                                   // 0x0000 (0x000C) [0x0000000000000000]               
	TArray<struct FPointer>                            RelevantEdges;                                 // 0x000C (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OLGame.OLPlayerController.DeprecatedCheckpointRecord
// 0x0084
struct FDeprecatedCheckpointRecord
{
	int32_t                                            NumBatteries;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       CurrentObjective;                              // 0x0004 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               CompletedObjectives;                           // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               CompletedRecordingMoments;                     // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                        // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               ActivatedGameState;                            // 0x003C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               CollectedDocuments;                            // 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               UnreadDocuments;                               // 0x005C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             CollectedBatteries;                            // 0x006C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bBatteryTutorialComplete : 1;                  // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClimbUpTutorialComplete : 1;                  // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDocumentTutorialComplete : 1;                 // 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFoundBySoldierWhileHidden : 1;                // 0x007C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bFoundBySurgeonWhileHidden : 1;                // 0x007C (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              RecordingTimeSeconds;                          // 0x0080 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPlayerController.DigitalInputs
// 0x0004
struct FDigitalInputs
{
	uint32_t                                           bPerformedUseAction : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPressedUseButton : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bReleasedUseButton : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPressedToggleCamcorder : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bPressedToggleNightVision : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bPressedZoomIn : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bPressedZoomOut : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bPressedJump : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bPressedReloadBatteries : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bStartedActiveZoom : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
};

// ScriptStruct OLGame.OLPlayerController.CheckpointRecord
// 0x0090
struct AOLPlayerController_FCheckpointRecord
{
	int32_t                                            CheckpointRecordVersion;                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBatteries;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       CurrentObjective;                              // 0x0008 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               CompletedObjectives;                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               CompletedRecordingMoments;                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                        // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               ActivatedGameState;                            // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               CollectedDocuments;                            // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               UnreadDocuments;                               // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             CollectedBatteries;                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bBatteryTutorialComplete : 1;                  // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClimbUpTutorialComplete : 1;                  // 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDocumentTutorialComplete : 1;                 // 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFoundBySoldierWhileHidden : 1;                // 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bFoundBySurgeonWhileHidden : 1;                // 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              RecordingTimeSeconds;                          // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            DifficultyMode;                                // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              BatteryEnergy;                                 // 0x008C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLTypes.StruggleConfig
// 0x007C
struct FStruggleConfig
{
	struct FName                                       InitIdleAnimEnemy;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EntryAnimPlayer;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EntryAnimEnemy;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       CycleAnimPlayer;                               // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       CycleAnimEnemy;                                // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ExitAnimPlayer;                                // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ExitAnimEnemy;                                 // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       KilledAnimPlayer;                              // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       KillAnimEnemy;                                 // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              EntryPlayerBlendInTime;                        // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExitPlayerBlendOutTime;                        // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CycleTime;                                     // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoFail : 1;                                   // 0x0054 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MinRate;                                       // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRateStart;                                  // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRateEnd;                                    // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SuccessPctForMinRate;                          // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SuccessPctForMaxRate;                          // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UAnimSet*>                            HeroAnimSets;                                  // 0x006C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.StruggleData
// 0x00CC
struct FStruggleData
{
	class UOLSeqAct_Struggle*                          StruggleAct;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class ASkeletalMeshActor*                          Enemy;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     RefLocation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     RefDirection;                                  // 0x001C (0x000C) [0x0000000000000000]               
	struct FStruggleConfig                             Config;                                        // 0x0028 (0x007C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOLAnimEnemyStruggle*                        EnemyAnimNode;                                 // 0x00A4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActiveStrugging : 1;                          // 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSucceeded : 1;                                // 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CycleStartedTime;                              // 0x00B0 (0x0004) [0x0000000000000000]               
	float                                              NbShakes;                                      // 0x00B4 (0x0004) [0x0000000000000000]               
	uint8_t                                            CurrentInputDirection;                         // 0x00B8 (0x0001) [0x0000000000000000]               
	float                                              TotalDeltas;                                   // 0x00BC (0x0004) [0x0000000000000000]               
	float                                              LastMouseX;                                    // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              SmoothedDirection;                             // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              SmoothedAnimPlayRate;                          // 0x00C8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPlayerController.TouchZoomData
// 0x0014
struct FTouchZoomData
{
	float                                              bActive;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              SmoothedPosition;                              // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            CurrentDirection;                              // 0x0008 (0x0001) [0x0000000000000000]               
	float                                              LastPosition;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastInputTime;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLProfileSettings.ScreenResolutionInfo
// 0x0008
struct FScreenResolutionInfo
{
	int32_t                                            Width;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSeqAct_AnimControl.AnimParams
// 0x0014
struct FAnimParams
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLooping : 1;                                  // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLSoundEmitter.SoundEnvVolumeData
// 0x001C
struct FSoundEnvVolumeData
{
	class AOLSoundEnvironmentVolume*                   SoundEnvVolume;                                // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bActive : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFadeFromBorder : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     BorderPoint;                                   // 0x000C (0x000C) [0x0000000000000000]               
	float                                              LastActiveEnvContrib;                          // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSoundEmitter.AuxBusInfo
// 0x0014
struct FAuxBusInfo
{
	class FString                                      BusName;                                       // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              BusValue;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSoundEmitter.EmitterDebugInfo
// 0x0034
struct FEmitterDebugInfo
{
	class FString                                      ReverbA;                                       // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              ReverbAContrib;                                // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      ReverbB;                                       // 0x0014 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              ReverbBContrib;                                // 0x0024 (0x0004) [0x0000000000000000]               
	struct FVector                                     VirtualizationPivot;                           // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.MultiPositionGroup
// 0x0020
struct FMultiPositionGroup
{
	class FString                                      EventName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	TArray<class UOLSoundEmitter*>                     Members;                                       // 0x0010 (0x0010) [0x0000000000101000] (CPF_Native)  
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.VirtualizationNode
// 0x0014
struct FVirtualizationNode
{
	class UOLSoundConnectorComponent*                  Connector;                                     // 0x0000 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              VirtualizableDistance;                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DistToListener;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLTypes.BlendSpaceNode
// 0x0010
struct FBlendSpaceNode
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   Coords;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLUIFrontEnd.ViewInfo
// 0x0028
struct FViewInfo
{
	struct FName                                       ViewName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SWFName;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               DependantViews;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLUIFrontEnd_Options.OptionInfo
// 0x0054
struct FOptionInfo
{
	uint32_t                                           bInProfile : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ProfileSettingId;                              // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            NonProfileId;                                  // 0x0008 (0x0001) [0x0000000000000000]               
	class FString                                      SettingDescription;                            // 0x000C (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      SettingTooltip;                                // 0x001C (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            Type;                                          // 0x002C (0x0001) [0x0000000000000000]               
	uint32_t                                           bUsesRawValue : 1;                             // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Slider_Minimum;                                // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              Slider_Maximum;                                // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentValueInt;                               // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentValueFloat;                             // 0x0040 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      CurrentValueString;                            // 0x0044 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLVoiceManager.VOLine
// 0x0034
struct FVOLine
{
	class UAkEvent*                                    Line;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       BoneName;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeFired;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              EndOfLineBuffer;                               // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayingID;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSkipForPaused : 1;                            // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            CallbackFlags;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	struct FPointer                                    CallbackFunction;                              // 0x0024 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    CallbackCookie;                                // 0x002C (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OLGame.OLVoiceManager.LineQueue
// 0x001C
struct FLineQueue
{
	class AActor*                                      Talker;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FVOLine>                             Lines;                                         // 0x0008 (0x0010) [0x0000000000101000] (CPF_Native)  
	uint32_t                                           IsPlaying : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsWaiting : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           CancelWait : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct OLGame.OLVoiceManager.QueueTimer
// 0x000C
struct FQueueTimer
{
	class AActor*                                      QueueActor;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeRemaining;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLVoiceManager.EndOfEventInfo
// 0x000C
struct FEndOfEventInfo
{
	class AActor*                                      QueueActor;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PlayingID;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLVoiceManager.MarkerInfo
// 0x0018
struct FMarkerInfo
{
	class AActor*                                      QueueActor;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      MarkerText;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
