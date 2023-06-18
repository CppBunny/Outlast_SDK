/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OLGame_classes.hpp
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OLGame.OLPawn.ESpecialMoveType
enum class ESpecialMoveType : uint8_t
{
	SMT_None                                           = 0,
	SMT_Crouch                                         = 1,
	SMT_Uncrouch                                       = 2,
	SMT_JumpOnSpot                                     = 3,
	SMT_BigLanding                                     = 4,
	SMT_JumpOver                                       = 5,
	SMT_JumpOverAndGrabLedge                           = 6,
	SMT_SlideOver                                      = 7,
	SMT_ClimbUpObstacle                                = 8,
	SMT_ClimbUpWall                                    = 9,
	SMT_ClimbOverWall                                  = 10,
	SMT_StepUpAndLand                                  = 11,
	SMT_EnterLookBack                                  = 12,
	SMT_ExitLookBack                                   = 13,
	SMT_GrabLedgeFromGround                            = 14,
	SMT_GrabLedgeFromAir                               = 15,
	SMT_LedgeHangTransition                            = 16,
	SMT_ClimbUpLedge                                   = 17,
	SMT_DropFromLedge                                  = 18,
	SMT_GrabAndClimb                                   = 19,
	SMT_EnterLedgeWalk                                 = 20,
	SMT_ExitLedgeWalk                                  = 21,
	SMT_LedgeWalkTransition                            = 22,
	SMT_JumpFromLedgeWalk                              = 23,
	SMT_EnterSqueeze                                   = 24,
	SMT_ExitSqueeze                                    = 25,
	SMT_AutomaticSqueeze                               = 26,
	SMT_SqueezeReload                                  = 27,
	SMT_EnterDoorInteraction                           = 28,
	SMT_OpenDoorInstant                                = 29,
	SMT_OpenDoorPartial                                = 30,
	SMT_TryOpenLockedDoor                              = 31,
	SMT_RunThroughDoor                                 = 32,
	SMT_CloseDoor                                      = 33,
	SMT_CloseDoorPositionned                           = 34,
	SMT_ClearClosingDoor                               = 35,
	SMT_DoorClosedFromOtherSide                        = 36,
	SMT_OpenLockerFromOutside                          = 37,
	SMT_EnterLocker                                    = 38,
	SMT_ExitLocker                                     = 39,
	SMT_EnterBed                                       = 40,
	SMT_ExitBed                                        = 41,
	SMT_BedReload                                      = 42,
	SMT_EnterLadderFromGround                          = 43,
	SMT_EnterLadderFromAbove                           = 44,
	SMT_ExitLadderOnGround                             = 45,
	SMT_ExitLadderOnTop                                = 46,
	SMT_DropFromLadder                                 = 47,
	SMT_GrabLadderFromAir                              = 48,
	SMT_PickupObject                                   = 49,
	SMT_CSA                                            = 50,
	SMT_EnterStruggle                                  = 51,
	SMT_ExitStruggle                                   = 52,
	SMT_KilledInStruggle                               = 53,
	SMT_StartPushingObject                             = 54,
	SMT_StopPushingObject                              = 55,
	SMT_PushFromLedgeProcedural                        = 56,
	SMT_PushFromLedgeAnimated                          = 57,
	SMT_EnterContextualLean                            = 58,
	SMT_ExitContextualLean                             = 59,
	SMT_ExitContextualLeanForward                      = 60,
	SMT_ContextualLeanInsideTransition                 = 61,
	SMT_HeroGrabbedNormal                              = 62,
	SMT_HeroGrabbedFromSqueeze                         = 63,
	SMT_HeroGrabbedFromLocker                          = 64,
	SMT_HeroGrabbedFromBed                             = 65,
	SMT_HeroGrabbedFromUnder                           = 66,
	SMT_HeroThrown                                     = 67,
	SMT_HeroDecapitate                                 = 68,
	SMT_HeroKilled                                     = 69,
	SMT_Dying                                          = 70,
	SMT_AttackNormal                                   = 71,
	SMT_AttackGrab                                     = 72,
	SMT_AttackLocker                                   = 73,
	SMT_AttackBed                                      = 74,
	SMT_AttackGrabUnder                                = 75,
	SMT_AttackCrouch                                   = 76,
	SMT_AttackQuick                                    = 77,
	SMT_AttackPush                                     = 78,
	SMT_AttackSqueezeStart                             = 79,
	SMT_AttackSqueezeStartToWait                       = 80,
	SMT_AttackSqueezeWaitToFail                        = 81,
	SMT_AttackSqueezeWaitToSuccess                     = 82,
	SMT_AttackSqueezeSuccess                           = 83,
	SMT_ThrowHero                                      = 84,
	SMT_KillHero                                       = 85,
	SMT_InvestigateLocker                              = 86,
	SMT_InvestigateBed                                 = 87,
	SMT_Bash                                           = 88,
	SMT_BashDoorStart                                  = 89,
	SMT_BashDoorLoop                                   = 90,
	SMT_BashDoorFinish                                 = 91,
	SMT_BashDoorFailed                                 = 92,
	SMT_Avoiding                                       = 93,
	SMT_Knockedback                                    = 94,
	SMT_TurnOnSpot                                     = 95,
	SMT_AIVault                                        = 96,
	SMT_NanoThroughDoor                                = 97,
	SMT_Disturbed                                      = 98,
	SMT_AlignAnim                                      = 99,
	SMT_SlideToNavMesh                                 = 100,
	SMTTT_FixCompileErrorWithSteam_SMT_END             = 101,
	ESpecialMoveType_END                               = 102
};

// Enum OLGame.OLPawn.ELocomotionMode
enum class ELocomotionMode : uint8_t
{
	LM_Walk                                            = 0,
	LM_Fall                                            = 1,
	LM_SpecialMove                                     = 2,
	LM_Ladder                                          = 3,
	LM_LedgeHang                                       = 4,
	LM_LedgeWalk                                       = 5,
	LM_Squeeze                                         = 6,
	LM_Door                                            = 7,
	LM_Locker                                          = 8,
	LM_Cinematic                                       = 9,
	LM_Bed                                             = 10,
	LM_LookBack                                        = 11,
	LM_Struggle                                        = 12,
	LM_Grabbed                                         = 13,
	LM_Pushing                                         = 14,
	LM_ContextualLean                                  = 15,
	LM_END                                             = 16
};

// Enum OLGame.OLPawn.EAdjustPositionTargetType
enum class EAdjustPositionTargetType : uint8_t
{
	APTT_TargetAtStart                                 = 0,
	APTT_TargetAtEnd                                   = 1,
	APTT_END                                           = 2
};

// Enum OLGame.OLPawn.CameraRotationMode
enum class ECameraRotationMode : uint8_t
{
	CRM_UserControlled                                 = 0,
	CRM_Limited                                        = 1,
	CRM_Spring                                         = 2,
	CRM_FullyAnimated                                  = 3,
	CRM_Locked                                         = 4,
	CRM_END                                            = 5
};

// Enum OLGame.OLAIContextualVOAsset.EVOContext
enum class EVOContext : uint8_t
{
	EVOC_Undefined                                     = 0,
	EVOC_LostTarget                                    = 1,
	EVOC_PatrolToInvestigate                           = 2,
	EVOC_SwitchToChase                                 = 3,
	EVOC_SwitchToChaseMultiple                         = 4,
	EVOC_ChaseToInvestigate                            = 5,
	EVOC_Spawned                                       = 6,
	EVOC_END                                           = 7
};

// Enum OLGame.OLEnemyPawn.ERotationMode
enum class ERotationMode : uint8_t
{
	RM_FaceVelocity                                    = 0,
	RM_FaceTarget                                      = 1,
	RM_Explicit                                        = 2,
	RM_END                                             = 3
};

// Enum OLGame.OLEnemyPawn.EEnemyMode
enum class EEnemyMode : uint8_t
{
	EM_Patrol                                          = 0,
	EM_Investigate                                     = 1,
	EM_Chase                                           = 2,
	EM_SqueezeGrabLeft                                 = 3,
	EM_SqueezeGrabRight                                = 4,
	EM_END                                             = 5
};

// Enum OLGame.OLEnemyPawn.EAttackSide
enum class EAttackSide : uint8_t
{
	EAS_Left                                           = 0,
	EAS_Right                                          = 1,
	EAS_Middle                                         = 2,
	EAS_END                                            = 3
};

// Enum OLGame.OLEnemyPawn.EMoveSpeedMode
enum class EMoveSpeedMode : uint8_t
{
	EMSM_Default                                       = 0,
	EMSM_Override                                      = 1,
	EMSM_RubberBanding                                 = 2,
	EMSM_END                                           = 3
};

// Enum OLGame.OLEnemyPawn.EWeapon
enum class EWeapon : uint8_t
{
	Weapon_None                                        = 0,
	Weapon_Knife                                       = 1,
	Weapon_ButcherKnife                                = 2,
	Weapon_BoneShear                                   = 3,
	Weapon_Machete                                     = 4,
	Weapon_NightStick                                  = 5,
	Weapon_Pipe                                        = 6,
	Weapon_WoodPlank                                   = 7,
	Weapon_CannibalDrill                               = 8,
	Weapon_END                                         = 9
};

// Enum OLGame.OLEnemyPawn.EWeaponType
enum class EWeaponType : uint8_t
{
	WeaponType_None                                    = 0,
	WeaponType_Blunt                                   = 1,
	WeaponType_Stab                                    = 2,
	WeaponType_END                                     = 3
};

// Enum OLGame.OLAnimEnemyStruggle.EStruggleAnimPhase
enum class EStruggleAnimPhase : uint8_t
{
	SAP_StartIdle                                      = 0,
	SAP_Entry                                          = 1,
	SAP_Cycle                                          = 2,
	SAP_Success                                        = 3,
	SAP_Fail                                           = 4,
	SAP_SuccessIdle                                    = 5,
	SAP_END                                            = 6
};

// Enum OLGame.OLAnimNotify_Door.EDoorInteraction
enum class EDoorInteraction : uint8_t
{
	DI_Open                                            = 0,
	DI_Close                                           = 1,
	DI_END                                             = 2
};

// Enum OLGame.OLHero.NVGlitchType
enum class ENVGlitchType : uint8_t
{
	NVGT_SuddenDrop                                    = 0,
	NVGT_SlowDrop                                      = 1,
	NVGT_Buzz                                          = 2,
	NVGT_LastBreath                                    = 3,
	NVGT_END                                           = 4
};

// Enum OLGame.OLHero.ECamcorderState
enum class ECamcorderState : uint8_t
{
	CCS_Inactive                                       = 0,
	CCS_Active                                         = 1,
	CCS_Raising                                        = 2,
	CCS_Lowering                                       = 3,
	CCS_ReloadingActive                                = 4,
	CCS_ReloadingInactive                              = 5,
	CCS_END                                            = 6
};

// Enum OLGame.OLHero.ELedgeTransitionType
enum class ELedgeTransitionType : uint8_t
{
	LTT_LeftInside                                     = 0,
	LTT_LeftOutside                                    = 1,
	LTT_RightInside                                    = 2,
	LTT_RightOutside                                   = 3,
	LTT_END                                            = 4
};

// Enum OLGame.OLHero.ELedgeClimbType
enum class ELedgeClimbType : uint8_t
{
	LCT_ClimbUpToStand                                 = 0,
	LCT_ClimbUpToCrouch                                = 1,
	LCT_ClimbOverToFalling                             = 2,
	LCT_ClimbOverToStand                               = 3,
	LCT_END                                            = 4
};

// Enum OLGame.OLHero.ESqueezeTransitionType
enum class ESqueezeTransitionType : uint8_t
{
	STT_Left_Facing                                    = 0,
	STT_Left_Back                                      = 1,
	STT_Right_Facing                                   = 2,
	STT_Right_Back                                     = 3,
	STT_END                                            = 4
};

// Enum OLGame.OLHero.EDoorOpeningType
enum class EDoorOpeningType : uint8_t
{
	DOT_LeftPush                                       = 0,
	DOT_LeftPull                                       = 1,
	DOT_RightPush                                      = 2,
	DOT_RightPull                                      = 3,
	DOT_END                                            = 4
};

// Enum OLGame.OLHero.EDoorPartialOpenType
enum class EDoorPartialOpenType : uint8_t
{
	DPOT_LeftPush                                      = 0,
	DPOT_LeftPull                                      = 1,
	DPOT_LeftSwipe                                     = 2,
	DPOT_RightPush                                     = 3,
	DPOT_RightPull                                     = 4,
	DPOT_RightSwipe                                    = 5,
	DPOT_END                                           = 6
};

// Enum OLGame.OLHero.EDoorClosingType
enum class EDoorClosingType : uint8_t
{
	DCT_LeftFront                                      = 0,
	DCT_LeftSide                                       = 1,
	DCT_LeftBack                                       = 2,
	DCT_LeftInside                                     = 3,
	DCT_RightFront                                     = 4,
	DCT_RightSide                                      = 5,
	DCT_RightBack                                      = 6,
	DCT_RightInside                                    = 7,
	DCT_END                                            = 8
};

// Enum OLGame.OLHero.EEnemyType
enum class EEnemyType : uint8_t
{
	ET_Soldier                                         = 0,
	ET_Generic                                         = 1,
	ET_Surgeon                                         = 2,
	ET_Swarm                                           = 3,
	ET_Other                                           = 4,
	ET_Groom                                           = 5,
	ET_Cannibal                                        = 6,
	ET_END                                             = 7
};

// Enum OLGame.OLHero.EHeroBodySetup
enum class EHeroBodySetup : uint8_t
{
	HBS_Normal                                         = 0,
	HBS_NoProxy                                        = 1,
	HBS_CamcorderRaised                                = 2,
	HBS_CamcorderRaisedNoShadow                        = 3,
	HBS_CamcorderVisible                               = 4,
	HBS_END                                            = 5
};

// Enum OLGame.OLHero.ECamcorderMode
enum class ECamcorderMode : uint8_t
{
	CCM_Default                                        = 0,
	CCM_PoweredNightVision                             = 1,
	CCM_NightVision                                    = 2,
	CCM_END                                            = 3
};

// Enum OLGame.OLHero.CornerPeekPosition
enum class ECornerPeekPosition : uint8_t
{
	CPP_Left                                           = 0,
	CPP_Right                                          = 1,
	CPP_MiddleLeft                                     = 2,
	CPP_MiddleRight                                    = 3,
	CPP_END                                            = 4
};

// Enum OLGame.OLHero.IKTargetType
enum class EIKTargetType : uint8_t
{
	IKTT_DoorKnob                                      = 0,
	IKTT_CSAPropDestination                            = 1,
	IKTT_Other                                         = 2,
	IKTT_END                                           = 3
};

// Enum OLGame.OLBashableObject.EOLBashableType
enum class EOLBashableType : uint8_t
{
	EOLBT_Wall                                         = 0,
	EOLBT_Table                                        = 1,
	EOLBT_END                                          = 2
};

// Enum OLGame.OLBot.AIAttackType
enum class EAIAttackType : uint8_t
{
	AT_Normal                                          = 0,
	AT_Squeeze                                         = 1,
	AT_Locker                                          = 2,
	AT_Bed                                             = 3,
	AT_Grab                                            = 4,
	AT_GrabCrouch                                      = 5,
	AT_GrabUnder                                       = 6,
	AT_Push                                            = 7,
	AT_END                                             = 8
};

// Enum OLGame.OLBot.EMoveFailedReason
enum class EMoveFailedReason : uint8_t
{
	MFR_Unknown                                        = 0,
	MFR_AINotOnNavMesh                                 = 1,
	MFR_TargetNotOnNavMesh                             = 2,
	MFR_NoPathToTarget                                 = 3,
	MFR_Aborted                                        = 4,
	MFR_END                                            = 5
};

// Enum OLGame.OLBot.EMoveType
enum class EMoveType : uint8_t
{
	MT_Invalid                                         = 0,
	MT_Point                                           = 1,
	MT_Actor                                           = 2,
	MT_END                                             = 3
};

// Enum OLGame.OLBot.EMoveStatus
enum class EMoveStatus : uint8_t
{
	MS_Moving                                          = 0,
	MS_Success                                         = 1,
	MS_Failed                                          = 2,
	MS_Pending                                         = 3,
	MS_END                                             = 4
};

// Enum OLGame.OLBot.EOLInvestigationPointType
enum class EOLInvestigationPointType : uint8_t
{
	OLIPT_Normal                                       = 0,
	OLIPT_Locker                                       = 1,
	OLIPT_Bed                                          = 2,
	OLIPT_END                                          = 3
};

// Enum OLGame.OLBot.EAIEnvironment
enum class EAIEnvironment : uint8_t
{
	AIE_Normal                                         = 0,
	AIE_Darkness                                       = 1,
	AIE_Electricity                                    = 2,
	AIE_END                                            = 3
};

// Enum OLGame.OLBot.EAIBehaviorState
enum class EAIBehaviorState : uint8_t
{
	AIBS_Idle                                          = 0,
	AIBS_Patrolling                                    = 1,
	AIBS_Investigating                                 = 2,
	AIBS_Chasing                                       = 3,
	AIBS_END                                           = 4
};

// Enum OLGame.OLBTBehavior.EStatus
enum class EStatus : uint8_t
{
	Status_Invalid                                     = 0,
	Status_Success                                     = 1,
	Status_Failure                                     = 2,
	Status_Running                                     = 3,
	Status_ReachedCurrent                              = 4,
	Status_END                                         = 5
};

// Enum OLGame.OLBTDistanceToPlayerNode.EBTComparison
enum class EBTComparison : uint8_t
{
	BTC_LessThan                                       = 0,
	BTC_LessThanOrEqual                                = 1,
	BTC_GreaterThan                                    = 2,
	BTC_GreaterThanOrEqual                             = 3,
	BTC_END                                            = 4
};

// Enum OLGame.OLBTWaitHandlerNode.EWaitHandlerState
enum class EWaitHandlerState : uint8_t
{
	EWHS_Active                                        = 0,
	EWHS_Waiting                                       = 1,
	EWHS_END                                           = 2
};

// Enum OLGame.OLCheatManager.EDebugTrajectoryType
enum class EDebugTrajectoryType : uint8_t
{
	DTT_Walking                                        = 0,
	DTT_Falling                                        = 1,
	DTT_AdjustPosition                                 = 2,
	DTT_ProceduralAnim                                 = 3,
	DTT_SpecialMove                                    = 4,
	DTT_Camera                                         = 5,
	DTT_Other                                          = 6,
	DTT_END                                            = 7
};

// Enum OLGame.OLCheckpointList.OutlastGameType
enum class EOutlastGameType : uint8_t
{
	OGT_Outlast                                        = 0,
	OGT_Whistleblower                                  = 1,
	OGT_END                                            = 2
};

// Enum OLGame.OLDoor.DoorEventType
enum class EDoorEventType : uint8_t
{
	DET_StartOpening                                   = 0,
	DET_Opened                                         = 1,
	DET_Closed                                         = 2,
	DET_TriedOnLocked                                  = 3,
	DET_OpenThresholdReached                           = 4,
	DET_Bashed                                         = 5,
	DET_StartedBashing                                 = 6,
	DET_StartedClosing                                 = 7,
	DET_END                                            = 8
};

// Enum OLGame.OLDoor.EDoorState
enum class EDoorState : uint8_t
{
	DS_Idle                                            = 0,
	DS_Opening                                         = 1,
	DS_Closing                                         = 2,
	DS_PlayerInteracting                               = 3,
	DS_Animating                                       = 4,
	DS_END                                             = 5
};

// Enum OLGame.OLDoor.EDoorBreakState
enum class EDoorBreakState : uint8_t
{
	DBS_Normal                                         = 0,
	DBS_Breaking                                       = 1,
	DBS_Broken                                         = 2,
	DBS_END                                            = 3
};

// Enum OLGame.OLDoor.ECancelBashDirection
enum class ECancelBashDirection : uint8_t
{
	ECBD_Both                                          = 0,
	ECBD_Forward                                       = 1,
	ECBD_Backward                                      = 2,
	ECBD_END                                           = 3
};

// Enum OLGame.OLDoor.EOLDoorMeshType
enum class EOLDoorMeshType : uint8_t
{
	DMesh_Undefined                                    = 0,
	DMesh_Wooden                                       = 1,
	DMesh_WoodenOld                                    = 2,
	DMesh_WoodenWindow                                 = 3,
	DMesh_WoodenWindowSmall                            = 4,
	DMesh_WoodenWindowOld                              = 5,
	DMesh_WoodenWindowOldSmall                         = 6,
	DMesh_WoodenWindowBig                              = 7,
	DMesh_Metal                                        = 8,
	DMesh_MetalWindow                                  = 9,
	DMesh_MetalWindowSmall                             = 10,
	DMesh_Enforced                                     = 11,
	DMesh_Grid                                         = 12,
	DMesh_Prison                                       = 13,
	DMesh_Entrance                                     = 14,
	DMesh_Bathroom                                     = 15,
	DMesh_IsolatedCell                                 = 16,
	DMesh_Locker                                       = 17,
	DMesh_LockerRusted                                 = 18,
	DMesh_LockerBeige                                  = 19,
	DMesh_LockerGreen                                  = 20,
	DMesh_Glass                                        = 21,
	DMesh_Fence                                        = 22,
	DMesh_LockerHole                                   = 23,
	DMesh_END                                          = 24
};

// Enum OLGame.OLDoor.EDoorMaterial
enum class EDoorMaterial : uint8_t
{
	OLDM_Wood                                          = 0,
	OLDM_Metal                                         = 1,
	OLDM_SecurityDoor                                  = 2,
	OLDM_BigPrisonDoor                                 = 3,
	OLDM_BigWoodenDoor                                 = 4,
	OLDM_END                                           = 5
};

// Enum OLGame.OLDoor.EOLDoorType
enum class EOLDoorType : uint8_t
{
	DT_Normal                                          = 0,
	DT_Locker                                          = 1,
	DT_END                                             = 2
};

// Enum OLGame.OLEnemyNanoCloud.NanoCloudForm
enum class ENanoCloudForm : uint8_t
{
	NCF_Swarm                                          = 0,
	NCF_Human                                          = 1,
	NCF_MorphingToSwarm                                = 2,
	NCF_MorphingToHuman                                = 3,
	NCF_END                                            = 4
};

// Enum OLGame.OLEnemyNanoCloud.MorphingValueType
enum class EMorphingValueType : uint8_t
{
	MVT_CloudEmitter                                   = 0,
	MVT_SmallEmitters                                  = 1,
	MVT_SwarmMaterial                                  = 2,
	MVT_SkeletonMaterial                               = 3,
	MVT_EyesMaterial                                   = 4,
	MVT_END                                            = 5
};

// Enum OLGame.OLEngine.OrbisDialogType
enum class EOrbisDialogType : uint8_t
{
	ODT_None                                           = 0,
	ODT_SelectSaveLocation                             = 1,
	ODT_LoadGame                                       = 2,
	ODT_SystemError                                    = 3,
	ODT_LoadedBadCheckpoint                            = 4,
	ODT_PSStore                                        = 5,
	ODT_END                                            = 6
};

// Enum OLGame.OLEngine.ECheckpointAction
enum class ECheckpointAction : uint8_t
{
	Checkpoint_Default                                 = 0,
	Checkpoint_Load                                    = 1,
	Checkpoint_SaveToDisk                              = 2,
	Checkpoint_SaveToMemory                            = 3,
	Checkpoint_END                                     = 4
};

// Enum OLGame.OLFXManager.EPPSMode
enum class EPPSMode : uint8_t
{
	PPS_Default                                        = 0,
	PPS_Camcorder                                      = 1,
	PPS_NightVision                                    = 2,
	PPS_GammaCalibration                               = 3,
	PPS_Death                                          = 4,
	PPS_END                                            = 5
};

// Enum OLGame.OLFXManager.CameraGlitchType
enum class ECameraGlitchType : uint8_t
{
	CGT_OnOff                                          = 0,
	CGT_LinearDrop                                     = 1,
	CGT_Sine                                           = 2,
	CGT_END                                            = 3
};

// Enum OLGame.OLGame.EDifficultyMode
enum class EDifficultyMode : uint8_t
{
	EDM_Normal                                         = 0,
	EDM_Hard                                           = 1,
	EDM_Nightmare                                      = 2,
	EDM_Insane                                         = 3,
	EDM_END                                            = 4
};

// Enum OLGame.OLHUD.EHUDMessageType
enum class EHUDMessageType : uint8_t
{
	EHMT_None                                          = 0,
	EHMT_Objective                                     = 1,
	EHMT_Tutorial                                      = 2,
	EHMT_Generic                                       = 3,
	EHMT_Interaction                                   = 4,
	EHMT_Subtitle                                      = 5,
	EHMT_ShakeMouse                                    = 6,
	EHMT_ShakeStick                                    = 7,
	EHMT_END                                           = 8
};

// Enum OLGame.OLHUD.EMenuType
enum class EMenuType : uint8_t
{
	EMT_MainMenu                                       = 0,
	EMT_PauseMenu                                      = 1,
	EMT_TabMenu                                        = 2,
	EMT_RecordingMenu                                  = 3,
	EMT_EvidenceMenu                                   = 4,
	EMT_Credits                                        = 5,
	EMT_END                                            = 6
};

// Enum OLGame.OLInterpTrackPPSEffectParam.TrackPropertyType
enum class ETrackPropertyType : uint8_t
{
	TPP_MaterialInstance                               = 0,
	TPP_UberMovieIntensity                             = 1,
	TPP_END                                            = 2
};

// Enum OLGame.OLPlayerController.EOutlastAchievement
enum class EOutlastAchievement : uint8_t
{
	OA_000_StartedGenerator                            = 0,
	OA_001_DrainedSewer                                = 1,
	OA_002_StartedSprinklers                           = 2,
	OA_003_FoundFemaleWardKey                          = 3,
	OA_004_MilestoneCollectibles                       = 4,
	OA_005_FinishedGame                                = 5,
	OA_006_AllCollectibles                             = 6,
	OA_007_FinishedNightmare                           = 7,
	OA_008_TurnOffGas                                  = 8,
	OA_009_TurnOffPower                                = 9,
	OA_010_FinishDLC                                   = 10,
	OA_011_FinishDLCInsane                             = 11,
	OA_012_AllDLCDocs                                  = 12,
	OA_013_AllDLCRecordings                            = 13,
	OA_END                                             = 14
};

// Enum OLGame.OLPlayerController.EAIMusicState
enum class EAIMusicState : uint8_t
{
	EAIMS_None                                         = 0,
	EAIMS_Patrol                                       = 1,
	EAIMS_Investigate                                  = 2,
	EAIMS_Chase                                        = 3,
	EAIMS_END                                          = 4
};

// Enum OLGame.OLPlayerController.StruggleInputDirection
enum class EStruggleInputDirection : uint8_t
{
	SID_Undefined                                      = 0,
	SID_Left                                           = 1,
	SID_Right                                          = 2,
	SID_END                                            = 3
};

// Enum OLGame.OLPlayerController.ZoomMovementType
enum class EZoomMovementType : uint8_t
{
	Zoom_Undefined                                     = 0,
	Zoom_MovingLeft                                    = 1,
	Zoom_NotMoving                                     = 2,
	Zoom_MovingRight                                   = 3,
	Zoom_END                                           = 4
};

// Enum OLGame.OLPlayerController.EPlayerInteractionType
enum class EPlayerInteractionType : uint8_t
{
	PIT_CSA                                            = 0,
	PIT_PickupObject                                   = 1,
	PIT_BatteriesFull                                  = 2,
	PIT_EnterBed                                       = 3,
	PIT_EnterLocker                                    = 4,
	PIT_ExitLocker                                     = 5,
	PIT_OpenDoor                                       = 6,
	PIT_OpenPartiallyOpenDoor                          = 7,
	PIT_CloseDoor                                      = 8,
	PIT_LockedDoor                                     = 9,
	PIT_AutoCloseDoor                                  = 10,
	PIT_ClimbUpLedge                                   = 11,
	PIT_ReloadBatteries                                = 12,
	PIT_Struggle                                       = 13,
	PIT_PushObject                                     = 14,
	PIT_END                                            = 15
};

// Enum OLGame.OLPlayerInput.GamepadBindingsType
enum class EGamepadBindingsType : uint8_t
{
	GBT_A                                              = 0,
	GBT_B                                              = 1,
	GBT_C                                              = 2,
	GBT_END                                            = 3
};

// Enum OLGame.OLProfileSettings.ProfileQualityLevel
enum class EProfileQualityLevel : uint8_t
{
	PQL_VeryLow                                        = 0,
	PQL_Low                                            = 1,
	PQL_Medium                                         = 2,
	PQL_High                                           = 3,
	PQL_VeryHigh                                       = 4,
	PQL_Custom                                         = 5,
	PQL_END                                            = 6
};

// Enum OLGame.OLProfileSettings.EScreenResolution
enum class EScreenResolution : uint8_t
{
	SR_800x600                                         = 0,
	SR_1024x768                                        = 1,
	SR_1280x720                                        = 2,
	SR_1280x800                                        = 3,
	SR_1280x960                                        = 4,
	SR_1366x768                                        = 5,
	SR_1600x900                                        = 6,
	SR_1600x1200                                       = 7,
	SR_1680x1050                                       = 8,
	SR_1920x1080                                       = 9,
	SR_1920x1200                                       = 10,
	SR_1920x1440                                       = 11,
	SR_2560x1440                                       = 12,
	SR_2560x1600                                       = 13,
	SR_Other                                           = 14,
	SR_END                                             = 15
};

// Enum OLGame.OLProfileSettings.EGamepadConfigId
enum class EGamepadConfigId : uint8_t
{
	GC_TypeA                                           = 0,
	GC_TypeB                                           = 1,
	GC_TypeC                                           = 2,
	GC_END                                             = 3
};

// Enum OLGame.OLProfileSettings.ELanguage
enum class ELanguage : uint8_t
{
	EL_English                                         = 0,
	EL_French                                          = 1,
	EL_Spanish                                         = 2,
	EL_Italian                                         = 3,
	EL_German                                          = 4,
	EL_Russian                                         = 5,
	EL_Polish                                          = 6,
	EL_Brazilian                                       = 7,
	EL_Japanese                                        = 8,
	EL_END                                             = 9
};

// Enum OLGame.OLPushableObject.PushableMaterial
enum class EPushableMaterial : uint8_t
{
	PM_Wood                                            = 0,
	PM_Metal                                           = 1,
	PM_END                                             = 2
};

// Enum OLGame.OLPushableObject.PushableEventType
enum class EPushableEventType : uint8_t
{
	PET_StartedPushing                                 = 0,
	PET_StoppedPushing                                 = 1,
	PET_UnblockedDoor                                  = 2,
	PET_BlockedDoor                                    = 3,
	PET_END                                            = 4
};

// Enum OLGame.OLSeqAct_Limp.EHobbleIntensity
enum class EHobbleIntensity : uint8_t
{
	HI_VeryBad                                         = 0,
	HI_Bad                                             = 1,
	HI_NotSoBad                                        = 2,
	HI_RatherOk                                        = 3,
	HI_Healed                                          = 4,
	HI_END                                             = 5
};

// Enum OLGame.OLSeqAct_MovieEffect.MovieEffectAnim
enum class EMovieEffectAnim : uint8_t
{
	MEA_Random                                         = 0,
	MEA_Anim1                                          = 1,
	MEA_Anim2                                          = 2,
	MEA_Anim3                                          = 3,
	MEA_END                                            = 4
};

// Enum OLGame.OLSeqEvent_NightVision.ENVEvent
enum class ENVEvent : uint8_t
{
	NVE_CamcorderActivated                             = 0,
	NVE_CamcorderDeactivated                           = 1,
	NVE_DefaultViewSelected                            = 2,
	NVE_PassiveNVSelected                              = 3,
	NVE_ActiveNVSelected                               = 4,
	NVE_OutOfBatteries                                 = 5,
	NVE_END                                            = 6
};

// Enum OLGame.OLUberPostProcessEffect.ECameraMode
enum class ECameraMode : uint8_t
{
	CM_Off                                             = 0,
	CM_On                                              = 1,
	CM_OnNightVision                                   = 2,
	CM_END                                             = 3
};

// Enum OLGame.OLUIFrontEnd_Options.ENonProfileOption
enum class ENonProfileOption : uint8_t
{
	NPO_None                                           = 0,
	NPO_DisableMotionBlur                              = 1,
	NPO_Difficulty                                     = 2,
	NPO_END                                            = 3
};

// Enum OLGame.OLUIFrontEnd_Options.EOptionSelectorType
enum class EOptionSelectorType : uint8_t
{
	OST_CheckBox                                       = 0,
	OST_Dropdown                                       = 1,
	OST_Slider                                         = 2,
	OST_KeyBinding                                     = 3,
	OST_ControllerConfigButton                         = 4,
	OST_GammaButton                                    = 5,
	OST_END                                            = 6
};

// Enum OLGame.OLUIFrontEnd_Options.EOptionTabs
enum class EOptionTabs : uint8_t
{
	OT_Gameplay                                        = 0,
	OT_Graphics                                        = 1,
	OT_Controls                                        = 2,
	OT_END                                             = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OLGame.ActorFactoryOLAmbientSound
// 0x0000 OR 0x00A4 (0x00A4 - 0x00A4)
// 0 OR 164 (164 - 164)
class UActorFactoryOLAmbientSound : public UActorFactoryAkAmbientSound
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.ActorFactoryOLAmbientSound");
		}

		return uClassPointer;
	};

};

// Class OLGame.ActorFactoryOLSoundEmittingMeshActor
// 0x0010 OR 0x00C0 (0x00C0 - 0x00B0)
// 16 OR 192 (192 - 176)
class UActorFactoryOLSoundEmittingMeshActor : public UActorFactoryStaticMesh
{
public:
	class UAkEvent*                                    StartEvent;                                    // 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    StopEvent;                                     // 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.ActorFactoryOLSoundEmittingMeshActor");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAmbientSound
// 0x0014 OR 0x0268 (0x0268 - 0x0254)
// 20 OR 616 (616 - 596)
class AOLAmbientSound : public AAkAmbientSound
{
public:
	uint32_t                                           bAllowVirtualization : 1;                      // 0x0254 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<class AOLAmbientSoundClone*>                Clones;                                        // 0x0258 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAmbientSound");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAmbientSoundClone
// 0x0014 OR 0x0254 (0x0254 - 0x0240)
// 20 OR 596 (596 - 576)
class AOLAmbientSoundClone : public AActor
{
public:
	class USpriteComponent*                            SpriteComp;                                    // 0x0240 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AOLAmbientSound*                             Master;                                        // 0x0248 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bAllowVirtualization : 1;                      // 0x0250 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAmbientSoundClone");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBashableObject
// 0x0058 OR 0x0298 (0x0298 - 0x0240)
// 88 OR 664 (664 - 576)
class AOLBashableObject : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;          // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	EOLBashableType                                    BashableType;                                  // 0x0248 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UStaticMeshComponent*                        PreBashCollision;                              // 0x024C (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        PostBashCollision;                             // 0x0254 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      Mesh;                                          // 0x025C (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                              // 0x0264 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BashAnimation;                                 // 0x026C (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PathPointOffset;                               // 0x0274 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BashYOffset;                                   // 0x0278 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnabled : 1;                                  // 0x027C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bBroken : 1;                                   // 0x027C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bInitiallyEnabled : 1;                         // 0x027C (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	struct FVector                                     Edge0Dest;                                     // 0x0280 (0x000C) [0x0000000000000000]               
	struct FVector                                     Edge1Dest;                                     // 0x028C (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBashableObject");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
	void ClearBreakTimer();
	void TriggerBreakTimer(float Time);
	void Break();
};

// Class OLGame.OLCamcorderHud
// 0x0060 OR 0x0244 (0x0244 - 0x01E4)
// 96 OR 580 (580 - 484)
class UOLCamcorderHud : public UGFxMoviePlayer
{
public:
	class AOLHUD*                                      HUD;                                           // 0x01E4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bVisible : 1;                                  // 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RecordingTimeSeconds;                          // 0x01F0 (0x0004) [0x0000000000000000]               
	struct FCamcorderHudObjects                        Objects;                                       // 0x01F4 (0x0038) [0x0000000000002000] (CPF_Transient)
	struct FCamcorderHudState                          HudState;                                      // 0x022C (0x0018) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCamcorderHud");
		}

		return uClassPointer;
	};

	void UpdateRecordingTime(float DeltaTime);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void eventSetVisible(bool bShow);
};

// Class OLGame.OLCameraActor
// 0x0000 OR 0x03C8 (0x03C8 - 0x03C8)
// 0 OR 968 (968 - 968)
class AOLCameraActor : public ACameraActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCameraActor");
		}

		return uClassPointer;
	};

	void GetCameraView(float DeltaTime, struct FTPOV& OutPOV);
	void NativeGetCameraView(struct FTPOV& OutPOV);
};

// Class OLGame.OLPlayerController
// 0x031C OR 0x0D68 (0x0D68 - 0x0A4C)
// 796 OR 3432 (3432 - 2636)
class AOLPlayerController : public AUDKPlayerController
{
public:
	class AOLHero*                                     HeroPawn;                                      // 0x0A4C (0x0008) [0x0000000000000000]               
	class AOLHUD*                                      HUD;                                           // 0x0A54 (0x0008) [0x0000000000000000]               
	class UOLInventoryManager*                         InventoryManager;                              // 0x0A5C (0x0008) [0x0000000000000000]               
	class UOLTutorialManager*                          TutorialManager;                               // 0x0A64 (0x0008) [0x0000000000000000]               
	class UOLSoundEnvironmentManager*                  SoundEnvManager;                               // 0x0A6C (0x0008) [0x0000000000000000]               
	class UOLFXManager*                                FXManager;                                     // 0x0A74 (0x0008) [0x0000000000000000]               
	class UOLSeqAct_SplashScreen*                      ActiveSplashScreen;                            // 0x0A7C (0x0008) [0x0000000000000000]               
	uint32_t                                           bFlushingStreaming : 1;                        // 0x0A84 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasCamcorder : 1;                             // 0x0A84 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBlockedOnLoading : 1;                         // 0x0A84 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bShowingKismetControlledLoadingScreen : 1;     // 0x0A84 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bShowingLoadingOverlay : 1;                    // 0x0A84 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bProfileSettingsUpdated : 1;                   // 0x0A84 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bValidDoorHold : 1;                            // 0x0A84 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bInvalidateLeanInput : 1;                      // 0x0A84 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bInvalidateReleasedUse : 1;                    // 0x0A84 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bToggleCrouch : 1;                             // 0x0A84 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bOverriddenMusic : 1;                          // 0x0A84 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bTravellingToCheckpoint : 1;                   // 0x0A84 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bTravelCheckPersistent : 1;                    // 0x0A84 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bForceLevelReset : 1;                          // 0x0A84 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bFoundBySoldierWhileHidden : 1;                // 0x0A84 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bFoundBySurgeonWhileHidden : 1;                // 0x0A84 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bEnableShadowOptimisation : 1;                 // 0x0A84 (0x0004) [0x0000000000004000] [0x00010000] (CPF_Config)
	uint32_t                                           bEnableLightOptimisation : 1;                  // 0x0A84 (0x0004) [0x0000000000004000] [0x00020000] (CPF_Config)
	uint32_t                                           bBehindView : 1;                               // 0x0A84 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bDebugFixedCam : 1;                            // 0x0A84 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bDebugFreeCam : 1;                             // 0x0A84 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bDebugGhost : 1;                               // 0x0A84 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bSlowDownFPS : 1;                              // 0x0A84 (0x0004) [0x0000000000000000] [0x00400000] 
	struct FName                                       CurrentObjective;                              // 0x0A88 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               CompletedObjectives;                           // 0x0A90 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumBatteries;                                  // 0x0AA0 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxNumBatteries;                               // 0x0AA4 (0x0004) [0x0000000000000000]               
	int32_t                                            NrmMaxNumBatteries;                            // 0x0AA8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            HardMaxNumBatteries;                           // 0x0AAC (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            NightmareMaxNumBatteries;                      // 0x0AB0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DefaultNumBatteries;                           // 0x0AB4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              GameOverActivatedTimestamp;                    // 0x0AB8 (0x0004) [0x0000000000000000]               
	TArray<EPlayerInteractionType>                     AvailableInteractions;                         // 0x0ABC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CSAPrompt;                                     // 0x0ACC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PickupTargetName;                              // 0x0ADC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOLProfileSettings*                          ProfileSettings;                               // 0x0AEC (0x0008) [0x0000000000000000]               
	struct FDigitalInputs                              Inputs;                                        // 0x0AF4 (0x0004) [0x0000000000000000]               
	uint8_t                                            bLeanInputLeft;                                // 0x0AF8 (0x0001) [0x0000000000000004] (CPF_Input)   
	uint8_t                                            bLeanInputRight;                               // 0x0AF9 (0x0001) [0x0000000000000004] (CPF_Input)   
	uint8_t                                            bRunInput;                                     // 0x0AFA (0x0001) [0x0000000000000004] (CPF_Input)   
	uint8_t                                            bUseButtonDown;                                // 0x0AFB (0x0001) [0x0000000000000004] (CPF_Input)   
	EAIMusicState                                      AIMusic;                                       // 0x0AFC (0x0001) [0x0000000000000000]               
	EAIMusicState                                      OverriddenMusicState;                          // 0x0AFD (0x0001) [0x0000000000000000]               
	float                                              PureMouseX;                                    // 0x0B00 (0x0004) [0x0000000000000004] (CPF_Input)   
	float                                              AnalogLeanInputLeft;                           // 0x0B04 (0x0004) [0x0000000000000004] (CPF_Input)   
	float                                              AnalogLeanInputRight;                          // 0x0B08 (0x0004) [0x0000000000000004] (CPF_Input)   
	int32_t                                            ZoomInput;                                     // 0x0B0C (0x0004) [0x0000000000000000]               
	float                                              UsePressedTime;                                // 0x0B10 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastPlayerInputIntent;                         // 0x0B14 (0x000C) [0x0000000000000000]               
	struct FTouchZoomData                              TouchZoom;                                     // 0x0B20 (0x0014) [0x0000000000000000]               
	struct FLinearColor                                LightBarColor;                                 // 0x0B34 (0x0010) [0x0000000000000000]               
	float                                              LightBarPulsePhase;                            // 0x0B44 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               CompletedRecordingMoments;                     // 0x0B48 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                        // 0x0B58 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AOLRecordingMarker*                          PendingRecordingMarker;                        // 0x0B68 (0x0008) [0x0000000000000000]               
	float                                              RecordingCompletedTime;                        // 0x0B70 (0x0004) [0x0000000000000000]               
	struct FStruggleData                               Struggle;                                      // 0x0B74 (0x00CC) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              StruggleInputThresholdForWin;                  // 0x0C40 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              StruggleShakesThresholdForWin;                 // 0x0C44 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              StruggleInputThresholdForWinNoFail;            // 0x0C48 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              StruggleShakesThresholdForWinNoFail;           // 0x0C4C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AIDistance;                                    // 0x0C50 (0x0004) [0x0000000000000000]               
	float                                              OverriddenMusicDistance;                       // 0x0C54 (0x0004) [0x0000000000000000]               
	float                                              AIChaseMusicTimer;                             // 0x0C58 (0x0004) [0x0000000000000000]               
	float                                              AIChaseMusicTimeDelay;                         // 0x0C5C (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FName                                       MusicAIStateGroup;                             // 0x0C60 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       MusicAIStateNone;                              // 0x0C68 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       MusicAIStatePatrol;                            // 0x0C70 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       MusicAIStateInvestigate;                       // 0x0C78 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       MusicAIStateChase;                             // 0x0C80 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       LoadingStateGroup;                             // 0x0C88 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       LoadingStateOn;                                // 0x0C90 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       LoadingStateOff;                               // 0x0C98 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AIDistanceRTPC;                                // 0x0CA0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndResetMixStates;                             // 0x0CA8 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumDeathsSinceLastCheckpoint;                  // 0x0CB0 (0x0004) [0x0000000000000000]               
	float                                              StableLevelsTimestamp;                         // 0x0CB4 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBatteriesAtLastCheckpoint;                  // 0x0CB8 (0x0004) [0x0000000000000000]               
	float                                              BatteryEnergyAtLastCheckpoint;                 // 0x0CBC (0x0004) [0x0000000000000000]               
	struct FName                                       FirstSoldierFindableCheckpoint;                // 0x0CC0 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       FirstSurgeonFindableCheckpoint;                // 0x0CC8 (0x0008) [0x0000000000004000] (CPF_Config)  
	int32_t                                            FindHiddenPlayerSkipCount;                     // 0x0CD0 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastLightOptimCamPos;                          // 0x0CD4 (0x000C) [0x0000000000000000]               
	TArray<struct FName>                               LevelsResetAfterPlayerDeath;                   // 0x0CE0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     DesiredLocation;                               // 0x0CF0 (0x000C) [0x0000000000000000]               
	float                                              LastCameraTimeStamp;                           // 0x0CFC (0x0004) [0x0000000000000000]               
	class UClass*                                      MatineeCameraClass;                            // 0x0D00 (0x0008) [0x0000000000000000]               
	class AActor*                                      CalcViewActor;                                 // 0x0D08 (0x0008) [0x0000000000000000]               
	struct FVector                                     CalcViewActorLocation;                         // 0x0D10 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CalcViewActorRotation;                         // 0x0D1C (0x000C) [0x0000000000000000]               
	struct FVector                                     CalcViewLocation;                              // 0x0D28 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CalcViewRotation;                              // 0x0D34 (0x000C) [0x0000000000000000]               
	float                                              OnFootDefaultFOV;                              // 0x0D40 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	struct FRotator                                    DebugCamRot;                                   // 0x0D44 (0x000C) [0x0000000000000000]               
	struct FVector                                     DebugCamPos;                                   // 0x0D50 (0x000C) [0x0000000000000000]               
	float                                              DebugFreeCamSpeed;                             // 0x0D5C (0x0004) [0x0000000000000000]               
	float                                              DebugFreeCamFOV;                               // 0x0D60 (0x0004) [0x0000000000000000]               
	float                                              SlowDownFactor;                                // 0x0D64 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPlayerController");
		}

		return uClassPointer;
	};

	void eventUnlockAchievement(EOutlastAchievement achievement);
	void NotifyDifficultyChanged();
	void UpdateDifficultyBasedValues();
	void eventCheckForProfileUpdate();
	void eventUpdateLocalCacheOfProfileSettings(class UOLProfileSettings* EffectiveProfileSettings);
	void ClientSaveAllPlayerData(bool optionalBShouldForce, bool optionalBSkipCacheUpdate);
	void OnProfileWriteComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	void ClearSaveProfileDelegate(int32_t ControllerId, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void eventSaveProfile();
	void UnregisterPlayerDataStores();
	void RegisterCustomPlayerDataStores();
	bool ShippingCheat_GiveAllCheckpoints();
	void ClearAllProgress();
	void SaveBeforeQuitting();
	void eventClientCommitMapChange();
	void eventStartNewGameAtCheckpoint(class FString CheckpointStr, bool bSaveToDisk);
	void ApplyDeprecatedCheckpointRecord(struct FDeprecatedCheckpointRecord& OldRecord);
	void ApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record);
	void CreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record);
	void NativeApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record);
	void NativeCreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record);
	void SavePersistentState();
	void OnOverrideAIMusic(class UOLSeqAct_OverrideAIMusic* Action);
	void StopAllSounds();
	void DisplayDebug(class AHUD* H, float& out_YL, float& out_YPos);
	void DrawHUD(class AHUD* H);
	void eventFullScreenOverlayChanged();
	void eventForcePause(bool bPause);
	void ClientSetHUD(class UClass* newHUDType);
	void eventOnSetMesh(class USeqAct_SetMesh* Action);
	void eventClientSetCameraFade(bool _enableFading, struct FColor optional_FadeColor, struct FVector2D optional_FadeAlpha, float optional_FadeTime, bool optional_fadeAudio);
	void SetCinematicMode(class USeqAct_ToggleCinematicMode* Action, bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsButtons);
	void eventGetPlayerViewPoint(struct FVector& POVLocation, struct FRotator& POVRotation);
	float eventGetFOVAngle();
	void SpawnCamera();
	void SetCameraMode(struct FName NewCamMode);
	bool UsingFirstPersonCamera();
	void SetBehindView(bool bNewBehindView);
	void BehindView();
	void GammaCalibration();
	void PressedJump();
	void PressedReloadBatteries();
	void StopZoom();
	void StartZoomOut();
	void StartZoomIn();
	void ZoomOut();
	void ZoomIn();
	void ToggleCamcorder();
	void ToggleNightVision();
	void ReleasedUseButton();
	void PressedUseButton();
	bool PerformedUseAction();
	void SetPlayerFoundWhileHidden(class AOLEnemyPawn* SearchingEnemy);
	bool IsPlayerFindableWhileHidden(class AOLEnemyPawn* SearchingEnemy);
	void PlayerDied();
	void eventDestroyed();
	void ClientRestart(class APawn* NewPawn);
	void Reset();
	void eventUnPossess();
	void eventPossess(class APawn* inPawn, bool bVehicleTransition);
	void eventPostBeginPlay();
	void HideLoadingOverlay();
	void ShowLoadingOverlay();
	void SetVolume(float VolumeLevel);
	void SetGamma(float GammaValue);
	float GetGamma();
	void NativePlayerMove(float DeltaTime);
};

// Class OLGame.OLCheatManager
// 0x0030 OR 0x00D0 (0x00D0 - 0x00A0)
// 48 OR 208 (208 - 160)
class UOLCheatManager : public UGameCheatManager
{
public:
	int32_t                                            GameSpeedLevel;                                // 0x00A0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCheatsEnabled : 1;                            // 0x00A4 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           bUnlimitedBatteries : 1;                       // 0x00A4 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           bDebugGameplay : 1;                            // 0x00A4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDebugSoundEnvironment : 1;                    // 0x00A4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDebugGameState : 1;                           // 0x00A4 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bDebugCamera : 1;                              // 0x00A4 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bDebugTrajectory : 1;                          // 0x00A4 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bDrawDebugAI : 1;                              // 0x00A4 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bDebugWaitPoints : 1;                          // 0x00A4 (0x0004) [0x0000000000004000] [0x00000100] (CPF_Config)
	uint32_t                                           bMuted : 1;                                    // 0x00A4 (0x0004) [0x0000000000004000] [0x00000200] (CPF_Config)
	uint32_t                                           bDebugAIPositions : 1;                         // 0x00A4 (0x0004) [0x0000000000004000] [0x00000400] (CPF_Config)
	uint32_t                                           bSuppressAllMessages : 1;                      // 0x00A4 (0x0004) [0x0000000000004000] [0x00000800] (CPF_Config)
	uint32_t                                           bPausedForFreeCam : 1;                         // 0x00A4 (0x0004) [0x0000000000000000] [0x00001000] 
	class FString                                      DebugSoundEnvFilter;                           // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              NextSpikeTime;                                 // 0x00B8 (0x0004) [0x0000000000000000]               
	float                                              AutoSpikeDelay;                                // 0x00BC (0x0004) [0x0000000000000000]               
	TArray<struct FDebugTrajectoryPoint>               DebugTrajectoryPoints;                         // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCheatManager");
		}

		return uClassPointer;
	};

	void SetLanguage(class FString LanguageCode);
	void ReloadSoundBanks(bool bDLC);
	bool eventProcessCheatInput(class UOLPlayerInput* InputMgr, struct FName Key);
	bool IsViewModeUnlit();
	void SetFinishedGame(bool hasFinishedGame, bool hasFinishedDLC);
	void OutlastPause();
	void ResetGS();
	void ActivateGS(struct FName gsName);
	void DumpGS();
	void DebugGameState();
	void SuppressAllMessages();
	void DrawDebug();
	void ToggleMute();
	void InflictDamage(float optionalAmount);
	void ResetWorldState();
	void ResetPushables();
	void ResetDoors();
	void SetGamma(float newGamma);
	void DemoMode();
	void LoadGame(class FString Filename);
	void SaveGame(class FString Filename);
	void GiveItem(class FString ItemName);
	void ApplyCP(class FString CPName);
	void cplist();
	void cp(class FString CPName);
	void Checkpoint(class FString CPName);
	void KillFade();
	void ToggleUnlimitedBatteries();
	void RechargeNightVision();
	void Ghost();
	void GhostPawn(bool ghosting);
	void FasterGameSpeed();
	void SlowerGameSpeed();
	void NormalGameSpeed();
	void UpdateGameSpeed();
	void SingleFrame();
	void TeleportToFreeCam();
	void ToggleFixedCam();
	void ToggleFreeCamNoPause();
	void ToggleFreeCam();
	void AutoSpike(float optionalSpike, float optionalDelay);
	void Spike(float optionalSpike);
	void BadFPS(float optionalSlowdown);
	void DebugAIPositions();
	void DebugAI();
	void ShowHeroDebug();
	void ShowPaths();
	void ShowStatLevels();
	void DebugWaitPoints();
	void DebugTrajectory();
	void DebugCamera();
	void DebugSoundEnvironment(class FString optionalFilter);
	void DebugGameplay();
	void SaveAllCheckpoints();
	void DeleteAllSaves();
	void KillAll(class UClass* aClass);
	void ToggleCheats();
	static class UOLCheatManager* GetCheatManager();
	void AddDebugTrajectoryPoint(struct FDebugTrajectoryPoint Point);
};

// Class OLGame.OLCheckpoint
// 0x0014 OR 0x037C (0x037C - 0x0368)
// 20 OR 892 (892 - 872)
class AOLCheckpoint : public APlayerStart
{
public:
	struct FName                                       CheckpointName;                                // 0x0368 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bKillAllEnemies : 1;                           // 0x0370 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FName                                       PersistentLevelName;                           // 0x0374 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCheckpoint");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
	void SetEnabled(bool bEnable);
	void ResetCheckpointDeaths();
	void OnPlayerSpawn();
};

// Class OLGame.OLCheckpointList
// 0x0011 OR 0x0251 (0x0251 - 0x0240)
// 17 OR 593 (593 - 576)
class AOLCheckpointList : public AActor
{
public:
	TArray<struct FName>                               CheckpointList;                                // 0x0240 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	EOutlastGameType                                   GameType;                                      // 0x0250 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCheckpointList");
		}

		return uClassPointer;
	};

	static bool Script_IsUnreached(struct FName& TestCheckpoint, struct FName& CurrentCheckpoint);
};

// Class OLGame.OLCheckpointSave
// 0x0044 OR 0x00A4 (0x00A4 - 0x0060)
// 68 OR 164 (164 - 96)
class UOLCheckpointSave : public UObject
{
public:
	class FString                                      Filename;                                      // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FCheckpointTime                             SaveTime;                                      // 0x0070 (0x0010) [0x0000000000000000]               
	class FString                                      CheckpointName;                                // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    PlayerData;                                    // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bDeprecatedPlayerData : 1;                     // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCheckpointSave");
		}

		return uClassPointer;
	};

	bool eventCheckpointIsEmpty();
};

// Class OLGame.OLConsole
// 0x0000 OR 0x0270 (0x0270 - 0x0270)
// 0 OR 624 (624 - 624)
class UOLConsole : public UConsole
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLConsole");
		}

		return uClassPointer;
	};

	bool InputKey(int32_t ControllerId, struct FName Key, EInputEvent Event, float optionalAmountDepressed, bool optionalBGamepad);
	void AddCustomCommandsToAutoComplete();
};

// Class OLGame.OLDarknessVolume
// 0x0004 OR 0x02D8 (0x02D8 - 0x02D4)
// 4 OR 728 (728 - 724)
class AOLDarknessVolume : public APhysicsVolume
{
public:
	uint32_t                                           bDark : 1;                                     // 0x02D4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bOnlyDarkWhenCrouched : 1;                     // 0x02D4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bInitiallyDark : 1;                            // 0x02D4 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDarknessVolume");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLDLCManager
// 0x0004 OR 0x0114 (0x0114 - 0x0110)
// 4 OR 276 (276 - 272)
class UOLDLCManager : public UDownloadableContentManager
{
public:
	uint32_t                                           bDLCInstalled : 1;                             // 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFakeDLCInstalledCooked : 1;                   // 0x0110 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           bFakeDLCInstalledLoose : 1;                    // 0x0110 (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDLCManager");
		}

		return uClassPointer;
	};

	bool FindAndInstallDLC();
};

// Class OLGame.OLDmgType
// 0x0008 OR 0x0098 (0x0098 - 0x0090)
// 8 OR 152 (152 - 144)
class UOLDmgType : public UDamageType
{
public:
	float                                              SpeedPenaltyPctOnDamage;                       // 0x0090 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              SpeedPenaltyDuration;                          // 0x0094 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_Electrified
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_Electrified : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_Electrified");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_Fell
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_Fell : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_Fell");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_Fire
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_Fire : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_Fire");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_GenericHit
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_GenericHit : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_GenericHit");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_NanoFog
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_NanoFog : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_NanoFog");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_Scripted
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_Scripted : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_Scripted");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_SoldierDecapitate
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_SoldierDecapitate : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_SoldierDecapitate");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_SoldierPunch
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_SoldierPunch : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_SoldierPunch");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDmgType_SoldierThrow
// 0x0000 OR 0x0098 (0x0098 - 0x0098)
// 0 OR 152 (152 - 152)
class UOLDmgType_SoldierThrow : public UOLDmgType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDmgType_SoldierThrow");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLDoor
// 0x17C8 OR 0x1A08 (0x1A08 - 0x0240)
// 6088 OR 6664 (6664 - 576)
class AOLDoor : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;          // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IInterface_NavMeshPathObstacle;        // 0x0248 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UStaticMeshComponent*                        Mesh;                                          // 0x0250 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        DoorMainMesh;                                  // 0x0258 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      BreakingForwardMesh;                           // 0x0260 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BreakingForwardAnim;                           // 0x0268 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMeshComponent*                      BrokenForwardMesh;                             // 0x0270 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BrokenForwardAnim;                             // 0x0278 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMeshComponent*                      BreakingBackwardMesh;                          // 0x0280 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BreakingBackwardAnim;                          // 0x0288 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMeshComponent*                      BrokenBackwardMesh;                            // 0x0290 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BrokenBackwardAnim;                            // 0x0298 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDynamicLightEnvironmentComponent*           DoorMainLightEnvironment;                      // 0x02A0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOLSoundConnectorComponent*                  SoundConnectorComp;                            // 0x02A8 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOLWaitPointComponent*                       WaitPointComponent;                            // 0x02B0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              InitialOpenAngle;                              // 0x02B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxOpenAngle;                                  // 0x02BC (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              PlayerOpenedAngle;                             // 0x02C0 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bReverseDirection : 1;                         // 0x02C4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bLocked : 1;                                   // 0x02C4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bFakeUnlocked : 1;                             // 0x02C4 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bNoLockedInteraction : 1;                      // 0x02C4 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bAutoClose : 1;                                // 0x02C4 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bCantClose : 1;                                // 0x02C4 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bNoPushKnob : 1;                               // 0x02C4 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bAICanUseDoor : 1;                             // 0x02C4 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bAITraversing : 1;                             // 0x02C4 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bDontBreak : 1;                                // 0x02C4 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bAlwaysBreak : 1;                              // 0x02C4 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bWaitForTriggerToBreak : 1;                    // 0x02C4 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bTrimToDoorForInvestigate : 1;                 // 0x02C4 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bSplitNavMesh : 1;                             // 0x02C4 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           bAIAlwaysCloses : 1;                           // 0x02C4 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           bUseObstacleOnClose : 1;                       // 0x02C4 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           bPlayingLockedAnim : 1;                        // 0x02C4 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bPlayingBlockedAnim : 1;                       // 0x02C4 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bPlayingAutoCloseAnim : 1;                     // 0x02C4 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bBreakTriggered : 1;                           // 0x02C4 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bBlocked : 1;                                  // 0x02C4 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bWasInitiallyLocked : 1;                       // 0x02C4 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bInstantBreak : 1;                             // 0x02C4 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bPreciseCloseTiming : 1;                       // 0x02C4 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bObstacleRegistered : 1;                       // 0x02C4 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bPlayingOpeningSound : 1;                      // 0x02C4 (0x0004) [0x0000000000000000] [0x02000000] 
	float                                              OpeningSpeed;                                  // 0x02C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ClosingSpeed;                                  // 0x02CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExplicitOcclusionFactor;                       // 0x02D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DefaultOcclusionFactor;                        // 0x02D4 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class AOLCSA*                                      UnlockingCSA;                                  // 0x02D8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              LockerOpeningSpeed;                            // 0x02E0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockerClosingSpeed;                            // 0x02E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              StaticOffsetFwdToCenterNormal;                 // 0x02E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              StaticOffsetFwdToCenterLocker;                 // 0x02EC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockedAnimTotalTime;                           // 0x02F0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockedAnimAmplitude;                           // 0x02F4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BlockedAnimTotalTime;                          // 0x02F8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BlockedAnimAmplitude;                          // 0x02FC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AutoCloseAnimTotalTime;                        // 0x0300 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AutoCloseAnimAmplitude;                        // 0x0304 (0x0004) [0x0000000000000002] (CPF_Const)   
	EOLDoorType                                        DoorType;                                      // 0x0308 (0x0001) [0x0000000000000001] (CPF_Edit)    
	EDoorMaterial                                      DoorMaterial;                                  // 0x0309 (0x0001) [0x0000000000000000]               
	EOLDoorMeshType                                    DoorMeshType;                                  // 0x030A (0x0001) [0x0000000000000001] (CPF_Edit)    
	EDoorState                                         DoorState;                                     // 0x030B (0x0001) [0x0000000000000000]               
	EDoorBreakState                                    DoorBreakState;                                // 0x030C (0x0001) [0x0000000000000000]               
	struct FDoorMeshTypeData                           DoorMeshData[0x18];                            // 0x0310 (0x15C0) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UMaterialInstance*>                   MaterialOverrides;                             // 0x18D0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UPhysicsAsset*                               LeftPhysicsAsset;                              // 0x18E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPhysicsAsset*                               RightPhysicsAsset;                             // 0x18E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorKnobOffset;                                // 0x18F0 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              PathPointOffset;                               // 0x18FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NumBashesAfterBlocked;                         // 0x1900 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AIOpenDoorKnockback;                           // 0x1904 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OpenRatio;                                     // 0x1908 (0x0004) [0x0000000000000000]               
	float                                              TargetOpenRatio;                               // 0x190C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentSpeed;                                  // 0x1910 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ProceduralAnimElapsedTime;                     // 0x1914 (0x0004) [0x0000000000000000]               
	float                                              PreciseCloseDuration;                          // 0x1918 (0x0004) [0x0000000000000000]               
	float                                              PreciseCloseStartTime;                         // 0x191C (0x0004) [0x0000000000000000]               
	struct FDoorShakeData                              ShakeData;                                     // 0x1920 (0x0040) [0x0000000000000000]               
	struct FDoorShakeData                              BashShakeData;                                 // 0x1960 (0x0040) [0x0000000000000001] (CPF_Edit)    
	class AOLPawn*                                     DoorUser;                                      // 0x19A0 (0x0008) [0x0000000000000000]               
	class AOLBot*                                      ActiveBot;                                     // 0x19A8 (0x0008) [0x0000000000000000]               
	TArray<class AOLBot*>                              Bots;                                          // 0x19B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     Edge0Dest;                                     // 0x19C0 (0x000C) [0x0000000000000000]               
	struct FVector                                     Edge1Dest;                                     // 0x19CC (0x000C) [0x0000000000000000]               
	float                                              LastInteractiveSoundTime;                      // 0x19D8 (0x0004) [0x0000000000000000]               
	float                                              OpeningIntensity;                              // 0x19DC (0x0004) [0x0000000000000000]               
	TArray<struct FDoorSoundEvents>                    Sounds;                                        // 0x19E0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UAkEvent*                                    SndStopOpening;                                // 0x19F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndLockerBash;                                 // 0x19F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       RTPCOpeningDoorIntensity;                      // 0x1A00 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLDoor");
		}

		return uClassPointer;
	};

	void eventBreakDoor(class AOLPawn* Breaker, bool bReversed);
	void eventBashDoor(bool bReversed);
	bool eventShouldBreak(class AOLBot* Bot);
	void OnDestroy(class USeqAct_Destroy* Action);
	void SoftDestroy();
	void NotifyHandlesToWait();
	void NotifyHandlesToRepath();
	float GetOpenAngle();
	void TriggerEvent(EDoorEventType EventType, class AOLPawn* Triggerer);
	void TriggerBreakDoorCameraShake();
	void StopShaking();
	void StartShaking(struct FDoorShakeData ShakeParams, bool optionalBSwitchToBreakingMesh, bool optionalBReversed, bool optionalBFromAI);
	bool IsBroken();
	void UnregisterNavmeshObstacle();
	void RegisterNavMeshObstacle();
	struct FVector ScriptGetCenterLocation();
};

// Class OLGame.OLElectrifiedVolume
// 0x0014 OR 0x02E8 (0x02E8 - 0x02D4)
// 20 OR 744 (744 - 724)
class AOLElectrifiedVolume : public APhysicsVolume
{
public:
	uint32_t                                           bElectrified : 1;                              // 0x02D4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            TouchDamage;                                   // 0x02D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Knockback;                                     // 0x02DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    SoundEvent;                                    // 0x02E0 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLElectrifiedVolume");
		}

		return uClassPointer;
	};

	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal);
	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLElectrifiedWaterVolume
// 0x0004 OR 0x02D8 (0x02D8 - 0x02D4)
// 4 OR 728 (728 - 724)
class AOLElectrifiedWaterVolume : public APhysicsVolume
{
public:
	uint32_t                                           bElectrified : 1;                              // 0x02D4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLElectrifiedWaterVolume");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLEngine
// 0x0058 OR 0x0AEC (0x0AEC - 0x0A94)
// 88 OR 2796 (2796 - 2708)
class UOLEngine : public UGameEngine
{
public:
	TArray<struct FSaveFileInfo>                       SaveFiles;                                     // 0x0A94 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       PendingCheckpointName;                         // 0x0AA4 (0x0008) [0x0000000000000000]               
	ECheckpointAction                                  PendingCheckpointAction;                       // 0x0AAC (0x0001) [0x0000000000000000]               
	EOrbisDialogType                                   ActiveOrbisDialog;                             // 0x0AAD (0x0001) [0x0000000000000000]               
	uint32_t                                           bRestartingActiveCheckpoint : 1;               // 0x0AB0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPendingGraphicalSettingsChange : 1;           // 0x0AB0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisableMotionBlur : 1;                        // 0x0AB0 (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	uint32_t                                           bPausedForSystemDialog : 1;                    // 0x0AB0 (0x0004) [0x0000000000000000] [0x00000008] 
	class UOLCheckpointSave*                           CurrentCheckpointSave;                         // 0x0AB4 (0x0008) [0x0000008000000000]               
	int32_t                                            PendingNewLanguage;                            // 0x0ABC (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    StartupMovieSound;                             // 0x0AC0 (0x0008) [0x0000000000000000]               
	float                                              NextRefreshDLCTime;                            // 0x0AC8 (0x0004) [0x0000000000000000]               
	TArray<uint8_t>                                    SaveDataBuffer;                                // 0x0ACC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SaveDataDialogDoneCallback__Delegate;        // 0x0ADC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEngine");
		}

		return uClassPointer;
	};

	bool UpdateProfileKeyBindingsFromSystem(class UOLProfileSettings* ProfileSettings);
	bool UpdateProfileFromSystemSettings(class UOLProfileSettings* ProfileSettings);
	bool ApplyKeyBindings(class UOLProfileSettings* ProfileSettings);
	bool ApplySystemSettings(class UOLProfileSettings* ProfileSettings);
	bool LoadMostRecentSaveFile();
	bool LoadCurrentSaveFile();
	void RefreshSaveFiles();
	void DeleteSaveFile(class FString Filename);
	bool LoadSaveFile(class FString Filename);
	void DebugLoadGame(class FString Filename);
	void DebugSaveGame(class FString Filename);
	bool HasValidSaveGame();
	void SaveAllCheckpoints();
	void SaveCheckpointImmediate(struct FName CheckpointName);
	void SaveCheckpoint(struct FName CheckpointName, bool bSaveToDisk);
	void StartCurrentCheckpoint();
	void SelectAndLoadGame(struct FScriptDelegate Callback);
	void NativeSelectAndLoadGame();
	void SelectSaveLocation(class FString startCP, struct FScriptDelegate Callback);
	void NativeSelectSaveLocation(class FString startCP);
	void eventFinishedSaveDataDialog(bool bSuccess);
	void SaveDataDialogDoneCallback(bool bSuccess);
	bool UsingFixedSaveLocation();
	bool TryStartDLCGame();
	bool ShouldShowNewDLCGame();
	bool RefreshDLC();
	bool CheckReloadForDLC();
	void eventRestartPlayer(class AOLPlayerController* OLPC);
};

// Class OLGame.OLFloorMaterialVolume
// 0x0010 OR 0x028C (0x028C - 0x027C)
// 16 OR 652 (652 - 636)
class AOLFloorMaterialVolume : public AVolume
{
public:
	uint32_t                                           bEnabled : 1;                                  // 0x027C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            Priority;                                      // 0x0280 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0284 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLFloorMaterialVolume");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLFXHolder
// 0x0000 OR 0x0240 (0x0240 - 0x0240)
// 0 OR 576 (576 - 576)
class AOLFXHolder : public AActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLFXHolder");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLFXManager
// 0x0400 OR 0x0460 (0x0460 - 0x0060)
// 1024 OR 1120 (1120 - 96)
class UOLFXManager : public UObject
{
public:
	struct FPostProcessSettings                        NVPPSSettings;                                 // 0x0060 (0x0160) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPostProcessSettings                        DeathPPSSettings;                              // 0x01C0 (0x0160) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPostProcessChain*                           DefaultPPSChain;                               // 0x0320 (0x0008) [0x0000000000000000]               
	class UPostProcessChain*                           CamcorderPPSChain;                             // 0x0328 (0x0008) [0x0000000000000000]               
	class UPostProcessChain*                           CamcorderPPSChainConsole;                      // 0x0330 (0x0008) [0x0000000000000000]               
	class UPostProcessChain*                           NVPPSChain;                                    // 0x0338 (0x0008) [0x0000000000000000]               
	class UPostProcessChain*                           GammaCalibrationPPSChain;                      // 0x0340 (0x0008) [0x0000000000000000]               
	TArray<class UMaterialInstanceConstant*>           NVSensitiveMaterials;                          // 0x0348 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UMaterialInstanceConstant*                   CameraGlitchMat;                               // 0x0358 (0x0008) [0x0000000000000000]               
	class UOLUberPostProcessEffect*                    CurrentUberPostEffect;                         // 0x0360 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    ElectricSparksParticles;                       // 0x0368 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AOLFXHolder*                                 FXHolder;                                      // 0x0370 (0x0008) [0x0000000000000000]               
	struct FName                                       UberPostEffectName;                            // 0x0378 (0x0008) [0x0000000000000000]               
	struct FName                                       CameraGlitchEffectName;                        // 0x0380 (0x0008) [0x0000000000000000]               
	struct FName                                       NVParamName;                                   // 0x0388 (0x0008) [0x0000000000000000]               
	struct FName                                       NVLightParamName;                              // 0x0390 (0x0008) [0x0000000000000000]               
	struct FName                                       CameraGlitchParamName;                         // 0x0398 (0x0008) [0x0000000000000000]               
	float                                              CamcorderPPSOpacity;                           // 0x03A0 (0x0004) [0x0000000000000000]               
	float                                              CurrentElectricEffect;                         // 0x03A4 (0x0004) [0x0000000000000000]               
	float                                              LastSetElectricEffect;                         // 0x03A8 (0x0004) [0x0000000000000000]               
	float                                              CurrentHurtEffect;                             // 0x03AC (0x0004) [0x0000000000000000]               
	float                                              LastSetHurtEffect;                             // 0x03B0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bShowingHurtEffect : 1;                        // 0x03B4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShowingElectricityEffect : 1;                 // 0x03B4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSwarmBlurActive : 1;                          // 0x03B4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bShatteredGlassEffectActive : 1;               // 0x03B4 (0x0004) [0x0000000000000000] [0x00000008] 
	EPPSMode                                           CurrentPPSMode;                                // 0x03B8 (0x0001) [0x0000000000000000]               
	struct FBlurData                                   CurrentBlur;                                   // 0x03BC (0x001C) [0x0000000000000000]               
	struct FBlurData                                   HeatBlur;                                      // 0x03D8 (0x001C) [0x0000000000000000]               
	float                                              SwarmBlurAmount;                               // 0x03F4 (0x0004) [0x0000000000000000]               
	struct FCameraGlitchData                           CameraGlitch;                                  // 0x03F8 (0x0018) [0x0000000000000000]               
	class UAkEvent*                                    SndCameraGlitch;                               // 0x0410 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      CameraGlitchIntensity;                         // 0x0418 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FMovieEffectData                            MovieEffect;                                   // 0x0428 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       MovieEffectRTPC;                               // 0x0458 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLFXManager");
		}

		return uClassPointer;
	};

	void SetFXForEnemyPawn(class AOLEnemyPawn* EnemyPawn);
	void DeactivateNightVisionEffect();
	void ActivateCamcorderEffect();
	void ActivateNightVisionEffect(bool bPowered);
	void SetPPSFromScript(EPPSMode newPPS);
	static class UOLFXManager* GetFXManager();
};

// Class OLGame.OLGame
// 0x0058 OR 0x04F4 (0x04F4 - 0x049C)
// 88 OR 1268 (1268 - 1180)
class AOLGame : public AUDKGame
{
public:
	EDifficultyMode                                    DifficultyMode;                                // 0x049C (0x0001) [0x0000000000000000]               
	struct FName                                       DefaultMapName;                                // 0x04A0 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       DemoMapName;                                   // 0x04A8 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       DLCInstalledMapName;                           // 0x04B0 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       CurrentCheckpointName;                         // 0x04B8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsDemo : 1;                                   // 0x04C0 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           bForcePlayingDLC : 1;                          // 0x04C0 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           bIsPlayingDLC : 1;                             // 0x04C0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bSoundOnPause : 1;                             // 0x04C0 (0x0004) [0x0000000000000000] [0x00000008] 
	class UOLVoiceManager*                             VoiceManager;                                  // 0x04C4 (0x0008) [0x0000000000000000]               
	struct FName                                       PendingCheckpointName;                         // 0x04CC (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SndPause;                                      // 0x04D4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndUnpause;                                    // 0x04DC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndPauseNoSound;                               // 0x04E4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndUnpauseNoSound;                             // 0x04EC (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLGame");
		}

		return uClassPointer;
	};

	void eventClearPause();
	bool SetPause(class APlayerController* PC, struct FScriptDelegate optionalCanUnpauseDelegate);
	void HandleUnpaused();
	void HandlePaused();
	void SetGameSpeed(float T);
	void eventTravelToStartupMap();
	void RestartPlayer(class AController* NewPlayer);
	void UpdateGameType();
	void eventOnPlayerSpawned(class AController* NewPlayer, class ANavigationPoint* StartPoint);
	class ANavigationPoint* FindPlayerStart(class AController* Player, uint8_t optionalInTeam, class FString optionalIncomingName);
	class AOLCheckpoint* MatchCheckpoint(class FString PortalName);
	bool AllowCheats(class APlayerController* P);
	static bool IsDLCInstalled();
	static bool IsPlayingDLC();
	static bool IsDemo();
	static class UClass* eventSetGameType(class FString MapName, class FString Options, class FString Portal);
};

// Class OLGame.OLGameplayMarker
// 0x0004 OR 0x0244 (0x0244 - 0x0240)
// 4 OR 580 (580 - 576)
class AOLGameplayMarker : public AActor
{
public:
	uint32_t                                           bEnabled : 1;                                  // 0x0240 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bInitiallyEnabled : 1;                         // 0x0240 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLGameplayMarker");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLAIVaultMarker
// 0x0048 OR 0x028C (0x028C - 0x0244)
// 72 OR 652 (652 - 580)
class AOLAIVaultMarker : public AOLGameplayMarker
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;          // 0x0244 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              VaultWidth;                                    // 0x024C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NonChaseCostMultiplier;                        // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UOLWaitPointComponent*                       WaitPointComponent;                            // 0x0254 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     EndPointOne;                                   // 0x025C (0x000C) [0x0000000000000000]               
	struct FVector                                     EndPointTwo;                                   // 0x0268 (0x000C) [0x0000000000000000]               
	class AOLBot*                                      ActiveBot;                                     // 0x0274 (0x0008) [0x0000000000000000]               
	TArray<class AOLBot*>                              Bots;                                          // 0x027C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAIVaultMarker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBed
// 0x002C OR 0x0270 (0x0270 - 0x0244)
// 44 OR 624 (624 - 580)
class AOLBed : public AOLGameplayMarker
{
public:
	class UOLWaitPointComponent*                       WaitPointComponent;                            // 0x0244 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ThrowOffsetLeft;                               // 0x024C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ThrowOffsetRight;                              // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FindHiddenPlayerProbability;                   // 0x0254 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AOLBot*                                      ActiveBot;                                     // 0x0258 (0x0008) [0x0000000000000000]               
	TArray<class AOLBot*>                              Bots;                                          // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBed");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLCornerMarker
// 0x0018 OR 0x025C (0x025C - 0x0244)
// 24 OR 604 (604 - 580)
class AOLCornerMarker : public AOLGameplayMarker
{
public:
	uint32_t                                           b3Sided : 1;                                   // 0x0244 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRoundedCorner : 1;                            // 0x0244 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanPeekFromLeftStanding : 1;                  // 0x0244 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanPeekFromRightStanding : 1;                 // 0x0244 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bCanPeekFromLeftCrouched : 1;                  // 0x0244 (0x0004) [0x0000000000020000] [0x00000010] (CPF_EditConst)
	uint32_t                                           bCanPeekFromRightCrouched : 1;                 // 0x0244 (0x0004) [0x0000000000020000] [0x00000020] (CPF_EditConst)
	float                                              WallThickness;                                 // 0x0248 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      BoundStaticMesh;                               // 0x024C (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCornerMarker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLCSA
// 0x0064 OR 0x02A8 (0x02A8 - 0x0244)
// 100 OR 680 (680 - 580)
class AOLCSA : public AOLGameplayMarker
{
public:
	uint32_t                                           bAutomatic : 1;                                // 0x0244 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCheckLOS : 1;                                 // 0x0244 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bConsumeItem : 1;                              // 0x0244 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bNoPrompt : 1;                                 // 0x0244 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bShowPropAfterLastValidCheckpoint : 1;         // 0x0244 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	int32_t                                            MaxTriggerCount;                               // 0x0248 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InteractDistHorz;                              // 0x024C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InteractDistVert;                              // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InteractRadius;                                // 0x0254 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPlayerAngle;                                // 0x0258 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RequiredItem;                                  // 0x025C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName;                                      // 0x0264 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimStartDistFwd;                              // 0x026C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimStartDistRight;                            // 0x0270 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      ReferenceAnimActor;                            // 0x0274 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ActivationPromptTextId;                        // 0x027C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RequiredItemPromptTextId;                      // 0x0284 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AStaticMeshActor*                            AnimatedProp;                                  // 0x028C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       LastValidCheckpoint;                           // 0x0294 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TriggerCount;                                  // 0x029C (0x0004) [0x0000000000000000]               
	class UDrawSphereComponent*                        PreviewComp;                                   // 0x02A0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCSA");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLHeatMarker
// 0x0010 OR 0x0254 (0x0254 - 0x0244)
// 16 OR 596 (596 - 580)
class AOLHeatMarker : public AOLGameplayMarker
{
public:
	class UDrawSphereComponent*                        PreviewComp;                                   // 0x0244 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bNoDamage : 1;                                 // 0x024C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              Radius;                                        // 0x0250 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLHeatMarker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLHidingSpot
// 0x002C OR 0x0270 (0x0270 - 0x0244)
// 44 OR 624 (624 - 580)
class AOLHidingSpot : public AOLGameplayMarker
{
public:
	class AOLDoor*                                     AssociatedDoor;                                // 0x0244 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOLWaitPointComponent*                       WaitPointComponent;                            // 0x024C (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              FindHiddenPlayerProbability;                   // 0x0254 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AOLBot*                                      ActiveBot;                                     // 0x0258 (0x0008) [0x0000000000000000]               
	TArray<class AOLBot*>                              Bots;                                          // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLHidingSpot");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLLadderMarker
// 0x0008 OR 0x024C (0x024C - 0x0244)
// 8 OR 588 (588 - 580)
class AOLLadderMarker : public AOLGameplayMarker
{
public:
	class AOLLadderMarker*                             OtherMarker;                                   // 0x0244 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLLadderMarker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLLedgeMarker
// 0x0074 OR 0x02B8 (0x02B8 - 0x0244)
// 116 OR 696 (696 - 580)
class AOLLedgeMarker : public AOLGameplayMarker
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;          // 0x0244 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class AOLLedgeMarker*                              Next;                                          // 0x024C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AOLLedgeMarker*                              Prev;                                          // 0x0254 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              PathOffset;                                    // 0x025C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           AICanVault : 1;                                // 0x0260 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanLedgeWalk : 1;                             // 0x0260 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanLedgeHang : 1;                             // 0x0260 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanClimbUp : 1;                               // 0x0260 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bCanDropDown : 1;                              // 0x0260 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bCanSlide : 1;                                 // 0x0260 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	int32_t                                            NonChaseCostMultiplier;                        // 0x0264 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UOLWaitPointComponent*                       WaitPointComponent;                            // 0x0268 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     WaitPointStartOffset;                          // 0x0270 (0x000C) [0x0000000000000000]               
	struct FVector                                     WaitPointAdditionalOffset;                     // 0x027C (0x000C) [0x0000000000000000]               
	struct FVector                                     TopPoint;                                      // 0x0288 (0x000C) [0x0000000000000000]               
	struct FVector                                     BottomPoint;                                   // 0x0294 (0x000C) [0x0000000000000000]               
	class AOLBot*                                      ActiveBot;                                     // 0x02A0 (0x0008) [0x0000000000000000]               
	TArray<class AOLBot*>                              Bots;                                          // 0x02A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLLedgeMarker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLPreferredPathMarker
// 0x0008 OR 0x024C (0x024C - 0x0244)
// 8 OR 588 (588 - 580)
class AOLPreferredPathMarker : public AOLGameplayMarker
{
public:
	class AOLPreferredPathMarker*                      Next;                                          // 0x0244 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPreferredPathMarker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLRecordingMarker
// 0x0028 OR 0x026C (0x026C - 0x0244)
// 40 OR 620 (620 - 580)
class AOLRecordingMarker : public AOLGameplayMarker
{
public:
	float                                              Radius;                                        // 0x0244 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       MomentName;                                    // 0x0248 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MinRecordingDuration;                          // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAllowNonContinuousRecording : 1;              // 0x0254 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRecorded : 1;                                 // 0x0254 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bRecording : 1;                                // 0x0254 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	float                                              NotificationDelay;                             // 0x0258 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartedRecordingTime;                          // 0x025C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AccumulatedRecordingTime;                      // 0x0260 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDrawSphereComponent*                        PreviewComp;                                   // 0x0264 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLRecordingMarker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLScareMoment
// 0x0020 OR 0x0264 (0x0264 - 0x0244)
// 32 OR 612 (612 - 580)
class AOLScareMoment : public AOLGameplayMarker
{
public:
	class UAkEvent*                                    StartEvent;                                    // 0x0244 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    StopEvent;                                     // 0x024C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       DistanceRTPC;                                  // 0x0254 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Range;                                         // 0x025C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPlaying : 1;                                  // 0x0260 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLScareMoment");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
	void eventStopScare();
	void eventStartScare();
};

// Class OLGame.OLGameplayVolume
// 0x0000 OR 0x02D4 (0x02D4 - 0x02D4)
// 0 OR 724 (724 - 724)
class AOLGameplayVolume : public APhysicsVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLGameplayVolume");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAIVisionObstructionVolume
// 0x0000 OR 0x02D4 (0x02D4 - 0x02D4)
// 0 OR 724 (724 - 724)
class AOLAIVisionObstructionVolume : public AOLGameplayVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAIVisionObstructionVolume");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLSqueezeVolume
// 0x0014 OR 0x02E8 (0x02E8 - 0x02D4)
// 20 OR 744 (744 - 724)
class AOLSqueezeVolume : public AOLGameplayVolume
{
public:
	class AOLGameplayMarker*                           Node1;                                         // 0x02D4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AOLGameplayMarker*                           Node2;                                         // 0x02DC (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCanLookLeft : 1;                              // 0x02E4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanLookRight : 1;                             // 0x02E4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bNoHands : 1;                                  // 0x02E4 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSqueezeVolume");
		}

		return uClassPointer;
	};

	void eventPostBeginPlay();
};

// Class OLGame.OLGameStateList
// 0x0011 OR 0x0251 (0x0251 - 0x0240)
// 17 OR 593 (593 - 576)
class AOLGameStateList : public AActor
{
public:
	TArray<struct FOLGameState>                        GameStateList;                                 // 0x0240 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	EOutlastGameType                                   GameType;                                      // 0x0250 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLGameStateList");
		}

		return uClassPointer;
	};

	static void OnPlayerDeath();
	static void ResetAllGameState();
	static void DumpGameState();
};

// Class OLGame.OLGameViewportClient
// 0x0000 OR 0x01B0 (0x01B0 - 0x01B0)
// 0 OR 432 (432 - 432)
class UOLGameViewportClient : public UUDKGameViewportClient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLGameViewportClient");
		}

		return uClassPointer;
	};

	void DrawTransition(class UCanvas* Canvas);
};

// Class OLGame.OLHeatVolume
// 0x0000 OR 0x02D4 (0x02D4 - 0x02D4)
// 0 OR 724 (724 - 724)
class AOLHeatVolume : public APhysicsVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLHeatVolume");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLHeroCamera
// 0x01E4 OR 0x0244 (0x0244 - 0x0060)
// 484 OR 580 (580 - 96)
class UOLHeroCamera : public UObject
{
public:
	class AOLHero*                                     Hero;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	struct FCamView                                    ViewWS;                                        // 0x0068 (0x0018) [0x0000000000000000]               
	struct FCamView                                    ViewCS;                                        // 0x0080 (0x0018) [0x0000000000000000]               
	struct FViewLimits                                 Limits;                                        // 0x0098 (0x0010) [0x0000000000000000]               
	struct FViewLimits                                 SoftLimits;                                    // 0x00A8 (0x0010) [0x0000000000000000]               
	float                                              SoftZonePitch;                                 // 0x00B8 (0x0004) [0x0000000000000000]               
	float                                              SoftZoneYaw;                                   // 0x00BC (0x0004) [0x0000000000000000]               
	struct FRotator                                    BaseRotation;                                  // 0x00C0 (0x000C) [0x0000000000000000]               
	struct FVector                                     BaseLocation;                                  // 0x00CC (0x000C) [0x0000000000000000]               
	struct FSmoothingData                              BaseViewSmoothing;                             // 0x00D8 (0x0024) [0x0000000000000000]               
	float                                              InputYaw;                                      // 0x00FC (0x0004) [0x0000000000000000]               
	float                                              InputPitch;                                    // 0x0100 (0x0004) [0x0000000000000000]               
	float                                              NeckOffsetFwd;                                 // 0x0104 (0x0004) [0x0000000000000000]               
	float                                              NeckOffsetSide;                                // 0x0108 (0x0004) [0x0000000000000000]               
	float                                              NeckOffsetBaseYaw;                             // 0x010C (0x0004) [0x0000000000000000]               
	float                                              LookBackRatio;                                 // 0x0110 (0x0004) [0x0000000000000000]               
	float                                              LeanPushingRatio;                              // 0x0114 (0x0004) [0x0000000000000000]               
	uint32_t                                           bActiveLookAt : 1;                             // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUserControlsPawnRotation : 1;                 // 0x0118 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bLocalSpacePlayerControl : 1;                  // 0x0118 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              PendingYawCorrection;                          // 0x011C (0x0004) [0x0000000000000000]               
	struct FTargettedSmoothingData                     TargettedYawSmoothing;                         // 0x0120 (0x0014) [0x0000000000000000]               
	struct FCameraShakeData                            ShakeData;                                     // 0x0134 (0x007C) [0x0000000000000000]               
	struct FCameraShakeData                            SmallLandingShakeData;                         // 0x01B0 (0x007C) [0x0000000000000002] (CPF_Const)   
	class UForceFeedbackWaveform*                      CamShakeFFWaveform;                            // 0x022C (0x0008) [0x0000000000000000]               
	struct FName                                       CameraBoneName;                                // 0x0234 (0x0008) [0x0000000000004000] (CPF_Config)  
	float                                              ViewLimitsSoftZone;                            // 0x023C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              SoftZoneStiffness;                             // 0x0240 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLHeroCamera");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLHUD
// 0x017C OR 0x084C (0x084C - 0x06D0)
// 380 OR 2124 (2124 - 1744)
class AOLHUD : public AUDKHUD
{
public:
	class AOLBot*                                      CurrentDebugBot;                               // 0x06D0 (0x0008) [0x0000000000000000]               
	uint32_t                                           bGammaCalibrationOpen : 1;                     // 0x06D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSplashScreenOpen : 1;                         // 0x06D8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSplashScreenReady : 1;                        // 0x06D8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bGameOver : 1;                                 // 0x06D8 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bShowCrosshair : 1;                            // 0x06D8 (0x0004) [0x0000000000004000] [0x00000010] (CPF_Config)
	uint32_t                                           bCrosshairDesired : 1;                         // 0x06D8 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bAlwaysShowPrompts : 1;                        // 0x06D8 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bShowSubtitles : 1;                            // 0x06D8 (0x0004) [0x0000000000004000] [0x00000080] (CPF_Config)
	uint32_t                                           bForcePS4UI : 1;                               // 0x06D8 (0x0004) [0x0000000000004000] [0x00000100] (CPF_Config)
	uint32_t                                           bLostFocus : 1;                                // 0x06D8 (0x0004) [0x0000000000000000] [0x00000200] 
	EPPSMode                                           PreGammaPPSMode;                               // 0x06DC (0x0001) [0x0000000000000000]               
	EHUDMessageType                                    CurrentMessageType;                            // 0x06DD (0x0001) [0x0000000000000000]               
	float                                              SplashScreenActivatedTimestamp;                // 0x06E0 (0x0004) [0x0000000000000000]               
	float                                              CrosshairOpacity;                              // 0x06E4 (0x0004) [0x0000000000000000]               
	float                                              LastCrosshairUpdateRealTime;                   // 0x06E8 (0x0004) [0x0000000000000000]               
	float                                              InteractionCrosshairPct;                       // 0x06EC (0x0004) [0x0000000000000000]               
	float                                              NewObjectiveTimestamp;                         // 0x06F0 (0x0004) [0x0000000000000000]               
	struct FVector                                     NewObjectiveHeroPos;                           // 0x06F4 (0x000C) [0x0000000000000000]               
	float                                              NewObjectiveZoneRadius;                        // 0x0700 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ShowInventoryTimestamp;                        // 0x0704 (0x0004) [0x0000000000000000]               
	float                                              LastCamCycleTime;                              // 0x0708 (0x0004) [0x0000000000000000]               
	struct FName                                       LatestRecordingName;                           // 0x070C (0x0008) [0x0000000000000000]               
	float                                              LatestRecordingTimer;                          // 0x0714 (0x0004) [0x0000000000000000]               
	struct FName                                       LatestDocumentName;                            // 0x0718 (0x0008) [0x0000000000000000]               
	float                                              LatestDocumentTimer;                           // 0x0720 (0x0004) [0x0000000000000000]               
	float                                              NewObjectiveTimer;                             // 0x0724 (0x0004) [0x0000000000000000]               
	float                                              LatestCheckpointTimer;                         // 0x0728 (0x0004) [0x0000000000000000]               
	float                                              SubtitleMaxDistance;                           // 0x072C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SubtitleMaxDistanceOccluded;                   // 0x0730 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SubtitleOcclusionThreshold;                    // 0x0734 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SubtitleObstructionThreshold;                  // 0x0738 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FSubtitleData>                       SubtitleQueue;                                 // 0x073C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CurrentSubtitle;                               // 0x074C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture2D*                                  InventoryBackgoundImg;                         // 0x075C (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  NormalCrosshairImage;                          // 0x0764 (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  InteractionCrosshairImage;                     // 0x076C (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  SplashScreenImage;                             // 0x0774 (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  GameOverImage;                                 // 0x077C (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  GameOverImageDemo;                             // 0x0784 (0x0008) [0x0000000000000000]               
	class UFont*                                       SmallFont;                                     // 0x078C (0x0008) [0x0000000000000000]               
	class UFont*                                       MediumFont;                                    // 0x0794 (0x0008) [0x0000000000000000]               
	class UFont*                                       LargeFont;                                     // 0x079C (0x0008) [0x0000000000000000]               
	class UFont*                                       HugeFont;                                      // 0x07A4 (0x0008) [0x0000000000000000]               
	class UOLCamcorderHud*                             CamcorderHUD;                                  // 0x07AC (0x0008) [0x0000000000000000]               
	class UOLMainHud*                                  MainHUD;                                       // 0x07B4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEventSelect;                              // 0x07BC (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEventEnter;                               // 0x07C4 (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd*                               MenuManager;                                   // 0x07CC (0x0008) [0x0000000000000000]               
	class UOLUIMessage*                                ObjectiveScreen;                               // 0x07D4 (0x0008) [0x0000000000000000]               
	class UOLUIMessage*                                MessageScreen;                                 // 0x07DC (0x0008) [0x0000000000000000]               
	class UOLUIMessage*                                SubtitleScreen;                                // 0x07E4 (0x0008) [0x0000000000000000]               
	class FString                                      CurrentObjectiveText;                          // 0x07EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CurrentMessageText;                            // 0x07FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastUntranslatedMessageText;                   // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CachedTranslatedMessageText;                   // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGenericMessage>                     GenericMessages;                               // 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CanUnpauseInPauseMenu__Delegate;             // 0x083C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLHUD");
		}

		return uClassPointer;
	};

	void GamepadConfigChanged();
	void eventOnLostFocusPause(bool bEnable);
	void ShowHUDMessages();
	void HideHUDMessages();
	bool eventShowingSubtitle();
	void eventHideSubtitle();
	void eventShowSubtitle(class FString MessageText);
	void eventHideObjective();
	void eventShowObjective(class FString ObjectiveText);
	void eventHideMessage();
	void eventShowMessage(EHUDMessageType MessageType, class FString MessageText);
	void HideMenu();
	void eventShowMenuType(EMenuType MenuType);
	void PostSoundEventEnter();
	void PostSoundEventSelect();
	void MuteSelectSound(float optionalMuteTime);
	bool CanShowSubMenu();
	void ShowEvidenceMenu();
	void ShowRecordingMenu();
	void ShowTabMenu();
	void ShowMenu();
	void ShowMainMenu();
	void ReloadMenu();
	bool eventIsAMenuOpen();
	bool eventIsInCreditsMenu();
	bool eventIsOnMainMenuScreen();
	bool eventIsMainMenuOpen();
	bool eventIsInPauseMenu();
	bool CanUnpauseInPauseMenu();
	void ShowDebugInfo(float& out_YL, float& out_YPos);
	void DebugNextAI();
	void NotifyGameSaved();
	void SetGammaCalibrationActive(bool bActive);
	bool ShowingFullScreenOverlay();
	void Draw();
};

// Class OLGame.OLInterpTrackInstPPSEffectParam
// 0x0008 OR 0x0068 (0x0068 - 0x0060)
// 8 OR 104 (104 - 96)
class UOLInterpTrackInstPPSEffectParam : public UInterpTrackInst
{
public:
	float                                              PreviousParamValue;                            // 0x0060 (0x0004) [0x0000000000000000]               
	uint32_t                                           PreviousEffectShown : 1;                       // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLInterpTrackInstPPSEffectParam");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLInterpTrackPPSEffectParam
// 0x0019 OR 0x00F1 (0x00F1 - 0x00D8)
// 25 OR 241 (241 - 216)
class UOLInterpTrackPPSEffectParam : public UInterpTrackFloatBase
{
public:
	class UMaterialInstanceConstant*                   EffectMaterial;                                // 0x00D8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ParamName;                                     // 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EffectName;                                    // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	ETrackPropertyType                                 PropertyType;                                  // 0x00F0 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLInterpTrackPPSEffectParam");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLInventoryManager
// 0x0050 OR 0x00B0 (0x00B0 - 0x0060)
// 80 OR 176 (176 - 96)
class UOLInventoryManager : public UObject
{
public:
	TArray<struct FName>                               OwnedInventory;                                // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               CollectedDocuments;                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               UnreadDocuments;                               // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             SavedBatteryLocs;                              // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             UnsavedBatteryLocs;                            // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLInventoryManager");
		}

		return uClassPointer;
	};

	void ClearGameplayItems();
	void ClearUnsavedBatteries();
};

// Class OLGame.OLMainHud
// 0x002C OR 0x0210 (0x0210 - 0x01E4)
// 44 OR 528 (528 - 484)
class UOLMainHud : public UGFxMoviePlayer
{
public:
	class AOLHUD*                                      HUD;                                           // 0x01E4 (0x0008) [0x0000000000000000]               
	class FString                                      SavingMessageText;                             // 0x01EC (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FMainHudObjects                             Objects;                                       // 0x01FC (0x0010) [0x0000000000000000]               
	struct FMainHudState                               HudState;                                      // 0x020C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLMainHud");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
};

// Class OLGame.OLPawn
// 0x2430 OR 0x2BBC (0x2BBC - 0x078C)
// 9264 OR 11196 (11196 - 1932)
class AOLPawn : public AUDKPawn
{
public:
	class AOLPawn*                                     DefaultPawn;                                   // 0x078C (0x0008) [0x0000000000000000]               
	class UOLAnimNodeSlot*                             FullBodyAnimSlot;                              // 0x0794 (0x0008) [0x0000000000000000]               
	class UOLAnimCustomBlend*                          CustomBlendNode;                               // 0x079C (0x0008) [0x0000000000000000]               
	struct FVector                                     RealVelocity;                                  // 0x07A4 (0x000C) [0x0000000000000000]               
	struct FVector                                     PreviousLocation;                              // 0x07B0 (0x000C) [0x0000000000000000]               
	ELocomotionMode                                    LocomotionMode;                                // 0x07BC (0x0001) [0x0000000000000000]               
	ESpecialMoveType                                   SpecialMove;                                   // 0x07BD (0x0001) [0x0000000000000000]               
	struct FSpecialMoveParameters                      SpecialMoveParams[0x66];                       // 0x07C0 (0x2310) [0x0000000000000000]               
	uint32_t                                           bPlayingSpecialMoveAnim : 1;                   // 0x2AD0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDelayedSpecialMoveAnim : 1;                   // 0x2AD0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSpecialMoveInterruptible : 1;                 // 0x2AD0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPendingSpecialMoveAnims : 1;                  // 0x2AD0 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bFilterAnimEndNotifies : 1;                    // 0x2AD0 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bProceduralAnimsDelayedAfterSpecialMove : 1;   // 0x2AD0 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bRepelsAI : 1;                                 // 0x2AD0 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bFailedCollisionSet : 1;                       // 0x2AD0 (0x0004) [0x0000000000000000] [0x00000080] 
	TArray<struct FName>                               PlayingSpecialMoveAnims;                       // 0x2AD4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FAdjustPositionData                         AdjustPosition;                                // 0x2AE4 (0x0038) [0x0000000000000000]               
	TArray<struct FProceduralAnimData>                 ProceduralAnims;                               // 0x2B1C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ProceduralAnimLinearVelocity;                  // 0x2B2C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ProceduralAnimAngularVelocity;                 // 0x2B30 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FTurningData                                Turning;                                       // 0x2B34 (0x0028) [0x0000000000000000]               
	float                                              MaxFootstepDistSq;                             // 0x2B5C (0x0004) [0x0000000000000000]               
	float                                              MaxJumpSoundDistSq;                            // 0x2B60 (0x0004) [0x0000000000000000]               
	float                                              RepulsionMaxDistance;                          // 0x2B64 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RepulsionCollisionAngle;                       // 0x2B68 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RepulsionCollisionFactor;                      // 0x2B6C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RepulsionMagnitudeFactor;                      // 0x2B70 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RepulsionMaxMagnitude;                         // 0x2B74 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RepulsionSidestepFactor;                       // 0x2B78 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                              // 0x2B7C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       HeadBoneName;                                  // 0x2B84 (0x0008) [0x0000000000000000]               
	float                                              DefaultAirControl;                             // 0x2B8C (0x0004) [0x0000000000000000]               
	float                                              DestinationPredictionFactor;                   // 0x2B90 (0x0004) [0x0000000000000000]               
	float                                              DestinationPredictionMax;                      // 0x2B94 (0x0004) [0x0000000000000000]               
	struct FName                                       FloorMaterialGroup;                            // 0x2B98 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    FootStepSound_Walk;                            // 0x2BA0 (0x0008) [0x0000000000000000]               
	class FString                                      SubtitleName;                                  // 0x2BA8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              PendingAnimSetUpdateTime;                      // 0x2BB8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPawn");
		}

		return uClassPointer;
	};

	static void DrawDebugAnimNode(struct FName NodeName, class UAnimNode* aNode, class UCanvas* aCanvas, float XL, float XBasePos, float XOffset, TArray<class UAnimNode*>& visitedNodes, float& out_YL, float& out_YPos);
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	struct FVector GetFutureDestination(class AOLPawn* Agent);
	bool IsFirstPerson();
	void PlayLanded(float ImpactVel);
	void eventLanded(struct FVector HitNormal, class AActor* FloorActor);
	void eventDestroyed();
	void eventMAT_BeginAIGroup(struct FVector StartLoc, struct FRotator StartRot, float BlendTime);
	void StartMatinee(struct FVector StartLoc, struct FRotator StartRot, float BlendTime);
	void eventPostInitAnimTree(class USkeletalMeshComponent* SkelComp);
	void PlayVOLine(class UAkEvent* LineToPlay, struct FName optionalBoneName);
	void PlayJumpingSound();
	void PlayLandingSound();
	struct FName GetMaterialBelowFeet();
	void ClientRestart();
	void eventPlayFootStepSound(int32_t FootDown, class UAnimNotify_Footstep* footstepNotify);
	void FaceRotation(struct FRotator NewRotation, float DeltaTime);
	float GetEyeHeight();
	class USoundCue* GetPawnAmbientSound();
	void SetPawnAmbientSound(class USoundCue* NewAmbientSound);
	bool Died(class AController* Killer, class UClass* DamageType, struct FVector HitLocation);
	void eventEncroachedBy(class AActor* Other);
	void SetPawnRBChannels(bool bRagdollMode);
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void ReattachMesh();
	void UpdateShadowSettings(bool bWantShadow);
	void PostBeginPlay();
	void ProceduralAdjustNotify(float Duration);
	void RestoreCollisionSizeNotify();
	void ChangeCollisionSizeNotify();
	void MoveInterruptibleNotify();
	void NativePostBeginPlay();
	void NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StartSpecialMove(ESpecialMoveType moveType, struct FVector optionalTargetPosition, struct FVector optionalTargetDirection, EAdjustPositionTargetType optionalTargetType);
	bool IsSpecialMoveCompleted();
};

// Class OLGame.OLHero
// 0x18B8 OR 0x4474 (0x4474 - 0x2BBC)
// 6328 OR 17524 (17524 - 11196)
class AOLHero : public AOLPawn
{
public:
	class AOLPlayerController*                         OLPC;                                          // 0x2BBC (0x0008) [0x0000000000000000]               
	class AOLHero*                                     DefaultHero;                                   // 0x2BC4 (0x0008) [0x0000000000000000]               
	struct FVector                                     CharForward;                                   // 0x2BCC (0x000C) [0x0000000000000000]               
	struct FVector                                     EyeForward;                                    // 0x2BD8 (0x000C) [0x0000000000000000]               
	TArray<class AOLLedgeMarker*>                      CachedMarkers;                                 // 0x2BE4 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLHidingSpot*>                       CachedHidingSpots;                             // 0x2BF4 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLDoor*>                             CachedDoors;                                   // 0x2C04 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLBed*>                              CachedBeds;                                    // 0x2C14 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLPickableObject*>                   CachedPickables;                               // 0x2C24 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLLadderMarker*>                     CachedLadders;                                 // 0x2C34 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLCSA*>                              CachedCSAs;                                    // 0x2C44 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLScareMoment*>                      CachedScares;                                  // 0x2C54 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLPushableObject*>                   CachedPushables;                               // 0x2C64 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLCornerMarker*>                     CachedCorners;                                 // 0x2C74 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLHeatMarker*>                       CachedHeatMarkers;                             // 0x2C84 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLRecordingMarker*>                  CachedRecordingMarkers;                        // 0x2C94 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLPreferredPathMarker*>              CachedPreferredPathMarkers;                    // 0x2CA4 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class ALight*>                              CachedLights;                                  // 0x2CB4 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FVector                                     CachedObjectsPos;                              // 0x2CC4 (0x000C) [0x0000000000002000] (CPF_Transient)
	TArray<struct FPointer>                            CachedLevelList;                               // 0x2CD0 (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class USkeletalMeshComponent*                      ShadowProxy;                                   // 0x2CE0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        HeadMesh;                                      // 0x2CE8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      CameraMesh;                                    // 0x2CF0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      CameraMeshShadowProxy;                         // 0x2CF8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    BloodEffect;                                   // 0x2D00 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    DeathParticles;                                // 0x2D08 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    DecapitatedBloodEffect;                        // 0x2D10 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    RainEffect;                                    // 0x2D18 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    WaterFootstepParticlesLeft;                    // 0x2D20 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    WaterFootstepParticlesRight;                   // 0x2D28 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    WaterSplashParticles;                          // 0x2D30 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    GenericCameraEffect;                           // 0x2D38 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpotLightComponent*                         NVLightPowered;                                // 0x2D40 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpotLightComponent*                         NVLightDefault;                                // 0x2D48 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpotLightComponent*                         DarkLight;                                     // 0x2D50 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        CamcorderScreenLight;                          // 0x2D58 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMesh*                               FingerlessMesh;                                // 0x2D60 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               ITTechMesh;                                    // 0x2D68 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               PrisonerMesh;                                  // 0x2D70 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepDecalMatL1;                            // 0x2D78 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepDecalMatL2;                            // 0x2D80 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepDecalMatR1;                            // 0x2D88 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepDecalMatR2;                            // 0x2D90 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatL1;                    // 0x2D98 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatL2;                    // 0x2DA0 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatR1;                    // 0x2DA8 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatR2;                    // 0x2DB0 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   CameraScreenMat;                               // 0x2DB8 (0x0008) [0x0000000000000000]               
	struct FName                                       CameraScreenParamName;                         // 0x2DC0 (0x0008) [0x0000000000000000]               
	class UOLAnimNodeSlot*                             ShadowProxyFullBodyAnimSlot;                   // 0x2DC8 (0x0008) [0x0000000000000000]               
	class UOLAnimCustomBlend*                          ShadowProxyCustomBlendNode;                    // 0x2DD0 (0x0008) [0x0000000000000000]               
	class UOLAnimCustomBlend*                          UpperBodyBlendNode;                            // 0x2DD8 (0x0008) [0x0000000000000000]               
	class UOLAnimCustomBlend*                          ShadowProxyUpperBodyBlendNode;                 // 0x2DE0 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               RightArmAnimSlot;                              // 0x2DE8 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               ShadowProxyRightArmAnimSlot;                   // 0x2DF0 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               LeftArmAnimSlot;                               // 0x2DF8 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               ShadowProxyLeftArmAnimSlot;                    // 0x2E00 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByPosture*                       BlendByPostureWalkingAnimNode;                 // 0x2E08 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByPosture*                       BlendByPostureFallingAnimNode;                 // 0x2E10 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByLocomotionMode*                LocomotionAnimNode;                            // 0x2E18 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  LedgeHangAnimNode;                             // 0x2E20 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  ShadowProxyLedgeHangAnimNode;                  // 0x2E28 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  LedgeWalkAnimNode;                             // 0x2E30 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  ShadowProxyLedgeWalkAnimNode;                  // 0x2E38 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  SqueezeAnimNode;                               // 0x2E40 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  ShadowProxySqueezeAnimNode;                    // 0x2E48 (0x0008) [0x0000000000000000]               
	class UOLAnimMultiCycleConstrainedMovement*        LadderAnimNode;                                // 0x2E50 (0x0008) [0x0000000000000000]               
	class UOLAnimMultiCycleConstrainedMovement*        ShadowProxyLadderAnimNode;                     // 0x2E58 (0x0008) [0x0000000000000000]               
	class UOLAnimDoorInteraction*                      DoorAnimNode;                                  // 0x2E60 (0x0008) [0x0000000000000000]               
	class UOLAnimDoorInteraction*                      ShadowProxyDoorAnimNode;                       // 0x2E68 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       LeftArmWallContactFilterNode;                  // 0x2E70 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       ShadowProxyLeftArmWallContactFilterNode;       // 0x2E78 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           LeftArmWallContactAnimSequence;                // 0x2E80 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           ShadowProxyLeftArmWallContactAnimSequence;     // 0x2E88 (0x0008) [0x0000000000000000]               
	class UOLAnimPeeking*                              PeekingAnimNode;                               // 0x2E90 (0x0008) [0x0000000000000000]               
	class UOLAnimPeeking*                              ShadowProxyPeekingAnimNode;                    // 0x2E98 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           BedAnimNode;                                   // 0x2EA0 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           ShadowProxyBedAnimNode;                        // 0x2EA8 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       LeftFootPlacementNode;                         // 0x2EB0 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       ShadowProxyLeftFootPlacementNode;              // 0x2EB8 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       RightFootPlacementNode;                        // 0x2EC0 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       ShadowProxyRightFootPlacementNode;             // 0x2EC8 (0x0008) [0x0000000000000000]               
	class UOLAnimStruggleCycle*                        StruggleAnimNode;                              // 0x2ED0 (0x0008) [0x0000000000000000]               
	class UOLAnimStruggleCycle*                        ShadowProxyStruggleAnimNode;                   // 0x2ED8 (0x0008) [0x0000000000000000]               
	class UOLAnimCrouchedTurnOnSpot*                   CrouchTurnOnSpotAnimNode;                      // 0x2EE0 (0x0008) [0x0000000000000000]               
	class UOLAnimCrouchedTurnOnSpot*                   ShadowProxyCrouchTurnOnSpotAnimNode;           // 0x2EE8 (0x0008) [0x0000000000000000]               
	class UOLAnimParrying*                             ParryingAnimNode;                              // 0x2EF0 (0x0008) [0x0000000000000000]               
	class UOLAnimParrying*                             ShadowProxyParryingAnimNode;                   // 0x2EF8 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByLeaning*                       LeanStandingAnimNode;                          // 0x2F00 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByLeaning*                       LeanCrouchedAnimNode;                          // 0x2F08 (0x0008) [0x0000000000000000]               
	class USkelControlLimb*                            ShadowProxyLeftHandIK;                         // 0x2F10 (0x0008) [0x0000000000000000]               
	class USkelControlLimb*                            ShadowProxyRightHandIK;                        // 0x2F18 (0x0008) [0x0000000000000000]               
	class USkelControlSingleBone*                      HiddenRightArmControl;                         // 0x2F20 (0x0008) [0x0000000000000000]               
	class USkelControlSingleBone*                      HiddenLeftArmControl;                          // 0x2F28 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftForeTwistControl;                          // 0x2F30 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ShadowProxyLeftForeTwistControl;               // 0x2F38 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftForeTwist1Control;                         // 0x2F40 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ShadowProxyLeftForeTwist1Control;              // 0x2F48 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftUpArmTwistControl;                         // 0x2F50 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ShadowProxyLeftUpArmTwistControl;              // 0x2F58 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            RightForeTwistControl;                         // 0x2F60 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ShadowProxyRightForeTwistControl;              // 0x2F68 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            RightUpArmTwistControl;                        // 0x2F70 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ShadowProxyRightUpArmTwistControl;             // 0x2F78 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ShadowProxyRightClavicleFixup;                 // 0x2F80 (0x0008) [0x0000000000000000]               
	uint32_t                                           bLookingBackLeftSide : 1;                      // 0x2F88 (0x0004) [0x0000000000000000] [0xFFFFFFFF80000000] 
	uint32_t                                           bLeftHandIKActive : 1;                         // 0x2F88 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRightHandIKActive : 1;                        // 0x2F88 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bShouldHideLeftHandDuringSM : 1;               // 0x2F88 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bShouldHideRightHandDuringSM : 1;              // 0x2F88 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bMustCrouchAfterSpecialMove : 1;               // 0x2F88 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bForcedCrouch : 1;                             // 0x2F88 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bLeaningLeftPushing : 1;                       // 0x2F88 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bLeaningRightPushing : 1;                      // 0x2F88 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bWantToRun : 1;                                // 0x2F88 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bIsGhost : 1;                                  // 0x2F88 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bPlayingRunSnd : 1;                            // 0x2F88 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bElectricGlitchActive : 1;                     // 0x2F88 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bElectrified : 1;                              // 0x2F88 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bHeatShielding : 1;                            // 0x2F88 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bParrying : 1;                                 // 0x2F88 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bLimping : 1;                                  // 0x2F88 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bHobbling : 1;                                 // 0x2F88 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bCamcorderDesired : 1;                         // 0x2F88 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bLastCinematicModeDisabledCamcorder : 1;       // 0x2F88 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bBothHandsNeeded : 1;                          // 0x2F88 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bPlayingNVGlitchSound : 1;                     // 0x2F88 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bRainEffectDesired : 1;                        // 0x2F88 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bCameraCracked : 1;                            // 0x2F88 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bOverrideDarkLight : 1;                        // 0x2F88 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bCameraEffectActive : 1;                       // 0x2F88 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bBlockConstrainedMovement : 1;                 // 0x2F88 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bKillConstrainedMovement : 1;                  // 0x2F88 (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bWantLookBack : 1;                             // 0x2F88 (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           bLeftAnim : 1;                                 // 0x2F88 (0x0004) [0x0000000000000000] [0x10000000] 
	uint32_t                                           bBackAnim : 1;                                 // 0x2F88 (0x0004) [0x0000000000000000] [0x20000000] 
	uint32_t                                           bExitLadderLeftHand : 1;                       // 0x2F88 (0x0004) [0x0000000000000000] [0x40000000] 
	uint32_t                                           bRunningTraversalMove : 1;                     // 0x2F8C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bApplyLandingPenalty : 1;                      // 0x2F8C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bJumping : 1;                                  // 0x2F8C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPushingFromBackEdge : 1;                      // 0x2F8C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bEnterLedgeWalkAfterStruggle : 1;              // 0x2F8C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bStartingSpecialMove : 1;                      // 0x2F8C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bJumpFromLedgeWalkWithVelocity : 1;            // 0x2F8C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bPickupCrouched : 1;                           // 0x2F8C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bDoorStartingRatioReached : 1;                 // 0x2F8C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bQuietDoorInteraction : 1;                     // 0x2F8C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           MovingNoiseActive : 1;                         // 0x2F8C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bWasUnder : 1;                                 // 0x2F8C (0x0004) [0x0000000000000000] [0x00000800] 
	float                                              MeshZOffset;                                   // 0x2F90 (0x0004) [0x0000000000000000]               
	float                                              MeshXOffset;                                   // 0x2F94 (0x0004) [0x0000000000000000]               
	float                                              LastFrameMeshZOffset;                          // 0x2F98 (0x0004) [0x0000000000000000]               
	struct FHandIKData                                 LeftHandIKData;                                // 0x2F9C (0x0024) [0x0000000000000000]               
	struct FCornerPeekData                             CornerPeek;                                    // 0x2FC0 (0x0070) [0x0000000000000000]               
	float                                              LastValidCornerPeekTime;                       // 0x3030 (0x0004) [0x0000000000000000]               
	class AOLCornerMarker*                             LastValidCornerMarker;                         // 0x3034 (0x0008) [0x0000000000000000]               
	ECornerPeekPosition                                LastValidCornerPeekPosition;                   // 0x303C (0x0001) [0x0000000000000000]               
	ECamcorderMode                                     CamcorderMode;                                 // 0x303D (0x0001) [0x0000000000000000]               
	ECamcorderState                                    CamcorderState;                                // 0x303E (0x0001) [0x0000000000000000]               
	ELedgeTransitionType                               ActiveLedgeTransitionType;                     // 0x303F (0x0001) [0x0000000000000000]               
	ELedgeClimbType                                    LedgeClimbType;                                // 0x3040 (0x0001) [0x0000000000000000]               
	ESqueezeTransitionType                             SqueezeTransitionType;                         // 0x3041 (0x0001) [0x0000000000000000]               
	EDoorOpeningType                                   DoorOpeningType;                               // 0x3042 (0x0001) [0x0000000000000000]               
	EDoorPartialOpenType                               DoorPartialOpenType;                           // 0x3043 (0x0001) [0x0000000000000000]               
	EDoorClosingType                                   DoorClosingType;                               // 0x3044 (0x0001) [0x0000000000000000]               
	EEnemyType                                         EnemyType;                                     // 0x3045 (0x0001) [0x0000000000000000]               
	EWeaponType                                        EnemyWeapon;                                   // 0x3046 (0x0001) [0x0000000000000000]               
	EHeroBodySetup                                     BodySetup;                                     // 0x3047 (0x0001) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0x8];                            // 0x3048 (0x0008) MISSED OFFSET
	struct FAttachmentData                             ActiveAttachment;                              // 0x3050 (0x0060) [0x0000000000080000] (CPF_Component)
	float                                              CurrentLean;                                   // 0x30B0 (0x0004) [0x0000000000000000]               
	float                                              LastLeanSndTime;                               // 0x30B4 (0x0004) [0x0000000000000000]               
	float                                              LastFootstepTime;                              // 0x30B8 (0x0004) [0x0000000000000000]               
	float                                              LargeSlopeStartedTime;                         // 0x30BC (0x0004) [0x0000000000000000]               
	int32_t                                            RemainingBloodyFootsteps;                      // 0x30C0 (0x0004) [0x0000000000000000]               
	class UOLHeroCamera*                               Camera;                                        // 0x30C4 (0x0008) [0x0000000000000000]               
	struct FName                                       LeftHandBoneName;                              // 0x30CC (0x0008) [0x0000000000000000]               
	struct FName                                       LeftHandAuxBoneName;                           // 0x30D4 (0x0008) [0x0000000000000000]               
	struct FName                                       RightHandAuxBoneName;                          // 0x30DC (0x0008) [0x0000000000000000]               
	struct FVector                                     EyeLocation;                                   // 0x30E4 (0x000C) [0x0000000000000000]               
	struct FRotator                                    EyeRotation;                                   // 0x30F0 (0x000C) [0x0000000000000000]               
	float                                              CurrentFOV;                                    // 0x30FC (0x0004) [0x0000000000000000]               
	struct FMatrix                                     CameraCompSpace;                               // 0x3100 (0x0040) [0x0000000000000000]               
	struct FCameraParameters                           CamParams;                                     // 0x3140 (0x0018) [0x0000000000000000]               
	float                                              LastDamageTime;                                // 0x3158 (0x0004) [0x0000000000000000]               
	class UClass*                                      LastDamageType;                                // 0x315C (0x0008) [0x0000000000000000]               
	float                                              LastScriptedDamageEffectTime;                  // 0x3164 (0x0004) [0x0000000000000000]               
	float                                              PreciseHealth;                                 // 0x3168 (0x0004) [0x0000000000000000]               
	float                                              ElectricEffectStartTime;                       // 0x316C (0x0004) [0x0000000000000000]               
	float                                              NextElectricHurtSoundTime;                     // 0x3170 (0x0004) [0x0000000000000000]               
	float                                              ElectricGlitchStartTime;                       // 0x3174 (0x0004) [0x0000000000000000]               
	float                                              ElectricGlitchMaxIntensity;                    // 0x3178 (0x0004) [0x0000000000000000]               
	float                                              ElectricGlitchDuration;                        // 0x317C (0x0004) [0x0000000000000000]               
	float                                              ElectricGlitchFrequency;                       // 0x3180 (0x0004) [0x0000000000000000]               
	float                                              TimeOfDeath;                                   // 0x3184 (0x0004) [0x0000000000000000]               
	float                                              HeatDistance;                                  // 0x3188 (0x0004) [0x0000000000000000]               
	float                                              LastHeatDamageTime;                            // 0x318C (0x0004) [0x0000000000000000]               
	float                                              LastElectricDamageTime;                        // 0x3190 (0x0004) [0x0000000000000000]               
	float                                              CurrentHeatBlur;                               // 0x3194 (0x0004) [0x0000000000000000]               
	float                                              HobblingIntensity;                             // 0x3198 (0x0004) [0x0000000000000000]               
	float                                              TargetHobblingIntensity;                       // 0x319C (0x0004) [0x0000000000000000]               
	float                                              CamcorderDisabledEndTime;                      // 0x31A0 (0x0004) [0x0000000000000000]               
	float                                              LastCamcorderSwitchTime;                       // 0x31A4 (0x0004) [0x0000000000000000]               
	float                                              CurrentBatterySetEnergy;                       // 0x31A8 (0x0004) [0x0000000000000000]               
	float                                              CurrentCamcorderZoomFactor;                    // 0x31AC (0x0004) [0x0000000000000000]               
	float                                              TargetCamcorderZoomFactor;                     // 0x31B0 (0x0004) [0x0000000000000000]               
	float                                              NVLightInterpFactor;                           // 0x31B4 (0x0004) [0x0000000000000000]               
	float                                              LastRainEffectActiveTime;                      // 0x31B8 (0x0004) [0x0000000000000000]               
	float                                              CurrentDarkLightRadius;                        // 0x31BC (0x0004) [0x0000000000000000]               
	float                                              CurrentDarkLightBrightness;                    // 0x31C0 (0x0004) [0x0000000000000000]               
	float                                              DarkLightOverrideBrightness;                   // 0x31C4 (0x0004) [0x0000000000000000]               
	float                                              DarkLightOverrideRadius;                       // 0x31C8 (0x0004) [0x0000000000000000]               
	float                                              CameraEffectEndTime;                           // 0x31CC (0x0004) [0x0000000000000000]               
	float                                              CameraEffectPlaneDist;                         // 0x31D0 (0x0004) [0x0000000000000000]               
	float                                              OverriddenMinCamcorderFOV;                     // 0x31D4 (0x0004) [0x0000000000000000]               
	struct FNVGlitchData                               NVGlitch;                                      // 0x31D8 (0x001C) [0x0000000000000000]               
	struct FVector                                     DesiredMoveDirection;                          // 0x31F4 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExternalImpulse;                               // 0x3200 (0x000C) [0x0000000000000000]               
	float                                              LedgeHangIdleStartTime;                        // 0x320C (0x0004) [0x0000000000000000]               
	float                                              WalkSpeed;                                     // 0x3210 (0x0004) [0x0000000000000000]               
	float                                              RunSpeed;                                      // 0x3214 (0x0004) [0x0000000000000000]               
	float                                              CurrentRunSpeed;                               // 0x3218 (0x0004) [0x0000000000000000]               
	float                                              InputMovementScaling;                          // 0x321C (0x0004) [0x0000000000000000]               
	struct FLocomotionModeParameters                   LocomotionModeParams[0x10];                    // 0x3220 (0x0400) [0x0000000000000000]               
	class UOLSeqAct_HeroControl*                       HeroControl;                                   // 0x3620 (0x0008) [0x0000000000000000]               
	class AOLSqueezeVolume*                            ActiveSqueeze;                                 // 0x3628 (0x0008) [0x0000000000000000]               
	class AOLLedgeMarker*                              ActiveLedge;                                   // 0x3630 (0x0008) [0x0000000000000000]               
	class AOLDoor*                                     ActiveDoor;                                    // 0x3638 (0x0008) [0x0000000000000000]               
	class AOLLadderMarker*                             ActiveLadder;                                  // 0x3640 (0x0008) [0x0000000000000000]               
	class AOLPickableObject*                           ActivePickup;                                  // 0x3648 (0x0008) [0x0000000000000000]               
	class AOLHidingSpot*                               ActiveLocker;                                  // 0x3650 (0x0008) [0x0000000000000000]               
	class AOLBed*                                      ActiveBed;                                     // 0x3658 (0x0008) [0x0000000000000000]               
	class AOLCSA*                                      ActiveCSA;                                     // 0x3660 (0x0008) [0x0000000000000000]               
	class AOLPushableObject*                           ActivePushable;                                // 0x3668 (0x0008) [0x0000000000000000]               
	float                                              SpecialMoveBlendAlpha;                         // 0x3670 (0x0004) [0x0000000000000000]               
	float                                              SpecialMoveTargetYaw;                          // 0x3674 (0x0004) [0x0000000000000000]               
	float                                              EnterBedZ;                                     // 0x3678 (0x0004) [0x0000000000000000]               
	float                                              LastCompletedDoorInteractionTime;              // 0x367C (0x0004) [0x0000000000000000]               
	float                                              LastActiveLedgeTimestamp;                      // 0x3680 (0x0004) [0x0000000000000000]               
	float                                              LastActiveLedgeZ;                              // 0x3684 (0x0004) [0x0000000000000000]               
	float                                              LastActiveLadderTimestamp;                     // 0x3688 (0x0004) [0x0000000000000000]               
	float                                              LastSpecialMoveFinishedTime;                   // 0x368C (0x0004) [0x0000000000000000]               
	float                                              LastClimbUpObstacleFinishedTime;               // 0x3690 (0x0004) [0x0000000000000000]               
	float                                              RunStartedTime;                                // 0x3694 (0x0004) [0x0000000000000000]               
	float                                              LastLandingTimestamp;                          // 0x3698 (0x0004) [0x0000000000000000]               
	float                                              SpecialMoveStalledTimestamp;                   // 0x369C (0x0004) [0x0000000000000000]               
	float                                              FallingStartedTime;                            // 0x36A0 (0x0004) [0x0000000000000000]               
	float                                              LastEnterLookBackTime;                         // 0x36A4 (0x0004) [0x0000000000000000]               
	float                                              DoorInteractionStartingRatio;                  // 0x36A8 (0x0004) [0x0000000000000000]               
	float                                              DoorSlowClosingAnimStartTime;                  // 0x36AC (0x0004) [0x0000000000000000]               
	float                                              MovingNoiseTimer;                              // 0x36B0 (0x0004) [0x0000000000000000]               
	TArray<struct FAIPositionPoint>                    AIPositionPoints;                              // 0x36B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FAIPositionPawnInfo>                 AIPositionPawns;                               // 0x36C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LastAIPositionChecked;                         // 0x36D4 (0x0004) [0x0000000000000000]               
	float                                              NumAIPositions;                                // 0x36D8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AIPositionDistance;                            // 0x36DC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AIPositionLayerBuffer;                         // 0x36E0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumAIPositionsPerSidePerPawn;                  // 0x36E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumAIPositionsToCheckPerFrame;                 // 0x36E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     AvgVelocity;                                   // 0x36EC (0x000C) [0x0000000000000000]               
	TArray<struct FVector2D>                           AvgVelPoints;                                  // 0x36F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              AvgVelocityTimer;                              // 0x3708 (0x0004) [0x0000000000000000]               
	float                                              NumAvgVelPoints;                               // 0x370C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AvgVelPointLength;                             // 0x3710 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       FirstFingerlessCheckpoint;                     // 0x3714 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       ShatteredCameraGlassCheckpoint;                // 0x371C (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       ITUniformCheckpoint;                           // 0x3724 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       PrisonerUniformCheckpoint;                     // 0x372C (0x0008) [0x0000000000004000] (CPF_Config)  
	float                                              NormalWalkSpeed;                               // 0x3734 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NormalRunSpeed;                                // 0x3738 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CrouchedSpeed;                                 // 0x373C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElectrifiedSpeed;                              // 0x3740 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WaterWalkSpeed;                                // 0x3744 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WaterRunSpeed;                                 // 0x3748 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LimpingWalkSpeed;                              // 0x374C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HobblingWalkSpeed;                             // 0x3750 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HobblingRunSpeed;                              // 0x3754 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              SpeedPenaltyBackwards;                         // 0x3758 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              SpeedPenaltyStrafe;                            // 0x375C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ForwardSpeedForJumpWalking;                    // 0x3760 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ForwardSpeedForJumpRunning;                    // 0x3764 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              JumpClearanceWalking;                          // 0x3768 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              JumpClearanceRunning;                          // 0x376C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LandingPenaltyDuration;                        // 0x3770 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LandingSpeedModifier;                          // 0x3774 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElectrifiedJumpDelay;                          // 0x3778 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ExternalImpulseDecelCoeff;                     // 0x377C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ExternalImpulseMinVel;                         // 0x3780 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ExternalImpulseMaxVel;                         // 0x3784 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ExternalImpulseMaxVelCrouched;                 // 0x3788 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FallSpeedForDamage;                            // 0x378C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FallSpeedForDeath;                             // 0x3790 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FallDamageExponent;                            // 0x3794 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DefaultFOV;                                    // 0x3798 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              RunningFOV;                                    // 0x379C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FOVApproachCoeffOpening;                       // 0x37A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FOVApproachCoeffClosing;                       // 0x37A4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FOVApproachCoeffRun;                           // 0x37A8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FOVApproachCoeffWalk;                          // 0x37AC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              BatteryDuration;                               // 0x37B0 (0x0004) [0x0000000000000000]               
	float                                              NrmBatteryDuration;                            // 0x37B4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HardBatteryDuration;                           // 0x37B8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CamcorderMinFOV;                               // 0x37BC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CamcorderMaxFOV;                               // 0x37C0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CamcorderNVMaxFOV;                             // 0x37C4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVLightZoomedInInnerAngle;                     // 0x37C8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVLightZoomedInOuterAngle;                     // 0x37CC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVLightZoomedInRadius;                         // 0x37D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVLightZoomedInBrightness;                     // 0x37D4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightBrightnessDefault;                    // 0x37D8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightRadiusDefault;                        // 0x37DC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightBrightnessNoCamcorder;                // 0x37E0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightRadiusNoCamcorder;                    // 0x37E4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightBrightnessBothHandsNeeded;            // 0x37E8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightRadiusBothHandsNeeded;                // 0x37EC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightBrightnessAttacked;                   // 0x37F0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightRadiusAttacked;                       // 0x37F4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightBrightnessParrying;                   // 0x37F8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DarkLightRadiusParrying;                       // 0x37FC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVGlitchTimeThreshold;                         // 0x3800 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVGlitchMaxDelayStart;                         // 0x3804 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVGlitchMaxDelayEnd;                           // 0x3808 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVGlitchMinDuration;                           // 0x380C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVGlitchMaxDuration;                           // 0x3810 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NVGlitchMaxLevel;                              // 0x3814 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HealthRegenRate;                               // 0x3818 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HealthRegenDelay;                              // 0x381C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HobbleApproachRate;                            // 0x3820 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElectricEffectPeriod;                          // 0x3824 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElectricEffectBase;                            // 0x3828 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ElectricEffectMode;                            // 0x382C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElectricHurtSoundInterval;                     // 0x3830 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DeathScreenDuration;                           // 0x3834 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            NumBloodyFootsteps;                            // 0x3838 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatDamageDist;                                // 0x383C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatDamageInterval;                            // 0x3840 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatDamagePerSec;                              // 0x3844 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatMaxBlurDist;                               // 0x3848 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatMinBlurDist;                               // 0x384C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatMinBlurAmount;                             // 0x3850 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatBlurApproachCoeffIn;                       // 0x3854 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeatBlurApproachCoeffOut;                      // 0x3858 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MinCosAngleForPickup;                          // 0x385C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              PickupInteractRadius;                          // 0x3860 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              JumpForwardFromLedgeWalkXYSpeed;               // 0x3864 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              JumpForwardFromLedgeWalkZSpeed;                // 0x3868 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DropFromLedgeWalkXYSpeed;                      // 0x386C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DropFromLedgeWalkZSpeed;                       // 0x3870 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LookBackCamRotOffset;                          // 0x3874 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LookBackCamBackOffset;                         // 0x3878 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LookBackCamSideOffset;                         // 0x387C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LeanSpeedThreshold;                            // 0x3880 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WalkingLoudness;                               // 0x3884 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CrouchLoudness;                                // 0x3888 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              RunningLoudness;                               // 0x388C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WalkingWaterLoudness;                          // 0x3890 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CrouchWaterLoudness;                           // 0x3894 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HobblingWalkLoudness;                          // 0x3898 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HobblingRunLoudness;                           // 0x389C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LandingBigLoudness;                            // 0x38A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LandingSmallLoudness;                          // 0x38A4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LandingBigWaterLoudness;                       // 0x38A8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LandingSmallWaterLoudness;                     // 0x38AC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorOpenInstantLoudness;                       // 0x38B0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorOpenPartialLoudness;                       // 0x38B4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorCloseFastLoudness;                         // 0x38B8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorEnterLockerLoudness;                       // 0x38BC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorExitLockerLoudness;                        // 0x38C0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorRunThroughLoudness;                        // 0x38C4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MovingNoiseStartTime;                          // 0x38C8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MovingNoiseClearTime;                          // 0x38CC (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FName                                       CrouchNoise;                                   // 0x38D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       WalkingNoise;                                  // 0x38D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       RunningNoise;                                  // 0x38E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       DoorMajorNoise;                                // 0x38E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              MovingNoiseRate;                               // 0x38F0 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       WaterMaterial;                                 // 0x38F4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       BloodMaterial;                                 // 0x38FC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UForceFeedbackWaveform*                      BigLandingFFWaveform;                          // 0x3904 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UForceFeedbackWaveform*                      SmallLandingFFWaveform;                        // 0x390C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UForceFeedbackWaveform*                      PickupFFWaveform;                              // 0x3914 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UForceFeedbackWaveform*                      DoorInteractionFFWaveform;                     // 0x391C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UForceFeedbackWaveform*                      RunThroughDoorFFWaveform;                      // 0x3924 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    FootStepSound_Run;                             // 0x392C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndCamStart;                                   // 0x3934 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndCamStop;                                    // 0x393C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndCamOnNVOn;                                  // 0x3944 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndCamOnNVOff;                                 // 0x394C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndCamOffNVOn;                                 // 0x3954 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndCamOffNVOff;                                // 0x395C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndReloadBatteries;                            // 0x3964 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndPickupDocument;                             // 0x396C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndPickupBatteries;                            // 0x3974 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndZoomIn;                                     // 0x397C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndZoomOut;                                    // 0x3984 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndSoldierHit;                                 // 0x398C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndDie;                                        // 0x3994 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndHit;                                        // 0x399C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndHitElectrified;                             // 0x39A4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStartPeek;                                  // 0x39AC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStopPeek;                                   // 0x39B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStartDamage;                                // 0x39BC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStopDamage;                                 // 0x39C4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndElectricHitStart;                           // 0x39CC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndElectricHitStop;                            // 0x39D4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStartRun;                                   // 0x39DC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStopRun;                                    // 0x39E4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStartLookBack;                              // 0x39EC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStopLookBack;                               // 0x39F4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndSmallLanding;                               // 0x39FC (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndBigLanding;                                 // 0x3A04 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndDieMusicEvent;                              // 0x3A0C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndNewObjective;                               // 0x3A14 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndRecordingCompleted;                         // 0x3A1C (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndLowBatteryStart;                            // 0x3A24 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndLowBatteryStop;                             // 0x3A2C (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      StateHitIntensityGroup;                        // 0x3A34 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      StateHitIntensityLow;                          // 0x3A44 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      StateHitIntensityMed;                          // 0x3A54 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      StateHitIntensityHigh;                         // 0x3A64 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      RTPCHealth;                                    // 0x3A74 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      RTPCZoom;                                      // 0x3A84 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      RTPCBatteryIntensity;                          // 0x3A94 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FName                                       AnimNameJumpFromWalk;                          // 0x3AA4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameJumpFromRun;                           // 0x3AAC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameJumpOverFromWalk;                      // 0x3AB4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameJumpOverFromRun;                       // 0x3ABC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameJumpOverToGrabLedge;                   // 0x3AC4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUpFromWalk;                       // 0x3ACC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUpFromRun;                        // 0x3AD4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUpToCrouch;                       // 0x3ADC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUpWall150;                        // 0x3AE4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUpWall200;                        // 0x3AEC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbOverWall200;                      // 0x3AF4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCrouch;                                // 0x3AFC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameUncrouch;                              // 0x3B04 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeHangLeftInside;                   // 0x3B0C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeHangRightInside;                  // 0x3B14 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeHangLeftOutside;                  // 0x3B1C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeHangRightOutside;                 // 0x3B24 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUpLedgeToCrouch;                  // 0x3B2C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUpLedgeToStand;                   // 0x3B34 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbOverLedgeToFalling;               // 0x3B3C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbOverLedgeToStand;                 // 0x3B44 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameSlideOverFromRun;                      // 0x3B4C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabAndClimb;                          // 0x3B54 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabLedgeFromAir;                      // 0x3B5C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabLedgeFromWalkHigh;                 // 0x3B64 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabLedgeFromWalkLow;                  // 0x3B6C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLandingSmallStanding;                  // 0x3B74 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLandingSmallCrouched;                  // 0x3B7C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBigLandingStanding;                    // 0x3B84 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBigLandingCrouched;                    // 0x3B8C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkInsideLeftPerp;          // 0x3B94 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkInsideLeftPrl;           // 0x3B9C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkInsideRightPerp;         // 0x3BA4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkInsideRightPrl;          // 0x3BAC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkOutsideLeftPerp;         // 0x3BB4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkOutsideLeftPrl;          // 0x3BBC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkOutsideRightPerp;        // 0x3BC4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLedgeWalkOutsideRightPrl;         // 0x3BCC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeWalkTransitionLeftInside;         // 0x3BD4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeWalkTransitionLeftOutside;        // 0x3BDC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeWalkTransitionRightInside;        // 0x3BE4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLedgeWalkTransitionRightOutside;       // 0x3BEC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitLedgeWalkRightInside;              // 0x3BF4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitLedgeWalkLeftInside;               // 0x3BFC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitLedgeWalkRightOutside;             // 0x3C04 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitLedgeWalkLeftOutside;              // 0x3C0C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameJumpFromLedgeWalk;                     // 0x3C14 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameStepOffFromLedgeWalk;                  // 0x3C1C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterSqueezeLeft;                      // 0x3C24 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterSqueezeRight;                     // 0x3C2C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitSqueezeLeft;                       // 0x3C34 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitSqueezeRight;                      // 0x3C3C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameAutomaticSqueeze;                      // 0x3C44 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLadderGroundStraight;             // 0x3C4C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLadderGround45Left;               // 0x3C54 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterLadderGround45Right;              // 0x3C5C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitLadderOnTopLH;                     // 0x3C64 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitLadderOnTopRH;                     // 0x3C6C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObject_h40v70;                   // 0x3C74 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObject_h40v140;                  // 0x3C7C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObject_h85v70;                   // 0x3C84 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObject_h85v140;                  // 0x3C8C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObject_h62v105;                  // 0x3C94 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObjectCrouched_h30vm10;          // 0x3C9C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObjectCrouched_h60vm10;          // 0x3CA4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObjectCrouched_h45v35;           // 0x3CAC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObjectCrouched_h30v60;           // 0x3CB4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupObjectCrouched_h60v60;           // 0x3CBC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDoc_h40v70;                      // 0x3CC4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDoc_h40v140;                     // 0x3CCC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDoc_h85v70;                      // 0x3CD4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDoc_h85v140;                     // 0x3CDC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDoc_h62v105;                     // 0x3CE4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDocCrouched_h30vm10;             // 0x3CEC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDocCrouched_h60vm10;             // 0x3CF4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDocCrouched_h45v35;              // 0x3CFC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDocCrouched_h30v60;              // 0x3D04 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePickupDocCrouched_h60v60;              // 0x3D0C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePutdownObject;                         // 0x3D14 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftFront;                    // 0x3D1C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftSide;                     // 0x3D24 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftBack;                     // 0x3D2C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftInside;                   // 0x3D34 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightFront;                   // 0x3D3C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightSide;                    // 0x3D44 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightBack;                    // 0x3D4C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightInside;                  // 0x3D54 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftFrontSlow;                // 0x3D5C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftSideSlow;                 // 0x3D64 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftBackSlow;                 // 0x3D6C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorLeftInsideSlow;               // 0x3D74 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightFrontSlow;               // 0x3D7C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightSideSlow;                // 0x3D84 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightBackSlow;                // 0x3D8C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCloseDoorRightInsideSlow;              // 0x3D94 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorOpenPullLeft;                      // 0x3D9C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorOpenPullRight;                     // 0x3DA4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorOpenPushLeft;                      // 0x3DAC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorOpenPushRight;                     // 0x3DB4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorRunThroughLeft;                    // 0x3DBC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorRunThroughRight;                   // 0x3DC4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorOpenInsidePushLeft;                // 0x3DCC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorOpenInsidePushRight;               // 0x3DD4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorAccessLeft;                        // 0x3DDC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorAccessRight;                       // 0x3DE4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorAccessLeftPull15;                  // 0x3DEC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorAccessRightPull15;                 // 0x3DF4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorAccessLeftPush15;                  // 0x3DFC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorAccessRightPush15;                 // 0x3E04 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorLockedLeft;                        // 0x3E0C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDoorLockedRight;                       // 0x3E14 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLockerOpenStraight;                    // 0x3E1C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLockerOpen45Left;                      // 0x3E24 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLockerOpen45Right;                     // 0x3E2C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHideInLocker;                          // 0x3E34 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezeLeftFacing;             // 0x3E3C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezeLeftBack;               // 0x3E44 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezeRightFacing;            // 0x3E4C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezeRightBack;              // 0x3E54 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezePhase1Right0;           // 0x3E5C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezePhase1Right90;          // 0x3E64 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezePhase1Right180;         // 0x3E6C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezePhase1Left0;            // 0x3E74 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezePhase1Left90;           // 0x3E7C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromSqueezePhase1Left180;          // 0x3E84 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterBedLeft;                          // 0x3E8C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterBedRight;                         // 0x3E94 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterBedLeftFromStand;                 // 0x3E9C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterBedRightFromStand;                // 0x3EA4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitBedLeft;                           // 0x3EAC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitBedRight;                          // 0x3EB4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitBedLeftToCrouch;                   // 0x3EBC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitBedRightToCrouch;                  // 0x3EC4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterPushObjectLeft;                   // 0x3ECC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterPushObjectRight;                  // 0x3ED4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitPushObjectLeft;                    // 0x3EDC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitPushObjectRight;                   // 0x3EE4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameRaiseCamcorder;                        // 0x3EEC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLowerCamcorder;                        // 0x3EF4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameRaiseCamcorderBed;                     // 0x3EFC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLowerCamcorderBed;                     // 0x3F04 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameRaiseCamcorderCrouched;                // 0x3F0C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameLowerCamcorderCrouched;                // 0x3F14 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteries;                       // 0x3F1C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteriesInactive;               // 0x3F24 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteriesCrouched;               // 0x3F2C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteriesCrouchedInactive;       // 0x3F34 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteriesBed;                    // 0x3F3C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteriesBedInactive;            // 0x3F44 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteriesSqueeze;                // 0x3F4C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameReloadBatteriesSqueezeInactive;        // 0x3F54 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabNormal;                            // 0x3F5C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabNormalLeft90;                      // 0x3F64 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabNormalLeft180;                     // 0x3F6C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabNormalRight90;                     // 0x3F74 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabNormalRight180;                    // 0x3F7C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabCrouched;                          // 0x3F84 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabCrouchedLeft90;                    // 0x3F8C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabCrouchedLeft180;                   // 0x3F94 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabCrouchedRight90;                   // 0x3F9C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabCrouchedRight180;                  // 0x3FA4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabUnder;                             // 0x3FAC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabUnderCCW;                          // 0x3FB4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabUnderLeft90;                       // 0x3FBC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabUnderLeft180;                      // 0x3FC4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabUnderRight90;                      // 0x3FCC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabUnderRight180;                     // 0x3FD4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromBedLeft;                       // 0x3FDC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromBedRight;                      // 0x3FE4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFromLocker;                        // 0x3FEC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrown;                                // 0x3FF4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrownLeft90;                          // 0x3FFC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrownLeft180;                         // 0x4004 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrownRight90;                         // 0x400C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrownRight180;                        // 0x4014 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionFwd;                        // 0x401C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionBwd;                        // 0x4024 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionLeft;                       // 0x402C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionRight;                      // 0x4034 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionCrouchedFwd;                // 0x403C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionCrouchedBwd;                // 0x4044 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionCrouchedLeft;               // 0x404C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameHitReactionCrouchedRight;              // 0x4054 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameWallContactLeftHard;                   // 0x405C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameWallContactLeftSoft;                   // 0x4064 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameWallContactRightHard;                  // 0x406C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameWallContactRightSoft;                  // 0x4074 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterCornerPeekLeftHard;               // 0x407C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterCornerPeekLeftSoft;               // 0x4084 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterCornerPeekRightHard;              // 0x408C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEnterCornerPeekRightSoft;              // 0x4094 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekLeftHard;                // 0x409C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekLeftSoft;                // 0x40A4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekRightHard;               // 0x40AC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekRightSoft;               // 0x40B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekForwardLeftHard;         // 0x40BC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekForwardLeftSoft;         // 0x40C4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekForwardRightHard;        // 0x40CC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameExitCornerPeekForwardRightSoft;        // 0x40D4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCornerTransitionFromLeft;              // 0x40DC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameCornerTransitionFromRight;             // 0x40E4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabFromBedLeft;                // 0x40EC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabFromBedRight;               // 0x40F4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabFromLocker;                 // 0x40FC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabUnder;                      // 0x4104 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabUnderLeft90;                // 0x410C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabUnderLeft180;               // 0x4114 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabUnderRight90;               // 0x411C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericGrabUnderRight180;              // 0x4124 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePushawayLeft;                          // 0x412C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePushawayRight;                         // 0x4134 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGenericDeath;                          // 0x413C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityBackstabBack;                  // 0x4144 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityBackstabLeft;                  // 0x414C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityBackstabRight;                 // 0x4154 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityChokeFront;                    // 0x415C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityChokeLeft;                     // 0x4164 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityChokeRight;                    // 0x416C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityClubBack;                      // 0x4174 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityClubFront;                     // 0x417C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityClubLeft;                      // 0x4184 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityClubRight;                     // 0x418C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityStabChopFront;                 // 0x4194 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityStabChopLeft;                  // 0x419C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityStabChopRight;                 // 0x41A4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityXplodeBack;                    // 0x41AC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityXplodeFront;                   // 0x41B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityXplodeLeft;                    // 0x41BC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityXplodeRight;                   // 0x41C4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityLocker;                        // 0x41CC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalitySoldier;                       // 0x41D4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityGroom;                         // 0x41DC (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              ObstacleMinZWalking;                           // 0x41E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ObstacleMaxZWalking;                           // 0x41E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ObstacleMinZFalling;                           // 0x41EC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ObstacleMaxZFalling;                           // 0x41F0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MinCosAngleToObstacle;                         // 0x41F4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxLedgeCosAngle;                              // 0x41F8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MinWidthForClimbWalking;                       // 0x41FC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MinWidthForClimbRunning;                       // 0x4200 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MinWidthForClimbUpWall;                        // 0x4204 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MinWidthForSlide;                              // 0x4208 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxWidthForSlide;                              // 0x420C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MinHeightForSlide;                             // 0x4210 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxHeightForSlide;                             // 0x4214 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              StepUpAndLandInteractDist;                     // 0x4218 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverInteractDistWalking;                   // 0x421C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverInteractDistRunning;                   // 0x4220 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverInteractDistFalling;                   // 0x4224 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverMinObstacleZ;                          // 0x4228 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverExpectedDistWalking;                   // 0x422C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverExpectedHeightWalking;                 // 0x4230 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverExpectedDistRunning;                   // 0x4234 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverExpectedHeightRunning;                 // 0x4238 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverAndGrabLedgeInteractDistWalking;       // 0x423C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverAndGrabLedgeInteractDistRunning;       // 0x4240 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverAndGrabLedgeInteractDistFalling;       // 0x4244 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverAndGrabLedgeExpectedDist;              // 0x4248 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              JumpOverAndGrabLedgeExpectedHeightFromLedge;   // 0x424C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SlideOverInteractDistMin;                      // 0x4250 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SlideOverInteractDistMax;                      // 0x4254 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SlideOverExpectedDist;                         // 0x4258 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SlideOverExpectedHeight;                       // 0x425C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpInteractDistWalking;                    // 0x4260 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpInteractDistRunning;                    // 0x4264 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpInteractDistFalling;                    // 0x4268 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpWallInteractHeightMin;                  // 0x426C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpExpectedDistWalking;                    // 0x4270 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpExpectedHeightWalking;                  // 0x4274 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpExpectedDistRunning;                    // 0x4278 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpExpectedHeightRunning;                  // 0x427C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpWallExpectedDist;                       // 0x4280 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpWallExpectedHeightMin;                  // 0x4284 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpWallExpectedHeightMax;                  // 0x4288 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbOverWallExpectedDist;                     // 0x428C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbOverWallExpectedHeight;                   // 0x4290 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpToCrouchExpectedDist;                   // 0x4294 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpToCrouchExpectedHeight;                 // 0x4298 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ClimbUpToCrouchMinHeight;                      // 0x429C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeInteractDistWalking;                  // 0x42A0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeInteractDistRunning;                  // 0x42A4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeMinHeightOnGround;                    // 0x42A8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeMaxHeightOnGround;                    // 0x42AC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeMinFloorClearance;                    // 0x42B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeFromJumpOverMinFloorClearance;        // 0x42B4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeMinHeightInAir;                       // 0x42B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeMaxHeightInAir;                       // 0x42BC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeInteractDistGoingDown;                // 0x42C0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeMinHeightInAirGoingDown;              // 0x42C4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeMaxHeightInAirGoingDown;              // 0x42C8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeFromGroundExpectedHeight;             // 0x42CC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabLedgeFromAirExpectedHeight;                // 0x42D0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabAndClimbInteractDist;                      // 0x42D4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabAndClimbExpectedDistFwd;                   // 0x42D8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabAndClimbExpectedDistHeight;                // 0x42DC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabAndClimbMinHeight;                         // 0x42E0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabAndClimbMaxHeight;                         // 0x42E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangDistToWall;                           // 0x42E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangHeightToLedge;                        // 0x42EC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangTransitionInteractDist;               // 0x42F0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangTransitionInsideExpectedDist;         // 0x42F4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangTransitionOutsideExpectedDist;        // 0x42F8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangClimbOverMaxLedgeWidth;               // 0x42FC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangClimbOverMinHeightClearance;          // 0x4300 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangClimbOverFullHeightClearance;         // 0x4304 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeHangClimbUpMinFwdClearance;               // 0x4308 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkTransitionInteractDistInside;         // 0x430C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkTransitionInteractDistOutside;        // 0x4310 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkTransitionInteractDistExit;           // 0x4314 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedInsidePerpSideDist;      // 0x4318 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedOutsidePerpSideDist;     // 0x431C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedInsidePrlSideDist;       // 0x4320 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedOutsidePrlSideDist;      // 0x4324 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedInsidePerpFwdDist;       // 0x4328 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedOutsidePerpFwdDist;      // 0x432C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedInsidePrlFwdDist;        // 0x4330 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkEnterExpectedOutsidePrlFwdDist;       // 0x4334 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkTransitionExpectedDistInside;         // 0x4338 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkTransitionExpectedDistOutside;        // 0x433C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkDistFromEdge;                         // 0x4340 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkMaxWallDist;                          // 0x4344 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LedgeWalkMinDrop;                              // 0x4348 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SqueezeInteractDist;                           // 0x434C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SqueezeEnterExpectedDistFwd;                   // 0x4350 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SqueezeExitExpectedDistFwd;                    // 0x4354 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SqueezeDistFromCenter;                         // 0x4358 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              EnterLockerInteractDistance;                   // 0x435C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderEnterFromGroundInteractDist;             // 0x4360 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderEnterFromAboveInteractDist;              // 0x4364 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderGrabDist;                                // 0x4368 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderEnterFromGroundDeltaZ;                   // 0x436C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderBarSpacing;                              // 0x4370 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderRootHeightOffsetFromBar;                 // 0x4374 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderEnterFromAboveExpectedDist;              // 0x4378 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderDistFwd;                                 // 0x437C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderExitOnTopInteractDist;                   // 0x4380 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderExitOnGroundInteractDist;                // 0x4384 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LadderMaxHeightForDrop;                        // 0x4388 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PickupObjectExpectedDist;                      // 0x438C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PickupObjectInteractDistMinHorz;               // 0x4390 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PickupObjectInteractDistMaxHorz;               // 0x4394 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PickupObjectInteractDistMinVertStanding;       // 0x4398 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PickupObjectInteractDistMaxVertStanding;       // 0x439C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PickupObjectInteractDistMinVertCrouched;       // 0x43A0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PickupObjectInteractDistMaxVertCrouched;       // 0x43A4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorOpenInteractionDist;                       // 0x43A8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorOpenExpectedFwdDist;                       // 0x43AC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorOpenExpectedSideDist;                      // 0x43B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorOpenInsideExpectedDistFwd;                 // 0x43B4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorRunThroughInteractDist;                    // 0x43B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorRunThroughExpectedDist;                    // 0x43BC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorInteractiveOpenMaxAngle;                   // 0x43C0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorMaxAngleForInteractiveOpen;                // 0x43C4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorCloseInteractionDist;                      // 0x43C8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorCloseExpectedDistFwd;                      // 0x43CC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockerOpenStraightExpectedDistSide;            // 0x43D0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockerOpenLeftExpectedDistSide;                // 0x43D4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockerOpenRightExpectedDistSide;               // 0x43D8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockerOpenExpectedDistFwd;                     // 0x43DC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockerEnterExpectedDistSide;                   // 0x43E0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LockerEnterExpectedDistFwd;                    // 0x43E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabFromSqueezeMaxDistance;                    // 0x43E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabFromSqueezeExpectedDistance;               // 0x43EC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BedInteractDistance;                           // 0x43F0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BedEnterExpectedFwdDist;                       // 0x43F4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BedEnterExpectedSideDist;                      // 0x43F8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushableInteractDist;                          // 0x43FC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushableInteractMinLookCosAngle;               // 0x4400 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushableExpectedDistFromEdge;                  // 0x4404 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushableExpectedSideOffset;                    // 0x4408 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushFromLedgeAnimatedExpectedDist;             // 0x440C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushFromLedgeAnimatedInteractDist;             // 0x4410 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushFromLedgeAnimatedMinHeight;                // 0x4414 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PushFromLedgeProceduralInteractDist;           // 0x4418 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PeekingEnterInteractDistFromWall;              // 0x441C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PeekingEnterInteractDistFromEdgeMin;           // 0x4420 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PeekingEnterInteractDistFromEdgeMax;           // 0x4424 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PeekingEnterExpectedDistFromWall;              // 0x4428 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PeekingEnterExpectedDistFromEdgeLeft;          // 0x442C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PeekingEnterExpectedDistFromEdgeRight;         // 0x4430 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ImpactVelThresholdForBigLanding;               // 0x4434 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ImpactVelThresholdForSmallLanding;             // 0x4438 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ImpactVelThresholdForSpeedPenalty;             // 0x443C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MinEyeDistToWall;                              // 0x4440 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ForwardJumpSpeedThreshold;                     // 0x4444 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxGrabLedgeAdjustment;                        // 0x4448 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxSpeedPenaltyPctForInjuries;                 // 0x444C (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DefaultLeftHandJointTargetRotation;            // 0x4450 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     CornerPeekJointTargetPosLeft;                  // 0x445C (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     CornerPeekJointTargetPosRight;                 // 0x4468 (0x000C) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLHero");
		}

		return uClassPointer;
	};

	void UpdateDifficultyBasedValues();
	void eventOutsideWorldBounds();
	void eventFellOutOfWorld(class UClass* dmgType);
	void eventRespawnHero();
	void eventPlayFootStepSound(int32_t FootDown, class UAnimNotify_Footstep* footstepNotify);
	bool IsInMainMenu();
	void SpawnBloodFootstepDecal(bool bLeftFoot, float Alpha);
	void GetFootstepDecalTransform(bool bLeftFoot, struct FVector& DecalLocation, struct FRotator& DecalRotation);
	void SetMeshVisibility(bool bVisible);
	void eventEndViewTarget(class APlayerController* PC);
	void eventBecomeViewTarget(class APlayerController* PC);
	void eventPhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void OnEnterDeepWater(class APhysicsVolume* NewVolume);
	void PlayLanded(float ImpactVel);
	void NativePlayLanded(float ImpactVel);
	void TakeFallingDamage();
	bool eventHealDamage(int32_t Amount, class AController* Healer, class UClass* DamageType);
	void eventTakeDamage(int32_t Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo optionalHitInfo, class AActor* optionalDamageCauser);
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	void eventPostInitAnimTree(class USkeletalMeshComponent* SkelComp);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void RemoveEnemyFromAIPositionPawns(class AOLEnemyPawn* EnemyPawn);
	struct FVector GetGrabUnderDestination(class AOLEnemyPawn* Enemy);
	struct FVector GetFutureDestination(class AOLPawn* Agent);
	void QuickHeroTest();
	bool CanBeGrabbedUnder();
	bool CanBeFatalitized();
	bool CanBeAttacked();
	bool IsBarefeet();
	bool IsInLocker();
	void AttachCameraEffect(class UParticleSystem* ParticleEffectTemplate, float Duration, float PlaneDist);
	void SetCamcorderVisibleNotify();
	void ResetNeckOffsetNotify();
	void BloodOnScreenNotify();
	void DecapitatedNotify();
	void DieNotify();
	void OverrideCameraSettingsNotify(class UOLAnimNotify_OverrideCameraParams* camParamsNotify);
	void BatteriesReloadedNotify();
	void CamcorderLoweredNotify();
	void CamcorderRaisedNotify();
	void CamcorderAvailableNotify();
	void DoorAnimNotify();
	void PickupNotify();
	void ReactToHit(float hitStrength, struct FVector hitDirection, bool optionalBForceFullPower);
	bool TryKillInLocker(class AOLEnemyPawn* attacker);
	bool TryKillHero(class AOLEnemyPawn* attacker, struct FVector enemyStartLocation, struct FVector Direction);
	bool TryDecapitate(class AOLEnemyPawn* attacker);
	bool TryGrabFromUnder(class AOLEnemyPawn* attacker, struct FVector StartLocation, struct FVector AttackStartLocation);
	bool TryThrowPlayer(class AOLEnemyPawn* attacker, float ThrowRotation);
	bool TryGrabNormal(class AOLEnemyPawn* attacker, struct FVector StartLocation, struct FVector AttackStartLocation);
	bool TryGrabFromBed(class AOLEnemyPawn* attacker);
	bool TryExitBed(struct FVector playerIntentDirection);
	bool TryExitLocker();
	bool TryGrabFromLocker(class AOLEnemyPawn* attacker);
	bool CanGrabFromSqueeze();
	bool TryGrabFromSqueeze(class AOLEnemyPawn* attacker);
	bool HeroControlActivated(class UOLSeqAct_HeroControl* heroControlAction);
	void ExitCinematicMode(class USeqAct_ToggleCinematicMode* seqAction);
	void EnterCinematicMode(class USeqAct_ToggleCinematicMode* seqAction);
	void StartSpecialMove(ESpecialMoveType moveType, struct FVector optionalTargetPosition, struct FVector optionalTargetDirection, EAdjustPositionTargetType optionalTargetType);
	void OnPossess();
	void ActivateWaterFootstepParticles(bool bRightFoot);
	void TakeElectricDamage(int32_t Damage, float Knockback, struct FVector HitNormal, class UAkEvent* ElectricSoundEvent);
	void NativeTakeFallingDamage();
	void NativeTakeDamage(int32_t Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType);
	void NativeDisplayDebug(class UCanvas* Canvas, float& out_YL, float& out_YPos);
	void GetCamera(struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV);
	void NativePostBeginPlay();
	void ResetAfterTeleport();
	bool IsRunning();
	bool TryRun();
	void Walk();
	struct FRotator eventGetViewRotation();
	struct FVector GetPawnViewLocation();
};

// Class OLGame.OLPhysicalMaterialProperty
// 0x0008 OR 0x0068 (0x0068 - 0x0060)
// 8 OR 104 (104 - 96)
class UOLPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       MaterialType;                                  // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPhysicalMaterialProperty");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLPickableObject
// 0x002C OR 0x026C (0x026C - 0x0240)
// 44 OR 620 (620 - 576)
class AOLPickableObject : public AActor
{
public:
	class UStaticMeshComponent*                        PickupMesh;                                    // 0x0240 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDynamicLightEnvironmentComponent*           PickupLightEnvironment;                        // 0x0248 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bUsed : 1;                                     // 0x0250 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPickupOnNotify : 1;                           // 0x0250 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisabled : 1;                                 // 0x0250 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	struct FVector                                     AttachPositionOffset;                          // 0x0254 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    AttachRotationOffset;                          // 0x0260 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPickableObject");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLBatteriesPickupFactory
// 0x0024 OR 0x0290 (0x0290 - 0x026C)
// 36 OR 656 (656 - 620)
class AOLBatteriesPickupFactory : public AOLPickableObject
{
public:
	int32_t                                            NumBatteries;                                  // 0x026C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 Mesh1;                                         // 0x0270 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 Mesh2;                                         // 0x0278 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 Mesh3;                                         // 0x0280 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 Mesh4;                                         // 0x0288 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBatteriesPickupFactory");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLCollectiblePickup
// 0x0008 OR 0x0274 (0x0274 - 0x026C)
// 8 OR 628 (628 - 620)
class AOLCollectiblePickup : public AOLPickableObject
{
public:
	struct FName                                       CollectibleName;                               // 0x026C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCollectiblePickup");
		}

		return uClassPointer;
	};

	void PostBeginPlay();
	bool ShouldShowCollectible();
};

// Class OLGame.OLGameplayItemPickup
// 0x0018 OR 0x0284 (0x0284 - 0x026C)
// 24 OR 644 (644 - 620)
class AOLGameplayItemPickup : public AOLPickableObject
{
public:
	struct FName                                       ItemName;                                      // 0x026C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       LastValidCheckpoint;                           // 0x0274 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    PickupSound;                                   // 0x027C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLGameplayItemPickup");
		}

		return uClassPointer;
	};

	void PostBeginPlay();
	bool ShouldShowItem();
};

// Class OLGame.OLPlayerInput
// 0x0091 OR 0x05DD (0x05DD - 0x054C)
// 145 OR 1501 (1501 - 1356)
class UOLPlayerInput : public UUDKPlayerInput
{
public:
	TArray<struct FKeyBind>                            GPBindingsA;                                   // 0x054C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FKeyBind>                            GPBindingsB;                                   // 0x055C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FKeyBind>                            GPBindingsC;                                   // 0x056C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      StrafeCommand;                                 // 0x057C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      MoveCommand;                                   // 0x058C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      LookXCommand;                                  // 0x059C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      LookYCommand;                                  // 0x05AC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      SouthpawMoveCommand;                           // 0x05BC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      SouthpawLookYCommand;                          // 0x05CC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	EGamepadBindingsType                               GamepadConfig;                                 // 0x05DC (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPlayerInput");
		}

		return uClassPointer;
	};

	bool IsKeyPressed(struct FName Key);
	void eventUnBindNoSave(class FString Command);
	void PreProcessInput(float DeltaTime);
	void StopLeanRight();
	void StopLeanLeft();
	void StartLeanRight();
	void StartLeanLeft();
	void ToggleDuck();
	void UnDuck();
	void Duck();
	void ResetInput();
};

// Class OLGame.OLProfileSettings
// 0x0010 OR 0x00D4 (0x00D4 - 0x00C4)
// 16 OR 212 (212 - 196)
class UOLProfileSettings : public UUDKProfileSettings
{
public:
	TArray<struct FScreenResolutionInfo>               ScreenResolutions;                             // 0x00C4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLProfileSettings");
		}

		return uClassPointer;
	};

	void AutoDetectPerformanceSettings();
	void MatchMonitorResolution(bool bLimitForPerformance);
	void SetLanguageFromSteam();
	void eventSetToDefaults();
	bool GetProfileSettingValues(int32_t ProfileSettingId, TArray<struct FName>& Values);
	float GetGammaSetting();
};

// Class OLGame.OLPushableObject
// 0x0080 OR 0x02C0 (0x02C0 - 0x0240)
// 128 OR 704 (704 - 576)
class AOLPushableObject : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObstacle;        // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bEnabled : 1;                                  // 0x0248 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanPushBack : 1;                              // 0x0248 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanPushFwd : 1;                               // 0x0248 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bPlayerLocked : 1;                             // 0x0248 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bPushActive : 1;                               // 0x0248 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bPushFwd : 1;                                  // 0x0248 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	float                                              Width;                                         // 0x024C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxBackDist;                                   // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxFwdDist;                                    // 0x0254 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AOLDoor*                                     LinkedDoor;                                    // 0x0258 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeed;                                      // 0x0260 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BaseTranslation;                               // 0x0264 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EPushableMaterial                                  PushableType;                                  // 0x0268 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UStaticMeshComponent*                        Mesh;                                          // 0x026C (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                              // 0x0274 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              CurrentDisplacement;                           // 0x027C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentVelocity;                               // 0x0280 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentPhase;                                  // 0x0284 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AccelApproachCoeff;                            // 0x0288 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DecelApproachCoeff;                            // 0x028C (0x0004) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStartPushing;                               // 0x0290 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStopPushing;                                // 0x0298 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       RTPCPushingSpeed;                              // 0x02A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       SwitchPushableType;                            // 0x02A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       SwitchPushableTypeMetal;                       // 0x02B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       SwitchPushableTypeWood;                        // 0x02B8 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPushableObject");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLSeqAct_ActivateGameState
// 0x000C OR 0x015C (0x015C - 0x0150)
// 12 OR 348 (348 - 336)
class UOLSeqAct_ActivateGameState : public USequenceAction
{
public:
	struct FName                                       GameStateName;                                 // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bTriggerApplyEvent : 1;                        // 0x0158 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStatusIsOk : 1;                               // 0x0158 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ActivateGameState");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Checkpoint
// 0x000C OR 0x015C (0x015C - 0x0150)
// 12 OR 348 (348 - 336)
class UOLSeqAct_Checkpoint : public USequenceAction
{
public:
	struct FName                                       CheckpointName;                                // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStatusIsOk : 1;                               // 0x0158 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Checkpoint");
		}

		return uClassPointer;
	};

	void eventActivated();
	class AOLCheckpoint* GetCheckpointFromName(struct FName CPName);
	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSoundConnector
// 0x0014 OR 0x0254 (0x0254 - 0x0240)
// 20 OR 596 (596 - 576)
class AOLSoundConnector : public AActor
{
public:
	class UDrawSphereComponent*                        PreviewComp;                                   // 0x0240 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOLSoundConnectorComponent*                  SoundConnectorComp;                            // 0x0248 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              OcclusionFactor;                               // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSoundConnector");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLSoundConnectorComponent
// 0x001B OR 0x00A0 (0x00A0 - 0x0085)
// 27 OR 160 (160 - 133)
class UOLSoundConnectorComponent : public UActorComponent
{
public:
	uint32_t                                           bEnabled : 1;                                  // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowSourceVirtualization : 1;                // 0x0088 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              Radius;                                        // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class AOLSoundEnvironmentVolume*>           ConnectedVolumes;                              // 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSoundConnectorComponent");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSoundEmitter
// 0x00A0 OR 0x0100 (0x0100 - 0x0060)
// 160 OR 256 (256 - 96)
class UOLSoundEmitter : public UObject
{
public:
	class AActor*                                      Actor;                                         // 0x0060 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDirty : 1;                                    // 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDynamic : 1;                                  // 0x0068 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAllowVirtualization : 1;                      // 0x0068 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bVirtualized : 1;                              // 0x0068 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bInMultiPositionGroup : 1;                     // 0x0068 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bGroupMaster : 1;                              // 0x0068 (0x0004) [0x0000000000000000] [0x00000040] 
	TArray<struct FSoundEnvVolumeData>                 SoundEnvironments;                             // 0x006C (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              CurrentOcclusion;                              // 0x007C (0x0004) [0x0000000000000000]               
	float                                              TargetOcclusion;                               // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              CurrentObstruction;                            // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              TargetObstruction;                             // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              LastObstructionCheckTime;                      // 0x008C (0x0004) [0x0000000000000000]               
	float                                              LastOcclusionCheckTime;                        // 0x0090 (0x0004) [0x0000000000000000]               
	struct FVector                                     BaseLocation;                                  // 0x0094 (0x000C) [0x0000000000000000]               
	struct FVector                                     VirtualizedLocation;                           // 0x00A0 (0x000C) [0x0000000000000000]               
	class FString                                      GroupEventName;                                // 0x00AC (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	TArray<struct FAuxBusInfo>                         ReverbBusInfos;                                // 0x00BC (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FEmitterDebugInfo                           DebugInfo;                                     // 0x00CC (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSoundEmitter");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSoundEmittingMeshActor
// 0x000F OR 0x025C (0x025C - 0x024D)
// 15 OR 604 (604 - 589)
class AOLSoundEmittingMeshActor : public AStaticMeshActor
{
public:
	class UAkEvent*                                    PlayEvent;                                     // 0x0250 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAllowVirtualization : 1;                      // 0x0258 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableMultiPosition : 1;                      // 0x0258 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSoundEmittingMeshActor");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSoundEnvironment
// 0x0018 OR 0x0078 (0x0078 - 0x0060)
// 24 OR 120 (120 - 96)
class UOLSoundEnvironment : public UObject
{
public:
	class FString                                      ReverbEnvironmentType;                         // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              OcclusionFactor;                               // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ObstructionFactor;                             // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSoundEnvironment");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSoundEnvironmentManager
// 0x0084 OR 0x00E4 (0x00E4 - 0x0060)
// 132 OR 228 (228 - 96)
class UOLSoundEnvironmentManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<class AOLSoundEnvironmentVolume*>           ListenerVolumes;                               // 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AOLSoundEnvironmentVolume*>           AllVolumes;                                    // 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bEnvironmentsDirty : 1;                        // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPendingDestroy : 1;                           // 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEnableSoundVirtualization : 1;                // 0x0088 (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	TArray<class UOLSoundEmitter*>                     ActiveSources;                                 // 0x008C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMultiPositionGroup>                 ActiveGroups;                                  // 0x009C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOLSoundEnvironment*                         DefaultSoundEnvironment;                       // 0x00AC (0x0008) [0x0000000000000000]               
	struct FName                                       FadeRTPC;                                      // 0x00B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              OcclusionApproachCoeff;                        // 0x00BC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ObstructionApproachCoeff;                      // 0x00C0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ObstructionRatioInSameVolume;                  // 0x00C4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxPathingDist;                                // 0x00C8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              FreePathingDist;                               // 0x00CC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LockerOcclusion;                               // 0x00D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      LockerReverbEnvironment;                       // 0x00D4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSoundEnvironmentManager");
		}

		return uClassPointer;
	};

	static class UOLSoundEnvironmentManager* GetSoundEnvManager();
	void ExitAllTouchingVolumes();
	void Cleanup();
};

// Class OLGame.OLSoundEnvironmentVolume
// 0x0040 OR 0x02BC (0x02BC - 0x027C)
// 64 OR 700 (700 - 636)
class AOLSoundEnvironmentVolume : public AVolume
{
public:
	uint32_t                                           bUseForOcclusion : 1;                          // 0x027C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bInitialized : 1;                              // 0x027C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UOLSoundEnvironment*                         SoundEnvironment;                              // 0x0280 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UAkEvent*>                            OnEnterEvents;                                 // 0x0288 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UAkEvent*>                            OnExitEvents;                                  // 0x0298 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              FadeDistance;                                  // 0x02A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOLSoundConnectorComponent*>          Connections;                                   // 0x02AC (0x0010) [0x0000000004482008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSoundEnvironmentVolume");
		}

		return uClassPointer;
	};

	void eventPostBeginPlay();
};

// Class OLGame.OLTutorialManager
// 0x006C OR 0x00CC (0x00CC - 0x0060)
// 108 OR 204 (204 - 96)
class UOLTutorialManager : public UObject
{
public:
	uint32_t                                           bTutorialsEnabled : 1;                         // 0x0060 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           bActiveTutorial : 1;                           // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBatteryTutorialComplete : 1;                  // 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bClimbUpTutorialComplete : 1;                  // 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDocumentTutorialComplete : 1;                 // 0x0060 (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            CurrentID;                                     // 0x0064 (0x0004) [0x0000000000000000]               
	class FString                                      TutorialText;                                  // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              CompletedTutorials;                            // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TutorialItemTimestamp;                         // 0x0088 (0x0004) [0x0000000000000000]               
	int32_t                                            ClimbUpTutorialItemIdx;                        // 0x008C (0x0004) [0x0000000000000000]               
	float                                              DefaultTutorialDuration;                       // 0x0090 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      BatteriesTutorialText;                         // 0x0094 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ClimbUpTutorialText_Keyboard;                  // 0x00A4 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ClimbUpTutorialText_Gamepad;                   // 0x00B4 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FName                                       DocumentTutorialTextId;                        // 0x00C4 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLTutorialManager");
		}

		return uClassPointer;
	};

	void Clear();
};

// Class OLGame.OLTypes
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UOLTypes : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLTypes");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLUberPostProcessEffect
// 0x00E4 OR 0x0268 (0x0268 - 0x0184)
// 228 OR 616 (616 - 388)
class UOLUberPostProcessEffect : public UUberPostProcessEffect
{
public:
	float                                              VignetteBlack;                                 // 0x0184 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VignetteWhite;                                 // 0x0188 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GrainBrightness;                               // 0x018C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GrainOpacity;                                  // 0x0190 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GrainScale;                                    // 0x0194 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  GrainTexture;                                  // 0x0198 (0x0008) [0x0000000000000000]               
	struct FLinearColor                                HurtColor;                                     // 0x01A0 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtRadiusMin;                                 // 0x01B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtRadiusMax;                                 // 0x01B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtHardnessMin;                               // 0x01B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtHardnessMax;                               // 0x01BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtAmount;                                    // 0x01C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtExp;                                       // 0x01C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtTimeScale;                                 // 0x01C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HurtScale;                                     // 0x01CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	ECameraMode                                        CameraMode;                                    // 0x01D0 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCameraGlassShattered : 1;                     // 0x01D4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              CameraColorEffect;                             // 0x01D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CameraScale;                                   // 0x01DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                CameraColor;                                   // 0x01E0 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              CameraGlassLightIntensity;                     // 0x01F0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                CameraGlassLightColor;                         // 0x01F4 (0x0010) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  CameraGlassDiffuse;                            // 0x0204 (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  CameraGlassNormal;                             // 0x020C (0x0008) [0x0000000000000000]               
	class UTextureCube*                                CameraGlassCubeMap;                            // 0x0214 (0x0008) [0x0000000000000000]               
	float                                              MovieIntensity;                                // 0x021C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                MovieColorHi;                                  // 0x0220 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                MovieColorLo;                                  // 0x0230 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                MovieColor;                                    // 0x0240 (0x0010) [0x0000000000000001] (CPF_Edit)    
	class UTextureMovie*                               MovieTexture;                                  // 0x0250 (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  MovieGradTexture;                              // 0x0258 (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  MovieLightMaskTexture;                         // 0x0260 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUberPostProcessEffect");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLUtils
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UOLUtils : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUtils");
		}

		return uClassPointer;
	};

	static class AOLPlayerController* GetOLPC();
	static bool IsBindableKey(struct FName ButtonName);
	static bool IsPlayingDLC();
	static bool IsDLCInstalled();
	static bool IsConsole();
	static bool IsPS4();
};

// Class OLGame.OLVoiceManager
// 0x0068 OR 0x00C8 (0x00C8 - 0x0060)
// 104 OR 200 (200 - 96)
class UOLVoiceManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IInterface_AkEventHandler;             // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FName>                               VOPackages;                                    // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FLineQueue>                          LineQueues;                                    // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQueueTimer>                         Timers;                                        // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FEndOfEventInfo>                     EventCallbacksToProcess;                       // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMarkerInfo>                         MarkerCallbacksToProcess;                      // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    CriticalSection;                               // 0x00C0 (0x0008) [0x0000000000001000] (CPF_Native)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLVoiceManager");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
};

// Class OLGame.OLWaitPointComponent
// 0x007B OR 0x0100 (0x0100 - 0x0085)
// 123 OR 256 (256 - 133)
class UOLWaitPointComponent : public UActorComponent
{
public:
	TArray<struct FWaitPoint>                          WaitPoints;                                    // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                           UnknownData00[0x8];                            // 0x0098 (0x0008) MISSED OFFSET
	struct FMatrix                                     LocalToWorld;                                  // 0x00A0 (0x0040) [0x0000000000000000]               
	struct FVector                                     StartOffset;                                   // 0x00E0 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     AdditionalOffset;                              // 0x00EC (0x000C) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumWaitPointsPerSide;                          // 0x00F8 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bOneSideOnly : 1;                              // 0x00FC (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bFlipOnYAxis : 1;                              // 0x00FC (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLWaitPointComponent");
		}

		return uClassPointer;
	};

	void ReturnWaitPoint(struct FWaitPoint Point);
	struct FWaitPoint GrabBestWaitPoint(bool bReversed);
	struct FVector GetWaitPointForwardVector(struct FWaitPoint Point);
};

// Class OLGame.ActorFactoryOLAI
// 0x005C OR 0x0130 (0x0130 - 0x00D4)
// 92 OR 304 (304 - 212)
class UActorFactoryOLAI : public UActorFactoryAI
{
public:
	class UOLBTBehaviorTree*                           BehaviorTree;                                  // 0x00D4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               MeshOverride;                                  // 0x00DC (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FShaderValues                               ShaderOverrides;                               // 0x00E4 (0x0014) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       UniformColorName;                              // 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bOverrideLightingFlags : 1;                    // 0x0100 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCastStaticShadow : 1;                         // 0x0100 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCastDynamicShadow : 1;                        // 0x0100 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSelfShadowOnly : 1;                           // 0x0100 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bCastShadowInNightVision : 1;                  // 0x0100 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bPlaySpawnWaypointAnim : 1;                    // 0x0100 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           ShouldAttack : 1;                              // 0x0100 (0x0004) [0x0000000020000000] [0x00000040]  CPF_Deprecated)
	uint32_t                                           bUseKillingBlow : 1;                           // 0x0100 (0x0004) [0x0000000020000000] [0x00000080]  CPF_Deprecated)
	uint32_t                                           bAlwaysLookAtPlayer : 1;                       // 0x0100 (0x0004) [0x0000000020000000] [0x00000100]  CPF_Deprecated)
	struct FEnemyModifiers                             PawnModifiers;                                 // 0x0104 (0x0014) [0x0000000000000001] (CPF_Edit)    
	TArray<class UAnimSet*>                            AdditionalAnimSets;                            // 0x0118 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UOLAIContextualVOAsset*                      VOAsset;                                       // 0x0128 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.ActorFactoryOLAI");
		}

		return uClassPointer;
	};

};

// Class OLGame.ActorFactoryOLWaypoint
// 0x0000 OR 0x009C (0x009C - 0x009C)
// 0 OR 156 (156 - 156)
class UActorFactoryOLWaypoint : public UActorFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.ActorFactoryOLWaypoint");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBot
// 0x02C8 OR 0x0764 (0x0764 - 0x049C)
// 712 OR 1892 (1892 - 1180)
class AOLBot : public AGameAIController
{
public:
	class AOLEnemyPawn*                                EnemyPawn;                                     // 0x049C (0x0008) [0x0000000000000000]               
	class AOLAIGroup*                                  Group;                                         // 0x04A4 (0x0008) [0x0000000000000000]               
	class AOLHero*                                     TargetPlayer;                                  // 0x04AC (0x0008) [0x0000000000000000]               
	class UOLNavigationHandle*                         OLNavHandle;                                   // 0x04B4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bAttackRight : 1;                              // 0x04BC (0x0004) [0x0000000000000000] [0xFFFFFFFF80000000] 
	uint32_t                                           bReGeneratePath : 1;                           // 0x04BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRegenerateWhilePerforming : 1;                // 0x04BC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDebugBehaviorTransitions : 1;                 // 0x04BC (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bDebugThrowCalculations : 1;                   // 0x04BC (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           ShouldRecalculate : 1;                         // 0x04BC (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bForceRecalculate : 1;                         // 0x04BC (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOpeningDoor : 1;                              // 0x04BC (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bBreachingDoor : 1;                            // 0x04BC (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bTrimmedToDoor : 1;                            // 0x04BC (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bFinishedDoor : 1;                             // 0x04BC (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bCancelBash : 1;                               // 0x04BC (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bWasChasing : 1;                               // 0x04BC (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bMoveCancelled : 1;                            // 0x04BC (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bTurning : 1;                                  // 0x04BC (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           InAttackRange : 1;                             // 0x04BC (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bInDarkness : 1;                               // 0x04BC (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bTargetInDarkness : 1;                         // 0x04BC (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bInElectricity : 1;                            // 0x04BC (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bEnableHeadTracking : 1;                       // 0x04BC (0x0004) [0x0000000000002000] [0x00040000] (CPF_Transient)
	uint32_t                                           bAvoiding : 1;                                 // 0x04BC (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bPatrolToPlayer : 1;                           // 0x04BC (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bReversePatrolRoute : 1;                       // 0x04BC (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bNewDisturbance : 1;                           // 0x04BC (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bNoTrimDisturbance : 1;                        // 0x04BC (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bDisturbed : 1;                                // 0x04BC (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bInvestigationValid : 1;                       // 0x04BC (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bIsInvestigating : 1;                          // 0x04BC (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bInvestigationFirstPoint : 1;                  // 0x04BC (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           bInvestigationPointValid : 1;                  // 0x04BC (0x0004) [0x0000000000000000] [0x10000000] 
	uint32_t                                           bInvestigatingObject : 1;                      // 0x04BC (0x0004) [0x0000000000000000] [0x20000000] 
	uint32_t                                           bAttacking : 1;                                // 0x04BC (0x0004) [0x0000000000000000] [0x40000000] 
	uint32_t                                           bAttackCycling : 1;                            // 0x04C0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bKilling : 1;                                  // 0x04C0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUseQuickAttack : 1;                           // 0x04C0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDamageTargetTicking : 1;                      // 0x04C0 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bTookDamage : 1;                               // 0x04C0 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bKnockedBack : 1;                              // 0x04C0 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     NavigationExtent;                              // 0x04C4 (0x000C) [0x0000000000000000]               
	class UOLAISightComponent*                         SightComponent;                                // 0x04D0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOLBTBehavior*                               RootBehavior;                                  // 0x04D8 (0x0008) [0x0000000000000000]               
	struct FName                                       InterruptionState;                             // 0x04E0 (0x0008) [0x0000000000000000]               
	EAIBehaviorState                                   BehaviorState;                                 // 0x04E8 (0x0001) [0x0000000000000000]               
	EAIBehaviorState                                   LastBehaviorState;                             // 0x04E9 (0x0001) [0x0000000000000000]               
	EAIEnvironment                                     CurrentEnvironment;                            // 0x04EA (0x0001) [0x0000000000000000]               
	EMoveStatus                                        CurrentMoveStatus;                             // 0x04EB (0x0001) [0x0000000000000000]               
	EMoveFailedReason                                  LastMoveFailedReason;                          // 0x04EC (0x0001) [0x0000000000000000]               
	uint8_t                                            CurrentBedSide;                                // 0x04ED (0x0001) [0x0000000000000000]               
	uint8_t                                            bPatrolComplete;                               // 0x04EE (0x0001) [0x0000000000000000]               
	EEnemyMode                                         PatrolMode;                                    // 0x04EF (0x0001) [0x0000000000000000]               
	EAIAttackType                                      CurrentAttackType;                             // 0x04F0 (0x0001) [0x0000000000000000]               
	struct FMovementData                               CurrentMove;                                   // 0x04F4 (0x002C) [0x0000000000000000]               
	struct FMovementData                               NextMove;                                      // 0x0520 (0x002C) [0x0000000000000000]               
	float                                              DynamicPathCheckTime;                          // 0x054C (0x0004) [0x0000000000000002] (CPF_Const)   
	class UGameAICommand*                              QueuedCommand;                                 // 0x0550 (0x0008) [0x0000000000000000]               
	class AOLDoor*                                     ActiveDoor;                                    // 0x0558 (0x0008) [0x0000000000000000]               
	class AOLLedgeMarker*                              ActiveLedge;                                   // 0x0560 (0x0008) [0x0000000000000000]               
	class AOLBashableObject*                           ActiveBashable;                                // 0x0568 (0x0008) [0x0000000000000000]               
	class AOLBed*                                      ActiveBed;                                     // 0x0570 (0x0008) [0x0000000000000000]               
	class AOLHidingSpot*                               ActiveLocker;                                  // 0x0578 (0x0008) [0x0000000000000000]               
	class AOLAIVaultMarker*                            ActiveVault;                                   // 0x0580 (0x0008) [0x0000000000000000]               
	class UOLWaitPointComponent*                       ActiveWPComponent;                             // 0x0588 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     MoveTempDest;                                  // 0x0590 (0x000C) [0x0000000000000000]               
	struct FVector                                     MoveLastLocation;                              // 0x059C (0x000C) [0x0000000000000000]               
	float                                              MoveTimeSinceLastPath;                         // 0x05A8 (0x0004) [0x0000000000000000]               
	float                                              TempTrimAmount;                                // 0x05AC (0x0004) [0x0000000000000000]               
	TArray<struct FVector>                             MoveTempPath;                                  // 0x05B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MoveModifiedBufferDist;                        // 0x05C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CheckStuckTimer;                               // 0x05C4 (0x0004) [0x0000000000000000]               
	float                                              CheckStuckSpeedThreshold;                      // 0x05C8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LookAheadTimer;                                // 0x05CC (0x0004) [0x0000000000000000]               
	float                                              StuckRepathDelayTimer;                         // 0x05D0 (0x0004) [0x0000000000000000]               
	float                                              StuckRepathDelayLength;                        // 0x05D4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              IgnoreTimer;                                   // 0x05D8 (0x0004) [0x0000000000000000]               
	float                                              AIMoveReactionTimer;                           // 0x05DC (0x0004) [0x0000000000000000]               
	struct FWaitPoint                                  CurrentWaitPoint;                              // 0x05E0 (0x0024) [0x0000000000000000]               
	float                                              WaitForMoveTime;                               // 0x0604 (0x0004) [0x0000000000000000]               
	struct FAnimationData                              CurrentAnimation;                              // 0x0608 (0x003C) [0x0000000000000000]               
	struct FRotator                                    TurnToDirection;                               // 0x0644 (0x000C) [0x0000000000000000]               
	float                                              PatrolToPlayerDistance;                        // 0x0650 (0x0004) [0x0000000000000000]               
	float                                              PatrolToPlayerUpdateRate;                      // 0x0654 (0x0004) [0x0000000000000000]               
	float                                              PatrolToPlayerLastUpdated;                     // 0x0658 (0x0004) [0x0000000000000000]               
	struct FVector                                     PatrolToPlayerLastLocation;                    // 0x065C (0x000C) [0x0000000000000000]               
	class ARoute*                                      PatrolRoute;                                   // 0x0668 (0x0008) [0x0000000000000000]               
	int32_t                                            PatrolRouteIndex;                              // 0x0670 (0x0004) [0x0000000000000000]               
	int32_t                                            NextPatrolRouteIndex;                          // 0x0674 (0x0004) [0x0000000000000000]               
	TArray<struct FDelayedNoise>                       DelayedNoises;                                 // 0x0678 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FDisturbance                                VisualDisturbance;                             // 0x0688 (0x0010) [0x0000000000000000]               
	struct FDisturbance                                AudioDisturbance;                              // 0x0698 (0x0010) [0x0000000000000000]               
	float                                              NewDisturbanceResetTimer;                      // 0x06A8 (0x0004) [0x0000000000000000]               
	float                                              IgnoreDisturbanceTimer;                        // 0x06AC (0x0004) [0x0000000000000000]               
	float                                              DebugLastLoudness;                             // 0x06B0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DebugLastOcclusion;                            // 0x06B4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DebugLastDistance;                             // 0x06B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<class AOLBot*>                              InvestigatingBots;                             // 0x06BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FInvestigationPoint>                 InvestigationPoints;                           // 0x06CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              InvestigateTotalWeight;                        // 0x06DC (0x0004) [0x0000000000000000]               
	class AOLAIInvestigationVolume*                    InvestigationVolume;                           // 0x06E0 (0x0008) [0x0000000000000000]               
	struct FVector                                     InvestigationOrigin;                           // 0x06E8 (0x000C) [0x0000000000000000]               
	class AOLBot*                                      InvestigationOwner;                            // 0x06F4 (0x0008) [0x0000000000000000]               
	struct FInvestigationPoint                         CurrentInvestigationPoint;                     // 0x06FC (0x001C) [0x0000000000000000]               
	struct FVector                                     InvestigateStartLocation;                      // 0x0718 (0x000C) [0x0000000000000000]               
	struct FVector                                     InvestigateStartRotation;                      // 0x0724 (0x000C) [0x0000000000000000]               
	float                                              CurrentNoiseValue;                             // 0x0730 (0x0004) [0x0000000000000000]               
	float                                              TimeSinceNoise;                                // 0x0734 (0x0004) [0x0000000000000000]               
	float                                              AttackTimer;                                   // 0x0738 (0x0004) [0x0000000000000000]               
	struct FVector                                     AttackStartLocation;                           // 0x073C (0x000C) [0x0000000000000000]               
	struct FVector                                     AttackStartRotation;                           // 0x0748 (0x000C) [0x0000000000000000]               
	struct FVector                                     GrabTargetStartLocation;                       // 0x0754 (0x000C) [0x0000000000000000]               
	float                                              ThrowPlayerRotation;                           // 0x0760 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBot");
		}

		return uClassPointer;
	};

	void OnAIMoveToActor(class USeqAct_AIMoveToActor* Action);
	void FinishMatinee();
	void BeginMatinee();
	void OnAIInvestigatePoint(class UOLSeqAct_AIInvestigatePoint* Action);
	void eventToggleAIAttackOnProximity(bool bEnable);
	void OnToggleAIAttackOnProximity(class UOLSeqAct_ToggleAIAttackOnProximity* Action);
	void ToggleAIAlwaysSeePlayer(bool bEnable);
	void OnToggleAIAlwaysSeePlayer(class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action);
	void eventIgnoreTarget(float Time);
	void eventToggleAIIgnorePlayer(bool bEnable);
	void OnToggleAIIgnorePlayer(class UOLSeqAct_ToggleAIIgnorePlayer* Action);
	void OnAIAbortPatrol(class UOLSeqAct_AIAbortPatrol* Action);
	void eventStopPatrol(bool optionalBAbort);
	void OnAIStartPatrol(class UOLSeqAct_AIStartPatrol* Action);
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	static void DrawDebugStates(class UObject* anObject, class UCanvas* aCanvas, float XL, float XPos, float& out_YL, float& out_YPos);
	void eventDebugMessagePlayer(class FString msg);
	void ClearDestination();
	void eventClearDisturbance();
	void ClearInvestigation();
	void TriggerVisualDisturbance(struct FVector DisturbanceLocation, bool optionalBFromGroup);
	void TriggerAudioDisturbance(struct FVector DisturbanceLocation, bool optionalBFromGroup, bool optionalBNewInvestigate, bool optionalBNoTrim, bool optionalBIgnoreDisturbs);
	void LostTarget(bool bAfterChase);
	bool IsAtTrimmedDoor();
	bool GetDoorApproachPoint(class AOLDoor* aDoor, struct FVector& ApproachPoint);
	void EndDoorTraversal();
	void StartDoorTraversal(bool bReversed);
	struct FVector GetSqueezePoint(class AOLSqueezeVolume* Squeeze);
	bool GetClosestPointOnNavMesh(struct FVector PointToCheck, struct FVector& out_NewPoint);
	void MoveAlongPath(TArray<struct FVector> PathPoints, class AActor* optionalFocusTarget);
	void ClearNextMove();
	void eventClearCurrentMove();
	void eventStartWaitForDoor();
	void StopMoving(bool optionalBAborted);
	bool TargetReachable();
	bool GetClosestPointToActor(class AActor* ActorToCheck, struct FVector& NewPoint, float& NewBuffer);
	bool eventStartMove(struct FMovementData aData);
	bool IsAlreadyAtDestination(struct FMovementData aData);
	bool eventCompareMoves(struct FMovementData Data1, struct FMovementData Data2);
	class AOLWaypoint* GetCurrentWaypoint();
	bool eventChooseClosestPatrolWaypoint();
	bool eventChooseNextPatrolWaypoint();
	bool eventNotifyBump(class AActor* Other, struct FVector HitNormal);
	void RegeneratePath();
	void eventNotifyPathChanged();
	bool eventGeneratePathToLocation(struct FVector Goal, float optionalWithinDistance, bool optionalBAllowPartialPath);
	bool eventGeneratePathToActor(class AActor* Goal, float optionalWithinDistance, bool optionalBAllowPartialPath);
	void AddBasePathContraints();
	void eventRecalculate(bool optionalBForce);
	void eventPushNotify();
	void eventKnockbackTickNotify();
	bool IsPlayerOnVaultingPath();
	bool IsPlayerOnBrokenSideOfDoor(class AOLDoor* door);
	void eventKnockbackStartNotify();
	void eventBreakDoorNotify();
	void eventBashDoorNotify();
	void eventDamageTargetRangeTickNotify();
	void eventDamageTargetRangeStartNotify();
	void eventDamageTarget();
	bool IsInDamageRange();
	bool IsInFinalAttackRange();
	bool IsInApproachAttackRange();
	bool IsInAttackRange();
	bool InvestigateObject(class AActor* anActor);
	bool TryGrabUnder();
	bool TryGrabNormal(bool bCrouched);
	void AttackCycleEnd();
	bool AttackTarget(EAIAttackType aType);
	void UpdateAnimationMode();
	void eventTriggerDisturbed();
	void eventStartAnimating(struct FAnimationData aAnim, struct FRotator Direction);
	void ClearAnimation();
	bool CompareAnimations(struct FAnimationData AnimDataOne, struct FAnimationData AnimDataTwo);
	void eventTurnTo(struct FRotator Direction);
	bool PerformAttackCheck();
	bool PerformGrabCheck();
	bool IsPerformingMoveAbility();
	void WaitForSpecialMove(bool optionalBNoDelay);
	void WaitForFullBodyAnim();
	void PlayFullBodyAnim(struct FName AnimName, float Rate, float optionalBlendInTime, float optionalBlendOutTime, bool optionalBLooping, float optionalStartTime, float optionalEndTime);
	void PushQueuedCommand();
	bool eventQueueAICommand(class UGameAICommand* Cmd);
	void UnPossess();
	void AddToAIGroup();
	void Possess(class APawn* aPawn, bool bVehicleTransition);
	void eventDestroyed();
	void eventFindPlayer();
	void InitNavigationHandle();
	void PostBeginPlay();
};

// Class OLGame.OLAICmd_MoveAbility
// 0x0064 OR 0x00E8 (0x00E8 - 0x0084)
// 100 OR 232 (232 - 132)
class UOLAICmd_MoveAbility : public UGameAICommand
{
public:
	struct FVector                                     CurrentDestination;                            // 0x0084 (0x000C) [0x0000000000000000]               
	uint32_t                                           bReversed : 1;                                 // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAtWaitPoint : 1;                              // 0x0090 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UOLWaitPointComponent*                       WaitPointComponent;                            // 0x0094 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FWaitPoint                                  CurrentWaitPoint;                              // 0x009C (0x0024) [0x0000000000000000]               
	class AOLBot*                                      ClosestBot;                                    // 0x00C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AOLBot*                                      ActiveBot;                                     // 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOLAICmd_MoveAbility*                        TempMoveAbility;                               // 0x00D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<struct FVector>                             TempPath;                                      // 0x00D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility");
		}

		return uClassPointer;
	};

	bool AtPoint(struct FVector Point);
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	void ContinueFromWaiting();
	void MoveToWaiting();
	int32_t GetWaitIndex();
	TArray<class AOLBot*> GetBotsOnObject();
	struct FVector GetWaitPointForwardDirection(struct FWaitPoint Point);
	void ReturnWaitPoint(struct FWaitPoint Point);
	struct FWaitPoint GrabBestWaitPoint();
	void ModifyPath(struct FVector NewDestination, TArray<struct FVector>& NewPath);
	bool ModifyApproach(struct FVector& NewDestination);
	void Completed();
	void Popped();
	void Pushed();
};

// Class OLGame.OLAICmd_MoveAbility_Bash
// 0x0014 OR 0x00FC (0x00FC - 0x00E8)
// 20 OR 252 (252 - 232)
class UOLAICmd_MoveAbility_Bash : public UOLAICmd_MoveAbility
{
public:
	class AOLBashableObject*                           Bashable;                                      // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FVector                                     LastDestination;                               // 0x00F0 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Bash");
		}

		return uClassPointer;
	};

	static class UOLAICmd_MoveAbility_Bash* eventMoveThruBashable(class AOLBot* Bot, class AOLBashableObject* InBashable, struct FVector InitialDestination, bool bInReversed);
};

// Class OLGame.OLAICmd_MoveAbility_Door
// 0x0018 OR 0x0100 (0x0100 - 0x00E8)
// 24 OR 256 (256 - 232)
class UOLAICmd_MoveAbility_Door : public UOLAICmd_MoveAbility
{
public:
	class AOLDoor*                                     door;                                          // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FVector                                     LastDestination;                               // 0x00F0 (0x000C) [0x0000000000000000]               
	int32_t                                            BashIter;                                      // 0x00FC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Door");
		}

		return uClassPointer;
	};

	TArray<class AOLBot*> GetBotsOnObject();
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	void Cancel();
	void Popped();
	bool ModifyApproach(struct FVector& NewDestination);
	bool IsDoorOpen();
	static class UOLAICmd_MoveAbility_Door* eventMoveThruDoor(class AOLBot* Bot, class AOLDoor* InDoor, struct FVector InitialDestination, bool bInReversed);
};

// Class OLGame.OLAICmd_MoveAbility_Ledge
// 0x0008 OR 0x00F0 (0x00F0 - 0x00E8)
// 8 OR 240 (240 - 232)
class UOLAICmd_MoveAbility_Ledge : public UOLAICmd_MoveAbility
{
public:
	class AOLLedgeMarker*                              Ledge;                                         // 0x00E8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Ledge");
		}

		return uClassPointer;
	};

	TArray<class AOLBot*> GetBotsOnObject();
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	static class UOLAICmd_MoveAbility_Ledge* eventMoveThruLedge(class AOLBot* Bot, class AOLLedgeMarker* InLedge, struct FVector InitialDestination, bool bInReversed);
};

// Class OLGame.OLAICmd_MoveAbility_Vault
// 0x0014 OR 0x00FC (0x00FC - 0x00E8)
// 20 OR 252 (252 - 232)
class UOLAICmd_MoveAbility_Vault : public UOLAICmd_MoveAbility
{
public:
	class AOLAIVaultMarker*                            VaultMarker;                                   // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FVector                                     NextPoint;                                     // 0x00F0 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Vault");
		}

		return uClassPointer;
	};

	TArray<class AOLBot*> GetBotsOnObject();
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	static class UOLAICmd_MoveAbility_Vault* eventMoveThruLedge(class AOLBot* Bot, class AOLAIVaultMarker* InMarker, struct FVector InitialDestination, bool bInReversed);
};

// Class OLGame.OLAIContextualVOAsset
// 0x0010 OR 0x0070 (0x0070 - 0x0060)
// 16 OR 112 (112 - 96)
class UOLAIContextualVOAsset : public UObject
{
public:
	TArray<struct FVOMapping>                          Mappings;                                      // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAIContextualVOAsset");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAIGroup
// 0x0028 OR 0x0268 (0x0268 - 0x0240)
// 40 OR 616 (616 - 576)
class AOLAIGroup : public AInfo
{
public:
	TArray<class AOLBot*>                              Bots;                                          // 0x0240 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AOLBot*                                      AttackingBot;                                  // 0x0250 (0x0008) [0x0000000000000000]               
	uint32_t                                           bTokenAvailable : 1;                           // 0x0258 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackTimer;                                   // 0x025C (0x0004) [0x0000000000000000]               
	float                                              MinTimeBetweenAttacks;                         // 0x0260 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxTimeBetweenAttacks;                         // 0x0264 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAIGroup");
		}

		return uClassPointer;
	};

	void NotifyOthersPathChanged(class AOLBot* Notifier);
	void ReturnAttackToken(class AOLBot* attacker);
	void TakeAttackToken(class AOLBot* attacker);
	bool CanAttack(class AOLBot* attacker);
	void eventRecalculate();
	bool eventDidAnyoneSeePlayerInBed();
	bool eventDidAnyoneSeePlayerinLocker();
	bool eventCanAnyoneSeeTarget();
	void ToggleAIAlwaysSeePlayer(bool bEnable);
	void ToggleAIIgnorePlayer(bool bEnable);
	void eventTriggerVisualDisturbance(class AOLBot* Triggerer, struct FVector DisturbanceLocation);
	void eventTriggerAudioDisturbance(class AOLBot* Triggerer, struct FVector DisturbanceLocation, bool optionalBNewInvestigate, bool optionalBNoTrim);
	void eventRemoveBot(class AOLBot* Bot);
	void eventAddBot(class AOLBot* Bot);
};

// Class OLGame.OLAIInvestigationPoint
// 0x0010 OR 0x0250 (0x0250 - 0x0240)
// 16 OR 592 (592 - 576)
class AOLAIInvestigationPoint : public AActor
{
public:
	struct FName                                       AnimToPlay;                                    // 0x0240 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseRotation : 1;                              // 0x0248 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              WeightOverride;                                // 0x024C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAIInvestigationPoint");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAIInvestigationVolume
// 0x0030 OR 0x02AC (0x02AC - 0x027C)
// 48 OR 684 (684 - 636)
class AOLAIInvestigationVolume : public AVolume
{
public:
	TArray<class AOLAIInvestigationPoint*>             Points;                                        // 0x027C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class AOLHidingSpot*>                       Lockers;                                       // 0x028C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class AOLBed*>                              Beds;                                          // 0x029C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAIInvestigationVolume");
		}

		return uClassPointer;
	};

	void eventProcessActorSetVolume(class AActor* Other);
};

// Class OLGame.OLAISightComponent
// 0x003B OR 0x00C0 (0x00C0 - 0x0085)
// 59 OR 192 (192 - 133)
class UOLAISightComponent : public UActorComponent
{
public:
	class AOLBot*                                      Bot;                                           // 0x0088 (0x0008) [0x0000000000000000]               
	uint32_t                                           bAlwaysSeeTarget : 1;                          // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasAlwaysSeeTarget : 1;                       // 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIgnoreTarget : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           CanSeeTarget : 1;                              // 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           CouldSeeTarget : 1;                            // 0x0090 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           IsInClose : 1;                                 // 0x0090 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           IsInNarrowCone : 1;                            // 0x0090 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           IsInWideCone : 1;                              // 0x0090 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bSawPlayerEnterHidingSpot : 1;                 // 0x0090 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bSawPlayerEnterBed : 1;                        // 0x0090 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bSawPlayerGoUnder : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bPeeking : 1;                                  // 0x0090 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bCrouched : 1;                                 // 0x0090 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bSawPlayerInSqueeze : 1;                       // 0x0090 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bDebugSight : 1;                               // 0x0090 (0x0004) [0x0000000000004000] [0x00004000] (CPF_Config)
	struct FVector                                     SawPlayerGoUnderLastPosition;                  // 0x0094 (0x000C) [0x0000000000000000]               
	float                                              SawPlayerGoUnderMaxDistance;                   // 0x00A0 (0x0004) [0x0000000000000002] (CPF_Const)   
	class AOLSqueezeVolume*                            LastSqueeze;                                   // 0x00A4 (0x0008) [0x0000000000000000]               
	float                                              WideConeTimer;                                 // 0x00AC (0x0004) [0x0000000000000000]               
	float                                              LoseTimer;                                     // 0x00B0 (0x0004) [0x0000000000000000]               
	float                                              DistanceToPlayer;                              // 0x00B4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              HorizontalAngleToPlayer;                       // 0x00B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              VerticalAngleToPlayer;                         // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAISightComponent");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
};

// Class OLGame.OLEnemyPawn
// 0x0C30 OR 0x37EC (0x37EC - 0x2BBC)
// 3120 OR 14316 (14316 - 11196)
class AOLEnemyPawn : public AOLPawn
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObstacle;        // 0x2BBC (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;          // 0x2BC4 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UClass*                                      NPCController;                                 // 0x2BCC (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AOLBot*                                      Bot;                                           // 0x2BD4 (0x0008) [0x0000000000000000]               
	class UStaticMeshComponent*                        WeaponMesh;                                    // 0x2BDC (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UAnimSet*>                            WeaponAnimSets;                                // 0x2BE4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bUsingWeapon : 1;                              // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasWeaponEquipped : 1;                        // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNavMeshRegistered : 1;                        // 0x2BF4 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bHasPreferredPath : 1;                         // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsAnimatingFullBody : 1;                      // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAnimRootMotionActive : 1;                     // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bCastShadowInNV : 1;                           // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bLeftAnim : 1;                                 // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bBackAnim : 1;                                 // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bIdleSoundPlaying : 1;                         // 0x2BF4 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bAttackUseQuickAttack : 1;                     // 0x2BF4 (0x0004) [0x0000000000004000] [0x00000400] (CPF_Config)
	uint32_t                                           bInvestigateLockers : 1;                       // 0x2BF4 (0x0004) [0x0000000000004000] [0x00000800] (CPF_Config)
	uint32_t                                           bInvestigateBeds : 1;                          // 0x2BF4 (0x0004) [0x0000000000004000] [0x00001000] (CPF_Config)
	uint32_t                                           bDrawSteeringDebug : 1;                        // 0x2BF4 (0x0004) [0x0000000000004000] [0x00002000] (CPF_Config)
	uint32_t                                           bUsePreferredPaths : 1;                        // 0x2BF4 (0x0004) [0x0000000000004000] [0x00004000] (CPF_Config)
	uint32_t                                           bUseForMusic : 1;                              // 0x2BF4 (0x0004) [0x0000000000000002] [0x00008000] (CPF_Const)
	uint32_t                                           bMusicInPatrol : 1;                            // 0x2BF4 (0x0004) [0x0000000000000002] [0x00010000] (CPF_Const)
	uint32_t                                           bUseAIGroup : 1;                               // 0x2BF4 (0x0004) [0x0000000000000002] [0x00020000] (CPF_Const)
	uint32_t                                           bCanVault : 1;                                 // 0x2BF4 (0x0004) [0x0000000000000002] [0x00040000] (CPF_Const)
	uint32_t                                           bCanThrow : 1;                                 // 0x2BF4 (0x0004) [0x0000000000000002] [0x00080000] (CPF_Const)
	uint32_t                                           bUsesDirectionalAttacks : 1;                   // 0x2BF4 (0x0004) [0x0000000000000002] [0x00100000] (CPF_Const)
	uint32_t                                           bCanBeKnockedback : 1;                         // 0x2BF4 (0x0004) [0x0000000000000002] [0x00200000] (CPF_Const)
	uint32_t                                           bUseFirstInvestigationInFront : 1;             // 0x2BF4 (0x0004) [0x0000000000000002] [0x00400000] (CPF_Const)
	uint32_t                                           bCloseDoorInPatrol : 1;                        // 0x2BF4 (0x0004) [0x0000000000000002] [0x00800000] (CPF_Const)
	uint32_t                                           bUsesDoorBashLoop : 1;                         // 0x2BF4 (0x0004) [0x0000000000000002] [0x01000000] (CPF_Const)
	uint32_t                                           bUseAvoidSystem : 1;                           // 0x2BF4 (0x0004) [0x0000000000000002] [0x02000000] (CPF_Const)
	EWeaponType                                        WeaponType;                                    // 0x2BF8 (0x0001) [0x0000000000000000]               
	EWeapon                                            CurrentWeapon;                                 // 0x2BF9 (0x0001) [0x0000000000000000]               
	ERotationMode                                      RotationMode;                                  // 0x2BFA (0x0001) [0x0000000000000000]               
	EEnemyMode                                         EnemyMode;                                     // 0x2BFB (0x0001) [0x0000000000000000]               
	EAttackSide                                        AttackSide;                                    // 0x2BFC (0x0001) [0x0000000000000000]               
	EMoveSpeedMode                                     MoveSpeedMode;                                 // 0x2BFD (0x0001) [0x0000000000000000]               
	struct FWeaponTypeData                             Weapons[0x9];                                  // 0x2C00 (0x006C) [0x0000000000000000]               
	struct FEnemyModifiers                             Modifiers;                                     // 0x2C6C (0x0014) [0x0000000000000000]               
	class UOLBTBehaviorTree*                           BehaviorTree;                                  // 0x2C80 (0x0008) [0x0000000000000000]               
	struct FVector                                     LastNavMeshCheckLocation;                      // 0x2C88 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              LastNavMeshObstacleRegisterTime;               // 0x2C94 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NavMeshObstacleRegistrationTime;               // 0x2C98 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     CurrentMovePathStart;                          // 0x2C9C (0x000C) [0x0000000000000000]               
	TArray<struct FVector>                             CurrentMovePath;                               // 0x2CA8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CurrentMovePathIdx;                            // 0x2CB8 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastMovePathPoint;                             // 0x2CBC (0x000C) [0x0000000000000000]               
	class AActor*                                      FocusTarget;                                   // 0x2CC8 (0x0008) [0x0000000000000000]               
	TArray<struct FVector2D>                           CRPathSegments;                                // 0x2CD0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector2D>                           CRPathSubSegments;                             // 0x2CE0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CRPathLastIndex;                               // 0x2CF0 (0x0004) [0x0000000000000000]               
	float                                              MaxPathSegmentRatio;                           // 0x2CF4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            CRPathNumSubSegments;                          // 0x2CF8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PathMaxElasticityDistance;                     // 0x2CFC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PathMinElasticityDistance;                     // 0x2D00 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FVector>                             MovingTestPoints;                              // 0x2D04 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MovingTestTimer;                               // 0x2D14 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMovingTestPoints;                           // 0x2D18 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MovingTestLength;                              // 0x2D1C (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     TargetVelocity;                                // 0x2D20 (0x000C) [0x0000000000000000]               
	float                                              TargetYaw;                                     // 0x2D2C (0x0004) [0x0000000000000000]               
	TArray<class UOLAISteering*>                       SteeringBehaviors;                             // 0x2D30 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     CurrentRepulsion;                              // 0x2D40 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     PreferredPathAnchor;                           // 0x2D4C (0x000C) [0x0000000000000000]               
	struct FVector                                     PreferredPathDirection;                        // 0x2D58 (0x000C) [0x0000000000000000]               
	class AOLPreferredPathMarker*                      PreferredPath;                                 // 0x2D64 (0x0008) [0x0000000000000000]               
	float                                              SmoothedVelocityYaw;                           // 0x2D6C (0x0004) [0x0000000000000000]               
	struct FName                                       LastPlayedAnim;                                // 0x2D70 (0x0008) [0x0000000000000000]               
	TArray<class UAnimSet*>                            SpawnerAnimSets;                               // 0x2D78 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAnimNodeSlot*                               TopHalfSlot;                                   // 0x2D88 (0x0008) [0x0000000000000000]               
	class UOLAnimCustomBlend*                          TopHalfBlend;                                  // 0x2D90 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByEnemyMode*                     AnimNodeSelectEnemyMode;                       // 0x2D98 (0x0008) [0x0000000000000000]               
	class USkelControlLookAt*                          HeadTrackingLookAt;                            // 0x2DA0 (0x0008) [0x0000000000000000]               
	TArray<struct FNanoSwarmEmitter>                   NanoSwarmEmitters;                             // 0x2DA8 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	float                                              FallingDeathZ;                                 // 0x2DB8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MeshZOffset;                                   // 0x2DBC (0x0004) [0x0000000000000000]               
	struct FVector                                     MeshOffset2D;                                  // 0x2DC0 (0x000C) [0x0000000000000000]               
	struct FRotator                                    TurnStart;                                     // 0x2DCC (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              OldTurnAmount;                                 // 0x2DD8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TurnAmount;                                    // 0x2DDC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ThrowRotation;                                 // 0x2DE0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SpecialMoveBlendAlpha;                         // 0x2DE4 (0x0004) [0x0000000000000000]               
	float                                              SpecialMoveRate;                               // 0x2DE8 (0x0004) [0x0000000000000000]               
	float                                              SpecialMoveStalledTimestamp;                   // 0x2DEC (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    FootStepSound_Run;                             // 0x2DF0 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEventAmbientStart;                        // 0x2DF8 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEventAmbientStop;                         // 0x2E00 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEventIdleStart;                           // 0x2E08 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEventIdleStop;                            // 0x2E10 (0x0008) [0x0000000000000000]               
	class UOLAIContextualVOAsset*                      VOAsset;                                       // 0x2E18 (0x0008) [0x0000000000000000]               
	TArray<struct FVOInstance>                         VOInstances;                                   // 0x2E20 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FDelayedVO>                          DelayedVOContexts;                             // 0x2E30 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FSpeedValues                                NormalSpeedValues;                             // 0x2E40 (0x000C) [0x0000000000000000]               
	struct FSpeedValues                                DarknessSpeedValues;                           // 0x2E4C (0x000C) [0x0000000000000000]               
	struct FSpeedValues                                ElectricitySpeedValues;                        // 0x2E58 (0x000C) [0x0000000000000000]               
	float                                              MoveSpeed_Target;                              // 0x2E64 (0x0004) [0x0000000000000000]               
	struct FSpeedValues                                MoveSpeed_Override;                            // 0x2E68 (0x000C) [0x0000000000000000]               
	float                                              MoveSpeed_AccelRate;                           // 0x2E74 (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed_DecelRate;                           // 0x2E78 (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed_SpeedNoVisibility;                   // 0x2E7C (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed_ChaseSpeedAtMinDist;                 // 0x2E80 (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed_ChaseSpeedAtMaxDist;                 // 0x2E84 (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed_ChaseDistMin;                        // 0x2E88 (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed_ChaseDistMax;                        // 0x2E8C (0x0004) [0x0000000000000000]               
	struct FSpeedValues                                NrmNormalSpeedValues;                          // 0x2E90 (0x000C) [0x0000000000004000] (CPF_Config)  
	struct FSpeedValues                                NrmDarknessSpeedValues;                        // 0x2E9C (0x000C) [0x0000000000004000] (CPF_Config)  
	struct FSpeedValues                                NrmElectricitySpeedValues;                     // 0x2EA8 (0x000C) [0x0000000000004000] (CPF_Config)  
	struct FSpeedValues                                HardNormalSpeedValues;                         // 0x2EB4 (0x000C) [0x0000000000004000] (CPF_Config)  
	struct FSpeedValues                                HardDarknessSpeedValues;                       // 0x2EC0 (0x000C) [0x0000000000004000] (CPF_Config)  
	struct FSpeedValues                                HardElectricitySpeedValues;                    // 0x2ECC (0x000C) [0x0000000000004000] (CPF_Config)  
	float                                              NrmEnemyHearingThreshold;                      // 0x2ED8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HardEnemyHearingThreshold;                     // 0x2EDC (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           LightUnAwareVisionParameters;                  // 0x2EE0 (0x0030) [0x0000000000000000]               
	struct FVisionParameters                           NightvisionUnAwareVisionParameters;            // 0x2F10 (0x0030) [0x0000000000000000]               
	struct FVisionParameters                           DarkUnAwareVisionParameters;                   // 0x2F40 (0x0030) [0x0000000000000000]               
	struct FVisionParameters                           LightAwareVisionParameters;                    // 0x2F70 (0x0030) [0x0000000000000000]               
	struct FVisionParameters                           NightvisionAwareVisionParameters;              // 0x2FA0 (0x0030) [0x0000000000000000]               
	struct FVisionParameters                           DarkAwareVisionParameters;                     // 0x2FD0 (0x0030) [0x0000000000000000]               
	struct FVisionParameters                           NrmLightUnAwareVisionParameters;               // 0x3000 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           NrmNightvisionUnAwareVisionParameters;         // 0x3030 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           NrmDarkUnAwareVisionParameters;                // 0x3060 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           NrmLightAwareVisionParameters;                 // 0x3090 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           NrmNightvisionAwareVisionParameters;           // 0x30C0 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           NrmDarkAwareVisionParameters;                  // 0x30F0 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           HardLightUnAwareVisionParameters;              // 0x3120 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           HardNightvisionUnAwareVisionParameters;        // 0x3150 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           HardDarkUnAwareVisionParameters;               // 0x3180 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           HardLightAwareVisionParameters;                // 0x31B0 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           HardNightvisionAwareVisionParameters;          // 0x31E0 (0x0030) [0x0000000000004000] (CPF_Config)  
	struct FVisionParameters                           HardDarkAwareVisionParameters;                 // 0x3210 (0x0030) [0x0000000000004000] (CPF_Config)  
	int32_t                                            NumOfDoorBashLoops;                            // 0x3240 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorClosedPathMultiplier;                      // 0x3244 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MoveReactionTime;                              // 0x3248 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WaitLeaveNormalMultiplier;                     // 0x324C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WaitLeaveChaseMultiplier;                      // 0x3250 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              UnstuckCheckTime;                              // 0x3254 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LookAheadDistance;                             // 0x3258 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LookAheadUpdateTime;                           // 0x325C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackRange;                                   // 0x3260 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackGrabChance;                              // 0x3264 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackNormalDamage;                            // 0x3268 (0x0004) [0x0000000000000000]               
	float                                              AttackThrowDamage;                             // 0x326C (0x0004) [0x0000000000000000]               
	float                                              NrmAttackNormalDamage;                         // 0x3270 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              NrmAttackThrowDamage;                          // 0x3274 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HardAttackNormalDamage;                        // 0x3278 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HardAttackThrowDamage;                         // 0x327C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackNormalRecovery;                          // 0x3280 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackThrowRecovery;                           // 0x3284 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackNormalKnockbackPower;                    // 0x3288 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackPushKnockbackPower;                      // 0x328C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorBashDamage;                                // 0x3290 (0x0004) [0x0000000000000000]               
	float                                              NrmDoorBashDamage;                             // 0x3294 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HardDoorBashDamage;                            // 0x3298 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoorBashKnockbackPower;                        // 0x329C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              VaultDamage;                                   // 0x32A0 (0x0004) [0x0000000000000000]               
	float                                              NrmVaultDamage;                                // 0x32A4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HardVaultDamage;                               // 0x32A8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              VaultKnockbackPower;                           // 0x32AC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackSqueezeRange;                            // 0x32B0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackSqueezeCycleTime;                        // 0x32B4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackIdleTimeAfterGrab;                       // 0x32B8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackQuickSpeedThreshold;                     // 0x32BC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackQuickAngleThreshold;                     // 0x32C0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AttackQuickDistanceThreshold;                  // 0x32C4 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            InvestigationNumPointsGenerated;               // 0x32C8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationMinRadius;                        // 0x32CC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationMaxRadius;                        // 0x32D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationMaxPathDistance;                  // 0x32D4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationFirstPointAngle;                  // 0x32D8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationNormalWeight;                     // 0x32DC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationLockerWeight;                     // 0x32E0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationLockerOccupiedWeight;             // 0x32E4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationBedWeight;                        // 0x32E8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationBedOccupiedWeight;                // 0x32EC (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigateBedAlternateChance;                 // 0x32F0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InvestigationFindHiddenPlayerProbability;      // 0x32F4 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FName                                       VisionBone;                                    // 0x32F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       WeaponAttachBone;                              // 0x3300 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       HipBone;                                       // 0x3308 (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              AttackSqueezeVisibleRangeToNode;               // 0x3310 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AttackSqueezeHiddenRangeToTarget;              // 0x3314 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorOpenDistancePush;                          // 0x3318 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorOpenDistancePull;                          // 0x331C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorBreakDistance;                             // 0x3320 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorChasingBreakDistance;                      // 0x3324 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DoorBreakFinishDistance;                       // 0x3328 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              NormalDropDownDistance;                        // 0x332C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              NormalClimbUpDistance;                         // 0x3330 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ChasingDropDownDistance;                       // 0x3334 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ChasingClimbUpDistance;                        // 0x3338 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              WallBashDistance;                              // 0x333C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              WallBashTime;                                  // 0x3340 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TableBashDistance;                             // 0x3344 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPushLeft;                     // 0x3348 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPushRight;                    // 0x3354 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPullLeft;                     // 0x3360 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPullRight;                    // 0x336C (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPushLeftWithClose;            // 0x3378 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPushRightWithClose;           // 0x3384 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPullLeftWithClose;            // 0x3390 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorOpenEndOffsetPullRightWithClose;           // 0x339C (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     DoorBashEndOffset;                             // 0x33A8 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     LockerInvestigateOffset;                       // 0x33B4 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     LockerAttackOffset;                            // 0x33C0 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     BedInvestigateOffsetLeft;                      // 0x33CC (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     BedInvestigateOffsetRight;                     // 0x33D8 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     BedAttackOffsetLeft;                           // 0x33E4 (0x000C) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     BedAttackOffsetRight;                          // 0x33F0 (0x000C) [0x0000000000000002] (CPF_Const)   
	float                                              GrabTargetVelocity;                            // 0x33FC (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     SqueezeAttackOffset;                           // 0x3400 (0x000C) [0x0000000000000002] (CPF_Const)   
	float                                              SwarmXplodBackOffset;                          // 0x340C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GrabDistance;                                  // 0x3410 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              KillDistance;                                  // 0x3414 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ThrowStartPlayerDistance;                      // 0x3418 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ThrowStartPlayerZOffset;                       // 0x341C (0x0004) [0x0000000000000002] (CPF_Const)   
	class UClass*                                      InstantKillDmgType;                            // 0x3420 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UClass*                                      AttackNormalDmgType;                           // 0x3428 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UClass*                                      AttackThrowDmgType;                            // 0x3430 (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              AvoidRatePatrol;                               // 0x3438 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AvoidRateInvestigate;                          // 0x343C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AvoidRateChase;                                // 0x3440 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      SoundSwitchDoorMaterial;                       // 0x3444 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      SoundSwitchParamDMWood;                        // 0x3454 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      SoundSwitchParamDMMetal;                       // 0x3464 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      SoundSwitchParamDMSecurity;                    // 0x3474 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      SoundSwitchParamDMBigPrison;                   // 0x3484 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FName                                       SoundSwitchWeaponType;                         // 0x3494 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       SoundSwitchWeaponTypeParams[0x9];              // 0x349C (0x0048) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUp50;                             // 0x34E4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUp100;                            // 0x34EC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbDown50;                           // 0x34F4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbDown100;                          // 0x34FC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUp50Chase;                        // 0x3504 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbUp100Chase;                       // 0x350C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbDown50Chase;                      // 0x3514 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClimbDown100Chase;                     // 0x351C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameVault;                                 // 0x3524 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorLeftPull;                      // 0x352C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorLeftPush;                      // 0x3534 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorRightPull;                     // 0x353C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorRightPush;                     // 0x3544 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorLeftPullWithClose;             // 0x354C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorLeftPushWithClose;             // 0x3554 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorRightPullWithClose;            // 0x355C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameOpenDoorRightPushWithClose;            // 0x3564 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashDoor;                              // 0x356C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashDoorStart;                         // 0x3574 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashDoorLoop;                          // 0x357C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashDoorEnd;                           // 0x3584 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashDoorEndEquip;                      // 0x358C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashDoorFailed;                        // 0x3594 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashDoorChase;                         // 0x359C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameNanoDoor;                              // 0x35A4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameAttack;                                // 0x35AC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameAttackLeft;                            // 0x35B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameAttackRight;                           // 0x35BC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameAttackMiddle;                          // 0x35C4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeRightStart;                 // 0x35CC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeRightStartToWait;           // 0x35D4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeRightWait;                  // 0x35DC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeRightWaitToFail;            // 0x35E4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeRightWaitToSuccess;         // 0x35EC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeRightSuccess;               // 0x35F4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeLeftStart;                  // 0x35FC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeLeftStartToWait;            // 0x3604 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeLeftWait;                   // 0x360C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeLeftWaitToFail;             // 0x3614 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeLeftWaitToSuccess;          // 0x361C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabSqueezeLeftSuccess;                // 0x3624 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashWallChase;                         // 0x362C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBashTableChase;                        // 0x3634 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameIdle;                                  // 0x363C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameIdlePose;                              // 0x3644 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotLeft90;                      // 0x364C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotLeft180;                     // 0x3654 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotRight90;                     // 0x365C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotRight180;                    // 0x3664 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameIdleChase;                             // 0x366C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameIdlePoseChase;                         // 0x3674 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotLeft90Chase;                 // 0x367C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotLeft180Chase;                // 0x3684 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotRight90Chase;                // 0x368C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameTurnOnSpotRight180Chase;               // 0x3694 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabNormal;                            // 0x369C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabCrouch;                            // 0x36A4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabBedLeft;                           // 0x36AC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabBedRight;                          // 0x36B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabUnder;                             // 0x36BC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabLocker;                            // 0x36C4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrowPlayer;                           // 0x36CC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrowPlayerLeft90;                     // 0x36D4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrowPlayerLeft180;                    // 0x36DC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrowPlayerRight90;                    // 0x36E4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameThrowPlayerRight180;                   // 0x36EC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameSearchLocker;                          // 0x36F4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameSearchBedLeft;                         // 0x36FC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameSearchBedLeftAlt;                      // 0x3704 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameSearchBedRight;                        // 0x370C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameSearchBedRightAlt;                     // 0x3714 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameGrabFatality;                          // 0x371C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameRunChaseToIdleChase;                   // 0x3724 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameWalkToIdle;                            // 0x372C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePushForward;                           // 0x3734 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePushLeft;                              // 0x373C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNamePushRight;                             // 0x3744 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameAvoidLeft;                             // 0x374C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameAvoidRight;                            // 0x3754 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameKnockbackLeft;                         // 0x375C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameKnockbackRight;                        // 0x3764 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameEquipWeapon;                           // 0x376C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameUnequipWeapon;                         // 0x3774 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameChokeFatality;                         // 0x377C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameBackstabFatality;                      // 0x3784 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClubFatalityBack;                      // 0x378C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameClubFatalityFront;                     // 0x3794 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameStabChopFatality;                      // 0x379C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityXplodeBack;                    // 0x37A4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityXplode;                        // 0x37AC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameFatalityLocker;                        // 0x37B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDisturbedFrontLeft;                    // 0x37BC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDisturbedFrontRight;                   // 0x37C4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDisturbedLeft90;                       // 0x37CC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDisturbedLeft180;                      // 0x37D4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDisturbedRight90;                      // 0x37DC (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       AnimNameDisturbedRight180;                     // 0x37E4 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyPawn");
		}

		return uClassPointer;
	};

	void PlayContextualVO(EVOContext VOContext, float optionalDelayTime);
	void eventPlayFootStepSound(int32_t FootDown, class UAnimNotify_Footstep* footstepNotify);
	void FinishAIGroup();
	void BeginAIGroup();
	void StartMatinee(struct FVector StartLoc, struct FRotator StartRot, float BlendTime);
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StartDisturbed();
	void StartNormalAttack();
	void StartDoorKnockback(struct FVector Direction, bool bLocker);
	void StartKnockback(class AOLHero* Hero, struct FVector HitNormal);
	void StartAvoid(class AOLEnemyPawn* OtherPawn);
	void TurnOnSpot(struct FRotator EndRotation);
	void PlayFullBodyAnim(struct FName AnimName, float Rate, float optionalBlendInTime, float optionalBlendOutTime, bool optionalBLooping, float optionalStartTime, float optionalEndTime);
	void DisableRootMotion();
	void EnableRootMotion();
	void eventStopIdleSound();
	void eventStartIdleSound();
	void eventHideWeaponMatinee();
	void eventShowWeaponMatinee();
	void eventHideWeapon();
	void eventShowWeapon();
	void eventResetAnimationMode();
	void eventPushNotify();
	void eventKnockbackTickNotify();
	void eventKnockbackStartNotify();
	void eventBreakDoorNotify();
	void eventBashDoorNotify();
	void eventDamageTargetRangeTickNotify();
	void eventDamageTargetRangeStartNotify();
	void eventDamageTarget();
	void eventDestroyed();
	void eventBuildScriptAnimSetList();
	void UpdateDifficultyBasedValues();
	void eventApplyModifiers(struct FEnemyModifiers NewModifiers);
	void eventPostInitAnimTree(class USkeletalMeshComponent* SkelComp);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void ZeroMovementVariables();
	void eventPostBeginPlay();
	void AIStartingMove();
	bool HasRegisteredNavMeshRecently();
	void UpdateNavMeshObstacle();
	void CancelSpecialMove();
	void StartSpecialMove(ESpecialMoveType moveType, struct FVector optionalTargetPosition, struct FVector optionalTargetDirection, EAdjustPositionTargetType optionalTargetType);
	void UnregisterNavmeshObstacle();
	void RegisterNavMeshObstacle();
};

// Class OLGame.OLAISteering
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UOLAISteering : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAISteering");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAISteeringAvoidance
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UOLAISteeringAvoidance : public UOLAISteering
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAISteeringAvoidance");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAISteeringFollowPath
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UOLAISteeringFollowPath : public UOLAISteering
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAISteeringFollowPath");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTBehavior
// 0x0011 OR 0x0071 (0x0071 - 0x0060)
// 17 OR 113 (113 - 96)
class UOLBTBehavior : public UObject
{
public:
	class UOLBTNode*                                   Node;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	class UOLBTTask*                                   Task;                                          // 0x0068 (0x0008) [0x0000000000000000]               
	EStatus                                            CurrentStatus;                                 // 0x0070 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTBehavior");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTBehaviorTree
// 0x000C OR 0x006C (0x006C - 0x0060)
// 12 OR 108 (108 - 96)
class UOLBTBehaviorTree : public UObject
{
public:
	class UOLBTRootNode*                               RootNode;                                      // 0x0060 (0x0008) [0x0000000000000000]               
	uint32_t                                           bBeingEdited : 1;                              // 0x0068 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTBehaviorTree");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTNode
// 0x0038 OR 0x0098 (0x0098 - 0x0060)
// 56 OR 152 (152 - 96)
class UOLBTNode : public UObject
{
public:
	struct FName                                       NodeName;                                      // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      TaskType;                                      // 0x0068 (0x0008) [0x0000000000000000]               
	int32_t                                            SearchTag;                                     // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DrawWidth;                                     // 0x0074 (0x0004) [0x0000000800000000]               
	int32_t                                            DrawHeight;                                    // 0x0078 (0x0004) [0x0000000800000000]               
	float                                              NodePosX;                                      // 0x007C (0x0004) [0x0000000800000000]               
	float                                              NodePosY;                                      // 0x0080 (0x0004) [0x0000000800000000]               
	int32_t                                            InDrawY;                                       // 0x0084 (0x0004) [0x0000000800000000]               
	class FString                                      CategoryDesc;                                  // 0x0088 (0x0010) [0x0000000800400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTActivateEventNode
// 0x0008 OR 0x00A0 (0x00A0 - 0x0098)
// 8 OR 160 (160 - 152)
class UOLBTActivateEventNode : public UOLBTNode
{
public:
	struct FName                                       EventName;                                     // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTActivateEventNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTAttackNode
// 0x0001 OR 0x0099 (0x0099 - 0x0098)
// 1 OR 153 (153 - 152)
class UOLBTAttackNode : public UOLBTNode
{
public:
	EAIAttackType                                      Type;                                          // 0x0098 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTAttackNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTBasicNode
// 0x0008 OR 0x00A0 (0x00A0 - 0x0098)
// 8 OR 160 (160 - 152)
class UOLBTBasicNode : public UOLBTNode
{
public:
	class UClass*                                      BasicTask;                                     // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTBasicNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTCompositeNode
// 0x0014 OR 0x00AC (0x00AC - 0x0098)
// 20 OR 172 (172 - 152)
class UOLBTCompositeNode : public UOLBTNode
{
public:
	TArray<struct FOLBTNodeChild>                      Children;                                      // 0x0098 (0x0010) [0x0000000004400048] (CPF_ExportObject | CPF_EditConstArray | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           bFixNumChildren : 1;                           // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTCompositeNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTGetNextInvestigationPointNode
// 0x0000 OR 0x00AC (0x00AC - 0x00AC)
// 0 OR 172 (172 - 172)
class UOLBTGetNextInvestigationPointNode : public UOLBTCompositeNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTGetNextInvestigationPointNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTIfNode
// 0x0004 OR 0x00B0 (0x00B0 - 0x00AC)
// 4 OR 176 (176 - 172)
class UOLBTIfNode : public UOLBTCompositeNode
{
public:
	uint32_t                                           bNot : 1;                                      // 0x00AC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIfNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTIfCustomNode
// 0x0008 OR 0x00B8 (0x00B8 - 0x00B0)
// 8 OR 184 (184 - 176)
class UOLBTIfCustomNode : public UOLBTIfNode
{
public:
	class UClass*                                      IfTask;                                        // 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIfCustomNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTOptionalNode
// 0x0000 OR 0x00AC (0x00AC - 0x00AC)
// 0 OR 172 (172 - 172)
class UOLBTOptionalNode : public UOLBTCompositeNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTOptionalNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTRepeatNode
// 0x0004 OR 0x00B0 (0x00B0 - 0x00AC)
// 4 OR 176 (176 - 172)
class UOLBTRepeatNode : public UOLBTCompositeNode
{
public:
	int32_t                                            NumRepetitions;                                // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTRepeatNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTRootNode
// 0x0000 OR 0x00AC (0x00AC - 0x00AC)
// 0 OR 172 (172 - 172)
class UOLBTRootNode : public UOLBTCompositeNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTRootNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSelectorNode
// 0x0000 OR 0x00AC (0x00AC - 0x00AC)
// 0 OR 172 (172 - 172)
class UOLBTSelectorNode : public UOLBTCompositeNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSelectorNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSequenceNode
// 0x0000 OR 0x00AC (0x00AC - 0x00AC)
// 0 OR 172 (172 - 172)
class UOLBTSequenceNode : public UOLBTCompositeNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSequenceNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitHandlerNode
// 0x0008 OR 0x00B4 (0x00B4 - 0x00AC)
// 8 OR 180 (180 - 172)
class UOLBTWaitHandlerNode : public UOLBTCompositeNode
{
public:
	class UClass*                                      WaitHandlerTask;                               // 0x00AC (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitHandlerNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTDebugLogNode
// 0x0011 OR 0x00A9 (0x00A9 - 0x0098)
// 17 OR 169 (169 - 152)
class UOLBTDebugLogNode : public UOLBTNode
{
public:
	class FString                                      DebugString;                                   // 0x0098 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	EStatus                                            DebugReturnValue;                              // 0x00A8 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTDebugLogNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTPlayAkEventNode
// 0x0008 OR 0x00A0 (0x00A0 - 0x0098)
// 8 OR 160 (160 - 152)
class UOLBTPlayAkEventNode : public UOLBTNode
{
public:
	class UAkEvent*                                    Event;                                         // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTPlayAkEventNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTPlayAnimNode
// 0x0014 OR 0x00AC (0x00AC - 0x0098)
// 20 OR 172 (172 - 152)
class UOLBTPlayAnimNode : public UOLBTNode
{
public:
	TArray<struct FAnimData>                           Animations;                                    // 0x0098 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bLoop : 1;                                     // 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTPlayAnimNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTPlayAnimAtInvPointNode
// 0x0000 OR 0x00AC (0x00AC - 0x00AC)
// 0 OR 172 (172 - 172)
class UOLBTPlayAnimAtInvPointNode : public UOLBTPlayAnimNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTPlayAnimAtInvPointNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTTargetUnreachableNode
// 0x0004 OR 0x00B0 (0x00B0 - 0x00AC)
// 4 OR 176 (176 - 172)
class UOLBTTargetUnreachableNode : public UOLBTPlayAnimNode
{
public:
	float                                              IgnoreTime;                                    // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTTargetUnreachableNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSetBehaviorStateNode
// 0x0001 OR 0x0099 (0x0099 - 0x0098)
// 1 OR 153 (153 - 152)
class UOLBTSetBehaviorStateNode : public UOLBTNode
{
public:
	EAIBehaviorState                                   BehaviorState;                                 // 0x0098 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSetBehaviorStateNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTStopPatrolNode
// 0x0004 OR 0x009C (0x009C - 0x0098)
// 4 OR 156 (156 - 152)
class UOLBTStopPatrolNode : public UOLBTNode
{
public:
	uint32_t                                           bAbort : 1;                                    // 0x0098 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTStopPatrolNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitNode
// 0x0004 OR 0x009C (0x009C - 0x0098)
// 4 OR 156 (156 - 152)
class UOLBTWaitNode : public UOLBTNode
{
public:
	float                                              WaitTime;                                      // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTTask
// 0x0010 OR 0x0070 (0x0070 - 0x0060)
// 16 OR 112 (112 - 96)
class UOLBTTask : public UObject
{
public:
	class UOLBTNode*                                   Node;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	class AOLBot*                                      Owner;                                         // 0x0068 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTTask");
		}

		return uClassPointer;
	};

	void DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float& out_YL, float& out_YPos);
};

// Class OLGame.OLBTActivateEventTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTActivateEventTask : public UOLBTTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTActivateEventTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTAttackTask
// 0x0004 OR 0x0074 (0x0074 - 0x0070)
// 4 OR 116 (116 - 112)
class UOLBTAttackTask : public UOLBTTask
{
public:
	uint32_t                                           AttackSucceeded : 1;                           // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTAttackTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTBasicTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTBasicTask : public UOLBTTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTBasicTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTCancelMoveTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTCancelMoveTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTCancelMoveTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTClearDisturbanceTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTClearDisturbanceTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTClearDisturbanceTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTClearInvestigationTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTClearInvestigationTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTClearInvestigationTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTClearSqueezeTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTClearSqueezeTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTClearSqueezeTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTInvestigateObjectTask
// 0x0004 OR 0x0074 (0x0074 - 0x0070)
// 4 OR 116 (116 - 112)
class UOLBTInvestigateObjectTask : public UOLBTBasicTask
{
public:
	uint32_t                                           bInvestigateSuccessful : 1;                    // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTInvestigateObjectTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTLookAtDisturbanceTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTLookAtDisturbanceTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTLookAtDisturbanceTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToTask
// 0x0004 OR 0x0074 (0x0074 - 0x0070)
// 4 OR 116 (116 - 112)
class UOLBTMoveToTask : public UOLBTBasicTask
{
public:
	uint32_t                                           bStartedAtDestination : 1;                     // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToBedTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToBedTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToBedTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToDisturbanceTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToDisturbanceTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToDisturbanceTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToInvestigationTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToInvestigationTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToInvestigationTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToLockerTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToLockerTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToLockerTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToNextInvPointTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToNextInvPointTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToNextInvPointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToSqueezeTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToSqueezeTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToSqueezeTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToTargetTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToTargetTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToTargetTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToWaitPointTask
// 0x0000 OR 0x0074 (0x0074 - 0x0074)
// 0 OR 116 (116 - 116)
class UOLBTMoveToWaitPointTask : public UOLBTMoveToTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToWaitPointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTMoveToWaypointTask
// 0x000C OR 0x0080 (0x0080 - 0x0074)
// 12 OR 128 (128 - 116)
class UOLBTMoveToWaypointTask : public UOLBTMoveToTask
{
public:
	class ARoute*                                      PatrolRoute;                                   // 0x0074 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PatrolRouteIndex;                              // 0x007C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTMoveToWaypointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTPerformWaypointActionTask
// 0x0008 OR 0x0078 (0x0078 - 0x0070)
// 8 OR 120 (120 - 112)
class UOLBTPerformWaypointActionTask : public UOLBTBasicTask
{
public:
	float                                              WaitTimer;                                     // 0x0070 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPlayingAnim : 1;                              // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLoopingAnim : 1;                              // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTPerformWaypointActionTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTResetNewDisturbanceTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTResetNewDisturbanceTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTResetNewDisturbanceTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTRotateAtWaitPointTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTRotateAtWaitPointTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTRotateAtWaitPointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSelectClosestWaypointTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTSelectClosestWaypointTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSelectClosestWaypointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSelectNextWaypointTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTSelectNextWaypointTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSelectNextWaypointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSetupInvestigationTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTSetupInvestigationTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSetupInvestigationTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitForAnimTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTWaitForAnimTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitForAnimTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitForAttackTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTWaitForAttackTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitForAttackTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitForReactionTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTWaitForReactionTask : public UOLBTBasicTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitForReactionTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTCompositeTask
// 0x000C OR 0x007C (0x007C - 0x0070)
// 12 OR 124 (124 - 112)
class UOLBTCompositeTask : public UOLBTTask
{
public:
	class UOLBTBehavior*                               CurrentBehavior;                               // 0x0070 (0x0008) [0x0000000000000000]               
	int32_t                                            CurrentChildIndex;                             // 0x0078 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTCompositeTask");
		}

		return uClassPointer;
	};

	void DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float& out_YL, float& out_YPos);
};

// Class OLGame.OLBTGetNextInvestigationPointTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTGetNextInvestigationPointTask : public UOLBTCompositeTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTGetNextInvestigationPointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTIfTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTIfTask : public UOLBTCompositeTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIfTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTOptionalTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTOptionalTask : public UOLBTCompositeTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTOptionalTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTRepeatTask
// 0x0004 OR 0x0080 (0x0080 - 0x007C)
// 4 OR 128 (128 - 124)
class UOLBTRepeatTask : public UOLBTCompositeTask
{
public:
	int32_t                                            CurrRepetition;                                // 0x007C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTRepeatTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTRootTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTRootTask : public UOLBTCompositeTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTRootTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSelectorTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTSelectorTask : public UOLBTCompositeTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSelectorTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSequenceTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTSequenceTask : public UOLBTCompositeTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSequenceTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitHandlerBaseTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTWaitHandlerBaseTask : public UOLBTCompositeTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitHandlerBaseTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitHandlerBedTask
// 0x0008 OR 0x0084 (0x0084 - 0x007C)
// 8 OR 132 (132 - 124)
class UOLBTWaitHandlerBedTask : public UOLBTWaitHandlerBaseTask
{
public:
	class AOLBed*                                      Bed;                                           // 0x007C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitHandlerBedTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitHandlerLockerTask
// 0x0008 OR 0x0084 (0x0084 - 0x007C)
// 8 OR 132 (132 - 124)
class UOLBTWaitHandlerLockerTask : public UOLBTWaitHandlerBaseTask
{
public:
	class AOLHidingSpot*                               Locker;                                        // 0x007C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitHandlerLockerTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTDebugLogTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTDebugLogTask : public UOLBTTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTDebugLogTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTPlayAkEventTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTPlayAkEventTask : public UOLBTTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTPlayAkEventTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTPlayAnimTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTPlayAnimTask : public UOLBTTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTPlayAnimTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTPlayAnimAtInvPointTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTPlayAnimAtInvPointTask : public UOLBTPlayAnimTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTPlayAnimAtInvPointTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTTargetUnreachableTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTTargetUnreachableTask : public UOLBTPlayAnimTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTTargetUnreachableTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTSetBehaviorStateTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTSetBehaviorStateTask : public UOLBTTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSetBehaviorStateTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTStopPatrolTask
// 0x0000 OR 0x0070 (0x0070 - 0x0070)
// 0 OR 112 (112 - 112)
class UOLBTStopPatrolTask : public UOLBTTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTStopPatrolTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWaitTask
// 0x0004 OR 0x0074 (0x0074 - 0x0070)
// 4 OR 116 (116 - 112)
class UOLBTWaitTask : public UOLBTTask
{
public:
	float                                              WaitTimer;                                     // 0x0070 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWaitTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLNavigationHandle
// 0x0018 OR 0x01B8 (0x01B8 - 0x01A0)
// 24 OR 440 (440 - 416)
class UOLNavigationHandle : public UNavigationHandle
{
public:
	TArray<struct FMovePoint>                          MovePoints;                                    // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LastMovePointIdxForPath;                       // 0x01B0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDebugMovePoints : 1;                          // 0x01B4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLNavigationHandle");
		}

		return uClassPointer;
	};

	bool PointReachable(struct FVector Point, struct FVector optionalOverrideStartPoint, bool optionalBAllowHitsInEndCollisionBox);
	bool TrimPathByDistance(float DistanceToTrim, bool optionalBStopAtMeshObject, struct FVector& out_NewDestination);
	bool TrimPathToLastDoor(struct FVector& out_NewDestination);
	void ClearPath();
	void PopMoveLocation();
	bool GetNextMovePath(float ArrivalDistance, TArray<struct FVector>& out_MovePath);
	bool GetNextMoveLocation(float ArrivalDistance, struct FVector& out_MoveDest);
	bool FindPath(class AActor*& out_DestActor, int32_t& out_DestItem);
};

// Class OLGame.OLNavMeshPath_SimilarToLastPath
// 0x0004 OR 0x007C (0x007C - 0x0078)
// 4 OR 124 (124 - 120)
class UOLNavMeshPath_SimilarToLastPath : public UNavMeshPathConstraint
{
public:
	float                                              DifferentDirectionPenalty;                     // 0x0078 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLNavMeshPath_SimilarToLastPath");
		}

		return uClassPointer;
	};

	void eventRecycle();
	static bool SimilarToLastPath(class UNavigationHandle* NavHandle);
};

// Class OLGame.OLEnemyGenericPatient
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient : public AOLEnemyPawn
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyCannibal
// 0x0010 OR 0x37FC (0x37FC - 0x37EC)
// 16 OR 14332 (14332 - 14316)
class AOLEnemyCannibal : public AOLEnemyGenericPatient
{
public:
	class UAnimSet*                                    CannibalSpecificAnimSet;                       // 0x37EC (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      CannibalDrill;                                 // 0x37F4 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyCannibal");
		}

		return uClassPointer;
	};

	void NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void NativeHideWeapon();
	void eventHideWeapon();
	void eventBuildScriptAnimSetList();
};

// Class OLGame.OLEnemySurgeon
// 0x0010 OR 0x37FC (0x37FC - 0x37EC)
// 16 OR 14332 (14332 - 14316)
class AOLEnemySurgeon : public AOLEnemyGenericPatient
{
public:
	class UAnimSet*                                    SurgeonSpecificAnimSet;                        // 0x37EC (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      BoneShears;                                    // 0x37F4 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemySurgeon");
		}

		return uClassPointer;
	};

	void NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void eventBuildScriptAnimSetList();
};

// Class OLGame.OLEnemyNanoCloud
// 0x00CC OR 0x38B8 (0x38B8 - 0x37EC)
// 204 OR 14520 (14520 - 14316)
class AOLEnemyNanoCloud : public AOLEnemyPawn
{
public:
	class UParticleSystemComponent*                    CloudEmitter;                                  // 0x37EC (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   MatInstSwarm;                                  // 0x37F4 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   MatInstSkeleton;                               // 0x37FC (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   MatInstEyes;                                   // 0x3804 (0x0008) [0x0000000000000000]               
	class UStaticMeshComponent*                        SphereMesh;                                    // 0x380C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UTextureMovie*                               SwarmMindMovie;                                // 0x3814 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   MatBloodyMain;                                 // 0x381C (0x0008) [0x0000000000000000]               
	class UMaterial*                                   MatBloodySecondary;                            // 0x3824 (0x0008) [0x0000000000000000]               
	ENanoCloudForm                                     CurrentForm;                                   // 0x382C (0x0001) [0x0000000000000000]               
	float                                              MorphStartedTime;                              // 0x3830 (0x0004) [0x0000000000000000]               
	TArray<float>                                      MorphValues;                                   // 0x3834 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMorphingTransition>                 HumanMorphs;                                   // 0x3844 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMorphingTransition>                 SwarmMorphs;                                   // 0x3854 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              AlwaysVisibleRange;                            // 0x3864 (0x0004) [0x0000000000000000]               
	float                                              DistanceBasedVisibilityMorphTimeScale;         // 0x3868 (0x0004) [0x0000000000000000]               
	float                                              MorphMultiplier;                               // 0x386C (0x0004) [0x0000000000000000]               
	uint32_t                                           bAlwaysVisible : 1;                            // 0x3870 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AlwaysVisibleChangeTime;                       // 0x3874 (0x0004) [0x0000000000000000]               
	float                                              FullOpacityDistance;                           // 0x3878 (0x0004) [0x0000000000000000]               
	float                                              CurrentOpacity;                                // 0x387C (0x0004) [0x0000000000000000]               
	float                                              DefaultMorphMultiplier;                        // 0x3880 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ChaseMorphMultiplier;                          // 0x3884 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              HumanMorphDuration;                            // 0x3888 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SwarmMorphDuration;                            // 0x388C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              HumanMorphPhase1Time;                          // 0x3890 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SwarmMorphPhase1Time;                          // 0x3894 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TimeSinceLastChange;                           // 0x3898 (0x0004) [0x0000000000000000]               
	float                                              TimeForNextChange;                             // 0x389C (0x0004) [0x0000000000000000]               
	float                                              PatrolChangeMin;                               // 0x38A0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PatrolChangeMax;                               // 0x38A4 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       CloudEmitterAttachBoneName;                    // 0x38A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       NanoSphereAttachBoneName;                      // 0x38B0 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyNanoCloud");
		}

		return uClassPointer;
	};

	void OnSetNanoCloudVisibility(class UOLSeqAct_SetNanoCloudVisibility* Action);
	void OnMorphNanoCloud(class UOLSeqAct_MorphNanoCloud* Action);
	void eventPostBeginPlay();
	void SwitchToBloodyMaterialNotify();
	void SetHumanForm();
	void SetSwarmForm();
	void MorphToHuman(float optionalTimeScale);
	void MorphToSwarm(float optionalTimeScale);
	void NativePostBeginPlay();
};

// Class OLGame.OLEnemySoldier
// 0x0008 OR 0x37F4 (0x37F4 - 0x37EC)
// 8 OR 14324 (14324 - 14316)
class AOLEnemySoldier : public AOLEnemyPawn
{
public:
	class UAkEvent*                                    SoundLanded;                                   // 0x37EC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemySoldier");
		}

		return uClassPointer;
	};

	void PlayLanded(float ImpactVel);
};

// Class OLGame.OLEnemyGroom
// 0x0000 OR 0x37F4 (0x37F4 - 0x37F4)
// 0 OR 14324 (14324 - 14324)
class AOLEnemyGroom : public AOLEnemySoldier
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGroom");
		}

		return uClassPointer;
	};

	void PlayLanded(float ImpactVel);
};

// Class OLGame.OLScout
// 0x0000 OR 0x0600 (0x0600 - 0x0600)
// 0 OR 1536 (1536 - 1536)
class AOLScout : public AUDKScout
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLScout");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLWaypoint
// 0x0010 OR 0x0368 (0x0368 - 0x0358)
// 16 OR 872 (872 - 856)
class AOLWaypoint : public ANavigationPoint
{
public:
	float                                              WaitTime;                                      // 0x0358 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimToPlay;                                    // 0x035C (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLoopAnimation : 1;                            // 0x0364 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bTurnToRotation : 1;                           // 0x0364 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAlignAnimToWaypoint : 1;                      // 0x0364 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLWaypoint");
		}

		return uClassPointer;
	};

	void AnimStartedEvent(class AActor* InInstigator);
	void WaypointReachedEvent(class AActor* InInstigator);
};

// Class OLGame.OLAnimBlendByEnemyEnvironment
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimBlendByEnemyEnvironment : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendByEnemyEnvironment");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendByEnemyMode
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimBlendByEnemyMode : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendByEnemyMode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendByHobblingIntensity
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLAnimBlendByHobblingIntensity : public UAnimNodeBlend
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendByHobblingIntensity");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendByIdle
// 0x0008 OR 0x0184 (0x0184 - 0x017C)
// 8 OR 388 (388 - 380)
class UOLAnimBlendByIdle : public UUDKAnimBlendBase
{
public:
	struct FName                                       ChildSynchGroup;                               // 0x017C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendByIdle");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendByLeaning
// 0x0007 OR 0x0144 (0x0144 - 0x013D)
// 7 OR 324 (324 - 317)
class UOLAnimBlendByLeaning : public UAnimNodeBlendBase
{
public:
	float                                              CurrentRatio;                                  // 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendByLeaning");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendByLocomotionMode
// 0x0010 OR 0x0174 (0x0174 - 0x0164)
// 16 OR 372 (372 - 356)
class UOLAnimBlendByLocomotionMode : public UAnimNodeBlendList
{
public:
	TArray<float>                                      ChildBlendTimes;                               // 0x0164 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendByLocomotionMode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendByPosture
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimBlendByPosture : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendByPosture");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendBySpeed
// 0x0010 OR 0x0160 (0x0160 - 0x0150)
// 16 OR 352 (352 - 336)
class UOLAnimBlendBySpeed : public UAnimNodeBlend
{
public:
	float                                              MinSpeed;                                      // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeed;                                      // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxWeightRate;                                 // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentWeight;                                 // 0x015C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendBySpeed");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendBySpeedExpandable
// 0x0023 OR 0x0160 (0x0160 - 0x013D)
// 35 OR 352 (352 - 317)
class UOLAnimBlendBySpeedExpandable : public UAnimNodeBlendBase
{
public:
	TArray<float>                                      AnimSpeeds;                                    // 0x0140 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	uint32_t                                           bTimeScaleDown : 1;                            // 0x0150 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bTimeScaleUp : 1;                              // 0x0150 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              SmoothingCoefficient;                          // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentSpeed;                                  // 0x0158 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SliderPosition;                                // 0x015C (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendBySpeedExpandable");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendBySwarmForm
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimBlendBySwarmForm : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendBySwarmForm");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimBlendDirectional
// 0x0013 OR 0x0150 (0x0150 - 0x013D)
// 19 OR 336 (336 - 317)
class UOLAnimBlendDirectional : public UAnimNodeBlendBase
{
public:
	uint32_t                                           bTimescaleDiagonals : 1;                       // 0x0140 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bTimescaleBelowExpectedSpeed : 1;              // 0x0140 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bTimescaleAboveExpectedSpeed : 1;              // 0x0140 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bUseReversedSideForBackwards : 1;              // 0x0140 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bReversingBackward : 1;                        // 0x0140 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	float                                              ExpectedPawnSpeed;                             // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInIdleMaxSpeedPct;                        // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SliderDirAngle;                                // 0x014C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimBlendDirectional");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimCameraSpace
// 0x0034 OR 0x01B8 (0x01B8 - 0x0184)
// 52 OR 440 (440 - 388)
class UOLAnimCameraSpace : public UAnimNodeBlendPerBone
{
public:
	class UAnimNodeSlot*                               ChildSlot;                                     // 0x0184 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOLAnimCustomBlend*                          ChildBlend;                                    // 0x018C (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CameraBoneIdx;                                 // 0x0194 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<int32_t>                                    StartBoneIndices;                              // 0x0198 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<int32_t>                                    ParentChain;                                   // 0x01A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimCameraSpace");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimConstrainedMovement
// 0x0010 OR 0x0174 (0x0174 - 0x0164)
// 16 OR 372 (372 - 356)
class UOLAnimConstrainedMovement : public UAnimNodeBlendList
{
public:
	uint32_t                                           bUpDown : 1;                                   // 0x0164 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCompleteCyclesOnly : 1;                       // 0x0164 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bNoAutomaticRootMotion : 1;                    // 0x0164 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bAutomaticMotion : 1;                          // 0x0164 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	float                                              CurrentRatio;                                  // 0x0168 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SmoothedDelta;                                 // 0x016C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            LastTargetIdx;                                 // 0x0170 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimConstrainedMovement");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimCrouchedTurnOnSpot
// 0x0060 OR 0x01B0 (0x01B0 - 0x0150)
// 96 OR 432 (432 - 336)
class UOLAnimCrouchedTurnOnSpot : public UAnimNodeBlend
{
public:
	float                                              BaseHeading;                                   // 0x0150 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastHeading;                                   // 0x0154 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TurningVelocity;                               // 0x0158 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              HandUpWeight;                                  // 0x015C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bHandUp : 1;                                   // 0x0160 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              IKStrength;                                    // 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     IKPosition;                                    // 0x0168 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    IKRotationWS;                                  // 0x0174 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ActorSpaceIKOffset;                            // 0x0180 (0x000C) [0x0000000000000000]               
	struct FQuat                                       ActorSpaceIKRotation;                          // 0x0190 (0x0010) [0x0000000000000000]               
	class UAkEvent*                                    HandUpSound;                                   // 0x01A0 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    HandDownSound;                                 // 0x01A8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimCrouchedTurnOnSpot");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimCustomBlend
// 0x0024 OR 0x0188 (0x0188 - 0x0164)
// 36 OR 392 (392 - 356)
class UOLAnimCustomBlend : public UAnimNodeBlendList
{
public:
	uint32_t                                           bActive : 1;                                   // 0x0164 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bBlendingOut : 1;                              // 0x0164 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bKeepLastPose : 1;                             // 0x0164 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bInhibitEndNotifies : 1;                       // 0x0164 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	float                                              BlendOutTime;                                  // 0x0168 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaybackTime;                                  // 0x016C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BlendWeights[0x3];                             // 0x0170 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              bEarlyAnimEndFired;                            // 0x017C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TimeRemaining;                                 // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumActiveAnims;                                // 0x0184 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimCustomBlend");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimCycleBreaker
// 0x0073 OR 0x01B0 (0x01B0 - 0x013D)
// 115 OR 432 (432 - 317)
class UOLAnimCycleBreaker : public UAnimNodeBlendBase
{
public:
	float                                              DefaultCycleBias;                              // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DefaultStretchDuration;                        // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FCycleBreaker>                       Breakers;                                      // 0x0148 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FCycleBreaker                               BreakerTemplate;                               // 0x0158 (0x0044) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              NextBreakerWeightTransition;                   // 0x019C (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<int32_t>                                    ValidBreakers;                                 // 0x01A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimCycleBreaker");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimSmarterIdle
// 0x0024 OR 0x01D4 (0x01D4 - 0x01B0)
// 36 OR 468 (468 - 432)
class UOLAnimSmarterIdle : public UOLAnimCycleBreaker
{
public:
	uint32_t                                           bModifyPlayrateIdle : 1;                       // 0x01B0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              IdleMinRate;                                   // 0x01B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleMaxRate;                                   // 0x01B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleRateMinDuration;                           // 0x01BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleRateMaxDuration;                           // 0x01C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleRateTransitionSpeed;                       // 0x01C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentIdleRate;                               // 0x01C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetIdleRate;                                // 0x01CC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NextIdleRateTransition;                        // 0x01D0 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimSmarterIdle");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimDoorInteraction
// 0x0014 OR 0x0178 (0x0178 - 0x0164)
// 20 OR 376 (376 - 356)
class UOLAnimDoorInteraction : public UAnimNodeBlendList
{
public:
	float                                              InitialRatio;                                  // 0x0164 (0x0004) [0x0000000000000000]               
	float                                              CurrentRatio;                                  // 0x0168 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SmoothedDelta;                                 // 0x016C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlayRate;                                      // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRatio;                                      // 0x0174 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimDoorInteraction");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimEnemyStruggle
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimEnemyStruggle : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimEnemyStruggle");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimHeatShielding
// 0x001B OR 0x0158 (0x0158 - 0x013D)
// 27 OR 344 (344 - 317)
class UOLAnimHeatShielding : public UAnimNodeBlendBase
{
public:
	float                                              MinimumDistance;                               // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LowDistance;                                   // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HighDistance;                                  // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bActive : 1;                                   // 0x014C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              HeatShieldingWeight;                           // 0x0150 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              HeatStrength;                                  // 0x0154 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimHeatShielding");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimLocomotion
// 0x001F OR 0x015C (0x015C - 0x013D)
// 31 OR 348 (348 - 317)
class UOLAnimLocomotion : public UAnimNodeBlendBase
{
public:
	float                                              MinMovingContribUnder90;                       // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinMovingContribOver90;                        // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimePct;                                  // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ActiveChildIdx;                                // 0x014C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TransitionBlendTime;                           // 0x0150 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bIsTurning : 1;                                // 0x0154 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bReachedHalfTurn : 1;                          // 0x0154 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bMoveOnNextFrame : 1;                          // 0x0154 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	float                                              SliderPosition;                                // 0x0158 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimLocomotion");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimMultiCycleConstrainedMovement
// 0x0010 OR 0x0174 (0x0174 - 0x0164)
// 16 OR 372 (372 - 356)
class UOLAnimMultiCycleConstrainedMovement : public UAnimNodeBlendList
{
public:
	uint32_t                                           bUpDown : 1;                                   // 0x0164 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCompleteCyclesOnly : 1;                       // 0x0164 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCommitMoves : 1;                              // 0x0164 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              SmoothedDelta;                                 // 0x0168 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentRatio;                                  // 0x016C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CurrentIdx;                                    // 0x0170 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimMultiCycleConstrainedMovement");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNodeDelayed
// 0x000C OR 0x0170 (0x0170 - 0x0164)
// 12 OR 368 (368 - 356)
class UOLAnimNodeDelayed : public UAnimNodeBlendList
{
public:
	float                                              TimeDelay;                                     // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                     // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ElapsedTime;                                   // 0x016C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNodeDelayed");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNodeSlot
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimNodeSlot : public UAnimNodeSlot
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNodeSlot");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_AttachWeapon
// 0x001C OR 0x0080 (0x0080 - 0x0064)
// 28 OR 128 (128 - 100)
class UOLAnimNotify_AttachWeapon : public UAnimNotify
{
public:
	class USkeletalMesh*                               WeaponSkelMesh;                                // 0x0064 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      AttachBoneName;                                // 0x006C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Duration;                                      // 0x007C (0x0004) [0x0000000000020000] (CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_AttachWeapon");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_Blur
// 0x0014 OR 0x0078 (0x0078 - 0x0064)
// 20 OR 120 (120 - 100)
class UOLAnimNotify_Blur : public UAnimNotify
{
public:
	float                                              Amount;                                        // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Desaturation;                                  // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_Blur");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_Door
// 0x000C OR 0x0070 (0x0070 - 0x0064)
// 12 OR 112 (112 - 100)
class UOLAnimNotify_Door : public UAnimNotify
{
public:
	EDoorInteraction                                   Interaction;                                   // 0x0064 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              AngleWhenOpen;                                 // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x006C (0x0004) [0x0000000000020000] (CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_Door");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_Fade
// 0x0010 OR 0x0074 (0x0074 - 0x0064)
// 16 OR 116 (116 - 100)
class UOLAnimNotify_Fade : public UAnimNotify
{
public:
	uint32_t                                           bFadeIn : 1;                                   // 0x0064 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceStartValue : 1;                          // 0x0064 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              Opacity;                                       // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      FadeColor;                                     // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_Fade");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_LeftHandIK
// 0x001C OR 0x0080 (0x0080 - 0x0064)
// 28 OR 128 (128 - 100)
class UOLAnimNotify_LeftHandIK : public UAnimNotify
{
public:
	EIKTargetType                                      TargetType;                                    // 0x0064 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInTime;                                    // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     EffectorOffset;                                // 0x0070 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x007C (0x0004) [0x0000000000020000] (CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_LeftHandIK");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_ModifyPlayrate
// 0x0004 OR 0x0068 (0x0068 - 0x0064)
// 4 OR 104 (104 - 100)
class UOLAnimNotify_ModifyPlayrate : public UAnimNotify
{
public:
	float                                              NewRate;                                       // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_ModifyPlayrate");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_NonFatalDamage
// 0x0004 OR 0x0068 (0x0068 - 0x0064)
// 4 OR 104 (104 - 100)
class UOLAnimNotify_NonFatalDamage : public UAnimNotify
{
public:
	int32_t                                            DamageAmount;                                  // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_NonFatalDamage");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_OverrideCameraParams
// 0x001C OR 0x0080 (0x0080 - 0x0064)
// 28 OR 128 (128 - 100)
class UOLAnimNotify_OverrideCameraParams : public UAnimNotify
{
public:
	uint32_t                                           bResetToDefault : 1;                           // 0x0064 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bLocalSpacePlayerControl : 1;                  // 0x0064 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bMinYaw : 1;                                   // 0x0064 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bMaxYaw : 1;                                   // 0x0064 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bMinPitchWS : 1;                               // 0x0064 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bMaxPitchWS : 1;                               // 0x0064 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bMinPitchCS : 1;                               // 0x0064 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bMaxPitchCS : 1;                               // 0x0064 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	float                                              MinYaw;                                        // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxYaw;                                        // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinPitchWS;                                    // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPitchWS;                                    // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinPitchCS;                                    // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPitchCS;                                    // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_OverrideCameraParams");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_PlayWeaponAnimation
// 0x0000 OR 0x0064 (0x0064 - 0x0064)
// 0 OR 100 (100 - 100)
class UOLAnimNotify_PlayWeaponAnimation : public UAnimNotify
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_PlayWeaponAnimation");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_ProceduralAdjust
// 0x0004 OR 0x0068 (0x0068 - 0x0064)
// 4 OR 104 (104 - 100)
class UOLAnimNotify_ProceduralAdjust : public UAnimNotify
{
public:
	float                                              Duration;                                      // 0x0064 (0x0004) [0x0000000000020000] (CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_ProceduralAdjust");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimNotify_PropAttachment
// 0x0028 OR 0x008C (0x008C - 0x0064)
// 40 OR 140 (140 - 100)
class UOLAnimNotify_PropAttachment : public UAnimNotify
{
public:
	uint32_t                                           bHideWhenDone : 1;                             // 0x0064 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDiscardOffsets : 1;                           // 0x0064 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              BlendInTime;                                   // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     PositionOffset;                                // 0x0070 (0x000C) [0x0000000000000000]               
	struct FRotator                                    OrientationOffset;                             // 0x007C (0x000C) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0088 (0x0004) [0x0000000000020000] (CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimNotify_PropAttachment");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimParrying
// 0x002B OR 0x0168 (0x0168 - 0x013D)
// 43 OR 360 (360 - 317)
class UOLAnimParrying : public UAnimNodeBlendBase
{
public:
	float                                              MinimumDistance;                               // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LowDistance;                                   // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HighDistance;                                  // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AngleRange;                                    // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bActive : 1;                                   // 0x0150 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              EnemyDistance;                                 // 0x0154 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EnemyRelYaw;                                   // 0x0158 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ParryWeight;                                   // 0x015C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ParryStrength;                                 // 0x0160 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ParryAngleRatio;                               // 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimParrying");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimPeeking
// 0x002F OR 0x016C (0x016C - 0x013D)
// 47 OR 364 (364 - 317)
class UOLAnimPeeking : public UAnimNodeBlendBase
{
public:
	int32_t                                            ActiveChildIdx;                                // 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentRatio;                                  // 0x0144 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetRatio;                                   // 0x0148 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<struct FQuat>                               CornerToHandQuats;                             // 0x014C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FVector>                             CornerToHandVecs;                              // 0x015C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimPeeking");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimPushing
// 0x0007 OR 0x0144 (0x0144 - 0x013D)
// 7 OR 324 (324 - 317)
class UOLAnimPushing : public UAnimNodeBlendBase
{
public:
	float                                              PushRatio;                                     // 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimPushing");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimRandomCycle
// 0x001C OR 0x0180 (0x0180 - 0x0164)
// 28 OR 384 (384 - 356)
class UOLAnimRandomCycle : public UAnimNodeBlendList
{
public:
	float                                              DefaultCycleBiasWalking;                       // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DefaultCycleBiasRunning;                       // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                     // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NextCycleCheckTime;                            // 0x0170 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bIsMaster : 1;                                 // 0x0174 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UOLAnimRandomCycle*                          ShadowNode;                                    // 0x0178 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimRandomCycle");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimSelectByCamcorder
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimSelectByCamcorder : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimSelectByCamcorder");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimSelectByPhysicsVolume
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimSelectByPhysicsVolume : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimSelectByPhysicsVolume");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimSelectByShadowProxy
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimSelectByShadowProxy : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimSelectByShadowProxy");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimSelectByWalkingStyle
// 0x0000 OR 0x0164 (0x0164 - 0x0164)
// 0 OR 356 (356 - 356)
class UOLAnimSelectByWalkingStyle : public UAnimNodeBlendList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimSelectByWalkingStyle");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimSmartIdle
// 0x004F OR 0x018C (0x018C - 0x013D)
// 79 OR 396 (396 - 317)
class UOLAnimSmartIdle : public UAnimNodeBlendBase
{
public:
	uint32_t                                           bModifyPlayrateIdle : 1;                       // 0x0140 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              IdleMinRate;                                   // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleMaxRate;                                   // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleRateMinDuration;                           // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleRateMaxDuration;                           // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleRateTransitionSpeed;                       // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleBias;                                      // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BreakerMaxWeight;                              // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BreakerMinDuration;                            // 0x0160 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BreakerMaxDuration;                            // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinBreakerWeightTransitionSpeed;               // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxBreakerWeightTransitionSpeed;               // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentIdleRate;                               // 0x0170 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetIdleRate;                                // 0x0174 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NextIdleRateTransition;                        // 0x0178 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentBreakerWeight;                          // 0x017C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetBreakerWeight;                           // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BreakerWeightTransitionSpeed;                  // 0x0184 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NextBreakerWeightTransition;                   // 0x0188 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimSmartIdle");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimStruggleCycle
// 0x0000 OR 0x0198 (0x0198 - 0x0198)
// 0 OR 408 (408 - 408)
class UOLAnimStruggleCycle : public UAnimNodeSequence
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimStruggleCycle");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLAnimTurnOnSpot
// 0x0004 OR 0x0168 (0x0168 - 0x0164)
// 4 OR 360 (360 - 356)
class UOLAnimTurnOnSpot : public UAnimNodeBlendList
{
public:
	float                                              CurrentFeetHeading;                            // 0x0164 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLAnimTurnOnSpot");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Achievement
// 0x0001 OR 0x0151 (0x0151 - 0x0150)
// 1 OR 337 (337 - 336)
class UOLSeqAct_Achievement : public USequenceAction
{
public:
	EOutlastAchievement                                achievement;                                   // 0x0150 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Achievement");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_AdjustToFloor
// 0x0008 OR 0x0158 (0x0158 - 0x0150)
// 8 OR 344 (344 - 336)
class UOLSeqAct_AdjustToFloor : public USequenceAction
{
public:
	float                                              Duration;                                      // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HeightOffset;                                  // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_AdjustToFloor");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_AIAbortPatrol
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_AIAbortPatrol : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_AIAbortPatrol");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_AIStartPatrol
// 0x0018 OR 0x0180 (0x0180 - 0x0168)
// 24 OR 384 (384 - 360)
class UOLSeqAct_AIStartPatrol : public USeqAct_Latent
{
public:
	class ARoute*                                      PatrolRoute;                                   // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStartAtClosestPoint : 1;                      // 0x0170 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           FollowPlayer : 1;                              // 0x0170 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	EEnemyMode                                         PatrolMode;                                    // 0x0174 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              FollowDistance;                                // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FollowUpdateRate;                              // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_AIStartPatrol");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqAct_AnimControl
// 0x002C OR 0x0194 (0x0194 - 0x0168)
// 44 OR 404 (404 - 360)
class UOLSeqAct_AnimControl : public USeqAct_Latent
{
public:
	struct FName                                       BaseAnimName;                                  // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FAnimParams>                         ExtraAnims;                                    // 0x0170 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       SlotName;                                      // 0x0180 (0x0008) [0x0000000000000000]               
	struct FName                                       BaseAnimNodeName;                              // 0x0188 (0x0008) [0x0000000000000000]               
	int32_t                                            PlayingIdx;                                    // 0x0190 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_AnimControl");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Blur
// 0x0014 OR 0x0164 (0x0164 - 0x0150)
// 20 OR 356 (356 - 336)
class UOLSeqAct_Blur : public USequenceAction
{
public:
	float                                              Amount;                                        // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Desaturation;                                  // 0x0160 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Blur");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Camcorder
// 0x0010 OR 0x0160 (0x0160 - 0x0150)
// 16 OR 352 (352 - 336)
class UOLSeqAct_Camcorder : public USequenceAction
{
public:
	uint32_t                                           bWithNightVision : 1;                          // 0x0150 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              NewMinFOV;                                     // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NewNumBatteries;                               // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NewCurrentEnergy;                              // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Camcorder");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_CameraGlitch
// 0x000C OR 0x015C (0x015C - 0x0150)
// 12 OR 348 (348 - 336)
class UOLSeqAct_CameraGlitch : public USequenceAction
{
public:
	float                                              GlitchDuration;                                // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GlitchIntensity;                               // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GlitchFrequency;                               // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_CameraGlitch");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_CameraParticleEffect
// 0x0010 OR 0x0160 (0x0160 - 0x0150)
// 16 OR 352 (352 - 336)
class UOLSeqAct_CameraParticleEffect : public USequenceAction
{
public:
	class UParticleSystem*                             ParticleSystemTemplate;                        // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PlaneDist;                                     // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_CameraParticleEffect");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_CameraShake
// 0x007C OR 0x01CC (0x01CC - 0x0150)
// 124 OR 460 (460 - 336)
class UOLSeqAct_CameraShake : public USequenceAction
{
public:
	struct FCameraShakeData                            Params;                                        // 0x0150 (0x007C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_CameraShake");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ChokePoint
// 0x0014 OR 0x017C (0x017C - 0x0168)
// 20 OR 380 (380 - 360)
class UOLSeqAct_ChokePoint : public USeqAct_Latent
{
public:
	uint32_t                                           bWaitingForLoaded : 1;                         // 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWaitingForVisible : 1;                        // 0x0168 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNonBlocking : 1;                              // 0x0168 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	TArray<struct FName>                               LevelNames;                                    // 0x016C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ChokePoint");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ConditionalHideBatteries
// 0x0008 OR 0x0158 (0x0158 - 0x0150)
// 8 OR 344 (344 - 336)
class UOLSeqAct_ConditionalHideBatteries : public USequenceAction
{
public:
	int32_t                                            MaxNumBatteries;                               // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bHideInHardMode : 1;                           // 0x0154 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ConditionalHideBatteries");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_CrackCameraGlass
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_CrackCameraGlass : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_CrackCameraGlass");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_DarkLightControl
// 0x0008 OR 0x0158 (0x0158 - 0x0150)
// 8 OR 344 (344 - 336)
class UOLSeqAct_DarkLightControl : public USequenceAction
{
public:
	float                                              DarkLightBrightness;                           // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DarkLightRadius;                               // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_DarkLightControl");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Door
// 0x004D OR 0x019D (0x019D - 0x0150)
// 77 OR 413 (413 - 336)
class UOLSeqAct_Door : public USequenceAction
{
public:
	float                                              RotationSpeedOverride;                         // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OpenAngle;                                     // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoSound : 1;                                  // 0x0158 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bBashReversed : 1;                             // 0x0158 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSwitchToBreakingMesh : 1;                     // 0x0158 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FDoorShakeData                              ShakeParams;                                   // 0x015C (0x0040) [0x0000000000000001] (CPF_Edit)    
	ECancelBashDirection                               CancelBashDirection;                           // 0x019C (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Door");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqAct_DoorStatus
// 0x0004 OR 0x0154 (0x0154 - 0x0150)
// 4 OR 340 (340 - 336)
class UOLSeqAct_DoorStatus : public USequenceAction
{
public:
	float                                              OpenAngle;                                     // 0x0150 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_DoorStatus");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Fade
// 0x0010 OR 0x0160 (0x0160 - 0x0150)
// 16 OR 352 (352 - 336)
class UOLSeqAct_Fade : public USequenceAction
{
public:
	uint32_t                                           bFadeIn : 1;                                   // 0x0150 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceStartValue : 1;                          // 0x0150 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              Opacity;                                       // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      FadeColor;                                     // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Fade");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ForceStance
// 0x0004 OR 0x0154 (0x0154 - 0x0150)
// 4 OR 340 (340 - 336)
class UOLSeqAct_ForceStance : public USequenceAction
{
public:
	uint32_t                                           bCrouch : 1;                                   // 0x0150 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ForceStance");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_GameOver
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_GameOver : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_GameOver");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_GameplayItem
// 0x0008 OR 0x0158 (0x0158 - 0x0150)
// 8 OR 344 (344 - 336)
class UOLSeqAct_GameplayItem : public USequenceAction
{
public:
	struct FName                                       ItemName;                                      // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_GameplayItem");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_HeroControl
// 0x0044 OR 0x01AC (0x01AC - 0x0168)
// 68 OR 428 (428 - 360)
class UOLSeqAct_HeroControl : public USeqAct_Latent
{
public:
	float                                              FixedDuration;                                 // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LookAtBlendInTime;                             // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MovementSpeed;                                 // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RotationSpeed;                                 // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      GoToTarget;                                    // 0x0178 (0x0008) [0x0000000000000000]               
	class AActor*                                      LookAtTarget;                                  // 0x0180 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCompleted : 1;                                // 0x0188 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPendingKill : 1;                              // 0x0188 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ElapsedTime;                                   // 0x018C (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0190 (0x0004) [0x0000000000000000]               
	struct FVector                                     OriginalCamLocation;                           // 0x0194 (0x000C) [0x0000000000000000]               
	struct FRotator                                    OriginalCamRotation;                           // 0x01A0 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_HeroControl");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_IgnoreBaseRotation
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_IgnoreBaseRotation : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_IgnoreBaseRotation");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Limp
// 0x0001 OR 0x0151 (0x0151 - 0x0150)
// 1 OR 337 (337 - 336)
class UOLSeqAct_Limp : public USequenceAction
{
public:
	EHobbleIntensity                                   HobbleIntensity;                               // 0x0150 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Limp");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_LoadingScreen
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_LoadingScreen : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_LoadingScreen");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_MovieEffect
// 0x0054 OR 0x01A4 (0x01A4 - 0x0150)
// 84 OR 420 (420 - 336)
class UOLSeqAct_MovieEffect : public USequenceAction
{
public:
	float                                              ScaleIntensity;                                // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStartAtRandomFrame : 1;                       // 0x0154 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UTextureMovie*                               Movie;                                         // 0x0158 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    SndEventPlay;                                  // 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    SndEventStop;                                  // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	EMovieEffectAnim                                   AnimType;                                      // 0x0170 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FVector2D>                           Anim1;                                         // 0x0174 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FVector2D>                           Anim2;                                         // 0x0184 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FVector2D>                           Anim3;                                         // 0x0194 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_MovieEffect");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_NightVisionStatus
// 0x0004 OR 0x0154 (0x0154 - 0x0150)
// 4 OR 340 (340 - 336)
class UOLSeqAct_NightVisionStatus : public USequenceAction
{
public:
	float                                              RemainingBatteries;                            // 0x0150 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_NightVisionStatus");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_OpenMainMenu
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_OpenMainMenu : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_OpenMainMenu");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Pushable
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_Pushable : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Pushable");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_PushableObject
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_PushableObject : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_PushableObject");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_RainEffect
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_RainEffect : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_RainEffect");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ReadDocument
// 0x0008 OR 0x0158 (0x0158 - 0x0150)
// 8 OR 344 (344 - 336)
class UOLSeqAct_ReadDocument : public USequenceAction
{
public:
	struct FName                                       DocumentName;                                  // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ReadDocument");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_SetEnemyMoveSpeed
// 0x002C OR 0x017C (0x017C - 0x0150)
// 44 OR 380 (380 - 336)
class UOLSeqAct_SetEnemyMoveSpeed : public USequenceAction
{
public:
	EMoveSpeedMode                                     MoveSpeedMode;                                 // 0x0150 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              PatrolSpeedOverride;                           // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InvestigateSpeedOverride;                      // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ChaseSpeedOverride;                            // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AccelRate;                                     // 0x0160 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DecelRate;                                     // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpeedNoVisibility;                             // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ChaseSpeedAtMinDist;                           // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ChaseSpeedAtMaxDist;                           // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ChaseDistMin;                                  // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ChaseDistMax;                                  // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_SetEnemyMoveSpeed");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_SetObjective
// 0x000C OR 0x015C (0x015C - 0x0150)
// 12 OR 348 (348 - 336)
class UOLSeqAct_SetObjective : public USequenceAction
{
public:
	struct FName                                       ObjectiveTextId;                               // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bActivateOnlyOnce : 1;                         // 0x0158 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bResetOnPlayerDeath : 1;                       // 0x0158 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bHasBeenActivated : 1;                         // 0x0158 (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_SetObjective");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_SplashScreen
// 0x0004 OR 0x016C (0x016C - 0x0168)
// 4 OR 364 (364 - 360)
class UOLSeqAct_SplashScreen : public USeqAct_Latent
{
public:
	uint32_t                                           bPauseGame : 1;                                // 0x0168 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAlwaysReady : 1;                              // 0x0168 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bDone : 1;                                     // 0x0168 (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_SplashScreen");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Struggle
// 0x00A0 OR 0x0208 (0x0208 - 0x0168)
// 160 OR 520 (520 - 360)
class UOLSeqAct_Struggle : public USeqAct_Latent
{
public:
	struct FStruggleConfig                             Config;                                        // 0x0168 (0x007C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class ASkeletalMeshActor*                          Enemy;                                         // 0x01E4 (0x0008) [0x0000000000000000]               
	struct FVector                                     RefLocation;                                   // 0x01EC (0x000C) [0x0000000000000000]               
	struct FVector                                     RefDirection;                                  // 0x01F8 (0x000C) [0x0000000000000000]               
	uint32_t                                           bSucceeded : 1;                                // 0x0204 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFailed : 1;                                   // 0x0204 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Struggle");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqAct_ToggleNightVision
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_ToggleNightVision : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ToggleNightVision");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_Tutorial
// 0x0020 OR 0x0188 (0x0188 - 0x0168)
// 32 OR 392 (392 - 360)
class UOLSeqAct_Tutorial : public USeqAct_Latent
{
public:
	struct FName                                       TutorialTextId;                                // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       TutorialTextIdGamepad;                         // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              DisplayTime;                                   // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TutorialId;                                    // 0x017C (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsDone : 1;                                   // 0x0180 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ElapsedTime;                                   // 0x0184 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_Tutorial");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_WaitForPlayerInput
// 0x001C OR 0x0184 (0x0184 - 0x0168)
// 28 OR 388 (388 - 360)
class UOLSeqAct_WaitForPlayerInput : public USeqAct_Latent
{
public:
	uint32_t                                           bOnClick : 1;                                  // 0x0168 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bWaiting : 1;                                  // 0x0168 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FName                                       PromptTextId;                                  // 0x016C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      TranslatedPrompt;                              // 0x0174 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_WaitForPlayerInput");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ZoomImpulse
// 0x0004 OR 0x0154 (0x0154 - 0x0150)
// 4 OR 340 (340 - 336)
class UOLSeqAct_ZoomImpulse : public USequenceAction
{
public:
	float                                              ImpulseScale;                                  // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ZoomImpulse");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqCond_AIState
// 0x0000 OR 0x0134 (0x0134 - 0x0134)
// 0 OR 308 (308 - 308)
class UOLSeqCond_AIState : public USequenceCondition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqCond_AIState");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqCond_Checkpoint
// 0x000C OR 0x0140 (0x0140 - 0x0134)
// 12 OR 320 (320 - 308)
class UOLSeqCond_Checkpoint : public USequenceCondition
{
public:
	struct FName                                       CheckpointName;                                // 0x0134 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStatusIsOk : 1;                               // 0x013C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqCond_Checkpoint");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqCond_CompareDeaths
// 0x0004 OR 0x0138 (0x0138 - 0x0134)
// 4 OR 312 (312 - 308)
class UOLSeqCond_CompareDeaths : public USequenceCondition
{
public:
	int32_t                                            Value;                                         // 0x0134 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqCond_CompareDeaths");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqCond_DetailMode
// 0x0004 OR 0x0138 (0x0138 - 0x0134)
// 4 OR 312 (312 - 308)
class UOLSeqCond_DetailMode : public USequenceCondition
{
public:
	uint32_t                                           bResult : 1;                                   // 0x0134 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqCond_DetailMode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqCond_GameState
// 0x000C OR 0x0140 (0x0140 - 0x0134)
// 12 OR 320 (320 - 308)
class UOLSeqCond_GameState : public USequenceCondition
{
public:
	struct FName                                       GameStateName;                                 // 0x0134 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStatusIsOk : 1;                               // 0x013C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqCond_GameState");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqCond_IsDemo
// 0x0004 OR 0x0138 (0x0138 - 0x0134)
// 4 OR 312 (312 - 308)
class UOLSeqCond_IsDemo : public USequenceCondition
{
public:
	uint32_t                                           bResult : 1;                                   // 0x0134 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqCond_IsDemo");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqCond_IsTouching
// 0x0004 OR 0x0138 (0x0138 - 0x0134)
// 4 OR 312 (312 - 308)
class UOLSeqCond_IsTouching : public USequenceCondition
{
public:
	uint32_t                                           bResult : 1;                                   // 0x0134 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqCond_IsTouching");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqEvent_AILostTarget
// 0x0004 OR 0x0174 (0x0174 - 0x0170)
// 4 OR 372 (372 - 368)
class UOLSeqEvent_AILostTarget : public USequenceEvent
{
public:
	uint32_t                                           bOnlyAfterChase : 1;                           // 0x0170 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_AILostTarget");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_AIWaypointAction
// 0x0000 OR 0x0170 (0x0170 - 0x0170)
// 0 OR 368 (368 - 368)
class UOLSeqEvent_AIWaypointAction : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_AIWaypointAction");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_ApplyCheckpointState
// 0x000C OR 0x017C (0x017C - 0x0170)
// 12 OR 380 (380 - 368)
class UOLSeqEvent_ApplyCheckpointState : public USequenceEvent
{
public:
	struct FName                                       CheckpointName;                                // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStatusIsOk : 1;                               // 0x0178 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_ApplyCheckpointState");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqEvent_ApplyGameState
// 0x000C OR 0x017C (0x017C - 0x0170)
// 12 OR 380 (380 - 368)
class UOLSeqEvent_ApplyGameState : public USequenceEvent
{
public:
	struct FName                                       GameStateName;                                 // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStatusIsOk : 1;                               // 0x0178 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_ApplyGameState");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_BehaviorEvent
// 0x0008 OR 0x0178 (0x0178 - 0x0170)
// 8 OR 376 (376 - 368)
class UOLSeqEvent_BehaviorEvent : public USequenceEvent
{
public:
	struct FName                                       EventName;                                     // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_BehaviorEvent");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_CSAActivated
// 0x0000 OR 0x0170 (0x0170 - 0x0170)
// 0 OR 368 (368 - 368)
class UOLSeqEvent_CSAActivated : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_CSAActivated");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_Door
// 0x0008 OR 0x0178 (0x0178 - 0x0170)
// 8 OR 376 (376 - 368)
class UOLSeqEvent_Door : public USequenceEvent
{
public:
	float                                              OpenThreshold;                                 // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOpenThresholdOnlyForInteractiveOpen : 1;      // 0x0174 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_Door");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class OLGame.OLSeqEvent_NightVision
// 0x0000 OR 0x0170 (0x0170 - 0x0170)
// 0 OR 368 (368 - 368)
class UOLSeqEvent_NightVision : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_NightVision");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_Pickup
// 0x0000 OR 0x0170 (0x0170 - 0x0170)
// 0 OR 368 (368 - 368)
class UOLSeqEvent_Pickup : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_Pickup");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_Pushable
// 0x0000 OR 0x0170 (0x0170 - 0x0170)
// 0 OR 368 (368 - 368)
class UOLSeqEvent_Pushable : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_Pushable");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_RecordingComplete
// 0x0000 OR 0x0170 (0x0170 - 0x0170)
// 0 OR 368 (368 - 368)
class UOLSeqEvent_RecordingComplete : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_RecordingComplete");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqEvent_SpawnedAtCheckpoint
// 0x000C OR 0x017C (0x017C - 0x0170)
// 12 OR 380 (380 - 368)
class UOLSeqEvent_SpawnedAtCheckpoint : public USequenceEvent
{
public:
	struct FName                                       CheckpointName;                                // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStatusIsOk : 1;                               // 0x0178 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqEvent_SpawnedAtCheckpoint");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ToggleAIIgnorePlayer
// 0x0004 OR 0x0154 (0x0154 - 0x0150)
// 4 OR 340 (340 - 336)
class UOLSeqAct_ToggleAIIgnorePlayer : public USequenceAction
{
public:
	uint32_t                                           bSetOnGroup : 1;                               // 0x0150 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ToggleAIIgnorePlayer");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ToggleAIAlwaysSeePlayer
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_ToggleAIAlwaysSeePlayer : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ToggleAIAlwaysSeePlayer");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_ToggleAIAttackOnProximity
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class UOLSeqAct_ToggleAIAttackOnProximity : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_ToggleAIAttackOnProximity");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_AIInvestigatePoint
// 0x000C OR 0x015C (0x015C - 0x0150)
// 12 OR 348 (348 - 336)
class UOLSeqAct_AIInvestigatePoint : public USequenceAction
{
public:
	class AActor*                                      Point;                                         // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStartChasing : 1;                             // 0x0158 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_AIInvestigatePoint");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTIfCustomTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTIfCustomTask : public UOLBTIfTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIfCustomTask");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTCanAttackTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTCanAttackTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTCanAttackTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTDistanceToPlayerNode
// 0x0005 OR 0x00B5 (0x00B5 - 0x00B0)
// 5 OR 181 (181 - 176)
class UOLBTDistanceToPlayerNode : public UOLBTIfNode
{
public:
	float                                              Distance;                                      // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EBTComparison                                      Comparison;                                    // 0x00B4 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTDistanceToPlayerNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTDistanceToPlayerTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTDistanceToPlayerTask : public UOLBTIfTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTDistanceToPlayerTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTHasDisturbanceTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTHasDisturbanceTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTHasDisturbanceTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTHasFollowPatrolTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTHasFollowPatrolTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTHasFollowPatrolTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTHasInvestigationPointTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTHasInvestigationPointTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTHasInvestigationPointTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTHasNewDisturbanceTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTHasNewDisturbanceTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTHasNewDisturbanceTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTHasPatrolTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTHasPatrolTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTHasPatrolTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTHasValidTargetTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTHasValidTargetTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTHasValidTargetTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTHasVisibleTargetTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTHasVisibleTargetTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTHasVisibleTargetTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTIsInBehaviorStateNode
// 0x0001 OR 0x00B1 (0x00B1 - 0x00B0)
// 1 OR 177 (177 - 176)
class UOLBTIsInBehaviorStateNode : public UOLBTIfNode
{
public:
	EAIBehaviorState                                   BehaviorState;                                 // 0x00B0 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIsInBehaviorStateNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTIsInBehaviorStateTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTIsInBehaviorStateTask : public UOLBTIfTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIsInBehaviorStateTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTIsInMatineeTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTIsInMatineeTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIsInMatineeTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTIsInvestigatingTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTIsInvestigatingTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIsInvestigatingTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTIsTargetReachableTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTIsTargetReachableTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTIsTargetReachableTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTSawPlayerInBedTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTSawPlayerInBedTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSawPlayerInBedTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTSawPlayerInLockerTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTSawPlayerInLockerTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSawPlayerInLockerTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTSawPlayerInSqueezeTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTSawPlayerInSqueezeTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTSawPlayerInSqueezeTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTShouldAttackOnProximityTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTShouldAttackOnProximityTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTShouldAttackOnProximityTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTShouldAttackTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTShouldAttackTask : public UOLBTIfCustomTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTShouldAttackTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTTargetNotMovingTask
// 0x0004 OR 0x0080 (0x0080 - 0x007C)
// 4 OR 128 (128 - 124)
class UOLBTTargetNotMovingTask : public UOLBTIfCustomTask
{
public:
	float                                              MovingThreshold;                               // 0x007C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTTargetNotMovingTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLBTWasLastMoveFailedReasonNode
// 0x0001 OR 0x00B1 (0x00B1 - 0x00B0)
// 1 OR 177 (177 - 176)
class UOLBTWasLastMoveFailedReasonNode : public UOLBTIfNode
{
public:
	EMoveFailedReason                                  FailedReason;                                  // 0x00B0 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWasLastMoveFailedReasonNode");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLBTWasLastMoveFailedReasonTask
// 0x0000 OR 0x007C (0x007C - 0x007C)
// 0 OR 124 (124 - 124)
class UOLBTWasLastMoveFailedReasonTask : public UOLBTIfTask
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLBTWasLastMoveFailedReasonTask");
		}

		return uClassPointer;
	};

	bool eventCondition();
};

// Class OLGame.OLCamera
// 0x0000 OR 0x0584 (0x0584 - 0x0584)
// 0 OR 1412 (1412 - 1412)
class AOLCamera : public ACamera
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLCamera");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEmailScreen
// 0x0020 OR 0x0204 (0x0204 - 0x01E4)
// 32 OR 516 (516 - 484)
class UOLEmailScreen : public UGFxMoviePlayer
{
public:
	class FString                                      EmailText;                                     // 0x01E4 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      SubjectText;                                   // 0x01F4 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEmailScreen");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
};

// Class OLGame.OLEnemyGenericPatient_A
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_A : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_A");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_B
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_B : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_B");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_C
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_C : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_C");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_D
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_D : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_D");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_E
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_E : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_E");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_F
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_F : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_F");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_G
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_G : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_G");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_H
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_H : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_H");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_I
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_I : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_I");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_J
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_J : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_J");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGenericPatient_K
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyGenericPatient_K : public AOLEnemyGenericPatient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_K");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyGroom_A
// 0x0000 OR 0x37F4 (0x37F4 - 0x37F4)
// 0 OR 14324 (14324 - 14324)
class AOLEnemyGroom_A : public AOLEnemyGroom
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyGroom_A");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_MorphNanoCloud
// 0x0008 OR 0x0158 (0x0158 - 0x0150)
// 8 OR 344 (344 - 336)
class UOLSeqAct_MorphNanoCloud : public USequenceAction
{
public:
	uint32_t                                           bInstantMorph : 1;                             // 0x0150 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              TimeScale;                                     // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_MorphNanoCloud");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_SetNanoCloudVisibility
// 0x000C OR 0x015C (0x015C - 0x0150)
// 12 OR 348 (348 - 336)
class UOLSeqAct_SetNanoCloudVisibility : public USequenceAction
{
public:
	float                                              AlwaysVisibleDistance;                         // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FullOpacityDistance;                           // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceBasedVisibilityMorphTimeScale;         // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_SetNanoCloudVisibility");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyNanoCloud_A
// 0x0000 OR 0x38B8 (0x38B8 - 0x38B8)
// 0 OR 14520 (14520 - 14520)
class AOLEnemyNanoCloud_A : public AOLEnemyNanoCloud
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_A");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyNanoCloud_B
// 0x0000 OR 0x38B8 (0x38B8 - 0x38B8)
// 0 OR 14520 (14520 - 14520)
class AOLEnemyNanoCloud_B : public AOLEnemyNanoCloud
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_B");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyNanoCloud_C
// 0x0000 OR 0x38B8 (0x38B8 - 0x38B8)
// 0 OR 14520 (14520 - 14520)
class AOLEnemyNanoCloud_C : public AOLEnemyNanoCloud
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_C");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyNanoCloud_D
// 0x0000 OR 0x38B8 (0x38B8 - 0x38B8)
// 0 OR 14520 (14520 - 14520)
class AOLEnemyNanoCloud_D : public AOLEnemyNanoCloud
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_D");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemyPriest
// 0x0000 OR 0x37EC (0x37EC - 0x37EC)
// 0 OR 14316 (14316 - 14316)
class AOLEnemyPriest : public AOLEnemyPawn
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemyPriest");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemySoldier_A
// 0x0000 OR 0x37F4 (0x37F4 - 0x37F4)
// 0 OR 14324 (14324 - 14324)
class AOLEnemySoldier_A : public AOLEnemySoldier
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemySoldier_A");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemySoldier_B
// 0x0000 OR 0x37F4 (0x37F4 - 0x37F4)
// 0 OR 14324 (14324 - 14324)
class AOLEnemySoldier_B : public AOLEnemySoldier
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemySoldier_B");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLEnemySoldier_C
// 0x0000 OR 0x37F4 (0x37F4 - 0x37F4)
// 0 OR 14324 (14324 - 14324)
class AOLEnemySoldier_C : public AOLEnemySoldier
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLEnemySoldier_C");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLFlashBackScreen
// 0x0010 OR 0x01F4 (0x01F4 - 0x01E4)
// 16 OR 500 (500 - 484)
class UOLFlashBackScreen : public UGFxMoviePlayer
{
public:
	class FString                                      Text;                                          // 0x01E4 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLFlashBackScreen");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
};

// Class OLGame.OLFlashForwardScreen
// 0x0010 OR 0x01F4 (0x01F4 - 0x01E4)
// 16 OR 500 (500 - 484)
class UOLFlashForwardScreen : public UGFxMoviePlayer
{
public:
	class FString                                      Text;                                          // 0x01E4 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLFlashForwardScreen");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
};

// Class OLGame.OLFlashLight
// 0x0038 OR 0x0314 (0x0314 - 0x02DC)
// 56 OR 788 (788 - 732)
class AOLFlashLight : public AInterpActor
{
public:
	class UStaticMeshComponent*                        FlashLightMesh;                                // 0x02DC (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        ConeMesh1a;                                    // 0x02E4 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        ConeMesh1b;                                    // 0x02EC (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        ConeMesh2a;                                    // 0x02F4 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        ConeMesh2b;                                    // 0x02FC (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ULensFlareComponent*                         LensFlareMesh;                                 // 0x0304 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpotLightComponent*                         LightSpotLight;                                // 0x030C (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLFlashLight");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class OLGame.OLPlayerReplicationInfo
// 0x0000 OR 0x0318 (0x0318 - 0x0318)
// 0 OR 792 (792 - 792)
class AOLPlayerReplicationInfo : public APlayerReplicationInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLPlayerReplicationInfo");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLGFxMoviePlayer
// 0x0000 OR 0x01E4 (0x01E4 - 0x01E4)
// 0 OR 484 (484 - 484)
class UOLGFxMoviePlayer : public UGFxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLGFxMoviePlayer");
		}

		return uClassPointer;
	};

	void OnProfileWriteComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool SaveProfile(struct FScriptDelegate optionalWriteProfileSettingsCompleteDelegate, class AOLPlayerController* optionalPlayerToSave);
	static class UOnlinePlayerInterface* GetOnlinePlayerInterface();
	void MuteSoundThemes(bool bMute);
	static class AOLGame* GetGame();
	class AOLPlayerController* GetOLPC();
};

// Class OLGame.OLUIFrontEnd
// 0x00D8 OR 0x02BC (0x02BC - 0x01E4)
// 216 OR 700 (700 - 484)
class UOLUIFrontEnd : public UOLGFxMoviePlayer
{
public:
	struct FName                                       EscapeMenuKey;                                 // 0x01E4 (0x0008) [0x0000000000000000]               
	struct FName                                       TabMenuKey;                                    // 0x01EC (0x0008) [0x0000000000000000]               
	struct FName                                       RecordingMenuKey;                              // 0x01F4 (0x0008) [0x0000000000000000]               
	struct FName                                       EvidenceMenuKey;                               // 0x01FC (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  RootMC;                                        // 0x0204 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  ManagerMC;                                     // 0x020C (0x0008) [0x0000000000000000]               
	uint32_t                                           bInitialized : 1;                              // 0x0214 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCapturingKeyBinding : 1;                      // 0x0214 (0x0004) [0x0000000000000000] [0x00000002] 
	EMenuType                                          MenuType;                                      // 0x0218 (0x0001) [0x0000000000000000]               
	class UOLUIFrontEnd_MainMenu*                      MainMenuView;                                  // 0x021C (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_PauseMenu*                     PauseMenuView;                                 // 0x0224 (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_LoadGame*                      LoadGameView;                                  // 0x022C (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_Options*                       OptionsView;                                   // 0x0234 (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_Screen*                        GammaScreenView;                               // 0x023C (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_Screen*                        GamepadScreenView;                             // 0x0244 (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_Credits*                       CreditsView;                                   // 0x024C (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_DifficultySelectionScreen*     DifficultySelectionView;                       // 0x0254 (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_ChapterSelection*              ChapterSelection;                              // 0x025C (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_TabMenu*                       TabMenuView;                                   // 0x0264 (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_RecordingList*                 RecordingListView;                             // 0x026C (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_Screen*                        RecordingView;                                 // 0x0274 (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_EvidenceList*                  EvidenceListView;                              // 0x027C (0x0008) [0x0000000000000000]               
	class UOLUIFrontEnd_Screen*                        EvidenceView;                                  // 0x0284 (0x0008) [0x0000000000000000]               
	TArray<struct FViewInfo>                           ViewData;                                      // 0x028C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class UOLUIFrontEnd_View*>                  ViewStack;                                     // 0x029C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               LoadedViews;                                   // 0x02AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd");
		}

		return uClassPointer;
	};

	class FString GetLocalizedString(class FString Category, class FString KeyName, class FString File);
	class FString GetGamepadActionBoundToKey(class FString KeyNameString, int32_t ConfigType);
	bool HasInitializedGamma();
	class FString GetFriendlyKeyBindingName(class FString KeyName);
	void StartKeyBindingCapture();
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void ConfigureTargetView(class UOLUIFrontEnd_View* targetView);
	void ConfigureView(class UOLUIFrontEnd_View* InView, struct FName WidgetName, struct FName WidgetPath);
	class UGFxObject* PopViewStub();
	class UGFxObject* PopView();
	void PushViewByName(struct FName TargetViewName, class UOLUIFrontEnd_Screen* optionalParentView);
	void PushView(class UOLUIFrontEnd_View* targetView);
	void LoadView(struct FViewInfo InViewInfo);
	void LoadViews();
	void ConfigFrontEnd();
	void OnKeyBindingsChanged();
	void AddCaptureKeys();
	void eventOnClose();
	bool Start(bool optionalStartPaused);
};

// Class OLGame.OLUIFrontEnd_View
// 0x0010 OR 0x00B0 (0x00B0 - 0x00A0)
// 16 OR 176 (176 - 160)
class UOLUIFrontEnd_View : public UGFxObject
{
public:
	class UOLUIFrontEnd*                               MenuManager;                                   // 0x00A0 (0x0008) [0x0000000000000000]               
	struct FName                                       ViewName;                                      // 0x00A8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_View");
		}

		return uClassPointer;
	};

	void OnKeyBindingCaptured(struct FName KeyName);
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool back();
	void OnViewDeactivated();
	void OnViewActivated();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_Screen
// 0x0080 OR 0x0130 (0x0130 - 0x00B0)
// 128 OR 304 (304 - 176)
class UOLUIFrontEnd_Screen : public UOLUIFrontEnd_View
{
public:
	class FString                                      ViewTitle;                                     // 0x00B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      BackText;                                      // 0x00C0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      EnterText;                                     // 0x00D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      YesText;                                       // 0x00E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      NoText;                                        // 0x00F0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      CloseText;                                     // 0x0100 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      AcceptText;                                    // 0x0110 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxObject*                                  CircleLabel;                                   // 0x0120 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  CrossLabel;                                    // 0x0128 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_Screen");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	class FString LocalizeNarrative(class FString SectionName, class FString KeyName);
	bool IsDLCInstalled();
	bool IsDemo();
	bool IsTopMostView();
};

// Class OLGame.OLUIFrontEnd_MainMenu
// 0x00FC OR 0x022C (0x022C - 0x0130)
// 252 OR 556 (556 - 304)
class UOLUIFrontEnd_MainMenu : public UOLUIFrontEnd_Screen
{
public:
	class FString                                      TitleText;                                     // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ContinueText;                                  // 0x0140 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      StartText;                                     // 0x0150 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      PlayDemoText;                                  // 0x0160 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoadText;                                      // 0x0170 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      OptionsText;                                   // 0x0180 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      CreditsText;                                   // 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ExitText;                                      // 0x01A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      NewGameIntroText;                              // 0x01B0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ChaptersText;                                  // 0x01C0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      StartDLCText;                                  // 0x01D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxClikWidget*                              ButtonBar;                                     // 0x01E0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              IntroLabel;                                    // 0x01E8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              OKButton;                                      // 0x01F0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ContinueButtonIndex;                           // 0x01F8 (0x0004) [0x0000000000000000]               
	int32_t                                            StartButtonIndex;                              // 0x01FC (0x0004) [0x0000000000000000]               
	int32_t                                            StartDLCButtonIndex;                           // 0x0200 (0x0004) [0x0000000000000000]               
	int32_t                                            LoadButtonIndex;                               // 0x0204 (0x0004) [0x0000000000000000]               
	int32_t                                            OptionsButtonIndex;                            // 0x0208 (0x0004) [0x0000000000000000]               
	int32_t                                            CreditsButtonIndex;                            // 0x020C (0x0004) [0x0000000000000000]               
	int32_t                                            ExitButtonIndex;                               // 0x0210 (0x0004) [0x0000000000000000]               
	int32_t                                            ChaptersButtonIndex;                           // 0x0214 (0x0004) [0x0000000000000000]               
	uint32_t                                           bShowIntroMsg : 1;                             // 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      StartCPName;                                   // 0x021C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_MainMenu");
		}

		return uClassPointer;
	};

	void ASShowNewGameIntroText();
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void OnButtonClick(struct FEventData ev);
	void PopulateButtons();
	bool back();
	void OnExitButtonPress(struct FEventData ev);
	void OnCreditsButtonPress(struct FEventData ev);
	void OnOptionsButtonPress(struct FEventData ev);
	void Select_Options();
	void OnLoadButtonPress(struct FEventData ev);
	void OnOKButtonClick(struct FEventData ev);
	void OnChaptersButtonPress(struct FEventData ev);
	void OnStartDLCButtonPress(struct FEventData ev);
	void OnStartButtonPress(struct FEventData ev);
	void GameLoadedCallback(bool bSuccess);
	void StartNewGame();
	void DifficultySelected();
	void SaveLocationSelected(bool bSuccess);
	void OnContinueButtonPress(struct FEventData ev);
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_Credits
// 0x0014 OR 0x0144 (0x0144 - 0x0130)
// 20 OR 324 (324 - 304)
class UOLUIFrontEnd_Credits : public UOLUIFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              BackButton;                                    // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  CreditsScroll;                                 // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bGameOver : 1;                                 // 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_Credits");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void Press_Back(struct FEventData ev);
	void OnViewDeactivated();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnCreditsFinished();
	bool back();
};

// Class OLGame.OLUIFrontEnd_Console
// 0x0000 OR 0x02BC (0x02BC - 0x02BC)
// 0 OR 700 (700 - 700)
class UOLUIFrontEnd_Console : public UOLUIFrontEnd
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_Console");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
};

// Class OLGame.OLUIMessage
// 0x0018 OR 0x01FC (0x01FC - 0x01E4)
// 24 OR 508 (508 - 484)
class UOLUIMessage : public UOLGFxMoviePlayer
{
public:
	class UGFxClikWidget*                              MessageBox;                                    // 0x01E4 (0x0008) [0x0000000000000000]               
	float                                              MessageXPos;                                   // 0x01EC (0x0004) [0x0000000000000000]               
	float                                              MessageYPos;                                   // 0x01F0 (0x0004) [0x0000000000000000]               
	float                                              MessageWidth;                                  // 0x01F4 (0x0004) [0x0000000000000000]               
	float                                              MessageHeight;                                 // 0x01F8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIMessage");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void SetMessage(EHUDMessageType MessageType, class FString Message);
	void SetVisible(bool bVisible);
	void OnClose();
	bool Start(bool optionalStartPaused);
};

// Class OLGame.OLUIMessage_Console
// 0x0000 OR 0x01FC (0x01FC - 0x01FC)
// 0 OR 508 (508 - 508)
class UOLUIMessage_Console : public UOLUIMessage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIMessage_Console");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLLight
// 0x0018 OR 0x0258 (0x0258 - 0x0240)
// 24 OR 600 (600 - 576)
class AOLLight : public AActor
{
public:
	class UStaticMeshComponent*                        LightMesh;                                     // 0x0240 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        FogMesh;                                       // 0x0248 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpotLightComponent*                         SpotLight;                                     // 0x0250 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLLight");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLLight_toggeble
// 0x0010 OR 0x025C (0x025C - 0x024C)
// 16 OR 604 (604 - 588)
class AOLLight_toggeble : public ASpotLightToggleable
{
public:
	class UStaticMeshComponent*                        LightMesh;                                     // 0x024C (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        FogMesh;                                       // 0x0254 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLLight_toggeble");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLMapInfo
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UOLMapInfo : public UMapInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLMapInfo");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLSeqAct_OverrideAIMusic
// 0x0008 OR 0x0158 (0x0158 - 0x0150)
// 8 OR 344 (344 - 336)
class UOLSeqAct_OverrideAIMusic : public USequenceAction
{
public:
	EAIMusicState                                      MusicState;                                    // 0x0150 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              MusicDistance;                                 // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLSeqAct_OverrideAIMusic");
		}

		return uClassPointer;
	};

};

// Class OLGame.OLUIFrontEnd_EvidenceList
// 0x0028 OR 0x0158 (0x0158 - 0x0130)
// 40 OR 344 (344 - 304)
class UOLUIFrontEnd_EvidenceList : public UOLUIFrontEnd_Screen
{
public:
	class FString                                      Title;                                         // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxObject*                                  TitleLabel;                                    // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              ItemList;                                      // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_EvidenceList");
		}

		return uClassPointer;
	};

	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void OnItemClick(struct FEventData ev);
	void PopulateItemList();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void Press_Back(struct FEventData ev);
};

// Class OLGame.OLUIFrontEnd_RecordingList
// 0x0028 OR 0x0158 (0x0158 - 0x0130)
// 40 OR 344 (344 - 304)
class UOLUIFrontEnd_RecordingList : public UOLUIFrontEnd_Screen
{
public:
	class FString                                      Title;                                         // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxObject*                                  TitleLabel;                                    // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              ItemList;                                      // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_RecordingList");
		}

		return uClassPointer;
	};

	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void OnItemClick(struct FEventData ev);
	void PopulateItemList();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void Press_Back(struct FEventData ev);
};

// Class OLGame.OLUIFrontEnd_TabMenu
// 0x0050 OR 0x0180 (0x0180 - 0x0130)
// 80 OR 384 (384 - 304)
class UOLUIFrontEnd_TabMenu : public UOLUIFrontEnd_Screen
{
public:
	class FString                                      ObjectiveText;                                 // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      RecordingText;                                 // 0x0140 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      EvidenceText;                                  // 0x0150 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxClikWidget*                              ButtonBar;                                     // 0x0160 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ObjLabel;                                      // 0x0168 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  InventoryLabel;                                // 0x0170 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              CloseButton;                                   // 0x0178 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_TabMenu");
		}

		return uClassPointer;
	};

	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	class FString GetInventoryText();
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void OnCloseButtonPress(struct FEventData ev);
	void OnEvidenceButtonPress(struct FEventData ev);
	void OnRecordingButtonPress(struct FEventData ev);
	void OnButtonClick(struct FEventData ev);
	void PopulateButtons();
	void OnViewActivated();
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_ChapterSelection
// 0x00A4 OR 0x01D4 (0x01D4 - 0x0130)
// 164 OR 468 (468 - 304)
class UOLUIFrontEnd_ChapterSelection : public UOLUIFrontEnd_Screen
{
public:
	class FString                                      ChapterSelectionTitle;                         // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoadText;                                      // 0x0140 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            SelectedIndex;                                 // 0x0150 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              SelectionNames;                                // 0x0154 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class FString>                              SelectionCPs;                                  // 0x0164 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class FString>                              MainChapters;                                  // 0x0174 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class FString>                              MainCPs;                                       // 0x0184 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class FString>                              DLCChapters;                                   // 0x0194 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class FString>                              DLCCPs;                                        // 0x01A4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UGFxClikWidget*                              ChapterList;                                   // 0x01B4 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x01BC (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              LoadButton;                                    // 0x01C4 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  TitleLabel;                                    // 0x01CC (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_ChapterSelection");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	void Press_Back(struct FEventData ev);
	void Press_Load(struct FEventData ev);
	void LoadSelectedChapter();
	void SetSelectedIndex(int32_t Index);
	void ChapterListChanged(struct FEventData ev);
	void PopulateChapterList();
	void Pop();
	void OnViewDeactivated();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
};

// Class OLGame.OLUIFrontEnd_DifficultySelectionScreen
// 0x00AC OR 0x01DC (0x01DC - 0x0130)
// 172 OR 476 (476 - 304)
class UOLUIFrontEnd_DifficultySelectionScreen : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                     // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      ChooseDifficultyText;                          // 0x0138 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      NormalText;                                    // 0x0148 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      HardText;                                      // 0x0158 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      NightmareText;                                 // 0x0168 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      InsaneText;                                    // 0x0178 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmInsaneTitleText;                        // 0x0188 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmInsaneMsgText;                          // 0x0198 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxClikWidget*                              NormalButton;                                  // 0x01A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              HardButton;                                    // 0x01B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              NightmareButton;                               // 0x01B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              InsaneButton;                                  // 0x01C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x01C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  TitleLabel;                                    // 0x01D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bShowingInsaneConfirmDialog : 1;               // 0x01D8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bSpecificChapter : 1;                          // 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_DifficultySelectionScreen");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void ASShowConfirmInsaneDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName);
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	void Press_Back(struct FEventData ev);
	void Pop();
	void OnViewDeactivated();
	void ProceedToStartGame();
	void OnConfirmedInsane(bool bOk);
	void Press_Insane(struct FEventData ev);
	void Press_Nightmare(struct FEventData ev);
	void Press_Hard(struct FEventData ev);
	void Press_Normal(struct FEventData ev);
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_Options
// 0x0205 OR 0x0335 (0x0335 - 0x0130)
// 517 OR 821 (821 - 304)
class UOLUIFrontEnd_Options : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                     // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FUniqueNetId                                OwningId;                                      // 0x0138 (0x0010) [0x0000000000000000]               
	class UOnlineSubsystem*                            OnlineSub;                                     // 0x0148 (0x0008) [0x0000000000000000]               
	class FString                                      MouseSettingsText;                             // 0x0150 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      MouseInvertYText;                              // 0x0160 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      MouseSensitivityText;                          // 0x0170 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ApplyText;                                     // 0x0180 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GammaText;                                     // 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ResetText;                                     // 0x01A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GameplayText;                                  // 0x01B0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GraphicsText;                                  // 0x01C0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ControlsText;                                  // 0x01D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmResolutionTitleText;                    // 0x01E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmResolutionMessageText;                  // 0x01F0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmChangesTitleText;                       // 0x0200 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmChangesMessageText;                     // 0x0210 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      KeyBindingConflictTitleText;                   // 0x0220 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      KeyBindingConflictMessageText;                 // 0x0230 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      MustRestartTitleText;                          // 0x0240 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      MustRestartMessageText;                        // 0x0250 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      OKText;                                        // 0x0260 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      CancelText;                                    // 0x0270 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<class FString>                              DifficultyOptions;                             // 0x0280 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxClikWidget*                              ApplyButton;                                   // 0x0290 (0x0008) [0x0000000000000000]               
	class UGFxClikWidget*                              BackButton;                                    // 0x0298 (0x0008) [0x0000000000000000]               
	class UGFxClikWidget*                              ResetButton;                                   // 0x02A0 (0x0008) [0x0000000000000000]               
	class UGFxClikWidget*                              TabButtons;                                    // 0x02A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  GameplayList;                                  // 0x02B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  GraphicsList;                                  // 0x02B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ControlsList;                                  // 0x02C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PreviousResolutionSetting;                     // 0x02C8 (0x0004) [0x0000000000000000]               
	int32_t                                            PreviousFullscreenSetting;                     // 0x02CC (0x0004) [0x0000000000000000]               
	uint32_t                                           bWaitingForPopup : 1;                          // 0x02D0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSwitchingFromJpn : 1;                         // 0x02D0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	TArray<struct FName>                               OriginalResolutionValueNames;                  // 0x02D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               DisplayedResolutionValueNames;                 // 0x02E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOptionInfo>                         GeneralOptionsWithDifficulty;                  // 0x02F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOptionInfo>                         GeneralOptionsNoDifficulty;                    // 0x0304 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOptionInfo>                         GraphicsOptions;                               // 0x0314 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOptionInfo>                         ControlsOptions;                               // 0x0324 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	EOptionTabs                                        CurrentTab;                                    // 0x0334 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_Options");
		}

		return uClassPointer;
	};

	void ASOnKeyBindingCaptured(class FString KeyName);
	void ShowMessageDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString callbackName);
	void ShowKeyBindingConflictDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName);
	void ShowChangeConfirmationDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName);
	void ShowResolutionConfirmationDialogAfterDelay(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName);
	float GetCurrentGammaSetting();
	void OnSliderChanged(int32_t ProfileSettingId, float SliderValue);
	TArray<class FString> GetKeyBindingConflicts();
	class UGFxObject* GetCurrentGFxList();
	void SetGammaExternally(float Gamma);
	void SetGamepadConfigExternally(int32_t ConfigIndex);
	int32_t GetGamepadConfig();
	void OnKeyBindingCaptured(struct FName KeyName);
	int32_t GetDisplayedResolutionIndexFromOriginalIndex(int32_t OriginalIndex);
	int32_t GetOriginalResolutionIndexFromDisplayedIndex(int32_t DisplayedIndex);
	TArray<struct FName> RemoveUnsupportedResolutionsFromList(TArray<struct FName> OriginalList);
	int32_t GetFullscreenOptionIndex();
	int32_t GetResolutionOptionIndex();
	bool HasResolutionChanged();
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	class UOLProfileSettings* GetOLProfile();
	bool SaveSettingsToProfile();
	bool HasAnyPropertyChanged();
	bool HasPropertyChangedInList(class UGFxObject* OptionsList, TArray<struct FOptionInfo> OptionInfos);
	bool SaveSettingsForList(TArray<struct FOptionInfo> OptionInfos);
	void TabChanged(struct FEventData ev);
	void StoreOptionValuesForList(class UGFxObject* OptionsList, TArray<struct FOptionInfo>& OptionInfos);
	class FString GetOptionValueStringAt(class UGFxObject* OptionsList, int32_t Index);
	float GetOptionValueAt(class UGFxObject* OptionsList, int32_t Index);
	void SetDefaultOptionValuesForList(TArray<struct FOptionInfo>& OptionInfos);
	void FillOptionValuesForList(TArray<struct FOptionInfo>& OptionInfos);
	void FillOptionValuesFromProfile();
	void PopulateControlsOptions();
	void PopulateGraphicsOptions();
	void PopulateGeneralOptions();
	class UGFxObject* GetObjectFromOptionW(struct FOptionInfo CurrentOptionInfo);
	void PopulateTabButtons();
	bool UseGeneralOptionsWithDifficulty();
	void Press_OptionItemButton(int32_t PSID);
	void Press_Reset(struct FEventData ev);
	void Press_Gamma(struct FEventData ev);
	void Press_Back(struct FEventData ev);
	void OnConfirmChanges(bool bOk);
	void RevertToPreviousResolution();
	void OnConfirmResolution(bool bOk);
	void OnDismissKeyBindingConflictDialog(bool bOk);
	void Press_Apply(struct FEventData ev);
	void OnMustRestartAccepted();
	void ExitOptionsScreen();
	bool back();
	void OnViewActivated();
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_LoadGame
// 0x0058 OR 0x0188 (0x0188 - 0x0130)
// 88 OR 392 (392 - 304)
class UOLUIFrontEnd_LoadGame : public UOLUIFrontEnd_Screen
{
public:
	class FString                                      TitleText;                                     // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoadText;                                      // 0x0140 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      DeleteText;                                    // 0x0150 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            SelectedIndex;                                 // 0x0160 (0x0004) [0x0000000000000000]               
	class UGFxClikWidget*                              SaveList;                                      // 0x0164 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x016C (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              LoadButton;                                    // 0x0174 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              DeleteButton;                                  // 0x017C (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bShowCheckpointNames : 1;                      // 0x0184 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_LoadGame");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	struct FName GetCheckpointTag(struct FName CheckpointName);
	class FString GetSaveFileDisplayName(struct FSaveFileInfo SaveFile);
	void SetSelectedIndex(int32_t Index);
	void SaveListChanged(struct FEventData ev);
	void PopulateSaveList();
	void Press_Delete(struct FEventData ev);
	void Press_Load(struct FEventData ev);
	void Press_Back(struct FEventData ev);
	void OnTopMostView(bool optionalBPlayOpenAnimation);
};

// Class OLGame.OLUIFrontEnd_PauseMenu
// 0x009C OR 0x01CC (0x01CC - 0x0130)
// 156 OR 460 (460 - 304)
class UOLUIFrontEnd_PauseMenu : public UOLUIFrontEnd_Screen
{
public:
	class FString                                      ReturnText;                                    // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      OptionsText;                                   // 0x0140 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ExitToMenuText;                                // 0x0150 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      SaveAndExitText;                               // 0x0160 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      SaveText;                                      // 0x0170 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmExitText;                               // 0x0180 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmExitInsaneText;                         // 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConfirmExitTitle;                              // 0x01A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ExitToWindowsText;                             // 0x01B0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxClikWidget*                              ButtonBar;                                     // 0x01C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bHasSaveOption : 1;                            // 0x01C8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bShowingConfirmExitDialog : 1;                 // 0x01C8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_PauseMenu");
		}

		return uClassPointer;
	};

	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void ASShowConfirmExitDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName);
	void OnExitConfirmed(bool bOk);
	void OnExitToMenuButtonPress(struct FEventData ev);
	void OnSaveCompleted(bool bSuccess);
	void OnSaveButtonPress(struct FEventData ev);
	void OnOptionsButtonPress(struct FEventData ev);
	void OnReturnButtonPress(struct FEventData ev);
	void OnButtonClick(struct FEventData ev);
	void PopulateButtons();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_RecordingView
// 0x0034 OR 0x0164 (0x0164 - 0x0130)
// 52 OR 356 (356 - 304)
class UOLUIFrontEnd_RecordingView : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Recording;                                     // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  DescriptionTextArea;                           // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              CloseButton;                                   // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              PreviousButton;                                // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              NextButton;                                    // 0x0158 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bActivatedWithShortcut : 1;                    // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_RecordingView");
		}

		return uClassPointer;
	};

	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void GoAfterLastPage();
	void GoBeforeFirstPage();
	void Press_Close(struct FEventData ev);
	void Press_Back(struct FEventData ev);
	void Press_Next(struct FEventData ev);
	void Press_Previous(struct FEventData ev);
	void OnViewActivated();
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_EvidenceView
// 0x0034 OR 0x0164 (0x0164 - 0x0130)
// 52 OR 356 (356 - 304)
class UOLUIFrontEnd_EvidenceView : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Collectible;                                   // 0x0130 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  ContentsLabel;                                 // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              CloseButton;                                   // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              PreviousButton;                                // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              NextButton;                                    // 0x0158 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bActivatedWithShortcut : 1;                    // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_EvidenceView");
		}

		return uClassPointer;
	};

	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void GoAfterLastPage();
	void GoBeforeFirstPage();
	void Press_Close(struct FEventData ev);
	void Press_Back(struct FEventData ev);
	void Press_Next(struct FEventData ev);
	void Press_Previous(struct FEventData ev);
	void OnViewActivated();
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_GammaScreen
// 0x0040 OR 0x0170 (0x0170 - 0x0130)
// 64 OR 368 (368 - 304)
class UOLUIFrontEnd_GammaScreen : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                     // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      GammaLabelText;                                // 0x0138 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxClikWidget*                              AcceptButtonCentred;                           // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              AcceptButton;                                  // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x0158 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              GammaSlider;                                   // 0x0160 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  GammaLabel;                                    // 0x0168 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_GammaScreen");
		}

		return uClassPointer;
	};

	float GetCurrentGammaSetting();
	bool IsGammaInitialized();
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	void Change_Slider(struct FEventData ev);
	void Pop();
	void OnViewDeactivated();
	bool back();
	void Press_Back(struct FEventData ev);
	void OnAccept();
	void Press_Accept(struct FEventData ev);
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_GamepadScreen
// 0x001C OR 0x014C (0x014C - 0x0130)
// 28 OR 332 (332 - 304)
class UOLUIFrontEnd_GamepadScreen : public UOLUIFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              TabButtons;                                    // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              AcceptButton;                                  // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SelectedTabIndex;                              // 0x0148 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_GamepadScreen");
		}

		return uClassPointer;
	};

	void ASUpdateGamepadLabels(int32_t ConfigType);
	void TabChanged(struct FEventData ev);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void PopulateTabButtons();
	void Pop();
	void OnViewDeactivated();
	void Press_Back(struct FEventData ev);
	void Press_Accept(struct FEventData ev);
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_Options_Console
// 0x001B OR 0x0350 (0x0350 - 0x0335)
// 27 OR 848 (848 - 821)
class UOLUIFrontEnd_Options_Console : public UOLUIFrontEnd_Options
{
public:
	class UGFxObject*                                  SquareLabel;                                   // 0x0338 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      SettingsText;                                  // 0x0340 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_Options_Console");
		}

		return uClassPointer;
	};

	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	int32_t GetFullscreenOptionIndex();
	int32_t GetResolutionOptionIndex();
	bool HasResolutionChanged();
	void TabChanged(struct FEventData ev);
	void SetGammaExternally(float Gamma);
	float GetCurrentGammaSetting();
	void ResetPS4Options();
	void Press_Reset(struct FEventData ev);
	void FillOptionValuesFromProfile();
	void PopulateControlsOptions();
	void PopulateTabButtons();
	void Press_Apply(struct FEventData ev);
	void Press_OptionItemButton(int32_t PSID);
	void Press_Gamma(struct FEventData ev);
	bool back();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewActivated();
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_RecordingView_Console
// 0x0014 OR 0x0144 (0x0144 - 0x0130)
// 20 OR 324 (324 - 304)
class UOLUIFrontEnd_RecordingView_Console : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Recording;                                     // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  DescriptionTextArea;                           // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bActivatedWithShortcut : 1;                    // 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_RecordingView_Console");
		}

		return uClassPointer;
	};

	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	int32_t GetNumPages();
	int32_t GetCurrentPage();
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void OnViewActivated();
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_EvidenceView_Console
// 0x0014 OR 0x0144 (0x0144 - 0x0130)
// 20 OR 324 (324 - 304)
class UOLUIFrontEnd_EvidenceView_Console : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Collectible;                                   // 0x0130 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  ContentsLabel;                                 // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bActivatedWithShortcut : 1;                    // 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_EvidenceView_Console");
		}

		return uClassPointer;
	};

	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	int32_t GetNumPages();
	int32_t GetCurrentPage();
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	void OnViewActivated();
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_GammaScreen_Console
// 0x0040 OR 0x0170 (0x0170 - 0x0130)
// 64 OR 368 (368 - 304)
class UOLUIFrontEnd_GammaScreen_Console : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                     // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      GammaLabelText;                                // 0x0138 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGFxClikWidget*                              AcceptButtonCentred;                           // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              AcceptButton;                                  // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              BackButton;                                    // 0x0158 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxClikWidget*                              GammaSlider;                                   // 0x0160 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  GammaLabel;                                    // 0x0168 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_GammaScreen_Console");
		}

		return uClassPointer;
	};

	void ASDisableBackButton(bool bDisable);
	float GetCurrentGammaSetting();
	bool IsGammaInitialized();
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	void Change_Slider(struct FEventData ev);
	void Pop();
	void OnViewDeactivated();
	bool back();
	void Press_Back(struct FEventData ev);
	void OnAccept();
	void Press_Accept(struct FEventData ev);
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIFrontEnd_GamepadScreen_Console
// 0x000C OR 0x013C (0x013C - 0x0130)
// 12 OR 316 (316 - 304)
class UOLUIFrontEnd_GamepadScreen_Console : public UOLUIFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              TabButtons;                                    // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SelectedTabIndex;                              // 0x0138 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIFrontEnd_GamepadScreen_Console");
		}

		return uClassPointer;
	};

	void ASUpdateGamepadLabels(int32_t ConfigType);
	void TabChanged(struct FEventData ev);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	void PopulateTabButtons();
	void Pop();
	void OnViewDeactivated();
	bool back();
	void OnTopMostView(bool optionalBPlayOpenAnimation);
	void OnViewLoaded();
};

// Class OLGame.OLUIPopupScreen
// 0x0000 OR 0x01E4 (0x01E4 - 0x01E4)
// 0 OR 484 (484 - 484)
class UOLUIPopupScreen : public UOLGFxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OLGame.OLUIPopupScreen");
		}

		return uClassPointer;
	};

	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	void OnClose();
	bool Start(bool optionalStartPaused);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
