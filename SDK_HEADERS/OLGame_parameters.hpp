/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OLGame_parameters.hpp
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
# Parameters
# ========================================================================================= #
*/

// Function OLGame.OLBashableObject.OnToggle
// [0x00020002] 
struct AOLBashableObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBashableObject.ClearBreakTimer
// [0x00020002] 
struct AOLBashableObject_execClearBreakTimer_Params
{
};

// Function OLGame.OLBashableObject.TriggerBreakTimer
// [0x00020002] 
struct AOLBashableObject_execTriggerBreakTimer_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBashableObject.Break
// [0x00020002] 
struct AOLBashableObject_execBreak_Params
{
};

// Function OLGame.OLCamcorderHud.UpdateRecordingTime
// [0x00020002] 
struct UOLCamcorderHud_execUpdateRecordingTime_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            TotalSeconds;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
	// class FString                                      Hours;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Minutes;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Seconds;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      HundredthsOfASecond;                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      DisplayedTime;                                    		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderHud.WidgetInitialized
// [0x00020802] 
struct UOLCamcorderHud_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderHud.SetVisible
// [0x00020802] 
struct UOLCamcorderHud_eventSetVisible_Params
{
	uint32_t                                           bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCameraActor.GetCameraView
// [0x00420102] 
struct AOLCameraActor_execGetCameraView_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTPOV                                       OutPOV;                                           		// 0x0004 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLCameraActor.NativeGetCameraView
// [0x00420400] 
struct AOLCameraActor_execNativeGetCameraView_Params
{
	struct FTPOV                                       OutPOV;                                           		// 0x0000 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLPlayerController.UnlockAchievement
// [0x00020802] 
struct AOLPlayerController_eventUnlockAchievement_Params
{
	uint8_t                                            achievement;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.NotifyDifficultyChanged
// [0x00020002] 
struct AOLPlayerController_execNotifyDifficultyChanged_Params
{
	// class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.UpdateDifficultyBasedValues
// [0x00020002] 
struct AOLPlayerController_execUpdateDifficultyBasedValues_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.CheckForProfileUpdate
// [0x00020802] 
struct AOLPlayerController_eventCheckForProfileUpdate_Params
{
};

// Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings
// [0x00020802] 
struct AOLPlayerController_eventUpdateLocalCacheOfProfileSettings_Params
{
	class UOLProfileSettings*                          EffectiveProfileSettings;                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// float                                              FloatValue;                                       		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            IntValue;                                         		// 0x000C (0x0004) [0x0000000000000000]               
	// class UOLEngine*                                   TheEngine;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.ClientSaveAllPlayerData
// [0xFFFF0000010241C2] 
struct AOLPlayerController_execClientSaveAllPlayerData_Params
{
	uint32_t                                           bShouldForce : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSkipCacheUpdate : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class ULocalPlayer*                                LP;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.OnProfileWriteComplete
// [0x00020002] 
struct AOLPlayerController_execOnProfileWriteComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.ClearSaveProfileDelegate
// [0x00020002] 
struct AOLPlayerController_execClearSaveProfileDelegate_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0014 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.SaveProfile
// [0x00040803] 
struct AOLPlayerController_eventSaveProfile_Params
{
	// int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.UnregisterPlayerDataStores
// [0x00020102] 
struct AOLPlayerController_execUnregisterPlayerDataStores_Params
{
	// class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores
// [0x00080102] 
struct AOLPlayerController_execRegisterCustomPlayerDataStores_Params
{
	// class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints
// [0x00020400] 
struct AOLPlayerController_execShippingCheat_GiveAllCheckpoints_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.ClearAllProgress
// [0x00020400] 
struct AOLPlayerController_execClearAllProgress_Params
{
};

// Function OLGame.OLPlayerController.SaveBeforeQuitting
// [0x00020400] 
struct AOLPlayerController_execSaveBeforeQuitting_Params
{
};

// Function OLGame.OLPlayerController.ClientCommitMapChange
// [0xFFFF0000010209C2] 
struct AOLPlayerController_eventClientCommitMapChange_Params
{
};

// Function OLGame.OLPlayerController.StartNewGameAtCheckpoint
// [0x00020802] 
struct AOLPlayerController_eventStartNewGameAtCheckpoint_Params
{
	class FString                                      CheckpointStr;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bSaveToDisk : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AOLCheckpoint*                               CheckCP;                                          		// 0x0014 (0x0008) [0x0000000000000000]               
	// class AOLCheckpoint*                               startCP;                                          		// 0x001C (0x0008) [0x0000000000000000]               
	// class AOLHero*                                     Hero;                                             		// 0x0024 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     CurrentGame;                                      		// 0x002C (0x0008) [0x0000000000000000]               
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.ApplyDeprecatedCheckpointRecord
// [0x00C20002] 
struct AOLPlayerController_execApplyDeprecatedCheckpointRecord_Params
{
	struct FDeprecatedCheckpointRecord                 OldRecord;                                        		// 0x0000 (0x0084) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class AOLGame*                                     CurrentGame;                                      		// 0x0084 (0x0008) [0x0000000000000000]               
	// struct AOLPlayerController_FCheckpointRecord       NewRecord;                                        		// 0x008C (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.ApplyCheckpointRecord
// [0x00420002] 
struct AOLPlayerController_execApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x0090) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.CreateCheckpointRecord
// [0x00420002] 
struct AOLPlayerController_execCreateCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x0090) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeApplyCheckpointRecord
// [0x00420400] 
struct AOLPlayerController_execNativeApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x0090) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeCreateCheckpointRecord
// [0x00420400] 
struct AOLPlayerController_execNativeCreateCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x0090) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.SavePersistentState
// [0x00020400] 
struct AOLPlayerController_execSavePersistentState_Params
{
};

// Function OLGame.OLPlayerController.OnOverrideAIMusic
// [0x00020002] 
struct AOLPlayerController_execOnOverrideAIMusic_Params
{
	class UOLSeqAct_OverrideAIMusic*                   Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.StopAllSounds
// [0x00020400] 
struct AOLPlayerController_execStopAllSounds_Params
{
};

// Function OLGame.OLPlayerController.DisplayDebug
// [0x00420102] 
struct AOLPlayerController_execDisplayDebug_Params
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class AOLGame*                                     CurrentGame;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.DrawHUD
// [0x00020002] 
struct AOLPlayerController_execDrawHUD_Params
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AOLHUD*                                      OLHUD;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.FullScreenOverlayChanged
// [0x00020802] 
struct AOLPlayerController_eventFullScreenOverlayChanged_Params
{
};

// Function OLGame.OLPlayerController.ForcePause
// [0x00020802] 
struct AOLPlayerController_eventForcePause_Params
{
	uint32_t                                           bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.ClientSetHUD
// [0xFFFF0000010201C2] 
struct AOLPlayerController_execClientSetHUD_Params
{
	class UClass*                                      newHUDType;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.OnSetMesh
// [0x00020802] 
struct AOLPlayerController_eventOnSetMesh_Params
{
	class USeqAct_SetMesh*                             Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.ClientSetCameraFade
// [0xFFFF0000010249C2] 
struct AOLPlayerController_eventClientSetCameraFade_Params
{
	uint32_t                                           _enableFading : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FColor                                      _FadeColor;                                       		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector2D                                   _FadeAlpha;                                       		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _FadeTime;                                        		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           _fadeAudio : 1;                                   		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLPlayerController.SetCinematicMode
// [0x00020002] 
struct AOLPlayerController_execSetCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInCinematicMode : 1;                             		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bHidePlayer : 1;                                  		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsHUD : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsMovement : 1;                             		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsTurning : 1;                              		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsButtons : 1;                              		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.GetPlayerViewPoint
// [0x00420902] 
struct AOLPlayerController_eventGetPlayerViewPoint_Params
{
	struct FVector                                     POVLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    POVRotation;                                      		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLPlayerController.GetFOVAngle
// [0x00020802] 
struct AOLPlayerController_eventGetFOVAngle_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class ACameraActor*                                CamActor;                                         		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.SpawnCamera
// [0x00020002] 
struct AOLPlayerController_execSpawnCamera_Params
{
	// class AActor*                                      OldViewTarget;                                    		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.SetCameraMode
// [0x00020002] 
struct AOLPlayerController_execSetCameraMode_Params
{
	struct FName                                       NewCamMode;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.UsingFirstPersonCamera
// [0x00020002] 
struct AOLPlayerController_execUsingFirstPersonCamera_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.SetBehindView
// [0x00020002] 
struct AOLPlayerController_execSetBehindView_Params
{
	uint32_t                                           bNewBehindView : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.BehindView
// [0x00020202] 
struct AOLPlayerController_execBehindView_Params
{
};

// Function OLGame.OLPlayerController.GammaCalibration
// [0x00020202] 
struct AOLPlayerController_execGammaCalibration_Params
{
};

// Function OLGame.OLPlayerController.PressedJump
// [0x00020202] 
struct AOLPlayerController_execPressedJump_Params
{
};

// Function OLGame.OLPlayerController.PressedReloadBatteries
// [0x00020202] 
struct AOLPlayerController_execPressedReloadBatteries_Params
{
};

// Function OLGame.OLPlayerController.StopZoom
// [0x00020302] 
struct AOLPlayerController_execStopZoom_Params
{
};

// Function OLGame.OLPlayerController.StartZoomOut
// [0x00020302] 
struct AOLPlayerController_execStartZoomOut_Params
{
};

// Function OLGame.OLPlayerController.StartZoomIn
// [0x00020302] 
struct AOLPlayerController_execStartZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ZoomOut
// [0x00020202] 
struct AOLPlayerController_execZoomOut_Params
{
};

// Function OLGame.OLPlayerController.ZoomIn
// [0x00020202] 
struct AOLPlayerController_execZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ToggleCamcorder
// [0x00020202] 
struct AOLPlayerController_execToggleCamcorder_Params
{
};

// Function OLGame.OLPlayerController.ToggleNightVision
// [0x00020202] 
struct AOLPlayerController_execToggleNightVision_Params
{
};

// Function OLGame.OLPlayerController.ReleasedUseButton
// [0x00020202] 
struct AOLPlayerController_execReleasedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PressedUseButton
// [0x00020202] 
struct AOLPlayerController_execPressedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PerformedUseAction
// [0x00020102] 
struct AOLPlayerController_execPerformedUseAction_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.SetPlayerFoundWhileHidden
// [0x00020400] 
struct AOLPlayerController_execSetPlayerFoundWhileHidden_Params
{
	class AOLEnemyPawn*                                SearchingEnemy;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.IsPlayerFindableWhileHidden
// [0x00020400] 
struct AOLPlayerController_execIsPlayerFindableWhileHidden_Params
{
	class AOLEnemyPawn*                                SearchingEnemy;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.PlayerDied
// [0x00020002] 
struct AOLPlayerController_execPlayerDied_Params
{
};

// Function OLGame.OLPlayerController.Destroyed
// [0x00020802] 
struct AOLPlayerController_eventDestroyed_Params
{
};

// Function OLGame.OLPlayerController.ClientRestart
// [0xFFFF0000010201C2] 
struct AOLPlayerController_execClientRestart_Params
{
	class APawn*                                       NewPawn;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.Reset
// [0x00020002] 
struct AOLPlayerController_execReset_Params
{
};

// Function OLGame.OLPlayerController.UnPossess
// [0x00020802] 
struct AOLPlayerController_eventUnPossess_Params
{
};

// Function OLGame.OLPlayerController.Possess
// [0x00020802] 
struct AOLPlayerController_eventPossess_Params
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.PostBeginPlay
// [0x00020902] 
struct AOLPlayerController_eventPostBeginPlay_Params
{
};

// Function OLGame.OLPlayerController.HideLoadingOverlay
// [0x00020400] 
struct AOLPlayerController_execHideLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.ShowLoadingOverlay
// [0x00020400] 
struct AOLPlayerController_execShowLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.SetVolume
// [0x00020400] 
struct AOLPlayerController_execSetVolume_Params
{
	float                                              VolumeLevel;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.SetGamma
// [0x00020400] 
struct AOLPlayerController_execSetGamma_Params
{
	float                                              GammaValue;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.GetGamma
// [0x00020400] 
struct AOLPlayerController_execGetGamma_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.NativePlayerMove
// [0x00020400] 
struct AOLPlayerController_execNativePlayerMove_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.SetLanguage
// [0x00020600] 
struct UOLCheatManager_execSetLanguage_Params
{
	class FString                                      LanguageCode;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.ReloadSoundBanks
// [0x00020600] 
struct UOLCheatManager_execReloadSoundBanks_Params
{
	uint32_t                                           bDLC : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.ProcessCheatInput
// [0x00020802] 
struct UOLCheatManager_eventProcessCheatInput_Params
{
	class UOLPlayerInput*                              InputMgr;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheatManager.IsViewModeUnlit
// [0x00020400] 
struct UOLCheatManager_execIsViewModeUnlit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheatManager.SetFinishedGame
// [0x00020202] 
struct UOLCheatManager_execSetFinishedGame_Params
{
	uint32_t                                           hasFinishedGame : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           hasFinishedDLC : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.OutlastPause
// [0x00020202] 
struct UOLCheatManager_execOutlastPause_Params
{
};

// Function OLGame.OLCheatManager.ResetGS
// [0x00020600] 
struct UOLCheatManager_execResetGS_Params
{
};

// Function OLGame.OLCheatManager.ActivateGS
// [0x00020600] 
struct UOLCheatManager_execActivateGS_Params
{
	struct FName                                       gsName;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.DumpGS
// [0x00020202] 
struct UOLCheatManager_execDumpGS_Params
{
};

// Function OLGame.OLCheatManager.DebugGameState
// [0x00020202] 
struct UOLCheatManager_execDebugGameState_Params
{
};

// Function OLGame.OLCheatManager.SuppressAllMessages
// [0x00020202] 
struct UOLCheatManager_execSuppressAllMessages_Params
{
};

// Function OLGame.OLCheatManager.DrawDebug
// [0x00020400] 
struct UOLCheatManager_execDrawDebug_Params
{
};

// Function OLGame.OLCheatManager.ToggleMute
// [0x00020600] 
struct UOLCheatManager_execToggleMute_Params
{
};

// Function OLGame.OLCheatManager.InflictDamage
// [0x00024202] 
struct UOLCheatManager_execInflictDamage_Params
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.ResetWorldState
// [0x00020600] 
struct UOLCheatManager_execResetWorldState_Params
{
};

// Function OLGame.OLCheatManager.ResetPushables
// [0x00020600] 
struct UOLCheatManager_execResetPushables_Params
{
};

// Function OLGame.OLCheatManager.ResetDoors
// [0x00020600] 
struct UOLCheatManager_execResetDoors_Params
{
};

// Function OLGame.OLCheatManager.SetGamma
// [0x00020600] 
struct UOLCheatManager_execSetGamma_Params
{
	float                                              newGamma;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.DemoMode
// [0x00020202] 
struct UOLCheatManager_execDemoMode_Params
{
	// class AOLGame*                                     OLGame;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.LoadGame
// [0x00020202] 
struct UOLCheatManager_execLoadGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.SaveGame
// [0x00020202] 
struct UOLCheatManager_execSaveGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.GiveItem
// [0x00020600] 
struct UOLCheatManager_execGiveItem_Params
{
	class FString                                      ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.ApplyCP
// [0x00020600] 
struct UOLCheatManager_execApplyCP_Params
{
	class FString                                      CPName;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.cplist
// [0x00020600] 
struct UOLCheatManager_execcplist_Params
{
};

// Function OLGame.OLCheatManager.cp
// [0x00020202] 
struct UOLCheatManager_execcp_Params
{
	class FString                                      CPName;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.Checkpoint
// [0x00020202] 
struct UOLCheatManager_execCheckpoint_Params
{
	class FString                                      CPName;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.KillFade
// [0x00020202] 
struct UOLCheatManager_execKillFade_Params
{
};

// Function OLGame.OLCheatManager.ToggleUnlimitedBatteries
// [0x00020202] 
struct UOLCheatManager_execToggleUnlimitedBatteries_Params
{
};

// Function OLGame.OLCheatManager.RechargeNightVision
// [0x00020202] 
struct UOLCheatManager_execRechargeNightVision_Params
{
	// int32_t                                            nbBatAdded;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.Ghost
// [0x00020202] 
struct UOLCheatManager_execGhost_Params
{
};

// Function OLGame.OLCheatManager.GhostPawn
// [0x00020400] 
struct UOLCheatManager_execGhostPawn_Params
{
	uint32_t                                           ghosting : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.FasterGameSpeed
// [0x00020202] 
struct UOLCheatManager_execFasterGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SlowerGameSpeed
// [0x00020202] 
struct UOLCheatManager_execSlowerGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.NormalGameSpeed
// [0x00020202] 
struct UOLCheatManager_execNormalGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.UpdateGameSpeed
// [0x00020002] 
struct UOLCheatManager_execUpdateGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SingleFrame
// [0x00020600] 
struct UOLCheatManager_execSingleFrame_Params
{
};

// Function OLGame.OLCheatManager.TeleportToFreeCam
// [0x00020202] 
struct UOLCheatManager_execTeleportToFreeCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFixedCam
// [0x00020202] 
struct UOLCheatManager_execToggleFixedCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCamNoPause
// [0x00020202] 
struct UOLCheatManager_execToggleFreeCamNoPause_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCam
// [0x00020202] 
struct UOLCheatManager_execToggleFreeCam_Params
{
};

// Function OLGame.OLCheatManager.AutoSpike
// [0x00024202] 
struct UOLCheatManager_execAutoSpike_Params
{
	float                                              Spike;                                            		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Delay;                                            		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.Spike
// [0x00024202] 
struct UOLCheatManager_execSpike_Params
{
	float                                              Spike;                                            		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.BadFPS
// [0x00024202] 
struct UOLCheatManager_execBadFPS_Params
{
	float                                              slowdown;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.DebugAIPositions
// [0x00020202] 
struct UOLCheatManager_execDebugAIPositions_Params
{
};

// Function OLGame.OLCheatManager.DebugAI
// [0x00020202] 
struct UOLCheatManager_execDebugAI_Params
{
};

// Function OLGame.OLCheatManager.ShowHeroDebug
// [0x00020202] 
struct UOLCheatManager_execShowHeroDebug_Params
{
};

// Function OLGame.OLCheatManager.ShowPaths
// [0x00020202] 
struct UOLCheatManager_execShowPaths_Params
{
};

// Function OLGame.OLCheatManager.ShowStatLevels
// [0x00020202] 
struct UOLCheatManager_execShowStatLevels_Params
{
};

// Function OLGame.OLCheatManager.DebugWaitPoints
// [0x00020202] 
struct UOLCheatManager_execDebugWaitPoints_Params
{
};

// Function OLGame.OLCheatManager.DebugTrajectory
// [0x00020202] 
struct UOLCheatManager_execDebugTrajectory_Params
{
};

// Function OLGame.OLCheatManager.DebugCamera
// [0x00020202] 
struct UOLCheatManager_execDebugCamera_Params
{
};

// Function OLGame.OLCheatManager.DebugSoundEnvironment
// [0x00024600] 
struct UOLCheatManager_execDebugSoundEnvironment_Params
{
	class FString                                      Filter;                                           		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugGameplay
// [0x00020600] 
struct UOLCheatManager_execDebugGameplay_Params
{
};

// Function OLGame.OLCheatManager.SaveAllCheckpoints
// [0x00020600] 
struct UOLCheatManager_execSaveAllCheckpoints_Params
{
};

// Function OLGame.OLCheatManager.DeleteAllSaves
// [0x00020600] 
struct UOLCheatManager_execDeleteAllSaves_Params
{
};

// Function OLGame.OLCheatManager.KillAll
// [0x00020202] 
struct UOLCheatManager_execKillAll_Params
{
	class UClass*                                      aClass;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.ToggleCheats
// [0x00020202] 
struct UOLCheatManager_execToggleCheats_Params
{
};

// Function OLGame.OLCheatManager.GetCheatManager
// [0x00022400] 
struct UOLCheatManager_execGetCheatManager_Params
{
	class UOLCheatManager*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheatManager.AddDebugTrajectoryPoint
// [0x00020400] 
struct UOLCheatManager_execAddDebugTrajectoryPoint_Params
{
	struct FDebugTrajectoryPoint                       Point;                                            		// 0x0000 (0x0018) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheckpoint.OnToggle
// [0x00020102] 
struct AOLCheckpoint_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AOLGame*                                     CurrentGame;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheckpoint.SetEnabled
// [0x00020002] 
struct AOLCheckpoint_execSetEnabled_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AOLGame*                                     CurrentGame;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheckpoint.ResetCheckpointDeaths
// [0x00020400] 
struct AOLCheckpoint_execResetCheckpointDeaths_Params
{
};

// Function OLGame.OLCheckpoint.OnPlayerSpawn
// [0x00020400] 
struct AOLCheckpoint_execOnPlayerSpawn_Params
{
};

// Function OLGame.OLCheckpointList.Script_IsUnreached
// [0x00422400] 
struct AOLCheckpointList_execScript_IsUnreached_Params
{
	struct FName                                       TestCheckpoint;                                   		// 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FName                                       CurrentCheckpoint;                                		// 0x0008 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheckpointSave.CheckpointIsEmpty
// [0x00020803] 
struct UOLCheckpointSave_eventCheckpointIsEmpty_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLConsole.InputKey
// [0x00024002] 
struct UOLConsole_execInputKey_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Event;                                            		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLCheatManager*                             CheatMgr;                                         		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLConsole.AddCustomCommandsToAutoComplete
// [0x00020400] 
struct UOLConsole_execAddCustomCommandsToAutoComplete_Params
{
};

// Function OLGame.OLDarknessVolume.OnToggle
// [0x00020102] 
struct AOLDarknessVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDLCManager.FindAndInstallDLC
// [0x00020400] 
struct UOLDLCManager_execFindAndInstallDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.BreakDoor
// [0x00020802] 
struct AOLDoor_eventBreakDoor_Params
{
	class AOLPawn*                                     Breaker;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bReversed : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLDoor.BashDoor
// [0x00020802] 
struct AOLDoor_eventBashDoor_Params
{
	uint32_t                                           bReversed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FName                                       BreakAnim;                                        		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLDoor.ShouldBreak
// [0x00020802] 
struct AOLDoor_eventShouldBreak_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.OnDestroy
// [0x00020102] 
struct AOLDoor_execOnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoor.SoftDestroy
// [0x00020400] 
struct AOLDoor_execSoftDestroy_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToWait
// [0x00020400] 
struct AOLDoor_execNotifyHandlesToWait_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToRepath
// [0x00020400] 
struct AOLDoor_execNotifyHandlesToRepath_Params
{
};

// Function OLGame.OLDoor.GetOpenAngle
// [0x00020400] 
struct AOLDoor_execGetOpenAngle_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.TriggerEvent
// [0x00020400] 
struct AOLDoor_execTriggerEvent_Params
{
	uint8_t                                            EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class AOLPawn*                                     Triggerer;                                        		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoor.TriggerBreakDoorCameraShake
// [0x00020400] 
struct AOLDoor_execTriggerBreakDoorCameraShake_Params
{
};

// Function OLGame.OLDoor.StopShaking
// [0x00020400] 
struct AOLDoor_execStopShaking_Params
{
};

// Function OLGame.OLDoor.StartShaking
// [0x00024400] 
struct AOLDoor_execStartShaking_Params
{
	struct FDoorShakeData                              ShakeParams;                                      		// 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSwitchToBreakingMesh : 1;                        		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bReversed : 1;                                    		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bFromAI : 1;                                      		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLDoor.IsBroken
// [0x00020002] 
struct AOLDoor_execIsBroken_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.UnregisterNavmeshObstacle
// [0x00020401] 
struct AOLDoor_execUnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLDoor.RegisterNavMeshObstacle
// [0x00020401] 
struct AOLDoor_execRegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLDoor.ScriptGetCenterLocation
// [0x00020400] 
struct AOLDoor_execScriptGetCenterLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLElectrifiedVolume.Touch
// [0x00020902] 
struct AOLElectrifiedVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class AOLHero*                                     Hero;                                             		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLElectrifiedVolume.OnToggle
// [0x00020102] 
struct AOLElectrifiedVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLElectrifiedWaterVolume.OnToggle
// [0x00020102] 
struct AOLElectrifiedWaterVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEngine.UpdateProfileKeyBindingsFromSystem
// [0x00020400] 
struct UOLEngine_execUpdateProfileKeyBindingsFromSystem_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.UpdateProfileFromSystemSettings
// [0x00020400] 
struct UOLEngine_execUpdateProfileFromSystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.ApplyKeyBindings
// [0x00020400] 
struct UOLEngine_execApplyKeyBindings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.ApplySystemSettings
// [0x00020400] 
struct UOLEngine_execApplySystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.LoadMostRecentSaveFile
// [0x00020400] 
struct UOLEngine_execLoadMostRecentSaveFile_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.LoadCurrentSaveFile
// [0x00020400] 
struct UOLEngine_execLoadCurrentSaveFile_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.RefreshSaveFiles
// [0x00020400] 
struct UOLEngine_execRefreshSaveFiles_Params
{
};

// Function OLGame.OLEngine.DeleteSaveFile
// [0x00020400] 
struct UOLEngine_execDeleteSaveFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLEngine.LoadSaveFile
// [0x00020400] 
struct UOLEngine_execLoadSaveFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.DebugLoadGame
// [0x00020400] 
struct UOLEngine_execDebugLoadGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLEngine.DebugSaveGame
// [0x00020400] 
struct UOLEngine_execDebugSaveGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLEngine.HasValidSaveGame
// [0x00020400] 
struct UOLEngine_execHasValidSaveGame_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.SaveAllCheckpoints
// [0x00020400] 
struct UOLEngine_execSaveAllCheckpoints_Params
{
};

// Function OLGame.OLEngine.SaveCheckpointImmediate
// [0x00020400] 
struct UOLEngine_execSaveCheckpointImmediate_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEngine.SaveCheckpoint
// [0x00020400] 
struct UOLEngine_execSaveCheckpoint_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSaveToDisk : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEngine.StartCurrentCheckpoint
// [0x00020400] 
struct UOLEngine_execStartCurrentCheckpoint_Params
{
};

// Function OLGame.OLEngine.SelectAndLoadGame
// [0x00020002] 
struct UOLEngine_execSelectAndLoadGame_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLEngine.NativeSelectAndLoadGame
// [0x00020400] 
struct UOLEngine_execNativeSelectAndLoadGame_Params
{
};

// Function OLGame.OLEngine.SelectSaveLocation
// [0x00020002] 
struct UOLEngine_execSelectSaveLocation_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLEngine.NativeSelectSaveLocation
// [0x00020400] 
struct UOLEngine_execNativeSelectSaveLocation_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLEngine.FinishedSaveDataDialog
// [0x00020802] 
struct UOLEngine_eventFinishedSaveDataDialog_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEngine.SaveDataDialogDoneCallback
// [0x00120000] 
struct UOLEngine_execSaveDataDialogDoneCallback_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEngine.UsingFixedSaveLocation
// [0x00020400] 
struct UOLEngine_execUsingFixedSaveLocation_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.TryStartDLCGame
// [0x00020400] 
struct UOLEngine_execTryStartDLCGame_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.ShouldShowNewDLCGame
// [0x00020400] 
struct UOLEngine_execShouldShowNewDLCGame_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.RefreshDLC
// [0x00020400] 
struct UOLEngine_execRefreshDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.CheckReloadForDLC
// [0x00020400] 
struct UOLEngine_execCheckReloadForDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.RestartPlayer
// [0x00020802] 
struct UOLEngine_eventRestartPlayer_Params
{
	class AOLPlayerController*                         OLPC;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AWorldInfo*                                  WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     CurrentGame;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLFloorMaterialVolume.OnToggle
// [0x00020102] 
struct AOLFloorMaterialVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFXManager.SetFXForEnemyPawn
// [0x00020400] 
struct UOLFXManager_execSetFXForEnemyPawn_Params
{
	class AOLEnemyPawn*                                EnemyPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFXManager.DeactivateNightVisionEffect
// [0x00020400] 
struct UOLFXManager_execDeactivateNightVisionEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateCamcorderEffect
// [0x00020400] 
struct UOLFXManager_execActivateCamcorderEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateNightVisionEffect
// [0x00020400] 
struct UOLFXManager_execActivateNightVisionEffect_Params
{
	uint32_t                                           bPowered : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLFXManager.SetPPSFromScript
// [0x00020400] 
struct UOLFXManager_execSetPPSFromScript_Params
{
	uint8_t                                            newPPS;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFXManager.GetFXManager
// [0x00022400] 
struct UOLFXManager_execGetFXManager_Params
{
	class UOLFXManager*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.ClearPause
// [0x00020802] 
struct AOLGame_eventClearPause_Params
{
};

// Function OLGame.OLGame.SetPause
// [0x00024002] 
struct AOLGame_execSetPause_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             CanUnpauseDelegate;                               		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bReturn : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLGame.HandleUnpaused
// [0x00020400] 
struct AOLGame_execHandleUnpaused_Params
{
};

// Function OLGame.OLGame.HandlePaused
// [0x00020400] 
struct AOLGame_execHandlePaused_Params
{
};

// Function OLGame.OLGame.SetGameSpeed
// [0x00020002] 
struct AOLGame_execSetGameSpeed_Params
{
	float                                              T;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGame.TravelToStartupMap
// [0x00020802] 
struct AOLGame_eventTravelToStartupMap_Params
{
};

// Function OLGame.OLGame.RestartPlayer
// [0x00020002] 
struct AOLGame_execRestartPlayer_Params
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]               
	// TArray<class USequenceObject*>                     Events;                                           		// 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class USeqEvent_PlayerSpawned*                     SpawnedEvent;                                     		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGame.UpdateGameType
// [0x00020400] 
struct AOLGame_execUpdateGameType_Params
{
};

// Function OLGame.OLGame.OnPlayerSpawned
// [0x00020802] 
struct AOLGame_eventOnPlayerSpawned_Params
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ANavigationPoint*                            StartPoint;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AOLCheckpoint*                               Checkpoint;                                       		// 0x0010 (0x0008) [0x0000000000000000]               
	// class AOLEnemyPawn*                                EnemyPawn;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGame.FindPlayerStart
// [0x00024002] 
struct AOLGame_execFindPlayerStart_Params
{
	class AController*                                 Player;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InTeam;                                           		// 0x0008 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      IncomingName;                                     		// 0x000C (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class ANavigationPoint*                            ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLCheckpoint*                               Checkpoint;                                       		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGame.MatchCheckpoint
// [0x00020400] 
struct AOLGame_execMatchCheckpoint_Params
{
	class FString                                      PortalName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class AOLCheckpoint*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.AllowCheats
// [0x00020002] 
struct AOLGame_execAllowCheats_Params
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.IsDLCInstalled
// [0x00022400] 
struct AOLGame_execIsDLCInstalled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.IsPlayingDLC
// [0x00022400] 
struct AOLGame_execIsPlayingDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.IsDemo
// [0x00022400] 
struct AOLGame_execIsDemo_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.SetGameType
// [0x00022802] 
struct AOLGame_eventSetGameType_Params
{
	class FString                                      MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Options;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Portal;                                           		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGameplayMarker.OnToggle
// [0x00020102] 
struct AOLGameplayMarker_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLScareMoment.OnToggle
// [0x00020102] 
struct AOLScareMoment_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLScareMoment.StopScare
// [0x00020802] 
struct AOLScareMoment_eventStopScare_Params
{
};

// Function OLGame.OLScareMoment.StartScare
// [0x00020802] 
struct AOLScareMoment_eventStartScare_Params
{
};

// Function OLGame.OLAIVisionObstructionVolume.OnToggle
// [0x00020102] 
struct AOLAIVisionObstructionVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLSqueezeVolume.PostBeginPlay
// [0x00020902] 
struct AOLSqueezeVolume_eventPostBeginPlay_Params
{
};

// Function OLGame.OLGameStateList.OnPlayerDeath
// [0x00022400] 
struct AOLGameStateList_execOnPlayerDeath_Params
{
};

// Function OLGame.OLGameStateList.ResetAllGameState
// [0x00022400] 
struct AOLGameStateList_execResetAllGameState_Params
{
};

// Function OLGame.OLGameStateList.DumpGameState
// [0x00022400] 
struct AOLGameStateList_execDumpGameState_Params
{
};

// Function OLGame.OLGameViewportClient.DrawTransition
// [0x00020000] 
struct UOLGameViewportClient_execDrawTransition_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHUD.GamepadConfigChanged
// [0x00020002] 
struct AOLHUD_execGamepadConfigChanged_Params
{
};

// Function OLGame.OLHUD.OnLostFocusPause
// [0x00020802] 
struct AOLHUD_eventOnLostFocusPause_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                           bGameIsPaused : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLHUD.ShowHUDMessages
// [0x00020002] 
struct AOLHUD_execShowHUDMessages_Params
{
};

// Function OLGame.OLHUD.HideHUDMessages
// [0x00020002] 
struct AOLHUD_execHideHUDMessages_Params
{
};

// Function OLGame.OLHUD.ShowingSubtitle
// [0x00020802] 
struct AOLHUD_eventShowingSubtitle_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.HideSubtitle
// [0x00020802] 
struct AOLHUD_eventHideSubtitle_Params
{
};

// Function OLGame.OLHUD.ShowSubtitle
// [0x00020802] 
struct AOLHUD_eventShowSubtitle_Params
{
	class FString                                      MessageText;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.HideObjective
// [0x00020802] 
struct AOLHUD_eventHideObjective_Params
{
};

// Function OLGame.OLHUD.ShowObjective
// [0x00020802] 
struct AOLHUD_eventShowObjective_Params
{
	class FString                                      ObjectiveText;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.HideMessage
// [0x00020802] 
struct AOLHUD_eventHideMessage_Params
{
};

// Function OLGame.OLHUD.ShowMessage
// [0x00020802] 
struct AOLHUD_eventShowMessage_Params
{
	uint8_t                                            MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      MessageText;                                      		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.HideMenu
// [0x00020202] 
struct AOLHUD_execHideMenu_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	// uint32_t                                           bPaused : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLHUD.ShowMenuType
// [0x00020802] 
struct AOLHUD_eventShowMenuType_Params
{
	uint8_t                                            MenuType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.PostSoundEventEnter
// [0x00020400] 
struct AOLHUD_execPostSoundEventEnter_Params
{
};

// Function OLGame.OLHUD.PostSoundEventSelect
// [0x00020400] 
struct AOLHUD_execPostSoundEventSelect_Params
{
};

// Function OLGame.OLHUD.MuteSelectSound
// [0x00024400] 
struct AOLHUD_execMuteSelectSound_Params
{
	float                                              MuteTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHUD.CanShowSubMenu
// [0x00020400] 
struct AOLHUD_execCanShowSubMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.ShowEvidenceMenu
// [0x00020202] 
struct AOLHUD_execShowEvidenceMenu_Params
{
};

// Function OLGame.OLHUD.ShowRecordingMenu
// [0x00020202] 
struct AOLHUD_execShowRecordingMenu_Params
{
};

// Function OLGame.OLHUD.ShowTabMenu
// [0x00020202] 
struct AOLHUD_execShowTabMenu_Params
{
};

// Function OLGame.OLHUD.ShowMenu
// [0x00020202] 
struct AOLHUD_execShowMenu_Params
{
};

// Function OLGame.OLHUD.ShowMainMenu
// [0x00020202] 
struct AOLHUD_execShowMainMenu_Params
{
};

// Function OLGame.OLHUD.ReloadMenu
// [0x00020202] 
struct AOLHUD_execReloadMenu_Params
{
};

// Function OLGame.OLHUD.IsAMenuOpen
// [0x00020802] 
struct AOLHUD_eventIsAMenuOpen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsInCreditsMenu
// [0x00020802] 
struct AOLHUD_eventIsInCreditsMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsOnMainMenuScreen
// [0x00020802] 
struct AOLHUD_eventIsOnMainMenuScreen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsMainMenuOpen
// [0x00020802] 
struct AOLHUD_eventIsMainMenuOpen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsInPauseMenu
// [0x00020802] 
struct AOLHUD_eventIsInPauseMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.CanUnpauseInPauseMenu
// [0x00120002] 
struct AOLHUD_execCanUnpauseInPauseMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.ShowDebugInfo
// [0x00420002] 
struct AOLHUD_execShowDebugInfo_Params
{
	float                                              out_YL;                                           		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
	// float                                              SecondYPos;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	// float                                              OldOrgX;                                          		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLHUD.DebugNextAI
// [0x00020202] 
struct AOLHUD_execDebugNextAI_Params
{
	// class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// uint32_t                                           bFound : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AOLBot*                                      FirstBot;                                         		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.NotifyGameSaved
// [0x00020400] 
struct AOLHUD_execNotifyGameSaved_Params
{
};

// Function OLGame.OLHUD.SetGammaCalibrationActive
// [0x00020400] 
struct AOLHUD_execSetGammaCalibrationActive_Params
{
	uint32_t                                           bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHUD.ShowingFullScreenOverlay
// [0x00020400] 
struct AOLHUD_execShowingFullScreenOverlay_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.Draw
// [0x00020400] 
struct AOLHUD_execDraw_Params
{
};

// Function OLGame.OLInventoryManager.ClearGameplayItems
// [0x00020400] 
struct UOLInventoryManager_execClearGameplayItems_Params
{
};

// Function OLGame.OLInventoryManager.ClearUnsavedBatteries
// [0x00020400] 
struct UOLInventoryManager_execClearUnsavedBatteries_Params
{
};

// Function OLGame.OLMainHud.WidgetInitialized
// [0x00020802] 
struct UOLMainHud_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.DrawDebugAnimNode
// [0x00422400] 
struct AOLPawn_execDrawDebugAnimNode_Params
{
	struct FName                                       NodeName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UAnimNode*                                   aNode;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<class UAnimNode*>                           visitedNodes;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UCanvas*                                     aCanvas;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0028 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x002C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              XL;                                               		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              XBasePos;                                         		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              XOffset;                                          		// 0x0038 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.DisplayDebug
// [0x00420102] 
struct AOLPawn_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLPawn.GetFutureDestination
// [0x00020400] 
struct AOLPawn_execGetFutureDestination_Params
{
	class AOLPawn*                                     Agent;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.IsFirstPerson
// [0x00020102] 
struct AOLPawn_execIsFirstPerson_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class APlayerController*                           PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPawn.PlayLanded
// [0x00020002] 
struct AOLPawn_execPlayLanded_Params
{
	float                                              ImpactVel;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.Landed
// [0x00820802] 
struct AOLPawn_eventLanded_Params
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FVector                                     Impulse;                                          		// 0x0014 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLPawn.Destroyed
// [0x00020902] 
struct AOLPawn_eventDestroyed_Params
{
	// class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AActor*                                      A;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPawn.MAT_BeginAIGroup
// [0x00020802] 
struct AOLPawn_eventMAT_BeginAIGroup_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    StartRot;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTime;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.StartMatinee
// [0x00020400] 
struct AOLPawn_execStartMatinee_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    StartRot;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTime;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.PostInitAnimTree
// [0x00020902] 
struct AOLPawn_eventPostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OLGame.OLPawn.PlayVOLine
// [0x00024400] 
struct AOLPawn_execPlayVOLine_Params
{
	class UAkEvent*                                    LineToPlay;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLPawn.PlayJumpingSound
// [0x00020000] 
struct AOLPawn_execPlayJumpingSound_Params
{
};

// Function OLGame.OLPawn.PlayLandingSound
// [0x00020000] 
struct AOLPawn_execPlayLandingSound_Params
{
};

// Function OLGame.OLPawn.GetMaterialBelowFeet
// [0x00020400] 
struct AOLPawn_execGetMaterialBelowFeet_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.ClientRestart
// [0x00820102] 
struct AOLPawn_execClientRestart_Params
{
	// struct FRotator                                    AdjustedRotation;                                 		// 0x0000 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLPawn.PlayFootStepSound
// [0x00020902] 
struct AOLPawn_eventPlayFootStepSound_Params
{
	int32_t                                            FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAnimNotify_Footstep*                        footstepNotify;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.FaceRotation
// [0x00020102] 
struct AOLPawn_execFaceRotation_Params
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.GetEyeHeight
// [0x00020102] 
struct AOLPawn_execGetEyeHeight_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.GetPawnAmbientSound
// [0x00020102] 
struct AOLPawn_execGetPawnAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.SetPawnAmbientSound
// [0x00020102] 
struct AOLPawn_execSetPawnAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.Died
// [0x00020002] 
struct AOLPawn_execDied_Params
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.EncroachedBy
// [0x00020800] 
struct AOLPawn_eventEncroachedBy_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.SetPawnRBChannels
// [0x00020102] 
struct AOLPawn_execSetPawnRBChannels_Params
{
	uint32_t                                           bRagdollMode : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPawn.OnAnimEnd
// [0x00020902] 
struct AOLPawn_eventOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.ReattachMesh
// [0x00020102] 
struct AOLPawn_execReattachMesh_Params
{
};

// Function OLGame.OLPawn.UpdateShadowSettings
// [0x00020102] 
struct AOLPawn_execUpdateShadowSettings_Params
{
	uint32_t                                           bWantShadow : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                           bNewCastShadow : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bNewCastDynamicShadow : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLPawn.PostBeginPlay
// [0x00820102] 
struct AOLPawn_execPostBeginPlay_Params
{
	// struct FRotator                                    R;                                                		// 0x0000 (0x000C) [0x0000000000000000]               
	// class APlayerController*                           PC;                                               		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPawn.ProceduralAdjustNotify
// [0x00020400] 
struct AOLPawn_execProceduralAdjustNotify_Params
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.RestoreCollisionSizeNotify
// [0x00020400] 
struct AOLPawn_execRestoreCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.ChangeCollisionSizeNotify
// [0x00020400] 
struct AOLPawn_execChangeCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.MoveInterruptibleNotify
// [0x00020400] 
struct AOLPawn_execMoveInterruptibleNotify_Params
{
};

// Function OLGame.OLPawn.NativePostBeginPlay
// [0x00020400] 
struct AOLPawn_execNativePostBeginPlay_Params
{
};

// Function OLGame.OLPawn.NativeOnAnimEnd
// [0x00020400] 
struct AOLPawn_execNativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.StartSpecialMove
// [0x00024400] 
struct AOLPawn_execStartSpecialMove_Params
{
	uint8_t                                            moveType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     targetPosition;                                   		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     TargetDirection;                                  		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            TargetType;                                       		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLPawn.IsSpecialMoveCompleted
// [0x00020400] 
struct AOLPawn_execIsSpecialMoveCompleted_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.UpdateDifficultyBasedValues
// [0x00020002] 
struct AOLHero_execUpdateDifficultyBasedValues_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHero.OutsideWorldBounds
// [0x00020922] 
struct AOLHero_eventOutsideWorldBounds_Params
{
};

// Function OLGame.OLHero.FellOutOfWorld
// [0x00020902] 
struct AOLHero_eventFellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.RespawnHero
// [0x00020802] 
struct AOLHero_eventRespawnHero_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UOLEngine*                                   Engine;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHero.PlayFootStepSound
// [0x00020902] 
struct AOLHero_eventPlayFootStepSound_Params
{
	int32_t                                            FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAnimNotify_Footstep*                        footstepNotify;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FName                                       SurfaceMat;                                       		// 0x000C (0x0008) [0x0000000000000000]               
	// float                                              DecalAlpha;                                       		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLHero.IsInMainMenu
// [0x00020400] 
struct AOLHero_execIsInMainMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.SpawnBloodFootstepDecal
// [0x00820002] 
struct AOLHero_execSpawnBloodFootstepDecal_Params
{
	uint32_t                                           bLeftFoot : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              Alpha;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UMaterialInstanceConstant*                   ParentMI;                                         		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMaterialInstanceConstant*                   DecalMI;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FVector                                     DecalLocation;                                    		// 0x0018 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    DecalRotation;                                    		// 0x0024 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLHero.GetFootstepDecalTransform
// [0x00420400] 
struct AOLHero_execGetFootstepDecalTransform_Params
{
	uint32_t                                           bLeftFoot : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FVector                                     DecalLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    DecalRotation;                                    		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLHero.SetMeshVisibility
// [0x00020102] 
struct AOLHero_execSetMeshVisibility_Params
{
	uint32_t                                           bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHero.EndViewTarget
// [0x00020902] 
struct AOLHero_eventEndViewTarget_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.BecomeViewTarget
// [0x00020902] 
struct AOLHero_eventBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.PhysicsVolumeChange
// [0x00020802] 
struct AOLHero_eventPhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.OnEnterDeepWater
// [0x00020400] 
struct AOLHero_execOnEnterDeepWater_Params
{
	class APhysicsVolume*                              NewVolume;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.PlayLanded
// [0x00020002] 
struct AOLHero_execPlayLanded_Params
{
	float                                              ImpactVel;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativePlayLanded
// [0x00020400] 
struct AOLHero_execNativePlayLanded_Params
{
	float                                              ImpactVel;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.TakeFallingDamage
// [0x00020002] 
struct AOLHero_execTakeFallingDamage_Params
{
};

// Function OLGame.OLHero.HealDamage
// [0x00020802] 
struct AOLHero_eventHealDamage_Params
{
	int32_t                                            Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 Healer;                                           		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TakeDamage
// [0x00024802] 
struct AOLHero_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHero.DisplayDebug
// [0x00420102] 
struct AOLHero_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLHero.PostInitAnimTree
// [0x00020902] 
struct AOLHero_eventPostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OLGame.OLHero.PossessedBy
// [0x00020002] 
struct AOLHero_execPossessedBy_Params
{
	class AController*                                 C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHero.RemoveEnemyFromAIPositionPawns
// [0x00020400] 
struct AOLHero_execRemoveEnemyFromAIPositionPawns_Params
{
	class AOLEnemyPawn*                                EnemyPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.GetGrabUnderDestination
// [0x00020400] 
struct AOLHero_execGetGrabUnderDestination_Params
{
	class AOLEnemyPawn*                                Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.GetFutureDestination
// [0x00020400] 
struct AOLHero_execGetFutureDestination_Params
{
	class AOLPawn*                                     Agent;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.QuickHeroTest
// [0x00020600] 
struct AOLHero_execQuickHeroTest_Params
{
};

// Function OLGame.OLHero.CanBeGrabbedUnder
// [0x00020400] 
struct AOLHero_execCanBeGrabbedUnder_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.CanBeFatalitized
// [0x00020400] 
struct AOLHero_execCanBeFatalitized_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.CanBeAttacked
// [0x00020400] 
struct AOLHero_execCanBeAttacked_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.IsBarefeet
// [0x00020400] 
struct AOLHero_execIsBarefeet_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.IsInLocker
// [0x00020400] 
struct AOLHero_execIsInLocker_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.AttachCameraEffect
// [0x00020400] 
struct AOLHero_execAttachCameraEffect_Params
{
	class UParticleSystem*                             ParticleEffectTemplate;                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PlaneDist;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.SetCamcorderVisibleNotify
// [0x00020400] 
struct AOLHero_execSetCamcorderVisibleNotify_Params
{
};

// Function OLGame.OLHero.ResetNeckOffsetNotify
// [0x00020400] 
struct AOLHero_execResetNeckOffsetNotify_Params
{
};

// Function OLGame.OLHero.BloodOnScreenNotify
// [0x00020400] 
struct AOLHero_execBloodOnScreenNotify_Params
{
};

// Function OLGame.OLHero.DecapitatedNotify
// [0x00020400] 
struct AOLHero_execDecapitatedNotify_Params
{
};

// Function OLGame.OLHero.DieNotify
// [0x00020400] 
struct AOLHero_execDieNotify_Params
{
};

// Function OLGame.OLHero.OverrideCameraSettingsNotify
// [0x00020400] 
struct AOLHero_execOverrideCameraSettingsNotify_Params
{
	class UOLAnimNotify_OverrideCameraParams*          camParamsNotify;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.BatteriesReloadedNotify
// [0x00020400] 
struct AOLHero_execBatteriesReloadedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderLoweredNotify
// [0x00020400] 
struct AOLHero_execCamcorderLoweredNotify_Params
{
};

// Function OLGame.OLHero.CamcorderRaisedNotify
// [0x00020400] 
struct AOLHero_execCamcorderRaisedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderAvailableNotify
// [0x00020400] 
struct AOLHero_execCamcorderAvailableNotify_Params
{
};

// Function OLGame.OLHero.DoorAnimNotify
// [0x00020400] 
struct AOLHero_execDoorAnimNotify_Params
{
};

// Function OLGame.OLHero.PickupNotify
// [0x00020400] 
struct AOLHero_execPickupNotify_Params
{
};

// Function OLGame.OLHero.ReactToHit
// [0x00024400] 
struct AOLHero_execReactToHit_Params
{
	float                                              hitStrength;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     hitDirection;                                     		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bForceFullPower : 1;                              		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHero.TryKillInLocker
// [0x00020400] 
struct AOLHero_execTryKillInLocker_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryKillHero
// [0x00020400] 
struct AOLHero_execTryKillHero_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     enemyStartLocation;                               		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Direction;                                        		// 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryDecapitate
// [0x00020400] 
struct AOLHero_execTryDecapitate_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromUnder
// [0x00020400] 
struct AOLHero_execTryGrabFromUnder_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     StartLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AttackStartLocation;                              		// 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryThrowPlayer
// [0x00020400] 
struct AOLHero_execTryThrowPlayer_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ThrowRotation;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryGrabNormal
// [0x00020400] 
struct AOLHero_execTryGrabNormal_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     StartLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AttackStartLocation;                              		// 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromBed
// [0x00020400] 
struct AOLHero_execTryGrabFromBed_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryExitBed
// [0x00020400] 
struct AOLHero_execTryExitBed_Params
{
	struct FVector                                     playerIntentDirection;                            		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryExitLocker
// [0x00020400] 
struct AOLHero_execTryExitLocker_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromLocker
// [0x00020400] 
struct AOLHero_execTryGrabFromLocker_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.CanGrabFromSqueeze
// [0x00020400] 
struct AOLHero_execCanGrabFromSqueeze_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromSqueeze
// [0x00020400] 
struct AOLHero_execTryGrabFromSqueeze_Params
{
	class AOLEnemyPawn*                                attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.HeroControlActivated
// [0x00020400] 
struct AOLHero_execHeroControlActivated_Params
{
	class UOLSeqAct_HeroControl*                       heroControlAction;                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.ExitCinematicMode
// [0x00020400] 
struct AOLHero_execExitCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.EnterCinematicMode
// [0x00020400] 
struct AOLHero_execEnterCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.StartSpecialMove
// [0x00024400] 
struct AOLHero_execStartSpecialMove_Params
{
	uint8_t                                            moveType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     targetPosition;                                   		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     TargetDirection;                                  		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            TargetType;                                       		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHero.OnPossess
// [0x00020400] 
struct AOLHero_execOnPossess_Params
{
};

// Function OLGame.OLHero.ActivateWaterFootstepParticles
// [0x00020400] 
struct AOLHero_execActivateWaterFootstepParticles_Params
{
	uint32_t                                           bRightFoot : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHero.TakeElectricDamage
// [0x00020400] 
struct AOLHero_execTakeElectricDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Knockback;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UAkEvent*                                    ElectricSoundEvent;                               		// 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativeTakeFallingDamage
// [0x00020400] 
struct AOLHero_execNativeTakeFallingDamage_Params
{
};

// Function OLGame.OLHero.NativeTakeDamage
// [0x00020400] 
struct AOLHero_execNativeTakeDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativeDisplayDebug
// [0x00420400] 
struct AOLHero_execNativeDisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLHero.GetCamera
// [0x00420400] 
struct AOLHero_execGetCamera_Params
{
	struct FVector                                     out_CamLoc;                                       		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_CamRot;                                       		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_FOV;                                          		// 0x0018 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLHero.NativePostBeginPlay
// [0x00020400] 
struct AOLHero_execNativePostBeginPlay_Params
{
};

// Function OLGame.OLHero.ResetAfterTeleport
// [0x00020400] 
struct AOLHero_execResetAfterTeleport_Params
{
};

// Function OLGame.OLHero.IsRunning
// [0x00020400] 
struct AOLHero_execIsRunning_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryRun
// [0x00020400] 
struct AOLHero_execTryRun_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.Walk
// [0x00020400] 
struct AOLHero_execWalk_Params
{
};

// Function OLGame.OLHero.GetViewRotation
// [0x00020D00] 
struct AOLHero_eventGetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.GetPawnViewLocation
// [0x00020500] 
struct AOLHero_execGetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPickableObject.OnToggle
// [0x00020102] 
struct AOLPickableObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCollectiblePickup.PostBeginPlay
// [0x00020002] 
struct AOLCollectiblePickup_execPostBeginPlay_Params
{
};

// Function OLGame.OLCollectiblePickup.ShouldShowCollectible
// [0x00020400] 
struct AOLCollectiblePickup_execShouldShowCollectible_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGameplayItemPickup.PostBeginPlay
// [0x00020002] 
struct AOLGameplayItemPickup_execPostBeginPlay_Params
{
};

// Function OLGame.OLGameplayItemPickup.ShouldShowItem
// [0x00020400] 
struct AOLGameplayItemPickup_execShouldShowItem_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerInput.IsKeyPressed
// [0x00020400] 
struct UOLPlayerInput_execIsKeyPressed_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerInput.UnBindNoSave
// [0x00020802] 
struct UOLPlayerInput_eventUnBindNoSave_Params
{
	class FString                                      Command;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            BindIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPlayerInput.PreProcessInput
// [0x00020002] 
struct UOLPlayerInput_execPreProcessInput_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerInput.StopLeanRight
// [0x00020302] 
struct UOLPlayerInput_execStopLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StopLeanLeft
// [0x00020302] 
struct UOLPlayerInput_execStopLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanRight
// [0x00020302] 
struct UOLPlayerInput_execStartLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanLeft
// [0x00020302] 
struct UOLPlayerInput_execStartLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.ToggleDuck
// [0x00020302] 
struct UOLPlayerInput_execToggleDuck_Params
{
};

// Function OLGame.OLPlayerInput.UnDuck
// [0x00020302] 
struct UOLPlayerInput_execUnDuck_Params
{
};

// Function OLGame.OLPlayerInput.Duck
// [0x00020302] 
struct UOLPlayerInput_execDuck_Params
{
};

// Function OLGame.OLPlayerInput.ResetInput
// [0x00020400] 
struct UOLPlayerInput_execResetInput_Params
{
};

// Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings
// [0x00020400] 
struct UOLProfileSettings_execAutoDetectPerformanceSettings_Params
{
};

// Function OLGame.OLProfileSettings.MatchMonitorResolution
// [0x00020400] 
struct UOLProfileSettings_execMatchMonitorResolution_Params
{
	uint32_t                                           bLimitForPerformance : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLProfileSettings.SetLanguageFromSteam
// [0x00020400] 
struct UOLProfileSettings_execSetLanguageFromSteam_Params
{
};

// Function OLGame.OLProfileSettings.SetToDefaults
// [0x00020C00] 
struct UOLProfileSettings_eventSetToDefaults_Params
{
};

// Function OLGame.OLProfileSettings.GetProfileSettingValues
// [0x00420400] 
struct UOLProfileSettings_execGetProfileSettingValues_Params
{
	int32_t                                            ProfileSettingId;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FName>                               Values;                                           		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLProfileSettings.GetGammaSetting
// [0x00020002] 
struct UOLProfileSettings_execGetGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPushableObject.OnToggle
// [0x00020102] 
struct AOLPushableObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLSeqAct_Checkpoint.Activated
// [0x00020802] 
struct UOLSeqAct_Checkpoint_eventActivated_Params
{
	// class UOLEngine*                                   Engine;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AOLCheckpoint*                               CheckpointTarget;                                 		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     CurrentGame;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
	// class AOLPlayerController*                         OLPC;                                             		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLSeqAct_Checkpoint.GetCheckpointFromName
// [0x00020400] 
struct UOLSeqAct_Checkpoint_execGetCheckpointFromName_Params
{
	struct FName                                       CPName;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLCheckpoint*                               ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Checkpoint.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Checkpoint_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSoundConnector.OnToggle
// [0x00020102] 
struct AOLSoundConnector_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager
// [0x00022400] 
struct UOLSoundEnvironmentManager_execGetSoundEnvManager_Params
{
	class UOLSoundEnvironmentManager*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSoundEnvironmentManager.ExitAllTouchingVolumes
// [0x00020400] 
struct UOLSoundEnvironmentManager_execExitAllTouchingVolumes_Params
{
};

// Function OLGame.OLSoundEnvironmentManager.Cleanup
// [0x00020400] 
struct UOLSoundEnvironmentManager_execCleanup_Params
{
};

// Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay
// [0x00020802] 
struct AOLSoundEnvironmentVolume_eventPostBeginPlay_Params
{
};

// Function OLGame.OLTutorialManager.Clear
// [0x00020400] 
struct UOLTutorialManager_execClear_Params
{
};

// Function OLGame.OLUtils.GetOLPC
// [0x00022400] 
struct UOLUtils_execGetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsBindableKey
// [0x00022400] 
struct UOLUtils_execIsBindableKey_Params
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsPlayingDLC
// [0x00022400] 
struct UOLUtils_execIsPlayingDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsDLCInstalled
// [0x00022400] 
struct UOLUtils_execIsDLCInstalled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsConsole
// [0x00022400] 
struct UOLUtils_execIsConsole_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsPS4
// [0x00022400] 
struct UOLUtils_execIsPS4_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLVoiceManager.DisplayDebug
// [0x00C20102] 
struct UOLVoiceManager_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// TArray<float>                                      ColumnPos;                                        		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FColor                                      DrawColor;                                        		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            J;                                                		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FLineQueue                                  CurrentQueue;                                     		// 0x002C (0x001C) [0x0000000000000000]               
	// struct FVOLine                                     CurrentLine;                                      		// 0x0048 (0x0034) [0x0000000000000000]               
};

// Function OLGame.OLWaitPointComponent.ReturnWaitPoint
// [0x00020400] 
struct UOLWaitPointComponent_execReturnWaitPoint_Params
{
	struct FWaitPoint                                  Point;                                            		// 0x0000 (0x0024) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLWaitPointComponent.GrabBestWaitPoint
// [0x00020400] 
struct UOLWaitPointComponent_execGrabBestWaitPoint_Params
{
	uint32_t                                           bReversed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FWaitPoint                                  ReturnValue;                                      		// 0x0004 (0x0024) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWaitPointComponent.GetWaitPointForwardVector
// [0x00020400] 
struct UOLWaitPointComponent_execGetWaitPointForwardVector_Params
{
	struct FWaitPoint                                  Point;                                            		// 0x0000 (0x0024) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.OnAIMoveToActor
// [0x00020002] 
struct AOLBot_execOnAIMoveToActor_Params
{
	class USeqAct_AIMoveToActor*                       Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AActor*                                      destActor;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class USeqVar_Object*                              ObjVar;                                           		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.FinishMatinee
// [0x00020102] 
struct AOLBot_execFinishMatinee_Params
{
};

// Function OLGame.OLBot.BeginMatinee
// [0x00020102] 
struct AOLBot_execBeginMatinee_Params
{
};

// Function OLGame.OLBot.OnAIInvestigatePoint
// [0x00020002] 
struct AOLBot_execOnAIInvestigatePoint_Params
{
	class UOLSeqAct_AIInvestigatePoint*                Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.ToggleAIAttackOnProximity
// [0x00020802] 
struct AOLBot_eventToggleAIAttackOnProximity_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.OnToggleAIAttackOnProximity
// [0x00020002] 
struct AOLBot_execOnToggleAIAttackOnProximity_Params
{
	class UOLSeqAct_ToggleAIAttackOnProximity*         Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.ToggleAIAlwaysSeePlayer
// [0x00020002] 
struct AOLBot_execToggleAIAlwaysSeePlayer_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer
// [0x00020002] 
struct AOLBot_execOnToggleAIAlwaysSeePlayer_Params
{
	class UOLSeqAct_ToggleAIAlwaysSeePlayer*           Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.IgnoreTarget
// [0x00020802] 
struct AOLBot_eventIgnoreTarget_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.ToggleAIIgnorePlayer
// [0x00020802] 
struct AOLBot_eventToggleAIIgnorePlayer_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.OnToggleAIIgnorePlayer
// [0x00020002] 
struct AOLBot_execOnToggleAIIgnorePlayer_Params
{
	class UOLSeqAct_ToggleAIIgnorePlayer*              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.OnAIAbortPatrol
// [0x00020002] 
struct AOLBot_execOnAIAbortPatrol_Params
{
	class UOLSeqAct_AIAbortPatrol*                     Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.StopPatrol
// [0x00024802] 
struct AOLBot_eventStopPatrol_Params
{
	uint32_t                                           bAbort : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.OnAIStartPatrol
// [0x00020002] 
struct AOLBot_execOnAIStartPatrol_Params
{
	class UOLSeqAct_AIStartPatrol*                     Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.DisplayDebug
// [0x00420102] 
struct AOLBot_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class UGameAICommand*                              ActiveCmd;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// TArray<class UAnimNode*>                           visitedAnimNodes;                                 		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Buffer;                                           		// 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLBot.DrawDebugStates
// [0x00422400] 
struct AOLBot_execDrawDebugStates_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     aCanvas;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              XL;                                               		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              XPos;                                             		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0018 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLBot.DebugMessagePlayer
// [0x00020800] 
struct AOLBot_eventDebugMessagePlayer_Params
{
	class FString                                      msg;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function OLGame.OLBot.ClearDestination
// [0x00020002] 
struct AOLBot_execClearDestination_Params
{
};

// Function OLGame.OLBot.ClearDisturbance
// [0x00020802] 
struct AOLBot_eventClearDisturbance_Params
{
};

// Function OLGame.OLBot.ClearInvestigation
// [0x00020400] 
struct AOLBot_execClearInvestigation_Params
{
};

// Function OLGame.OLBot.TriggerVisualDisturbance
// [0x00024400] 
struct AOLBot_execTriggerVisualDisturbance_Params
{
	struct FVector                                     DisturbanceLocation;                              		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bFromGroup : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.TriggerAudioDisturbance
// [0x00024400] 
struct AOLBot_execTriggerAudioDisturbance_Params
{
	struct FVector                                     DisturbanceLocation;                              		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bFromGroup : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bNewInvestigate : 1;                              		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bNoTrim : 1;                                      		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bIgnoreDisturbs : 1;                              		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.LostTarget
// [0x00020400] 
struct AOLBot_execLostTarget_Params
{
	uint32_t                                           bAfterChase : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.IsAtTrimmedDoor
// [0x00020400] 
struct AOLBot_execIsAtTrimmedDoor_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GetDoorApproachPoint
// [0x00420400] 
struct AOLBot_execGetDoorApproachPoint_Params
{
	class AOLDoor*                                     aDoor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ApproachPoint;                                    		// 0x0008 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.EndDoorTraversal
// [0x00020400] 
struct AOLBot_execEndDoorTraversal_Params
{
};

// Function OLGame.OLBot.StartDoorTraversal
// [0x00020400] 
struct AOLBot_execStartDoorTraversal_Params
{
	uint32_t                                           bReversed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.GetSqueezePoint
// [0x00020400] 
struct AOLBot_execGetSqueezePoint_Params
{
	class AOLSqueezeVolume*                            Squeeze;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GetClosestPointOnNavMesh
// [0x00420400] 
struct AOLBot_execGetClosestPointOnNavMesh_Params
{
	struct FVector                                     out_NewPoint;                                     		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     PointToCheck;                                     		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.MoveAlongPath
// [0x00024408] 
struct AOLBot_execMoveAlongPath_Params
{
	TArray<struct FVector>                             PathPoints;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class AActor*                                      FocusTarget;                                      		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.ClearNextMove
// [0x00020002] 
struct AOLBot_execClearNextMove_Params
{
};

// Function OLGame.OLBot.ClearCurrentMove
// [0x00020802] 
struct AOLBot_eventClearCurrentMove_Params
{
	// class AOLHero*                                     HeroActor;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.StartWaitForDoor
// [0x00020802] 
struct AOLBot_eventStartWaitForDoor_Params
{
};

// Function OLGame.OLBot.StopMoving
// [0x00024400] 
struct AOLBot_execStopMoving_Params
{
	uint32_t                                           bAborted : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.TargetReachable
// [0x00820002] 
struct AOLBot_execTargetReachable_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector                                     Point;                                            		// 0x0004 (0x000C) [0x0000000000000000]               
	// float                                              Buffer;                                           		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLBot.GetClosestPointToActor
// [0x00420002] 
struct AOLBot_execGetClosestPointToActor_Params
{
	struct FVector                                     NewPoint;                                         		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      ActorToCheck;                                     		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              NewBuffer;                                        		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           Success : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AOLHero*                                     HeroActor;                                        		// 0x0020 (0x0008) [0x0000000000000000]               
	// class AOLPawn*                                     PawnActor;                                        		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.StartMove
// [0x00020802] 
struct AOLBot_eventStartMove_Params
{
	struct FMovementData                               aData;                                            		// 0x0000 (0x002C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility*                        MoveCmd;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.IsAlreadyAtDestination
// [0x00820002] 
struct AOLBot_execIsAlreadyAtDestination_Params
{
	struct FMovementData                               aData;                                            		// 0x0000 (0x002C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector                                     Destination;                                      		// 0x0030 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLBot.CompareMoves
// [0x00020802] 
struct AOLBot_eventCompareMoves_Params
{
	struct FMovementData                               Data1;                                            		// 0x0000 (0x002C) [0x0000000000000080] (CPF_Parm)    
	struct FMovementData                               Data2;                                            		// 0x002C (0x002C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           Success : 1;                                      		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLBot.GetCurrentWaypoint
// [0x00020400] 
struct AOLBot_execGetCurrentWaypoint_Params
{
	class AOLWaypoint*                                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.ChooseClosestPatrolWaypoint
// [0x00020802] 
struct AOLBot_eventChooseClosestPatrolWaypoint_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.ChooseNextPatrolWaypoint
// [0x00020802] 
struct AOLBot_eventChooseNextPatrolWaypoint_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint8_t                                            bReverseDirection;                                		// 0x0004 (0x0001) [0x0000000000000000]               
	// int32_t                                            NewIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	// class USeqAct_Latent*                              Action;                                           		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.NotifyBump
// [0x00020802] 
struct AOLBot_eventNotifyBump_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bIsPasser : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AOLEnemyPawn*                                OtherPawn;                                        		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.RegeneratePath
// [0x00020400] 
struct AOLBot_execRegeneratePath_Params
{
};

// Function OLGame.OLBot.NotifyPathChanged
// [0x00020802] 
struct AOLBot_eventNotifyPathChanged_Params
{
	// class UOLAICmd_MoveAbility*                        MoveCmd;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.GeneratePathToLocation
// [0x00024802] 
struct AOLBot_eventGeneratePathToLocation_Params
{
	struct FVector                                     Goal;                                             		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              WithinDistance;                                   		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAllowPartialPath : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GeneratePathToActor
// [0x00024802] 
struct AOLBot_eventGeneratePathToActor_Params
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              WithinDistance;                                   		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAllowPartialPath : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.AddBasePathContraints
// [0x00020002] 
struct AOLBot_execAddBasePathContraints_Params
{
};

// Function OLGame.OLBot.Recalculate
// [0x00024802] 
struct AOLBot_eventRecalculate_Params
{
	uint32_t                                           bForce : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.PushNotify
// [0x00020802] 
struct AOLBot_eventPushNotify_Params
{
};

// Function OLGame.OLBot.KnockbackTickNotify
// [0x00020802] 
struct AOLBot_eventKnockbackTickNotify_Params
{
	// float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	// float                                              KnockbackPower;                                   		// 0x0004 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bForceFullPower : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLBot.IsPlayerOnVaultingPath
// [0x00020400] 
struct AOLBot_execIsPlayerOnVaultingPath_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor
// [0x00020400] 
struct AOLBot_execIsPlayerOnBrokenSideOfDoor_Params
{
	class AOLDoor*                                     door;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.KnockbackStartNotify
// [0x00020802] 
struct AOLBot_eventKnockbackStartNotify_Params
{
};

// Function OLGame.OLBot.BreakDoorNotify
// [0x00020802] 
struct AOLBot_eventBreakDoorNotify_Params
{
	// class UOLAICmd_MoveAbility_Door*                   DoorCmd;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.BashDoorNotify
// [0x00020802] 
struct AOLBot_eventBashDoorNotify_Params
{
	// class UOLAICmd_MoveAbility_Door*                   DoorCmd;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.DamageTargetRangeTickNotify
// [0x00020802] 
struct AOLBot_eventDamageTargetRangeTickNotify_Params
{
};

// Function OLGame.OLBot.DamageTargetRangeStartNotify
// [0x00020802] 
struct AOLBot_eventDamageTargetRangeStartNotify_Params
{
};

// Function OLGame.OLBot.DamageTarget
// [0x00020802] 
struct AOLBot_eventDamageTarget_Params
{
};

// Function OLGame.OLBot.IsInDamageRange
// [0x00020400] 
struct AOLBot_execIsInDamageRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInFinalAttackRange
// [0x00020400] 
struct AOLBot_execIsInFinalAttackRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInApproachAttackRange
// [0x00020400] 
struct AOLBot_execIsInApproachAttackRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInAttackRange
// [0x00020400] 
struct AOLBot_execIsInAttackRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.InvestigateObject
// [0x00020400] 
struct AOLBot_execInvestigateObject_Params
{
	class AActor*                                      anActor;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.TryGrabUnder
// [0x00020400] 
struct AOLBot_execTryGrabUnder_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.TryGrabNormal
// [0x00020400] 
struct AOLBot_execTryGrabNormal_Params
{
	uint32_t                                           bCrouched : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.AttackCycleEnd
// [0x00020002] 
struct AOLBot_execAttackCycleEnd_Params
{
};

// Function OLGame.OLBot.AttackTarget
// [0x00020400] 
struct AOLBot_execAttackTarget_Params
{
	uint8_t                                            aType;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.UpdateAnimationMode
// [0x00020400] 
struct AOLBot_execUpdateAnimationMode_Params
{
};

// Function OLGame.OLBot.TriggerDisturbed
// [0x00020802] 
struct AOLBot_eventTriggerDisturbed_Params
{
	// class UGameAICommand*                              MoveCmd;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.StartAnimating
// [0x00020802] 
struct AOLBot_eventStartAnimating_Params
{
	struct FAnimationData                              aAnim;                                            		// 0x0000 (0x003C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    Direction;                                        		// 0x003C (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class UGameAICommand*                              MoveCmd;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.ClearAnimation
// [0x00020002] 
struct AOLBot_execClearAnimation_Params
{
};

// Function OLGame.OLBot.CompareAnimations
// [0x00020002] 
struct AOLBot_execCompareAnimations_Params
{
	struct FAnimationData                              AnimDataOne;                                      		// 0x0000 (0x003C) [0x0000000000000080] (CPF_Parm)    
	struct FAnimationData                              AnimDataTwo;                                      		// 0x003C (0x003C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.TurnTo
// [0x00020802] 
struct AOLBot_eventTurnTo_Params
{
	struct FRotator                                    Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class UGameAICommand*                              MoveCmd;                                          		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.PerformAttackCheck
// [0x00020400] 
struct AOLBot_execPerformAttackCheck_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.PerformGrabCheck
// [0x00020400] 
struct AOLBot_execPerformGrabCheck_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsPerformingMoveAbility
// [0x00020400] 
struct AOLBot_execIsPerformingMoveAbility_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.WaitForSpecialMove
// [0x00024409] 
struct AOLBot_execWaitForSpecialMove_Params
{
	uint32_t                                           bNoDelay : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.WaitForFullBodyAnim
// [0x00020409] 
struct AOLBot_execWaitForFullBodyAnim_Params
{
};

// Function OLGame.OLBot.PlayFullBodyAnim
// [0x00024002] 
struct AOLBot_execPlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bLooping : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              StartTime;                                        		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              EndTime;                                          		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.PushQueuedCommand
// [0x00020002] 
struct AOLBot_execPushQueuedCommand_Params
{
};

// Function OLGame.OLBot.QueueAICommand
// [0x00020802] 
struct AOLBot_eventQueueAICommand_Params
{
	class UGameAICommand*                              Cmd;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.UnPossess
// [0x00020002] 
struct AOLBot_execUnPossess_Params
{
};

// Function OLGame.OLBot.AddToAIGroup
// [0x00020102] 
struct AOLBot_execAddToAIGroup_Params
{
	// class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AOLAIGroup*                                  NewGroup;                                         		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.Possess
// [0x00020002] 
struct AOLBot_execPossess_Params
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.Destroyed
// [0x00020802] 
struct AOLBot_eventDestroyed_Params
{
};

// Function OLGame.OLBot.FindPlayer
// [0x00020802] 
struct AOLBot_eventFindPlayer_Params
{
	// class AOLPlayerController*                         PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.InitNavigationHandle
// [0x00020102] 
struct AOLBot_execInitNavigationHandle_Params
{
};

// Function OLGame.OLBot.PostBeginPlay
// [0x00020102] 
struct AOLBot_execPostBeginPlay_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.AtPoint
// [0x00020002] 
struct UOLAICmd_MoveAbility_execAtPoint_Params
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.SetActiveOnObject
// [0x00020000] 
struct UOLAICmd_MoveAbility_execSetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAICmd_MoveAbility.GetActiveOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_execGetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.GetClosestToObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_execGetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.UnregisterWithObject
// [0x00020000] 
struct UOLAICmd_MoveAbility_execUnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.RegisterWithObject
// [0x00020000] 
struct UOLAICmd_MoveAbility_execRegisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.IsObjectInUse
// [0x00020002] 
struct UOLAICmd_MoveAbility_execIsObjectInUse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ContinueFromWaiting
// [0x00020002] 
struct UOLAICmd_MoveAbility_execContinueFromWaiting_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.MoveToWaiting
// [0x00020002] 
struct UOLAICmd_MoveAbility_execMoveToWaiting_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.GetWaitIndex
// [0x00020002] 
struct UOLAICmd_MoveAbility_execGetWaitIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLBot*                                      Bot;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// TArray<class AOLBot*>                              Bots;                                             		// 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bForReversed : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bSideSet : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UOLAICmd_MoveAbility*                        MoveCmd;                                          		// 0x0024 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            WaitIndex;                                        		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility.GetBotsOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_execGetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<class AOLBot*>                              Bots;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility.GetWaitPointForwardDirection
// [0x00020002] 
struct UOLAICmd_MoveAbility_execGetWaitPointForwardDirection_Params
{
	struct FWaitPoint                                  Point;                                            		// 0x0000 (0x0024) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ReturnWaitPoint
// [0x00020002] 
struct UOLAICmd_MoveAbility_execReturnWaitPoint_Params
{
	struct FWaitPoint                                  Point;                                            		// 0x0000 (0x0024) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAICmd_MoveAbility.GrabBestWaitPoint
// [0x00820002] 
struct UOLAICmd_MoveAbility_execGrabBestWaitPoint_Params
{
	struct FWaitPoint                                  ReturnValue;                                      		// 0x0000 (0x0024) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FWaitPoint                                  Point;                                            		// 0x0024 (0x0024) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility.ModifyPath
// [0x00420400] 
struct UOLAICmd_MoveAbility_execModifyPath_Params
{
	struct FVector                                     NewDestination;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FVector>                             NewPath;                                          		// 0x000C (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility.ModifyApproach
// [0x00420002] 
struct UOLAICmd_MoveAbility_execModifyApproach_Params
{
	struct FVector                                     NewDestination;                                   		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.Completed
// [0x00020002] 
struct UOLAICmd_MoveAbility_execCompleted_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Popped
// [0x00020002] 
struct UOLAICmd_MoveAbility_execPopped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Pushed
// [0x00020002] 
struct UOLAICmd_MoveAbility_execPushed_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable
// [0x00022802] 
struct UOLAICmd_MoveAbility_Bash_eventMoveThruBashable_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLBashableObject*                           InBashable;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Bash*                   ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Bash*                   Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetBotsOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execGetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility_Door.SetActiveOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execSetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetActiveOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execGetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetClosestToObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execGetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]               
	// class AOLBot*                                      TempClosestBot;                                   		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Door.UnregisterWithObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execUnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.RegisterWithObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execRegisterWithObject_Params
{
	// uint32_t                                           bFound : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execIsObjectInUse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.Cancel
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execCancel_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.Popped
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execPopped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach
// [0x00420002] 
struct UOLAICmd_MoveAbility_Door_execModifyApproach_Params
{
	struct FVector                                     NewDestination;                                   		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execIsDoorOpen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor
// [0x00022802] 
struct UOLAICmd_MoveAbility_Door_eventMoveThruDoor_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLDoor*                                     InDoor;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Door*                   ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Door*                   Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetBotsOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Ledge_execGetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.SetActiveOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Ledge_execSetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetActiveOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Ledge_execGetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetClosestToObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Ledge_execGetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]               
	// class AOLBot*                                      TempClosestBot;                                   		// 0x000C (0x0008) [0x0000000000000000]               
	// class UOLAICmd_MoveAbility*                        MoveAbilityClosest;                               		// 0x0014 (0x0008) [0x0000000000000000]               
	// class UOLAICmd_MoveAbility*                        MoveAbilityCurrent;                               		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.UnregisterWithObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Ledge_execUnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.RegisterWithObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Ledge_execRegisterWithObject_Params
{
	// uint32_t                                           bFound : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.IsObjectInUse
// [0x00020002] 
struct UOLAICmd_MoveAbility_Ledge_execIsObjectInUse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge
// [0x00022802] 
struct UOLAICmd_MoveAbility_Ledge_eventMoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLLedgeMarker*                              InLedge;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Ledge*                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Ledge*                  Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetBotsOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Vault_execGetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.SetActiveOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Vault_execSetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetActiveOnObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Vault_execGetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetClosestToObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Vault_execGetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]               
	// class AOLBot*                                      TempClosestBot;                                   		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Vault.UnregisterWithObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Vault_execUnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Vault.RegisterWithObject
// [0x00020002] 
struct UOLAICmd_MoveAbility_Vault_execRegisterWithObject_Params
{
	// uint32_t                                           bFound : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Vault.IsObjectInUse
// [0x00020002] 
struct UOLAICmd_MoveAbility_Vault_execIsObjectInUse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge
// [0x00022802] 
struct UOLAICmd_MoveAbility_Vault_eventMoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLAIVaultMarker*                            InMarker;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Vault*                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Vault*                  Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.NotifyOthersPathChanged
// [0x00020002] 
struct AOLAIGroup_execNotifyOthersPathChanged_Params
{
	class AOLBot*                                      Notifier;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AOLBot*                                      Bot;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.ReturnAttackToken
// [0x00020400] 
struct AOLAIGroup_execReturnAttackToken_Params
{
	class AOLBot*                                      attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAIGroup.TakeAttackToken
// [0x00020400] 
struct AOLAIGroup_execTakeAttackToken_Params
{
	class AOLBot*                                      attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAIGroup.CanAttack
// [0x00020400] 
struct AOLAIGroup_execCanAttack_Params
{
	class AOLBot*                                      attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAIGroup.Recalculate
// [0x00020802] 
struct AOLAIGroup_eventRecalculate_Params
{
	// class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.DidAnyoneSeePlayerInBed
// [0x00020802] 
struct AOLAIGroup_eventDidAnyoneSeePlayerInBed_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLBot*                                      Bot;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.DidAnyoneSeePlayerinLocker
// [0x00020802] 
struct AOLAIGroup_eventDidAnyoneSeePlayerinLocker_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLBot*                                      Bot;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.CanAnyoneSeeTarget
// [0x00020802] 
struct AOLAIGroup_eventCanAnyoneSeeTarget_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLBot*                                      Bot;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.ToggleAIAlwaysSeePlayer
// [0x00020002] 
struct AOLAIGroup_execToggleAIAlwaysSeePlayer_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AOLBot*                                      Bot;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.ToggleAIIgnorePlayer
// [0x00020002] 
struct AOLAIGroup_execToggleAIIgnorePlayer_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AOLBot*                                      Bot;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.TriggerVisualDisturbance
// [0x00020802] 
struct AOLAIGroup_eventTriggerVisualDisturbance_Params
{
	class AOLBot*                                      Triggerer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     DisturbanceLocation;                              		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class AOLBot*                                      Bot;                                              		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.TriggerAudioDisturbance
// [0x00024802] 
struct AOLAIGroup_eventTriggerAudioDisturbance_Params
{
	class AOLBot*                                      Triggerer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     DisturbanceLocation;                              		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bNewInvestigate : 1;                              		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bNoTrim : 1;                                      		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class AOLBot*                                      Bot;                                              		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.RemoveBot
// [0x00020802] 
struct AOLAIGroup_eventRemoveBot_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAIGroup.AddBot
// [0x00020802] 
struct AOLAIGroup_eventAddBot_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume
// [0x00020802] 
struct AOLAIInvestigationVolume_eventProcessActorSetVolume_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAISightComponent.DisplayDebug
// [0x00420102] 
struct UOLAISightComponent_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLEnemyPawn.PlayContextualVO
// [0x00024400] 
struct AOLEnemyPawn_execPlayContextualVO_Params
{
	uint8_t                                            VOContext;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLEnemyPawn.PlayFootStepSound
// [0x00020902] 
struct AOLEnemyPawn_eventPlayFootStepSound_Params
{
	int32_t                                            FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAnimNotify_Footstep*                        footstepNotify;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// float                                              Speed;                                            		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLEnemyPawn.FinishAIGroup
// [0x00020102] 
struct AOLEnemyPawn_execFinishAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.BeginAIGroup
// [0x00020102] 
struct AOLEnemyPawn_execBeginAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.StartMatinee
// [0x00020400] 
struct AOLEnemyPawn_execStartMatinee_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    StartRot;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTime;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.OnAnimEnd
// [0x00020902] 
struct AOLEnemyPawn_eventOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.StartDisturbed
// [0x00020400] 
struct AOLEnemyPawn_execStartDisturbed_Params
{
};

// Function OLGame.OLEnemyPawn.StartNormalAttack
// [0x00020400] 
struct AOLEnemyPawn_execStartNormalAttack_Params
{
};

// Function OLGame.OLEnemyPawn.StartDoorKnockback
// [0x00020400] 
struct AOLEnemyPawn_execStartDoorKnockback_Params
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLocker : 1;                                      		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEnemyPawn.StartKnockback
// [0x00020400] 
struct AOLEnemyPawn_execStartKnockback_Params
{
	class AOLHero*                                     Hero;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.StartAvoid
// [0x00020400] 
struct AOLEnemyPawn_execStartAvoid_Params
{
	class AOLEnemyPawn*                                OtherPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.TurnOnSpot
// [0x00020400] 
struct AOLEnemyPawn_execTurnOnSpot_Params
{
	struct FRotator                                    EndRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.PlayFullBodyAnim
// [0x00024002] 
struct AOLEnemyPawn_execPlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bLooping : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              StartTime;                                        		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              EndTime;                                          		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLEnemyPawn.DisableRootMotion
// [0x00020400] 
struct AOLEnemyPawn_execDisableRootMotion_Params
{
};

// Function OLGame.OLEnemyPawn.EnableRootMotion
// [0x00020400] 
struct AOLEnemyPawn_execEnableRootMotion_Params
{
};

// Function OLGame.OLEnemyPawn.StopIdleSound
// [0x00020802] 
struct AOLEnemyPawn_eventStopIdleSound_Params
{
};

// Function OLGame.OLEnemyPawn.StartIdleSound
// [0x00020802] 
struct AOLEnemyPawn_eventStartIdleSound_Params
{
};

// Function OLGame.OLEnemyPawn.HideWeaponMatinee
// [0x00020802] 
struct AOLEnemyPawn_eventHideWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeaponMatinee
// [0x00020802] 
struct AOLEnemyPawn_eventShowWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.HideWeapon
// [0x00020802] 
struct AOLEnemyPawn_eventHideWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeapon
// [0x00020802] 
struct AOLEnemyPawn_eventShowWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ResetAnimationMode
// [0x00020802] 
struct AOLEnemyPawn_eventResetAnimationMode_Params
{
};

// Function OLGame.OLEnemyPawn.PushNotify
// [0x00020802] 
struct AOLEnemyPawn_eventPushNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackTickNotify
// [0x00020802] 
struct AOLEnemyPawn_eventKnockbackTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackStartNotify
// [0x00020802] 
struct AOLEnemyPawn_eventKnockbackStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BreakDoorNotify
// [0x00020802] 
struct AOLEnemyPawn_eventBreakDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BashDoorNotify
// [0x00020802] 
struct AOLEnemyPawn_eventBashDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify
// [0x00020802] 
struct AOLEnemyPawn_eventDamageTargetRangeTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify
// [0x00020802] 
struct AOLEnemyPawn_eventDamageTargetRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTarget
// [0x00020802] 
struct AOLEnemyPawn_eventDamageTarget_Params
{
};

// Function OLGame.OLEnemyPawn.Destroyed
// [0x00020902] 
struct AOLEnemyPawn_eventDestroyed_Params
{
};

// Function OLGame.OLEnemyPawn.BuildScriptAnimSetList
// [0x00020902] 
struct AOLEnemyPawn_eventBuildScriptAnimSetList_Params
{
};

// Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues
// [0x00020002] 
struct AOLEnemyPawn_execUpdateDifficultyBasedValues_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLEnemyPawn.ApplyModifiers
// [0x00020802] 
struct AOLEnemyPawn_eventApplyModifiers_Params
{
	struct FEnemyModifiers                             NewModifiers;                                     		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.PostInitAnimTree
// [0x00020902] 
struct AOLEnemyPawn_eventPostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OLGame.OLEnemyPawn.PossessedBy
// [0x00020002] 
struct AOLEnemyPawn_execPossessedBy_Params
{
	class AController*                                 C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEnemyPawn.ZeroMovementVariables
// [0x00020102] 
struct AOLEnemyPawn_execZeroMovementVariables_Params
{
};

// Function OLGame.OLEnemyPawn.PostBeginPlay
// [0x00020902] 
struct AOLEnemyPawn_eventPostBeginPlay_Params
{
};

// Function OLGame.OLEnemyPawn.AIStartingMove
// [0x00020002] 
struct AOLEnemyPawn_execAIStartingMove_Params
{
};

// Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently
// [0x00020003] 
struct AOLEnemyPawn_execHasRegisteredNavMeshRecently_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle
// [0x00020003] 
struct AOLEnemyPawn_execUpdateNavMeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.CancelSpecialMove
// [0x00020400] 
struct AOLEnemyPawn_execCancelSpecialMove_Params
{
};

// Function OLGame.OLEnemyPawn.StartSpecialMove
// [0x00024400] 
struct AOLEnemyPawn_execStartSpecialMove_Params
{
	uint8_t                                            moveType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     targetPosition;                                   		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     TargetDirection;                                  		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            TargetType;                                       		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle
// [0x00020401] 
struct AOLEnemyPawn_execUnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle
// [0x00020401] 
struct AOLEnemyPawn_execRegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLBTTask.DisplayDebug
// [0x00420002] 
struct UOLBTTask_execDisplayDebug_Params
{
	class UCanvas*                                     aCanvas;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              XL;                                               		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              XPos;                                             		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0010 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLBTCompositeTask.DisplayDebug
// [0x00420002] 
struct UOLBTCompositeTask_execDisplayDebug_Params
{
	class UCanvas*                                     aCanvas;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              XL;                                               		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              XPos;                                             		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0010 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLBTIfTask.Condition
// [0x00020800] 
struct UOLBTIfTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.PointReachable
// [0x00024400] 
struct UOLNavigationHandle_execPointReachable_Params
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     OverrideStartPoint;                               		// 0x000C (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAllowHitsInEndCollisionBox : 1;                  		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathByDistance
// [0x00424400] 
struct UOLNavigationHandle_execTrimPathByDistance_Params
{
	float                                              DistanceToTrim;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     out_NewDestination;                               		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bStopAtMeshObject : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathToLastDoor
// [0x00420400] 
struct UOLNavigationHandle_execTrimPathToLastDoor_Params
{
	struct FVector                                     out_NewDestination;                               		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.ClearPath
// [0x00020400] 
struct UOLNavigationHandle_execClearPath_Params
{
};

// Function OLGame.OLNavigationHandle.PopMoveLocation
// [0x00020400] 
struct UOLNavigationHandle_execPopMoveLocation_Params
{
};

// Function OLGame.OLNavigationHandle.GetNextMovePath
// [0x00420400] 
struct UOLNavigationHandle_execGetNextMovePath_Params
{
	TArray<struct FVector>                             out_MovePath;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ArrivalDistance;                                  		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.GetNextMoveLocation
// [0x00420400] 
struct UOLNavigationHandle_execGetNextMoveLocation_Params
{
	struct FVector                                     out_MoveDest;                                     		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ArrivalDistance;                                  		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.FindPath
// [0x00424400] 
struct UOLNavigationHandle_execFindPath_Params
{
	class AActor*                                      out_DestActor;                                    		// 0x0000 (0x0008) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	int32_t                                            out_DestItem;                                     		// 0x0008 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle
// [0x00020802] 
struct UOLNavMeshPath_SimilarToLastPath_eventRecycle_Params
{
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath
// [0x00022002] 
struct UOLNavMeshPath_SimilarToLastPath_execSimilarToLastPath_Params
{
	class UNavigationHandle*                           NavHandle;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLNavMeshPath_SimilarToLastPath*            Eval;                                             		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLEnemyCannibal.NativeOnAnimEnd
// [0x00020400] 
struct AOLEnemyCannibal_execNativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyCannibal.NativeHideWeapon
// [0x00020400] 
struct AOLEnemyCannibal_execNativeHideWeapon_Params
{
};

// Function OLGame.OLEnemyCannibal.HideWeapon
// [0x00020802] 
struct AOLEnemyCannibal_eventHideWeapon_Params
{
};

// Function OLGame.OLEnemyCannibal.BuildScriptAnimSetList
// [0x00020902] 
struct AOLEnemyCannibal_eventBuildScriptAnimSetList_Params
{
	// TArray<class UAnimSet*>                            AnimSets;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLEnemySurgeon.NativeOnAnimEnd
// [0x00020400] 
struct AOLEnemySurgeon_execNativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemySurgeon.BuildScriptAnimSetList
// [0x00020902] 
struct AOLEnemySurgeon_eventBuildScriptAnimSetList_Params
{
	// TArray<class UAnimSet*>                            AnimSets;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLEnemyNanoCloud.OnSetNanoCloudVisibility
// [0x00020002] 
struct AOLEnemyNanoCloud_execOnSetNanoCloudVisibility_Params
{
	class UOLSeqAct_SetNanoCloudVisibility*            Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyNanoCloud.OnMorphNanoCloud
// [0x00020002] 
struct AOLEnemyNanoCloud_execOnMorphNanoCloud_Params
{
	class UOLSeqAct_MorphNanoCloud*                    Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyNanoCloud.PostBeginPlay
// [0x00020902] 
struct AOLEnemyNanoCloud_eventPostBeginPlay_Params
{
};

// Function OLGame.OLEnemyNanoCloud.SwitchToBloodyMaterialNotify
// [0x00020400] 
struct AOLEnemyNanoCloud_execSwitchToBloodyMaterialNotify_Params
{
};

// Function OLGame.OLEnemyNanoCloud.SetHumanForm
// [0x00020400] 
struct AOLEnemyNanoCloud_execSetHumanForm_Params
{
};

// Function OLGame.OLEnemyNanoCloud.SetSwarmForm
// [0x00020400] 
struct AOLEnemyNanoCloud_execSetSwarmForm_Params
{
};

// Function OLGame.OLEnemyNanoCloud.MorphToHuman
// [0x00024400] 
struct AOLEnemyNanoCloud_execMorphToHuman_Params
{
	float                                              TimeScale;                                        		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLEnemyNanoCloud.MorphToSwarm
// [0x00024400] 
struct AOLEnemyNanoCloud_execMorphToSwarm_Params
{
	float                                              TimeScale;                                        		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLEnemyNanoCloud.NativePostBeginPlay
// [0x00020400] 
struct AOLEnemyNanoCloud_execNativePostBeginPlay_Params
{
};

// Function OLGame.OLEnemySoldier.PlayLanded
// [0x00020002] 
struct AOLEnemySoldier_execPlayLanded_Params
{
	float                                              ImpactVel;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyGroom.PlayLanded
// [0x00020002] 
struct AOLEnemyGroom_execPlayLanded_Params
{
	float                                              ImpactVel;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLWaypoint.AnimStartedEvent
// [0x00020400] 
struct AOLWaypoint_execAnimStartedEvent_Params
{
	class AActor*                                      InInstigator;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLWaypoint.WaypointReachedEvent
// [0x00020400] 
struct AOLWaypoint_execWaypointReachedEvent_Params
{
	class AActor*                                      InInstigator;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AIStartPatrol_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Door.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Door_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Struggle.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Struggle_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_AIState.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_AIState_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_Checkpoint_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_CompareDeaths.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_CompareDeaths_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_IsTouching_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion
// [0x00022802] 
struct UOLSeqEvent_ApplyCheckpointState_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqEvent_Door.GetObjClassVersion
// [0x00022802] 
struct UOLSeqEvent_Door_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTCanAttackTask.Condition
// [0x00020802] 
struct UOLBTCanAttackTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTDistanceToPlayerTask.Condition
// [0x00020802] 
struct UOLBTDistanceToPlayerTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UOLBTDistanceToPlayerNode*                   DTPNode;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
	// float                                              DistanceSquared;                                  		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLBTHasDisturbanceTask.Condition
// [0x00020802] 
struct UOLBTHasDisturbanceTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTHasFollowPatrolTask.Condition
// [0x00020802] 
struct UOLBTHasFollowPatrolTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTHasInvestigationPointTask.Condition
// [0x00020802] 
struct UOLBTHasInvestigationPointTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTHasNewDisturbanceTask.Condition
// [0x00020802] 
struct UOLBTHasNewDisturbanceTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTHasPatrolTask.Condition
// [0x00020802] 
struct UOLBTHasPatrolTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTHasValidTargetTask.Condition
// [0x00020802] 
struct UOLBTHasValidTargetTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTHasVisibleTargetTask.Condition
// [0x00020802] 
struct UOLBTHasVisibleTargetTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTIsInBehaviorStateTask.Condition
// [0x00020802] 
struct UOLBTIsInBehaviorStateTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLBTIsInBehaviorStateNode*                  InBSNode;                                         		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBTIsInMatineeTask.Condition
// [0x00020802] 
struct UOLBTIsInMatineeTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTIsInvestigatingTask.Condition
// [0x00020802] 
struct UOLBTIsInvestigatingTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTIsTargetReachableTask.Condition
// [0x00020802] 
struct UOLBTIsTargetReachableTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTSawPlayerInBedTask.Condition
// [0x00020802] 
struct UOLBTSawPlayerInBedTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTSawPlayerInLockerTask.Condition
// [0x00020802] 
struct UOLBTSawPlayerInLockerTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTSawPlayerInSqueezeTask.Condition
// [0x00020802] 
struct UOLBTSawPlayerInSqueezeTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTShouldAttackOnProximityTask.Condition
// [0x00020802] 
struct UOLBTShouldAttackOnProximityTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTShouldAttackTask.Condition
// [0x00020802] 
struct UOLBTShouldAttackTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTTargetNotMovingTask.Condition
// [0x00020802] 
struct UOLBTTargetNotMovingTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBTWasLastMoveFailedReasonTask.Condition
// [0x00020802] 
struct UOLBTWasLastMoveFailedReasonTask_eventCondition_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLBTWasLastMoveFailedReasonNode*            LMFNode;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLEmailScreen.WidgetInitialized
// [0x00020802] 
struct UOLEmailScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLFlashBackScreen.WidgetInitialized
// [0x00020802] 
struct UOLFlashBackScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLFlashForwardScreen.WidgetInitialized
// [0x00020802] 
struct UOLFlashForwardScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLFlashLight.OnToggle
// [0x00020102] 
struct AOLFlashLight_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete
// [0x00020002] 
struct UOLGFxMoviePlayer_execOnProfileWriteComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0008 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.SaveProfile
// [0x00024002] 
struct UOLGFxMoviePlayer_execSaveProfile_Params
{
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class AOLPlayerController*                         PlayerToSave;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0020 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface
// [0x00022003] 
struct UOLGFxMoviePlayer_execGetOnlinePlayerInterface_Params
{
	class UOnlinePlayerInterface*                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                      Result;                                           		// 0x0018 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.MuteSoundThemes
// [0x00820002] 
struct UOLGFxMoviePlayer_execMuteSoundThemes_Params
{
	uint32_t                                           bMute : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FSoundThemeBinding                          SoundTheme;                                       		// 0x0004 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLGFxMoviePlayer.GetGame
// [0x00022002] 
struct UOLGFxMoviePlayer_execGetGame_Params
{
	class AOLGame*                                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AWorldInfo*                                  World;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.GetOLPC
// [0x00020002] 
struct UOLGFxMoviePlayer_execGetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.GetLocalizedString
// [0x00020002] 
struct UOLUIFrontEnd_execGetLocalizedString_Params
{
	class FString                                      Category;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      KeyName;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      File;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0030 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey
// [0x00020002] 
struct UOLUIFrontEnd_execGetGamepadActionBoundToKey_Params
{
	class FString                                      KeyNameString;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ConfigType;                                       		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FName                                       KeyName;                                          		// 0x0024 (0x0008) [0x0000000000000000]               
	// class UOLPlayerInput*                              PlayerInput;                                      		// 0x002C (0x0008) [0x0000000000000000]               
	// int32_t                                            BindIndex;                                        		// 0x0034 (0x0004) [0x0000000000000000]               
	// class FString                                      ActionString;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FKeyBind>                            GPBindings;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.HasInitializedGamma
// [0x00020002] 
struct UOLUIFrontEnd_execHasInitializedGamma_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            GammaInitialized;                                 		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName
// [0x00020002] 
struct UOLUIFrontEnd_execGetFriendlyKeyBindingName_Params
{
	class FString                                      KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.StartKeyBindingCapture
// [0x00020002] 
struct UOLUIFrontEnd_execStartKeyBindingCapture_Params
{
};

// Function OLGame.OLUIFrontEnd.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd.ConfigureTargetView
// [0x00020002] 
struct UOLUIFrontEnd_execConfigureTargetView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd.ConfigureView
// [0x00020003] 
struct UOLUIFrontEnd_execConfigureView_Params
{
	class UOLUIFrontEnd_View*                          InView;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetName;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd.PopViewStub
// [0x00020003] 
struct UOLUIFrontEnd_execPopViewStub_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PopView
// [0x00020002] 
struct UOLUIFrontEnd_execPopView_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PushViewByName
// [0x00024003] 
struct UOLUIFrontEnd_execPushViewByName_Params
{
	struct FName                                       TargetViewName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOLUIFrontEnd_Screen*                        ParentView;                                       		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd.PushView
// [0x00020002] 
struct UOLUIFrontEnd_execPushView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                       		// 0x0000 (0x0008) [0x0000000000000880] (CPF_Parm | CPF_CoerceParm)
};

// Function OLGame.OLUIFrontEnd.LoadView
// [0x00820003] 
struct UOLUIFrontEnd_execLoadView_Params
{
	struct FViewInfo                                   InViewInfo;                                       		// 0x0000 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FASValue                                    asval;                                            		// 0x0028 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FASValue>                            args;                                             		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UGFxObject*                                  ViewContainer;                                    		// 0x0058 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  ViewLoader;                                       		// 0x0060 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd.LoadViews
// [0x00020003] 
struct UOLUIFrontEnd_execLoadViews_Params
{
	// uint8_t                                            I;                                                		// 0x0000 (0x0001) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd.ConfigFrontEnd
// [0x00020003] 
struct UOLUIFrontEnd_execConfigFrontEnd_Params
{
};

// Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged
// [0x00020002] 
struct UOLUIFrontEnd_execOnKeyBindingsChanged_Params
{
};

// Function OLGame.OLUIFrontEnd.AddCaptureKeys
// [0x00020002] 
struct UOLUIFrontEnd_execAddCaptureKeys_Params
{
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class FString                                      EscapeMenuKeyString;                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      TabMenuKeyString;                                 		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      RecordingMenuKeyString;                           		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      EvidenceMenuKeyString;                            		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.OnClose
// [0x00020802] 
struct UOLUIFrontEnd_eventOnClose_Params
{
};

// Function OLGame.OLUIFrontEnd.Start
// [0x00024002] 
struct UOLUIFrontEnd_execStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execASShowNewGameIntroText_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_MainMenu_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execPopulateButtons_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
	// class UOLEngine*                                   Engine;                                           		// 0x0014 (0x0008) [0x0000000000000000]               
	// class AWorldInfo*                                  WI;                                               		// 0x001C (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     CurrentGame;                                      		// 0x0024 (0x0008) [0x0000000000000000]               
	// int32_t                                            bHasFinishedGame;                                 		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            bHasFinishedDLC;                                  		// 0x0030 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bHasValidSaveGame : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_MainMenu.back
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnExitButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnCreditsButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.Select_Options
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execSelect_Options_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnLoadButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnOKButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnChaptersButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnStartDLCButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnStartButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execGameLoadedCallback_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execStartNewGame_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execDifficultySelected_Params
{
	// class UOLEngine*                                   Engine;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execSaveLocationSelected_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnContinueButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
	// uint32_t                                           bSuccess : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_MainMenu_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Screen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execLocalizeNarrative_Params
{
	class FString                                      SectionName;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      KeyName;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execIsDLCInstalled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Screen.IsDemo
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execIsDemo_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Screen.IsTopMostView
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execIsTopMostView_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_View.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_View_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_View_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.back
// [0x00020002] 
struct UOLUIFrontEnd_View_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnViewActivated
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnTopMostView
// [0x00024000] 
struct UOLUIFrontEnd_View_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_View.OnViewLoaded
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Credits_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bIsTopmostView : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Credits.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_Credits_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execOnCreditsFinished_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.back
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIMessage.WidgetInitialized
// [0x00020802] 
struct UOLUIMessage_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIMessage.SetMessage
// [0x00020002] 
struct UOLUIMessage_execSetMessage_Params
{
	uint8_t                                            MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Message;                                          		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIMessage.SetVisible
// [0x00020002] 
struct UOLUIMessage_execSetVisible_Params
{
	uint32_t                                           bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIMessage.OnClose
// [0x00020000] 
struct UOLUIMessage_execOnClose_Params
{
};

// Function OLGame.OLUIMessage.Start
// [0x00024002] 
struct UOLUIMessage_execStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_EvidenceList_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_EvidenceList_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_EvidenceList.OnItemClick
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceList_execOnItemClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.PopulateItemList
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceList_execPopulateItemList_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               CollectedDocuments;                               		// 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FName>                               UnreadDocuments;                                  		// 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_EvidenceList_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceList_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingList.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_RecordingList_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingList.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_RecordingList_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_RecordingList.OnItemClick
// [0x00020002] 
struct UOLUIFrontEnd_RecordingList_execOnItemClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingList.PopulateItemList
// [0x00020002] 
struct UOLUIFrontEnd_RecordingList_execPopulateItemList_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               Recordings;                                       		// 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FName>                               UnreadRecordings;                                 		// 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingList.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_RecordingList_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingList.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_RecordingList_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_TabMenu_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_TabMenu.GetInventoryText
// [0x00020002] 
struct UOLUIFrontEnd_TabMenu_execGetInventoryText_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                      InventoryText;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            Count;                                            		// 0x0024 (0x0004) [0x0000000000000000]               
	// TArray<class FString>                              InventoryNames;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ItemName;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_TabMenu_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnCloseButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_TabMenu_execOnCloseButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnEvidenceButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_TabMenu_execOnEvidenceButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnRecordingButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_TabMenu_execOnRecordingButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_TabMenu_execOnButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.PopulateButtons
// [0x00020002] 
struct UOLUIFrontEnd_TabMenu_execPopulateButtons_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_TabMenu_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_TabMenu_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_ChapterSelection_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_ChapterSelection_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Load
// [0x00040003] 
struct UOLUIFrontEnd_ChapterSelection_execPress_Load_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.LoadSelectedChapter
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execLoadSelectedChapter_Params
{
	// class FString                                      StartCPName;                                      		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.SetSelectedIndex
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execSetSelectedIndex_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.ChapterListChanged
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execChapterListChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UGFxObject*                                  Group;                                            		// 0x0034 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  Button;                                           		// 0x003C (0x0008) [0x0000000000000000]               
	// int32_t                                            Index;                                            		// 0x0044 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execPopulateChapterList_Params
{
	// class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
	// int32_t                                            bHasFinishedGame;                                 		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            bHasFinishedDLC;                                  		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Pop
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_ChapterSelection_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_ChapterSelection_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_DifficultySelectionScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog
// [0x00040003] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execASShowConfirmInsaneDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_DifficultySelectionScreen_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execProceedToStartGame_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnConfirmedInsane_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Insane_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Nightmare_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Hard_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Normal_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured
// [0x00040003] 
struct UOLUIFrontEnd_Options_execASOnKeyBindingCaptured_Params
{
	class FString                                      KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog
// [0x00040003] 
struct UOLUIFrontEnd_Options_execShowMessageDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog
// [0x00040003] 
struct UOLUIFrontEnd_Options_execShowKeyBindingConflictDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog
// [0x00040003] 
struct UOLUIFrontEnd_Options_execShowChangeConfirmationDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowResolutionConfirmationDialogAfterDelay
// [0x00040003] 
struct UOLUIFrontEnd_Options_execShowResolutionConfirmationDialogAfterDelay_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGammaSetting
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            GammaIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.OnSliderChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnSliderChanged_Params
{
	int32_t                                            ProfileSettingId;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              SliderValue;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetKeyBindingConflicts_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<class FString>                              KeysBound;                                        		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              Conflicts;                                        		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Key;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetCurrentGFxList_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SetGammaExternally
// [0x00020002] 
struct UOLUIFrontEnd_Options_execSetGammaExternally_Params
{
	float                                              Gamma;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            GammaOption;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally
// [0x00020002] 
struct UOLUIFrontEnd_Options_execSetGamepadConfigExternally_Params
{
	int32_t                                            ConfigIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            GamepadConfigOption;                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetGamepadConfig_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            GamepadConfigOption;                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.GetDisplayedResolutionIndexFromOriginalIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetDisplayedResolutionIndexFromOriginalIndex_Params
{
	int32_t                                            OriginalIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FName                                       ResolutionName;                                   		// 0x0008 (0x0008) [0x0000000000000000]               
	// int32_t                                            DisplayedIdx;                                     		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.GetOriginalResolutionIndexFromDisplayedIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetOriginalResolutionIndexFromDisplayedIndex_Params
{
	int32_t                                            DisplayedIndex;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FName                                       ResolutionName;                                   		// 0x0008 (0x0008) [0x0000000000000000]               
	// int32_t                                            OriginalIdx;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.RemoveUnsupportedResolutionsFromList
// [0x00020002] 
struct UOLUIFrontEnd_Options_execRemoveUnsupportedResolutionsFromList_Params
{
	TArray<struct FName>                               OriginalList;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FName>                               ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0020 (0x0004) [0x0000000000000000]               
	// TArray<struct FName>                               newList;                                          		// 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetFullscreenOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetResolutionOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.HasResolutionChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_execHasResolutionChanged_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            OptionProfileValue_Int;                           		// 0x0004 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Idx;                           		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            ConvertedIdx;                                     		// 0x000C (0x0004) [0x0000000000000000]               
	// uint32_t                                           bResolutionChanged : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bFullscreenChanged : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            OriginalResolutionListIndex;                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Options_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.GetOLProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetOLProfile_Params
{
	class UOLProfileSettings*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_execSaveSettingsToProfile_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              OptionValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              OptionProfileValue_Float;                         		// 0x0008 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bHasResolutionChanged : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bProfileIsDirty : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bGeneralOptionsDirty : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bGraphicsOptionsDirty : 1;                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bControlsOptionsDirty : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bWasJPN : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bIsJPN : 1;                                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            CurrentLanguage;                                  		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_execHasAnyPropertyChanged_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bPropertyChanged : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList
// [0x00820002] 
struct UOLUIFrontEnd_Options_execHasPropertyChangedInList_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLEngine*                                   TheEngine;                                        		// 0x001C (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FOptionInfo                                 CurrentOptionInfo;                                		// 0x002C (0x0054) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              OptionProfileValue_Float;                         		// 0x0080 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Int;                           		// 0x0084 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Idx;                           		// 0x0088 (0x0004) [0x0000000000000000]               
	// int32_t                                            ConvertedIdx;                                     		// 0x008C (0x0004) [0x0000000000000000]               
	// class FString                                      OptionProfileValue_String;                        		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPropertyChanged : 1;                             		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            CurrentDropdownValue;                             		// 0x00A4 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList
// [0x00820002] 
struct UOLUIFrontEnd_Options_execSaveSettingsForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLEngine*                                   TheEngine;                                        		// 0x0014 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0020 (0x0004) [0x0000000000000000]               
	// struct FOptionInfo                                 CurrentOptionInfo;                                		// 0x0024 (0x0054) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              OptionProfileValue_Float;                         		// 0x0078 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Int;                           		// 0x007C (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Idx;                           		// 0x0080 (0x0004) [0x0000000000000000]               
	// int32_t                                            ConvertedIdx;                                     		// 0x0084 (0x0004) [0x0000000000000000]               
	// class FString                                      OptionProfileValue_String;                        		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPropertyChanged : 1;                             		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           OptionOldValue_Bool : 1;                          		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            CurrentDropdownValue;                             		// 0x00A0 (0x0004) [0x0000000000000000]               
	// uint8_t                                            OptionOldValue_Difficulty;                        		// 0x00A4 (0x0001) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.TabChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList
// [0x00420002] 
struct UOLUIFrontEnd_Options_execStoreOptionValuesForList_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// float                                              FloatValue;                                       		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      StringValue;                                      		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt
// [0x00820002] 
struct UOLUIFrontEnd_Options_execGetOptionValueStringAt_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x000C (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<struct FASValue>                            args;                                             		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FASValue                                    Retval;                                           		// 0x002C (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt
// [0x00820002] 
struct UOLUIFrontEnd_Options_execGetOptionValueAt_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// TArray<struct FASValue>                            args;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FASValue                                    Retval;                                           		// 0x0020 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList
// [0x00420002] 
struct UOLUIFrontEnd_Options_execSetDefaultOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UOLEngine*                                   TheEngine;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionValueInt;                            		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            ListIndex;                                        		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              CurrentOptionValueFloat;                          		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList
// [0x00420002] 
struct UOLUIFrontEnd_Options_execFillOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UOLEngine*                                   TheEngine;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionValueInt;                            		// 0x0020 (0x0004) [0x0000000000000000]               
	// float                                              CurrentOptionValueFloat;                          		// 0x0024 (0x0004) [0x0000000000000000]               
	// class FString                                      CurrentOptionValueString;                         		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_execFillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateControlsOptions_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateGraphicsOptions_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateGeneralOptions_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetObjectFromOptionW_Params
{
	struct FOptionInfo                                 CurrentOptionInfo;                                		// 0x0000 (0x0054) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0054 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            J;                                                		// 0x005C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0060 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0064 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  OptionListProvider;                               		// 0x006C (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               OptionValueNames;                                 		// 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              OptionValueStrings;                               		// 0x0084 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FName                                       OptVal;                                           		// 0x0094 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateTabButtons_Params
{
	// class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.UseGeneralOptionsWithDifficulty
// [0x00020002] 
struct UOLUIFrontEnd_Options_execUseGeneralOptionsWithDifficulty_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_OptionItemButton_Params
{
	int32_t                                            PSID;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.Press_Reset
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Reset_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   TheEngine;                                        		// 0x0034 (0x0008) [0x0000000000000000]               
	// int32_t                                            GammaIndex;                                       		// 0x003C (0x0004) [0x0000000000000000]               
	// float                                              GammaValue;                                       		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.Press_Gamma
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Gamma_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.OnConfirmChanges
// [0x00820002] 
struct UOLUIFrontEnd_Options_execOnConfirmChanges_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FEventData                                  ev;                                               		// 0x0004 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.RevertToPreviousResolution
// [0x00020002] 
struct UOLUIFrontEnd_Options_execRevertToPreviousResolution_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnConfirmResolution
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnConfirmResolution_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnDismissKeyBindingConflictDialog_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Apply
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Apply_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// uint32_t                                           bHasResolutionChanged : 1;                        		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray<class FString>                              KeyBindingConflicts;                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              KeyBindingConflictsLocalized;                     		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      KeyBindingConflictsString;                        		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0068 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnMustRestartAccepted_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen
// [0x00020002] 
struct UOLUIFrontEnd_Options_execExitOptionsScreen_Params
{
	// float                                              Gamma;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.back
// [0x00020002] 
struct UOLUIFrontEnd_Options_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bAnyPropertyChanged : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnViewLoaded_Params
{
	// class UOLEngine*                                   TheEngine;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_LoadGame.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_LoadGame_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_LoadGame.GetCheckpointTag
// [0x00020002] 
struct UOLUIFrontEnd_LoadGame_execGetCheckpointTag_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FName                                       Tag;                                              		// 0x0010 (0x0008) [0x0000000000000000]               
	// class AOLCheckpoint*                               cp;                                               		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_LoadGame.GetSaveFileDisplayName
// [0x00820002] 
struct UOLUIFrontEnd_LoadGame_execGetSaveFileDisplayName_Params
{
	struct FSaveFileInfo                               SaveFile;                                         		// 0x0000 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0028 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FCheckpointTime                             SaveFileTime;                                     		// 0x0038 (0x0010) [0x0000000000000000]               
	// class FString                                      DateString;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      TimeString;                                       		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Minutes;                                          		// 0x0068 (0x0004) [0x0000000000000000]               
	// struct FName                                       CheckpointTag;                                    		// 0x006C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_LoadGame.SetSelectedIndex
// [0x00020002] 
struct UOLUIFrontEnd_LoadGame_execSetSelectedIndex_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_LoadGame.SaveListChanged
// [0x00020002] 
struct UOLUIFrontEnd_LoadGame_execSaveListChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UGFxObject*                                  Group;                                            		// 0x0034 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  Button;                                           		// 0x003C (0x0008) [0x0000000000000000]               
	// int32_t                                            Index;                                            		// 0x0044 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_LoadGame.PopulateSaveList
// [0x00020002] 
struct UOLUIFrontEnd_LoadGame_execPopulateSaveList_Params
{
	// class UOLEngine*                                   Engine;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x000C (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Delete
// [0x00020002] 
struct UOLUIFrontEnd_LoadGame_execPress_Delete_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
	// int32_t                                            PreviousSelectedIndex;                            		// 0x003C (0x0004) [0x0000000000000000]               
	// int32_t                                            PreviousScrollPosition;                           		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Load
// [0x00020002] 
struct UOLUIFrontEnd_LoadGame_execPress_Load_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_LoadGame_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_LoadGame.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_LoadGame_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_PauseMenu_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_PauseMenu_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execASShowConfirmExitDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execOnExitConfirmed_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnExitToMenuButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class AOLGame*                                     TheGame;                                          		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execOnSaveCompleted_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnSaveButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x003C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnReturnButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execPopulateButtons_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_PauseMenu_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASPreviousPage
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASNextPage
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASPaginateText
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_RecordingView_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_RecordingView_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_RecordingView.GoAfterLastPage
// [0x00020000] 
struct UOLUIFrontEnd_RecordingView_execGoAfterLastPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.GoBeforeFirstPage
// [0x00020000] 
struct UOLUIFrontEnd_RecordingView_execGoBeforeFirstPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Close
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execPress_Close_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Next
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execPress_Next_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Previous
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execPress_Previous_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASPreviousPage
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASNextPage
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASPaginateText
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_EvidenceView_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_EvidenceView_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_EvidenceView.GoAfterLastPage
// [0x00020000] 
struct UOLUIFrontEnd_EvidenceView_execGoAfterLastPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.GoBeforeFirstPage
// [0x00020000] 
struct UOLUIFrontEnd_EvidenceView_execGoBeforeFirstPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Close
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execPress_Close_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Next
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execPress_Next_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Previous
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execPress_Previous_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execGetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              GammaSetting;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execIsGammaInitialized_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Initialized;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execChange_Slider_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// float                                              FloatValue;                                       		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execOnAccept_Params
{
	// float                                              GammaValue;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execPress_Accept_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GammaScreen_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// float                                              CurrentGammaValue;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels
// [0x00040003] 
struct UOLUIFrontEnd_GamepadScreen_execASUpdateGamepadLabels_Params
{
	int32_t                                            ConfigType;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GamepadScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPopulateTabButtons_Params
{
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               OptionValueNames;                                 		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_GamepadScreen_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPress_Accept_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GamepadScreen_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Options_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_Options_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execGetFullscreenOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execGetResolutionOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execHasResolutionChanged_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.TabChanged
// [0x00020000] 
struct UOLUIFrontEnd_Options_Console_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.SetGammaExternally
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execSetGammaExternally_Params
{
	float                                              Gamma;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            GammaOption;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetCurrentGammaSetting
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execGetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            GammaIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options_Console.ResetPS4Options
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execResetPS4Options_Params
{
	// int32_t                                            GammaIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
	// float                                              GammaValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_Reset_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execFillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions
// [0x00020000] 
struct UOLUIFrontEnd_Options_Console_execPopulateControlsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPopulateTabButtons_Params
{
	// class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_Apply_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_OptionItemButton_Params
{
	int32_t                                            PSID;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_Gamma_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.back
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_Options_Console_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execOnViewLoaded_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPreviousPage
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_Console_execASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASNextPage
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_Console_execASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPaginateText
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_Console_execASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetNumPages
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_Console_execGetNumPages_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetCurrentPage
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_Console_execGetCurrentPage_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_RecordingView_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_RecordingView_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_Console_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_RecordingView_Console_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPreviousPage
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_Console_execASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASNextPage
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_Console_execASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPaginateText
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_Console_execASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetNumPages
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_Console_execGetNumPages_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetCurrentPage
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_Console_execGetCurrentPage_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_EvidenceView_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_EvidenceView_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_Console_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_EvidenceView_Console_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton
// [0x00040003] 
struct UOLUIFrontEnd_GammaScreen_Console_execASDisableBackButton_Params
{
	uint32_t                                           bDisable : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execGetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              GammaSetting;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execIsGammaInitialized_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Initialized;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execChange_Slider_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// float                                              FloatValue;                                       		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnAccept_Params
{
	// float                                              GammaValue;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execPress_Accept_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// float                                              CurrentGammaValue;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels
// [0x00040003] 
struct UOLUIFrontEnd_GamepadScreen_Console_execASUpdateGamepadLabels_Params
{
	int32_t                                            ConfigType;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GamepadScreen_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_GamepadScreen_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execPopulateTabButtons_Params
{
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               OptionValueNames;                                 		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_GamepadScreen_Console_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIPopupScreen.FilterButtonInput
// [0x00020802] 
struct UOLUIPopupScreen_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIPopupScreen.OnClose
// [0x00020000] 
struct UOLUIPopupScreen_execOnClose_Params
{
};

// Function OLGame.OLUIPopupScreen.Start
// [0x00024002] 
struct UOLUIPopupScreen_execStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
