/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OLGame_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function OLGame.OLBashableObject.OnToggle
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLBashableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLBashableObject.OnToggle");
	}

	AOLBashableObject_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLBashableObject.ClearBreakTimer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBashableObject::ClearBreakTimer()
{
	static UFunction* uFnClearBreakTimer = nullptr;

	if (!uFnClearBreakTimer)
	{
		uFnClearBreakTimer = UFunction::FindFunction("Function OLGame.OLBashableObject.ClearBreakTimer");
	}

	AOLBashableObject_execClearBreakTimer_Params ClearBreakTimer_Params;
	memset(&ClearBreakTimer_Params, 0, sizeof(ClearBreakTimer_Params));

	this->ProcessEvent(uFnClearBreakTimer, &ClearBreakTimer_Params, nullptr);
};

// Function OLGame.OLBashableObject.TriggerBreakTimer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Time                           (CPF_Parm)

void AOLBashableObject::TriggerBreakTimer(float Time)
{
	static UFunction* uFnTriggerBreakTimer = nullptr;

	if (!uFnTriggerBreakTimer)
	{
		uFnTriggerBreakTimer = UFunction::FindFunction("Function OLGame.OLBashableObject.TriggerBreakTimer");
	}

	AOLBashableObject_execTriggerBreakTimer_Params TriggerBreakTimer_Params;
	memset(&TriggerBreakTimer_Params, 0, sizeof(TriggerBreakTimer_Params));
	memcpy_s(&TriggerBreakTimer_Params.Time, sizeof(TriggerBreakTimer_Params.Time), &Time, sizeof(Time));

	this->ProcessEvent(uFnTriggerBreakTimer, &TriggerBreakTimer_Params, nullptr);
};

// Function OLGame.OLBashableObject.Break
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBashableObject::Break()
{
	static UFunction* uFnBreak = nullptr;

	if (!uFnBreak)
	{
		uFnBreak = UFunction::FindFunction("Function OLGame.OLBashableObject.Break");
	}

	AOLBashableObject_execBreak_Params Break_Params;
	memset(&Break_Params, 0, sizeof(Break_Params));

	this->ProcessEvent(uFnBreak, &Break_Params, nullptr);
};

// Function OLGame.OLCamcorderHud.UpdateRecordingTime
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UOLCamcorderHud::UpdateRecordingTime(float DeltaTime)
{
	static UFunction* uFnUpdateRecordingTime = nullptr;

	if (!uFnUpdateRecordingTime)
	{
		uFnUpdateRecordingTime = UFunction::FindFunction("Function OLGame.OLCamcorderHud.UpdateRecordingTime");
	}

	UOLCamcorderHud_execUpdateRecordingTime_Params UpdateRecordingTime_Params;
	memset(&UpdateRecordingTime_Params, 0, sizeof(UpdateRecordingTime_Params));
	memcpy_s(&UpdateRecordingTime_Params.DeltaTime, sizeof(UpdateRecordingTime_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdateRecordingTime, &UpdateRecordingTime_Params, nullptr);
};

// Function OLGame.OLCamcorderHud.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLCamcorderHud::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLCamcorderHud.WidgetInitialized");
	}

	UOLCamcorderHud_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLCamcorderHud.SetVisible
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bShow                          (CPF_Parm)

void UOLCamcorderHud::eventSetVisible(bool bShow)
{
	static UFunction* uFnSetVisible = nullptr;

	if (!uFnSetVisible)
	{
		uFnSetVisible = UFunction::FindFunction("Function OLGame.OLCamcorderHud.SetVisible");
	}

	UOLCamcorderHud_eventSetVisible_Params SetVisible_Params;
	memset(&SetVisible_Params, 0, sizeof(SetVisible_Params));
	SetVisible_Params.bShow = bShow;

	this->ProcessEvent(uFnSetVisible, &SetVisible_Params, nullptr);
};

// Function OLGame.OLCameraActor.GetCameraView
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FTPOV                   OutPOV                         (CPF_Parm | CPF_OutParm)

void AOLCameraActor::GetCameraView(float DeltaTime, struct FTPOV& OutPOV)
{
	static UFunction* uFnGetCameraView = nullptr;

	if (!uFnGetCameraView)
	{
		uFnGetCameraView = UFunction::FindFunction("Function OLGame.OLCameraActor.GetCameraView");
	}

	AOLCameraActor_execGetCameraView_Params GetCameraView_Params;
	memset(&GetCameraView_Params, 0, sizeof(GetCameraView_Params));
	memcpy_s(&GetCameraView_Params.DeltaTime, sizeof(GetCameraView_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&GetCameraView_Params.OutPOV, sizeof(GetCameraView_Params.OutPOV), &OutPOV, sizeof(OutPOV));

	this->ProcessEvent(uFnGetCameraView, &GetCameraView_Params, nullptr);

	memcpy_s(&OutPOV, sizeof(OutPOV), &GetCameraView_Params.OutPOV, sizeof(GetCameraView_Params.OutPOV));
};

// Function OLGame.OLCameraActor.NativeGetCameraView
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FTPOV                   OutPOV                         (CPF_Parm | CPF_OutParm)

void AOLCameraActor::NativeGetCameraView(struct FTPOV& OutPOV)
{
	static UFunction* uFnNativeGetCameraView = nullptr;

	if (!uFnNativeGetCameraView)
	{
		uFnNativeGetCameraView = UFunction::FindFunction("Function OLGame.OLCameraActor.NativeGetCameraView");
	}

	AOLCameraActor_execNativeGetCameraView_Params NativeGetCameraView_Params;
	memset(&NativeGetCameraView_Params, 0, sizeof(NativeGetCameraView_Params));
	memcpy_s(&NativeGetCameraView_Params.OutPOV, sizeof(NativeGetCameraView_Params.OutPOV), &OutPOV, sizeof(OutPOV));

	uFnNativeGetCameraView->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeGetCameraView, &NativeGetCameraView_Params, nullptr);
	uFnNativeGetCameraView->FunctionFlags |= 0x400;

	memcpy_s(&OutPOV, sizeof(OutPOV), &NativeGetCameraView_Params.OutPOV, sizeof(NativeGetCameraView_Params.OutPOV));
};

// Function OLGame.OLPlayerController.UnlockAchievement
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOutlastAchievement            achievement                    (CPF_Parm)

void AOLPlayerController::eventUnlockAchievement(EOutlastAchievement achievement)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function OLGame.OLPlayerController.UnlockAchievement");
	}

	AOLPlayerController_eventUnlockAchievement_Params UnlockAchievement_Params;
	memset(&UnlockAchievement_Params, 0, sizeof(UnlockAchievement_Params));
	memcpy_s(&UnlockAchievement_Params.achievement, sizeof(UnlockAchievement_Params.achievement), &achievement, sizeof(achievement));

	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);
};

// Function OLGame.OLPlayerController.NotifyDifficultyChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::NotifyDifficultyChanged()
{
	static UFunction* uFnNotifyDifficultyChanged = nullptr;

	if (!uFnNotifyDifficultyChanged)
	{
		uFnNotifyDifficultyChanged = UFunction::FindFunction("Function OLGame.OLPlayerController.NotifyDifficultyChanged");
	}

	AOLPlayerController_execNotifyDifficultyChanged_Params NotifyDifficultyChanged_Params;
	memset(&NotifyDifficultyChanged_Params, 0, sizeof(NotifyDifficultyChanged_Params));

	this->ProcessEvent(uFnNotifyDifficultyChanged, &NotifyDifficultyChanged_Params, nullptr);
};

// Function OLGame.OLPlayerController.UpdateDifficultyBasedValues
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::UpdateDifficultyBasedValues()
{
	static UFunction* uFnUpdateDifficultyBasedValues = nullptr;

	if (!uFnUpdateDifficultyBasedValues)
	{
		uFnUpdateDifficultyBasedValues = UFunction::FindFunction("Function OLGame.OLPlayerController.UpdateDifficultyBasedValues");
	}

	AOLPlayerController_execUpdateDifficultyBasedValues_Params UpdateDifficultyBasedValues_Params;
	memset(&UpdateDifficultyBasedValues_Params, 0, sizeof(UpdateDifficultyBasedValues_Params));

	this->ProcessEvent(uFnUpdateDifficultyBasedValues, &UpdateDifficultyBasedValues_Params, nullptr);
};

// Function OLGame.OLPlayerController.CheckForProfileUpdate
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::eventCheckForProfileUpdate()
{
	static UFunction* uFnCheckForProfileUpdate = nullptr;

	if (!uFnCheckForProfileUpdate)
	{
		uFnCheckForProfileUpdate = UFunction::FindFunction("Function OLGame.OLPlayerController.CheckForProfileUpdate");
	}

	AOLPlayerController_eventCheckForProfileUpdate_Params CheckForProfileUpdate_Params;
	memset(&CheckForProfileUpdate_Params, 0, sizeof(CheckForProfileUpdate_Params));

	this->ProcessEvent(uFnCheckForProfileUpdate, &CheckForProfileUpdate_Params, nullptr);
};

// Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLProfileSettings*      EffectiveProfileSettings       (CPF_Parm)

void AOLPlayerController::eventUpdateLocalCacheOfProfileSettings(class UOLProfileSettings* EffectiveProfileSettings)
{
	static UFunction* uFnUpdateLocalCacheOfProfileSettings = nullptr;

	if (!uFnUpdateLocalCacheOfProfileSettings)
	{
		uFnUpdateLocalCacheOfProfileSettings = UFunction::FindFunction("Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings");
	}

	AOLPlayerController_eventUpdateLocalCacheOfProfileSettings_Params UpdateLocalCacheOfProfileSettings_Params;
	memset(&UpdateLocalCacheOfProfileSettings_Params, 0, sizeof(UpdateLocalCacheOfProfileSettings_Params));
	memcpy_s(&UpdateLocalCacheOfProfileSettings_Params.EffectiveProfileSettings, sizeof(UpdateLocalCacheOfProfileSettings_Params.EffectiveProfileSettings), &EffectiveProfileSettings, sizeof(EffectiveProfileSettings));

	this->ProcessEvent(uFnUpdateLocalCacheOfProfileSettings, &UpdateLocalCacheOfProfileSettings_Params, nullptr);
};

// Function OLGame.OLPlayerController.ClientSaveAllPlayerData
// [0xFFFF0000010241C2] (FUNC_Defined | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetClient | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           bShouldForce                   (CPF_OptionalParm | CPF_Parm)
// bool                           bSkipCacheUpdate               (CPF_OptionalParm | CPF_Parm)

void AOLPlayerController::ClientSaveAllPlayerData(bool bShouldForce, bool bSkipCacheUpdate)
{
	static UFunction* uFnClientSaveAllPlayerData = nullptr;

	if (!uFnClientSaveAllPlayerData)
	{
		uFnClientSaveAllPlayerData = UFunction::FindFunction("Function OLGame.OLPlayerController.ClientSaveAllPlayerData");
	}

	AOLPlayerController_execClientSaveAllPlayerData_Params ClientSaveAllPlayerData_Params;
	memset(&ClientSaveAllPlayerData_Params, 0, sizeof(ClientSaveAllPlayerData_Params));
	ClientSaveAllPlayerData_Params.bShouldForce = bShouldForce;
	ClientSaveAllPlayerData_Params.bSkipCacheUpdate = bSkipCacheUpdate;

	this->ProcessEvent(uFnClientSaveAllPlayerData, &ClientSaveAllPlayerData_Params, nullptr);
};

// Function OLGame.OLPlayerController.OnProfileWriteComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void AOLPlayerController::OnProfileWriteComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnProfileWriteComplete = nullptr;

	if (!uFnOnProfileWriteComplete)
	{
		uFnOnProfileWriteComplete = UFunction::FindFunction("Function OLGame.OLPlayerController.OnProfileWriteComplete");
	}

	AOLPlayerController_execOnProfileWriteComplete_Params OnProfileWriteComplete_Params;
	memset(&OnProfileWriteComplete_Params, 0, sizeof(OnProfileWriteComplete_Params));
	memcpy_s(&OnProfileWriteComplete_Params.LocalUserNum, sizeof(OnProfileWriteComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnProfileWriteComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnProfileWriteComplete, &OnProfileWriteComplete_Params, nullptr);
};

// Function OLGame.OLPlayerController.ClearSaveProfileDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void AOLPlayerController::ClearSaveProfileDelegate(int32_t ControllerId, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearSaveProfileDelegate = nullptr;

	if (!uFnClearSaveProfileDelegate)
	{
		uFnClearSaveProfileDelegate = UFunction::FindFunction("Function OLGame.OLPlayerController.ClearSaveProfileDelegate");
	}

	AOLPlayerController_execClearSaveProfileDelegate_Params ClearSaveProfileDelegate_Params;
	memset(&ClearSaveProfileDelegate_Params, 0, sizeof(ClearSaveProfileDelegate_Params));
	memcpy_s(&ClearSaveProfileDelegate_Params.ControllerId, sizeof(ClearSaveProfileDelegate_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&ClearSaveProfileDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(ClearSaveProfileDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearSaveProfileDelegate, &ClearSaveProfileDelegate_Params, nullptr);
};

// Function OLGame.OLPlayerController.SaveProfile
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::eventSaveProfile()
{
	static UFunction* uFnSaveProfile = nullptr;

	if (!uFnSaveProfile)
	{
		uFnSaveProfile = UFunction::FindFunction("Function OLGame.OLPlayerController.SaveProfile");
	}

	AOLPlayerController_eventSaveProfile_Params SaveProfile_Params;
	memset(&SaveProfile_Params, 0, sizeof(SaveProfile_Params));

	this->ProcessEvent(uFnSaveProfile, &SaveProfile_Params, nullptr);
};

// Function OLGame.OLPlayerController.UnregisterPlayerDataStores
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::UnregisterPlayerDataStores()
{
	static UFunction* uFnUnregisterPlayerDataStores = nullptr;

	if (!uFnUnregisterPlayerDataStores)
	{
		uFnUnregisterPlayerDataStores = UFunction::FindFunction("Function OLGame.OLPlayerController.UnregisterPlayerDataStores");
	}

	AOLPlayerController_execUnregisterPlayerDataStores_Params UnregisterPlayerDataStores_Params;
	memset(&UnregisterPlayerDataStores_Params, 0, sizeof(UnregisterPlayerDataStores_Params));

	this->ProcessEvent(uFnUnregisterPlayerDataStores, &UnregisterPlayerDataStores_Params, nullptr);
};

// Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores
// [0x00080102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::RegisterCustomPlayerDataStores()
{
	static UFunction* uFnRegisterCustomPlayerDataStores = nullptr;

	if (!uFnRegisterCustomPlayerDataStores)
	{
		uFnRegisterCustomPlayerDataStores = UFunction::FindFunction("Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores");
	}

	AOLPlayerController_execRegisterCustomPlayerDataStores_Params RegisterCustomPlayerDataStores_Params;
	memset(&RegisterCustomPlayerDataStores_Params, 0, sizeof(RegisterCustomPlayerDataStores_Params));

	this->ProcessEvent(uFnRegisterCustomPlayerDataStores, &RegisterCustomPlayerDataStores_Params, nullptr);
};

// Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLPlayerController::ShippingCheat_GiveAllCheckpoints()
{
	static UFunction* uFnShippingCheat_GiveAllCheckpoints = nullptr;

	if (!uFnShippingCheat_GiveAllCheckpoints)
	{
		uFnShippingCheat_GiveAllCheckpoints = UFunction::FindFunction("Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints");
	}

	AOLPlayerController_execShippingCheat_GiveAllCheckpoints_Params ShippingCheat_GiveAllCheckpoints_Params;
	memset(&ShippingCheat_GiveAllCheckpoints_Params, 0, sizeof(ShippingCheat_GiveAllCheckpoints_Params));

	uFnShippingCheat_GiveAllCheckpoints->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShippingCheat_GiveAllCheckpoints, &ShippingCheat_GiveAllCheckpoints_Params, nullptr);
	uFnShippingCheat_GiveAllCheckpoints->FunctionFlags |= 0x400;

	return ShippingCheat_GiveAllCheckpoints_Params.ReturnValue;
};

// Function OLGame.OLPlayerController.ClearAllProgress
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::ClearAllProgress()
{
	static UFunction* uFnClearAllProgress = nullptr;

	if (!uFnClearAllProgress)
	{
		uFnClearAllProgress = UFunction::FindFunction("Function OLGame.OLPlayerController.ClearAllProgress");
	}

	AOLPlayerController_execClearAllProgress_Params ClearAllProgress_Params;
	memset(&ClearAllProgress_Params, 0, sizeof(ClearAllProgress_Params));

	uFnClearAllProgress->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearAllProgress, &ClearAllProgress_Params, nullptr);
	uFnClearAllProgress->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.SaveBeforeQuitting
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::SaveBeforeQuitting()
{
	static UFunction* uFnSaveBeforeQuitting = nullptr;

	if (!uFnSaveBeforeQuitting)
	{
		uFnSaveBeforeQuitting = UFunction::FindFunction("Function OLGame.OLPlayerController.SaveBeforeQuitting");
	}

	AOLPlayerController_execSaveBeforeQuitting_Params SaveBeforeQuitting_Params;
	memset(&SaveBeforeQuitting_Params, 0, sizeof(SaveBeforeQuitting_Params));

	uFnSaveBeforeQuitting->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSaveBeforeQuitting, &SaveBeforeQuitting_Params, nullptr);
	uFnSaveBeforeQuitting->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.ClientCommitMapChange
// [0xFFFF0000010209C2] (FUNC_Defined | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::eventClientCommitMapChange()
{
	static UFunction* uFnClientCommitMapChange = nullptr;

	if (!uFnClientCommitMapChange)
	{
		uFnClientCommitMapChange = UFunction::FindFunction("Function OLGame.OLPlayerController.ClientCommitMapChange");
	}

	AOLPlayerController_eventClientCommitMapChange_Params ClientCommitMapChange_Params;
	memset(&ClientCommitMapChange_Params, 0, sizeof(ClientCommitMapChange_Params));

	this->ProcessEvent(uFnClientCommitMapChange, &ClientCommitMapChange_Params, nullptr);
};

// Function OLGame.OLPlayerController.StartNewGameAtCheckpoint
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  CheckpointStr                  (CPF_Parm | CPF_NeedCtorLink)
// bool                           bSaveToDisk                    (CPF_Parm)

void AOLPlayerController::eventStartNewGameAtCheckpoint(class FString CheckpointStr, bool bSaveToDisk)
{
	static UFunction* uFnStartNewGameAtCheckpoint = nullptr;

	if (!uFnStartNewGameAtCheckpoint)
	{
		uFnStartNewGameAtCheckpoint = UFunction::FindFunction("Function OLGame.OLPlayerController.StartNewGameAtCheckpoint");
	}

	AOLPlayerController_eventStartNewGameAtCheckpoint_Params StartNewGameAtCheckpoint_Params;
	memset(&StartNewGameAtCheckpoint_Params, 0, sizeof(StartNewGameAtCheckpoint_Params));
	memcpy_s(&StartNewGameAtCheckpoint_Params.CheckpointStr, sizeof(StartNewGameAtCheckpoint_Params.CheckpointStr), &CheckpointStr, sizeof(CheckpointStr));
	StartNewGameAtCheckpoint_Params.bSaveToDisk = bSaveToDisk;

	this->ProcessEvent(uFnStartNewGameAtCheckpoint, &StartNewGameAtCheckpoint_Params, nullptr);
};

// Function OLGame.OLPlayerController.ApplyDeprecatedCheckpointRecord
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FDeprecatedCheckpointRecord OldRecord                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AOLPlayerController::ApplyDeprecatedCheckpointRecord(struct FDeprecatedCheckpointRecord& OldRecord)
{
	static UFunction* uFnApplyDeprecatedCheckpointRecord = nullptr;

	if (!uFnApplyDeprecatedCheckpointRecord)
	{
		uFnApplyDeprecatedCheckpointRecord = UFunction::FindFunction("Function OLGame.OLPlayerController.ApplyDeprecatedCheckpointRecord");
	}

	AOLPlayerController_execApplyDeprecatedCheckpointRecord_Params ApplyDeprecatedCheckpointRecord_Params;
	memset(&ApplyDeprecatedCheckpointRecord_Params, 0, sizeof(ApplyDeprecatedCheckpointRecord_Params));
	memcpy_s(&ApplyDeprecatedCheckpointRecord_Params.OldRecord, sizeof(ApplyDeprecatedCheckpointRecord_Params.OldRecord), &OldRecord, sizeof(OldRecord));

	this->ProcessEvent(uFnApplyDeprecatedCheckpointRecord, &ApplyDeprecatedCheckpointRecord_Params, nullptr);

	memcpy_s(&OldRecord, sizeof(OldRecord), &ApplyDeprecatedCheckpointRecord_Params.OldRecord, sizeof(ApplyDeprecatedCheckpointRecord_Params.OldRecord));
};

// Function OLGame.OLPlayerController.ApplyCheckpointRecord
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct AOLPlayerController_FCheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AOLPlayerController::ApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record)
{
	static UFunction* uFnApplyCheckpointRecord = nullptr;

	if (!uFnApplyCheckpointRecord)
	{
		uFnApplyCheckpointRecord = UFunction::FindFunction("Function OLGame.OLPlayerController.ApplyCheckpointRecord");
	}

	AOLPlayerController_execApplyCheckpointRecord_Params ApplyCheckpointRecord_Params;
	memset(&ApplyCheckpointRecord_Params, 0, sizeof(ApplyCheckpointRecord_Params));
	memcpy_s(&ApplyCheckpointRecord_Params.Record, sizeof(ApplyCheckpointRecord_Params.Record), &Record, sizeof(Record));

	this->ProcessEvent(uFnApplyCheckpointRecord, &ApplyCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, sizeof(Record), &ApplyCheckpointRecord_Params.Record, sizeof(ApplyCheckpointRecord_Params.Record));
};

// Function OLGame.OLPlayerController.CreateCheckpointRecord
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct AOLPlayerController_FCheckpointRecord Record                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AOLPlayerController::CreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record)
{
	static UFunction* uFnCreateCheckpointRecord = nullptr;

	if (!uFnCreateCheckpointRecord)
	{
		uFnCreateCheckpointRecord = UFunction::FindFunction("Function OLGame.OLPlayerController.CreateCheckpointRecord");
	}

	AOLPlayerController_execCreateCheckpointRecord_Params CreateCheckpointRecord_Params;
	memset(&CreateCheckpointRecord_Params, 0, sizeof(CreateCheckpointRecord_Params));
	memcpy_s(&CreateCheckpointRecord_Params.Record, sizeof(CreateCheckpointRecord_Params.Record), &Record, sizeof(Record));

	this->ProcessEvent(uFnCreateCheckpointRecord, &CreateCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, sizeof(Record), &CreateCheckpointRecord_Params.Record, sizeof(CreateCheckpointRecord_Params.Record));
};

// Function OLGame.OLPlayerController.NativeApplyCheckpointRecord
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct AOLPlayerController_FCheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AOLPlayerController::NativeApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record)
{
	static UFunction* uFnNativeApplyCheckpointRecord = nullptr;

	if (!uFnNativeApplyCheckpointRecord)
	{
		uFnNativeApplyCheckpointRecord = UFunction::FindFunction("Function OLGame.OLPlayerController.NativeApplyCheckpointRecord");
	}

	AOLPlayerController_execNativeApplyCheckpointRecord_Params NativeApplyCheckpointRecord_Params;
	memset(&NativeApplyCheckpointRecord_Params, 0, sizeof(NativeApplyCheckpointRecord_Params));
	memcpy_s(&NativeApplyCheckpointRecord_Params.Record, sizeof(NativeApplyCheckpointRecord_Params.Record), &Record, sizeof(Record));

	uFnNativeApplyCheckpointRecord->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeApplyCheckpointRecord, &NativeApplyCheckpointRecord_Params, nullptr);
	uFnNativeApplyCheckpointRecord->FunctionFlags |= 0x400;

	memcpy_s(&Record, sizeof(Record), &NativeApplyCheckpointRecord_Params.Record, sizeof(NativeApplyCheckpointRecord_Params.Record));
};

// Function OLGame.OLPlayerController.NativeCreateCheckpointRecord
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct AOLPlayerController_FCheckpointRecord Record                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AOLPlayerController::NativeCreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord& Record)
{
	static UFunction* uFnNativeCreateCheckpointRecord = nullptr;

	if (!uFnNativeCreateCheckpointRecord)
	{
		uFnNativeCreateCheckpointRecord = UFunction::FindFunction("Function OLGame.OLPlayerController.NativeCreateCheckpointRecord");
	}

	AOLPlayerController_execNativeCreateCheckpointRecord_Params NativeCreateCheckpointRecord_Params;
	memset(&NativeCreateCheckpointRecord_Params, 0, sizeof(NativeCreateCheckpointRecord_Params));
	memcpy_s(&NativeCreateCheckpointRecord_Params.Record, sizeof(NativeCreateCheckpointRecord_Params.Record), &Record, sizeof(Record));

	uFnNativeCreateCheckpointRecord->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeCreateCheckpointRecord, &NativeCreateCheckpointRecord_Params, nullptr);
	uFnNativeCreateCheckpointRecord->FunctionFlags |= 0x400;

	memcpy_s(&Record, sizeof(Record), &NativeCreateCheckpointRecord_Params.Record, sizeof(NativeCreateCheckpointRecord_Params.Record));
};

// Function OLGame.OLPlayerController.SavePersistentState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::SavePersistentState()
{
	static UFunction* uFnSavePersistentState = nullptr;

	if (!uFnSavePersistentState)
	{
		uFnSavePersistentState = UFunction::FindFunction("Function OLGame.OLPlayerController.SavePersistentState");
	}

	AOLPlayerController_execSavePersistentState_Params SavePersistentState_Params;
	memset(&SavePersistentState_Params, 0, sizeof(SavePersistentState_Params));

	uFnSavePersistentState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSavePersistentState, &SavePersistentState_Params, nullptr);
	uFnSavePersistentState->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.OnOverrideAIMusic
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_OverrideAIMusic* Action                         (CPF_Parm)

void AOLPlayerController::OnOverrideAIMusic(class UOLSeqAct_OverrideAIMusic* Action)
{
	static UFunction* uFnOnOverrideAIMusic = nullptr;

	if (!uFnOnOverrideAIMusic)
	{
		uFnOnOverrideAIMusic = UFunction::FindFunction("Function OLGame.OLPlayerController.OnOverrideAIMusic");
	}

	AOLPlayerController_execOnOverrideAIMusic_Params OnOverrideAIMusic_Params;
	memset(&OnOverrideAIMusic_Params, 0, sizeof(OnOverrideAIMusic_Params));
	memcpy_s(&OnOverrideAIMusic_Params.Action, sizeof(OnOverrideAIMusic_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnOverrideAIMusic, &OnOverrideAIMusic_Params, nullptr);
};

// Function OLGame.OLPlayerController.StopAllSounds
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::StopAllSounds()
{
	static UFunction* uFnStopAllSounds = nullptr;

	if (!uFnStopAllSounds)
	{
		uFnStopAllSounds = UFunction::FindFunction("Function OLGame.OLPlayerController.StopAllSounds");
	}

	AOLPlayerController_execStopAllSounds_Params StopAllSounds_Params;
	memset(&StopAllSounds_Params, 0, sizeof(StopAllSounds_Params));

	uFnStopAllSounds->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopAllSounds, &StopAllSounds_Params, nullptr);
	uFnStopAllSounds->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    H                              (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLPlayerController::DisplayDebug(class AHUD* H, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLPlayerController.DisplayDebug");
	}

	AOLPlayerController_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.H, sizeof(DisplayDebug_Params.H), &H, sizeof(H));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLPlayerController.DrawHUD
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    H                              (CPF_Parm)

void AOLPlayerController::DrawHUD(class AHUD* H)
{
	static UFunction* uFnDrawHUD = nullptr;

	if (!uFnDrawHUD)
	{
		uFnDrawHUD = UFunction::FindFunction("Function OLGame.OLPlayerController.DrawHUD");
	}

	AOLPlayerController_execDrawHUD_Params DrawHUD_Params;
	memset(&DrawHUD_Params, 0, sizeof(DrawHUD_Params));
	memcpy_s(&DrawHUD_Params.H, sizeof(DrawHUD_Params.H), &H, sizeof(H));

	this->ProcessEvent(uFnDrawHUD, &DrawHUD_Params, nullptr);
};

// Function OLGame.OLPlayerController.FullScreenOverlayChanged
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::eventFullScreenOverlayChanged()
{
	static UFunction* uFnFullScreenOverlayChanged = nullptr;

	if (!uFnFullScreenOverlayChanged)
	{
		uFnFullScreenOverlayChanged = UFunction::FindFunction("Function OLGame.OLPlayerController.FullScreenOverlayChanged");
	}

	AOLPlayerController_eventFullScreenOverlayChanged_Params FullScreenOverlayChanged_Params;
	memset(&FullScreenOverlayChanged_Params, 0, sizeof(FullScreenOverlayChanged_Params));

	this->ProcessEvent(uFnFullScreenOverlayChanged, &FullScreenOverlayChanged_Params, nullptr);
};

// Function OLGame.OLPlayerController.ForcePause
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPause                         (CPF_Parm)

void AOLPlayerController::eventForcePause(bool bPause)
{
	static UFunction* uFnForcePause = nullptr;

	if (!uFnForcePause)
	{
		uFnForcePause = UFunction::FindFunction("Function OLGame.OLPlayerController.ForcePause");
	}

	AOLPlayerController_eventForcePause_Params ForcePause_Params;
	memset(&ForcePause_Params, 0, sizeof(ForcePause_Params));
	ForcePause_Params.bPause = bPause;

	this->ProcessEvent(uFnForcePause, &ForcePause_Params, nullptr);
};

// Function OLGame.OLPlayerController.ClientSetHUD
// [0xFFFF0000010201C2] (FUNC_Defined | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Public | FUNC_NetClient | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  newHUDType                     (CPF_Parm)

void AOLPlayerController::ClientSetHUD(class UClass* newHUDType)
{
	static UFunction* uFnClientSetHUD = nullptr;

	if (!uFnClientSetHUD)
	{
		uFnClientSetHUD = UFunction::FindFunction("Function OLGame.OLPlayerController.ClientSetHUD");
	}

	AOLPlayerController_execClientSetHUD_Params ClientSetHUD_Params;
	memset(&ClientSetHUD_Params, 0, sizeof(ClientSetHUD_Params));
	memcpy_s(&ClientSetHUD_Params.newHUDType, sizeof(ClientSetHUD_Params.newHUDType), &newHUDType, sizeof(newHUDType));

	this->ProcessEvent(uFnClientSetHUD, &ClientSetHUD_Params, nullptr);
};

// Function OLGame.OLPlayerController.OnSetMesh
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_SetMesh*         Action                         (CPF_Parm)

void AOLPlayerController::eventOnSetMesh(class USeqAct_SetMesh* Action)
{
	static UFunction* uFnOnSetMesh = nullptr;

	if (!uFnOnSetMesh)
	{
		uFnOnSetMesh = UFunction::FindFunction("Function OLGame.OLPlayerController.OnSetMesh");
	}

	AOLPlayerController_eventOnSetMesh_Params OnSetMesh_Params;
	memset(&OnSetMesh_Params, 0, sizeof(OnSetMesh_Params));
	memcpy_s(&OnSetMesh_Params.Action, sizeof(OnSetMesh_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnSetMesh, &OnSetMesh_Params, nullptr);
};

// Function OLGame.OLPlayerController.ClientSetCameraFade
// [0xFFFF0000010249C2] (FUNC_Defined | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetClient | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           _enableFading                  (CPF_Parm)
// struct FColor                  _FadeColor                     (CPF_OptionalParm | CPF_Parm)
// struct FVector2D               _FadeAlpha                     (CPF_OptionalParm | CPF_Parm)
// float                          _FadeTime                      (CPF_OptionalParm | CPF_Parm)
// bool                           _fadeAudio                     (CPF_OptionalParm | CPF_Parm)

void AOLPlayerController::eventClientSetCameraFade(bool _enableFading, struct FColor _FadeColor, struct FVector2D _FadeAlpha, float _FadeTime, bool _fadeAudio)
{
	static UFunction* uFnClientSetCameraFade = nullptr;

	if (!uFnClientSetCameraFade)
	{
		uFnClientSetCameraFade = UFunction::FindFunction("Function OLGame.OLPlayerController.ClientSetCameraFade");
	}

	AOLPlayerController_eventClientSetCameraFade_Params ClientSetCameraFade_Params;
	memset(&ClientSetCameraFade_Params, 0, sizeof(ClientSetCameraFade_Params));
	ClientSetCameraFade_Params._enableFading = _enableFading;
	memcpy_s(&ClientSetCameraFade_Params._FadeColor, sizeof(ClientSetCameraFade_Params._FadeColor), &_FadeColor, sizeof(_FadeColor));
	memcpy_s(&ClientSetCameraFade_Params._FadeAlpha, sizeof(ClientSetCameraFade_Params._FadeAlpha), &_FadeAlpha, sizeof(_FadeAlpha));
	memcpy_s(&ClientSetCameraFade_Params._FadeTime, sizeof(ClientSetCameraFade_Params._FadeTime), &_FadeTime, sizeof(_FadeTime));
	ClientSetCameraFade_Params._fadeAudio = _fadeAudio;

	this->ProcessEvent(uFnClientSetCameraFade, &ClientSetCameraFade_Params, nullptr);
};

// Function OLGame.OLPlayerController.SetCinematicMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleCinematicMode* Action                         (CPF_Parm)
// bool                           bInCinematicMode               (CPF_Parm)
// bool                           bHidePlayer                    (CPF_Parm)
// bool                           bAffectsHUD                    (CPF_Parm)
// bool                           bAffectsMovement               (CPF_Parm)
// bool                           bAffectsTurning                (CPF_Parm)
// bool                           bAffectsButtons                (CPF_Parm)

void AOLPlayerController::SetCinematicMode(class USeqAct_ToggleCinematicMode* Action, bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsButtons)
{
	static UFunction* uFnSetCinematicMode = nullptr;

	if (!uFnSetCinematicMode)
	{
		uFnSetCinematicMode = UFunction::FindFunction("Function OLGame.OLPlayerController.SetCinematicMode");
	}

	AOLPlayerController_execSetCinematicMode_Params SetCinematicMode_Params;
	memset(&SetCinematicMode_Params, 0, sizeof(SetCinematicMode_Params));
	memcpy_s(&SetCinematicMode_Params.Action, sizeof(SetCinematicMode_Params.Action), &Action, sizeof(Action));
	SetCinematicMode_Params.bInCinematicMode = bInCinematicMode;
	SetCinematicMode_Params.bHidePlayer = bHidePlayer;
	SetCinematicMode_Params.bAffectsHUD = bAffectsHUD;
	SetCinematicMode_Params.bAffectsMovement = bAffectsMovement;
	SetCinematicMode_Params.bAffectsTurning = bAffectsTurning;
	SetCinematicMode_Params.bAffectsButtons = bAffectsButtons;

	this->ProcessEvent(uFnSetCinematicMode, &SetCinematicMode_Params, nullptr);
};

// Function OLGame.OLPlayerController.GetPlayerViewPoint
// [0x00420902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 POVLocation                    (CPF_Parm | CPF_OutParm)
// struct FRotator                POVRotation                    (CPF_Parm | CPF_OutParm)

void AOLPlayerController::eventGetPlayerViewPoint(struct FVector& POVLocation, struct FRotator& POVRotation)
{
	static UFunction* uFnGetPlayerViewPoint = nullptr;

	if (!uFnGetPlayerViewPoint)
	{
		uFnGetPlayerViewPoint = UFunction::FindFunction("Function OLGame.OLPlayerController.GetPlayerViewPoint");
	}

	AOLPlayerController_eventGetPlayerViewPoint_Params GetPlayerViewPoint_Params;
	memset(&GetPlayerViewPoint_Params, 0, sizeof(GetPlayerViewPoint_Params));
	memcpy_s(&GetPlayerViewPoint_Params.POVLocation, sizeof(GetPlayerViewPoint_Params.POVLocation), &POVLocation, sizeof(POVLocation));
	memcpy_s(&GetPlayerViewPoint_Params.POVRotation, sizeof(GetPlayerViewPoint_Params.POVRotation), &POVRotation, sizeof(POVRotation));

	this->ProcessEvent(uFnGetPlayerViewPoint, &GetPlayerViewPoint_Params, nullptr);

	memcpy_s(&POVLocation, sizeof(POVLocation), &GetPlayerViewPoint_Params.POVLocation, sizeof(GetPlayerViewPoint_Params.POVLocation));
	memcpy_s(&POVRotation, sizeof(POVRotation), &GetPlayerViewPoint_Params.POVRotation, sizeof(GetPlayerViewPoint_Params.POVRotation));
};

// Function OLGame.OLPlayerController.GetFOVAngle
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AOLPlayerController::eventGetFOVAngle()
{
	static UFunction* uFnGetFOVAngle = nullptr;

	if (!uFnGetFOVAngle)
	{
		uFnGetFOVAngle = UFunction::FindFunction("Function OLGame.OLPlayerController.GetFOVAngle");
	}

	AOLPlayerController_eventGetFOVAngle_Params GetFOVAngle_Params;
	memset(&GetFOVAngle_Params, 0, sizeof(GetFOVAngle_Params));

	this->ProcessEvent(uFnGetFOVAngle, &GetFOVAngle_Params, nullptr);

	return GetFOVAngle_Params.ReturnValue;
};

// Function OLGame.OLPlayerController.SpawnCamera
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::SpawnCamera()
{
	static UFunction* uFnSpawnCamera = nullptr;

	if (!uFnSpawnCamera)
	{
		uFnSpawnCamera = UFunction::FindFunction("Function OLGame.OLPlayerController.SpawnCamera");
	}

	AOLPlayerController_execSpawnCamera_Params SpawnCamera_Params;
	memset(&SpawnCamera_Params, 0, sizeof(SpawnCamera_Params));

	this->ProcessEvent(uFnSpawnCamera, &SpawnCamera_Params, nullptr);
};

// Function OLGame.OLPlayerController.SetCameraMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   NewCamMode                     (CPF_Parm)

void AOLPlayerController::SetCameraMode(struct FName NewCamMode)
{
	static UFunction* uFnSetCameraMode = nullptr;

	if (!uFnSetCameraMode)
	{
		uFnSetCameraMode = UFunction::FindFunction("Function OLGame.OLPlayerController.SetCameraMode");
	}

	AOLPlayerController_execSetCameraMode_Params SetCameraMode_Params;
	memset(&SetCameraMode_Params, 0, sizeof(SetCameraMode_Params));
	memcpy_s(&SetCameraMode_Params.NewCamMode, sizeof(SetCameraMode_Params.NewCamMode), &NewCamMode, sizeof(NewCamMode));

	this->ProcessEvent(uFnSetCameraMode, &SetCameraMode_Params, nullptr);
};

// Function OLGame.OLPlayerController.UsingFirstPersonCamera
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLPlayerController::UsingFirstPersonCamera()
{
	static UFunction* uFnUsingFirstPersonCamera = nullptr;

	if (!uFnUsingFirstPersonCamera)
	{
		uFnUsingFirstPersonCamera = UFunction::FindFunction("Function OLGame.OLPlayerController.UsingFirstPersonCamera");
	}

	AOLPlayerController_execUsingFirstPersonCamera_Params UsingFirstPersonCamera_Params;
	memset(&UsingFirstPersonCamera_Params, 0, sizeof(UsingFirstPersonCamera_Params));

	this->ProcessEvent(uFnUsingFirstPersonCamera, &UsingFirstPersonCamera_Params, nullptr);

	return UsingFirstPersonCamera_Params.ReturnValue;
};

// Function OLGame.OLPlayerController.SetBehindView
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bNewBehindView                 (CPF_Parm)

void AOLPlayerController::SetBehindView(bool bNewBehindView)
{
	static UFunction* uFnSetBehindView = nullptr;

	if (!uFnSetBehindView)
	{
		uFnSetBehindView = UFunction::FindFunction("Function OLGame.OLPlayerController.SetBehindView");
	}

	AOLPlayerController_execSetBehindView_Params SetBehindView_Params;
	memset(&SetBehindView_Params, 0, sizeof(SetBehindView_Params));
	SetBehindView_Params.bNewBehindView = bNewBehindView;

	this->ProcessEvent(uFnSetBehindView, &SetBehindView_Params, nullptr);
};

// Function OLGame.OLPlayerController.BehindView
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::BehindView()
{
	static UFunction* uFnBehindView = nullptr;

	if (!uFnBehindView)
	{
		uFnBehindView = UFunction::FindFunction("Function OLGame.OLPlayerController.BehindView");
	}

	AOLPlayerController_execBehindView_Params BehindView_Params;
	memset(&BehindView_Params, 0, sizeof(BehindView_Params));

	this->ProcessEvent(uFnBehindView, &BehindView_Params, nullptr);
};

// Function OLGame.OLPlayerController.GammaCalibration
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::GammaCalibration()
{
	static UFunction* uFnGammaCalibration = nullptr;

	if (!uFnGammaCalibration)
	{
		uFnGammaCalibration = UFunction::FindFunction("Function OLGame.OLPlayerController.GammaCalibration");
	}

	AOLPlayerController_execGammaCalibration_Params GammaCalibration_Params;
	memset(&GammaCalibration_Params, 0, sizeof(GammaCalibration_Params));

	this->ProcessEvent(uFnGammaCalibration, &GammaCalibration_Params, nullptr);
};

// Function OLGame.OLPlayerController.PressedJump
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::PressedJump()
{
	static UFunction* uFnPressedJump = nullptr;

	if (!uFnPressedJump)
	{
		uFnPressedJump = UFunction::FindFunction("Function OLGame.OLPlayerController.PressedJump");
	}

	AOLPlayerController_execPressedJump_Params PressedJump_Params;
	memset(&PressedJump_Params, 0, sizeof(PressedJump_Params));

	this->ProcessEvent(uFnPressedJump, &PressedJump_Params, nullptr);
};

// Function OLGame.OLPlayerController.PressedReloadBatteries
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::PressedReloadBatteries()
{
	static UFunction* uFnPressedReloadBatteries = nullptr;

	if (!uFnPressedReloadBatteries)
	{
		uFnPressedReloadBatteries = UFunction::FindFunction("Function OLGame.OLPlayerController.PressedReloadBatteries");
	}

	AOLPlayerController_execPressedReloadBatteries_Params PressedReloadBatteries_Params;
	memset(&PressedReloadBatteries_Params, 0, sizeof(PressedReloadBatteries_Params));

	this->ProcessEvent(uFnPressedReloadBatteries, &PressedReloadBatteries_Params, nullptr);
};

// Function OLGame.OLPlayerController.StopZoom
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::StopZoom()
{
	static UFunction* uFnStopZoom = nullptr;

	if (!uFnStopZoom)
	{
		uFnStopZoom = UFunction::FindFunction("Function OLGame.OLPlayerController.StopZoom");
	}

	AOLPlayerController_execStopZoom_Params StopZoom_Params;
	memset(&StopZoom_Params, 0, sizeof(StopZoom_Params));

	this->ProcessEvent(uFnStopZoom, &StopZoom_Params, nullptr);
};

// Function OLGame.OLPlayerController.StartZoomOut
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::StartZoomOut()
{
	static UFunction* uFnStartZoomOut = nullptr;

	if (!uFnStartZoomOut)
	{
		uFnStartZoomOut = UFunction::FindFunction("Function OLGame.OLPlayerController.StartZoomOut");
	}

	AOLPlayerController_execStartZoomOut_Params StartZoomOut_Params;
	memset(&StartZoomOut_Params, 0, sizeof(StartZoomOut_Params));

	this->ProcessEvent(uFnStartZoomOut, &StartZoomOut_Params, nullptr);
};

// Function OLGame.OLPlayerController.StartZoomIn
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::StartZoomIn()
{
	static UFunction* uFnStartZoomIn = nullptr;

	if (!uFnStartZoomIn)
	{
		uFnStartZoomIn = UFunction::FindFunction("Function OLGame.OLPlayerController.StartZoomIn");
	}

	AOLPlayerController_execStartZoomIn_Params StartZoomIn_Params;
	memset(&StartZoomIn_Params, 0, sizeof(StartZoomIn_Params));

	this->ProcessEvent(uFnStartZoomIn, &StartZoomIn_Params, nullptr);
};

// Function OLGame.OLPlayerController.ZoomOut
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::ZoomOut()
{
	static UFunction* uFnZoomOut = nullptr;

	if (!uFnZoomOut)
	{
		uFnZoomOut = UFunction::FindFunction("Function OLGame.OLPlayerController.ZoomOut");
	}

	AOLPlayerController_execZoomOut_Params ZoomOut_Params;
	memset(&ZoomOut_Params, 0, sizeof(ZoomOut_Params));

	this->ProcessEvent(uFnZoomOut, &ZoomOut_Params, nullptr);
};

// Function OLGame.OLPlayerController.ZoomIn
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::ZoomIn()
{
	static UFunction* uFnZoomIn = nullptr;

	if (!uFnZoomIn)
	{
		uFnZoomIn = UFunction::FindFunction("Function OLGame.OLPlayerController.ZoomIn");
	}

	AOLPlayerController_execZoomIn_Params ZoomIn_Params;
	memset(&ZoomIn_Params, 0, sizeof(ZoomIn_Params));

	this->ProcessEvent(uFnZoomIn, &ZoomIn_Params, nullptr);
};

// Function OLGame.OLPlayerController.ToggleCamcorder
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::ToggleCamcorder()
{
	static UFunction* uFnToggleCamcorder = nullptr;

	if (!uFnToggleCamcorder)
	{
		uFnToggleCamcorder = UFunction::FindFunction("Function OLGame.OLPlayerController.ToggleCamcorder");
	}

	AOLPlayerController_execToggleCamcorder_Params ToggleCamcorder_Params;
	memset(&ToggleCamcorder_Params, 0, sizeof(ToggleCamcorder_Params));

	this->ProcessEvent(uFnToggleCamcorder, &ToggleCamcorder_Params, nullptr);
};

// Function OLGame.OLPlayerController.ToggleNightVision
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::ToggleNightVision()
{
	static UFunction* uFnToggleNightVision = nullptr;

	if (!uFnToggleNightVision)
	{
		uFnToggleNightVision = UFunction::FindFunction("Function OLGame.OLPlayerController.ToggleNightVision");
	}

	AOLPlayerController_execToggleNightVision_Params ToggleNightVision_Params;
	memset(&ToggleNightVision_Params, 0, sizeof(ToggleNightVision_Params));

	this->ProcessEvent(uFnToggleNightVision, &ToggleNightVision_Params, nullptr);
};

// Function OLGame.OLPlayerController.ReleasedUseButton
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::ReleasedUseButton()
{
	static UFunction* uFnReleasedUseButton = nullptr;

	if (!uFnReleasedUseButton)
	{
		uFnReleasedUseButton = UFunction::FindFunction("Function OLGame.OLPlayerController.ReleasedUseButton");
	}

	AOLPlayerController_execReleasedUseButton_Params ReleasedUseButton_Params;
	memset(&ReleasedUseButton_Params, 0, sizeof(ReleasedUseButton_Params));

	this->ProcessEvent(uFnReleasedUseButton, &ReleasedUseButton_Params, nullptr);
};

// Function OLGame.OLPlayerController.PressedUseButton
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::PressedUseButton()
{
	static UFunction* uFnPressedUseButton = nullptr;

	if (!uFnPressedUseButton)
	{
		uFnPressedUseButton = UFunction::FindFunction("Function OLGame.OLPlayerController.PressedUseButton");
	}

	AOLPlayerController_execPressedUseButton_Params PressedUseButton_Params;
	memset(&PressedUseButton_Params, 0, sizeof(PressedUseButton_Params));

	this->ProcessEvent(uFnPressedUseButton, &PressedUseButton_Params, nullptr);
};

// Function OLGame.OLPlayerController.PerformedUseAction
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLPlayerController::PerformedUseAction()
{
	static UFunction* uFnPerformedUseAction = nullptr;

	if (!uFnPerformedUseAction)
	{
		uFnPerformedUseAction = UFunction::FindFunction("Function OLGame.OLPlayerController.PerformedUseAction");
	}

	AOLPlayerController_execPerformedUseAction_Params PerformedUseAction_Params;
	memset(&PerformedUseAction_Params, 0, sizeof(PerformedUseAction_Params));

	this->ProcessEvent(uFnPerformedUseAction, &PerformedUseAction_Params, nullptr);

	return PerformedUseAction_Params.ReturnValue;
};

// Function OLGame.OLPlayerController.SetPlayerFoundWhileHidden
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLEnemyPawn*            SearchingEnemy                 (CPF_Parm)

void AOLPlayerController::SetPlayerFoundWhileHidden(class AOLEnemyPawn* SearchingEnemy)
{
	static UFunction* uFnSetPlayerFoundWhileHidden = nullptr;

	if (!uFnSetPlayerFoundWhileHidden)
	{
		uFnSetPlayerFoundWhileHidden = UFunction::FindFunction("Function OLGame.OLPlayerController.SetPlayerFoundWhileHidden");
	}

	AOLPlayerController_execSetPlayerFoundWhileHidden_Params SetPlayerFoundWhileHidden_Params;
	memset(&SetPlayerFoundWhileHidden_Params, 0, sizeof(SetPlayerFoundWhileHidden_Params));
	memcpy_s(&SetPlayerFoundWhileHidden_Params.SearchingEnemy, sizeof(SetPlayerFoundWhileHidden_Params.SearchingEnemy), &SearchingEnemy, sizeof(SearchingEnemy));

	uFnSetPlayerFoundWhileHidden->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPlayerFoundWhileHidden, &SetPlayerFoundWhileHidden_Params, nullptr);
	uFnSetPlayerFoundWhileHidden->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.IsPlayerFindableWhileHidden
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            SearchingEnemy                 (CPF_Parm)

bool AOLPlayerController::IsPlayerFindableWhileHidden(class AOLEnemyPawn* SearchingEnemy)
{
	static UFunction* uFnIsPlayerFindableWhileHidden = nullptr;

	if (!uFnIsPlayerFindableWhileHidden)
	{
		uFnIsPlayerFindableWhileHidden = UFunction::FindFunction("Function OLGame.OLPlayerController.IsPlayerFindableWhileHidden");
	}

	AOLPlayerController_execIsPlayerFindableWhileHidden_Params IsPlayerFindableWhileHidden_Params;
	memset(&IsPlayerFindableWhileHidden_Params, 0, sizeof(IsPlayerFindableWhileHidden_Params));
	memcpy_s(&IsPlayerFindableWhileHidden_Params.SearchingEnemy, sizeof(IsPlayerFindableWhileHidden_Params.SearchingEnemy), &SearchingEnemy, sizeof(SearchingEnemy));

	uFnIsPlayerFindableWhileHidden->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlayerFindableWhileHidden, &IsPlayerFindableWhileHidden_Params, nullptr);
	uFnIsPlayerFindableWhileHidden->FunctionFlags |= 0x400;

	return IsPlayerFindableWhileHidden_Params.ReturnValue;
};

// Function OLGame.OLPlayerController.PlayerDied
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::PlayerDied()
{
	static UFunction* uFnPlayerDied = nullptr;

	if (!uFnPlayerDied)
	{
		uFnPlayerDied = UFunction::FindFunction("Function OLGame.OLPlayerController.PlayerDied");
	}

	AOLPlayerController_execPlayerDied_Params PlayerDied_Params;
	memset(&PlayerDied_Params, 0, sizeof(PlayerDied_Params));

	this->ProcessEvent(uFnPlayerDied, &PlayerDied_Params, nullptr);
};

// Function OLGame.OLPlayerController.Destroyed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function OLGame.OLPlayerController.Destroyed");
	}

	AOLPlayerController_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function OLGame.OLPlayerController.ClientRestart
// [0xFFFF0000010201C2] (FUNC_Defined | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Public | FUNC_NetClient | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   NewPawn                        (CPF_Parm)

void AOLPlayerController::ClientRestart(class APawn* NewPawn)
{
	static UFunction* uFnClientRestart = nullptr;

	if (!uFnClientRestart)
	{
		uFnClientRestart = UFunction::FindFunction("Function OLGame.OLPlayerController.ClientRestart");
	}

	AOLPlayerController_execClientRestart_Params ClientRestart_Params;
	memset(&ClientRestart_Params, 0, sizeof(ClientRestart_Params));
	memcpy_s(&ClientRestart_Params.NewPawn, sizeof(ClientRestart_Params.NewPawn), &NewPawn, sizeof(NewPawn));

	this->ProcessEvent(uFnClientRestart, &ClientRestart_Params, nullptr);
};

// Function OLGame.OLPlayerController.Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function OLGame.OLPlayerController.Reset");
	}

	AOLPlayerController_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function OLGame.OLPlayerController.UnPossess
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::eventUnPossess()
{
	static UFunction* uFnUnPossess = nullptr;

	if (!uFnUnPossess)
	{
		uFnUnPossess = UFunction::FindFunction("Function OLGame.OLPlayerController.UnPossess");
	}

	AOLPlayerController_eventUnPossess_Params UnPossess_Params;
	memset(&UnPossess_Params, 0, sizeof(UnPossess_Params));

	this->ProcessEvent(uFnUnPossess, &UnPossess_Params, nullptr);
};

// Function OLGame.OLPlayerController.Possess
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   inPawn                         (CPF_Parm)
// bool                           bVehicleTransition             (CPF_Parm)

void AOLPlayerController::eventPossess(class APawn* inPawn, bool bVehicleTransition)
{
	static UFunction* uFnPossess = nullptr;

	if (!uFnPossess)
	{
		uFnPossess = UFunction::FindFunction("Function OLGame.OLPlayerController.Possess");
	}

	AOLPlayerController_eventPossess_Params Possess_Params;
	memset(&Possess_Params, 0, sizeof(Possess_Params));
	memcpy_s(&Possess_Params.inPawn, sizeof(Possess_Params.inPawn), &inPawn, sizeof(inPawn));
	Possess_Params.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent(uFnPossess, &Possess_Params, nullptr);
};

// Function OLGame.OLPlayerController.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLPlayerController.PostBeginPlay");
	}

	AOLPlayerController_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLPlayerController.HideLoadingOverlay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::HideLoadingOverlay()
{
	static UFunction* uFnHideLoadingOverlay = nullptr;

	if (!uFnHideLoadingOverlay)
	{
		uFnHideLoadingOverlay = UFunction::FindFunction("Function OLGame.OLPlayerController.HideLoadingOverlay");
	}

	AOLPlayerController_execHideLoadingOverlay_Params HideLoadingOverlay_Params;
	memset(&HideLoadingOverlay_Params, 0, sizeof(HideLoadingOverlay_Params));

	uFnHideLoadingOverlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHideLoadingOverlay, &HideLoadingOverlay_Params, nullptr);
	uFnHideLoadingOverlay->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.ShowLoadingOverlay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPlayerController::ShowLoadingOverlay()
{
	static UFunction* uFnShowLoadingOverlay = nullptr;

	if (!uFnShowLoadingOverlay)
	{
		uFnShowLoadingOverlay = UFunction::FindFunction("Function OLGame.OLPlayerController.ShowLoadingOverlay");
	}

	AOLPlayerController_execShowLoadingOverlay_Params ShowLoadingOverlay_Params;
	memset(&ShowLoadingOverlay_Params, 0, sizeof(ShowLoadingOverlay_Params));

	uFnShowLoadingOverlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowLoadingOverlay, &ShowLoadingOverlay_Params, nullptr);
	uFnShowLoadingOverlay->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.SetVolume
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          VolumeLevel                    (CPF_Parm)

void AOLPlayerController::SetVolume(float VolumeLevel)
{
	static UFunction* uFnSetVolume = nullptr;

	if (!uFnSetVolume)
	{
		uFnSetVolume = UFunction::FindFunction("Function OLGame.OLPlayerController.SetVolume");
	}

	AOLPlayerController_execSetVolume_Params SetVolume_Params;
	memset(&SetVolume_Params, 0, sizeof(SetVolume_Params));
	memcpy_s(&SetVolume_Params.VolumeLevel, sizeof(SetVolume_Params.VolumeLevel), &VolumeLevel, sizeof(VolumeLevel));

	uFnSetVolume->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetVolume, &SetVolume_Params, nullptr);
	uFnSetVolume->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.SetGamma
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          GammaValue                     (CPF_Parm)

void AOLPlayerController::SetGamma(float GammaValue)
{
	static UFunction* uFnSetGamma = nullptr;

	if (!uFnSetGamma)
	{
		uFnSetGamma = UFunction::FindFunction("Function OLGame.OLPlayerController.SetGamma");
	}

	AOLPlayerController_execSetGamma_Params SetGamma_Params;
	memset(&SetGamma_Params, 0, sizeof(SetGamma_Params));
	memcpy_s(&SetGamma_Params.GammaValue, sizeof(SetGamma_Params.GammaValue), &GammaValue, sizeof(GammaValue));

	uFnSetGamma->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetGamma, &SetGamma_Params, nullptr);
	uFnSetGamma->FunctionFlags |= 0x400;
};

// Function OLGame.OLPlayerController.GetGamma
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AOLPlayerController::GetGamma()
{
	static UFunction* uFnGetGamma = nullptr;

	if (!uFnGetGamma)
	{
		uFnGetGamma = UFunction::FindFunction("Function OLGame.OLPlayerController.GetGamma");
	}

	AOLPlayerController_execGetGamma_Params GetGamma_Params;
	memset(&GetGamma_Params, 0, sizeof(GetGamma_Params));

	uFnGetGamma->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetGamma, &GetGamma_Params, nullptr);
	uFnGetGamma->FunctionFlags |= 0x400;

	return GetGamma_Params.ReturnValue;
};

// Function OLGame.OLPlayerController.NativePlayerMove
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void AOLPlayerController::NativePlayerMove(float DeltaTime)
{
	static UFunction* uFnNativePlayerMove = nullptr;

	if (!uFnNativePlayerMove)
	{
		uFnNativePlayerMove = UFunction::FindFunction("Function OLGame.OLPlayerController.NativePlayerMove");
	}

	AOLPlayerController_execNativePlayerMove_Params NativePlayerMove_Params;
	memset(&NativePlayerMove_Params, 0, sizeof(NativePlayerMove_Params));
	memcpy_s(&NativePlayerMove_Params.DeltaTime, sizeof(NativePlayerMove_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	uFnNativePlayerMove->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativePlayerMove, &NativePlayerMove_Params, nullptr);
	uFnNativePlayerMove->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.SetLanguage
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  LanguageCode                   (CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::SetLanguage(class FString LanguageCode)
{
	static UFunction* uFnSetLanguage = nullptr;

	if (!uFnSetLanguage)
	{
		uFnSetLanguage = UFunction::FindFunction("Function OLGame.OLCheatManager.SetLanguage");
	}

	UOLCheatManager_execSetLanguage_Params SetLanguage_Params;
	memset(&SetLanguage_Params, 0, sizeof(SetLanguage_Params));
	memcpy_s(&SetLanguage_Params.LanguageCode, sizeof(SetLanguage_Params.LanguageCode), &LanguageCode, sizeof(LanguageCode));

	uFnSetLanguage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLanguage, &SetLanguage_Params, nullptr);
	uFnSetLanguage->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.ReloadSoundBanks
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bDLC                           (CPF_Parm)

void UOLCheatManager::ReloadSoundBanks(bool bDLC)
{
	static UFunction* uFnReloadSoundBanks = nullptr;

	if (!uFnReloadSoundBanks)
	{
		uFnReloadSoundBanks = UFunction::FindFunction("Function OLGame.OLCheatManager.ReloadSoundBanks");
	}

	UOLCheatManager_execReloadSoundBanks_Params ReloadSoundBanks_Params;
	memset(&ReloadSoundBanks_Params, 0, sizeof(ReloadSoundBanks_Params));
	ReloadSoundBanks_Params.bDLC = bDLC;

	uFnReloadSoundBanks->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReloadSoundBanks, &ReloadSoundBanks_Params, nullptr);
	uFnReloadSoundBanks->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.ProcessCheatInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOLPlayerInput*          InputMgr                       (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)

bool UOLCheatManager::eventProcessCheatInput(class UOLPlayerInput* InputMgr, struct FName Key)
{
	static UFunction* uFnProcessCheatInput = nullptr;

	if (!uFnProcessCheatInput)
	{
		uFnProcessCheatInput = UFunction::FindFunction("Function OLGame.OLCheatManager.ProcessCheatInput");
	}

	UOLCheatManager_eventProcessCheatInput_Params ProcessCheatInput_Params;
	memset(&ProcessCheatInput_Params, 0, sizeof(ProcessCheatInput_Params));
	memcpy_s(&ProcessCheatInput_Params.InputMgr, sizeof(ProcessCheatInput_Params.InputMgr), &InputMgr, sizeof(InputMgr));
	memcpy_s(&ProcessCheatInput_Params.Key, sizeof(ProcessCheatInput_Params.Key), &Key, sizeof(Key));

	this->ProcessEvent(uFnProcessCheatInput, &ProcessCheatInput_Params, nullptr);

	return ProcessCheatInput_Params.ReturnValue;
};

// Function OLGame.OLCheatManager.IsViewModeUnlit
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLCheatManager::IsViewModeUnlit()
{
	static UFunction* uFnIsViewModeUnlit = nullptr;

	if (!uFnIsViewModeUnlit)
	{
		uFnIsViewModeUnlit = UFunction::FindFunction("Function OLGame.OLCheatManager.IsViewModeUnlit");
	}

	UOLCheatManager_execIsViewModeUnlit_Params IsViewModeUnlit_Params;
	memset(&IsViewModeUnlit_Params, 0, sizeof(IsViewModeUnlit_Params));

	uFnIsViewModeUnlit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsViewModeUnlit, &IsViewModeUnlit_Params, nullptr);
	uFnIsViewModeUnlit->FunctionFlags |= 0x400;

	return IsViewModeUnlit_Params.ReturnValue;
};

// Function OLGame.OLCheatManager.SetFinishedGame
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           hasFinishedGame                (CPF_Parm)
// bool                           hasFinishedDLC                 (CPF_Parm)

void UOLCheatManager::SetFinishedGame(bool hasFinishedGame, bool hasFinishedDLC)
{
	static UFunction* uFnSetFinishedGame = nullptr;

	if (!uFnSetFinishedGame)
	{
		uFnSetFinishedGame = UFunction::FindFunction("Function OLGame.OLCheatManager.SetFinishedGame");
	}

	UOLCheatManager_execSetFinishedGame_Params SetFinishedGame_Params;
	memset(&SetFinishedGame_Params, 0, sizeof(SetFinishedGame_Params));
	SetFinishedGame_Params.hasFinishedGame = hasFinishedGame;
	SetFinishedGame_Params.hasFinishedDLC = hasFinishedDLC;

	this->ProcessEvent(uFnSetFinishedGame, &SetFinishedGame_Params, nullptr);
};

// Function OLGame.OLCheatManager.OutlastPause
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::OutlastPause()
{
	static UFunction* uFnOutlastPause = nullptr;

	if (!uFnOutlastPause)
	{
		uFnOutlastPause = UFunction::FindFunction("Function OLGame.OLCheatManager.OutlastPause");
	}

	UOLCheatManager_execOutlastPause_Params OutlastPause_Params;
	memset(&OutlastPause_Params, 0, sizeof(OutlastPause_Params));

	this->ProcessEvent(uFnOutlastPause, &OutlastPause_Params, nullptr);
};

// Function OLGame.OLCheatManager.ResetGS
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ResetGS()
{
	static UFunction* uFnResetGS = nullptr;

	if (!uFnResetGS)
	{
		uFnResetGS = UFunction::FindFunction("Function OLGame.OLCheatManager.ResetGS");
	}

	UOLCheatManager_execResetGS_Params ResetGS_Params;
	memset(&ResetGS_Params, 0, sizeof(ResetGS_Params));

	uFnResetGS->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetGS, &ResetGS_Params, nullptr);
	uFnResetGS->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.ActivateGS
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   gsName                         (CPF_Parm)

void UOLCheatManager::ActivateGS(struct FName gsName)
{
	static UFunction* uFnActivateGS = nullptr;

	if (!uFnActivateGS)
	{
		uFnActivateGS = UFunction::FindFunction("Function OLGame.OLCheatManager.ActivateGS");
	}

	UOLCheatManager_execActivateGS_Params ActivateGS_Params;
	memset(&ActivateGS_Params, 0, sizeof(ActivateGS_Params));
	memcpy_s(&ActivateGS_Params.gsName, sizeof(ActivateGS_Params.gsName), &gsName, sizeof(gsName));

	uFnActivateGS->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnActivateGS, &ActivateGS_Params, nullptr);
	uFnActivateGS->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.DumpGS
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DumpGS()
{
	static UFunction* uFnDumpGS = nullptr;

	if (!uFnDumpGS)
	{
		uFnDumpGS = UFunction::FindFunction("Function OLGame.OLCheatManager.DumpGS");
	}

	UOLCheatManager_execDumpGS_Params DumpGS_Params;
	memset(&DumpGS_Params, 0, sizeof(DumpGS_Params));

	this->ProcessEvent(uFnDumpGS, &DumpGS_Params, nullptr);
};

// Function OLGame.OLCheatManager.DebugGameState
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DebugGameState()
{
	static UFunction* uFnDebugGameState = nullptr;

	if (!uFnDebugGameState)
	{
		uFnDebugGameState = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugGameState");
	}

	UOLCheatManager_execDebugGameState_Params DebugGameState_Params;
	memset(&DebugGameState_Params, 0, sizeof(DebugGameState_Params));

	this->ProcessEvent(uFnDebugGameState, &DebugGameState_Params, nullptr);
};

// Function OLGame.OLCheatManager.SuppressAllMessages
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::SuppressAllMessages()
{
	static UFunction* uFnSuppressAllMessages = nullptr;

	if (!uFnSuppressAllMessages)
	{
		uFnSuppressAllMessages = UFunction::FindFunction("Function OLGame.OLCheatManager.SuppressAllMessages");
	}

	UOLCheatManager_execSuppressAllMessages_Params SuppressAllMessages_Params;
	memset(&SuppressAllMessages_Params, 0, sizeof(SuppressAllMessages_Params));

	this->ProcessEvent(uFnSuppressAllMessages, &SuppressAllMessages_Params, nullptr);
};

// Function OLGame.OLCheatManager.DrawDebug
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DrawDebug()
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function OLGame.OLCheatManager.DrawDebug");
	}

	UOLCheatManager_execDrawDebug_Params DrawDebug_Params;
	memset(&DrawDebug_Params, 0, sizeof(DrawDebug_Params));

	uFnDrawDebug->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);
	uFnDrawDebug->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.ToggleMute
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ToggleMute()
{
	static UFunction* uFnToggleMute = nullptr;

	if (!uFnToggleMute)
	{
		uFnToggleMute = UFunction::FindFunction("Function OLGame.OLCheatManager.ToggleMute");
	}

	UOLCheatManager_execToggleMute_Params ToggleMute_Params;
	memset(&ToggleMute_Params, 0, sizeof(ToggleMute_Params));

	uFnToggleMute->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnToggleMute, &ToggleMute_Params, nullptr);
	uFnToggleMute->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.InflictDamage
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Amount                         (CPF_OptionalParm | CPF_Parm)

void UOLCheatManager::InflictDamage(float Amount)
{
	static UFunction* uFnInflictDamage = nullptr;

	if (!uFnInflictDamage)
	{
		uFnInflictDamage = UFunction::FindFunction("Function OLGame.OLCheatManager.InflictDamage");
	}

	UOLCheatManager_execInflictDamage_Params InflictDamage_Params;
	memset(&InflictDamage_Params, 0, sizeof(InflictDamage_Params));
	memcpy_s(&InflictDamage_Params.Amount, sizeof(InflictDamage_Params.Amount), &Amount, sizeof(Amount));

	this->ProcessEvent(uFnInflictDamage, &InflictDamage_Params, nullptr);
};

// Function OLGame.OLCheatManager.ResetWorldState
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ResetWorldState()
{
	static UFunction* uFnResetWorldState = nullptr;

	if (!uFnResetWorldState)
	{
		uFnResetWorldState = UFunction::FindFunction("Function OLGame.OLCheatManager.ResetWorldState");
	}

	UOLCheatManager_execResetWorldState_Params ResetWorldState_Params;
	memset(&ResetWorldState_Params, 0, sizeof(ResetWorldState_Params));

	uFnResetWorldState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetWorldState, &ResetWorldState_Params, nullptr);
	uFnResetWorldState->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.ResetPushables
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ResetPushables()
{
	static UFunction* uFnResetPushables = nullptr;

	if (!uFnResetPushables)
	{
		uFnResetPushables = UFunction::FindFunction("Function OLGame.OLCheatManager.ResetPushables");
	}

	UOLCheatManager_execResetPushables_Params ResetPushables_Params;
	memset(&ResetPushables_Params, 0, sizeof(ResetPushables_Params));

	uFnResetPushables->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetPushables, &ResetPushables_Params, nullptr);
	uFnResetPushables->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.ResetDoors
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ResetDoors()
{
	static UFunction* uFnResetDoors = nullptr;

	if (!uFnResetDoors)
	{
		uFnResetDoors = UFunction::FindFunction("Function OLGame.OLCheatManager.ResetDoors");
	}

	UOLCheatManager_execResetDoors_Params ResetDoors_Params;
	memset(&ResetDoors_Params, 0, sizeof(ResetDoors_Params));

	uFnResetDoors->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetDoors, &ResetDoors_Params, nullptr);
	uFnResetDoors->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.SetGamma
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          newGamma                       (CPF_Parm)

void UOLCheatManager::SetGamma(float newGamma)
{
	static UFunction* uFnSetGamma = nullptr;

	if (!uFnSetGamma)
	{
		uFnSetGamma = UFunction::FindFunction("Function OLGame.OLCheatManager.SetGamma");
	}

	UOLCheatManager_execSetGamma_Params SetGamma_Params;
	memset(&SetGamma_Params, 0, sizeof(SetGamma_Params));
	memcpy_s(&SetGamma_Params.newGamma, sizeof(SetGamma_Params.newGamma), &newGamma, sizeof(newGamma));

	uFnSetGamma->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetGamma, &SetGamma_Params, nullptr);
	uFnSetGamma->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.DemoMode
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DemoMode()
{
	static UFunction* uFnDemoMode = nullptr;

	if (!uFnDemoMode)
	{
		uFnDemoMode = UFunction::FindFunction("Function OLGame.OLCheatManager.DemoMode");
	}

	UOLCheatManager_execDemoMode_Params DemoMode_Params;
	memset(&DemoMode_Params, 0, sizeof(DemoMode_Params));

	this->ProcessEvent(uFnDemoMode, &DemoMode_Params, nullptr);
};

// Function OLGame.OLCheatManager.LoadGame
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::LoadGame(class FString Filename)
{
	static UFunction* uFnLoadGame = nullptr;

	if (!uFnLoadGame)
	{
		uFnLoadGame = UFunction::FindFunction("Function OLGame.OLCheatManager.LoadGame");
	}

	UOLCheatManager_execLoadGame_Params LoadGame_Params;
	memset(&LoadGame_Params, 0, sizeof(LoadGame_Params));
	memcpy_s(&LoadGame_Params.Filename, sizeof(LoadGame_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnLoadGame, &LoadGame_Params, nullptr);
};

// Function OLGame.OLCheatManager.SaveGame
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::SaveGame(class FString Filename)
{
	static UFunction* uFnSaveGame = nullptr;

	if (!uFnSaveGame)
	{
		uFnSaveGame = UFunction::FindFunction("Function OLGame.OLCheatManager.SaveGame");
	}

	UOLCheatManager_execSaveGame_Params SaveGame_Params;
	memset(&SaveGame_Params, 0, sizeof(SaveGame_Params));
	memcpy_s(&SaveGame_Params.Filename, sizeof(SaveGame_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnSaveGame, &SaveGame_Params, nullptr);
};

// Function OLGame.OLCheatManager.GiveItem
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ItemName                       (CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::GiveItem(class FString ItemName)
{
	static UFunction* uFnGiveItem = nullptr;

	if (!uFnGiveItem)
	{
		uFnGiveItem = UFunction::FindFunction("Function OLGame.OLCheatManager.GiveItem");
	}

	UOLCheatManager_execGiveItem_Params GiveItem_Params;
	memset(&GiveItem_Params, 0, sizeof(GiveItem_Params));
	memcpy_s(&GiveItem_Params.ItemName, sizeof(GiveItem_Params.ItemName), &ItemName, sizeof(ItemName));

	uFnGiveItem->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGiveItem, &GiveItem_Params, nullptr);
	uFnGiveItem->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.ApplyCP
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  CPName                         (CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::ApplyCP(class FString CPName)
{
	static UFunction* uFnApplyCP = nullptr;

	if (!uFnApplyCP)
	{
		uFnApplyCP = UFunction::FindFunction("Function OLGame.OLCheatManager.ApplyCP");
	}

	UOLCheatManager_execApplyCP_Params ApplyCP_Params;
	memset(&ApplyCP_Params, 0, sizeof(ApplyCP_Params));
	memcpy_s(&ApplyCP_Params.CPName, sizeof(ApplyCP_Params.CPName), &CPName, sizeof(CPName));

	uFnApplyCP->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnApplyCP, &ApplyCP_Params, nullptr);
	uFnApplyCP->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.cplist
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::cplist()
{
	static UFunction* uFncplist = nullptr;

	if (!uFncplist)
	{
		uFncplist = UFunction::FindFunction("Function OLGame.OLCheatManager.cplist");
	}

	UOLCheatManager_execcplist_Params cplist_Params;
	memset(&cplist_Params, 0, sizeof(cplist_Params));

	uFncplist->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFncplist, &cplist_Params, nullptr);
	uFncplist->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.cp
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  CPName                         (CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::cp(class FString CPName)
{
	static UFunction* uFncp = nullptr;

	if (!uFncp)
	{
		uFncp = UFunction::FindFunction("Function OLGame.OLCheatManager.cp");
	}

	UOLCheatManager_execcp_Params cp_Params;
	memset(&cp_Params, 0, sizeof(cp_Params));
	memcpy_s(&cp_Params.CPName, sizeof(cp_Params.CPName), &CPName, sizeof(CPName));

	this->ProcessEvent(uFncp, &cp_Params, nullptr);
};

// Function OLGame.OLCheatManager.Checkpoint
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  CPName                         (CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::Checkpoint(class FString CPName)
{
	static UFunction* uFnCheckpoint = nullptr;

	if (!uFnCheckpoint)
	{
		uFnCheckpoint = UFunction::FindFunction("Function OLGame.OLCheatManager.Checkpoint");
	}

	UOLCheatManager_execCheckpoint_Params Checkpoint_Params;
	memset(&Checkpoint_Params, 0, sizeof(Checkpoint_Params));
	memcpy_s(&Checkpoint_Params.CPName, sizeof(Checkpoint_Params.CPName), &CPName, sizeof(CPName));

	this->ProcessEvent(uFnCheckpoint, &Checkpoint_Params, nullptr);
};

// Function OLGame.OLCheatManager.KillFade
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::KillFade()
{
	static UFunction* uFnKillFade = nullptr;

	if (!uFnKillFade)
	{
		uFnKillFade = UFunction::FindFunction("Function OLGame.OLCheatManager.KillFade");
	}

	UOLCheatManager_execKillFade_Params KillFade_Params;
	memset(&KillFade_Params, 0, sizeof(KillFade_Params));

	this->ProcessEvent(uFnKillFade, &KillFade_Params, nullptr);
};

// Function OLGame.OLCheatManager.ToggleUnlimitedBatteries
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ToggleUnlimitedBatteries()
{
	static UFunction* uFnToggleUnlimitedBatteries = nullptr;

	if (!uFnToggleUnlimitedBatteries)
	{
		uFnToggleUnlimitedBatteries = UFunction::FindFunction("Function OLGame.OLCheatManager.ToggleUnlimitedBatteries");
	}

	UOLCheatManager_execToggleUnlimitedBatteries_Params ToggleUnlimitedBatteries_Params;
	memset(&ToggleUnlimitedBatteries_Params, 0, sizeof(ToggleUnlimitedBatteries_Params));

	this->ProcessEvent(uFnToggleUnlimitedBatteries, &ToggleUnlimitedBatteries_Params, nullptr);
};

// Function OLGame.OLCheatManager.RechargeNightVision
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::RechargeNightVision()
{
	static UFunction* uFnRechargeNightVision = nullptr;

	if (!uFnRechargeNightVision)
	{
		uFnRechargeNightVision = UFunction::FindFunction("Function OLGame.OLCheatManager.RechargeNightVision");
	}

	UOLCheatManager_execRechargeNightVision_Params RechargeNightVision_Params;
	memset(&RechargeNightVision_Params, 0, sizeof(RechargeNightVision_Params));

	this->ProcessEvent(uFnRechargeNightVision, &RechargeNightVision_Params, nullptr);
};

// Function OLGame.OLCheatManager.Ghost
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::Ghost()
{
	static UFunction* uFnGhost = nullptr;

	if (!uFnGhost)
	{
		uFnGhost = UFunction::FindFunction("Function OLGame.OLCheatManager.Ghost");
	}

	UOLCheatManager_execGhost_Params Ghost_Params;
	memset(&Ghost_Params, 0, sizeof(Ghost_Params));

	this->ProcessEvent(uFnGhost, &Ghost_Params, nullptr);
};

// Function OLGame.OLCheatManager.GhostPawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ghosting                       (CPF_Parm)

void UOLCheatManager::GhostPawn(bool ghosting)
{
	static UFunction* uFnGhostPawn = nullptr;

	if (!uFnGhostPawn)
	{
		uFnGhostPawn = UFunction::FindFunction("Function OLGame.OLCheatManager.GhostPawn");
	}

	UOLCheatManager_execGhostPawn_Params GhostPawn_Params;
	memset(&GhostPawn_Params, 0, sizeof(GhostPawn_Params));
	GhostPawn_Params.ghosting = ghosting;

	uFnGhostPawn->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGhostPawn, &GhostPawn_Params, nullptr);
	uFnGhostPawn->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.FasterGameSpeed
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::FasterGameSpeed()
{
	static UFunction* uFnFasterGameSpeed = nullptr;

	if (!uFnFasterGameSpeed)
	{
		uFnFasterGameSpeed = UFunction::FindFunction("Function OLGame.OLCheatManager.FasterGameSpeed");
	}

	UOLCheatManager_execFasterGameSpeed_Params FasterGameSpeed_Params;
	memset(&FasterGameSpeed_Params, 0, sizeof(FasterGameSpeed_Params));

	this->ProcessEvent(uFnFasterGameSpeed, &FasterGameSpeed_Params, nullptr);
};

// Function OLGame.OLCheatManager.SlowerGameSpeed
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::SlowerGameSpeed()
{
	static UFunction* uFnSlowerGameSpeed = nullptr;

	if (!uFnSlowerGameSpeed)
	{
		uFnSlowerGameSpeed = UFunction::FindFunction("Function OLGame.OLCheatManager.SlowerGameSpeed");
	}

	UOLCheatManager_execSlowerGameSpeed_Params SlowerGameSpeed_Params;
	memset(&SlowerGameSpeed_Params, 0, sizeof(SlowerGameSpeed_Params));

	this->ProcessEvent(uFnSlowerGameSpeed, &SlowerGameSpeed_Params, nullptr);
};

// Function OLGame.OLCheatManager.NormalGameSpeed
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::NormalGameSpeed()
{
	static UFunction* uFnNormalGameSpeed = nullptr;

	if (!uFnNormalGameSpeed)
	{
		uFnNormalGameSpeed = UFunction::FindFunction("Function OLGame.OLCheatManager.NormalGameSpeed");
	}

	UOLCheatManager_execNormalGameSpeed_Params NormalGameSpeed_Params;
	memset(&NormalGameSpeed_Params, 0, sizeof(NormalGameSpeed_Params));

	this->ProcessEvent(uFnNormalGameSpeed, &NormalGameSpeed_Params, nullptr);
};

// Function OLGame.OLCheatManager.UpdateGameSpeed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::UpdateGameSpeed()
{
	static UFunction* uFnUpdateGameSpeed = nullptr;

	if (!uFnUpdateGameSpeed)
	{
		uFnUpdateGameSpeed = UFunction::FindFunction("Function OLGame.OLCheatManager.UpdateGameSpeed");
	}

	UOLCheatManager_execUpdateGameSpeed_Params UpdateGameSpeed_Params;
	memset(&UpdateGameSpeed_Params, 0, sizeof(UpdateGameSpeed_Params));

	this->ProcessEvent(uFnUpdateGameSpeed, &UpdateGameSpeed_Params, nullptr);
};

// Function OLGame.OLCheatManager.SingleFrame
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::SingleFrame()
{
	static UFunction* uFnSingleFrame = nullptr;

	if (!uFnSingleFrame)
	{
		uFnSingleFrame = UFunction::FindFunction("Function OLGame.OLCheatManager.SingleFrame");
	}

	UOLCheatManager_execSingleFrame_Params SingleFrame_Params;
	memset(&SingleFrame_Params, 0, sizeof(SingleFrame_Params));

	uFnSingleFrame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSingleFrame, &SingleFrame_Params, nullptr);
	uFnSingleFrame->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.TeleportToFreeCam
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::TeleportToFreeCam()
{
	static UFunction* uFnTeleportToFreeCam = nullptr;

	if (!uFnTeleportToFreeCam)
	{
		uFnTeleportToFreeCam = UFunction::FindFunction("Function OLGame.OLCheatManager.TeleportToFreeCam");
	}

	UOLCheatManager_execTeleportToFreeCam_Params TeleportToFreeCam_Params;
	memset(&TeleportToFreeCam_Params, 0, sizeof(TeleportToFreeCam_Params));

	this->ProcessEvent(uFnTeleportToFreeCam, &TeleportToFreeCam_Params, nullptr);
};

// Function OLGame.OLCheatManager.ToggleFixedCam
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ToggleFixedCam()
{
	static UFunction* uFnToggleFixedCam = nullptr;

	if (!uFnToggleFixedCam)
	{
		uFnToggleFixedCam = UFunction::FindFunction("Function OLGame.OLCheatManager.ToggleFixedCam");
	}

	UOLCheatManager_execToggleFixedCam_Params ToggleFixedCam_Params;
	memset(&ToggleFixedCam_Params, 0, sizeof(ToggleFixedCam_Params));

	this->ProcessEvent(uFnToggleFixedCam, &ToggleFixedCam_Params, nullptr);
};

// Function OLGame.OLCheatManager.ToggleFreeCamNoPause
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ToggleFreeCamNoPause()
{
	static UFunction* uFnToggleFreeCamNoPause = nullptr;

	if (!uFnToggleFreeCamNoPause)
	{
		uFnToggleFreeCamNoPause = UFunction::FindFunction("Function OLGame.OLCheatManager.ToggleFreeCamNoPause");
	}

	UOLCheatManager_execToggleFreeCamNoPause_Params ToggleFreeCamNoPause_Params;
	memset(&ToggleFreeCamNoPause_Params, 0, sizeof(ToggleFreeCamNoPause_Params));

	this->ProcessEvent(uFnToggleFreeCamNoPause, &ToggleFreeCamNoPause_Params, nullptr);
};

// Function OLGame.OLCheatManager.ToggleFreeCam
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ToggleFreeCam()
{
	static UFunction* uFnToggleFreeCam = nullptr;

	if (!uFnToggleFreeCam)
	{
		uFnToggleFreeCam = UFunction::FindFunction("Function OLGame.OLCheatManager.ToggleFreeCam");
	}

	UOLCheatManager_execToggleFreeCam_Params ToggleFreeCam_Params;
	memset(&ToggleFreeCam_Params, 0, sizeof(ToggleFreeCam_Params));

	this->ProcessEvent(uFnToggleFreeCam, &ToggleFreeCam_Params, nullptr);
};

// Function OLGame.OLCheatManager.AutoSpike
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Spike                          (CPF_OptionalParm | CPF_Parm)
// float                          Delay                          (CPF_OptionalParm | CPF_Parm)

void UOLCheatManager::AutoSpike(float Spike, float Delay)
{
	static UFunction* uFnAutoSpike = nullptr;

	if (!uFnAutoSpike)
	{
		uFnAutoSpike = UFunction::FindFunction("Function OLGame.OLCheatManager.AutoSpike");
	}

	UOLCheatManager_execAutoSpike_Params AutoSpike_Params;
	memset(&AutoSpike_Params, 0, sizeof(AutoSpike_Params));
	memcpy_s(&AutoSpike_Params.Spike, sizeof(AutoSpike_Params.Spike), &Spike, sizeof(Spike));
	memcpy_s(&AutoSpike_Params.Delay, sizeof(AutoSpike_Params.Delay), &Delay, sizeof(Delay));

	this->ProcessEvent(uFnAutoSpike, &AutoSpike_Params, nullptr);
};

// Function OLGame.OLCheatManager.Spike
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Spike                          (CPF_OptionalParm | CPF_Parm)

void UOLCheatManager::Spike(float Spike)
{
	static UFunction* uFnSpike = nullptr;

	if (!uFnSpike)
	{
		uFnSpike = UFunction::FindFunction("Function OLGame.OLCheatManager.Spike");
	}

	UOLCheatManager_execSpike_Params Spike_Params;
	memset(&Spike_Params, 0, sizeof(Spike_Params));
	memcpy_s(&Spike_Params.Spike, sizeof(Spike_Params.Spike), &Spike, sizeof(Spike));

	this->ProcessEvent(uFnSpike, &Spike_Params, nullptr);
};

// Function OLGame.OLCheatManager.BadFPS
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          slowdown                       (CPF_OptionalParm | CPF_Parm)

void UOLCheatManager::BadFPS(float slowdown)
{
	static UFunction* uFnBadFPS = nullptr;

	if (!uFnBadFPS)
	{
		uFnBadFPS = UFunction::FindFunction("Function OLGame.OLCheatManager.BadFPS");
	}

	UOLCheatManager_execBadFPS_Params BadFPS_Params;
	memset(&BadFPS_Params, 0, sizeof(BadFPS_Params));
	memcpy_s(&BadFPS_Params.slowdown, sizeof(BadFPS_Params.slowdown), &slowdown, sizeof(slowdown));

	this->ProcessEvent(uFnBadFPS, &BadFPS_Params, nullptr);
};

// Function OLGame.OLCheatManager.DebugAIPositions
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DebugAIPositions()
{
	static UFunction* uFnDebugAIPositions = nullptr;

	if (!uFnDebugAIPositions)
	{
		uFnDebugAIPositions = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugAIPositions");
	}

	UOLCheatManager_execDebugAIPositions_Params DebugAIPositions_Params;
	memset(&DebugAIPositions_Params, 0, sizeof(DebugAIPositions_Params));

	this->ProcessEvent(uFnDebugAIPositions, &DebugAIPositions_Params, nullptr);
};

// Function OLGame.OLCheatManager.DebugAI
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DebugAI()
{
	static UFunction* uFnDebugAI = nullptr;

	if (!uFnDebugAI)
	{
		uFnDebugAI = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugAI");
	}

	UOLCheatManager_execDebugAI_Params DebugAI_Params;
	memset(&DebugAI_Params, 0, sizeof(DebugAI_Params));

	this->ProcessEvent(uFnDebugAI, &DebugAI_Params, nullptr);
};

// Function OLGame.OLCheatManager.ShowHeroDebug
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ShowHeroDebug()
{
	static UFunction* uFnShowHeroDebug = nullptr;

	if (!uFnShowHeroDebug)
	{
		uFnShowHeroDebug = UFunction::FindFunction("Function OLGame.OLCheatManager.ShowHeroDebug");
	}

	UOLCheatManager_execShowHeroDebug_Params ShowHeroDebug_Params;
	memset(&ShowHeroDebug_Params, 0, sizeof(ShowHeroDebug_Params));

	this->ProcessEvent(uFnShowHeroDebug, &ShowHeroDebug_Params, nullptr);
};

// Function OLGame.OLCheatManager.ShowPaths
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ShowPaths()
{
	static UFunction* uFnShowPaths = nullptr;

	if (!uFnShowPaths)
	{
		uFnShowPaths = UFunction::FindFunction("Function OLGame.OLCheatManager.ShowPaths");
	}

	UOLCheatManager_execShowPaths_Params ShowPaths_Params;
	memset(&ShowPaths_Params, 0, sizeof(ShowPaths_Params));

	this->ProcessEvent(uFnShowPaths, &ShowPaths_Params, nullptr);
};

// Function OLGame.OLCheatManager.ShowStatLevels
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ShowStatLevels()
{
	static UFunction* uFnShowStatLevels = nullptr;

	if (!uFnShowStatLevels)
	{
		uFnShowStatLevels = UFunction::FindFunction("Function OLGame.OLCheatManager.ShowStatLevels");
	}

	UOLCheatManager_execShowStatLevels_Params ShowStatLevels_Params;
	memset(&ShowStatLevels_Params, 0, sizeof(ShowStatLevels_Params));

	this->ProcessEvent(uFnShowStatLevels, &ShowStatLevels_Params, nullptr);
};

// Function OLGame.OLCheatManager.DebugWaitPoints
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DebugWaitPoints()
{
	static UFunction* uFnDebugWaitPoints = nullptr;

	if (!uFnDebugWaitPoints)
	{
		uFnDebugWaitPoints = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugWaitPoints");
	}

	UOLCheatManager_execDebugWaitPoints_Params DebugWaitPoints_Params;
	memset(&DebugWaitPoints_Params, 0, sizeof(DebugWaitPoints_Params));

	this->ProcessEvent(uFnDebugWaitPoints, &DebugWaitPoints_Params, nullptr);
};

// Function OLGame.OLCheatManager.DebugTrajectory
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DebugTrajectory()
{
	static UFunction* uFnDebugTrajectory = nullptr;

	if (!uFnDebugTrajectory)
	{
		uFnDebugTrajectory = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugTrajectory");
	}

	UOLCheatManager_execDebugTrajectory_Params DebugTrajectory_Params;
	memset(&DebugTrajectory_Params, 0, sizeof(DebugTrajectory_Params));

	this->ProcessEvent(uFnDebugTrajectory, &DebugTrajectory_Params, nullptr);
};

// Function OLGame.OLCheatManager.DebugCamera
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DebugCamera()
{
	static UFunction* uFnDebugCamera = nullptr;

	if (!uFnDebugCamera)
	{
		uFnDebugCamera = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugCamera");
	}

	UOLCheatManager_execDebugCamera_Params DebugCamera_Params;
	memset(&DebugCamera_Params, 0, sizeof(DebugCamera_Params));

	this->ProcessEvent(uFnDebugCamera, &DebugCamera_Params, nullptr);
};

// Function OLGame.OLCheatManager.DebugSoundEnvironment
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filter                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UOLCheatManager::DebugSoundEnvironment(class FString Filter)
{
	static UFunction* uFnDebugSoundEnvironment = nullptr;

	if (!uFnDebugSoundEnvironment)
	{
		uFnDebugSoundEnvironment = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugSoundEnvironment");
	}

	UOLCheatManager_execDebugSoundEnvironment_Params DebugSoundEnvironment_Params;
	memset(&DebugSoundEnvironment_Params, 0, sizeof(DebugSoundEnvironment_Params));
	memcpy_s(&DebugSoundEnvironment_Params.Filter, sizeof(DebugSoundEnvironment_Params.Filter), &Filter, sizeof(Filter));

	uFnDebugSoundEnvironment->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDebugSoundEnvironment, &DebugSoundEnvironment_Params, nullptr);
	uFnDebugSoundEnvironment->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.DebugGameplay
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DebugGameplay()
{
	static UFunction* uFnDebugGameplay = nullptr;

	if (!uFnDebugGameplay)
	{
		uFnDebugGameplay = UFunction::FindFunction("Function OLGame.OLCheatManager.DebugGameplay");
	}

	UOLCheatManager_execDebugGameplay_Params DebugGameplay_Params;
	memset(&DebugGameplay_Params, 0, sizeof(DebugGameplay_Params));

	uFnDebugGameplay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDebugGameplay, &DebugGameplay_Params, nullptr);
	uFnDebugGameplay->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.SaveAllCheckpoints
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::SaveAllCheckpoints()
{
	static UFunction* uFnSaveAllCheckpoints = nullptr;

	if (!uFnSaveAllCheckpoints)
	{
		uFnSaveAllCheckpoints = UFunction::FindFunction("Function OLGame.OLCheatManager.SaveAllCheckpoints");
	}

	UOLCheatManager_execSaveAllCheckpoints_Params SaveAllCheckpoints_Params;
	memset(&SaveAllCheckpoints_Params, 0, sizeof(SaveAllCheckpoints_Params));

	uFnSaveAllCheckpoints->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSaveAllCheckpoints, &SaveAllCheckpoints_Params, nullptr);
	uFnSaveAllCheckpoints->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.DeleteAllSaves
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::DeleteAllSaves()
{
	static UFunction* uFnDeleteAllSaves = nullptr;

	if (!uFnDeleteAllSaves)
	{
		uFnDeleteAllSaves = UFunction::FindFunction("Function OLGame.OLCheatManager.DeleteAllSaves");
	}

	UOLCheatManager_execDeleteAllSaves_Params DeleteAllSaves_Params;
	memset(&DeleteAllSaves_Params, 0, sizeof(DeleteAllSaves_Params));

	uFnDeleteAllSaves->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeleteAllSaves, &DeleteAllSaves_Params, nullptr);
	uFnDeleteAllSaves->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheatManager.KillAll
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  aClass                         (CPF_Parm)

void UOLCheatManager::KillAll(class UClass* aClass)
{
	static UFunction* uFnKillAll = nullptr;

	if (!uFnKillAll)
	{
		uFnKillAll = UFunction::FindFunction("Function OLGame.OLCheatManager.KillAll");
	}

	UOLCheatManager_execKillAll_Params KillAll_Params;
	memset(&KillAll_Params, 0, sizeof(KillAll_Params));
	memcpy_s(&KillAll_Params.aClass, sizeof(KillAll_Params.aClass), &aClass, sizeof(aClass));

	this->ProcessEvent(uFnKillAll, &KillAll_Params, nullptr);
};

// Function OLGame.OLCheatManager.ToggleCheats
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLCheatManager::ToggleCheats()
{
	static UFunction* uFnToggleCheats = nullptr;

	if (!uFnToggleCheats)
	{
		uFnToggleCheats = UFunction::FindFunction("Function OLGame.OLCheatManager.ToggleCheats");
	}

	UOLCheatManager_execToggleCheats_Params ToggleCheats_Params;
	memset(&ToggleCheats_Params, 0, sizeof(ToggleCheats_Params));

	this->ProcessEvent(uFnToggleCheats, &ToggleCheats_Params, nullptr);
};

// Function OLGame.OLCheatManager.GetCheatManager
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLCheatManager*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOLCheatManager* UOLCheatManager::GetCheatManager()
{
	static UFunction* uFnGetCheatManager = nullptr;

	if (!uFnGetCheatManager)
	{
		uFnGetCheatManager = UFunction::FindFunction("Function OLGame.OLCheatManager.GetCheatManager");
	}

	UOLCheatManager_execGetCheatManager_Params GetCheatManager_Params;
	memset(&GetCheatManager_Params, 0, sizeof(GetCheatManager_Params));

	uFnGetCheatManager->FunctionFlags &= ~0x400;
	UOLCheatManager::StaticClass()->ProcessEvent(uFnGetCheatManager, &GetCheatManager_Params, nullptr);
	uFnGetCheatManager->FunctionFlags |= 0x400;

	return GetCheatManager_Params.ReturnValue;
};

// Function OLGame.OLCheatManager.AddDebugTrajectoryPoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FDebugTrajectoryPoint   Point                          (CPF_Parm)

void UOLCheatManager::AddDebugTrajectoryPoint(struct FDebugTrajectoryPoint Point)
{
	static UFunction* uFnAddDebugTrajectoryPoint = nullptr;

	if (!uFnAddDebugTrajectoryPoint)
	{
		uFnAddDebugTrajectoryPoint = UFunction::FindFunction("Function OLGame.OLCheatManager.AddDebugTrajectoryPoint");
	}

	UOLCheatManager_execAddDebugTrajectoryPoint_Params AddDebugTrajectoryPoint_Params;
	memset(&AddDebugTrajectoryPoint_Params, 0, sizeof(AddDebugTrajectoryPoint_Params));
	memcpy_s(&AddDebugTrajectoryPoint_Params.Point, sizeof(AddDebugTrajectoryPoint_Params.Point), &Point, sizeof(Point));

	uFnAddDebugTrajectoryPoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddDebugTrajectoryPoint, &AddDebugTrajectoryPoint_Params, nullptr);
	uFnAddDebugTrajectoryPoint->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheckpoint.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLCheckpoint::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLCheckpoint.OnToggle");
	}

	AOLCheckpoint_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLCheckpoint.SetEnabled
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void AOLCheckpoint::SetEnabled(bool bEnable)
{
	static UFunction* uFnSetEnabled = nullptr;

	if (!uFnSetEnabled)
	{
		uFnSetEnabled = UFunction::FindFunction("Function OLGame.OLCheckpoint.SetEnabled");
	}

	AOLCheckpoint_execSetEnabled_Params SetEnabled_Params;
	memset(&SetEnabled_Params, 0, sizeof(SetEnabled_Params));
	SetEnabled_Params.bEnable = bEnable;

	this->ProcessEvent(uFnSetEnabled, &SetEnabled_Params, nullptr);
};

// Function OLGame.OLCheckpoint.ResetCheckpointDeaths
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLCheckpoint::ResetCheckpointDeaths()
{
	static UFunction* uFnResetCheckpointDeaths = nullptr;

	if (!uFnResetCheckpointDeaths)
	{
		uFnResetCheckpointDeaths = UFunction::FindFunction("Function OLGame.OLCheckpoint.ResetCheckpointDeaths");
	}

	AOLCheckpoint_execResetCheckpointDeaths_Params ResetCheckpointDeaths_Params;
	memset(&ResetCheckpointDeaths_Params, 0, sizeof(ResetCheckpointDeaths_Params));

	uFnResetCheckpointDeaths->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetCheckpointDeaths, &ResetCheckpointDeaths_Params, nullptr);
	uFnResetCheckpointDeaths->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheckpoint.OnPlayerSpawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLCheckpoint::OnPlayerSpawn()
{
	static UFunction* uFnOnPlayerSpawn = nullptr;

	if (!uFnOnPlayerSpawn)
	{
		uFnOnPlayerSpawn = UFunction::FindFunction("Function OLGame.OLCheckpoint.OnPlayerSpawn");
	}

	AOLCheckpoint_execOnPlayerSpawn_Params OnPlayerSpawn_Params;
	memset(&OnPlayerSpawn_Params, 0, sizeof(OnPlayerSpawn_Params));

	uFnOnPlayerSpawn->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnPlayerSpawn, &OnPlayerSpawn_Params, nullptr);
	uFnOnPlayerSpawn->FunctionFlags |= 0x400;
};

// Function OLGame.OLCheckpointList.Script_IsUnreached
// [0x00422400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   TestCheckpoint                 (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FName                   CurrentCheckpoint              (CPF_Const | CPF_Parm | CPF_OutParm)

bool AOLCheckpointList::Script_IsUnreached(struct FName& TestCheckpoint, struct FName& CurrentCheckpoint)
{
	static UFunction* uFnScript_IsUnreached = nullptr;

	if (!uFnScript_IsUnreached)
	{
		uFnScript_IsUnreached = UFunction::FindFunction("Function OLGame.OLCheckpointList.Script_IsUnreached");
	}

	AOLCheckpointList_execScript_IsUnreached_Params Script_IsUnreached_Params;
	memset(&Script_IsUnreached_Params, 0, sizeof(Script_IsUnreached_Params));
	memcpy_s(&Script_IsUnreached_Params.TestCheckpoint, sizeof(Script_IsUnreached_Params.TestCheckpoint), &TestCheckpoint, sizeof(TestCheckpoint));
	memcpy_s(&Script_IsUnreached_Params.CurrentCheckpoint, sizeof(Script_IsUnreached_Params.CurrentCheckpoint), &CurrentCheckpoint, sizeof(CurrentCheckpoint));

	uFnScript_IsUnreached->FunctionFlags &= ~0x400;
	AOLCheckpointList::StaticClass()->ProcessEvent(uFnScript_IsUnreached, &Script_IsUnreached_Params, nullptr);
	uFnScript_IsUnreached->FunctionFlags |= 0x400;

	memcpy_s(&TestCheckpoint, sizeof(TestCheckpoint), &Script_IsUnreached_Params.TestCheckpoint, sizeof(Script_IsUnreached_Params.TestCheckpoint));
	memcpy_s(&CurrentCheckpoint, sizeof(CurrentCheckpoint), &Script_IsUnreached_Params.CurrentCheckpoint, sizeof(Script_IsUnreached_Params.CurrentCheckpoint));

	return Script_IsUnreached_Params.ReturnValue;
};

// Function OLGame.OLCheckpointSave.CheckpointIsEmpty
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLCheckpointSave::eventCheckpointIsEmpty()
{
	static UFunction* uFnCheckpointIsEmpty = nullptr;

	if (!uFnCheckpointIsEmpty)
	{
		uFnCheckpointIsEmpty = UFunction::FindFunction("Function OLGame.OLCheckpointSave.CheckpointIsEmpty");
	}

	UOLCheckpointSave_eventCheckpointIsEmpty_Params CheckpointIsEmpty_Params;
	memset(&CheckpointIsEmpty_Params, 0, sizeof(CheckpointIsEmpty_Params));

	this->ProcessEvent(uFnCheckpointIsEmpty, &CheckpointIsEmpty_Params, nullptr);

	return CheckpointIsEmpty_Params.ReturnValue;
};

// Function OLGame.OLConsole.InputKey
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// EInputEvent                    Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm | CPF_Parm)
// bool                           bGamepad                       (CPF_OptionalParm | CPF_Parm)

bool UOLConsole::InputKey(int32_t ControllerId, struct FName Key, EInputEvent Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* uFnInputKey = nullptr;

	if (!uFnInputKey)
	{
		uFnInputKey = UFunction::FindFunction("Function OLGame.OLConsole.InputKey");
	}

	UOLConsole_execInputKey_Params InputKey_Params;
	memset(&InputKey_Params, 0, sizeof(InputKey_Params));
	memcpy_s(&InputKey_Params.ControllerId, sizeof(InputKey_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&InputKey_Params.Key, sizeof(InputKey_Params.Key), &Key, sizeof(Key));
	memcpy_s(&InputKey_Params.Event, sizeof(InputKey_Params.Event), &Event, sizeof(Event));
	memcpy_s(&InputKey_Params.AmountDepressed, sizeof(InputKey_Params.AmountDepressed), &AmountDepressed, sizeof(AmountDepressed));
	InputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnInputKey, &InputKey_Params, nullptr);

	return InputKey_Params.ReturnValue;
};

// Function OLGame.OLConsole.AddCustomCommandsToAutoComplete
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLConsole::AddCustomCommandsToAutoComplete()
{
	static UFunction* uFnAddCustomCommandsToAutoComplete = nullptr;

	if (!uFnAddCustomCommandsToAutoComplete)
	{
		uFnAddCustomCommandsToAutoComplete = UFunction::FindFunction("Function OLGame.OLConsole.AddCustomCommandsToAutoComplete");
	}

	UOLConsole_execAddCustomCommandsToAutoComplete_Params AddCustomCommandsToAutoComplete_Params;
	memset(&AddCustomCommandsToAutoComplete_Params, 0, sizeof(AddCustomCommandsToAutoComplete_Params));

	uFnAddCustomCommandsToAutoComplete->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddCustomCommandsToAutoComplete, &AddCustomCommandsToAutoComplete_Params, nullptr);
	uFnAddCustomCommandsToAutoComplete->FunctionFlags |= 0x400;
};

// Function OLGame.OLDarknessVolume.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLDarknessVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLDarknessVolume.OnToggle");
	}

	AOLDarknessVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLDLCManager.FindAndInstallDLC
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLDLCManager::FindAndInstallDLC()
{
	static UFunction* uFnFindAndInstallDLC = nullptr;

	if (!uFnFindAndInstallDLC)
	{
		uFnFindAndInstallDLC = UFunction::FindFunction("Function OLGame.OLDLCManager.FindAndInstallDLC");
	}

	UOLDLCManager_execFindAndInstallDLC_Params FindAndInstallDLC_Params;
	memset(&FindAndInstallDLC_Params, 0, sizeof(FindAndInstallDLC_Params));

	uFnFindAndInstallDLC->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindAndInstallDLC, &FindAndInstallDLC_Params, nullptr);
	uFnFindAndInstallDLC->FunctionFlags |= 0x400;

	return FindAndInstallDLC_Params.ReturnValue;
};

// Function OLGame.OLDoor.BreakDoor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLPawn*                 Breaker                        (CPF_Parm)
// bool                           bReversed                      (CPF_Parm)

void AOLDoor::eventBreakDoor(class AOLPawn* Breaker, bool bReversed)
{
	static UFunction* uFnBreakDoor = nullptr;

	if (!uFnBreakDoor)
	{
		uFnBreakDoor = UFunction::FindFunction("Function OLGame.OLDoor.BreakDoor");
	}

	AOLDoor_eventBreakDoor_Params BreakDoor_Params;
	memset(&BreakDoor_Params, 0, sizeof(BreakDoor_Params));
	memcpy_s(&BreakDoor_Params.Breaker, sizeof(BreakDoor_Params.Breaker), &Breaker, sizeof(Breaker));
	BreakDoor_Params.bReversed = bReversed;

	this->ProcessEvent(uFnBreakDoor, &BreakDoor_Params, nullptr);
};

// Function OLGame.OLDoor.BashDoor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bReversed                      (CPF_Parm)

void AOLDoor::eventBashDoor(bool bReversed)
{
	static UFunction* uFnBashDoor = nullptr;

	if (!uFnBashDoor)
	{
		uFnBashDoor = UFunction::FindFunction("Function OLGame.OLDoor.BashDoor");
	}

	AOLDoor_eventBashDoor_Params BashDoor_Params;
	memset(&BashDoor_Params, 0, sizeof(BashDoor_Params));
	BashDoor_Params.bReversed = bReversed;

	this->ProcessEvent(uFnBashDoor, &BashDoor_Params, nullptr);
};

// Function OLGame.OLDoor.ShouldBreak
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLBot*                  Bot                            (CPF_Parm)

bool AOLDoor::eventShouldBreak(class AOLBot* Bot)
{
	static UFunction* uFnShouldBreak = nullptr;

	if (!uFnShouldBreak)
	{
		uFnShouldBreak = UFunction::FindFunction("Function OLGame.OLDoor.ShouldBreak");
	}

	AOLDoor_eventShouldBreak_Params ShouldBreak_Params;
	memset(&ShouldBreak_Params, 0, sizeof(ShouldBreak_Params));
	memcpy_s(&ShouldBreak_Params.Bot, sizeof(ShouldBreak_Params.Bot), &Bot, sizeof(Bot));

	this->ProcessEvent(uFnShouldBreak, &ShouldBreak_Params, nullptr);

	return ShouldBreak_Params.ReturnValue;
};

// Function OLGame.OLDoor.OnDestroy
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Destroy*         Action                         (CPF_Parm)

void AOLDoor::OnDestroy(class USeqAct_Destroy* Action)
{
	static UFunction* uFnOnDestroy = nullptr;

	if (!uFnOnDestroy)
	{
		uFnOnDestroy = UFunction::FindFunction("Function OLGame.OLDoor.OnDestroy");
	}

	AOLDoor_execOnDestroy_Params OnDestroy_Params;
	memset(&OnDestroy_Params, 0, sizeof(OnDestroy_Params));
	memcpy_s(&OnDestroy_Params.Action, sizeof(OnDestroy_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnDestroy, &OnDestroy_Params, nullptr);
};

// Function OLGame.OLDoor.SoftDestroy
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLDoor::SoftDestroy()
{
	static UFunction* uFnSoftDestroy = nullptr;

	if (!uFnSoftDestroy)
	{
		uFnSoftDestroy = UFunction::FindFunction("Function OLGame.OLDoor.SoftDestroy");
	}

	AOLDoor_execSoftDestroy_Params SoftDestroy_Params;
	memset(&SoftDestroy_Params, 0, sizeof(SoftDestroy_Params));

	uFnSoftDestroy->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSoftDestroy, &SoftDestroy_Params, nullptr);
	uFnSoftDestroy->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.NotifyHandlesToWait
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLDoor::NotifyHandlesToWait()
{
	static UFunction* uFnNotifyHandlesToWait = nullptr;

	if (!uFnNotifyHandlesToWait)
	{
		uFnNotifyHandlesToWait = UFunction::FindFunction("Function OLGame.OLDoor.NotifyHandlesToWait");
	}

	AOLDoor_execNotifyHandlesToWait_Params NotifyHandlesToWait_Params;
	memset(&NotifyHandlesToWait_Params, 0, sizeof(NotifyHandlesToWait_Params));

	uFnNotifyHandlesToWait->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyHandlesToWait, &NotifyHandlesToWait_Params, nullptr);
	uFnNotifyHandlesToWait->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.NotifyHandlesToRepath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLDoor::NotifyHandlesToRepath()
{
	static UFunction* uFnNotifyHandlesToRepath = nullptr;

	if (!uFnNotifyHandlesToRepath)
	{
		uFnNotifyHandlesToRepath = UFunction::FindFunction("Function OLGame.OLDoor.NotifyHandlesToRepath");
	}

	AOLDoor_execNotifyHandlesToRepath_Params NotifyHandlesToRepath_Params;
	memset(&NotifyHandlesToRepath_Params, 0, sizeof(NotifyHandlesToRepath_Params));

	uFnNotifyHandlesToRepath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyHandlesToRepath, &NotifyHandlesToRepath_Params, nullptr);
	uFnNotifyHandlesToRepath->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.GetOpenAngle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AOLDoor::GetOpenAngle()
{
	static UFunction* uFnGetOpenAngle = nullptr;

	if (!uFnGetOpenAngle)
	{
		uFnGetOpenAngle = UFunction::FindFunction("Function OLGame.OLDoor.GetOpenAngle");
	}

	AOLDoor_execGetOpenAngle_Params GetOpenAngle_Params;
	memset(&GetOpenAngle_Params, 0, sizeof(GetOpenAngle_Params));

	uFnGetOpenAngle->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetOpenAngle, &GetOpenAngle_Params, nullptr);
	uFnGetOpenAngle->FunctionFlags |= 0x400;

	return GetOpenAngle_Params.ReturnValue;
};

// Function OLGame.OLDoor.TriggerEvent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EDoorEventType                 EventType                      (CPF_Parm)
// class AOLPawn*                 Triggerer                      (CPF_Parm)

void AOLDoor::TriggerEvent(EDoorEventType EventType, class AOLPawn* Triggerer)
{
	static UFunction* uFnTriggerEvent = nullptr;

	if (!uFnTriggerEvent)
	{
		uFnTriggerEvent = UFunction::FindFunction("Function OLGame.OLDoor.TriggerEvent");
	}

	AOLDoor_execTriggerEvent_Params TriggerEvent_Params;
	memset(&TriggerEvent_Params, 0, sizeof(TriggerEvent_Params));
	memcpy_s(&TriggerEvent_Params.EventType, sizeof(TriggerEvent_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&TriggerEvent_Params.Triggerer, sizeof(TriggerEvent_Params.Triggerer), &Triggerer, sizeof(Triggerer));

	uFnTriggerEvent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTriggerEvent, &TriggerEvent_Params, nullptr);
	uFnTriggerEvent->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.TriggerBreakDoorCameraShake
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLDoor::TriggerBreakDoorCameraShake()
{
	static UFunction* uFnTriggerBreakDoorCameraShake = nullptr;

	if (!uFnTriggerBreakDoorCameraShake)
	{
		uFnTriggerBreakDoorCameraShake = UFunction::FindFunction("Function OLGame.OLDoor.TriggerBreakDoorCameraShake");
	}

	AOLDoor_execTriggerBreakDoorCameraShake_Params TriggerBreakDoorCameraShake_Params;
	memset(&TriggerBreakDoorCameraShake_Params, 0, sizeof(TriggerBreakDoorCameraShake_Params));

	uFnTriggerBreakDoorCameraShake->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTriggerBreakDoorCameraShake, &TriggerBreakDoorCameraShake_Params, nullptr);
	uFnTriggerBreakDoorCameraShake->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.StopShaking
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLDoor::StopShaking()
{
	static UFunction* uFnStopShaking = nullptr;

	if (!uFnStopShaking)
	{
		uFnStopShaking = UFunction::FindFunction("Function OLGame.OLDoor.StopShaking");
	}

	AOLDoor_execStopShaking_Params StopShaking_Params;
	memset(&StopShaking_Params, 0, sizeof(StopShaking_Params));

	uFnStopShaking->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopShaking, &StopShaking_Params, nullptr);
	uFnStopShaking->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.StartShaking
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FDoorShakeData          ShakeParams                    (CPF_Parm)
// bool                           bSwitchToBreakingMesh          (CPF_OptionalParm | CPF_Parm)
// bool                           bReversed                      (CPF_OptionalParm | CPF_Parm)
// bool                           bFromAI                        (CPF_OptionalParm | CPF_Parm)

void AOLDoor::StartShaking(struct FDoorShakeData ShakeParams, bool bSwitchToBreakingMesh, bool bReversed, bool bFromAI)
{
	static UFunction* uFnStartShaking = nullptr;

	if (!uFnStartShaking)
	{
		uFnStartShaking = UFunction::FindFunction("Function OLGame.OLDoor.StartShaking");
	}

	AOLDoor_execStartShaking_Params StartShaking_Params;
	memset(&StartShaking_Params, 0, sizeof(StartShaking_Params));
	memcpy_s(&StartShaking_Params.ShakeParams, sizeof(StartShaking_Params.ShakeParams), &ShakeParams, sizeof(ShakeParams));
	StartShaking_Params.bSwitchToBreakingMesh = bSwitchToBreakingMesh;
	StartShaking_Params.bReversed = bReversed;
	StartShaking_Params.bFromAI = bFromAI;

	uFnStartShaking->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartShaking, &StartShaking_Params, nullptr);
	uFnStartShaking->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.IsBroken
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLDoor::IsBroken()
{
	static UFunction* uFnIsBroken = nullptr;

	if (!uFnIsBroken)
	{
		uFnIsBroken = UFunction::FindFunction("Function OLGame.OLDoor.IsBroken");
	}

	AOLDoor_execIsBroken_Params IsBroken_Params;
	memset(&IsBroken_Params, 0, sizeof(IsBroken_Params));

	this->ProcessEvent(uFnIsBroken, &IsBroken_Params, nullptr);

	return IsBroken_Params.ReturnValue;
};

// Function OLGame.OLDoor.UnregisterNavmeshObstacle
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLDoor::UnregisterNavmeshObstacle()
{
	static UFunction* uFnUnregisterNavmeshObstacle = nullptr;

	if (!uFnUnregisterNavmeshObstacle)
	{
		uFnUnregisterNavmeshObstacle = UFunction::FindFunction("Function OLGame.OLDoor.UnregisterNavmeshObstacle");
	}

	AOLDoor_execUnregisterNavmeshObstacle_Params UnregisterNavmeshObstacle_Params;
	memset(&UnregisterNavmeshObstacle_Params, 0, sizeof(UnregisterNavmeshObstacle_Params));

	uFnUnregisterNavmeshObstacle->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterNavmeshObstacle, &UnregisterNavmeshObstacle_Params, nullptr);
	uFnUnregisterNavmeshObstacle->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.RegisterNavMeshObstacle
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLDoor::RegisterNavMeshObstacle()
{
	static UFunction* uFnRegisterNavMeshObstacle = nullptr;

	if (!uFnRegisterNavMeshObstacle)
	{
		uFnRegisterNavMeshObstacle = UFunction::FindFunction("Function OLGame.OLDoor.RegisterNavMeshObstacle");
	}

	AOLDoor_execRegisterNavMeshObstacle_Params RegisterNavMeshObstacle_Params;
	memset(&RegisterNavMeshObstacle_Params, 0, sizeof(RegisterNavMeshObstacle_Params));

	uFnRegisterNavMeshObstacle->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterNavMeshObstacle, &RegisterNavMeshObstacle_Params, nullptr);
	uFnRegisterNavMeshObstacle->FunctionFlags |= 0x400;
};

// Function OLGame.OLDoor.ScriptGetCenterLocation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector AOLDoor::ScriptGetCenterLocation()
{
	static UFunction* uFnScriptGetCenterLocation = nullptr;

	if (!uFnScriptGetCenterLocation)
	{
		uFnScriptGetCenterLocation = UFunction::FindFunction("Function OLGame.OLDoor.ScriptGetCenterLocation");
	}

	AOLDoor_execScriptGetCenterLocation_Params ScriptGetCenterLocation_Params;
	memset(&ScriptGetCenterLocation_Params, 0, sizeof(ScriptGetCenterLocation_Params));

	uFnScriptGetCenterLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnScriptGetCenterLocation, &ScriptGetCenterLocation_Params, nullptr);
	uFnScriptGetCenterLocation->FunctionFlags |= 0x400;

	return ScriptGetCenterLocation_Params.ReturnValue;
};

// Function OLGame.OLElectrifiedVolume.Touch
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AOLElectrifiedVolume::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function OLGame.OLElectrifiedVolume.Touch");
	}

	AOLElectrifiedVolume_eventTouch_Params Touch_Params;
	memset(&Touch_Params, 0, sizeof(Touch_Params));
	memcpy_s(&Touch_Params.Other, sizeof(Touch_Params.Other), &Other, sizeof(Other));
	memcpy_s(&Touch_Params.OtherComp, sizeof(Touch_Params.OtherComp), &OtherComp, sizeof(OtherComp));
	memcpy_s(&Touch_Params.HitLocation, sizeof(Touch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Touch_Params.HitNormal, sizeof(Touch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function OLGame.OLElectrifiedVolume.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLElectrifiedVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLElectrifiedVolume.OnToggle");
	}

	AOLElectrifiedVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLElectrifiedWaterVolume.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLElectrifiedWaterVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLElectrifiedWaterVolume.OnToggle");
	}

	AOLElectrifiedWaterVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLEngine.UpdateProfileKeyBindingsFromSystem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOLProfileSettings*      ProfileSettings                (CPF_Parm)

bool UOLEngine::UpdateProfileKeyBindingsFromSystem(class UOLProfileSettings* ProfileSettings)
{
	static UFunction* uFnUpdateProfileKeyBindingsFromSystem = nullptr;

	if (!uFnUpdateProfileKeyBindingsFromSystem)
	{
		uFnUpdateProfileKeyBindingsFromSystem = UFunction::FindFunction("Function OLGame.OLEngine.UpdateProfileKeyBindingsFromSystem");
	}

	UOLEngine_execUpdateProfileKeyBindingsFromSystem_Params UpdateProfileKeyBindingsFromSystem_Params;
	memset(&UpdateProfileKeyBindingsFromSystem_Params, 0, sizeof(UpdateProfileKeyBindingsFromSystem_Params));
	memcpy_s(&UpdateProfileKeyBindingsFromSystem_Params.ProfileSettings, sizeof(UpdateProfileKeyBindingsFromSystem_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnUpdateProfileKeyBindingsFromSystem->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateProfileKeyBindingsFromSystem, &UpdateProfileKeyBindingsFromSystem_Params, nullptr);
	uFnUpdateProfileKeyBindingsFromSystem->FunctionFlags |= 0x400;

	return UpdateProfileKeyBindingsFromSystem_Params.ReturnValue;
};

// Function OLGame.OLEngine.UpdateProfileFromSystemSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOLProfileSettings*      ProfileSettings                (CPF_Parm)

bool UOLEngine::UpdateProfileFromSystemSettings(class UOLProfileSettings* ProfileSettings)
{
	static UFunction* uFnUpdateProfileFromSystemSettings = nullptr;

	if (!uFnUpdateProfileFromSystemSettings)
	{
		uFnUpdateProfileFromSystemSettings = UFunction::FindFunction("Function OLGame.OLEngine.UpdateProfileFromSystemSettings");
	}

	UOLEngine_execUpdateProfileFromSystemSettings_Params UpdateProfileFromSystemSettings_Params;
	memset(&UpdateProfileFromSystemSettings_Params, 0, sizeof(UpdateProfileFromSystemSettings_Params));
	memcpy_s(&UpdateProfileFromSystemSettings_Params.ProfileSettings, sizeof(UpdateProfileFromSystemSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnUpdateProfileFromSystemSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateProfileFromSystemSettings, &UpdateProfileFromSystemSettings_Params, nullptr);
	uFnUpdateProfileFromSystemSettings->FunctionFlags |= 0x400;

	return UpdateProfileFromSystemSettings_Params.ReturnValue;
};

// Function OLGame.OLEngine.ApplyKeyBindings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOLProfileSettings*      ProfileSettings                (CPF_Parm)

bool UOLEngine::ApplyKeyBindings(class UOLProfileSettings* ProfileSettings)
{
	static UFunction* uFnApplyKeyBindings = nullptr;

	if (!uFnApplyKeyBindings)
	{
		uFnApplyKeyBindings = UFunction::FindFunction("Function OLGame.OLEngine.ApplyKeyBindings");
	}

	UOLEngine_execApplyKeyBindings_Params ApplyKeyBindings_Params;
	memset(&ApplyKeyBindings_Params, 0, sizeof(ApplyKeyBindings_Params));
	memcpy_s(&ApplyKeyBindings_Params.ProfileSettings, sizeof(ApplyKeyBindings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnApplyKeyBindings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnApplyKeyBindings, &ApplyKeyBindings_Params, nullptr);
	uFnApplyKeyBindings->FunctionFlags |= 0x400;

	return ApplyKeyBindings_Params.ReturnValue;
};

// Function OLGame.OLEngine.ApplySystemSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOLProfileSettings*      ProfileSettings                (CPF_Parm)

bool UOLEngine::ApplySystemSettings(class UOLProfileSettings* ProfileSettings)
{
	static UFunction* uFnApplySystemSettings = nullptr;

	if (!uFnApplySystemSettings)
	{
		uFnApplySystemSettings = UFunction::FindFunction("Function OLGame.OLEngine.ApplySystemSettings");
	}

	UOLEngine_execApplySystemSettings_Params ApplySystemSettings_Params;
	memset(&ApplySystemSettings_Params, 0, sizeof(ApplySystemSettings_Params));
	memcpy_s(&ApplySystemSettings_Params.ProfileSettings, sizeof(ApplySystemSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnApplySystemSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnApplySystemSettings, &ApplySystemSettings_Params, nullptr);
	uFnApplySystemSettings->FunctionFlags |= 0x400;

	return ApplySystemSettings_Params.ReturnValue;
};

// Function OLGame.OLEngine.LoadMostRecentSaveFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::LoadMostRecentSaveFile()
{
	static UFunction* uFnLoadMostRecentSaveFile = nullptr;

	if (!uFnLoadMostRecentSaveFile)
	{
		uFnLoadMostRecentSaveFile = UFunction::FindFunction("Function OLGame.OLEngine.LoadMostRecentSaveFile");
	}

	UOLEngine_execLoadMostRecentSaveFile_Params LoadMostRecentSaveFile_Params;
	memset(&LoadMostRecentSaveFile_Params, 0, sizeof(LoadMostRecentSaveFile_Params));

	uFnLoadMostRecentSaveFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLoadMostRecentSaveFile, &LoadMostRecentSaveFile_Params, nullptr);
	uFnLoadMostRecentSaveFile->FunctionFlags |= 0x400;

	return LoadMostRecentSaveFile_Params.ReturnValue;
};

// Function OLGame.OLEngine.LoadCurrentSaveFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::LoadCurrentSaveFile()
{
	static UFunction* uFnLoadCurrentSaveFile = nullptr;

	if (!uFnLoadCurrentSaveFile)
	{
		uFnLoadCurrentSaveFile = UFunction::FindFunction("Function OLGame.OLEngine.LoadCurrentSaveFile");
	}

	UOLEngine_execLoadCurrentSaveFile_Params LoadCurrentSaveFile_Params;
	memset(&LoadCurrentSaveFile_Params, 0, sizeof(LoadCurrentSaveFile_Params));

	uFnLoadCurrentSaveFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLoadCurrentSaveFile, &LoadCurrentSaveFile_Params, nullptr);
	uFnLoadCurrentSaveFile->FunctionFlags |= 0x400;

	return LoadCurrentSaveFile_Params.ReturnValue;
};

// Function OLGame.OLEngine.RefreshSaveFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLEngine::RefreshSaveFiles()
{
	static UFunction* uFnRefreshSaveFiles = nullptr;

	if (!uFnRefreshSaveFiles)
	{
		uFnRefreshSaveFiles = UFunction::FindFunction("Function OLGame.OLEngine.RefreshSaveFiles");
	}

	UOLEngine_execRefreshSaveFiles_Params RefreshSaveFiles_Params;
	memset(&RefreshSaveFiles_Params, 0, sizeof(RefreshSaveFiles_Params));

	uFnRefreshSaveFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRefreshSaveFiles, &RefreshSaveFiles_Params, nullptr);
	uFnRefreshSaveFiles->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.DeleteSaveFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOLEngine::DeleteSaveFile(class FString Filename)
{
	static UFunction* uFnDeleteSaveFile = nullptr;

	if (!uFnDeleteSaveFile)
	{
		uFnDeleteSaveFile = UFunction::FindFunction("Function OLGame.OLEngine.DeleteSaveFile");
	}

	UOLEngine_execDeleteSaveFile_Params DeleteSaveFile_Params;
	memset(&DeleteSaveFile_Params, 0, sizeof(DeleteSaveFile_Params));
	memcpy_s(&DeleteSaveFile_Params.Filename, sizeof(DeleteSaveFile_Params.Filename), &Filename, sizeof(Filename));

	uFnDeleteSaveFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeleteSaveFile, &DeleteSaveFile_Params, nullptr);
	uFnDeleteSaveFile->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.LoadSaveFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOLEngine::LoadSaveFile(class FString Filename)
{
	static UFunction* uFnLoadSaveFile = nullptr;

	if (!uFnLoadSaveFile)
	{
		uFnLoadSaveFile = UFunction::FindFunction("Function OLGame.OLEngine.LoadSaveFile");
	}

	UOLEngine_execLoadSaveFile_Params LoadSaveFile_Params;
	memset(&LoadSaveFile_Params, 0, sizeof(LoadSaveFile_Params));
	memcpy_s(&LoadSaveFile_Params.Filename, sizeof(LoadSaveFile_Params.Filename), &Filename, sizeof(Filename));

	uFnLoadSaveFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLoadSaveFile, &LoadSaveFile_Params, nullptr);
	uFnLoadSaveFile->FunctionFlags |= 0x400;

	return LoadSaveFile_Params.ReturnValue;
};

// Function OLGame.OLEngine.DebugLoadGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOLEngine::DebugLoadGame(class FString Filename)
{
	static UFunction* uFnDebugLoadGame = nullptr;

	if (!uFnDebugLoadGame)
	{
		uFnDebugLoadGame = UFunction::FindFunction("Function OLGame.OLEngine.DebugLoadGame");
	}

	UOLEngine_execDebugLoadGame_Params DebugLoadGame_Params;
	memset(&DebugLoadGame_Params, 0, sizeof(DebugLoadGame_Params));
	memcpy_s(&DebugLoadGame_Params.Filename, sizeof(DebugLoadGame_Params.Filename), &Filename, sizeof(Filename));

	uFnDebugLoadGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDebugLoadGame, &DebugLoadGame_Params, nullptr);
	uFnDebugLoadGame->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.DebugSaveGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOLEngine::DebugSaveGame(class FString Filename)
{
	static UFunction* uFnDebugSaveGame = nullptr;

	if (!uFnDebugSaveGame)
	{
		uFnDebugSaveGame = UFunction::FindFunction("Function OLGame.OLEngine.DebugSaveGame");
	}

	UOLEngine_execDebugSaveGame_Params DebugSaveGame_Params;
	memset(&DebugSaveGame_Params, 0, sizeof(DebugSaveGame_Params));
	memcpy_s(&DebugSaveGame_Params.Filename, sizeof(DebugSaveGame_Params.Filename), &Filename, sizeof(Filename));

	uFnDebugSaveGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDebugSaveGame, &DebugSaveGame_Params, nullptr);
	uFnDebugSaveGame->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.HasValidSaveGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::HasValidSaveGame()
{
	static UFunction* uFnHasValidSaveGame = nullptr;

	if (!uFnHasValidSaveGame)
	{
		uFnHasValidSaveGame = UFunction::FindFunction("Function OLGame.OLEngine.HasValidSaveGame");
	}

	UOLEngine_execHasValidSaveGame_Params HasValidSaveGame_Params;
	memset(&HasValidSaveGame_Params, 0, sizeof(HasValidSaveGame_Params));

	uFnHasValidSaveGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHasValidSaveGame, &HasValidSaveGame_Params, nullptr);
	uFnHasValidSaveGame->FunctionFlags |= 0x400;

	return HasValidSaveGame_Params.ReturnValue;
};

// Function OLGame.OLEngine.SaveAllCheckpoints
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLEngine::SaveAllCheckpoints()
{
	static UFunction* uFnSaveAllCheckpoints = nullptr;

	if (!uFnSaveAllCheckpoints)
	{
		uFnSaveAllCheckpoints = UFunction::FindFunction("Function OLGame.OLEngine.SaveAllCheckpoints");
	}

	UOLEngine_execSaveAllCheckpoints_Params SaveAllCheckpoints_Params;
	memset(&SaveAllCheckpoints_Params, 0, sizeof(SaveAllCheckpoints_Params));

	uFnSaveAllCheckpoints->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSaveAllCheckpoints, &SaveAllCheckpoints_Params, nullptr);
	uFnSaveAllCheckpoints->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.SaveCheckpointImmediate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   CheckpointName                 (CPF_Parm)

void UOLEngine::SaveCheckpointImmediate(struct FName CheckpointName)
{
	static UFunction* uFnSaveCheckpointImmediate = nullptr;

	if (!uFnSaveCheckpointImmediate)
	{
		uFnSaveCheckpointImmediate = UFunction::FindFunction("Function OLGame.OLEngine.SaveCheckpointImmediate");
	}

	UOLEngine_execSaveCheckpointImmediate_Params SaveCheckpointImmediate_Params;
	memset(&SaveCheckpointImmediate_Params, 0, sizeof(SaveCheckpointImmediate_Params));
	memcpy_s(&SaveCheckpointImmediate_Params.CheckpointName, sizeof(SaveCheckpointImmediate_Params.CheckpointName), &CheckpointName, sizeof(CheckpointName));

	uFnSaveCheckpointImmediate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSaveCheckpointImmediate, &SaveCheckpointImmediate_Params, nullptr);
	uFnSaveCheckpointImmediate->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.SaveCheckpoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   CheckpointName                 (CPF_Parm)
// bool                           bSaveToDisk                    (CPF_Parm)

void UOLEngine::SaveCheckpoint(struct FName CheckpointName, bool bSaveToDisk)
{
	static UFunction* uFnSaveCheckpoint = nullptr;

	if (!uFnSaveCheckpoint)
	{
		uFnSaveCheckpoint = UFunction::FindFunction("Function OLGame.OLEngine.SaveCheckpoint");
	}

	UOLEngine_execSaveCheckpoint_Params SaveCheckpoint_Params;
	memset(&SaveCheckpoint_Params, 0, sizeof(SaveCheckpoint_Params));
	memcpy_s(&SaveCheckpoint_Params.CheckpointName, sizeof(SaveCheckpoint_Params.CheckpointName), &CheckpointName, sizeof(CheckpointName));
	SaveCheckpoint_Params.bSaveToDisk = bSaveToDisk;

	uFnSaveCheckpoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSaveCheckpoint, &SaveCheckpoint_Params, nullptr);
	uFnSaveCheckpoint->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.StartCurrentCheckpoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLEngine::StartCurrentCheckpoint()
{
	static UFunction* uFnStartCurrentCheckpoint = nullptr;

	if (!uFnStartCurrentCheckpoint)
	{
		uFnStartCurrentCheckpoint = UFunction::FindFunction("Function OLGame.OLEngine.StartCurrentCheckpoint");
	}

	UOLEngine_execStartCurrentCheckpoint_Params StartCurrentCheckpoint_Params;
	memset(&StartCurrentCheckpoint_Params, 0, sizeof(StartCurrentCheckpoint_Params));

	uFnStartCurrentCheckpoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartCurrentCheckpoint, &StartCurrentCheckpoint_Params, nullptr);
	uFnStartCurrentCheckpoint->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.SelectAndLoadGame
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOLEngine::SelectAndLoadGame(struct FScriptDelegate Callback)
{
	static UFunction* uFnSelectAndLoadGame = nullptr;

	if (!uFnSelectAndLoadGame)
	{
		uFnSelectAndLoadGame = UFunction::FindFunction("Function OLGame.OLEngine.SelectAndLoadGame");
	}

	UOLEngine_execSelectAndLoadGame_Params SelectAndLoadGame_Params;
	memset(&SelectAndLoadGame_Params, 0, sizeof(SelectAndLoadGame_Params));
	memcpy_s(&SelectAndLoadGame_Params.Callback, sizeof(SelectAndLoadGame_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnSelectAndLoadGame, &SelectAndLoadGame_Params, nullptr);
};

// Function OLGame.OLEngine.NativeSelectAndLoadGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLEngine::NativeSelectAndLoadGame()
{
	static UFunction* uFnNativeSelectAndLoadGame = nullptr;

	if (!uFnNativeSelectAndLoadGame)
	{
		uFnNativeSelectAndLoadGame = UFunction::FindFunction("Function OLGame.OLEngine.NativeSelectAndLoadGame");
	}

	UOLEngine_execNativeSelectAndLoadGame_Params NativeSelectAndLoadGame_Params;
	memset(&NativeSelectAndLoadGame_Params, 0, sizeof(NativeSelectAndLoadGame_Params));

	uFnNativeSelectAndLoadGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeSelectAndLoadGame, &NativeSelectAndLoadGame_Params, nullptr);
	uFnNativeSelectAndLoadGame->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.SelectSaveLocation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  startCP                        (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOLEngine::SelectSaveLocation(class FString startCP, struct FScriptDelegate Callback)
{
	static UFunction* uFnSelectSaveLocation = nullptr;

	if (!uFnSelectSaveLocation)
	{
		uFnSelectSaveLocation = UFunction::FindFunction("Function OLGame.OLEngine.SelectSaveLocation");
	}

	UOLEngine_execSelectSaveLocation_Params SelectSaveLocation_Params;
	memset(&SelectSaveLocation_Params, 0, sizeof(SelectSaveLocation_Params));
	memcpy_s(&SelectSaveLocation_Params.startCP, sizeof(SelectSaveLocation_Params.startCP), &startCP, sizeof(startCP));
	memcpy_s(&SelectSaveLocation_Params.Callback, sizeof(SelectSaveLocation_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnSelectSaveLocation, &SelectSaveLocation_Params, nullptr);
};

// Function OLGame.OLEngine.NativeSelectSaveLocation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  startCP                        (CPF_Parm | CPF_NeedCtorLink)

void UOLEngine::NativeSelectSaveLocation(class FString startCP)
{
	static UFunction* uFnNativeSelectSaveLocation = nullptr;

	if (!uFnNativeSelectSaveLocation)
	{
		uFnNativeSelectSaveLocation = UFunction::FindFunction("Function OLGame.OLEngine.NativeSelectSaveLocation");
	}

	UOLEngine_execNativeSelectSaveLocation_Params NativeSelectSaveLocation_Params;
	memset(&NativeSelectSaveLocation_Params, 0, sizeof(NativeSelectSaveLocation_Params));
	memcpy_s(&NativeSelectSaveLocation_Params.startCP, sizeof(NativeSelectSaveLocation_Params.startCP), &startCP, sizeof(startCP));

	uFnNativeSelectSaveLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeSelectSaveLocation, &NativeSelectSaveLocation_Params, nullptr);
	uFnNativeSelectSaveLocation->FunctionFlags |= 0x400;
};

// Function OLGame.OLEngine.FinishedSaveDataDialog
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bSuccess                       (CPF_Parm)

void UOLEngine::eventFinishedSaveDataDialog(bool bSuccess)
{
	static UFunction* uFnFinishedSaveDataDialog = nullptr;

	if (!uFnFinishedSaveDataDialog)
	{
		uFnFinishedSaveDataDialog = UFunction::FindFunction("Function OLGame.OLEngine.FinishedSaveDataDialog");
	}

	UOLEngine_eventFinishedSaveDataDialog_Params FinishedSaveDataDialog_Params;
	memset(&FinishedSaveDataDialog_Params, 0, sizeof(FinishedSaveDataDialog_Params));
	FinishedSaveDataDialog_Params.bSuccess = bSuccess;

	this->ProcessEvent(uFnFinishedSaveDataDialog, &FinishedSaveDataDialog_Params, nullptr);
};

// Function OLGame.OLEngine.SaveDataDialogDoneCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bSuccess                       (CPF_Parm)

void UOLEngine::SaveDataDialogDoneCallback(bool bSuccess)
{
	static UFunction* uFnSaveDataDialogDoneCallback = nullptr;

	if (!uFnSaveDataDialogDoneCallback)
	{
		uFnSaveDataDialogDoneCallback = UFunction::FindFunction("Function OLGame.OLEngine.SaveDataDialogDoneCallback");
	}

	UOLEngine_execSaveDataDialogDoneCallback_Params SaveDataDialogDoneCallback_Params;
	memset(&SaveDataDialogDoneCallback_Params, 0, sizeof(SaveDataDialogDoneCallback_Params));
	SaveDataDialogDoneCallback_Params.bSuccess = bSuccess;

	this->ProcessEvent(uFnSaveDataDialogDoneCallback, &SaveDataDialogDoneCallback_Params, nullptr);
};

// Function OLGame.OLEngine.UsingFixedSaveLocation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::UsingFixedSaveLocation()
{
	static UFunction* uFnUsingFixedSaveLocation = nullptr;

	if (!uFnUsingFixedSaveLocation)
	{
		uFnUsingFixedSaveLocation = UFunction::FindFunction("Function OLGame.OLEngine.UsingFixedSaveLocation");
	}

	UOLEngine_execUsingFixedSaveLocation_Params UsingFixedSaveLocation_Params;
	memset(&UsingFixedSaveLocation_Params, 0, sizeof(UsingFixedSaveLocation_Params));

	uFnUsingFixedSaveLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUsingFixedSaveLocation, &UsingFixedSaveLocation_Params, nullptr);
	uFnUsingFixedSaveLocation->FunctionFlags |= 0x400;

	return UsingFixedSaveLocation_Params.ReturnValue;
};

// Function OLGame.OLEngine.TryStartDLCGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::TryStartDLCGame()
{
	static UFunction* uFnTryStartDLCGame = nullptr;

	if (!uFnTryStartDLCGame)
	{
		uFnTryStartDLCGame = UFunction::FindFunction("Function OLGame.OLEngine.TryStartDLCGame");
	}

	UOLEngine_execTryStartDLCGame_Params TryStartDLCGame_Params;
	memset(&TryStartDLCGame_Params, 0, sizeof(TryStartDLCGame_Params));

	uFnTryStartDLCGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryStartDLCGame, &TryStartDLCGame_Params, nullptr);
	uFnTryStartDLCGame->FunctionFlags |= 0x400;

	return TryStartDLCGame_Params.ReturnValue;
};

// Function OLGame.OLEngine.ShouldShowNewDLCGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::ShouldShowNewDLCGame()
{
	static UFunction* uFnShouldShowNewDLCGame = nullptr;

	if (!uFnShouldShowNewDLCGame)
	{
		uFnShouldShowNewDLCGame = UFunction::FindFunction("Function OLGame.OLEngine.ShouldShowNewDLCGame");
	}

	UOLEngine_execShouldShowNewDLCGame_Params ShouldShowNewDLCGame_Params;
	memset(&ShouldShowNewDLCGame_Params, 0, sizeof(ShouldShowNewDLCGame_Params));

	uFnShouldShowNewDLCGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShouldShowNewDLCGame, &ShouldShowNewDLCGame_Params, nullptr);
	uFnShouldShowNewDLCGame->FunctionFlags |= 0x400;

	return ShouldShowNewDLCGame_Params.ReturnValue;
};

// Function OLGame.OLEngine.RefreshDLC
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::RefreshDLC()
{
	static UFunction* uFnRefreshDLC = nullptr;

	if (!uFnRefreshDLC)
	{
		uFnRefreshDLC = UFunction::FindFunction("Function OLGame.OLEngine.RefreshDLC");
	}

	UOLEngine_execRefreshDLC_Params RefreshDLC_Params;
	memset(&RefreshDLC_Params, 0, sizeof(RefreshDLC_Params));

	uFnRefreshDLC->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRefreshDLC, &RefreshDLC_Params, nullptr);
	uFnRefreshDLC->FunctionFlags |= 0x400;

	return RefreshDLC_Params.ReturnValue;
};

// Function OLGame.OLEngine.CheckReloadForDLC
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLEngine::CheckReloadForDLC()
{
	static UFunction* uFnCheckReloadForDLC = nullptr;

	if (!uFnCheckReloadForDLC)
	{
		uFnCheckReloadForDLC = UFunction::FindFunction("Function OLGame.OLEngine.CheckReloadForDLC");
	}

	UOLEngine_execCheckReloadForDLC_Params CheckReloadForDLC_Params;
	memset(&CheckReloadForDLC_Params, 0, sizeof(CheckReloadForDLC_Params));

	uFnCheckReloadForDLC->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCheckReloadForDLC, &CheckReloadForDLC_Params, nullptr);
	uFnCheckReloadForDLC->FunctionFlags |= 0x400;

	return CheckReloadForDLC_Params.ReturnValue;
};

// Function OLGame.OLEngine.RestartPlayer
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLPlayerController*     OLPC                           (CPF_Parm)

void UOLEngine::eventRestartPlayer(class AOLPlayerController* OLPC)
{
	static UFunction* uFnRestartPlayer = nullptr;

	if (!uFnRestartPlayer)
	{
		uFnRestartPlayer = UFunction::FindFunction("Function OLGame.OLEngine.RestartPlayer");
	}

	UOLEngine_eventRestartPlayer_Params RestartPlayer_Params;
	memset(&RestartPlayer_Params, 0, sizeof(RestartPlayer_Params));
	memcpy_s(&RestartPlayer_Params.OLPC, sizeof(RestartPlayer_Params.OLPC), &OLPC, sizeof(OLPC));

	this->ProcessEvent(uFnRestartPlayer, &RestartPlayer_Params, nullptr);
};

// Function OLGame.OLFloorMaterialVolume.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLFloorMaterialVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLFloorMaterialVolume.OnToggle");
	}

	AOLFloorMaterialVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLFXManager.SetFXForEnemyPawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLEnemyPawn*            EnemyPawn                      (CPF_Parm)

void UOLFXManager::SetFXForEnemyPawn(class AOLEnemyPawn* EnemyPawn)
{
	static UFunction* uFnSetFXForEnemyPawn = nullptr;

	if (!uFnSetFXForEnemyPawn)
	{
		uFnSetFXForEnemyPawn = UFunction::FindFunction("Function OLGame.OLFXManager.SetFXForEnemyPawn");
	}

	UOLFXManager_execSetFXForEnemyPawn_Params SetFXForEnemyPawn_Params;
	memset(&SetFXForEnemyPawn_Params, 0, sizeof(SetFXForEnemyPawn_Params));
	memcpy_s(&SetFXForEnemyPawn_Params.EnemyPawn, sizeof(SetFXForEnemyPawn_Params.EnemyPawn), &EnemyPawn, sizeof(EnemyPawn));

	uFnSetFXForEnemyPawn->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetFXForEnemyPawn, &SetFXForEnemyPawn_Params, nullptr);
	uFnSetFXForEnemyPawn->FunctionFlags |= 0x400;
};

// Function OLGame.OLFXManager.DeactivateNightVisionEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLFXManager::DeactivateNightVisionEffect()
{
	static UFunction* uFnDeactivateNightVisionEffect = nullptr;

	if (!uFnDeactivateNightVisionEffect)
	{
		uFnDeactivateNightVisionEffect = UFunction::FindFunction("Function OLGame.OLFXManager.DeactivateNightVisionEffect");
	}

	UOLFXManager_execDeactivateNightVisionEffect_Params DeactivateNightVisionEffect_Params;
	memset(&DeactivateNightVisionEffect_Params, 0, sizeof(DeactivateNightVisionEffect_Params));

	uFnDeactivateNightVisionEffect->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeactivateNightVisionEffect, &DeactivateNightVisionEffect_Params, nullptr);
	uFnDeactivateNightVisionEffect->FunctionFlags |= 0x400;
};

// Function OLGame.OLFXManager.ActivateCamcorderEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLFXManager::ActivateCamcorderEffect()
{
	static UFunction* uFnActivateCamcorderEffect = nullptr;

	if (!uFnActivateCamcorderEffect)
	{
		uFnActivateCamcorderEffect = UFunction::FindFunction("Function OLGame.OLFXManager.ActivateCamcorderEffect");
	}

	UOLFXManager_execActivateCamcorderEffect_Params ActivateCamcorderEffect_Params;
	memset(&ActivateCamcorderEffect_Params, 0, sizeof(ActivateCamcorderEffect_Params));

	uFnActivateCamcorderEffect->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnActivateCamcorderEffect, &ActivateCamcorderEffect_Params, nullptr);
	uFnActivateCamcorderEffect->FunctionFlags |= 0x400;
};

// Function OLGame.OLFXManager.ActivateNightVisionEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPowered                       (CPF_Parm)

void UOLFXManager::ActivateNightVisionEffect(bool bPowered)
{
	static UFunction* uFnActivateNightVisionEffect = nullptr;

	if (!uFnActivateNightVisionEffect)
	{
		uFnActivateNightVisionEffect = UFunction::FindFunction("Function OLGame.OLFXManager.ActivateNightVisionEffect");
	}

	UOLFXManager_execActivateNightVisionEffect_Params ActivateNightVisionEffect_Params;
	memset(&ActivateNightVisionEffect_Params, 0, sizeof(ActivateNightVisionEffect_Params));
	ActivateNightVisionEffect_Params.bPowered = bPowered;

	uFnActivateNightVisionEffect->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnActivateNightVisionEffect, &ActivateNightVisionEffect_Params, nullptr);
	uFnActivateNightVisionEffect->FunctionFlags |= 0x400;
};

// Function OLGame.OLFXManager.SetPPSFromScript
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EPPSMode                       newPPS                         (CPF_Parm)

void UOLFXManager::SetPPSFromScript(EPPSMode newPPS)
{
	static UFunction* uFnSetPPSFromScript = nullptr;

	if (!uFnSetPPSFromScript)
	{
		uFnSetPPSFromScript = UFunction::FindFunction("Function OLGame.OLFXManager.SetPPSFromScript");
	}

	UOLFXManager_execSetPPSFromScript_Params SetPPSFromScript_Params;
	memset(&SetPPSFromScript_Params, 0, sizeof(SetPPSFromScript_Params));
	memcpy_s(&SetPPSFromScript_Params.newPPS, sizeof(SetPPSFromScript_Params.newPPS), &newPPS, sizeof(newPPS));

	uFnSetPPSFromScript->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPPSFromScript, &SetPPSFromScript_Params, nullptr);
	uFnSetPPSFromScript->FunctionFlags |= 0x400;
};

// Function OLGame.OLFXManager.GetFXManager
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLFXManager*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOLFXManager* UOLFXManager::GetFXManager()
{
	static UFunction* uFnGetFXManager = nullptr;

	if (!uFnGetFXManager)
	{
		uFnGetFXManager = UFunction::FindFunction("Function OLGame.OLFXManager.GetFXManager");
	}

	UOLFXManager_execGetFXManager_Params GetFXManager_Params;
	memset(&GetFXManager_Params, 0, sizeof(GetFXManager_Params));

	uFnGetFXManager->FunctionFlags &= ~0x400;
	UOLFXManager::StaticClass()->ProcessEvent(uFnGetFXManager, &GetFXManager_Params, nullptr);
	uFnGetFXManager->FunctionFlags |= 0x400;

	return GetFXManager_Params.ReturnValue;
};

// Function OLGame.OLGame.ClearPause
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGame::eventClearPause()
{
	static UFunction* uFnClearPause = nullptr;

	if (!uFnClearPause)
	{
		uFnClearPause = UFunction::FindFunction("Function OLGame.OLGame.ClearPause");
	}

	AOLGame_eventClearPause_Params ClearPause_Params;
	memset(&ClearPause_Params, 0, sizeof(ClearPause_Params));

	this->ProcessEvent(uFnClearPause, &ClearPause_Params, nullptr);
};

// Function OLGame.OLGame.SetPause
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APlayerController*       PC                             (CPF_Parm)
// struct FScriptDelegate         CanUnpauseDelegate             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool AOLGame::SetPause(class APlayerController* PC, struct FScriptDelegate CanUnpauseDelegate)
{
	static UFunction* uFnSetPause = nullptr;

	if (!uFnSetPause)
	{
		uFnSetPause = UFunction::FindFunction("Function OLGame.OLGame.SetPause");
	}

	AOLGame_execSetPause_Params SetPause_Params;
	memset(&SetPause_Params, 0, sizeof(SetPause_Params));
	memcpy_s(&SetPause_Params.PC, sizeof(SetPause_Params.PC), &PC, sizeof(PC));
	memcpy_s(&SetPause_Params.CanUnpauseDelegate, sizeof(SetPause_Params.CanUnpauseDelegate), &CanUnpauseDelegate, sizeof(CanUnpauseDelegate));

	this->ProcessEvent(uFnSetPause, &SetPause_Params, nullptr);

	return SetPause_Params.ReturnValue;
};

// Function OLGame.OLGame.HandleUnpaused
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGame::HandleUnpaused()
{
	static UFunction* uFnHandleUnpaused = nullptr;

	if (!uFnHandleUnpaused)
	{
		uFnHandleUnpaused = UFunction::FindFunction("Function OLGame.OLGame.HandleUnpaused");
	}

	AOLGame_execHandleUnpaused_Params HandleUnpaused_Params;
	memset(&HandleUnpaused_Params, 0, sizeof(HandleUnpaused_Params));

	uFnHandleUnpaused->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHandleUnpaused, &HandleUnpaused_Params, nullptr);
	uFnHandleUnpaused->FunctionFlags |= 0x400;
};

// Function OLGame.OLGame.HandlePaused
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGame::HandlePaused()
{
	static UFunction* uFnHandlePaused = nullptr;

	if (!uFnHandlePaused)
	{
		uFnHandlePaused = UFunction::FindFunction("Function OLGame.OLGame.HandlePaused");
	}

	AOLGame_execHandlePaused_Params HandlePaused_Params;
	memset(&HandlePaused_Params, 0, sizeof(HandlePaused_Params));

	uFnHandlePaused->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHandlePaused, &HandlePaused_Params, nullptr);
	uFnHandlePaused->FunctionFlags |= 0x400;
};

// Function OLGame.OLGame.SetGameSpeed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          T                              (CPF_Parm)

void AOLGame::SetGameSpeed(float T)
{
	static UFunction* uFnSetGameSpeed = nullptr;

	if (!uFnSetGameSpeed)
	{
		uFnSetGameSpeed = UFunction::FindFunction("Function OLGame.OLGame.SetGameSpeed");
	}

	AOLGame_execSetGameSpeed_Params SetGameSpeed_Params;
	memset(&SetGameSpeed_Params, 0, sizeof(SetGameSpeed_Params));
	memcpy_s(&SetGameSpeed_Params.T, sizeof(SetGameSpeed_Params.T), &T, sizeof(T));

	this->ProcessEvent(uFnSetGameSpeed, &SetGameSpeed_Params, nullptr);
};

// Function OLGame.OLGame.TravelToStartupMap
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGame::eventTravelToStartupMap()
{
	static UFunction* uFnTravelToStartupMap = nullptr;

	if (!uFnTravelToStartupMap)
	{
		uFnTravelToStartupMap = UFunction::FindFunction("Function OLGame.OLGame.TravelToStartupMap");
	}

	AOLGame_eventTravelToStartupMap_Params TravelToStartupMap_Params;
	memset(&TravelToStartupMap_Params, 0, sizeof(TravelToStartupMap_Params));

	this->ProcessEvent(uFnTravelToStartupMap, &TravelToStartupMap_Params, nullptr);
};

// Function OLGame.OLGame.RestartPlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AController*             NewPlayer                      (CPF_Parm)

void AOLGame::RestartPlayer(class AController* NewPlayer)
{
	static UFunction* uFnRestartPlayer = nullptr;

	if (!uFnRestartPlayer)
	{
		uFnRestartPlayer = UFunction::FindFunction("Function OLGame.OLGame.RestartPlayer");
	}

	AOLGame_execRestartPlayer_Params RestartPlayer_Params;
	memset(&RestartPlayer_Params, 0, sizeof(RestartPlayer_Params));
	memcpy_s(&RestartPlayer_Params.NewPlayer, sizeof(RestartPlayer_Params.NewPlayer), &NewPlayer, sizeof(NewPlayer));

	this->ProcessEvent(uFnRestartPlayer, &RestartPlayer_Params, nullptr);
};

// Function OLGame.OLGame.UpdateGameType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGame::UpdateGameType()
{
	static UFunction* uFnUpdateGameType = nullptr;

	if (!uFnUpdateGameType)
	{
		uFnUpdateGameType = UFunction::FindFunction("Function OLGame.OLGame.UpdateGameType");
	}

	AOLGame_execUpdateGameType_Params UpdateGameType_Params;
	memset(&UpdateGameType_Params, 0, sizeof(UpdateGameType_Params));

	uFnUpdateGameType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateGameType, &UpdateGameType_Params, nullptr);
	uFnUpdateGameType->FunctionFlags |= 0x400;
};

// Function OLGame.OLGame.OnPlayerSpawned
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AController*             NewPlayer                      (CPF_Parm)
// class ANavigationPoint*        StartPoint                     (CPF_Parm)

void AOLGame::eventOnPlayerSpawned(class AController* NewPlayer, class ANavigationPoint* StartPoint)
{
	static UFunction* uFnOnPlayerSpawned = nullptr;

	if (!uFnOnPlayerSpawned)
	{
		uFnOnPlayerSpawned = UFunction::FindFunction("Function OLGame.OLGame.OnPlayerSpawned");
	}

	AOLGame_eventOnPlayerSpawned_Params OnPlayerSpawned_Params;
	memset(&OnPlayerSpawned_Params, 0, sizeof(OnPlayerSpawned_Params));
	memcpy_s(&OnPlayerSpawned_Params.NewPlayer, sizeof(OnPlayerSpawned_Params.NewPlayer), &NewPlayer, sizeof(NewPlayer));
	memcpy_s(&OnPlayerSpawned_Params.StartPoint, sizeof(OnPlayerSpawned_Params.StartPoint), &StartPoint, sizeof(StartPoint));

	this->ProcessEvent(uFnOnPlayerSpawned, &OnPlayerSpawned_Params, nullptr);
};

// Function OLGame.OLGame.FindPlayerStart
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ANavigationPoint*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AController*             Player                         (CPF_Parm)
// uint8_t                        InTeam                         (CPF_OptionalParm | CPF_Parm)
// class FString                  IncomingName                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class ANavigationPoint* AOLGame::FindPlayerStart(class AController* Player, uint8_t InTeam, class FString IncomingName)
{
	static UFunction* uFnFindPlayerStart = nullptr;

	if (!uFnFindPlayerStart)
	{
		uFnFindPlayerStart = UFunction::FindFunction("Function OLGame.OLGame.FindPlayerStart");
	}

	AOLGame_execFindPlayerStart_Params FindPlayerStart_Params;
	memset(&FindPlayerStart_Params, 0, sizeof(FindPlayerStart_Params));
	memcpy_s(&FindPlayerStart_Params.Player, sizeof(FindPlayerStart_Params.Player), &Player, sizeof(Player));
	memcpy_s(&FindPlayerStart_Params.InTeam, sizeof(FindPlayerStart_Params.InTeam), &InTeam, sizeof(InTeam));
	memcpy_s(&FindPlayerStart_Params.IncomingName, sizeof(FindPlayerStart_Params.IncomingName), &IncomingName, sizeof(IncomingName));

	this->ProcessEvent(uFnFindPlayerStart, &FindPlayerStart_Params, nullptr);

	return FindPlayerStart_Params.ReturnValue;
};

// Function OLGame.OLGame.MatchCheckpoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLCheckpoint*           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  PortalName                     (CPF_Parm | CPF_NeedCtorLink)

class AOLCheckpoint* AOLGame::MatchCheckpoint(class FString PortalName)
{
	static UFunction* uFnMatchCheckpoint = nullptr;

	if (!uFnMatchCheckpoint)
	{
		uFnMatchCheckpoint = UFunction::FindFunction("Function OLGame.OLGame.MatchCheckpoint");
	}

	AOLGame_execMatchCheckpoint_Params MatchCheckpoint_Params;
	memset(&MatchCheckpoint_Params, 0, sizeof(MatchCheckpoint_Params));
	memcpy_s(&MatchCheckpoint_Params.PortalName, sizeof(MatchCheckpoint_Params.PortalName), &PortalName, sizeof(PortalName));

	uFnMatchCheckpoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMatchCheckpoint, &MatchCheckpoint_Params, nullptr);
	uFnMatchCheckpoint->FunctionFlags |= 0x400;

	return MatchCheckpoint_Params.ReturnValue;
};

// Function OLGame.OLGame.AllowCheats
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APlayerController*       P                              (CPF_Parm)

bool AOLGame::AllowCheats(class APlayerController* P)
{
	static UFunction* uFnAllowCheats = nullptr;

	if (!uFnAllowCheats)
	{
		uFnAllowCheats = UFunction::FindFunction("Function OLGame.OLGame.AllowCheats");
	}

	AOLGame_execAllowCheats_Params AllowCheats_Params;
	memset(&AllowCheats_Params, 0, sizeof(AllowCheats_Params));
	memcpy_s(&AllowCheats_Params.P, sizeof(AllowCheats_Params.P), &P, sizeof(P));

	this->ProcessEvent(uFnAllowCheats, &AllowCheats_Params, nullptr);

	return AllowCheats_Params.ReturnValue;
};

// Function OLGame.OLGame.IsDLCInstalled
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLGame::IsDLCInstalled()
{
	static UFunction* uFnIsDLCInstalled = nullptr;

	if (!uFnIsDLCInstalled)
	{
		uFnIsDLCInstalled = UFunction::FindFunction("Function OLGame.OLGame.IsDLCInstalled");
	}

	AOLGame_execIsDLCInstalled_Params IsDLCInstalled_Params;
	memset(&IsDLCInstalled_Params, 0, sizeof(IsDLCInstalled_Params));

	uFnIsDLCInstalled->FunctionFlags &= ~0x400;
	AOLGame::StaticClass()->ProcessEvent(uFnIsDLCInstalled, &IsDLCInstalled_Params, nullptr);
	uFnIsDLCInstalled->FunctionFlags |= 0x400;

	return IsDLCInstalled_Params.ReturnValue;
};

// Function OLGame.OLGame.IsPlayingDLC
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLGame::IsPlayingDLC()
{
	static UFunction* uFnIsPlayingDLC = nullptr;

	if (!uFnIsPlayingDLC)
	{
		uFnIsPlayingDLC = UFunction::FindFunction("Function OLGame.OLGame.IsPlayingDLC");
	}

	AOLGame_execIsPlayingDLC_Params IsPlayingDLC_Params;
	memset(&IsPlayingDLC_Params, 0, sizeof(IsPlayingDLC_Params));

	uFnIsPlayingDLC->FunctionFlags &= ~0x400;
	AOLGame::StaticClass()->ProcessEvent(uFnIsPlayingDLC, &IsPlayingDLC_Params, nullptr);
	uFnIsPlayingDLC->FunctionFlags |= 0x400;

	return IsPlayingDLC_Params.ReturnValue;
};

// Function OLGame.OLGame.IsDemo
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLGame::IsDemo()
{
	static UFunction* uFnIsDemo = nullptr;

	if (!uFnIsDemo)
	{
		uFnIsDemo = UFunction::FindFunction("Function OLGame.OLGame.IsDemo");
	}

	AOLGame_execIsDemo_Params IsDemo_Params;
	memset(&IsDemo_Params, 0, sizeof(IsDemo_Params));

	uFnIsDemo->FunctionFlags &= ~0x400;
	AOLGame::StaticClass()->ProcessEvent(uFnIsDemo, &IsDemo_Params, nullptr);
	uFnIsDemo->FunctionFlags |= 0x400;

	return IsDemo_Params.ReturnValue;
};

// Function OLGame.OLGame.SetGameType
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MapName                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Options                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Portal                         (CPF_Parm | CPF_NeedCtorLink)

class UClass* AOLGame::eventSetGameType(class FString MapName, class FString Options, class FString Portal)
{
	static UFunction* uFnSetGameType = nullptr;

	if (!uFnSetGameType)
	{
		uFnSetGameType = UFunction::FindFunction("Function OLGame.OLGame.SetGameType");
	}

	AOLGame_eventSetGameType_Params SetGameType_Params;
	memset(&SetGameType_Params, 0, sizeof(SetGameType_Params));
	memcpy_s(&SetGameType_Params.MapName, sizeof(SetGameType_Params.MapName), &MapName, sizeof(MapName));
	memcpy_s(&SetGameType_Params.Options, sizeof(SetGameType_Params.Options), &Options, sizeof(Options));
	memcpy_s(&SetGameType_Params.Portal, sizeof(SetGameType_Params.Portal), &Portal, sizeof(Portal));

	AOLGame::StaticClass()->ProcessEvent(uFnSetGameType, &SetGameType_Params, nullptr);

	return SetGameType_Params.ReturnValue;
};

// Function OLGame.OLGameplayMarker.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLGameplayMarker::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLGameplayMarker.OnToggle");
	}

	AOLGameplayMarker_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLScareMoment.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLScareMoment::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLScareMoment.OnToggle");
	}

	AOLScareMoment_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLScareMoment.StopScare
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLScareMoment::eventStopScare()
{
	static UFunction* uFnStopScare = nullptr;

	if (!uFnStopScare)
	{
		uFnStopScare = UFunction::FindFunction("Function OLGame.OLScareMoment.StopScare");
	}

	AOLScareMoment_eventStopScare_Params StopScare_Params;
	memset(&StopScare_Params, 0, sizeof(StopScare_Params));

	this->ProcessEvent(uFnStopScare, &StopScare_Params, nullptr);
};

// Function OLGame.OLScareMoment.StartScare
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLScareMoment::eventStartScare()
{
	static UFunction* uFnStartScare = nullptr;

	if (!uFnStartScare)
	{
		uFnStartScare = UFunction::FindFunction("Function OLGame.OLScareMoment.StartScare");
	}

	AOLScareMoment_eventStartScare_Params StartScare_Params;
	memset(&StartScare_Params, 0, sizeof(StartScare_Params));

	this->ProcessEvent(uFnStartScare, &StartScare_Params, nullptr);
};

// Function OLGame.OLAIVisionObstructionVolume.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLAIVisionObstructionVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLAIVisionObstructionVolume.OnToggle");
	}

	AOLAIVisionObstructionVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLSqueezeVolume.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLSqueezeVolume::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLSqueezeVolume.PostBeginPlay");
	}

	AOLSqueezeVolume_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLGameStateList.OnPlayerDeath
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGameStateList::OnPlayerDeath()
{
	static UFunction* uFnOnPlayerDeath = nullptr;

	if (!uFnOnPlayerDeath)
	{
		uFnOnPlayerDeath = UFunction::FindFunction("Function OLGame.OLGameStateList.OnPlayerDeath");
	}

	AOLGameStateList_execOnPlayerDeath_Params OnPlayerDeath_Params;
	memset(&OnPlayerDeath_Params, 0, sizeof(OnPlayerDeath_Params));

	uFnOnPlayerDeath->FunctionFlags &= ~0x400;
	AOLGameStateList::StaticClass()->ProcessEvent(uFnOnPlayerDeath, &OnPlayerDeath_Params, nullptr);
	uFnOnPlayerDeath->FunctionFlags |= 0x400;
};

// Function OLGame.OLGameStateList.ResetAllGameState
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGameStateList::ResetAllGameState()
{
	static UFunction* uFnResetAllGameState = nullptr;

	if (!uFnResetAllGameState)
	{
		uFnResetAllGameState = UFunction::FindFunction("Function OLGame.OLGameStateList.ResetAllGameState");
	}

	AOLGameStateList_execResetAllGameState_Params ResetAllGameState_Params;
	memset(&ResetAllGameState_Params, 0, sizeof(ResetAllGameState_Params));

	uFnResetAllGameState->FunctionFlags &= ~0x400;
	AOLGameStateList::StaticClass()->ProcessEvent(uFnResetAllGameState, &ResetAllGameState_Params, nullptr);
	uFnResetAllGameState->FunctionFlags |= 0x400;
};

// Function OLGame.OLGameStateList.DumpGameState
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGameStateList::DumpGameState()
{
	static UFunction* uFnDumpGameState = nullptr;

	if (!uFnDumpGameState)
	{
		uFnDumpGameState = UFunction::FindFunction("Function OLGame.OLGameStateList.DumpGameState");
	}

	AOLGameStateList_execDumpGameState_Params DumpGameState_Params;
	memset(&DumpGameState_Params, 0, sizeof(DumpGameState_Params));

	uFnDumpGameState->FunctionFlags &= ~0x400;
	AOLGameStateList::StaticClass()->ProcessEvent(uFnDumpGameState, &DumpGameState_Params, nullptr);
	uFnDumpGameState->FunctionFlags |= 0x400;
};

// Function OLGame.OLGameViewportClient.DrawTransition
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UOLGameViewportClient::DrawTransition(class UCanvas* Canvas)
{
	static UFunction* uFnDrawTransition = nullptr;

	if (!uFnDrawTransition)
	{
		uFnDrawTransition = UFunction::FindFunction("Function OLGame.OLGameViewportClient.DrawTransition");
	}

	UOLGameViewportClient_execDrawTransition_Params DrawTransition_Params;
	memset(&DrawTransition_Params, 0, sizeof(DrawTransition_Params));
	memcpy_s(&DrawTransition_Params.Canvas, sizeof(DrawTransition_Params.Canvas), &Canvas, sizeof(Canvas));

	this->ProcessEvent(uFnDrawTransition, &DrawTransition_Params, nullptr);
};

// Function OLGame.OLHUD.GamepadConfigChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::GamepadConfigChanged()
{
	static UFunction* uFnGamepadConfigChanged = nullptr;

	if (!uFnGamepadConfigChanged)
	{
		uFnGamepadConfigChanged = UFunction::FindFunction("Function OLGame.OLHUD.GamepadConfigChanged");
	}

	AOLHUD_execGamepadConfigChanged_Params GamepadConfigChanged_Params;
	memset(&GamepadConfigChanged_Params, 0, sizeof(GamepadConfigChanged_Params));

	this->ProcessEvent(uFnGamepadConfigChanged, &GamepadConfigChanged_Params, nullptr);
};

// Function OLGame.OLHUD.OnLostFocusPause
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void AOLHUD::eventOnLostFocusPause(bool bEnable)
{
	static UFunction* uFnOnLostFocusPause = nullptr;

	if (!uFnOnLostFocusPause)
	{
		uFnOnLostFocusPause = UFunction::FindFunction("Function OLGame.OLHUD.OnLostFocusPause");
	}

	AOLHUD_eventOnLostFocusPause_Params OnLostFocusPause_Params;
	memset(&OnLostFocusPause_Params, 0, sizeof(OnLostFocusPause_Params));
	OnLostFocusPause_Params.bEnable = bEnable;

	this->ProcessEvent(uFnOnLostFocusPause, &OnLostFocusPause_Params, nullptr);
};

// Function OLGame.OLHUD.ShowHUDMessages
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::ShowHUDMessages()
{
	static UFunction* uFnShowHUDMessages = nullptr;

	if (!uFnShowHUDMessages)
	{
		uFnShowHUDMessages = UFunction::FindFunction("Function OLGame.OLHUD.ShowHUDMessages");
	}

	AOLHUD_execShowHUDMessages_Params ShowHUDMessages_Params;
	memset(&ShowHUDMessages_Params, 0, sizeof(ShowHUDMessages_Params));

	this->ProcessEvent(uFnShowHUDMessages, &ShowHUDMessages_Params, nullptr);
};

// Function OLGame.OLHUD.HideHUDMessages
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::HideHUDMessages()
{
	static UFunction* uFnHideHUDMessages = nullptr;

	if (!uFnHideHUDMessages)
	{
		uFnHideHUDMessages = UFunction::FindFunction("Function OLGame.OLHUD.HideHUDMessages");
	}

	AOLHUD_execHideHUDMessages_Params HideHUDMessages_Params;
	memset(&HideHUDMessages_Params, 0, sizeof(HideHUDMessages_Params));

	this->ProcessEvent(uFnHideHUDMessages, &HideHUDMessages_Params, nullptr);
};

// Function OLGame.OLHUD.ShowingSubtitle
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::eventShowingSubtitle()
{
	static UFunction* uFnShowingSubtitle = nullptr;

	if (!uFnShowingSubtitle)
	{
		uFnShowingSubtitle = UFunction::FindFunction("Function OLGame.OLHUD.ShowingSubtitle");
	}

	AOLHUD_eventShowingSubtitle_Params ShowingSubtitle_Params;
	memset(&ShowingSubtitle_Params, 0, sizeof(ShowingSubtitle_Params));

	this->ProcessEvent(uFnShowingSubtitle, &ShowingSubtitle_Params, nullptr);

	return ShowingSubtitle_Params.ReturnValue;
};

// Function OLGame.OLHUD.HideSubtitle
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::eventHideSubtitle()
{
	static UFunction* uFnHideSubtitle = nullptr;

	if (!uFnHideSubtitle)
	{
		uFnHideSubtitle = UFunction::FindFunction("Function OLGame.OLHUD.HideSubtitle");
	}

	AOLHUD_eventHideSubtitle_Params HideSubtitle_Params;
	memset(&HideSubtitle_Params, 0, sizeof(HideSubtitle_Params));

	this->ProcessEvent(uFnHideSubtitle, &HideSubtitle_Params, nullptr);
};

// Function OLGame.OLHUD.ShowSubtitle
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  MessageText                    (CPF_Parm | CPF_NeedCtorLink)

void AOLHUD::eventShowSubtitle(class FString MessageText)
{
	static UFunction* uFnShowSubtitle = nullptr;

	if (!uFnShowSubtitle)
	{
		uFnShowSubtitle = UFunction::FindFunction("Function OLGame.OLHUD.ShowSubtitle");
	}

	AOLHUD_eventShowSubtitle_Params ShowSubtitle_Params;
	memset(&ShowSubtitle_Params, 0, sizeof(ShowSubtitle_Params));
	memcpy_s(&ShowSubtitle_Params.MessageText, sizeof(ShowSubtitle_Params.MessageText), &MessageText, sizeof(MessageText));

	this->ProcessEvent(uFnShowSubtitle, &ShowSubtitle_Params, nullptr);
};

// Function OLGame.OLHUD.HideObjective
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::eventHideObjective()
{
	static UFunction* uFnHideObjective = nullptr;

	if (!uFnHideObjective)
	{
		uFnHideObjective = UFunction::FindFunction("Function OLGame.OLHUD.HideObjective");
	}

	AOLHUD_eventHideObjective_Params HideObjective_Params;
	memset(&HideObjective_Params, 0, sizeof(HideObjective_Params));

	this->ProcessEvent(uFnHideObjective, &HideObjective_Params, nullptr);
};

// Function OLGame.OLHUD.ShowObjective
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ObjectiveText                  (CPF_Parm | CPF_NeedCtorLink)

void AOLHUD::eventShowObjective(class FString ObjectiveText)
{
	static UFunction* uFnShowObjective = nullptr;

	if (!uFnShowObjective)
	{
		uFnShowObjective = UFunction::FindFunction("Function OLGame.OLHUD.ShowObjective");
	}

	AOLHUD_eventShowObjective_Params ShowObjective_Params;
	memset(&ShowObjective_Params, 0, sizeof(ShowObjective_Params));
	memcpy_s(&ShowObjective_Params.ObjectiveText, sizeof(ShowObjective_Params.ObjectiveText), &ObjectiveText, sizeof(ObjectiveText));

	this->ProcessEvent(uFnShowObjective, &ShowObjective_Params, nullptr);
};

// Function OLGame.OLHUD.HideMessage
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::eventHideMessage()
{
	static UFunction* uFnHideMessage = nullptr;

	if (!uFnHideMessage)
	{
		uFnHideMessage = UFunction::FindFunction("Function OLGame.OLHUD.HideMessage");
	}

	AOLHUD_eventHideMessage_Params HideMessage_Params;
	memset(&HideMessage_Params, 0, sizeof(HideMessage_Params));

	this->ProcessEvent(uFnHideMessage, &HideMessage_Params, nullptr);
};

// Function OLGame.OLHUD.ShowMessage
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EHUDMessageType                MessageType                    (CPF_Parm)
// class FString                  MessageText                    (CPF_Parm | CPF_NeedCtorLink)

void AOLHUD::eventShowMessage(EHUDMessageType MessageType, class FString MessageText)
{
	static UFunction* uFnShowMessage = nullptr;

	if (!uFnShowMessage)
	{
		uFnShowMessage = UFunction::FindFunction("Function OLGame.OLHUD.ShowMessage");
	}

	AOLHUD_eventShowMessage_Params ShowMessage_Params;
	memset(&ShowMessage_Params, 0, sizeof(ShowMessage_Params));
	memcpy_s(&ShowMessage_Params.MessageType, sizeof(ShowMessage_Params.MessageType), &MessageType, sizeof(MessageType));
	memcpy_s(&ShowMessage_Params.MessageText, sizeof(ShowMessage_Params.MessageText), &MessageText, sizeof(MessageText));

	this->ProcessEvent(uFnShowMessage, &ShowMessage_Params, nullptr);
};

// Function OLGame.OLHUD.HideMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::HideMenu()
{
	static UFunction* uFnHideMenu = nullptr;

	if (!uFnHideMenu)
	{
		uFnHideMenu = UFunction::FindFunction("Function OLGame.OLHUD.HideMenu");
	}

	AOLHUD_execHideMenu_Params HideMenu_Params;
	memset(&HideMenu_Params, 0, sizeof(HideMenu_Params));

	this->ProcessEvent(uFnHideMenu, &HideMenu_Params, nullptr);
};

// Function OLGame.OLHUD.ShowMenuType
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EMenuType                      MenuType                       (CPF_Parm)

void AOLHUD::eventShowMenuType(EMenuType MenuType)
{
	static UFunction* uFnShowMenuType = nullptr;

	if (!uFnShowMenuType)
	{
		uFnShowMenuType = UFunction::FindFunction("Function OLGame.OLHUD.ShowMenuType");
	}

	AOLHUD_eventShowMenuType_Params ShowMenuType_Params;
	memset(&ShowMenuType_Params, 0, sizeof(ShowMenuType_Params));
	memcpy_s(&ShowMenuType_Params.MenuType, sizeof(ShowMenuType_Params.MenuType), &MenuType, sizeof(MenuType));

	this->ProcessEvent(uFnShowMenuType, &ShowMenuType_Params, nullptr);
};

// Function OLGame.OLHUD.PostSoundEventEnter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::PostSoundEventEnter()
{
	static UFunction* uFnPostSoundEventEnter = nullptr;

	if (!uFnPostSoundEventEnter)
	{
		uFnPostSoundEventEnter = UFunction::FindFunction("Function OLGame.OLHUD.PostSoundEventEnter");
	}

	AOLHUD_execPostSoundEventEnter_Params PostSoundEventEnter_Params;
	memset(&PostSoundEventEnter_Params, 0, sizeof(PostSoundEventEnter_Params));

	uFnPostSoundEventEnter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPostSoundEventEnter, &PostSoundEventEnter_Params, nullptr);
	uFnPostSoundEventEnter->FunctionFlags |= 0x400;
};

// Function OLGame.OLHUD.PostSoundEventSelect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::PostSoundEventSelect()
{
	static UFunction* uFnPostSoundEventSelect = nullptr;

	if (!uFnPostSoundEventSelect)
	{
		uFnPostSoundEventSelect = UFunction::FindFunction("Function OLGame.OLHUD.PostSoundEventSelect");
	}

	AOLHUD_execPostSoundEventSelect_Params PostSoundEventSelect_Params;
	memset(&PostSoundEventSelect_Params, 0, sizeof(PostSoundEventSelect_Params));

	uFnPostSoundEventSelect->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPostSoundEventSelect, &PostSoundEventSelect_Params, nullptr);
	uFnPostSoundEventSelect->FunctionFlags |= 0x400;
};

// Function OLGame.OLHUD.MuteSelectSound
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          MuteTime                       (CPF_OptionalParm | CPF_Parm)

void AOLHUD::MuteSelectSound(float MuteTime)
{
	static UFunction* uFnMuteSelectSound = nullptr;

	if (!uFnMuteSelectSound)
	{
		uFnMuteSelectSound = UFunction::FindFunction("Function OLGame.OLHUD.MuteSelectSound");
	}

	AOLHUD_execMuteSelectSound_Params MuteSelectSound_Params;
	memset(&MuteSelectSound_Params, 0, sizeof(MuteSelectSound_Params));
	memcpy_s(&MuteSelectSound_Params.MuteTime, sizeof(MuteSelectSound_Params.MuteTime), &MuteTime, sizeof(MuteTime));

	uFnMuteSelectSound->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMuteSelectSound, &MuteSelectSound_Params, nullptr);
	uFnMuteSelectSound->FunctionFlags |= 0x400;
};

// Function OLGame.OLHUD.CanShowSubMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::CanShowSubMenu()
{
	static UFunction* uFnCanShowSubMenu = nullptr;

	if (!uFnCanShowSubMenu)
	{
		uFnCanShowSubMenu = UFunction::FindFunction("Function OLGame.OLHUD.CanShowSubMenu");
	}

	AOLHUD_execCanShowSubMenu_Params CanShowSubMenu_Params;
	memset(&CanShowSubMenu_Params, 0, sizeof(CanShowSubMenu_Params));

	uFnCanShowSubMenu->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanShowSubMenu, &CanShowSubMenu_Params, nullptr);
	uFnCanShowSubMenu->FunctionFlags |= 0x400;

	return CanShowSubMenu_Params.ReturnValue;
};

// Function OLGame.OLHUD.ShowEvidenceMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::ShowEvidenceMenu()
{
	static UFunction* uFnShowEvidenceMenu = nullptr;

	if (!uFnShowEvidenceMenu)
	{
		uFnShowEvidenceMenu = UFunction::FindFunction("Function OLGame.OLHUD.ShowEvidenceMenu");
	}

	AOLHUD_execShowEvidenceMenu_Params ShowEvidenceMenu_Params;
	memset(&ShowEvidenceMenu_Params, 0, sizeof(ShowEvidenceMenu_Params));

	this->ProcessEvent(uFnShowEvidenceMenu, &ShowEvidenceMenu_Params, nullptr);
};

// Function OLGame.OLHUD.ShowRecordingMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::ShowRecordingMenu()
{
	static UFunction* uFnShowRecordingMenu = nullptr;

	if (!uFnShowRecordingMenu)
	{
		uFnShowRecordingMenu = UFunction::FindFunction("Function OLGame.OLHUD.ShowRecordingMenu");
	}

	AOLHUD_execShowRecordingMenu_Params ShowRecordingMenu_Params;
	memset(&ShowRecordingMenu_Params, 0, sizeof(ShowRecordingMenu_Params));

	this->ProcessEvent(uFnShowRecordingMenu, &ShowRecordingMenu_Params, nullptr);
};

// Function OLGame.OLHUD.ShowTabMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::ShowTabMenu()
{
	static UFunction* uFnShowTabMenu = nullptr;

	if (!uFnShowTabMenu)
	{
		uFnShowTabMenu = UFunction::FindFunction("Function OLGame.OLHUD.ShowTabMenu");
	}

	AOLHUD_execShowTabMenu_Params ShowTabMenu_Params;
	memset(&ShowTabMenu_Params, 0, sizeof(ShowTabMenu_Params));

	this->ProcessEvent(uFnShowTabMenu, &ShowTabMenu_Params, nullptr);
};

// Function OLGame.OLHUD.ShowMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::ShowMenu()
{
	static UFunction* uFnShowMenu = nullptr;

	if (!uFnShowMenu)
	{
		uFnShowMenu = UFunction::FindFunction("Function OLGame.OLHUD.ShowMenu");
	}

	AOLHUD_execShowMenu_Params ShowMenu_Params;
	memset(&ShowMenu_Params, 0, sizeof(ShowMenu_Params));

	this->ProcessEvent(uFnShowMenu, &ShowMenu_Params, nullptr);
};

// Function OLGame.OLHUD.ShowMainMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::ShowMainMenu()
{
	static UFunction* uFnShowMainMenu = nullptr;

	if (!uFnShowMainMenu)
	{
		uFnShowMainMenu = UFunction::FindFunction("Function OLGame.OLHUD.ShowMainMenu");
	}

	AOLHUD_execShowMainMenu_Params ShowMainMenu_Params;
	memset(&ShowMainMenu_Params, 0, sizeof(ShowMainMenu_Params));

	this->ProcessEvent(uFnShowMainMenu, &ShowMainMenu_Params, nullptr);
};

// Function OLGame.OLHUD.ReloadMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::ReloadMenu()
{
	static UFunction* uFnReloadMenu = nullptr;

	if (!uFnReloadMenu)
	{
		uFnReloadMenu = UFunction::FindFunction("Function OLGame.OLHUD.ReloadMenu");
	}

	AOLHUD_execReloadMenu_Params ReloadMenu_Params;
	memset(&ReloadMenu_Params, 0, sizeof(ReloadMenu_Params));

	this->ProcessEvent(uFnReloadMenu, &ReloadMenu_Params, nullptr);
};

// Function OLGame.OLHUD.IsAMenuOpen
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::eventIsAMenuOpen()
{
	static UFunction* uFnIsAMenuOpen = nullptr;

	if (!uFnIsAMenuOpen)
	{
		uFnIsAMenuOpen = UFunction::FindFunction("Function OLGame.OLHUD.IsAMenuOpen");
	}

	AOLHUD_eventIsAMenuOpen_Params IsAMenuOpen_Params;
	memset(&IsAMenuOpen_Params, 0, sizeof(IsAMenuOpen_Params));

	this->ProcessEvent(uFnIsAMenuOpen, &IsAMenuOpen_Params, nullptr);

	return IsAMenuOpen_Params.ReturnValue;
};

// Function OLGame.OLHUD.IsInCreditsMenu
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::eventIsInCreditsMenu()
{
	static UFunction* uFnIsInCreditsMenu = nullptr;

	if (!uFnIsInCreditsMenu)
	{
		uFnIsInCreditsMenu = UFunction::FindFunction("Function OLGame.OLHUD.IsInCreditsMenu");
	}

	AOLHUD_eventIsInCreditsMenu_Params IsInCreditsMenu_Params;
	memset(&IsInCreditsMenu_Params, 0, sizeof(IsInCreditsMenu_Params));

	this->ProcessEvent(uFnIsInCreditsMenu, &IsInCreditsMenu_Params, nullptr);

	return IsInCreditsMenu_Params.ReturnValue;
};

// Function OLGame.OLHUD.IsOnMainMenuScreen
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::eventIsOnMainMenuScreen()
{
	static UFunction* uFnIsOnMainMenuScreen = nullptr;

	if (!uFnIsOnMainMenuScreen)
	{
		uFnIsOnMainMenuScreen = UFunction::FindFunction("Function OLGame.OLHUD.IsOnMainMenuScreen");
	}

	AOLHUD_eventIsOnMainMenuScreen_Params IsOnMainMenuScreen_Params;
	memset(&IsOnMainMenuScreen_Params, 0, sizeof(IsOnMainMenuScreen_Params));

	this->ProcessEvent(uFnIsOnMainMenuScreen, &IsOnMainMenuScreen_Params, nullptr);

	return IsOnMainMenuScreen_Params.ReturnValue;
};

// Function OLGame.OLHUD.IsMainMenuOpen
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::eventIsMainMenuOpen()
{
	static UFunction* uFnIsMainMenuOpen = nullptr;

	if (!uFnIsMainMenuOpen)
	{
		uFnIsMainMenuOpen = UFunction::FindFunction("Function OLGame.OLHUD.IsMainMenuOpen");
	}

	AOLHUD_eventIsMainMenuOpen_Params IsMainMenuOpen_Params;
	memset(&IsMainMenuOpen_Params, 0, sizeof(IsMainMenuOpen_Params));

	this->ProcessEvent(uFnIsMainMenuOpen, &IsMainMenuOpen_Params, nullptr);

	return IsMainMenuOpen_Params.ReturnValue;
};

// Function OLGame.OLHUD.IsInPauseMenu
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::eventIsInPauseMenu()
{
	static UFunction* uFnIsInPauseMenu = nullptr;

	if (!uFnIsInPauseMenu)
	{
		uFnIsInPauseMenu = UFunction::FindFunction("Function OLGame.OLHUD.IsInPauseMenu");
	}

	AOLHUD_eventIsInPauseMenu_Params IsInPauseMenu_Params;
	memset(&IsInPauseMenu_Params, 0, sizeof(IsInPauseMenu_Params));

	this->ProcessEvent(uFnIsInPauseMenu, &IsInPauseMenu_Params, nullptr);

	return IsInPauseMenu_Params.ReturnValue;
};

// Function OLGame.OLHUD.CanUnpauseInPauseMenu
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::CanUnpauseInPauseMenu()
{
	static UFunction* uFnCanUnpauseInPauseMenu = nullptr;

	if (!uFnCanUnpauseInPauseMenu)
	{
		uFnCanUnpauseInPauseMenu = UFunction::FindFunction("Function OLGame.OLHUD.CanUnpauseInPauseMenu");
	}

	AOLHUD_execCanUnpauseInPauseMenu_Params CanUnpauseInPauseMenu_Params;
	memset(&CanUnpauseInPauseMenu_Params, 0, sizeof(CanUnpauseInPauseMenu_Params));

	this->ProcessEvent(uFnCanUnpauseInPauseMenu, &CanUnpauseInPauseMenu_Params, nullptr);

	return CanUnpauseInPauseMenu_Params.ReturnValue;
};

// Function OLGame.OLHUD.ShowDebugInfo
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLHUD::ShowDebugInfo(float& out_YL, float& out_YPos)
{
	static UFunction* uFnShowDebugInfo = nullptr;

	if (!uFnShowDebugInfo)
	{
		uFnShowDebugInfo = UFunction::FindFunction("Function OLGame.OLHUD.ShowDebugInfo");
	}

	AOLHUD_execShowDebugInfo_Params ShowDebugInfo_Params;
	memset(&ShowDebugInfo_Params, 0, sizeof(ShowDebugInfo_Params));
	memcpy_s(&ShowDebugInfo_Params.out_YL, sizeof(ShowDebugInfo_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&ShowDebugInfo_Params.out_YPos, sizeof(ShowDebugInfo_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnShowDebugInfo, &ShowDebugInfo_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &ShowDebugInfo_Params.out_YL, sizeof(ShowDebugInfo_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &ShowDebugInfo_Params.out_YPos, sizeof(ShowDebugInfo_Params.out_YPos));
};

// Function OLGame.OLHUD.DebugNextAI
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::DebugNextAI()
{
	static UFunction* uFnDebugNextAI = nullptr;

	if (!uFnDebugNextAI)
	{
		uFnDebugNextAI = UFunction::FindFunction("Function OLGame.OLHUD.DebugNextAI");
	}

	AOLHUD_execDebugNextAI_Params DebugNextAI_Params;
	memset(&DebugNextAI_Params, 0, sizeof(DebugNextAI_Params));

	this->ProcessEvent(uFnDebugNextAI, &DebugNextAI_Params, nullptr);
};

// Function OLGame.OLHUD.NotifyGameSaved
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::NotifyGameSaved()
{
	static UFunction* uFnNotifyGameSaved = nullptr;

	if (!uFnNotifyGameSaved)
	{
		uFnNotifyGameSaved = UFunction::FindFunction("Function OLGame.OLHUD.NotifyGameSaved");
	}

	AOLHUD_execNotifyGameSaved_Params NotifyGameSaved_Params;
	memset(&NotifyGameSaved_Params, 0, sizeof(NotifyGameSaved_Params));

	uFnNotifyGameSaved->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyGameSaved, &NotifyGameSaved_Params, nullptr);
	uFnNotifyGameSaved->FunctionFlags |= 0x400;
};

// Function OLGame.OLHUD.SetGammaCalibrationActive
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bActive                        (CPF_Parm)

void AOLHUD::SetGammaCalibrationActive(bool bActive)
{
	static UFunction* uFnSetGammaCalibrationActive = nullptr;

	if (!uFnSetGammaCalibrationActive)
	{
		uFnSetGammaCalibrationActive = UFunction::FindFunction("Function OLGame.OLHUD.SetGammaCalibrationActive");
	}

	AOLHUD_execSetGammaCalibrationActive_Params SetGammaCalibrationActive_Params;
	memset(&SetGammaCalibrationActive_Params, 0, sizeof(SetGammaCalibrationActive_Params));
	SetGammaCalibrationActive_Params.bActive = bActive;

	uFnSetGammaCalibrationActive->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetGammaCalibrationActive, &SetGammaCalibrationActive_Params, nullptr);
	uFnSetGammaCalibrationActive->FunctionFlags |= 0x400;
};

// Function OLGame.OLHUD.ShowingFullScreenOverlay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHUD::ShowingFullScreenOverlay()
{
	static UFunction* uFnShowingFullScreenOverlay = nullptr;

	if (!uFnShowingFullScreenOverlay)
	{
		uFnShowingFullScreenOverlay = UFunction::FindFunction("Function OLGame.OLHUD.ShowingFullScreenOverlay");
	}

	AOLHUD_execShowingFullScreenOverlay_Params ShowingFullScreenOverlay_Params;
	memset(&ShowingFullScreenOverlay_Params, 0, sizeof(ShowingFullScreenOverlay_Params));

	uFnShowingFullScreenOverlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowingFullScreenOverlay, &ShowingFullScreenOverlay_Params, nullptr);
	uFnShowingFullScreenOverlay->FunctionFlags |= 0x400;

	return ShowingFullScreenOverlay_Params.ReturnValue;
};

// Function OLGame.OLHUD.Draw
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHUD::Draw()
{
	static UFunction* uFnDraw = nullptr;

	if (!uFnDraw)
	{
		uFnDraw = UFunction::FindFunction("Function OLGame.OLHUD.Draw");
	}

	AOLHUD_execDraw_Params Draw_Params;
	memset(&Draw_Params, 0, sizeof(Draw_Params));

	uFnDraw->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDraw, &Draw_Params, nullptr);
	uFnDraw->FunctionFlags |= 0x400;
};

// Function OLGame.OLInventoryManager.ClearGameplayItems
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLInventoryManager::ClearGameplayItems()
{
	static UFunction* uFnClearGameplayItems = nullptr;

	if (!uFnClearGameplayItems)
	{
		uFnClearGameplayItems = UFunction::FindFunction("Function OLGame.OLInventoryManager.ClearGameplayItems");
	}

	UOLInventoryManager_execClearGameplayItems_Params ClearGameplayItems_Params;
	memset(&ClearGameplayItems_Params, 0, sizeof(ClearGameplayItems_Params));

	uFnClearGameplayItems->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearGameplayItems, &ClearGameplayItems_Params, nullptr);
	uFnClearGameplayItems->FunctionFlags |= 0x400;
};

// Function OLGame.OLInventoryManager.ClearUnsavedBatteries
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLInventoryManager::ClearUnsavedBatteries()
{
	static UFunction* uFnClearUnsavedBatteries = nullptr;

	if (!uFnClearUnsavedBatteries)
	{
		uFnClearUnsavedBatteries = UFunction::FindFunction("Function OLGame.OLInventoryManager.ClearUnsavedBatteries");
	}

	UOLInventoryManager_execClearUnsavedBatteries_Params ClearUnsavedBatteries_Params;
	memset(&ClearUnsavedBatteries_Params, 0, sizeof(ClearUnsavedBatteries_Params));

	uFnClearUnsavedBatteries->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearUnsavedBatteries, &ClearUnsavedBatteries_Params, nullptr);
	uFnClearUnsavedBatteries->FunctionFlags |= 0x400;
};

// Function OLGame.OLMainHud.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLMainHud::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLMainHud.WidgetInitialized");
	}

	UOLMainHud_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLPawn.DrawDebugAnimNode
// [0x00422400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FName                   NodeName                       (CPF_Parm)
// class UAnimNode*               aNode                          (CPF_Parm)
// class UCanvas*                 aCanvas                        (CPF_Parm)
// float                          XL                             (CPF_Parm)
// float                          XBasePos                       (CPF_Parm)
// float                          XOffset                        (CPF_Parm)
// TArray<class UAnimNode*>       visitedNodes                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLPawn::DrawDebugAnimNode(struct FName NodeName, class UAnimNode* aNode, class UCanvas* aCanvas, float XL, float XBasePos, float XOffset, TArray<class UAnimNode*>& visitedNodes, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDrawDebugAnimNode = nullptr;

	if (!uFnDrawDebugAnimNode)
	{
		uFnDrawDebugAnimNode = UFunction::FindFunction("Function OLGame.OLPawn.DrawDebugAnimNode");
	}

	AOLPawn_execDrawDebugAnimNode_Params DrawDebugAnimNode_Params;
	memset(&DrawDebugAnimNode_Params, 0, sizeof(DrawDebugAnimNode_Params));
	memcpy_s(&DrawDebugAnimNode_Params.NodeName, sizeof(DrawDebugAnimNode_Params.NodeName), &NodeName, sizeof(NodeName));
	memcpy_s(&DrawDebugAnimNode_Params.aNode, sizeof(DrawDebugAnimNode_Params.aNode), &aNode, sizeof(aNode));
	memcpy_s(&DrawDebugAnimNode_Params.aCanvas, sizeof(DrawDebugAnimNode_Params.aCanvas), &aCanvas, sizeof(aCanvas));
	memcpy_s(&DrawDebugAnimNode_Params.XL, sizeof(DrawDebugAnimNode_Params.XL), &XL, sizeof(XL));
	memcpy_s(&DrawDebugAnimNode_Params.XBasePos, sizeof(DrawDebugAnimNode_Params.XBasePos), &XBasePos, sizeof(XBasePos));
	memcpy_s(&DrawDebugAnimNode_Params.XOffset, sizeof(DrawDebugAnimNode_Params.XOffset), &XOffset, sizeof(XOffset));
	memcpy_s(&DrawDebugAnimNode_Params.visitedNodes, sizeof(DrawDebugAnimNode_Params.visitedNodes), &visitedNodes, sizeof(visitedNodes));
	memcpy_s(&DrawDebugAnimNode_Params.out_YL, sizeof(DrawDebugAnimNode_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DrawDebugAnimNode_Params.out_YPos, sizeof(DrawDebugAnimNode_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	uFnDrawDebugAnimNode->FunctionFlags &= ~0x400;
	AOLPawn::StaticClass()->ProcessEvent(uFnDrawDebugAnimNode, &DrawDebugAnimNode_Params, nullptr);
	uFnDrawDebugAnimNode->FunctionFlags |= 0x400;

	memcpy_s(&visitedNodes, sizeof(visitedNodes), &DrawDebugAnimNode_Params.visitedNodes, sizeof(DrawDebugAnimNode_Params.visitedNodes));
	memcpy_s(&out_YL, sizeof(out_YL), &DrawDebugAnimNode_Params.out_YL, sizeof(DrawDebugAnimNode_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DrawDebugAnimNode_Params.out_YPos, sizeof(DrawDebugAnimNode_Params.out_YPos));
};

// Function OLGame.OLPawn.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLPawn::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLPawn.DisplayDebug");
	}

	AOLPawn_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.HUD, sizeof(DisplayDebug_Params.HUD), &HUD, sizeof(HUD));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLPawn.GetFutureDestination
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLPawn*                 Agent                          (CPF_Parm)

struct FVector AOLPawn::GetFutureDestination(class AOLPawn* Agent)
{
	static UFunction* uFnGetFutureDestination = nullptr;

	if (!uFnGetFutureDestination)
	{
		uFnGetFutureDestination = UFunction::FindFunction("Function OLGame.OLPawn.GetFutureDestination");
	}

	AOLPawn_execGetFutureDestination_Params GetFutureDestination_Params;
	memset(&GetFutureDestination_Params, 0, sizeof(GetFutureDestination_Params));
	memcpy_s(&GetFutureDestination_Params.Agent, sizeof(GetFutureDestination_Params.Agent), &Agent, sizeof(Agent));

	uFnGetFutureDestination->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFutureDestination, &GetFutureDestination_Params, nullptr);
	uFnGetFutureDestination->FunctionFlags |= 0x400;

	return GetFutureDestination_Params.ReturnValue;
};

// Function OLGame.OLPawn.IsFirstPerson
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLPawn::IsFirstPerson()
{
	static UFunction* uFnIsFirstPerson = nullptr;

	if (!uFnIsFirstPerson)
	{
		uFnIsFirstPerson = UFunction::FindFunction("Function OLGame.OLPawn.IsFirstPerson");
	}

	AOLPawn_execIsFirstPerson_Params IsFirstPerson_Params;
	memset(&IsFirstPerson_Params, 0, sizeof(IsFirstPerson_Params));

	this->ProcessEvent(uFnIsFirstPerson, &IsFirstPerson_Params, nullptr);

	return IsFirstPerson_Params.ReturnValue;
};

// Function OLGame.OLPawn.PlayLanded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ImpactVel                      (CPF_Parm)

void AOLPawn::PlayLanded(float ImpactVel)
{
	static UFunction* uFnPlayLanded = nullptr;

	if (!uFnPlayLanded)
	{
		uFnPlayLanded = UFunction::FindFunction("Function OLGame.OLPawn.PlayLanded");
	}

	AOLPawn_execPlayLanded_Params PlayLanded_Params;
	memset(&PlayLanded_Params, 0, sizeof(PlayLanded_Params));
	memcpy_s(&PlayLanded_Params.ImpactVel, sizeof(PlayLanded_Params.ImpactVel), &ImpactVel, sizeof(ImpactVel));

	this->ProcessEvent(uFnPlayLanded, &PlayLanded_Params, nullptr);
};

// Function OLGame.OLPawn.Landed
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 HitNormal                      (CPF_Parm)
// class AActor*                  FloorActor                     (CPF_Parm)

void AOLPawn::eventLanded(struct FVector HitNormal, class AActor* FloorActor)
{
	static UFunction* uFnLanded = nullptr;

	if (!uFnLanded)
	{
		uFnLanded = UFunction::FindFunction("Function OLGame.OLPawn.Landed");
	}

	AOLPawn_eventLanded_Params Landed_Params;
	memset(&Landed_Params, 0, sizeof(Landed_Params));
	memcpy_s(&Landed_Params.HitNormal, sizeof(Landed_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	memcpy_s(&Landed_Params.FloorActor, sizeof(Landed_Params.FloorActor), &FloorActor, sizeof(FloorActor));

	this->ProcessEvent(uFnLanded, &Landed_Params, nullptr);
};

// Function OLGame.OLPawn.Destroyed
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function OLGame.OLPawn.Destroyed");
	}

	AOLPawn_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function OLGame.OLPawn.MAT_BeginAIGroup
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 StartLoc                       (CPF_Parm)
// struct FRotator                StartRot                       (CPF_Parm)
// float                          BlendTime                      (CPF_Parm)

void AOLPawn::eventMAT_BeginAIGroup(struct FVector StartLoc, struct FRotator StartRot, float BlendTime)
{
	static UFunction* uFnMAT_BeginAIGroup = nullptr;

	if (!uFnMAT_BeginAIGroup)
	{
		uFnMAT_BeginAIGroup = UFunction::FindFunction("Function OLGame.OLPawn.MAT_BeginAIGroup");
	}

	AOLPawn_eventMAT_BeginAIGroup_Params MAT_BeginAIGroup_Params;
	memset(&MAT_BeginAIGroup_Params, 0, sizeof(MAT_BeginAIGroup_Params));
	memcpy_s(&MAT_BeginAIGroup_Params.StartLoc, sizeof(MAT_BeginAIGroup_Params.StartLoc), &StartLoc, sizeof(StartLoc));
	memcpy_s(&MAT_BeginAIGroup_Params.StartRot, sizeof(MAT_BeginAIGroup_Params.StartRot), &StartRot, sizeof(StartRot));
	memcpy_s(&MAT_BeginAIGroup_Params.BlendTime, sizeof(MAT_BeginAIGroup_Params.BlendTime), &BlendTime, sizeof(BlendTime));

	this->ProcessEvent(uFnMAT_BeginAIGroup, &MAT_BeginAIGroup_Params, nullptr);
};

// Function OLGame.OLPawn.StartMatinee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 StartLoc                       (CPF_Parm)
// struct FRotator                StartRot                       (CPF_Parm)
// float                          BlendTime                      (CPF_Parm)

void AOLPawn::StartMatinee(struct FVector StartLoc, struct FRotator StartRot, float BlendTime)
{
	static UFunction* uFnStartMatinee = nullptr;

	if (!uFnStartMatinee)
	{
		uFnStartMatinee = UFunction::FindFunction("Function OLGame.OLPawn.StartMatinee");
	}

	AOLPawn_execStartMatinee_Params StartMatinee_Params;
	memset(&StartMatinee_Params, 0, sizeof(StartMatinee_Params));
	memcpy_s(&StartMatinee_Params.StartLoc, sizeof(StartMatinee_Params.StartLoc), &StartLoc, sizeof(StartLoc));
	memcpy_s(&StartMatinee_Params.StartRot, sizeof(StartMatinee_Params.StartRot), &StartRot, sizeof(StartRot));
	memcpy_s(&StartMatinee_Params.BlendTime, sizeof(StartMatinee_Params.BlendTime), &BlendTime, sizeof(BlendTime));

	uFnStartMatinee->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartMatinee, &StartMatinee_Params, nullptr);
	uFnStartMatinee->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.PostInitAnimTree
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USkeletalMeshComponent*  SkelComp                       (CPF_Parm | CPF_EditInline)

void AOLPawn::eventPostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static UFunction* uFnPostInitAnimTree = nullptr;

	if (!uFnPostInitAnimTree)
	{
		uFnPostInitAnimTree = UFunction::FindFunction("Function OLGame.OLPawn.PostInitAnimTree");
	}

	AOLPawn_eventPostInitAnimTree_Params PostInitAnimTree_Params;
	memset(&PostInitAnimTree_Params, 0, sizeof(PostInitAnimTree_Params));
	memcpy_s(&PostInitAnimTree_Params.SkelComp, sizeof(PostInitAnimTree_Params.SkelComp), &SkelComp, sizeof(SkelComp));

	this->ProcessEvent(uFnPostInitAnimTree, &PostInitAnimTree_Params, nullptr);
};

// Function OLGame.OLPawn.PlayVOLine
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAkEvent*                LineToPlay                     (CPF_Parm)
// struct FName                   BoneName                       (CPF_OptionalParm | CPF_Parm)

void AOLPawn::PlayVOLine(class UAkEvent* LineToPlay, struct FName BoneName)
{
	static UFunction* uFnPlayVOLine = nullptr;

	if (!uFnPlayVOLine)
	{
		uFnPlayVOLine = UFunction::FindFunction("Function OLGame.OLPawn.PlayVOLine");
	}

	AOLPawn_execPlayVOLine_Params PlayVOLine_Params;
	memset(&PlayVOLine_Params, 0, sizeof(PlayVOLine_Params));
	memcpy_s(&PlayVOLine_Params.LineToPlay, sizeof(PlayVOLine_Params.LineToPlay), &LineToPlay, sizeof(LineToPlay));
	memcpy_s(&PlayVOLine_Params.BoneName, sizeof(PlayVOLine_Params.BoneName), &BoneName, sizeof(BoneName));

	uFnPlayVOLine->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlayVOLine, &PlayVOLine_Params, nullptr);
	uFnPlayVOLine->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.PlayJumpingSound
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::PlayJumpingSound()
{
	static UFunction* uFnPlayJumpingSound = nullptr;

	if (!uFnPlayJumpingSound)
	{
		uFnPlayJumpingSound = UFunction::FindFunction("Function OLGame.OLPawn.PlayJumpingSound");
	}

	AOLPawn_execPlayJumpingSound_Params PlayJumpingSound_Params;
	memset(&PlayJumpingSound_Params, 0, sizeof(PlayJumpingSound_Params));

	this->ProcessEvent(uFnPlayJumpingSound, &PlayJumpingSound_Params, nullptr);
};

// Function OLGame.OLPawn.PlayLandingSound
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::PlayLandingSound()
{
	static UFunction* uFnPlayLandingSound = nullptr;

	if (!uFnPlayLandingSound)
	{
		uFnPlayLandingSound = UFunction::FindFunction("Function OLGame.OLPawn.PlayLandingSound");
	}

	AOLPawn_execPlayLandingSound_Params PlayLandingSound_Params;
	memset(&PlayLandingSound_Params, 0, sizeof(PlayLandingSound_Params));

	this->ProcessEvent(uFnPlayLandingSound, &PlayLandingSound_Params, nullptr);
};

// Function OLGame.OLPawn.GetMaterialBelowFeet
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName AOLPawn::GetMaterialBelowFeet()
{
	static UFunction* uFnGetMaterialBelowFeet = nullptr;

	if (!uFnGetMaterialBelowFeet)
	{
		uFnGetMaterialBelowFeet = UFunction::FindFunction("Function OLGame.OLPawn.GetMaterialBelowFeet");
	}

	AOLPawn_execGetMaterialBelowFeet_Params GetMaterialBelowFeet_Params;
	memset(&GetMaterialBelowFeet_Params, 0, sizeof(GetMaterialBelowFeet_Params));

	uFnGetMaterialBelowFeet->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetMaterialBelowFeet, &GetMaterialBelowFeet_Params, nullptr);
	uFnGetMaterialBelowFeet->FunctionFlags |= 0x400;

	return GetMaterialBelowFeet_Params.ReturnValue;
};

// Function OLGame.OLPawn.ClientRestart
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::ClientRestart()
{
	static UFunction* uFnClientRestart = nullptr;

	if (!uFnClientRestart)
	{
		uFnClientRestart = UFunction::FindFunction("Function OLGame.OLPawn.ClientRestart");
	}

	AOLPawn_execClientRestart_Params ClientRestart_Params;
	memset(&ClientRestart_Params, 0, sizeof(ClientRestart_Params));

	this->ProcessEvent(uFnClientRestart, &ClientRestart_Params, nullptr);
};

// Function OLGame.OLPawn.PlayFootStepSound
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        FootDown                       (CPF_Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (CPF_Parm)

void AOLPawn::eventPlayFootStepSound(int32_t FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static UFunction* uFnPlayFootStepSound = nullptr;

	if (!uFnPlayFootStepSound)
	{
		uFnPlayFootStepSound = UFunction::FindFunction("Function OLGame.OLPawn.PlayFootStepSound");
	}

	AOLPawn_eventPlayFootStepSound_Params PlayFootStepSound_Params;
	memset(&PlayFootStepSound_Params, 0, sizeof(PlayFootStepSound_Params));
	memcpy_s(&PlayFootStepSound_Params.FootDown, sizeof(PlayFootStepSound_Params.FootDown), &FootDown, sizeof(FootDown));
	memcpy_s(&PlayFootStepSound_Params.footstepNotify, sizeof(PlayFootStepSound_Params.footstepNotify), &footstepNotify, sizeof(footstepNotify));

	this->ProcessEvent(uFnPlayFootStepSound, &PlayFootStepSound_Params, nullptr);
};

// Function OLGame.OLPawn.FaceRotation
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                NewRotation                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void AOLPawn::FaceRotation(struct FRotator NewRotation, float DeltaTime)
{
	static UFunction* uFnFaceRotation = nullptr;

	if (!uFnFaceRotation)
	{
		uFnFaceRotation = UFunction::FindFunction("Function OLGame.OLPawn.FaceRotation");
	}

	AOLPawn_execFaceRotation_Params FaceRotation_Params;
	memset(&FaceRotation_Params, 0, sizeof(FaceRotation_Params));
	memcpy_s(&FaceRotation_Params.NewRotation, sizeof(FaceRotation_Params.NewRotation), &NewRotation, sizeof(NewRotation));
	memcpy_s(&FaceRotation_Params.DeltaTime, sizeof(FaceRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnFaceRotation, &FaceRotation_Params, nullptr);
};

// Function OLGame.OLPawn.GetEyeHeight
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AOLPawn::GetEyeHeight()
{
	static UFunction* uFnGetEyeHeight = nullptr;

	if (!uFnGetEyeHeight)
	{
		uFnGetEyeHeight = UFunction::FindFunction("Function OLGame.OLPawn.GetEyeHeight");
	}

	AOLPawn_execGetEyeHeight_Params GetEyeHeight_Params;
	memset(&GetEyeHeight_Params, 0, sizeof(GetEyeHeight_Params));

	this->ProcessEvent(uFnGetEyeHeight, &GetEyeHeight_Params, nullptr);

	return GetEyeHeight_Params.ReturnValue;
};

// Function OLGame.OLPawn.GetPawnAmbientSound
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USoundCue*               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class USoundCue* AOLPawn::GetPawnAmbientSound()
{
	static UFunction* uFnGetPawnAmbientSound = nullptr;

	if (!uFnGetPawnAmbientSound)
	{
		uFnGetPawnAmbientSound = UFunction::FindFunction("Function OLGame.OLPawn.GetPawnAmbientSound");
	}

	AOLPawn_execGetPawnAmbientSound_Params GetPawnAmbientSound_Params;
	memset(&GetPawnAmbientSound_Params, 0, sizeof(GetPawnAmbientSound_Params));

	this->ProcessEvent(uFnGetPawnAmbientSound, &GetPawnAmbientSound_Params, nullptr);

	return GetPawnAmbientSound_Params.ReturnValue;
};

// Function OLGame.OLPawn.SetPawnAmbientSound
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USoundCue*               NewAmbientSound                (CPF_Parm)

void AOLPawn::SetPawnAmbientSound(class USoundCue* NewAmbientSound)
{
	static UFunction* uFnSetPawnAmbientSound = nullptr;

	if (!uFnSetPawnAmbientSound)
	{
		uFnSetPawnAmbientSound = UFunction::FindFunction("Function OLGame.OLPawn.SetPawnAmbientSound");
	}

	AOLPawn_execSetPawnAmbientSound_Params SetPawnAmbientSound_Params;
	memset(&SetPawnAmbientSound_Params, 0, sizeof(SetPawnAmbientSound_Params));
	memcpy_s(&SetPawnAmbientSound_Params.NewAmbientSound, sizeof(SetPawnAmbientSound_Params.NewAmbientSound), &NewAmbientSound, sizeof(NewAmbientSound));

	this->ProcessEvent(uFnSetPawnAmbientSound, &SetPawnAmbientSound_Params, nullptr);
};

// Function OLGame.OLPawn.Died
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AController*             Killer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)

bool AOLPawn::Died(class AController* Killer, class UClass* DamageType, struct FVector HitLocation)
{
	static UFunction* uFnDied = nullptr;

	if (!uFnDied)
	{
		uFnDied = UFunction::FindFunction("Function OLGame.OLPawn.Died");
	}

	AOLPawn_execDied_Params Died_Params;
	memset(&Died_Params, 0, sizeof(Died_Params));
	memcpy_s(&Died_Params.Killer, sizeof(Died_Params.Killer), &Killer, sizeof(Killer));
	memcpy_s(&Died_Params.DamageType, sizeof(Died_Params.DamageType), &DamageType, sizeof(DamageType));
	memcpy_s(&Died_Params.HitLocation, sizeof(Died_Params.HitLocation), &HitLocation, sizeof(HitLocation));

	this->ProcessEvent(uFnDied, &Died_Params, nullptr);

	return Died_Params.ReturnValue;
};

// Function OLGame.OLPawn.EncroachedBy
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AOLPawn::eventEncroachedBy(class AActor* Other)
{
	static UFunction* uFnEncroachedBy = nullptr;

	if (!uFnEncroachedBy)
	{
		uFnEncroachedBy = UFunction::FindFunction("Function OLGame.OLPawn.EncroachedBy");
	}

	AOLPawn_eventEncroachedBy_Params EncroachedBy_Params;
	memset(&EncroachedBy_Params, 0, sizeof(EncroachedBy_Params));
	memcpy_s(&EncroachedBy_Params.Other, sizeof(EncroachedBy_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnEncroachedBy, &EncroachedBy_Params, nullptr);
};

// Function OLGame.OLPawn.SetPawnRBChannels
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bRagdollMode                   (CPF_Parm)

void AOLPawn::SetPawnRBChannels(bool bRagdollMode)
{
	static UFunction* uFnSetPawnRBChannels = nullptr;

	if (!uFnSetPawnRBChannels)
	{
		uFnSetPawnRBChannels = UFunction::FindFunction("Function OLGame.OLPawn.SetPawnRBChannels");
	}

	AOLPawn_execSetPawnRBChannels_Params SetPawnRBChannels_Params;
	memset(&SetPawnRBChannels_Params, 0, sizeof(SetPawnRBChannels_Params));
	SetPawnRBChannels_Params.bRagdollMode = bRagdollMode;

	this->ProcessEvent(uFnSetPawnRBChannels, &SetPawnRBChannels_Params, nullptr);
};

// Function OLGame.OLPawn.OnAnimEnd
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AOLPawn::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function OLGame.OLPawn.OnAnimEnd");
	}

	AOLPawn_eventOnAnimEnd_Params OnAnimEnd_Params;
	memset(&OnAnimEnd_Params, 0, sizeof(OnAnimEnd_Params));
	memcpy_s(&OnAnimEnd_Params.SeqNode, sizeof(OnAnimEnd_Params.SeqNode), &SeqNode, sizeof(SeqNode));
	memcpy_s(&OnAnimEnd_Params.PlayedTime, sizeof(OnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&OnAnimEnd_Params.ExcessTime, sizeof(OnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function OLGame.OLPawn.ReattachMesh
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::ReattachMesh()
{
	static UFunction* uFnReattachMesh = nullptr;

	if (!uFnReattachMesh)
	{
		uFnReattachMesh = UFunction::FindFunction("Function OLGame.OLPawn.ReattachMesh");
	}

	AOLPawn_execReattachMesh_Params ReattachMesh_Params;
	memset(&ReattachMesh_Params, 0, sizeof(ReattachMesh_Params));

	this->ProcessEvent(uFnReattachMesh, &ReattachMesh_Params, nullptr);
};

// Function OLGame.OLPawn.UpdateShadowSettings
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bWantShadow                    (CPF_Parm)

void AOLPawn::UpdateShadowSettings(bool bWantShadow)
{
	static UFunction* uFnUpdateShadowSettings = nullptr;

	if (!uFnUpdateShadowSettings)
	{
		uFnUpdateShadowSettings = UFunction::FindFunction("Function OLGame.OLPawn.UpdateShadowSettings");
	}

	AOLPawn_execUpdateShadowSettings_Params UpdateShadowSettings_Params;
	memset(&UpdateShadowSettings_Params, 0, sizeof(UpdateShadowSettings_Params));
	UpdateShadowSettings_Params.bWantShadow = bWantShadow;

	this->ProcessEvent(uFnUpdateShadowSettings, &UpdateShadowSettings_Params, nullptr);
};

// Function OLGame.OLPawn.PostBeginPlay
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLPawn.PostBeginPlay");
	}

	AOLPawn_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLPawn.ProceduralAdjustNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Duration                       (CPF_Parm)

void AOLPawn::ProceduralAdjustNotify(float Duration)
{
	static UFunction* uFnProceduralAdjustNotify = nullptr;

	if (!uFnProceduralAdjustNotify)
	{
		uFnProceduralAdjustNotify = UFunction::FindFunction("Function OLGame.OLPawn.ProceduralAdjustNotify");
	}

	AOLPawn_execProceduralAdjustNotify_Params ProceduralAdjustNotify_Params;
	memset(&ProceduralAdjustNotify_Params, 0, sizeof(ProceduralAdjustNotify_Params));
	memcpy_s(&ProceduralAdjustNotify_Params.Duration, sizeof(ProceduralAdjustNotify_Params.Duration), &Duration, sizeof(Duration));

	uFnProceduralAdjustNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnProceduralAdjustNotify, &ProceduralAdjustNotify_Params, nullptr);
	uFnProceduralAdjustNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.RestoreCollisionSizeNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::RestoreCollisionSizeNotify()
{
	static UFunction* uFnRestoreCollisionSizeNotify = nullptr;

	if (!uFnRestoreCollisionSizeNotify)
	{
		uFnRestoreCollisionSizeNotify = UFunction::FindFunction("Function OLGame.OLPawn.RestoreCollisionSizeNotify");
	}

	AOLPawn_execRestoreCollisionSizeNotify_Params RestoreCollisionSizeNotify_Params;
	memset(&RestoreCollisionSizeNotify_Params, 0, sizeof(RestoreCollisionSizeNotify_Params));

	uFnRestoreCollisionSizeNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRestoreCollisionSizeNotify, &RestoreCollisionSizeNotify_Params, nullptr);
	uFnRestoreCollisionSizeNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.ChangeCollisionSizeNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::ChangeCollisionSizeNotify()
{
	static UFunction* uFnChangeCollisionSizeNotify = nullptr;

	if (!uFnChangeCollisionSizeNotify)
	{
		uFnChangeCollisionSizeNotify = UFunction::FindFunction("Function OLGame.OLPawn.ChangeCollisionSizeNotify");
	}

	AOLPawn_execChangeCollisionSizeNotify_Params ChangeCollisionSizeNotify_Params;
	memset(&ChangeCollisionSizeNotify_Params, 0, sizeof(ChangeCollisionSizeNotify_Params));

	uFnChangeCollisionSizeNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnChangeCollisionSizeNotify, &ChangeCollisionSizeNotify_Params, nullptr);
	uFnChangeCollisionSizeNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.MoveInterruptibleNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::MoveInterruptibleNotify()
{
	static UFunction* uFnMoveInterruptibleNotify = nullptr;

	if (!uFnMoveInterruptibleNotify)
	{
		uFnMoveInterruptibleNotify = UFunction::FindFunction("Function OLGame.OLPawn.MoveInterruptibleNotify");
	}

	AOLPawn_execMoveInterruptibleNotify_Params MoveInterruptibleNotify_Params;
	memset(&MoveInterruptibleNotify_Params, 0, sizeof(MoveInterruptibleNotify_Params));

	uFnMoveInterruptibleNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMoveInterruptibleNotify, &MoveInterruptibleNotify_Params, nullptr);
	uFnMoveInterruptibleNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.NativePostBeginPlay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLPawn::NativePostBeginPlay()
{
	static UFunction* uFnNativePostBeginPlay = nullptr;

	if (!uFnNativePostBeginPlay)
	{
		uFnNativePostBeginPlay = UFunction::FindFunction("Function OLGame.OLPawn.NativePostBeginPlay");
	}

	AOLPawn_execNativePostBeginPlay_Params NativePostBeginPlay_Params;
	memset(&NativePostBeginPlay_Params, 0, sizeof(NativePostBeginPlay_Params));

	uFnNativePostBeginPlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativePostBeginPlay, &NativePostBeginPlay_Params, nullptr);
	uFnNativePostBeginPlay->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.NativeOnAnimEnd
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AOLPawn::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnNativeOnAnimEnd = nullptr;

	if (!uFnNativeOnAnimEnd)
	{
		uFnNativeOnAnimEnd = UFunction::FindFunction("Function OLGame.OLPawn.NativeOnAnimEnd");
	}

	AOLPawn_execNativeOnAnimEnd_Params NativeOnAnimEnd_Params;
	memset(&NativeOnAnimEnd_Params, 0, sizeof(NativeOnAnimEnd_Params));
	memcpy_s(&NativeOnAnimEnd_Params.SeqNode, sizeof(NativeOnAnimEnd_Params.SeqNode), &SeqNode, sizeof(SeqNode));
	memcpy_s(&NativeOnAnimEnd_Params.PlayedTime, sizeof(NativeOnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&NativeOnAnimEnd_Params.ExcessTime, sizeof(NativeOnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	uFnNativeOnAnimEnd->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeOnAnimEnd, &NativeOnAnimEnd_Params, nullptr);
	uFnNativeOnAnimEnd->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.StartSpecialMove
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ESpecialMoveType               moveType                       (CPF_Parm)
// struct FVector                 targetPosition                 (CPF_OptionalParm | CPF_Parm)
// struct FVector                 TargetDirection                (CPF_OptionalParm | CPF_Parm)
// EAdjustPositionTargetType      TargetType                     (CPF_OptionalParm | CPF_Parm)

void AOLPawn::StartSpecialMove(ESpecialMoveType moveType, struct FVector targetPosition, struct FVector TargetDirection, EAdjustPositionTargetType TargetType)
{
	static UFunction* uFnStartSpecialMove = nullptr;

	if (!uFnStartSpecialMove)
	{
		uFnStartSpecialMove = UFunction::FindFunction("Function OLGame.OLPawn.StartSpecialMove");
	}

	AOLPawn_execStartSpecialMove_Params StartSpecialMove_Params;
	memset(&StartSpecialMove_Params, 0, sizeof(StartSpecialMove_Params));
	memcpy_s(&StartSpecialMove_Params.moveType, sizeof(StartSpecialMove_Params.moveType), &moveType, sizeof(moveType));
	memcpy_s(&StartSpecialMove_Params.targetPosition, sizeof(StartSpecialMove_Params.targetPosition), &targetPosition, sizeof(targetPosition));
	memcpy_s(&StartSpecialMove_Params.TargetDirection, sizeof(StartSpecialMove_Params.TargetDirection), &TargetDirection, sizeof(TargetDirection));
	memcpy_s(&StartSpecialMove_Params.TargetType, sizeof(StartSpecialMove_Params.TargetType), &TargetType, sizeof(TargetType));

	uFnStartSpecialMove->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartSpecialMove, &StartSpecialMove_Params, nullptr);
	uFnStartSpecialMove->FunctionFlags |= 0x400;
};

// Function OLGame.OLPawn.IsSpecialMoveCompleted
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLPawn::IsSpecialMoveCompleted()
{
	static UFunction* uFnIsSpecialMoveCompleted = nullptr;

	if (!uFnIsSpecialMoveCompleted)
	{
		uFnIsSpecialMoveCompleted = UFunction::FindFunction("Function OLGame.OLPawn.IsSpecialMoveCompleted");
	}

	AOLPawn_execIsSpecialMoveCompleted_Params IsSpecialMoveCompleted_Params;
	memset(&IsSpecialMoveCompleted_Params, 0, sizeof(IsSpecialMoveCompleted_Params));

	uFnIsSpecialMoveCompleted->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsSpecialMoveCompleted, &IsSpecialMoveCompleted_Params, nullptr);
	uFnIsSpecialMoveCompleted->FunctionFlags |= 0x400;

	return IsSpecialMoveCompleted_Params.ReturnValue;
};

// Function OLGame.OLHero.UpdateDifficultyBasedValues
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::UpdateDifficultyBasedValues()
{
	static UFunction* uFnUpdateDifficultyBasedValues = nullptr;

	if (!uFnUpdateDifficultyBasedValues)
	{
		uFnUpdateDifficultyBasedValues = UFunction::FindFunction("Function OLGame.OLHero.UpdateDifficultyBasedValues");
	}

	AOLHero_execUpdateDifficultyBasedValues_Params UpdateDifficultyBasedValues_Params;
	memset(&UpdateDifficultyBasedValues_Params, 0, sizeof(UpdateDifficultyBasedValues_Params));

	this->ProcessEvent(uFnUpdateDifficultyBasedValues, &UpdateDifficultyBasedValues_Params, nullptr);
};

// Function OLGame.OLHero.OutsideWorldBounds
// [0x00020922] (FUNC_Defined | FUNC_Singular | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::eventOutsideWorldBounds()
{
	static UFunction* uFnOutsideWorldBounds = nullptr;

	if (!uFnOutsideWorldBounds)
	{
		uFnOutsideWorldBounds = UFunction::FindFunction("Function OLGame.OLHero.OutsideWorldBounds");
	}

	AOLHero_eventOutsideWorldBounds_Params OutsideWorldBounds_Params;
	memset(&OutsideWorldBounds_Params, 0, sizeof(OutsideWorldBounds_Params));

	this->ProcessEvent(uFnOutsideWorldBounds, &OutsideWorldBounds_Params, nullptr);
};

// Function OLGame.OLHero.FellOutOfWorld
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  dmgType                        (CPF_Parm)

void AOLHero::eventFellOutOfWorld(class UClass* dmgType)
{
	static UFunction* uFnFellOutOfWorld = nullptr;

	if (!uFnFellOutOfWorld)
	{
		uFnFellOutOfWorld = UFunction::FindFunction("Function OLGame.OLHero.FellOutOfWorld");
	}

	AOLHero_eventFellOutOfWorld_Params FellOutOfWorld_Params;
	memset(&FellOutOfWorld_Params, 0, sizeof(FellOutOfWorld_Params));
	memcpy_s(&FellOutOfWorld_Params.dmgType, sizeof(FellOutOfWorld_Params.dmgType), &dmgType, sizeof(dmgType));

	this->ProcessEvent(uFnFellOutOfWorld, &FellOutOfWorld_Params, nullptr);
};

// Function OLGame.OLHero.RespawnHero
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::eventRespawnHero()
{
	static UFunction* uFnRespawnHero = nullptr;

	if (!uFnRespawnHero)
	{
		uFnRespawnHero = UFunction::FindFunction("Function OLGame.OLHero.RespawnHero");
	}

	AOLHero_eventRespawnHero_Params RespawnHero_Params;
	memset(&RespawnHero_Params, 0, sizeof(RespawnHero_Params));

	this->ProcessEvent(uFnRespawnHero, &RespawnHero_Params, nullptr);
};

// Function OLGame.OLHero.PlayFootStepSound
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        FootDown                       (CPF_Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (CPF_Parm)

void AOLHero::eventPlayFootStepSound(int32_t FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static UFunction* uFnPlayFootStepSound = nullptr;

	if (!uFnPlayFootStepSound)
	{
		uFnPlayFootStepSound = UFunction::FindFunction("Function OLGame.OLHero.PlayFootStepSound");
	}

	AOLHero_eventPlayFootStepSound_Params PlayFootStepSound_Params;
	memset(&PlayFootStepSound_Params, 0, sizeof(PlayFootStepSound_Params));
	memcpy_s(&PlayFootStepSound_Params.FootDown, sizeof(PlayFootStepSound_Params.FootDown), &FootDown, sizeof(FootDown));
	memcpy_s(&PlayFootStepSound_Params.footstepNotify, sizeof(PlayFootStepSound_Params.footstepNotify), &footstepNotify, sizeof(footstepNotify));

	this->ProcessEvent(uFnPlayFootStepSound, &PlayFootStepSound_Params, nullptr);
};

// Function OLGame.OLHero.IsInMainMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::IsInMainMenu()
{
	static UFunction* uFnIsInMainMenu = nullptr;

	if (!uFnIsInMainMenu)
	{
		uFnIsInMainMenu = UFunction::FindFunction("Function OLGame.OLHero.IsInMainMenu");
	}

	AOLHero_execIsInMainMenu_Params IsInMainMenu_Params;
	memset(&IsInMainMenu_Params, 0, sizeof(IsInMainMenu_Params));

	uFnIsInMainMenu->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInMainMenu, &IsInMainMenu_Params, nullptr);
	uFnIsInMainMenu->FunctionFlags |= 0x400;

	return IsInMainMenu_Params.ReturnValue;
};

// Function OLGame.OLHero.SpawnBloodFootstepDecal
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           bLeftFoot                      (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

void AOLHero::SpawnBloodFootstepDecal(bool bLeftFoot, float Alpha)
{
	static UFunction* uFnSpawnBloodFootstepDecal = nullptr;

	if (!uFnSpawnBloodFootstepDecal)
	{
		uFnSpawnBloodFootstepDecal = UFunction::FindFunction("Function OLGame.OLHero.SpawnBloodFootstepDecal");
	}

	AOLHero_execSpawnBloodFootstepDecal_Params SpawnBloodFootstepDecal_Params;
	memset(&SpawnBloodFootstepDecal_Params, 0, sizeof(SpawnBloodFootstepDecal_Params));
	SpawnBloodFootstepDecal_Params.bLeftFoot = bLeftFoot;
	memcpy_s(&SpawnBloodFootstepDecal_Params.Alpha, sizeof(SpawnBloodFootstepDecal_Params.Alpha), &Alpha, sizeof(Alpha));

	this->ProcessEvent(uFnSpawnBloodFootstepDecal, &SpawnBloodFootstepDecal_Params, nullptr);
};

// Function OLGame.OLHero.GetFootstepDecalTransform
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           bLeftFoot                      (CPF_Parm)
// struct FVector                 DecalLocation                  (CPF_Parm | CPF_OutParm)
// struct FRotator                DecalRotation                  (CPF_Parm | CPF_OutParm)

void AOLHero::GetFootstepDecalTransform(bool bLeftFoot, struct FVector& DecalLocation, struct FRotator& DecalRotation)
{
	static UFunction* uFnGetFootstepDecalTransform = nullptr;

	if (!uFnGetFootstepDecalTransform)
	{
		uFnGetFootstepDecalTransform = UFunction::FindFunction("Function OLGame.OLHero.GetFootstepDecalTransform");
	}

	AOLHero_execGetFootstepDecalTransform_Params GetFootstepDecalTransform_Params;
	memset(&GetFootstepDecalTransform_Params, 0, sizeof(GetFootstepDecalTransform_Params));
	GetFootstepDecalTransform_Params.bLeftFoot = bLeftFoot;
	memcpy_s(&GetFootstepDecalTransform_Params.DecalLocation, sizeof(GetFootstepDecalTransform_Params.DecalLocation), &DecalLocation, sizeof(DecalLocation));
	memcpy_s(&GetFootstepDecalTransform_Params.DecalRotation, sizeof(GetFootstepDecalTransform_Params.DecalRotation), &DecalRotation, sizeof(DecalRotation));

	uFnGetFootstepDecalTransform->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFootstepDecalTransform, &GetFootstepDecalTransform_Params, nullptr);
	uFnGetFootstepDecalTransform->FunctionFlags |= 0x400;

	memcpy_s(&DecalLocation, sizeof(DecalLocation), &GetFootstepDecalTransform_Params.DecalLocation, sizeof(GetFootstepDecalTransform_Params.DecalLocation));
	memcpy_s(&DecalRotation, sizeof(DecalRotation), &GetFootstepDecalTransform_Params.DecalRotation, sizeof(GetFootstepDecalTransform_Params.DecalRotation));
};

// Function OLGame.OLHero.SetMeshVisibility
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bVisible                       (CPF_Parm)

void AOLHero::SetMeshVisibility(bool bVisible)
{
	static UFunction* uFnSetMeshVisibility = nullptr;

	if (!uFnSetMeshVisibility)
	{
		uFnSetMeshVisibility = UFunction::FindFunction("Function OLGame.OLHero.SetMeshVisibility");
	}

	AOLHero_execSetMeshVisibility_Params SetMeshVisibility_Params;
	memset(&SetMeshVisibility_Params, 0, sizeof(SetMeshVisibility_Params));
	SetMeshVisibility_Params.bVisible = bVisible;

	this->ProcessEvent(uFnSetMeshVisibility, &SetMeshVisibility_Params, nullptr);
};

// Function OLGame.OLHero.EndViewTarget
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)

void AOLHero::eventEndViewTarget(class APlayerController* PC)
{
	static UFunction* uFnEndViewTarget = nullptr;

	if (!uFnEndViewTarget)
	{
		uFnEndViewTarget = UFunction::FindFunction("Function OLGame.OLHero.EndViewTarget");
	}

	AOLHero_eventEndViewTarget_Params EndViewTarget_Params;
	memset(&EndViewTarget_Params, 0, sizeof(EndViewTarget_Params));
	memcpy_s(&EndViewTarget_Params.PC, sizeof(EndViewTarget_Params.PC), &PC, sizeof(PC));

	this->ProcessEvent(uFnEndViewTarget, &EndViewTarget_Params, nullptr);
};

// Function OLGame.OLHero.BecomeViewTarget
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)

void AOLHero::eventBecomeViewTarget(class APlayerController* PC)
{
	static UFunction* uFnBecomeViewTarget = nullptr;

	if (!uFnBecomeViewTarget)
	{
		uFnBecomeViewTarget = UFunction::FindFunction("Function OLGame.OLHero.BecomeViewTarget");
	}

	AOLHero_eventBecomeViewTarget_Params BecomeViewTarget_Params;
	memset(&BecomeViewTarget_Params, 0, sizeof(BecomeViewTarget_Params));
	memcpy_s(&BecomeViewTarget_Params.PC, sizeof(BecomeViewTarget_Params.PC), &PC, sizeof(PC));

	this->ProcessEvent(uFnBecomeViewTarget, &BecomeViewTarget_Params, nullptr);
};

// Function OLGame.OLHero.PhysicsVolumeChange
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APhysicsVolume*          NewVolume                      (CPF_Parm)

void AOLHero::eventPhysicsVolumeChange(class APhysicsVolume* NewVolume)
{
	static UFunction* uFnPhysicsVolumeChange = nullptr;

	if (!uFnPhysicsVolumeChange)
	{
		uFnPhysicsVolumeChange = UFunction::FindFunction("Function OLGame.OLHero.PhysicsVolumeChange");
	}

	AOLHero_eventPhysicsVolumeChange_Params PhysicsVolumeChange_Params;
	memset(&PhysicsVolumeChange_Params, 0, sizeof(PhysicsVolumeChange_Params));
	memcpy_s(&PhysicsVolumeChange_Params.NewVolume, sizeof(PhysicsVolumeChange_Params.NewVolume), &NewVolume, sizeof(NewVolume));

	this->ProcessEvent(uFnPhysicsVolumeChange, &PhysicsVolumeChange_Params, nullptr);
};

// Function OLGame.OLHero.OnEnterDeepWater
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APhysicsVolume*          NewVolume                      (CPF_Parm)

void AOLHero::OnEnterDeepWater(class APhysicsVolume* NewVolume)
{
	static UFunction* uFnOnEnterDeepWater = nullptr;

	if (!uFnOnEnterDeepWater)
	{
		uFnOnEnterDeepWater = UFunction::FindFunction("Function OLGame.OLHero.OnEnterDeepWater");
	}

	AOLHero_execOnEnterDeepWater_Params OnEnterDeepWater_Params;
	memset(&OnEnterDeepWater_Params, 0, sizeof(OnEnterDeepWater_Params));
	memcpy_s(&OnEnterDeepWater_Params.NewVolume, sizeof(OnEnterDeepWater_Params.NewVolume), &NewVolume, sizeof(NewVolume));

	uFnOnEnterDeepWater->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnEnterDeepWater, &OnEnterDeepWater_Params, nullptr);
	uFnOnEnterDeepWater->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.PlayLanded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ImpactVel                      (CPF_Parm)

void AOLHero::PlayLanded(float ImpactVel)
{
	static UFunction* uFnPlayLanded = nullptr;

	if (!uFnPlayLanded)
	{
		uFnPlayLanded = UFunction::FindFunction("Function OLGame.OLHero.PlayLanded");
	}

	AOLHero_execPlayLanded_Params PlayLanded_Params;
	memset(&PlayLanded_Params, 0, sizeof(PlayLanded_Params));
	memcpy_s(&PlayLanded_Params.ImpactVel, sizeof(PlayLanded_Params.ImpactVel), &ImpactVel, sizeof(ImpactVel));

	this->ProcessEvent(uFnPlayLanded, &PlayLanded_Params, nullptr);
};

// Function OLGame.OLHero.NativePlayLanded
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ImpactVel                      (CPF_Parm)

void AOLHero::NativePlayLanded(float ImpactVel)
{
	static UFunction* uFnNativePlayLanded = nullptr;

	if (!uFnNativePlayLanded)
	{
		uFnNativePlayLanded = UFunction::FindFunction("Function OLGame.OLHero.NativePlayLanded");
	}

	AOLHero_execNativePlayLanded_Params NativePlayLanded_Params;
	memset(&NativePlayLanded_Params, 0, sizeof(NativePlayLanded_Params));
	memcpy_s(&NativePlayLanded_Params.ImpactVel, sizeof(NativePlayLanded_Params.ImpactVel), &ImpactVel, sizeof(ImpactVel));

	uFnNativePlayLanded->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativePlayLanded, &NativePlayLanded_Params, nullptr);
	uFnNativePlayLanded->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.TakeFallingDamage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::TakeFallingDamage()
{
	static UFunction* uFnTakeFallingDamage = nullptr;

	if (!uFnTakeFallingDamage)
	{
		uFnTakeFallingDamage = UFunction::FindFunction("Function OLGame.OLHero.TakeFallingDamage");
	}

	AOLHero_execTakeFallingDamage_Params TakeFallingDamage_Params;
	memset(&TakeFallingDamage_Params, 0, sizeof(TakeFallingDamage_Params));

	this->ProcessEvent(uFnTakeFallingDamage, &TakeFallingDamage_Params, nullptr);
};

// Function OLGame.OLHero.HealDamage
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Amount                         (CPF_Parm)
// class AController*             Healer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)

bool AOLHero::eventHealDamage(int32_t Amount, class AController* Healer, class UClass* DamageType)
{
	static UFunction* uFnHealDamage = nullptr;

	if (!uFnHealDamage)
	{
		uFnHealDamage = UFunction::FindFunction("Function OLGame.OLHero.HealDamage");
	}

	AOLHero_eventHealDamage_Params HealDamage_Params;
	memset(&HealDamage_Params, 0, sizeof(HealDamage_Params));
	memcpy_s(&HealDamage_Params.Amount, sizeof(HealDamage_Params.Amount), &Amount, sizeof(Amount));
	memcpy_s(&HealDamage_Params.Healer, sizeof(HealDamage_Params.Healer), &Healer, sizeof(Healer));
	memcpy_s(&HealDamage_Params.DamageType, sizeof(HealDamage_Params.DamageType), &DamageType, sizeof(DamageType));

	this->ProcessEvent(uFnHealDamage, &HealDamage_Params, nullptr);

	return HealDamage_Params.ReturnValue;
};

// Function OLGame.OLHero.TakeDamage
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AOLHero::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function OLGame.OLHero.TakeDamage");
	}

	AOLHero_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	memcpy_s(&TakeDamage_Params.InstigatedBy, sizeof(TakeDamage_Params.InstigatedBy), &InstigatedBy, sizeof(InstigatedBy));
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	memcpy_s(&TakeDamage_Params.DamageType, sizeof(TakeDamage_Params.DamageType), &DamageType, sizeof(DamageType));
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	memcpy_s(&TakeDamage_Params.DamageCauser, sizeof(TakeDamage_Params.DamageCauser), &DamageCauser, sizeof(DamageCauser));

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function OLGame.OLHero.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLHero::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLHero.DisplayDebug");
	}

	AOLHero_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.HUD, sizeof(DisplayDebug_Params.HUD), &HUD, sizeof(HUD));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLHero.PostInitAnimTree
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USkeletalMeshComponent*  SkelComp                       (CPF_Parm | CPF_EditInline)

void AOLHero::eventPostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static UFunction* uFnPostInitAnimTree = nullptr;

	if (!uFnPostInitAnimTree)
	{
		uFnPostInitAnimTree = UFunction::FindFunction("Function OLGame.OLHero.PostInitAnimTree");
	}

	AOLHero_eventPostInitAnimTree_Params PostInitAnimTree_Params;
	memset(&PostInitAnimTree_Params, 0, sizeof(PostInitAnimTree_Params));
	memcpy_s(&PostInitAnimTree_Params.SkelComp, sizeof(PostInitAnimTree_Params.SkelComp), &SkelComp, sizeof(SkelComp));

	this->ProcessEvent(uFnPostInitAnimTree, &PostInitAnimTree_Params, nullptr);
};

// Function OLGame.OLHero.PossessedBy
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AController*             C                              (CPF_Parm)
// bool                           bVehicleTransition             (CPF_Parm)

void AOLHero::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static UFunction* uFnPossessedBy = nullptr;

	if (!uFnPossessedBy)
	{
		uFnPossessedBy = UFunction::FindFunction("Function OLGame.OLHero.PossessedBy");
	}

	AOLHero_execPossessedBy_Params PossessedBy_Params;
	memset(&PossessedBy_Params, 0, sizeof(PossessedBy_Params));
	memcpy_s(&PossessedBy_Params.C, sizeof(PossessedBy_Params.C), &C, sizeof(C));
	PossessedBy_Params.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent(uFnPossessedBy, &PossessedBy_Params, nullptr);
};

// Function OLGame.OLHero.RemoveEnemyFromAIPositionPawns
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLEnemyPawn*            EnemyPawn                      (CPF_Parm)

void AOLHero::RemoveEnemyFromAIPositionPawns(class AOLEnemyPawn* EnemyPawn)
{
	static UFunction* uFnRemoveEnemyFromAIPositionPawns = nullptr;

	if (!uFnRemoveEnemyFromAIPositionPawns)
	{
		uFnRemoveEnemyFromAIPositionPawns = UFunction::FindFunction("Function OLGame.OLHero.RemoveEnemyFromAIPositionPawns");
	}

	AOLHero_execRemoveEnemyFromAIPositionPawns_Params RemoveEnemyFromAIPositionPawns_Params;
	memset(&RemoveEnemyFromAIPositionPawns_Params, 0, sizeof(RemoveEnemyFromAIPositionPawns_Params));
	memcpy_s(&RemoveEnemyFromAIPositionPawns_Params.EnemyPawn, sizeof(RemoveEnemyFromAIPositionPawns_Params.EnemyPawn), &EnemyPawn, sizeof(EnemyPawn));

	uFnRemoveEnemyFromAIPositionPawns->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveEnemyFromAIPositionPawns, &RemoveEnemyFromAIPositionPawns_Params, nullptr);
	uFnRemoveEnemyFromAIPositionPawns->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.GetGrabUnderDestination
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            Enemy                          (CPF_Parm)

struct FVector AOLHero::GetGrabUnderDestination(class AOLEnemyPawn* Enemy)
{
	static UFunction* uFnGetGrabUnderDestination = nullptr;

	if (!uFnGetGrabUnderDestination)
	{
		uFnGetGrabUnderDestination = UFunction::FindFunction("Function OLGame.OLHero.GetGrabUnderDestination");
	}

	AOLHero_execGetGrabUnderDestination_Params GetGrabUnderDestination_Params;
	memset(&GetGrabUnderDestination_Params, 0, sizeof(GetGrabUnderDestination_Params));
	memcpy_s(&GetGrabUnderDestination_Params.Enemy, sizeof(GetGrabUnderDestination_Params.Enemy), &Enemy, sizeof(Enemy));

	uFnGetGrabUnderDestination->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetGrabUnderDestination, &GetGrabUnderDestination_Params, nullptr);
	uFnGetGrabUnderDestination->FunctionFlags |= 0x400;

	return GetGrabUnderDestination_Params.ReturnValue;
};

// Function OLGame.OLHero.GetFutureDestination
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLPawn*                 Agent                          (CPF_Parm)

struct FVector AOLHero::GetFutureDestination(class AOLPawn* Agent)
{
	static UFunction* uFnGetFutureDestination = nullptr;

	if (!uFnGetFutureDestination)
	{
		uFnGetFutureDestination = UFunction::FindFunction("Function OLGame.OLHero.GetFutureDestination");
	}

	AOLHero_execGetFutureDestination_Params GetFutureDestination_Params;
	memset(&GetFutureDestination_Params, 0, sizeof(GetFutureDestination_Params));
	memcpy_s(&GetFutureDestination_Params.Agent, sizeof(GetFutureDestination_Params.Agent), &Agent, sizeof(Agent));

	uFnGetFutureDestination->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFutureDestination, &GetFutureDestination_Params, nullptr);
	uFnGetFutureDestination->FunctionFlags |= 0x400;

	return GetFutureDestination_Params.ReturnValue;
};

// Function OLGame.OLHero.QuickHeroTest
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::QuickHeroTest()
{
	static UFunction* uFnQuickHeroTest = nullptr;

	if (!uFnQuickHeroTest)
	{
		uFnQuickHeroTest = UFunction::FindFunction("Function OLGame.OLHero.QuickHeroTest");
	}

	AOLHero_execQuickHeroTest_Params QuickHeroTest_Params;
	memset(&QuickHeroTest_Params, 0, sizeof(QuickHeroTest_Params));

	uFnQuickHeroTest->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnQuickHeroTest, &QuickHeroTest_Params, nullptr);
	uFnQuickHeroTest->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.CanBeGrabbedUnder
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::CanBeGrabbedUnder()
{
	static UFunction* uFnCanBeGrabbedUnder = nullptr;

	if (!uFnCanBeGrabbedUnder)
	{
		uFnCanBeGrabbedUnder = UFunction::FindFunction("Function OLGame.OLHero.CanBeGrabbedUnder");
	}

	AOLHero_execCanBeGrabbedUnder_Params CanBeGrabbedUnder_Params;
	memset(&CanBeGrabbedUnder_Params, 0, sizeof(CanBeGrabbedUnder_Params));

	uFnCanBeGrabbedUnder->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanBeGrabbedUnder, &CanBeGrabbedUnder_Params, nullptr);
	uFnCanBeGrabbedUnder->FunctionFlags |= 0x400;

	return CanBeGrabbedUnder_Params.ReturnValue;
};

// Function OLGame.OLHero.CanBeFatalitized
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::CanBeFatalitized()
{
	static UFunction* uFnCanBeFatalitized = nullptr;

	if (!uFnCanBeFatalitized)
	{
		uFnCanBeFatalitized = UFunction::FindFunction("Function OLGame.OLHero.CanBeFatalitized");
	}

	AOLHero_execCanBeFatalitized_Params CanBeFatalitized_Params;
	memset(&CanBeFatalitized_Params, 0, sizeof(CanBeFatalitized_Params));

	uFnCanBeFatalitized->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanBeFatalitized, &CanBeFatalitized_Params, nullptr);
	uFnCanBeFatalitized->FunctionFlags |= 0x400;

	return CanBeFatalitized_Params.ReturnValue;
};

// Function OLGame.OLHero.CanBeAttacked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::CanBeAttacked()
{
	static UFunction* uFnCanBeAttacked = nullptr;

	if (!uFnCanBeAttacked)
	{
		uFnCanBeAttacked = UFunction::FindFunction("Function OLGame.OLHero.CanBeAttacked");
	}

	AOLHero_execCanBeAttacked_Params CanBeAttacked_Params;
	memset(&CanBeAttacked_Params, 0, sizeof(CanBeAttacked_Params));

	uFnCanBeAttacked->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanBeAttacked, &CanBeAttacked_Params, nullptr);
	uFnCanBeAttacked->FunctionFlags |= 0x400;

	return CanBeAttacked_Params.ReturnValue;
};

// Function OLGame.OLHero.IsBarefeet
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::IsBarefeet()
{
	static UFunction* uFnIsBarefeet = nullptr;

	if (!uFnIsBarefeet)
	{
		uFnIsBarefeet = UFunction::FindFunction("Function OLGame.OLHero.IsBarefeet");
	}

	AOLHero_execIsBarefeet_Params IsBarefeet_Params;
	memset(&IsBarefeet_Params, 0, sizeof(IsBarefeet_Params));

	uFnIsBarefeet->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsBarefeet, &IsBarefeet_Params, nullptr);
	uFnIsBarefeet->FunctionFlags |= 0x400;

	return IsBarefeet_Params.ReturnValue;
};

// Function OLGame.OLHero.IsInLocker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::IsInLocker()
{
	static UFunction* uFnIsInLocker = nullptr;

	if (!uFnIsInLocker)
	{
		uFnIsInLocker = UFunction::FindFunction("Function OLGame.OLHero.IsInLocker");
	}

	AOLHero_execIsInLocker_Params IsInLocker_Params;
	memset(&IsInLocker_Params, 0, sizeof(IsInLocker_Params));

	uFnIsInLocker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInLocker, &IsInLocker_Params, nullptr);
	uFnIsInLocker->FunctionFlags |= 0x400;

	return IsInLocker_Params.ReturnValue;
};

// Function OLGame.OLHero.AttachCameraEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UParticleSystem*         ParticleEffectTemplate         (CPF_Parm)
// float                          Duration                       (CPF_Parm)
// float                          PlaneDist                      (CPF_Parm)

void AOLHero::AttachCameraEffect(class UParticleSystem* ParticleEffectTemplate, float Duration, float PlaneDist)
{
	static UFunction* uFnAttachCameraEffect = nullptr;

	if (!uFnAttachCameraEffect)
	{
		uFnAttachCameraEffect = UFunction::FindFunction("Function OLGame.OLHero.AttachCameraEffect");
	}

	AOLHero_execAttachCameraEffect_Params AttachCameraEffect_Params;
	memset(&AttachCameraEffect_Params, 0, sizeof(AttachCameraEffect_Params));
	memcpy_s(&AttachCameraEffect_Params.ParticleEffectTemplate, sizeof(AttachCameraEffect_Params.ParticleEffectTemplate), &ParticleEffectTemplate, sizeof(ParticleEffectTemplate));
	memcpy_s(&AttachCameraEffect_Params.Duration, sizeof(AttachCameraEffect_Params.Duration), &Duration, sizeof(Duration));
	memcpy_s(&AttachCameraEffect_Params.PlaneDist, sizeof(AttachCameraEffect_Params.PlaneDist), &PlaneDist, sizeof(PlaneDist));

	uFnAttachCameraEffect->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAttachCameraEffect, &AttachCameraEffect_Params, nullptr);
	uFnAttachCameraEffect->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.SetCamcorderVisibleNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::SetCamcorderVisibleNotify()
{
	static UFunction* uFnSetCamcorderVisibleNotify = nullptr;

	if (!uFnSetCamcorderVisibleNotify)
	{
		uFnSetCamcorderVisibleNotify = UFunction::FindFunction("Function OLGame.OLHero.SetCamcorderVisibleNotify");
	}

	AOLHero_execSetCamcorderVisibleNotify_Params SetCamcorderVisibleNotify_Params;
	memset(&SetCamcorderVisibleNotify_Params, 0, sizeof(SetCamcorderVisibleNotify_Params));

	uFnSetCamcorderVisibleNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetCamcorderVisibleNotify, &SetCamcorderVisibleNotify_Params, nullptr);
	uFnSetCamcorderVisibleNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.ResetNeckOffsetNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::ResetNeckOffsetNotify()
{
	static UFunction* uFnResetNeckOffsetNotify = nullptr;

	if (!uFnResetNeckOffsetNotify)
	{
		uFnResetNeckOffsetNotify = UFunction::FindFunction("Function OLGame.OLHero.ResetNeckOffsetNotify");
	}

	AOLHero_execResetNeckOffsetNotify_Params ResetNeckOffsetNotify_Params;
	memset(&ResetNeckOffsetNotify_Params, 0, sizeof(ResetNeckOffsetNotify_Params));

	uFnResetNeckOffsetNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetNeckOffsetNotify, &ResetNeckOffsetNotify_Params, nullptr);
	uFnResetNeckOffsetNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.BloodOnScreenNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::BloodOnScreenNotify()
{
	static UFunction* uFnBloodOnScreenNotify = nullptr;

	if (!uFnBloodOnScreenNotify)
	{
		uFnBloodOnScreenNotify = UFunction::FindFunction("Function OLGame.OLHero.BloodOnScreenNotify");
	}

	AOLHero_execBloodOnScreenNotify_Params BloodOnScreenNotify_Params;
	memset(&BloodOnScreenNotify_Params, 0, sizeof(BloodOnScreenNotify_Params));

	uFnBloodOnScreenNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnBloodOnScreenNotify, &BloodOnScreenNotify_Params, nullptr);
	uFnBloodOnScreenNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.DecapitatedNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::DecapitatedNotify()
{
	static UFunction* uFnDecapitatedNotify = nullptr;

	if (!uFnDecapitatedNotify)
	{
		uFnDecapitatedNotify = UFunction::FindFunction("Function OLGame.OLHero.DecapitatedNotify");
	}

	AOLHero_execDecapitatedNotify_Params DecapitatedNotify_Params;
	memset(&DecapitatedNotify_Params, 0, sizeof(DecapitatedNotify_Params));

	uFnDecapitatedNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDecapitatedNotify, &DecapitatedNotify_Params, nullptr);
	uFnDecapitatedNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.DieNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::DieNotify()
{
	static UFunction* uFnDieNotify = nullptr;

	if (!uFnDieNotify)
	{
		uFnDieNotify = UFunction::FindFunction("Function OLGame.OLHero.DieNotify");
	}

	AOLHero_execDieNotify_Params DieNotify_Params;
	memset(&DieNotify_Params, 0, sizeof(DieNotify_Params));

	uFnDieNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDieNotify, &DieNotify_Params, nullptr);
	uFnDieNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.OverrideCameraSettingsNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLAnimNotify_OverrideCameraParams* camParamsNotify                (CPF_Parm)

void AOLHero::OverrideCameraSettingsNotify(class UOLAnimNotify_OverrideCameraParams* camParamsNotify)
{
	static UFunction* uFnOverrideCameraSettingsNotify = nullptr;

	if (!uFnOverrideCameraSettingsNotify)
	{
		uFnOverrideCameraSettingsNotify = UFunction::FindFunction("Function OLGame.OLHero.OverrideCameraSettingsNotify");
	}

	AOLHero_execOverrideCameraSettingsNotify_Params OverrideCameraSettingsNotify_Params;
	memset(&OverrideCameraSettingsNotify_Params, 0, sizeof(OverrideCameraSettingsNotify_Params));
	memcpy_s(&OverrideCameraSettingsNotify_Params.camParamsNotify, sizeof(OverrideCameraSettingsNotify_Params.camParamsNotify), &camParamsNotify, sizeof(camParamsNotify));

	uFnOverrideCameraSettingsNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOverrideCameraSettingsNotify, &OverrideCameraSettingsNotify_Params, nullptr);
	uFnOverrideCameraSettingsNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.BatteriesReloadedNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::BatteriesReloadedNotify()
{
	static UFunction* uFnBatteriesReloadedNotify = nullptr;

	if (!uFnBatteriesReloadedNotify)
	{
		uFnBatteriesReloadedNotify = UFunction::FindFunction("Function OLGame.OLHero.BatteriesReloadedNotify");
	}

	AOLHero_execBatteriesReloadedNotify_Params BatteriesReloadedNotify_Params;
	memset(&BatteriesReloadedNotify_Params, 0, sizeof(BatteriesReloadedNotify_Params));

	uFnBatteriesReloadedNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnBatteriesReloadedNotify, &BatteriesReloadedNotify_Params, nullptr);
	uFnBatteriesReloadedNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.CamcorderLoweredNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::CamcorderLoweredNotify()
{
	static UFunction* uFnCamcorderLoweredNotify = nullptr;

	if (!uFnCamcorderLoweredNotify)
	{
		uFnCamcorderLoweredNotify = UFunction::FindFunction("Function OLGame.OLHero.CamcorderLoweredNotify");
	}

	AOLHero_execCamcorderLoweredNotify_Params CamcorderLoweredNotify_Params;
	memset(&CamcorderLoweredNotify_Params, 0, sizeof(CamcorderLoweredNotify_Params));

	uFnCamcorderLoweredNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCamcorderLoweredNotify, &CamcorderLoweredNotify_Params, nullptr);
	uFnCamcorderLoweredNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.CamcorderRaisedNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::CamcorderRaisedNotify()
{
	static UFunction* uFnCamcorderRaisedNotify = nullptr;

	if (!uFnCamcorderRaisedNotify)
	{
		uFnCamcorderRaisedNotify = UFunction::FindFunction("Function OLGame.OLHero.CamcorderRaisedNotify");
	}

	AOLHero_execCamcorderRaisedNotify_Params CamcorderRaisedNotify_Params;
	memset(&CamcorderRaisedNotify_Params, 0, sizeof(CamcorderRaisedNotify_Params));

	uFnCamcorderRaisedNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCamcorderRaisedNotify, &CamcorderRaisedNotify_Params, nullptr);
	uFnCamcorderRaisedNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.CamcorderAvailableNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::CamcorderAvailableNotify()
{
	static UFunction* uFnCamcorderAvailableNotify = nullptr;

	if (!uFnCamcorderAvailableNotify)
	{
		uFnCamcorderAvailableNotify = UFunction::FindFunction("Function OLGame.OLHero.CamcorderAvailableNotify");
	}

	AOLHero_execCamcorderAvailableNotify_Params CamcorderAvailableNotify_Params;
	memset(&CamcorderAvailableNotify_Params, 0, sizeof(CamcorderAvailableNotify_Params));

	uFnCamcorderAvailableNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCamcorderAvailableNotify, &CamcorderAvailableNotify_Params, nullptr);
	uFnCamcorderAvailableNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.DoorAnimNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::DoorAnimNotify()
{
	static UFunction* uFnDoorAnimNotify = nullptr;

	if (!uFnDoorAnimNotify)
	{
		uFnDoorAnimNotify = UFunction::FindFunction("Function OLGame.OLHero.DoorAnimNotify");
	}

	AOLHero_execDoorAnimNotify_Params DoorAnimNotify_Params;
	memset(&DoorAnimNotify_Params, 0, sizeof(DoorAnimNotify_Params));

	uFnDoorAnimNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDoorAnimNotify, &DoorAnimNotify_Params, nullptr);
	uFnDoorAnimNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.PickupNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::PickupNotify()
{
	static UFunction* uFnPickupNotify = nullptr;

	if (!uFnPickupNotify)
	{
		uFnPickupNotify = UFunction::FindFunction("Function OLGame.OLHero.PickupNotify");
	}

	AOLHero_execPickupNotify_Params PickupNotify_Params;
	memset(&PickupNotify_Params, 0, sizeof(PickupNotify_Params));

	uFnPickupNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPickupNotify, &PickupNotify_Params, nullptr);
	uFnPickupNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.ReactToHit
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          hitStrength                    (CPF_Parm)
// struct FVector                 hitDirection                   (CPF_Parm)
// bool                           bForceFullPower                (CPF_OptionalParm | CPF_Parm)

void AOLHero::ReactToHit(float hitStrength, struct FVector hitDirection, bool bForceFullPower)
{
	static UFunction* uFnReactToHit = nullptr;

	if (!uFnReactToHit)
	{
		uFnReactToHit = UFunction::FindFunction("Function OLGame.OLHero.ReactToHit");
	}

	AOLHero_execReactToHit_Params ReactToHit_Params;
	memset(&ReactToHit_Params, 0, sizeof(ReactToHit_Params));
	memcpy_s(&ReactToHit_Params.hitStrength, sizeof(ReactToHit_Params.hitStrength), &hitStrength, sizeof(hitStrength));
	memcpy_s(&ReactToHit_Params.hitDirection, sizeof(ReactToHit_Params.hitDirection), &hitDirection, sizeof(hitDirection));
	ReactToHit_Params.bForceFullPower = bForceFullPower;

	uFnReactToHit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReactToHit, &ReactToHit_Params, nullptr);
	uFnReactToHit->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.TryKillInLocker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)

bool AOLHero::TryKillInLocker(class AOLEnemyPawn* attacker)
{
	static UFunction* uFnTryKillInLocker = nullptr;

	if (!uFnTryKillInLocker)
	{
		uFnTryKillInLocker = UFunction::FindFunction("Function OLGame.OLHero.TryKillInLocker");
	}

	AOLHero_execTryKillInLocker_Params TryKillInLocker_Params;
	memset(&TryKillInLocker_Params, 0, sizeof(TryKillInLocker_Params));
	memcpy_s(&TryKillInLocker_Params.attacker, sizeof(TryKillInLocker_Params.attacker), &attacker, sizeof(attacker));

	uFnTryKillInLocker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryKillInLocker, &TryKillInLocker_Params, nullptr);
	uFnTryKillInLocker->FunctionFlags |= 0x400;

	return TryKillInLocker_Params.ReturnValue;
};

// Function OLGame.OLHero.TryKillHero
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)
// struct FVector                 enemyStartLocation             (CPF_Parm)
// struct FVector                 Direction                      (CPF_Parm)

bool AOLHero::TryKillHero(class AOLEnemyPawn* attacker, struct FVector enemyStartLocation, struct FVector Direction)
{
	static UFunction* uFnTryKillHero = nullptr;

	if (!uFnTryKillHero)
	{
		uFnTryKillHero = UFunction::FindFunction("Function OLGame.OLHero.TryKillHero");
	}

	AOLHero_execTryKillHero_Params TryKillHero_Params;
	memset(&TryKillHero_Params, 0, sizeof(TryKillHero_Params));
	memcpy_s(&TryKillHero_Params.attacker, sizeof(TryKillHero_Params.attacker), &attacker, sizeof(attacker));
	memcpy_s(&TryKillHero_Params.enemyStartLocation, sizeof(TryKillHero_Params.enemyStartLocation), &enemyStartLocation, sizeof(enemyStartLocation));
	memcpy_s(&TryKillHero_Params.Direction, sizeof(TryKillHero_Params.Direction), &Direction, sizeof(Direction));

	uFnTryKillHero->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryKillHero, &TryKillHero_Params, nullptr);
	uFnTryKillHero->FunctionFlags |= 0x400;

	return TryKillHero_Params.ReturnValue;
};

// Function OLGame.OLHero.TryDecapitate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)

bool AOLHero::TryDecapitate(class AOLEnemyPawn* attacker)
{
	static UFunction* uFnTryDecapitate = nullptr;

	if (!uFnTryDecapitate)
	{
		uFnTryDecapitate = UFunction::FindFunction("Function OLGame.OLHero.TryDecapitate");
	}

	AOLHero_execTryDecapitate_Params TryDecapitate_Params;
	memset(&TryDecapitate_Params, 0, sizeof(TryDecapitate_Params));
	memcpy_s(&TryDecapitate_Params.attacker, sizeof(TryDecapitate_Params.attacker), &attacker, sizeof(attacker));

	uFnTryDecapitate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryDecapitate, &TryDecapitate_Params, nullptr);
	uFnTryDecapitate->FunctionFlags |= 0x400;

	return TryDecapitate_Params.ReturnValue;
};

// Function OLGame.OLHero.TryGrabFromUnder
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)
// struct FVector                 StartLocation                  (CPF_Parm)
// struct FVector                 AttackStartLocation            (CPF_Parm)

bool AOLHero::TryGrabFromUnder(class AOLEnemyPawn* attacker, struct FVector StartLocation, struct FVector AttackStartLocation)
{
	static UFunction* uFnTryGrabFromUnder = nullptr;

	if (!uFnTryGrabFromUnder)
	{
		uFnTryGrabFromUnder = UFunction::FindFunction("Function OLGame.OLHero.TryGrabFromUnder");
	}

	AOLHero_execTryGrabFromUnder_Params TryGrabFromUnder_Params;
	memset(&TryGrabFromUnder_Params, 0, sizeof(TryGrabFromUnder_Params));
	memcpy_s(&TryGrabFromUnder_Params.attacker, sizeof(TryGrabFromUnder_Params.attacker), &attacker, sizeof(attacker));
	memcpy_s(&TryGrabFromUnder_Params.StartLocation, sizeof(TryGrabFromUnder_Params.StartLocation), &StartLocation, sizeof(StartLocation));
	memcpy_s(&TryGrabFromUnder_Params.AttackStartLocation, sizeof(TryGrabFromUnder_Params.AttackStartLocation), &AttackStartLocation, sizeof(AttackStartLocation));

	uFnTryGrabFromUnder->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryGrabFromUnder, &TryGrabFromUnder_Params, nullptr);
	uFnTryGrabFromUnder->FunctionFlags |= 0x400;

	return TryGrabFromUnder_Params.ReturnValue;
};

// Function OLGame.OLHero.TryThrowPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)
// float                          ThrowRotation                  (CPF_Parm)

bool AOLHero::TryThrowPlayer(class AOLEnemyPawn* attacker, float ThrowRotation)
{
	static UFunction* uFnTryThrowPlayer = nullptr;

	if (!uFnTryThrowPlayer)
	{
		uFnTryThrowPlayer = UFunction::FindFunction("Function OLGame.OLHero.TryThrowPlayer");
	}

	AOLHero_execTryThrowPlayer_Params TryThrowPlayer_Params;
	memset(&TryThrowPlayer_Params, 0, sizeof(TryThrowPlayer_Params));
	memcpy_s(&TryThrowPlayer_Params.attacker, sizeof(TryThrowPlayer_Params.attacker), &attacker, sizeof(attacker));
	memcpy_s(&TryThrowPlayer_Params.ThrowRotation, sizeof(TryThrowPlayer_Params.ThrowRotation), &ThrowRotation, sizeof(ThrowRotation));

	uFnTryThrowPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryThrowPlayer, &TryThrowPlayer_Params, nullptr);
	uFnTryThrowPlayer->FunctionFlags |= 0x400;

	return TryThrowPlayer_Params.ReturnValue;
};

// Function OLGame.OLHero.TryGrabNormal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)
// struct FVector                 StartLocation                  (CPF_Parm)
// struct FVector                 AttackStartLocation            (CPF_Parm)

bool AOLHero::TryGrabNormal(class AOLEnemyPawn* attacker, struct FVector StartLocation, struct FVector AttackStartLocation)
{
	static UFunction* uFnTryGrabNormal = nullptr;

	if (!uFnTryGrabNormal)
	{
		uFnTryGrabNormal = UFunction::FindFunction("Function OLGame.OLHero.TryGrabNormal");
	}

	AOLHero_execTryGrabNormal_Params TryGrabNormal_Params;
	memset(&TryGrabNormal_Params, 0, sizeof(TryGrabNormal_Params));
	memcpy_s(&TryGrabNormal_Params.attacker, sizeof(TryGrabNormal_Params.attacker), &attacker, sizeof(attacker));
	memcpy_s(&TryGrabNormal_Params.StartLocation, sizeof(TryGrabNormal_Params.StartLocation), &StartLocation, sizeof(StartLocation));
	memcpy_s(&TryGrabNormal_Params.AttackStartLocation, sizeof(TryGrabNormal_Params.AttackStartLocation), &AttackStartLocation, sizeof(AttackStartLocation));

	uFnTryGrabNormal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryGrabNormal, &TryGrabNormal_Params, nullptr);
	uFnTryGrabNormal->FunctionFlags |= 0x400;

	return TryGrabNormal_Params.ReturnValue;
};

// Function OLGame.OLHero.TryGrabFromBed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)

bool AOLHero::TryGrabFromBed(class AOLEnemyPawn* attacker)
{
	static UFunction* uFnTryGrabFromBed = nullptr;

	if (!uFnTryGrabFromBed)
	{
		uFnTryGrabFromBed = UFunction::FindFunction("Function OLGame.OLHero.TryGrabFromBed");
	}

	AOLHero_execTryGrabFromBed_Params TryGrabFromBed_Params;
	memset(&TryGrabFromBed_Params, 0, sizeof(TryGrabFromBed_Params));
	memcpy_s(&TryGrabFromBed_Params.attacker, sizeof(TryGrabFromBed_Params.attacker), &attacker, sizeof(attacker));

	uFnTryGrabFromBed->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryGrabFromBed, &TryGrabFromBed_Params, nullptr);
	uFnTryGrabFromBed->FunctionFlags |= 0x400;

	return TryGrabFromBed_Params.ReturnValue;
};

// Function OLGame.OLHero.TryExitBed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 playerIntentDirection          (CPF_Parm)

bool AOLHero::TryExitBed(struct FVector playerIntentDirection)
{
	static UFunction* uFnTryExitBed = nullptr;

	if (!uFnTryExitBed)
	{
		uFnTryExitBed = UFunction::FindFunction("Function OLGame.OLHero.TryExitBed");
	}

	AOLHero_execTryExitBed_Params TryExitBed_Params;
	memset(&TryExitBed_Params, 0, sizeof(TryExitBed_Params));
	memcpy_s(&TryExitBed_Params.playerIntentDirection, sizeof(TryExitBed_Params.playerIntentDirection), &playerIntentDirection, sizeof(playerIntentDirection));

	uFnTryExitBed->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryExitBed, &TryExitBed_Params, nullptr);
	uFnTryExitBed->FunctionFlags |= 0x400;

	return TryExitBed_Params.ReturnValue;
};

// Function OLGame.OLHero.TryExitLocker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::TryExitLocker()
{
	static UFunction* uFnTryExitLocker = nullptr;

	if (!uFnTryExitLocker)
	{
		uFnTryExitLocker = UFunction::FindFunction("Function OLGame.OLHero.TryExitLocker");
	}

	AOLHero_execTryExitLocker_Params TryExitLocker_Params;
	memset(&TryExitLocker_Params, 0, sizeof(TryExitLocker_Params));

	uFnTryExitLocker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryExitLocker, &TryExitLocker_Params, nullptr);
	uFnTryExitLocker->FunctionFlags |= 0x400;

	return TryExitLocker_Params.ReturnValue;
};

// Function OLGame.OLHero.TryGrabFromLocker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)

bool AOLHero::TryGrabFromLocker(class AOLEnemyPawn* attacker)
{
	static UFunction* uFnTryGrabFromLocker = nullptr;

	if (!uFnTryGrabFromLocker)
	{
		uFnTryGrabFromLocker = UFunction::FindFunction("Function OLGame.OLHero.TryGrabFromLocker");
	}

	AOLHero_execTryGrabFromLocker_Params TryGrabFromLocker_Params;
	memset(&TryGrabFromLocker_Params, 0, sizeof(TryGrabFromLocker_Params));
	memcpy_s(&TryGrabFromLocker_Params.attacker, sizeof(TryGrabFromLocker_Params.attacker), &attacker, sizeof(attacker));

	uFnTryGrabFromLocker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryGrabFromLocker, &TryGrabFromLocker_Params, nullptr);
	uFnTryGrabFromLocker->FunctionFlags |= 0x400;

	return TryGrabFromLocker_Params.ReturnValue;
};

// Function OLGame.OLHero.CanGrabFromSqueeze
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::CanGrabFromSqueeze()
{
	static UFunction* uFnCanGrabFromSqueeze = nullptr;

	if (!uFnCanGrabFromSqueeze)
	{
		uFnCanGrabFromSqueeze = UFunction::FindFunction("Function OLGame.OLHero.CanGrabFromSqueeze");
	}

	AOLHero_execCanGrabFromSqueeze_Params CanGrabFromSqueeze_Params;
	memset(&CanGrabFromSqueeze_Params, 0, sizeof(CanGrabFromSqueeze_Params));

	uFnCanGrabFromSqueeze->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanGrabFromSqueeze, &CanGrabFromSqueeze_Params, nullptr);
	uFnCanGrabFromSqueeze->FunctionFlags |= 0x400;

	return CanGrabFromSqueeze_Params.ReturnValue;
};

// Function OLGame.OLHero.TryGrabFromSqueeze
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLEnemyPawn*            attacker                       (CPF_Parm)

bool AOLHero::TryGrabFromSqueeze(class AOLEnemyPawn* attacker)
{
	static UFunction* uFnTryGrabFromSqueeze = nullptr;

	if (!uFnTryGrabFromSqueeze)
	{
		uFnTryGrabFromSqueeze = UFunction::FindFunction("Function OLGame.OLHero.TryGrabFromSqueeze");
	}

	AOLHero_execTryGrabFromSqueeze_Params TryGrabFromSqueeze_Params;
	memset(&TryGrabFromSqueeze_Params, 0, sizeof(TryGrabFromSqueeze_Params));
	memcpy_s(&TryGrabFromSqueeze_Params.attacker, sizeof(TryGrabFromSqueeze_Params.attacker), &attacker, sizeof(attacker));

	uFnTryGrabFromSqueeze->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryGrabFromSqueeze, &TryGrabFromSqueeze_Params, nullptr);
	uFnTryGrabFromSqueeze->FunctionFlags |= 0x400;

	return TryGrabFromSqueeze_Params.ReturnValue;
};

// Function OLGame.OLHero.HeroControlActivated
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOLSeqAct_HeroControl*   heroControlAction              (CPF_Parm)

bool AOLHero::HeroControlActivated(class UOLSeqAct_HeroControl* heroControlAction)
{
	static UFunction* uFnHeroControlActivated = nullptr;

	if (!uFnHeroControlActivated)
	{
		uFnHeroControlActivated = UFunction::FindFunction("Function OLGame.OLHero.HeroControlActivated");
	}

	AOLHero_execHeroControlActivated_Params HeroControlActivated_Params;
	memset(&HeroControlActivated_Params, 0, sizeof(HeroControlActivated_Params));
	memcpy_s(&HeroControlActivated_Params.heroControlAction, sizeof(HeroControlActivated_Params.heroControlAction), &heroControlAction, sizeof(heroControlAction));

	uFnHeroControlActivated->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHeroControlActivated, &HeroControlActivated_Params, nullptr);
	uFnHeroControlActivated->FunctionFlags |= 0x400;

	return HeroControlActivated_Params.ReturnValue;
};

// Function OLGame.OLHero.ExitCinematicMode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleCinematicMode* seqAction                      (CPF_Parm)

void AOLHero::ExitCinematicMode(class USeqAct_ToggleCinematicMode* seqAction)
{
	static UFunction* uFnExitCinematicMode = nullptr;

	if (!uFnExitCinematicMode)
	{
		uFnExitCinematicMode = UFunction::FindFunction("Function OLGame.OLHero.ExitCinematicMode");
	}

	AOLHero_execExitCinematicMode_Params ExitCinematicMode_Params;
	memset(&ExitCinematicMode_Params, 0, sizeof(ExitCinematicMode_Params));
	memcpy_s(&ExitCinematicMode_Params.seqAction, sizeof(ExitCinematicMode_Params.seqAction), &seqAction, sizeof(seqAction));

	uFnExitCinematicMode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnExitCinematicMode, &ExitCinematicMode_Params, nullptr);
	uFnExitCinematicMode->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.EnterCinematicMode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleCinematicMode* seqAction                      (CPF_Parm)

void AOLHero::EnterCinematicMode(class USeqAct_ToggleCinematicMode* seqAction)
{
	static UFunction* uFnEnterCinematicMode = nullptr;

	if (!uFnEnterCinematicMode)
	{
		uFnEnterCinematicMode = UFunction::FindFunction("Function OLGame.OLHero.EnterCinematicMode");
	}

	AOLHero_execEnterCinematicMode_Params EnterCinematicMode_Params;
	memset(&EnterCinematicMode_Params, 0, sizeof(EnterCinematicMode_Params));
	memcpy_s(&EnterCinematicMode_Params.seqAction, sizeof(EnterCinematicMode_Params.seqAction), &seqAction, sizeof(seqAction));

	uFnEnterCinematicMode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnterCinematicMode, &EnterCinematicMode_Params, nullptr);
	uFnEnterCinematicMode->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.StartSpecialMove
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ESpecialMoveType               moveType                       (CPF_Parm)
// struct FVector                 targetPosition                 (CPF_OptionalParm | CPF_Parm)
// struct FVector                 TargetDirection                (CPF_OptionalParm | CPF_Parm)
// EAdjustPositionTargetType      TargetType                     (CPF_OptionalParm | CPF_Parm)

void AOLHero::StartSpecialMove(ESpecialMoveType moveType, struct FVector targetPosition, struct FVector TargetDirection, EAdjustPositionTargetType TargetType)
{
	static UFunction* uFnStartSpecialMove = nullptr;

	if (!uFnStartSpecialMove)
	{
		uFnStartSpecialMove = UFunction::FindFunction("Function OLGame.OLHero.StartSpecialMove");
	}

	AOLHero_execStartSpecialMove_Params StartSpecialMove_Params;
	memset(&StartSpecialMove_Params, 0, sizeof(StartSpecialMove_Params));
	memcpy_s(&StartSpecialMove_Params.moveType, sizeof(StartSpecialMove_Params.moveType), &moveType, sizeof(moveType));
	memcpy_s(&StartSpecialMove_Params.targetPosition, sizeof(StartSpecialMove_Params.targetPosition), &targetPosition, sizeof(targetPosition));
	memcpy_s(&StartSpecialMove_Params.TargetDirection, sizeof(StartSpecialMove_Params.TargetDirection), &TargetDirection, sizeof(TargetDirection));
	memcpy_s(&StartSpecialMove_Params.TargetType, sizeof(StartSpecialMove_Params.TargetType), &TargetType, sizeof(TargetType));

	uFnStartSpecialMove->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartSpecialMove, &StartSpecialMove_Params, nullptr);
	uFnStartSpecialMove->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.OnPossess
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::OnPossess()
{
	static UFunction* uFnOnPossess = nullptr;

	if (!uFnOnPossess)
	{
		uFnOnPossess = UFunction::FindFunction("Function OLGame.OLHero.OnPossess");
	}

	AOLHero_execOnPossess_Params OnPossess_Params;
	memset(&OnPossess_Params, 0, sizeof(OnPossess_Params));

	uFnOnPossess->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnPossess, &OnPossess_Params, nullptr);
	uFnOnPossess->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.ActivateWaterFootstepParticles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bRightFoot                     (CPF_Parm)

void AOLHero::ActivateWaterFootstepParticles(bool bRightFoot)
{
	static UFunction* uFnActivateWaterFootstepParticles = nullptr;

	if (!uFnActivateWaterFootstepParticles)
	{
		uFnActivateWaterFootstepParticles = UFunction::FindFunction("Function OLGame.OLHero.ActivateWaterFootstepParticles");
	}

	AOLHero_execActivateWaterFootstepParticles_Params ActivateWaterFootstepParticles_Params;
	memset(&ActivateWaterFootstepParticles_Params, 0, sizeof(ActivateWaterFootstepParticles_Params));
	ActivateWaterFootstepParticles_Params.bRightFoot = bRightFoot;

	uFnActivateWaterFootstepParticles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnActivateWaterFootstepParticles, &ActivateWaterFootstepParticles_Params, nullptr);
	uFnActivateWaterFootstepParticles->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.TakeElectricDamage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// float                          Knockback                      (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// class UAkEvent*                ElectricSoundEvent             (CPF_Parm)

void AOLHero::TakeElectricDamage(int32_t Damage, float Knockback, struct FVector HitNormal, class UAkEvent* ElectricSoundEvent)
{
	static UFunction* uFnTakeElectricDamage = nullptr;

	if (!uFnTakeElectricDamage)
	{
		uFnTakeElectricDamage = UFunction::FindFunction("Function OLGame.OLHero.TakeElectricDamage");
	}

	AOLHero_execTakeElectricDamage_Params TakeElectricDamage_Params;
	memset(&TakeElectricDamage_Params, 0, sizeof(TakeElectricDamage_Params));
	memcpy_s(&TakeElectricDamage_Params.Damage, sizeof(TakeElectricDamage_Params.Damage), &Damage, sizeof(Damage));
	memcpy_s(&TakeElectricDamage_Params.Knockback, sizeof(TakeElectricDamage_Params.Knockback), &Knockback, sizeof(Knockback));
	memcpy_s(&TakeElectricDamage_Params.HitNormal, sizeof(TakeElectricDamage_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	memcpy_s(&TakeElectricDamage_Params.ElectricSoundEvent, sizeof(TakeElectricDamage_Params.ElectricSoundEvent), &ElectricSoundEvent, sizeof(ElectricSoundEvent));

	uFnTakeElectricDamage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTakeElectricDamage, &TakeElectricDamage_Params, nullptr);
	uFnTakeElectricDamage->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.NativeTakeFallingDamage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::NativeTakeFallingDamage()
{
	static UFunction* uFnNativeTakeFallingDamage = nullptr;

	if (!uFnNativeTakeFallingDamage)
	{
		uFnNativeTakeFallingDamage = UFunction::FindFunction("Function OLGame.OLHero.NativeTakeFallingDamage");
	}

	AOLHero_execNativeTakeFallingDamage_Params NativeTakeFallingDamage_Params;
	memset(&NativeTakeFallingDamage_Params, 0, sizeof(NativeTakeFallingDamage_Params));

	uFnNativeTakeFallingDamage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeTakeFallingDamage, &NativeTakeFallingDamage_Params, nullptr);
	uFnNativeTakeFallingDamage->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.NativeTakeDamage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)

void AOLHero::NativeTakeDamage(int32_t Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType)
{
	static UFunction* uFnNativeTakeDamage = nullptr;

	if (!uFnNativeTakeDamage)
	{
		uFnNativeTakeDamage = UFunction::FindFunction("Function OLGame.OLHero.NativeTakeDamage");
	}

	AOLHero_execNativeTakeDamage_Params NativeTakeDamage_Params;
	memset(&NativeTakeDamage_Params, 0, sizeof(NativeTakeDamage_Params));
	memcpy_s(&NativeTakeDamage_Params.Damage, sizeof(NativeTakeDamage_Params.Damage), &Damage, sizeof(Damage));
	memcpy_s(&NativeTakeDamage_Params.InstigatedBy, sizeof(NativeTakeDamage_Params.InstigatedBy), &InstigatedBy, sizeof(InstigatedBy));
	memcpy_s(&NativeTakeDamage_Params.HitLocation, sizeof(NativeTakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&NativeTakeDamage_Params.DamageType, sizeof(NativeTakeDamage_Params.DamageType), &DamageType, sizeof(DamageType));

	uFnNativeTakeDamage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeTakeDamage, &NativeTakeDamage_Params, nullptr);
	uFnNativeTakeDamage->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.NativeDisplayDebug
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLHero::NativeDisplayDebug(class UCanvas* Canvas, float& out_YL, float& out_YPos)
{
	static UFunction* uFnNativeDisplayDebug = nullptr;

	if (!uFnNativeDisplayDebug)
	{
		uFnNativeDisplayDebug = UFunction::FindFunction("Function OLGame.OLHero.NativeDisplayDebug");
	}

	AOLHero_execNativeDisplayDebug_Params NativeDisplayDebug_Params;
	memset(&NativeDisplayDebug_Params, 0, sizeof(NativeDisplayDebug_Params));
	memcpy_s(&NativeDisplayDebug_Params.Canvas, sizeof(NativeDisplayDebug_Params.Canvas), &Canvas, sizeof(Canvas));
	memcpy_s(&NativeDisplayDebug_Params.out_YL, sizeof(NativeDisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&NativeDisplayDebug_Params.out_YPos, sizeof(NativeDisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	uFnNativeDisplayDebug->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeDisplayDebug, &NativeDisplayDebug_Params, nullptr);
	uFnNativeDisplayDebug->FunctionFlags |= 0x400;

	memcpy_s(&out_YL, sizeof(out_YL), &NativeDisplayDebug_Params.out_YL, sizeof(NativeDisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &NativeDisplayDebug_Params.out_YPos, sizeof(NativeDisplayDebug_Params.out_YPos));
};

// Function OLGame.OLHero.GetCamera
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 out_CamLoc                     (CPF_Parm | CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm | CPF_OutParm)
// float                          out_FOV                        (CPF_Parm | CPF_OutParm)

void AOLHero::GetCamera(struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV)
{
	static UFunction* uFnGetCamera = nullptr;

	if (!uFnGetCamera)
	{
		uFnGetCamera = UFunction::FindFunction("Function OLGame.OLHero.GetCamera");
	}

	AOLHero_execGetCamera_Params GetCamera_Params;
	memset(&GetCamera_Params, 0, sizeof(GetCamera_Params));
	memcpy_s(&GetCamera_Params.out_CamLoc, sizeof(GetCamera_Params.out_CamLoc), &out_CamLoc, sizeof(out_CamLoc));
	memcpy_s(&GetCamera_Params.out_CamRot, sizeof(GetCamera_Params.out_CamRot), &out_CamRot, sizeof(out_CamRot));
	memcpy_s(&GetCamera_Params.out_FOV, sizeof(GetCamera_Params.out_FOV), &out_FOV, sizeof(out_FOV));

	uFnGetCamera->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetCamera, &GetCamera_Params, nullptr);
	uFnGetCamera->FunctionFlags |= 0x400;

	memcpy_s(&out_CamLoc, sizeof(out_CamLoc), &GetCamera_Params.out_CamLoc, sizeof(GetCamera_Params.out_CamLoc));
	memcpy_s(&out_CamRot, sizeof(out_CamRot), &GetCamera_Params.out_CamRot, sizeof(GetCamera_Params.out_CamRot));
	memcpy_s(&out_FOV, sizeof(out_FOV), &GetCamera_Params.out_FOV, sizeof(GetCamera_Params.out_FOV));
};

// Function OLGame.OLHero.NativePostBeginPlay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::NativePostBeginPlay()
{
	static UFunction* uFnNativePostBeginPlay = nullptr;

	if (!uFnNativePostBeginPlay)
	{
		uFnNativePostBeginPlay = UFunction::FindFunction("Function OLGame.OLHero.NativePostBeginPlay");
	}

	AOLHero_execNativePostBeginPlay_Params NativePostBeginPlay_Params;
	memset(&NativePostBeginPlay_Params, 0, sizeof(NativePostBeginPlay_Params));

	uFnNativePostBeginPlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativePostBeginPlay, &NativePostBeginPlay_Params, nullptr);
	uFnNativePostBeginPlay->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.ResetAfterTeleport
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::ResetAfterTeleport()
{
	static UFunction* uFnResetAfterTeleport = nullptr;

	if (!uFnResetAfterTeleport)
	{
		uFnResetAfterTeleport = UFunction::FindFunction("Function OLGame.OLHero.ResetAfterTeleport");
	}

	AOLHero_execResetAfterTeleport_Params ResetAfterTeleport_Params;
	memset(&ResetAfterTeleport_Params, 0, sizeof(ResetAfterTeleport_Params));

	uFnResetAfterTeleport->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetAfterTeleport, &ResetAfterTeleport_Params, nullptr);
	uFnResetAfterTeleport->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.IsRunning
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::IsRunning()
{
	static UFunction* uFnIsRunning = nullptr;

	if (!uFnIsRunning)
	{
		uFnIsRunning = UFunction::FindFunction("Function OLGame.OLHero.IsRunning");
	}

	AOLHero_execIsRunning_Params IsRunning_Params;
	memset(&IsRunning_Params, 0, sizeof(IsRunning_Params));

	uFnIsRunning->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsRunning, &IsRunning_Params, nullptr);
	uFnIsRunning->FunctionFlags |= 0x400;

	return IsRunning_Params.ReturnValue;
};

// Function OLGame.OLHero.TryRun
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLHero::TryRun()
{
	static UFunction* uFnTryRun = nullptr;

	if (!uFnTryRun)
	{
		uFnTryRun = UFunction::FindFunction("Function OLGame.OLHero.TryRun");
	}

	AOLHero_execTryRun_Params TryRun_Params;
	memset(&TryRun_Params, 0, sizeof(TryRun_Params));

	uFnTryRun->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryRun, &TryRun_Params, nullptr);
	uFnTryRun->FunctionFlags |= 0x400;

	return TryRun_Params.ReturnValue;
};

// Function OLGame.OLHero.Walk
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLHero::Walk()
{
	static UFunction* uFnWalk = nullptr;

	if (!uFnWalk)
	{
		uFnWalk = UFunction::FindFunction("Function OLGame.OLHero.Walk");
	}

	AOLHero_execWalk_Params Walk_Params;
	memset(&Walk_Params, 0, sizeof(Walk_Params));

	uFnWalk->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWalk, &Walk_Params, nullptr);
	uFnWalk->FunctionFlags |= 0x400;
};

// Function OLGame.OLHero.GetViewRotation
// [0x00020D00] (FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FRotator AOLHero::eventGetViewRotation()
{
	static UFunction* uFnGetViewRotation = nullptr;

	if (!uFnGetViewRotation)
	{
		uFnGetViewRotation = UFunction::FindFunction("Function OLGame.OLHero.GetViewRotation");
	}

	AOLHero_eventGetViewRotation_Params GetViewRotation_Params;
	memset(&GetViewRotation_Params, 0, sizeof(GetViewRotation_Params));

	uFnGetViewRotation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetViewRotation, &GetViewRotation_Params, nullptr);
	uFnGetViewRotation->FunctionFlags |= 0x400;

	return GetViewRotation_Params.ReturnValue;
};

// Function OLGame.OLHero.GetPawnViewLocation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector AOLHero::GetPawnViewLocation()
{
	static UFunction* uFnGetPawnViewLocation = nullptr;

	if (!uFnGetPawnViewLocation)
	{
		uFnGetPawnViewLocation = UFunction::FindFunction("Function OLGame.OLHero.GetPawnViewLocation");
	}

	AOLHero_execGetPawnViewLocation_Params GetPawnViewLocation_Params;
	memset(&GetPawnViewLocation_Params, 0, sizeof(GetPawnViewLocation_Params));

	uFnGetPawnViewLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetPawnViewLocation, &GetPawnViewLocation_Params, nullptr);
	uFnGetPawnViewLocation->FunctionFlags |= 0x400;

	return GetPawnViewLocation_Params.ReturnValue;
};

// Function OLGame.OLPickableObject.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLPickableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLPickableObject.OnToggle");
	}

	AOLPickableObject_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLCollectiblePickup.PostBeginPlay
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLCollectiblePickup::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLCollectiblePickup.PostBeginPlay");
	}

	AOLCollectiblePickup_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLCollectiblePickup.ShouldShowCollectible
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLCollectiblePickup::ShouldShowCollectible()
{
	static UFunction* uFnShouldShowCollectible = nullptr;

	if (!uFnShouldShowCollectible)
	{
		uFnShouldShowCollectible = UFunction::FindFunction("Function OLGame.OLCollectiblePickup.ShouldShowCollectible");
	}

	AOLCollectiblePickup_execShouldShowCollectible_Params ShouldShowCollectible_Params;
	memset(&ShouldShowCollectible_Params, 0, sizeof(ShouldShowCollectible_Params));

	uFnShouldShowCollectible->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShouldShowCollectible, &ShouldShowCollectible_Params, nullptr);
	uFnShouldShowCollectible->FunctionFlags |= 0x400;

	return ShouldShowCollectible_Params.ReturnValue;
};

// Function OLGame.OLGameplayItemPickup.PostBeginPlay
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLGameplayItemPickup::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLGameplayItemPickup.PostBeginPlay");
	}

	AOLGameplayItemPickup_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLGameplayItemPickup.ShouldShowItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLGameplayItemPickup::ShouldShowItem()
{
	static UFunction* uFnShouldShowItem = nullptr;

	if (!uFnShouldShowItem)
	{
		uFnShouldShowItem = UFunction::FindFunction("Function OLGame.OLGameplayItemPickup.ShouldShowItem");
	}

	AOLGameplayItemPickup_execShouldShowItem_Params ShouldShowItem_Params;
	memset(&ShouldShowItem_Params, 0, sizeof(ShouldShowItem_Params));

	uFnShouldShowItem->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShouldShowItem, &ShouldShowItem_Params, nullptr);
	uFnShouldShowItem->FunctionFlags |= 0x400;

	return ShouldShowItem_Params.ReturnValue;
};

// Function OLGame.OLPlayerInput.IsKeyPressed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Key                            (CPF_Parm)

bool UOLPlayerInput::IsKeyPressed(struct FName Key)
{
	static UFunction* uFnIsKeyPressed = nullptr;

	if (!uFnIsKeyPressed)
	{
		uFnIsKeyPressed = UFunction::FindFunction("Function OLGame.OLPlayerInput.IsKeyPressed");
	}

	UOLPlayerInput_execIsKeyPressed_Params IsKeyPressed_Params;
	memset(&IsKeyPressed_Params, 0, sizeof(IsKeyPressed_Params));
	memcpy_s(&IsKeyPressed_Params.Key, sizeof(IsKeyPressed_Params.Key), &Key, sizeof(Key));

	uFnIsKeyPressed->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsKeyPressed, &IsKeyPressed_Params, nullptr);
	uFnIsKeyPressed->FunctionFlags |= 0x400;

	return IsKeyPressed_Params.ReturnValue;
};

// Function OLGame.OLPlayerInput.UnBindNoSave
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)

void UOLPlayerInput::eventUnBindNoSave(class FString Command)
{
	static UFunction* uFnUnBindNoSave = nullptr;

	if (!uFnUnBindNoSave)
	{
		uFnUnBindNoSave = UFunction::FindFunction("Function OLGame.OLPlayerInput.UnBindNoSave");
	}

	UOLPlayerInput_eventUnBindNoSave_Params UnBindNoSave_Params;
	memset(&UnBindNoSave_Params, 0, sizeof(UnBindNoSave_Params));
	memcpy_s(&UnBindNoSave_Params.Command, sizeof(UnBindNoSave_Params.Command), &Command, sizeof(Command));

	this->ProcessEvent(uFnUnBindNoSave, &UnBindNoSave_Params, nullptr);
};

// Function OLGame.OLPlayerInput.PreProcessInput
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UOLPlayerInput::PreProcessInput(float DeltaTime)
{
	static UFunction* uFnPreProcessInput = nullptr;

	if (!uFnPreProcessInput)
	{
		uFnPreProcessInput = UFunction::FindFunction("Function OLGame.OLPlayerInput.PreProcessInput");
	}

	UOLPlayerInput_execPreProcessInput_Params PreProcessInput_Params;
	memset(&PreProcessInput_Params, 0, sizeof(PreProcessInput_Params));
	memcpy_s(&PreProcessInput_Params.DeltaTime, sizeof(PreProcessInput_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnPreProcessInput, &PreProcessInput_Params, nullptr);
};

// Function OLGame.OLPlayerInput.StopLeanRight
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::StopLeanRight()
{
	static UFunction* uFnStopLeanRight = nullptr;

	if (!uFnStopLeanRight)
	{
		uFnStopLeanRight = UFunction::FindFunction("Function OLGame.OLPlayerInput.StopLeanRight");
	}

	UOLPlayerInput_execStopLeanRight_Params StopLeanRight_Params;
	memset(&StopLeanRight_Params, 0, sizeof(StopLeanRight_Params));

	this->ProcessEvent(uFnStopLeanRight, &StopLeanRight_Params, nullptr);
};

// Function OLGame.OLPlayerInput.StopLeanLeft
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::StopLeanLeft()
{
	static UFunction* uFnStopLeanLeft = nullptr;

	if (!uFnStopLeanLeft)
	{
		uFnStopLeanLeft = UFunction::FindFunction("Function OLGame.OLPlayerInput.StopLeanLeft");
	}

	UOLPlayerInput_execStopLeanLeft_Params StopLeanLeft_Params;
	memset(&StopLeanLeft_Params, 0, sizeof(StopLeanLeft_Params));

	this->ProcessEvent(uFnStopLeanLeft, &StopLeanLeft_Params, nullptr);
};

// Function OLGame.OLPlayerInput.StartLeanRight
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::StartLeanRight()
{
	static UFunction* uFnStartLeanRight = nullptr;

	if (!uFnStartLeanRight)
	{
		uFnStartLeanRight = UFunction::FindFunction("Function OLGame.OLPlayerInput.StartLeanRight");
	}

	UOLPlayerInput_execStartLeanRight_Params StartLeanRight_Params;
	memset(&StartLeanRight_Params, 0, sizeof(StartLeanRight_Params));

	this->ProcessEvent(uFnStartLeanRight, &StartLeanRight_Params, nullptr);
};

// Function OLGame.OLPlayerInput.StartLeanLeft
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::StartLeanLeft()
{
	static UFunction* uFnStartLeanLeft = nullptr;

	if (!uFnStartLeanLeft)
	{
		uFnStartLeanLeft = UFunction::FindFunction("Function OLGame.OLPlayerInput.StartLeanLeft");
	}

	UOLPlayerInput_execStartLeanLeft_Params StartLeanLeft_Params;
	memset(&StartLeanLeft_Params, 0, sizeof(StartLeanLeft_Params));

	this->ProcessEvent(uFnStartLeanLeft, &StartLeanLeft_Params, nullptr);
};

// Function OLGame.OLPlayerInput.ToggleDuck
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::ToggleDuck()
{
	static UFunction* uFnToggleDuck = nullptr;

	if (!uFnToggleDuck)
	{
		uFnToggleDuck = UFunction::FindFunction("Function OLGame.OLPlayerInput.ToggleDuck");
	}

	UOLPlayerInput_execToggleDuck_Params ToggleDuck_Params;
	memset(&ToggleDuck_Params, 0, sizeof(ToggleDuck_Params));

	this->ProcessEvent(uFnToggleDuck, &ToggleDuck_Params, nullptr);
};

// Function OLGame.OLPlayerInput.UnDuck
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::UnDuck()
{
	static UFunction* uFnUnDuck = nullptr;

	if (!uFnUnDuck)
	{
		uFnUnDuck = UFunction::FindFunction("Function OLGame.OLPlayerInput.UnDuck");
	}

	UOLPlayerInput_execUnDuck_Params UnDuck_Params;
	memset(&UnDuck_Params, 0, sizeof(UnDuck_Params));

	this->ProcessEvent(uFnUnDuck, &UnDuck_Params, nullptr);
};

// Function OLGame.OLPlayerInput.Duck
// [0x00020302] (FUNC_Defined | FUNC_Simulated | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::Duck()
{
	static UFunction* uFnDuck = nullptr;

	if (!uFnDuck)
	{
		uFnDuck = UFunction::FindFunction("Function OLGame.OLPlayerInput.Duck");
	}

	UOLPlayerInput_execDuck_Params Duck_Params;
	memset(&Duck_Params, 0, sizeof(Duck_Params));

	this->ProcessEvent(uFnDuck, &Duck_Params, nullptr);
};

// Function OLGame.OLPlayerInput.ResetInput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLPlayerInput::ResetInput()
{
	static UFunction* uFnResetInput = nullptr;

	if (!uFnResetInput)
	{
		uFnResetInput = UFunction::FindFunction("Function OLGame.OLPlayerInput.ResetInput");
	}

	UOLPlayerInput_execResetInput_Params ResetInput_Params;
	memset(&ResetInput_Params, 0, sizeof(ResetInput_Params));

	uFnResetInput->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetInput, &ResetInput_Params, nullptr);
	uFnResetInput->FunctionFlags |= 0x400;
};

// Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLProfileSettings::AutoDetectPerformanceSettings()
{
	static UFunction* uFnAutoDetectPerformanceSettings = nullptr;

	if (!uFnAutoDetectPerformanceSettings)
	{
		uFnAutoDetectPerformanceSettings = UFunction::FindFunction("Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings");
	}

	UOLProfileSettings_execAutoDetectPerformanceSettings_Params AutoDetectPerformanceSettings_Params;
	memset(&AutoDetectPerformanceSettings_Params, 0, sizeof(AutoDetectPerformanceSettings_Params));

	uFnAutoDetectPerformanceSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAutoDetectPerformanceSettings, &AutoDetectPerformanceSettings_Params, nullptr);
	uFnAutoDetectPerformanceSettings->FunctionFlags |= 0x400;
};

// Function OLGame.OLProfileSettings.MatchMonitorResolution
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bLimitForPerformance           (CPF_Parm)

void UOLProfileSettings::MatchMonitorResolution(bool bLimitForPerformance)
{
	static UFunction* uFnMatchMonitorResolution = nullptr;

	if (!uFnMatchMonitorResolution)
	{
		uFnMatchMonitorResolution = UFunction::FindFunction("Function OLGame.OLProfileSettings.MatchMonitorResolution");
	}

	UOLProfileSettings_execMatchMonitorResolution_Params MatchMonitorResolution_Params;
	memset(&MatchMonitorResolution_Params, 0, sizeof(MatchMonitorResolution_Params));
	MatchMonitorResolution_Params.bLimitForPerformance = bLimitForPerformance;

	uFnMatchMonitorResolution->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMatchMonitorResolution, &MatchMonitorResolution_Params, nullptr);
	uFnMatchMonitorResolution->FunctionFlags |= 0x400;
};

// Function OLGame.OLProfileSettings.SetLanguageFromSteam
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLProfileSettings::SetLanguageFromSteam()
{
	static UFunction* uFnSetLanguageFromSteam = nullptr;

	if (!uFnSetLanguageFromSteam)
	{
		uFnSetLanguageFromSteam = UFunction::FindFunction("Function OLGame.OLProfileSettings.SetLanguageFromSteam");
	}

	UOLProfileSettings_execSetLanguageFromSteam_Params SetLanguageFromSteam_Params;
	memset(&SetLanguageFromSteam_Params, 0, sizeof(SetLanguageFromSteam_Params));

	uFnSetLanguageFromSteam->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLanguageFromSteam, &SetLanguageFromSteam_Params, nullptr);
	uFnSetLanguageFromSteam->FunctionFlags |= 0x400;
};

// Function OLGame.OLProfileSettings.SetToDefaults
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLProfileSettings::eventSetToDefaults()
{
	static UFunction* uFnSetToDefaults = nullptr;

	if (!uFnSetToDefaults)
	{
		uFnSetToDefaults = UFunction::FindFunction("Function OLGame.OLProfileSettings.SetToDefaults");
	}

	UOLProfileSettings_eventSetToDefaults_Params SetToDefaults_Params;
	memset(&SetToDefaults_Params, 0, sizeof(SetToDefaults_Params));

	uFnSetToDefaults->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetToDefaults, &SetToDefaults_Params, nullptr);
	uFnSetToDefaults->FunctionFlags |= 0x400;
};

// Function OLGame.OLProfileSettings.GetProfileSettingValues
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ProfileSettingId               (CPF_Parm)
// TArray<struct FName>           Values                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOLProfileSettings::GetProfileSettingValues(int32_t ProfileSettingId, TArray<struct FName>& Values)
{
	static UFunction* uFnGetProfileSettingValues = nullptr;

	if (!uFnGetProfileSettingValues)
	{
		uFnGetProfileSettingValues = UFunction::FindFunction("Function OLGame.OLProfileSettings.GetProfileSettingValues");
	}

	UOLProfileSettings_execGetProfileSettingValues_Params GetProfileSettingValues_Params;
	memset(&GetProfileSettingValues_Params, 0, sizeof(GetProfileSettingValues_Params));
	memcpy_s(&GetProfileSettingValues_Params.ProfileSettingId, sizeof(GetProfileSettingValues_Params.ProfileSettingId), &ProfileSettingId, sizeof(ProfileSettingId));
	memcpy_s(&GetProfileSettingValues_Params.Values, sizeof(GetProfileSettingValues_Params.Values), &Values, sizeof(Values));

	uFnGetProfileSettingValues->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetProfileSettingValues, &GetProfileSettingValues_Params, nullptr);
	uFnGetProfileSettingValues->FunctionFlags |= 0x400;

	memcpy_s(&Values, sizeof(Values), &GetProfileSettingValues_Params.Values, sizeof(GetProfileSettingValues_Params.Values));

	return GetProfileSettingValues_Params.ReturnValue;
};

// Function OLGame.OLProfileSettings.GetGammaSetting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UOLProfileSettings::GetGammaSetting()
{
	static UFunction* uFnGetGammaSetting = nullptr;

	if (!uFnGetGammaSetting)
	{
		uFnGetGammaSetting = UFunction::FindFunction("Function OLGame.OLProfileSettings.GetGammaSetting");
	}

	UOLProfileSettings_execGetGammaSetting_Params GetGammaSetting_Params;
	memset(&GetGammaSetting_Params, 0, sizeof(GetGammaSetting_Params));

	this->ProcessEvent(uFnGetGammaSetting, &GetGammaSetting_Params, nullptr);

	return GetGammaSetting_Params.ReturnValue;
};

// Function OLGame.OLPushableObject.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLPushableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLPushableObject.OnToggle");
	}

	AOLPushableObject_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLSeqAct_Checkpoint.Activated
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLSeqAct_Checkpoint::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function OLGame.OLSeqAct_Checkpoint.Activated");
	}

	UOLSeqAct_Checkpoint_eventActivated_Params Activated_Params;
	memset(&Activated_Params, 0, sizeof(Activated_Params));

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function OLGame.OLSeqAct_Checkpoint.GetCheckpointFromName
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLCheckpoint*           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   CPName                         (CPF_Parm)

class AOLCheckpoint* UOLSeqAct_Checkpoint::GetCheckpointFromName(struct FName CPName)
{
	static UFunction* uFnGetCheckpointFromName = nullptr;

	if (!uFnGetCheckpointFromName)
	{
		uFnGetCheckpointFromName = UFunction::FindFunction("Function OLGame.OLSeqAct_Checkpoint.GetCheckpointFromName");
	}

	UOLSeqAct_Checkpoint_execGetCheckpointFromName_Params GetCheckpointFromName_Params;
	memset(&GetCheckpointFromName_Params, 0, sizeof(GetCheckpointFromName_Params));
	memcpy_s(&GetCheckpointFromName_Params.CPName, sizeof(GetCheckpointFromName_Params.CPName), &CPName, sizeof(CPName));

	uFnGetCheckpointFromName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetCheckpointFromName, &GetCheckpointFromName_Params, nullptr);
	uFnGetCheckpointFromName->FunctionFlags |= 0x400;

	return GetCheckpointFromName_Params.ReturnValue;
};

// Function OLGame.OLSeqAct_Checkpoint.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqAct_Checkpoint::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqAct_Checkpoint.GetObjClassVersion");
	}

	UOLSeqAct_Checkpoint_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqAct_Checkpoint::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSoundConnector.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLSoundConnector::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLSoundConnector.OnToggle");
	}

	AOLSoundConnector_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSoundEnvironmentManager* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOLSoundEnvironmentManager* UOLSoundEnvironmentManager::GetSoundEnvManager()
{
	static UFunction* uFnGetSoundEnvManager = nullptr;

	if (!uFnGetSoundEnvManager)
	{
		uFnGetSoundEnvManager = UFunction::FindFunction("Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager");
	}

	UOLSoundEnvironmentManager_execGetSoundEnvManager_Params GetSoundEnvManager_Params;
	memset(&GetSoundEnvManager_Params, 0, sizeof(GetSoundEnvManager_Params));

	uFnGetSoundEnvManager->FunctionFlags &= ~0x400;
	UOLSoundEnvironmentManager::StaticClass()->ProcessEvent(uFnGetSoundEnvManager, &GetSoundEnvManager_Params, nullptr);
	uFnGetSoundEnvManager->FunctionFlags |= 0x400;

	return GetSoundEnvManager_Params.ReturnValue;
};

// Function OLGame.OLSoundEnvironmentManager.ExitAllTouchingVolumes
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLSoundEnvironmentManager::ExitAllTouchingVolumes()
{
	static UFunction* uFnExitAllTouchingVolumes = nullptr;

	if (!uFnExitAllTouchingVolumes)
	{
		uFnExitAllTouchingVolumes = UFunction::FindFunction("Function OLGame.OLSoundEnvironmentManager.ExitAllTouchingVolumes");
	}

	UOLSoundEnvironmentManager_execExitAllTouchingVolumes_Params ExitAllTouchingVolumes_Params;
	memset(&ExitAllTouchingVolumes_Params, 0, sizeof(ExitAllTouchingVolumes_Params));

	uFnExitAllTouchingVolumes->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnExitAllTouchingVolumes, &ExitAllTouchingVolumes_Params, nullptr);
	uFnExitAllTouchingVolumes->FunctionFlags |= 0x400;
};

// Function OLGame.OLSoundEnvironmentManager.Cleanup
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLSoundEnvironmentManager::Cleanup()
{
	static UFunction* uFnCleanup = nullptr;

	if (!uFnCleanup)
	{
		uFnCleanup = UFunction::FindFunction("Function OLGame.OLSoundEnvironmentManager.Cleanup");
	}

	UOLSoundEnvironmentManager_execCleanup_Params Cleanup_Params;
	memset(&Cleanup_Params, 0, sizeof(Cleanup_Params));

	uFnCleanup->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCleanup, &Cleanup_Params, nullptr);
	uFnCleanup->FunctionFlags |= 0x400;
};

// Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLSoundEnvironmentVolume::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay");
	}

	AOLSoundEnvironmentVolume_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLTutorialManager.Clear
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLTutorialManager::Clear()
{
	static UFunction* uFnClear = nullptr;

	if (!uFnClear)
	{
		uFnClear = UFunction::FindFunction("Function OLGame.OLTutorialManager.Clear");
	}

	UOLTutorialManager_execClear_Params Clear_Params;
	memset(&Clear_Params, 0, sizeof(Clear_Params));

	uFnClear->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClear, &Clear_Params, nullptr);
	uFnClear->FunctionFlags |= 0x400;
};

// Function OLGame.OLUtils.GetOLPC
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLPlayerController*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLPlayerController* UOLUtils::GetOLPC()
{
	static UFunction* uFnGetOLPC = nullptr;

	if (!uFnGetOLPC)
	{
		uFnGetOLPC = UFunction::FindFunction("Function OLGame.OLUtils.GetOLPC");
	}

	UOLUtils_execGetOLPC_Params GetOLPC_Params;
	memset(&GetOLPC_Params, 0, sizeof(GetOLPC_Params));

	uFnGetOLPC->FunctionFlags &= ~0x400;
	UOLUtils::StaticClass()->ProcessEvent(uFnGetOLPC, &GetOLPC_Params, nullptr);
	uFnGetOLPC->FunctionFlags |= 0x400;

	return GetOLPC_Params.ReturnValue;
};

// Function OLGame.OLUtils.IsBindableKey
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ButtonName                     (CPF_Parm)

bool UOLUtils::IsBindableKey(struct FName ButtonName)
{
	static UFunction* uFnIsBindableKey = nullptr;

	if (!uFnIsBindableKey)
	{
		uFnIsBindableKey = UFunction::FindFunction("Function OLGame.OLUtils.IsBindableKey");
	}

	UOLUtils_execIsBindableKey_Params IsBindableKey_Params;
	memset(&IsBindableKey_Params, 0, sizeof(IsBindableKey_Params));
	memcpy_s(&IsBindableKey_Params.ButtonName, sizeof(IsBindableKey_Params.ButtonName), &ButtonName, sizeof(ButtonName));

	uFnIsBindableKey->FunctionFlags &= ~0x400;
	UOLUtils::StaticClass()->ProcessEvent(uFnIsBindableKey, &IsBindableKey_Params, nullptr);
	uFnIsBindableKey->FunctionFlags |= 0x400;

	return IsBindableKey_Params.ReturnValue;
};

// Function OLGame.OLUtils.IsPlayingDLC
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUtils::IsPlayingDLC()
{
	static UFunction* uFnIsPlayingDLC = nullptr;

	if (!uFnIsPlayingDLC)
	{
		uFnIsPlayingDLC = UFunction::FindFunction("Function OLGame.OLUtils.IsPlayingDLC");
	}

	UOLUtils_execIsPlayingDLC_Params IsPlayingDLC_Params;
	memset(&IsPlayingDLC_Params, 0, sizeof(IsPlayingDLC_Params));

	uFnIsPlayingDLC->FunctionFlags &= ~0x400;
	UOLUtils::StaticClass()->ProcessEvent(uFnIsPlayingDLC, &IsPlayingDLC_Params, nullptr);
	uFnIsPlayingDLC->FunctionFlags |= 0x400;

	return IsPlayingDLC_Params.ReturnValue;
};

// Function OLGame.OLUtils.IsDLCInstalled
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUtils::IsDLCInstalled()
{
	static UFunction* uFnIsDLCInstalled = nullptr;

	if (!uFnIsDLCInstalled)
	{
		uFnIsDLCInstalled = UFunction::FindFunction("Function OLGame.OLUtils.IsDLCInstalled");
	}

	UOLUtils_execIsDLCInstalled_Params IsDLCInstalled_Params;
	memset(&IsDLCInstalled_Params, 0, sizeof(IsDLCInstalled_Params));

	uFnIsDLCInstalled->FunctionFlags &= ~0x400;
	UOLUtils::StaticClass()->ProcessEvent(uFnIsDLCInstalled, &IsDLCInstalled_Params, nullptr);
	uFnIsDLCInstalled->FunctionFlags |= 0x400;

	return IsDLCInstalled_Params.ReturnValue;
};

// Function OLGame.OLUtils.IsConsole
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUtils::IsConsole()
{
	static UFunction* uFnIsConsole = nullptr;

	if (!uFnIsConsole)
	{
		uFnIsConsole = UFunction::FindFunction("Function OLGame.OLUtils.IsConsole");
	}

	UOLUtils_execIsConsole_Params IsConsole_Params;
	memset(&IsConsole_Params, 0, sizeof(IsConsole_Params));

	uFnIsConsole->FunctionFlags &= ~0x400;
	UOLUtils::StaticClass()->ProcessEvent(uFnIsConsole, &IsConsole_Params, nullptr);
	uFnIsConsole->FunctionFlags |= 0x400;

	return IsConsole_Params.ReturnValue;
};

// Function OLGame.OLUtils.IsPS4
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUtils::IsPS4()
{
	static UFunction* uFnIsPS4 = nullptr;

	if (!uFnIsPS4)
	{
		uFnIsPS4 = UFunction::FindFunction("Function OLGame.OLUtils.IsPS4");
	}

	UOLUtils_execIsPS4_Params IsPS4_Params;
	memset(&IsPS4_Params, 0, sizeof(IsPS4_Params));

	uFnIsPS4->FunctionFlags &= ~0x400;
	UOLUtils::StaticClass()->ProcessEvent(uFnIsPS4, &IsPS4_Params, nullptr);
	uFnIsPS4->FunctionFlags |= 0x400;

	return IsPS4_Params.ReturnValue;
};

// Function OLGame.OLVoiceManager.DisplayDebug
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void UOLVoiceManager::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLVoiceManager.DisplayDebug");
	}

	UOLVoiceManager_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.HUD, sizeof(DisplayDebug_Params.HUD), &HUD, sizeof(HUD));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLWaitPointComponent.ReturnWaitPoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FWaitPoint              Point                          (CPF_Parm)

void UOLWaitPointComponent::ReturnWaitPoint(struct FWaitPoint Point)
{
	static UFunction* uFnReturnWaitPoint = nullptr;

	if (!uFnReturnWaitPoint)
	{
		uFnReturnWaitPoint = UFunction::FindFunction("Function OLGame.OLWaitPointComponent.ReturnWaitPoint");
	}

	UOLWaitPointComponent_execReturnWaitPoint_Params ReturnWaitPoint_Params;
	memset(&ReturnWaitPoint_Params, 0, sizeof(ReturnWaitPoint_Params));
	memcpy_s(&ReturnWaitPoint_Params.Point, sizeof(ReturnWaitPoint_Params.Point), &Point, sizeof(Point));

	uFnReturnWaitPoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReturnWaitPoint, &ReturnWaitPoint_Params, nullptr);
	uFnReturnWaitPoint->FunctionFlags |= 0x400;
};

// Function OLGame.OLWaitPointComponent.GrabBestWaitPoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FWaitPoint              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bReversed                      (CPF_Parm)

struct FWaitPoint UOLWaitPointComponent::GrabBestWaitPoint(bool bReversed)
{
	static UFunction* uFnGrabBestWaitPoint = nullptr;

	if (!uFnGrabBestWaitPoint)
	{
		uFnGrabBestWaitPoint = UFunction::FindFunction("Function OLGame.OLWaitPointComponent.GrabBestWaitPoint");
	}

	UOLWaitPointComponent_execGrabBestWaitPoint_Params GrabBestWaitPoint_Params;
	memset(&GrabBestWaitPoint_Params, 0, sizeof(GrabBestWaitPoint_Params));
	GrabBestWaitPoint_Params.bReversed = bReversed;

	uFnGrabBestWaitPoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGrabBestWaitPoint, &GrabBestWaitPoint_Params, nullptr);
	uFnGrabBestWaitPoint->FunctionFlags |= 0x400;

	return GrabBestWaitPoint_Params.ReturnValue;
};

// Function OLGame.OLWaitPointComponent.GetWaitPointForwardVector
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FWaitPoint              Point                          (CPF_Parm)

struct FVector UOLWaitPointComponent::GetWaitPointForwardVector(struct FWaitPoint Point)
{
	static UFunction* uFnGetWaitPointForwardVector = nullptr;

	if (!uFnGetWaitPointForwardVector)
	{
		uFnGetWaitPointForwardVector = UFunction::FindFunction("Function OLGame.OLWaitPointComponent.GetWaitPointForwardVector");
	}

	UOLWaitPointComponent_execGetWaitPointForwardVector_Params GetWaitPointForwardVector_Params;
	memset(&GetWaitPointForwardVector_Params, 0, sizeof(GetWaitPointForwardVector_Params));
	memcpy_s(&GetWaitPointForwardVector_Params.Point, sizeof(GetWaitPointForwardVector_Params.Point), &Point, sizeof(Point));

	uFnGetWaitPointForwardVector->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetWaitPointForwardVector, &GetWaitPointForwardVector_Params, nullptr);
	uFnGetWaitPointForwardVector->FunctionFlags |= 0x400;

	return GetWaitPointForwardVector_Params.ReturnValue;
};

// Function OLGame.OLBot.OnAIMoveToActor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_AIMoveToActor*   Action                         (CPF_Parm)

void AOLBot::OnAIMoveToActor(class USeqAct_AIMoveToActor* Action)
{
	static UFunction* uFnOnAIMoveToActor = nullptr;

	if (!uFnOnAIMoveToActor)
	{
		uFnOnAIMoveToActor = UFunction::FindFunction("Function OLGame.OLBot.OnAIMoveToActor");
	}

	AOLBot_execOnAIMoveToActor_Params OnAIMoveToActor_Params;
	memset(&OnAIMoveToActor_Params, 0, sizeof(OnAIMoveToActor_Params));
	memcpy_s(&OnAIMoveToActor_Params.Action, sizeof(OnAIMoveToActor_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnAIMoveToActor, &OnAIMoveToActor_Params, nullptr);
};

// Function OLGame.OLBot.FinishMatinee
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::FinishMatinee()
{
	static UFunction* uFnFinishMatinee = nullptr;

	if (!uFnFinishMatinee)
	{
		uFnFinishMatinee = UFunction::FindFunction("Function OLGame.OLBot.FinishMatinee");
	}

	AOLBot_execFinishMatinee_Params FinishMatinee_Params;
	memset(&FinishMatinee_Params, 0, sizeof(FinishMatinee_Params));

	this->ProcessEvent(uFnFinishMatinee, &FinishMatinee_Params, nullptr);
};

// Function OLGame.OLBot.BeginMatinee
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::BeginMatinee()
{
	static UFunction* uFnBeginMatinee = nullptr;

	if (!uFnBeginMatinee)
	{
		uFnBeginMatinee = UFunction::FindFunction("Function OLGame.OLBot.BeginMatinee");
	}

	AOLBot_execBeginMatinee_Params BeginMatinee_Params;
	memset(&BeginMatinee_Params, 0, sizeof(BeginMatinee_Params));

	this->ProcessEvent(uFnBeginMatinee, &BeginMatinee_Params, nullptr);
};

// Function OLGame.OLBot.OnAIInvestigatePoint
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_AIInvestigatePoint* Action                         (CPF_Parm)

void AOLBot::OnAIInvestigatePoint(class UOLSeqAct_AIInvestigatePoint* Action)
{
	static UFunction* uFnOnAIInvestigatePoint = nullptr;

	if (!uFnOnAIInvestigatePoint)
	{
		uFnOnAIInvestigatePoint = UFunction::FindFunction("Function OLGame.OLBot.OnAIInvestigatePoint");
	}

	AOLBot_execOnAIInvestigatePoint_Params OnAIInvestigatePoint_Params;
	memset(&OnAIInvestigatePoint_Params, 0, sizeof(OnAIInvestigatePoint_Params));
	memcpy_s(&OnAIInvestigatePoint_Params.Action, sizeof(OnAIInvestigatePoint_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnAIInvestigatePoint, &OnAIInvestigatePoint_Params, nullptr);
};

// Function OLGame.OLBot.ToggleAIAttackOnProximity
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void AOLBot::eventToggleAIAttackOnProximity(bool bEnable)
{
	static UFunction* uFnToggleAIAttackOnProximity = nullptr;

	if (!uFnToggleAIAttackOnProximity)
	{
		uFnToggleAIAttackOnProximity = UFunction::FindFunction("Function OLGame.OLBot.ToggleAIAttackOnProximity");
	}

	AOLBot_eventToggleAIAttackOnProximity_Params ToggleAIAttackOnProximity_Params;
	memset(&ToggleAIAttackOnProximity_Params, 0, sizeof(ToggleAIAttackOnProximity_Params));
	ToggleAIAttackOnProximity_Params.bEnable = bEnable;

	this->ProcessEvent(uFnToggleAIAttackOnProximity, &ToggleAIAttackOnProximity_Params, nullptr);
};

// Function OLGame.OLBot.OnToggleAIAttackOnProximity
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_ToggleAIAttackOnProximity* Action                         (CPF_Parm)

void AOLBot::OnToggleAIAttackOnProximity(class UOLSeqAct_ToggleAIAttackOnProximity* Action)
{
	static UFunction* uFnOnToggleAIAttackOnProximity = nullptr;

	if (!uFnOnToggleAIAttackOnProximity)
	{
		uFnOnToggleAIAttackOnProximity = UFunction::FindFunction("Function OLGame.OLBot.OnToggleAIAttackOnProximity");
	}

	AOLBot_execOnToggleAIAttackOnProximity_Params OnToggleAIAttackOnProximity_Params;
	memset(&OnToggleAIAttackOnProximity_Params, 0, sizeof(OnToggleAIAttackOnProximity_Params));
	memcpy_s(&OnToggleAIAttackOnProximity_Params.Action, sizeof(OnToggleAIAttackOnProximity_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggleAIAttackOnProximity, &OnToggleAIAttackOnProximity_Params, nullptr);
};

// Function OLGame.OLBot.ToggleAIAlwaysSeePlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void AOLBot::ToggleAIAlwaysSeePlayer(bool bEnable)
{
	static UFunction* uFnToggleAIAlwaysSeePlayer = nullptr;

	if (!uFnToggleAIAlwaysSeePlayer)
	{
		uFnToggleAIAlwaysSeePlayer = UFunction::FindFunction("Function OLGame.OLBot.ToggleAIAlwaysSeePlayer");
	}

	AOLBot_execToggleAIAlwaysSeePlayer_Params ToggleAIAlwaysSeePlayer_Params;
	memset(&ToggleAIAlwaysSeePlayer_Params, 0, sizeof(ToggleAIAlwaysSeePlayer_Params));
	ToggleAIAlwaysSeePlayer_Params.bEnable = bEnable;

	this->ProcessEvent(uFnToggleAIAlwaysSeePlayer, &ToggleAIAlwaysSeePlayer_Params, nullptr);
};

// Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action                         (CPF_Parm)

void AOLBot::OnToggleAIAlwaysSeePlayer(class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action)
{
	static UFunction* uFnOnToggleAIAlwaysSeePlayer = nullptr;

	if (!uFnOnToggleAIAlwaysSeePlayer)
	{
		uFnOnToggleAIAlwaysSeePlayer = UFunction::FindFunction("Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer");
	}

	AOLBot_execOnToggleAIAlwaysSeePlayer_Params OnToggleAIAlwaysSeePlayer_Params;
	memset(&OnToggleAIAlwaysSeePlayer_Params, 0, sizeof(OnToggleAIAlwaysSeePlayer_Params));
	memcpy_s(&OnToggleAIAlwaysSeePlayer_Params.Action, sizeof(OnToggleAIAlwaysSeePlayer_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggleAIAlwaysSeePlayer, &OnToggleAIAlwaysSeePlayer_Params, nullptr);
};

// Function OLGame.OLBot.IgnoreTarget
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Time                           (CPF_Parm)

void AOLBot::eventIgnoreTarget(float Time)
{
	static UFunction* uFnIgnoreTarget = nullptr;

	if (!uFnIgnoreTarget)
	{
		uFnIgnoreTarget = UFunction::FindFunction("Function OLGame.OLBot.IgnoreTarget");
	}

	AOLBot_eventIgnoreTarget_Params IgnoreTarget_Params;
	memset(&IgnoreTarget_Params, 0, sizeof(IgnoreTarget_Params));
	memcpy_s(&IgnoreTarget_Params.Time, sizeof(IgnoreTarget_Params.Time), &Time, sizeof(Time));

	this->ProcessEvent(uFnIgnoreTarget, &IgnoreTarget_Params, nullptr);
};

// Function OLGame.OLBot.ToggleAIIgnorePlayer
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void AOLBot::eventToggleAIIgnorePlayer(bool bEnable)
{
	static UFunction* uFnToggleAIIgnorePlayer = nullptr;

	if (!uFnToggleAIIgnorePlayer)
	{
		uFnToggleAIIgnorePlayer = UFunction::FindFunction("Function OLGame.OLBot.ToggleAIIgnorePlayer");
	}

	AOLBot_eventToggleAIIgnorePlayer_Params ToggleAIIgnorePlayer_Params;
	memset(&ToggleAIIgnorePlayer_Params, 0, sizeof(ToggleAIIgnorePlayer_Params));
	ToggleAIIgnorePlayer_Params.bEnable = bEnable;

	this->ProcessEvent(uFnToggleAIIgnorePlayer, &ToggleAIIgnorePlayer_Params, nullptr);
};

// Function OLGame.OLBot.OnToggleAIIgnorePlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_ToggleAIIgnorePlayer* Action                         (CPF_Parm)

void AOLBot::OnToggleAIIgnorePlayer(class UOLSeqAct_ToggleAIIgnorePlayer* Action)
{
	static UFunction* uFnOnToggleAIIgnorePlayer = nullptr;

	if (!uFnOnToggleAIIgnorePlayer)
	{
		uFnOnToggleAIIgnorePlayer = UFunction::FindFunction("Function OLGame.OLBot.OnToggleAIIgnorePlayer");
	}

	AOLBot_execOnToggleAIIgnorePlayer_Params OnToggleAIIgnorePlayer_Params;
	memset(&OnToggleAIIgnorePlayer_Params, 0, sizeof(OnToggleAIIgnorePlayer_Params));
	memcpy_s(&OnToggleAIIgnorePlayer_Params.Action, sizeof(OnToggleAIIgnorePlayer_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggleAIIgnorePlayer, &OnToggleAIIgnorePlayer_Params, nullptr);
};

// Function OLGame.OLBot.OnAIAbortPatrol
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_AIAbortPatrol* Action                         (CPF_Parm)

void AOLBot::OnAIAbortPatrol(class UOLSeqAct_AIAbortPatrol* Action)
{
	static UFunction* uFnOnAIAbortPatrol = nullptr;

	if (!uFnOnAIAbortPatrol)
	{
		uFnOnAIAbortPatrol = UFunction::FindFunction("Function OLGame.OLBot.OnAIAbortPatrol");
	}

	AOLBot_execOnAIAbortPatrol_Params OnAIAbortPatrol_Params;
	memset(&OnAIAbortPatrol_Params, 0, sizeof(OnAIAbortPatrol_Params));
	memcpy_s(&OnAIAbortPatrol_Params.Action, sizeof(OnAIAbortPatrol_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnAIAbortPatrol, &OnAIAbortPatrol_Params, nullptr);
};

// Function OLGame.OLBot.StopPatrol
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bAbort                         (CPF_OptionalParm | CPF_Parm)

void AOLBot::eventStopPatrol(bool bAbort)
{
	static UFunction* uFnStopPatrol = nullptr;

	if (!uFnStopPatrol)
	{
		uFnStopPatrol = UFunction::FindFunction("Function OLGame.OLBot.StopPatrol");
	}

	AOLBot_eventStopPatrol_Params StopPatrol_Params;
	memset(&StopPatrol_Params, 0, sizeof(StopPatrol_Params));
	StopPatrol_Params.bAbort = bAbort;

	this->ProcessEvent(uFnStopPatrol, &StopPatrol_Params, nullptr);
};

// Function OLGame.OLBot.OnAIStartPatrol
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_AIStartPatrol* Action                         (CPF_Parm)

void AOLBot::OnAIStartPatrol(class UOLSeqAct_AIStartPatrol* Action)
{
	static UFunction* uFnOnAIStartPatrol = nullptr;

	if (!uFnOnAIStartPatrol)
	{
		uFnOnAIStartPatrol = UFunction::FindFunction("Function OLGame.OLBot.OnAIStartPatrol");
	}

	AOLBot_execOnAIStartPatrol_Params OnAIStartPatrol_Params;
	memset(&OnAIStartPatrol_Params, 0, sizeof(OnAIStartPatrol_Params));
	memcpy_s(&OnAIStartPatrol_Params.Action, sizeof(OnAIStartPatrol_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnAIStartPatrol, &OnAIStartPatrol_Params, nullptr);
};

// Function OLGame.OLBot.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLBot::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLBot.DisplayDebug");
	}

	AOLBot_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.HUD, sizeof(DisplayDebug_Params.HUD), &HUD, sizeof(HUD));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLBot.DrawDebugStates
// [0x00422400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 anObject                       (CPF_Parm)
// class UCanvas*                 aCanvas                        (CPF_Parm)
// float                          XL                             (CPF_Parm)
// float                          XPos                           (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AOLBot::DrawDebugStates(class UObject* anObject, class UCanvas* aCanvas, float XL, float XPos, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDrawDebugStates = nullptr;

	if (!uFnDrawDebugStates)
	{
		uFnDrawDebugStates = UFunction::FindFunction("Function OLGame.OLBot.DrawDebugStates");
	}

	AOLBot_execDrawDebugStates_Params DrawDebugStates_Params;
	memset(&DrawDebugStates_Params, 0, sizeof(DrawDebugStates_Params));
	memcpy_s(&DrawDebugStates_Params.anObject, sizeof(DrawDebugStates_Params.anObject), &anObject, sizeof(anObject));
	memcpy_s(&DrawDebugStates_Params.aCanvas, sizeof(DrawDebugStates_Params.aCanvas), &aCanvas, sizeof(aCanvas));
	memcpy_s(&DrawDebugStates_Params.XL, sizeof(DrawDebugStates_Params.XL), &XL, sizeof(XL));
	memcpy_s(&DrawDebugStates_Params.XPos, sizeof(DrawDebugStates_Params.XPos), &XPos, sizeof(XPos));
	memcpy_s(&DrawDebugStates_Params.out_YL, sizeof(DrawDebugStates_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DrawDebugStates_Params.out_YPos, sizeof(DrawDebugStates_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	uFnDrawDebugStates->FunctionFlags &= ~0x400;
	AOLBot::StaticClass()->ProcessEvent(uFnDrawDebugStates, &DrawDebugStates_Params, nullptr);
	uFnDrawDebugStates->FunctionFlags |= 0x400;

	memcpy_s(&out_YL, sizeof(out_YL), &DrawDebugStates_Params.out_YL, sizeof(DrawDebugStates_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DrawDebugStates_Params.out_YPos, sizeof(DrawDebugStates_Params.out_YPos));
};

// Function OLGame.OLBot.DebugMessagePlayer
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  msg                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AOLBot::eventDebugMessagePlayer(class FString msg)
{
	static UFunction* uFnDebugMessagePlayer = nullptr;

	if (!uFnDebugMessagePlayer)
	{
		uFnDebugMessagePlayer = UFunction::FindFunction("Function OLGame.OLBot.DebugMessagePlayer");
	}

	AOLBot_eventDebugMessagePlayer_Params DebugMessagePlayer_Params;
	memset(&DebugMessagePlayer_Params, 0, sizeof(DebugMessagePlayer_Params));
	memcpy_s(&DebugMessagePlayer_Params.msg, sizeof(DebugMessagePlayer_Params.msg), &msg, sizeof(msg));

	this->ProcessEvent(uFnDebugMessagePlayer, &DebugMessagePlayer_Params, nullptr);
};

// Function OLGame.OLBot.ClearDestination
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::ClearDestination()
{
	static UFunction* uFnClearDestination = nullptr;

	if (!uFnClearDestination)
	{
		uFnClearDestination = UFunction::FindFunction("Function OLGame.OLBot.ClearDestination");
	}

	AOLBot_execClearDestination_Params ClearDestination_Params;
	memset(&ClearDestination_Params, 0, sizeof(ClearDestination_Params));

	this->ProcessEvent(uFnClearDestination, &ClearDestination_Params, nullptr);
};

// Function OLGame.OLBot.ClearDisturbance
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventClearDisturbance()
{
	static UFunction* uFnClearDisturbance = nullptr;

	if (!uFnClearDisturbance)
	{
		uFnClearDisturbance = UFunction::FindFunction("Function OLGame.OLBot.ClearDisturbance");
	}

	AOLBot_eventClearDisturbance_Params ClearDisturbance_Params;
	memset(&ClearDisturbance_Params, 0, sizeof(ClearDisturbance_Params));

	this->ProcessEvent(uFnClearDisturbance, &ClearDisturbance_Params, nullptr);
};

// Function OLGame.OLBot.ClearInvestigation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::ClearInvestigation()
{
	static UFunction* uFnClearInvestigation = nullptr;

	if (!uFnClearInvestigation)
	{
		uFnClearInvestigation = UFunction::FindFunction("Function OLGame.OLBot.ClearInvestigation");
	}

	AOLBot_execClearInvestigation_Params ClearInvestigation_Params;
	memset(&ClearInvestigation_Params, 0, sizeof(ClearInvestigation_Params));

	uFnClearInvestigation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearInvestigation, &ClearInvestigation_Params, nullptr);
	uFnClearInvestigation->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.TriggerVisualDisturbance
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 DisturbanceLocation            (CPF_Parm)
// bool                           bFromGroup                     (CPF_OptionalParm | CPF_Parm)

void AOLBot::TriggerVisualDisturbance(struct FVector DisturbanceLocation, bool bFromGroup)
{
	static UFunction* uFnTriggerVisualDisturbance = nullptr;

	if (!uFnTriggerVisualDisturbance)
	{
		uFnTriggerVisualDisturbance = UFunction::FindFunction("Function OLGame.OLBot.TriggerVisualDisturbance");
	}

	AOLBot_execTriggerVisualDisturbance_Params TriggerVisualDisturbance_Params;
	memset(&TriggerVisualDisturbance_Params, 0, sizeof(TriggerVisualDisturbance_Params));
	memcpy_s(&TriggerVisualDisturbance_Params.DisturbanceLocation, sizeof(TriggerVisualDisturbance_Params.DisturbanceLocation), &DisturbanceLocation, sizeof(DisturbanceLocation));
	TriggerVisualDisturbance_Params.bFromGroup = bFromGroup;

	uFnTriggerVisualDisturbance->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTriggerVisualDisturbance, &TriggerVisualDisturbance_Params, nullptr);
	uFnTriggerVisualDisturbance->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.TriggerAudioDisturbance
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 DisturbanceLocation            (CPF_Parm)
// bool                           bFromGroup                     (CPF_OptionalParm | CPF_Parm)
// bool                           bNewInvestigate                (CPF_OptionalParm | CPF_Parm)
// bool                           bNoTrim                        (CPF_OptionalParm | CPF_Parm)
// bool                           bIgnoreDisturbs                (CPF_OptionalParm | CPF_Parm)

void AOLBot::TriggerAudioDisturbance(struct FVector DisturbanceLocation, bool bFromGroup, bool bNewInvestigate, bool bNoTrim, bool bIgnoreDisturbs)
{
	static UFunction* uFnTriggerAudioDisturbance = nullptr;

	if (!uFnTriggerAudioDisturbance)
	{
		uFnTriggerAudioDisturbance = UFunction::FindFunction("Function OLGame.OLBot.TriggerAudioDisturbance");
	}

	AOLBot_execTriggerAudioDisturbance_Params TriggerAudioDisturbance_Params;
	memset(&TriggerAudioDisturbance_Params, 0, sizeof(TriggerAudioDisturbance_Params));
	memcpy_s(&TriggerAudioDisturbance_Params.DisturbanceLocation, sizeof(TriggerAudioDisturbance_Params.DisturbanceLocation), &DisturbanceLocation, sizeof(DisturbanceLocation));
	TriggerAudioDisturbance_Params.bFromGroup = bFromGroup;
	TriggerAudioDisturbance_Params.bNewInvestigate = bNewInvestigate;
	TriggerAudioDisturbance_Params.bNoTrim = bNoTrim;
	TriggerAudioDisturbance_Params.bIgnoreDisturbs = bIgnoreDisturbs;

	uFnTriggerAudioDisturbance->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTriggerAudioDisturbance, &TriggerAudioDisturbance_Params, nullptr);
	uFnTriggerAudioDisturbance->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.LostTarget
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bAfterChase                    (CPF_Parm)

void AOLBot::LostTarget(bool bAfterChase)
{
	static UFunction* uFnLostTarget = nullptr;

	if (!uFnLostTarget)
	{
		uFnLostTarget = UFunction::FindFunction("Function OLGame.OLBot.LostTarget");
	}

	AOLBot_execLostTarget_Params LostTarget_Params;
	memset(&LostTarget_Params, 0, sizeof(LostTarget_Params));
	LostTarget_Params.bAfterChase = bAfterChase;

	uFnLostTarget->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLostTarget, &LostTarget_Params, nullptr);
	uFnLostTarget->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.IsAtTrimmedDoor
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::IsAtTrimmedDoor()
{
	static UFunction* uFnIsAtTrimmedDoor = nullptr;

	if (!uFnIsAtTrimmedDoor)
	{
		uFnIsAtTrimmedDoor = UFunction::FindFunction("Function OLGame.OLBot.IsAtTrimmedDoor");
	}

	AOLBot_execIsAtTrimmedDoor_Params IsAtTrimmedDoor_Params;
	memset(&IsAtTrimmedDoor_Params, 0, sizeof(IsAtTrimmedDoor_Params));

	uFnIsAtTrimmedDoor->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsAtTrimmedDoor, &IsAtTrimmedDoor_Params, nullptr);
	uFnIsAtTrimmedDoor->FunctionFlags |= 0x400;

	return IsAtTrimmedDoor_Params.ReturnValue;
};

// Function OLGame.OLBot.GetDoorApproachPoint
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLDoor*                 aDoor                          (CPF_Parm)
// struct FVector                 ApproachPoint                  (CPF_Parm | CPF_OutParm)

bool AOLBot::GetDoorApproachPoint(class AOLDoor* aDoor, struct FVector& ApproachPoint)
{
	static UFunction* uFnGetDoorApproachPoint = nullptr;

	if (!uFnGetDoorApproachPoint)
	{
		uFnGetDoorApproachPoint = UFunction::FindFunction("Function OLGame.OLBot.GetDoorApproachPoint");
	}

	AOLBot_execGetDoorApproachPoint_Params GetDoorApproachPoint_Params;
	memset(&GetDoorApproachPoint_Params, 0, sizeof(GetDoorApproachPoint_Params));
	memcpy_s(&GetDoorApproachPoint_Params.aDoor, sizeof(GetDoorApproachPoint_Params.aDoor), &aDoor, sizeof(aDoor));
	memcpy_s(&GetDoorApproachPoint_Params.ApproachPoint, sizeof(GetDoorApproachPoint_Params.ApproachPoint), &ApproachPoint, sizeof(ApproachPoint));

	uFnGetDoorApproachPoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDoorApproachPoint, &GetDoorApproachPoint_Params, nullptr);
	uFnGetDoorApproachPoint->FunctionFlags |= 0x400;

	memcpy_s(&ApproachPoint, sizeof(ApproachPoint), &GetDoorApproachPoint_Params.ApproachPoint, sizeof(GetDoorApproachPoint_Params.ApproachPoint));

	return GetDoorApproachPoint_Params.ReturnValue;
};

// Function OLGame.OLBot.EndDoorTraversal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::EndDoorTraversal()
{
	static UFunction* uFnEndDoorTraversal = nullptr;

	if (!uFnEndDoorTraversal)
	{
		uFnEndDoorTraversal = UFunction::FindFunction("Function OLGame.OLBot.EndDoorTraversal");
	}

	AOLBot_execEndDoorTraversal_Params EndDoorTraversal_Params;
	memset(&EndDoorTraversal_Params, 0, sizeof(EndDoorTraversal_Params));

	uFnEndDoorTraversal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEndDoorTraversal, &EndDoorTraversal_Params, nullptr);
	uFnEndDoorTraversal->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.StartDoorTraversal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bReversed                      (CPF_Parm)

void AOLBot::StartDoorTraversal(bool bReversed)
{
	static UFunction* uFnStartDoorTraversal = nullptr;

	if (!uFnStartDoorTraversal)
	{
		uFnStartDoorTraversal = UFunction::FindFunction("Function OLGame.OLBot.StartDoorTraversal");
	}

	AOLBot_execStartDoorTraversal_Params StartDoorTraversal_Params;
	memset(&StartDoorTraversal_Params, 0, sizeof(StartDoorTraversal_Params));
	StartDoorTraversal_Params.bReversed = bReversed;

	uFnStartDoorTraversal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartDoorTraversal, &StartDoorTraversal_Params, nullptr);
	uFnStartDoorTraversal->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.GetSqueezePoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLSqueezeVolume*        Squeeze                        (CPF_Parm)

struct FVector AOLBot::GetSqueezePoint(class AOLSqueezeVolume* Squeeze)
{
	static UFunction* uFnGetSqueezePoint = nullptr;

	if (!uFnGetSqueezePoint)
	{
		uFnGetSqueezePoint = UFunction::FindFunction("Function OLGame.OLBot.GetSqueezePoint");
	}

	AOLBot_execGetSqueezePoint_Params GetSqueezePoint_Params;
	memset(&GetSqueezePoint_Params, 0, sizeof(GetSqueezePoint_Params));
	memcpy_s(&GetSqueezePoint_Params.Squeeze, sizeof(GetSqueezePoint_Params.Squeeze), &Squeeze, sizeof(Squeeze));

	uFnGetSqueezePoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSqueezePoint, &GetSqueezePoint_Params, nullptr);
	uFnGetSqueezePoint->FunctionFlags |= 0x400;

	return GetSqueezePoint_Params.ReturnValue;
};

// Function OLGame.OLBot.GetClosestPointOnNavMesh
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 PointToCheck                   (CPF_Parm)
// struct FVector                 out_NewPoint                   (CPF_Parm | CPF_OutParm)

bool AOLBot::GetClosestPointOnNavMesh(struct FVector PointToCheck, struct FVector& out_NewPoint)
{
	static UFunction* uFnGetClosestPointOnNavMesh = nullptr;

	if (!uFnGetClosestPointOnNavMesh)
	{
		uFnGetClosestPointOnNavMesh = UFunction::FindFunction("Function OLGame.OLBot.GetClosestPointOnNavMesh");
	}

	AOLBot_execGetClosestPointOnNavMesh_Params GetClosestPointOnNavMesh_Params;
	memset(&GetClosestPointOnNavMesh_Params, 0, sizeof(GetClosestPointOnNavMesh_Params));
	memcpy_s(&GetClosestPointOnNavMesh_Params.PointToCheck, sizeof(GetClosestPointOnNavMesh_Params.PointToCheck), &PointToCheck, sizeof(PointToCheck));
	memcpy_s(&GetClosestPointOnNavMesh_Params.out_NewPoint, sizeof(GetClosestPointOnNavMesh_Params.out_NewPoint), &out_NewPoint, sizeof(out_NewPoint));

	uFnGetClosestPointOnNavMesh->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetClosestPointOnNavMesh, &GetClosestPointOnNavMesh_Params, nullptr);
	uFnGetClosestPointOnNavMesh->FunctionFlags |= 0x400;

	memcpy_s(&out_NewPoint, sizeof(out_NewPoint), &GetClosestPointOnNavMesh_Params.out_NewPoint, sizeof(GetClosestPointOnNavMesh_Params.out_NewPoint));

	return GetClosestPointOnNavMesh_Params.ReturnValue;
};

// Function OLGame.OLBot.MoveAlongPath
// [0x00024408] (FUNC_Latent | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FVector>         PathPoints                     (CPF_Parm | CPF_NeedCtorLink)
// class AActor*                  FocusTarget                    (CPF_OptionalParm | CPF_Parm)

void AOLBot::MoveAlongPath(TArray<struct FVector> PathPoints, class AActor* FocusTarget)
{
	static UFunction* uFnMoveAlongPath = nullptr;

	if (!uFnMoveAlongPath)
	{
		uFnMoveAlongPath = UFunction::FindFunction("Function OLGame.OLBot.MoveAlongPath");
	}

	AOLBot_execMoveAlongPath_Params MoveAlongPath_Params;
	memset(&MoveAlongPath_Params, 0, sizeof(MoveAlongPath_Params));
	memcpy_s(&MoveAlongPath_Params.PathPoints, sizeof(MoveAlongPath_Params.PathPoints), &PathPoints, sizeof(PathPoints));
	memcpy_s(&MoveAlongPath_Params.FocusTarget, sizeof(MoveAlongPath_Params.FocusTarget), &FocusTarget, sizeof(FocusTarget));

	uFnMoveAlongPath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMoveAlongPath, &MoveAlongPath_Params, nullptr);
	uFnMoveAlongPath->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.ClearNextMove
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::ClearNextMove()
{
	static UFunction* uFnClearNextMove = nullptr;

	if (!uFnClearNextMove)
	{
		uFnClearNextMove = UFunction::FindFunction("Function OLGame.OLBot.ClearNextMove");
	}

	AOLBot_execClearNextMove_Params ClearNextMove_Params;
	memset(&ClearNextMove_Params, 0, sizeof(ClearNextMove_Params));

	this->ProcessEvent(uFnClearNextMove, &ClearNextMove_Params, nullptr);
};

// Function OLGame.OLBot.ClearCurrentMove
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventClearCurrentMove()
{
	static UFunction* uFnClearCurrentMove = nullptr;

	if (!uFnClearCurrentMove)
	{
		uFnClearCurrentMove = UFunction::FindFunction("Function OLGame.OLBot.ClearCurrentMove");
	}

	AOLBot_eventClearCurrentMove_Params ClearCurrentMove_Params;
	memset(&ClearCurrentMove_Params, 0, sizeof(ClearCurrentMove_Params));

	this->ProcessEvent(uFnClearCurrentMove, &ClearCurrentMove_Params, nullptr);
};

// Function OLGame.OLBot.StartWaitForDoor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventStartWaitForDoor()
{
	static UFunction* uFnStartWaitForDoor = nullptr;

	if (!uFnStartWaitForDoor)
	{
		uFnStartWaitForDoor = UFunction::FindFunction("Function OLGame.OLBot.StartWaitForDoor");
	}

	AOLBot_eventStartWaitForDoor_Params StartWaitForDoor_Params;
	memset(&StartWaitForDoor_Params, 0, sizeof(StartWaitForDoor_Params));

	this->ProcessEvent(uFnStartWaitForDoor, &StartWaitForDoor_Params, nullptr);
};

// Function OLGame.OLBot.StopMoving
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bAborted                       (CPF_OptionalParm | CPF_Parm)

void AOLBot::StopMoving(bool bAborted)
{
	static UFunction* uFnStopMoving = nullptr;

	if (!uFnStopMoving)
	{
		uFnStopMoving = UFunction::FindFunction("Function OLGame.OLBot.StopMoving");
	}

	AOLBot_execStopMoving_Params StopMoving_Params;
	memset(&StopMoving_Params, 0, sizeof(StopMoving_Params));
	StopMoving_Params.bAborted = bAborted;

	uFnStopMoving->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopMoving, &StopMoving_Params, nullptr);
	uFnStopMoving->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.TargetReachable
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::TargetReachable()
{
	static UFunction* uFnTargetReachable = nullptr;

	if (!uFnTargetReachable)
	{
		uFnTargetReachable = UFunction::FindFunction("Function OLGame.OLBot.TargetReachable");
	}

	AOLBot_execTargetReachable_Params TargetReachable_Params;
	memset(&TargetReachable_Params, 0, sizeof(TargetReachable_Params));

	this->ProcessEvent(uFnTargetReachable, &TargetReachable_Params, nullptr);

	return TargetReachable_Params.ReturnValue;
};

// Function OLGame.OLBot.GetClosestPointToActor
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  ActorToCheck                   (CPF_Parm)
// struct FVector                 NewPoint                       (CPF_Parm | CPF_OutParm)
// float                          NewBuffer                      (CPF_Parm | CPF_OutParm)

bool AOLBot::GetClosestPointToActor(class AActor* ActorToCheck, struct FVector& NewPoint, float& NewBuffer)
{
	static UFunction* uFnGetClosestPointToActor = nullptr;

	if (!uFnGetClosestPointToActor)
	{
		uFnGetClosestPointToActor = UFunction::FindFunction("Function OLGame.OLBot.GetClosestPointToActor");
	}

	AOLBot_execGetClosestPointToActor_Params GetClosestPointToActor_Params;
	memset(&GetClosestPointToActor_Params, 0, sizeof(GetClosestPointToActor_Params));
	memcpy_s(&GetClosestPointToActor_Params.ActorToCheck, sizeof(GetClosestPointToActor_Params.ActorToCheck), &ActorToCheck, sizeof(ActorToCheck));
	memcpy_s(&GetClosestPointToActor_Params.NewPoint, sizeof(GetClosestPointToActor_Params.NewPoint), &NewPoint, sizeof(NewPoint));
	memcpy_s(&GetClosestPointToActor_Params.NewBuffer, sizeof(GetClosestPointToActor_Params.NewBuffer), &NewBuffer, sizeof(NewBuffer));

	this->ProcessEvent(uFnGetClosestPointToActor, &GetClosestPointToActor_Params, nullptr);

	memcpy_s(&NewPoint, sizeof(NewPoint), &GetClosestPointToActor_Params.NewPoint, sizeof(GetClosestPointToActor_Params.NewPoint));
	memcpy_s(&NewBuffer, sizeof(NewBuffer), &GetClosestPointToActor_Params.NewBuffer, sizeof(GetClosestPointToActor_Params.NewBuffer));

	return GetClosestPointToActor_Params.ReturnValue;
};

// Function OLGame.OLBot.StartMove
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMovementData           aData                          (CPF_Parm)

bool AOLBot::eventStartMove(struct FMovementData aData)
{
	static UFunction* uFnStartMove = nullptr;

	if (!uFnStartMove)
	{
		uFnStartMove = UFunction::FindFunction("Function OLGame.OLBot.StartMove");
	}

	AOLBot_eventStartMove_Params StartMove_Params;
	memset(&StartMove_Params, 0, sizeof(StartMove_Params));
	memcpy_s(&StartMove_Params.aData, sizeof(StartMove_Params.aData), &aData, sizeof(aData));

	this->ProcessEvent(uFnStartMove, &StartMove_Params, nullptr);

	return StartMove_Params.ReturnValue;
};

// Function OLGame.OLBot.IsAlreadyAtDestination
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMovementData           aData                          (CPF_Parm)

bool AOLBot::IsAlreadyAtDestination(struct FMovementData aData)
{
	static UFunction* uFnIsAlreadyAtDestination = nullptr;

	if (!uFnIsAlreadyAtDestination)
	{
		uFnIsAlreadyAtDestination = UFunction::FindFunction("Function OLGame.OLBot.IsAlreadyAtDestination");
	}

	AOLBot_execIsAlreadyAtDestination_Params IsAlreadyAtDestination_Params;
	memset(&IsAlreadyAtDestination_Params, 0, sizeof(IsAlreadyAtDestination_Params));
	memcpy_s(&IsAlreadyAtDestination_Params.aData, sizeof(IsAlreadyAtDestination_Params.aData), &aData, sizeof(aData));

	this->ProcessEvent(uFnIsAlreadyAtDestination, &IsAlreadyAtDestination_Params, nullptr);

	return IsAlreadyAtDestination_Params.ReturnValue;
};

// Function OLGame.OLBot.CompareMoves
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMovementData           Data1                          (CPF_Parm)
// struct FMovementData           Data2                          (CPF_Parm)

bool AOLBot::eventCompareMoves(struct FMovementData Data1, struct FMovementData Data2)
{
	static UFunction* uFnCompareMoves = nullptr;

	if (!uFnCompareMoves)
	{
		uFnCompareMoves = UFunction::FindFunction("Function OLGame.OLBot.CompareMoves");
	}

	AOLBot_eventCompareMoves_Params CompareMoves_Params;
	memset(&CompareMoves_Params, 0, sizeof(CompareMoves_Params));
	memcpy_s(&CompareMoves_Params.Data1, sizeof(CompareMoves_Params.Data1), &Data1, sizeof(Data1));
	memcpy_s(&CompareMoves_Params.Data2, sizeof(CompareMoves_Params.Data2), &Data2, sizeof(Data2));

	this->ProcessEvent(uFnCompareMoves, &CompareMoves_Params, nullptr);

	return CompareMoves_Params.ReturnValue;
};

// Function OLGame.OLBot.GetCurrentWaypoint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLWaypoint*             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLWaypoint* AOLBot::GetCurrentWaypoint()
{
	static UFunction* uFnGetCurrentWaypoint = nullptr;

	if (!uFnGetCurrentWaypoint)
	{
		uFnGetCurrentWaypoint = UFunction::FindFunction("Function OLGame.OLBot.GetCurrentWaypoint");
	}

	AOLBot_execGetCurrentWaypoint_Params GetCurrentWaypoint_Params;
	memset(&GetCurrentWaypoint_Params, 0, sizeof(GetCurrentWaypoint_Params));

	uFnGetCurrentWaypoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetCurrentWaypoint, &GetCurrentWaypoint_Params, nullptr);
	uFnGetCurrentWaypoint->FunctionFlags |= 0x400;

	return GetCurrentWaypoint_Params.ReturnValue;
};

// Function OLGame.OLBot.ChooseClosestPatrolWaypoint
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::eventChooseClosestPatrolWaypoint()
{
	static UFunction* uFnChooseClosestPatrolWaypoint = nullptr;

	if (!uFnChooseClosestPatrolWaypoint)
	{
		uFnChooseClosestPatrolWaypoint = UFunction::FindFunction("Function OLGame.OLBot.ChooseClosestPatrolWaypoint");
	}

	AOLBot_eventChooseClosestPatrolWaypoint_Params ChooseClosestPatrolWaypoint_Params;
	memset(&ChooseClosestPatrolWaypoint_Params, 0, sizeof(ChooseClosestPatrolWaypoint_Params));

	this->ProcessEvent(uFnChooseClosestPatrolWaypoint, &ChooseClosestPatrolWaypoint_Params, nullptr);

	return ChooseClosestPatrolWaypoint_Params.ReturnValue;
};

// Function OLGame.OLBot.ChooseNextPatrolWaypoint
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::eventChooseNextPatrolWaypoint()
{
	static UFunction* uFnChooseNextPatrolWaypoint = nullptr;

	if (!uFnChooseNextPatrolWaypoint)
	{
		uFnChooseNextPatrolWaypoint = UFunction::FindFunction("Function OLGame.OLBot.ChooseNextPatrolWaypoint");
	}

	AOLBot_eventChooseNextPatrolWaypoint_Params ChooseNextPatrolWaypoint_Params;
	memset(&ChooseNextPatrolWaypoint_Params, 0, sizeof(ChooseNextPatrolWaypoint_Params));

	this->ProcessEvent(uFnChooseNextPatrolWaypoint, &ChooseNextPatrolWaypoint_Params, nullptr);

	return ChooseNextPatrolWaypoint_Params.ReturnValue;
};

// Function OLGame.OLBot.NotifyBump
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Other                          (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

bool AOLBot::eventNotifyBump(class AActor* Other, struct FVector HitNormal)
{
	static UFunction* uFnNotifyBump = nullptr;

	if (!uFnNotifyBump)
	{
		uFnNotifyBump = UFunction::FindFunction("Function OLGame.OLBot.NotifyBump");
	}

	AOLBot_eventNotifyBump_Params NotifyBump_Params;
	memset(&NotifyBump_Params, 0, sizeof(NotifyBump_Params));
	memcpy_s(&NotifyBump_Params.Other, sizeof(NotifyBump_Params.Other), &Other, sizeof(Other));
	memcpy_s(&NotifyBump_Params.HitNormal, sizeof(NotifyBump_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnNotifyBump, &NotifyBump_Params, nullptr);

	return NotifyBump_Params.ReturnValue;
};

// Function OLGame.OLBot.RegeneratePath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::RegeneratePath()
{
	static UFunction* uFnRegeneratePath = nullptr;

	if (!uFnRegeneratePath)
	{
		uFnRegeneratePath = UFunction::FindFunction("Function OLGame.OLBot.RegeneratePath");
	}

	AOLBot_execRegeneratePath_Params RegeneratePath_Params;
	memset(&RegeneratePath_Params, 0, sizeof(RegeneratePath_Params));

	uFnRegeneratePath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegeneratePath, &RegeneratePath_Params, nullptr);
	uFnRegeneratePath->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.NotifyPathChanged
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventNotifyPathChanged()
{
	static UFunction* uFnNotifyPathChanged = nullptr;

	if (!uFnNotifyPathChanged)
	{
		uFnNotifyPathChanged = UFunction::FindFunction("Function OLGame.OLBot.NotifyPathChanged");
	}

	AOLBot_eventNotifyPathChanged_Params NotifyPathChanged_Params;
	memset(&NotifyPathChanged_Params, 0, sizeof(NotifyPathChanged_Params));

	this->ProcessEvent(uFnNotifyPathChanged, &NotifyPathChanged_Params, nullptr);
};

// Function OLGame.OLBot.GeneratePathToLocation
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Goal                           (CPF_Parm)
// float                          WithinDistance                 (CPF_OptionalParm | CPF_Parm)
// bool                           bAllowPartialPath              (CPF_OptionalParm | CPF_Parm)

bool AOLBot::eventGeneratePathToLocation(struct FVector Goal, float WithinDistance, bool bAllowPartialPath)
{
	static UFunction* uFnGeneratePathToLocation = nullptr;

	if (!uFnGeneratePathToLocation)
	{
		uFnGeneratePathToLocation = UFunction::FindFunction("Function OLGame.OLBot.GeneratePathToLocation");
	}

	AOLBot_eventGeneratePathToLocation_Params GeneratePathToLocation_Params;
	memset(&GeneratePathToLocation_Params, 0, sizeof(GeneratePathToLocation_Params));
	memcpy_s(&GeneratePathToLocation_Params.Goal, sizeof(GeneratePathToLocation_Params.Goal), &Goal, sizeof(Goal));
	memcpy_s(&GeneratePathToLocation_Params.WithinDistance, sizeof(GeneratePathToLocation_Params.WithinDistance), &WithinDistance, sizeof(WithinDistance));
	GeneratePathToLocation_Params.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent(uFnGeneratePathToLocation, &GeneratePathToLocation_Params, nullptr);

	return GeneratePathToLocation_Params.ReturnValue;
};

// Function OLGame.OLBot.GeneratePathToActor
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Goal                           (CPF_Parm)
// float                          WithinDistance                 (CPF_OptionalParm | CPF_Parm)
// bool                           bAllowPartialPath              (CPF_OptionalParm | CPF_Parm)

bool AOLBot::eventGeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static UFunction* uFnGeneratePathToActor = nullptr;

	if (!uFnGeneratePathToActor)
	{
		uFnGeneratePathToActor = UFunction::FindFunction("Function OLGame.OLBot.GeneratePathToActor");
	}

	AOLBot_eventGeneratePathToActor_Params GeneratePathToActor_Params;
	memset(&GeneratePathToActor_Params, 0, sizeof(GeneratePathToActor_Params));
	memcpy_s(&GeneratePathToActor_Params.Goal, sizeof(GeneratePathToActor_Params.Goal), &Goal, sizeof(Goal));
	memcpy_s(&GeneratePathToActor_Params.WithinDistance, sizeof(GeneratePathToActor_Params.WithinDistance), &WithinDistance, sizeof(WithinDistance));
	GeneratePathToActor_Params.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent(uFnGeneratePathToActor, &GeneratePathToActor_Params, nullptr);

	return GeneratePathToActor_Params.ReturnValue;
};

// Function OLGame.OLBot.AddBasePathContraints
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::AddBasePathContraints()
{
	static UFunction* uFnAddBasePathContraints = nullptr;

	if (!uFnAddBasePathContraints)
	{
		uFnAddBasePathContraints = UFunction::FindFunction("Function OLGame.OLBot.AddBasePathContraints");
	}

	AOLBot_execAddBasePathContraints_Params AddBasePathContraints_Params;
	memset(&AddBasePathContraints_Params, 0, sizeof(AddBasePathContraints_Params));

	this->ProcessEvent(uFnAddBasePathContraints, &AddBasePathContraints_Params, nullptr);
};

// Function OLGame.OLBot.Recalculate
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bForce                         (CPF_OptionalParm | CPF_Parm)

void AOLBot::eventRecalculate(bool bForce)
{
	static UFunction* uFnRecalculate = nullptr;

	if (!uFnRecalculate)
	{
		uFnRecalculate = UFunction::FindFunction("Function OLGame.OLBot.Recalculate");
	}

	AOLBot_eventRecalculate_Params Recalculate_Params;
	memset(&Recalculate_Params, 0, sizeof(Recalculate_Params));
	Recalculate_Params.bForce = bForce;

	this->ProcessEvent(uFnRecalculate, &Recalculate_Params, nullptr);
};

// Function OLGame.OLBot.PushNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventPushNotify()
{
	static UFunction* uFnPushNotify = nullptr;

	if (!uFnPushNotify)
	{
		uFnPushNotify = UFunction::FindFunction("Function OLGame.OLBot.PushNotify");
	}

	AOLBot_eventPushNotify_Params PushNotify_Params;
	memset(&PushNotify_Params, 0, sizeof(PushNotify_Params));

	this->ProcessEvent(uFnPushNotify, &PushNotify_Params, nullptr);
};

// Function OLGame.OLBot.KnockbackTickNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventKnockbackTickNotify()
{
	static UFunction* uFnKnockbackTickNotify = nullptr;

	if (!uFnKnockbackTickNotify)
	{
		uFnKnockbackTickNotify = UFunction::FindFunction("Function OLGame.OLBot.KnockbackTickNotify");
	}

	AOLBot_eventKnockbackTickNotify_Params KnockbackTickNotify_Params;
	memset(&KnockbackTickNotify_Params, 0, sizeof(KnockbackTickNotify_Params));

	this->ProcessEvent(uFnKnockbackTickNotify, &KnockbackTickNotify_Params, nullptr);
};

// Function OLGame.OLBot.IsPlayerOnVaultingPath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::IsPlayerOnVaultingPath()
{
	static UFunction* uFnIsPlayerOnVaultingPath = nullptr;

	if (!uFnIsPlayerOnVaultingPath)
	{
		uFnIsPlayerOnVaultingPath = UFunction::FindFunction("Function OLGame.OLBot.IsPlayerOnVaultingPath");
	}

	AOLBot_execIsPlayerOnVaultingPath_Params IsPlayerOnVaultingPath_Params;
	memset(&IsPlayerOnVaultingPath_Params, 0, sizeof(IsPlayerOnVaultingPath_Params));

	uFnIsPlayerOnVaultingPath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlayerOnVaultingPath, &IsPlayerOnVaultingPath_Params, nullptr);
	uFnIsPlayerOnVaultingPath->FunctionFlags |= 0x400;

	return IsPlayerOnVaultingPath_Params.ReturnValue;
};

// Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLDoor*                 door                           (CPF_Parm)

bool AOLBot::IsPlayerOnBrokenSideOfDoor(class AOLDoor* door)
{
	static UFunction* uFnIsPlayerOnBrokenSideOfDoor = nullptr;

	if (!uFnIsPlayerOnBrokenSideOfDoor)
	{
		uFnIsPlayerOnBrokenSideOfDoor = UFunction::FindFunction("Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor");
	}

	AOLBot_execIsPlayerOnBrokenSideOfDoor_Params IsPlayerOnBrokenSideOfDoor_Params;
	memset(&IsPlayerOnBrokenSideOfDoor_Params, 0, sizeof(IsPlayerOnBrokenSideOfDoor_Params));
	memcpy_s(&IsPlayerOnBrokenSideOfDoor_Params.door, sizeof(IsPlayerOnBrokenSideOfDoor_Params.door), &door, sizeof(door));

	uFnIsPlayerOnBrokenSideOfDoor->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlayerOnBrokenSideOfDoor, &IsPlayerOnBrokenSideOfDoor_Params, nullptr);
	uFnIsPlayerOnBrokenSideOfDoor->FunctionFlags |= 0x400;

	return IsPlayerOnBrokenSideOfDoor_Params.ReturnValue;
};

// Function OLGame.OLBot.KnockbackStartNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventKnockbackStartNotify()
{
	static UFunction* uFnKnockbackStartNotify = nullptr;

	if (!uFnKnockbackStartNotify)
	{
		uFnKnockbackStartNotify = UFunction::FindFunction("Function OLGame.OLBot.KnockbackStartNotify");
	}

	AOLBot_eventKnockbackStartNotify_Params KnockbackStartNotify_Params;
	memset(&KnockbackStartNotify_Params, 0, sizeof(KnockbackStartNotify_Params));

	this->ProcessEvent(uFnKnockbackStartNotify, &KnockbackStartNotify_Params, nullptr);
};

// Function OLGame.OLBot.BreakDoorNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventBreakDoorNotify()
{
	static UFunction* uFnBreakDoorNotify = nullptr;

	if (!uFnBreakDoorNotify)
	{
		uFnBreakDoorNotify = UFunction::FindFunction("Function OLGame.OLBot.BreakDoorNotify");
	}

	AOLBot_eventBreakDoorNotify_Params BreakDoorNotify_Params;
	memset(&BreakDoorNotify_Params, 0, sizeof(BreakDoorNotify_Params));

	this->ProcessEvent(uFnBreakDoorNotify, &BreakDoorNotify_Params, nullptr);
};

// Function OLGame.OLBot.BashDoorNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventBashDoorNotify()
{
	static UFunction* uFnBashDoorNotify = nullptr;

	if (!uFnBashDoorNotify)
	{
		uFnBashDoorNotify = UFunction::FindFunction("Function OLGame.OLBot.BashDoorNotify");
	}

	AOLBot_eventBashDoorNotify_Params BashDoorNotify_Params;
	memset(&BashDoorNotify_Params, 0, sizeof(BashDoorNotify_Params));

	this->ProcessEvent(uFnBashDoorNotify, &BashDoorNotify_Params, nullptr);
};

// Function OLGame.OLBot.DamageTargetRangeTickNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventDamageTargetRangeTickNotify()
{
	static UFunction* uFnDamageTargetRangeTickNotify = nullptr;

	if (!uFnDamageTargetRangeTickNotify)
	{
		uFnDamageTargetRangeTickNotify = UFunction::FindFunction("Function OLGame.OLBot.DamageTargetRangeTickNotify");
	}

	AOLBot_eventDamageTargetRangeTickNotify_Params DamageTargetRangeTickNotify_Params;
	memset(&DamageTargetRangeTickNotify_Params, 0, sizeof(DamageTargetRangeTickNotify_Params));

	this->ProcessEvent(uFnDamageTargetRangeTickNotify, &DamageTargetRangeTickNotify_Params, nullptr);
};

// Function OLGame.OLBot.DamageTargetRangeStartNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventDamageTargetRangeStartNotify()
{
	static UFunction* uFnDamageTargetRangeStartNotify = nullptr;

	if (!uFnDamageTargetRangeStartNotify)
	{
		uFnDamageTargetRangeStartNotify = UFunction::FindFunction("Function OLGame.OLBot.DamageTargetRangeStartNotify");
	}

	AOLBot_eventDamageTargetRangeStartNotify_Params DamageTargetRangeStartNotify_Params;
	memset(&DamageTargetRangeStartNotify_Params, 0, sizeof(DamageTargetRangeStartNotify_Params));

	this->ProcessEvent(uFnDamageTargetRangeStartNotify, &DamageTargetRangeStartNotify_Params, nullptr);
};

// Function OLGame.OLBot.DamageTarget
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventDamageTarget()
{
	static UFunction* uFnDamageTarget = nullptr;

	if (!uFnDamageTarget)
	{
		uFnDamageTarget = UFunction::FindFunction("Function OLGame.OLBot.DamageTarget");
	}

	AOLBot_eventDamageTarget_Params DamageTarget_Params;
	memset(&DamageTarget_Params, 0, sizeof(DamageTarget_Params));

	this->ProcessEvent(uFnDamageTarget, &DamageTarget_Params, nullptr);
};

// Function OLGame.OLBot.IsInDamageRange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::IsInDamageRange()
{
	static UFunction* uFnIsInDamageRange = nullptr;

	if (!uFnIsInDamageRange)
	{
		uFnIsInDamageRange = UFunction::FindFunction("Function OLGame.OLBot.IsInDamageRange");
	}

	AOLBot_execIsInDamageRange_Params IsInDamageRange_Params;
	memset(&IsInDamageRange_Params, 0, sizeof(IsInDamageRange_Params));

	uFnIsInDamageRange->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInDamageRange, &IsInDamageRange_Params, nullptr);
	uFnIsInDamageRange->FunctionFlags |= 0x400;

	return IsInDamageRange_Params.ReturnValue;
};

// Function OLGame.OLBot.IsInFinalAttackRange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::IsInFinalAttackRange()
{
	static UFunction* uFnIsInFinalAttackRange = nullptr;

	if (!uFnIsInFinalAttackRange)
	{
		uFnIsInFinalAttackRange = UFunction::FindFunction("Function OLGame.OLBot.IsInFinalAttackRange");
	}

	AOLBot_execIsInFinalAttackRange_Params IsInFinalAttackRange_Params;
	memset(&IsInFinalAttackRange_Params, 0, sizeof(IsInFinalAttackRange_Params));

	uFnIsInFinalAttackRange->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInFinalAttackRange, &IsInFinalAttackRange_Params, nullptr);
	uFnIsInFinalAttackRange->FunctionFlags |= 0x400;

	return IsInFinalAttackRange_Params.ReturnValue;
};

// Function OLGame.OLBot.IsInApproachAttackRange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::IsInApproachAttackRange()
{
	static UFunction* uFnIsInApproachAttackRange = nullptr;

	if (!uFnIsInApproachAttackRange)
	{
		uFnIsInApproachAttackRange = UFunction::FindFunction("Function OLGame.OLBot.IsInApproachAttackRange");
	}

	AOLBot_execIsInApproachAttackRange_Params IsInApproachAttackRange_Params;
	memset(&IsInApproachAttackRange_Params, 0, sizeof(IsInApproachAttackRange_Params));

	uFnIsInApproachAttackRange->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInApproachAttackRange, &IsInApproachAttackRange_Params, nullptr);
	uFnIsInApproachAttackRange->FunctionFlags |= 0x400;

	return IsInApproachAttackRange_Params.ReturnValue;
};

// Function OLGame.OLBot.IsInAttackRange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::IsInAttackRange()
{
	static UFunction* uFnIsInAttackRange = nullptr;

	if (!uFnIsInAttackRange)
	{
		uFnIsInAttackRange = UFunction::FindFunction("Function OLGame.OLBot.IsInAttackRange");
	}

	AOLBot_execIsInAttackRange_Params IsInAttackRange_Params;
	memset(&IsInAttackRange_Params, 0, sizeof(IsInAttackRange_Params));

	uFnIsInAttackRange->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInAttackRange, &IsInAttackRange_Params, nullptr);
	uFnIsInAttackRange->FunctionFlags |= 0x400;

	return IsInAttackRange_Params.ReturnValue;
};

// Function OLGame.OLBot.InvestigateObject
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  anActor                        (CPF_Parm)

bool AOLBot::InvestigateObject(class AActor* anActor)
{
	static UFunction* uFnInvestigateObject = nullptr;

	if (!uFnInvestigateObject)
	{
		uFnInvestigateObject = UFunction::FindFunction("Function OLGame.OLBot.InvestigateObject");
	}

	AOLBot_execInvestigateObject_Params InvestigateObject_Params;
	memset(&InvestigateObject_Params, 0, sizeof(InvestigateObject_Params));
	memcpy_s(&InvestigateObject_Params.anActor, sizeof(InvestigateObject_Params.anActor), &anActor, sizeof(anActor));

	uFnInvestigateObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInvestigateObject, &InvestigateObject_Params, nullptr);
	uFnInvestigateObject->FunctionFlags |= 0x400;

	return InvestigateObject_Params.ReturnValue;
};

// Function OLGame.OLBot.TryGrabUnder
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::TryGrabUnder()
{
	static UFunction* uFnTryGrabUnder = nullptr;

	if (!uFnTryGrabUnder)
	{
		uFnTryGrabUnder = UFunction::FindFunction("Function OLGame.OLBot.TryGrabUnder");
	}

	AOLBot_execTryGrabUnder_Params TryGrabUnder_Params;
	memset(&TryGrabUnder_Params, 0, sizeof(TryGrabUnder_Params));

	uFnTryGrabUnder->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryGrabUnder, &TryGrabUnder_Params, nullptr);
	uFnTryGrabUnder->FunctionFlags |= 0x400;

	return TryGrabUnder_Params.ReturnValue;
};

// Function OLGame.OLBot.TryGrabNormal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bCrouched                      (CPF_Parm)

bool AOLBot::TryGrabNormal(bool bCrouched)
{
	static UFunction* uFnTryGrabNormal = nullptr;

	if (!uFnTryGrabNormal)
	{
		uFnTryGrabNormal = UFunction::FindFunction("Function OLGame.OLBot.TryGrabNormal");
	}

	AOLBot_execTryGrabNormal_Params TryGrabNormal_Params;
	memset(&TryGrabNormal_Params, 0, sizeof(TryGrabNormal_Params));
	TryGrabNormal_Params.bCrouched = bCrouched;

	uFnTryGrabNormal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTryGrabNormal, &TryGrabNormal_Params, nullptr);
	uFnTryGrabNormal->FunctionFlags |= 0x400;

	return TryGrabNormal_Params.ReturnValue;
};

// Function OLGame.OLBot.AttackCycleEnd
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::AttackCycleEnd()
{
	static UFunction* uFnAttackCycleEnd = nullptr;

	if (!uFnAttackCycleEnd)
	{
		uFnAttackCycleEnd = UFunction::FindFunction("Function OLGame.OLBot.AttackCycleEnd");
	}

	AOLBot_execAttackCycleEnd_Params AttackCycleEnd_Params;
	memset(&AttackCycleEnd_Params, 0, sizeof(AttackCycleEnd_Params));

	this->ProcessEvent(uFnAttackCycleEnd, &AttackCycleEnd_Params, nullptr);
};

// Function OLGame.OLBot.AttackTarget
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// EAIAttackType                  aType                          (CPF_Parm)

bool AOLBot::AttackTarget(EAIAttackType aType)
{
	static UFunction* uFnAttackTarget = nullptr;

	if (!uFnAttackTarget)
	{
		uFnAttackTarget = UFunction::FindFunction("Function OLGame.OLBot.AttackTarget");
	}

	AOLBot_execAttackTarget_Params AttackTarget_Params;
	memset(&AttackTarget_Params, 0, sizeof(AttackTarget_Params));
	memcpy_s(&AttackTarget_Params.aType, sizeof(AttackTarget_Params.aType), &aType, sizeof(aType));

	uFnAttackTarget->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAttackTarget, &AttackTarget_Params, nullptr);
	uFnAttackTarget->FunctionFlags |= 0x400;

	return AttackTarget_Params.ReturnValue;
};

// Function OLGame.OLBot.UpdateAnimationMode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::UpdateAnimationMode()
{
	static UFunction* uFnUpdateAnimationMode = nullptr;

	if (!uFnUpdateAnimationMode)
	{
		uFnUpdateAnimationMode = UFunction::FindFunction("Function OLGame.OLBot.UpdateAnimationMode");
	}

	AOLBot_execUpdateAnimationMode_Params UpdateAnimationMode_Params;
	memset(&UpdateAnimationMode_Params, 0, sizeof(UpdateAnimationMode_Params));

	uFnUpdateAnimationMode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateAnimationMode, &UpdateAnimationMode_Params, nullptr);
	uFnUpdateAnimationMode->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.TriggerDisturbed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventTriggerDisturbed()
{
	static UFunction* uFnTriggerDisturbed = nullptr;

	if (!uFnTriggerDisturbed)
	{
		uFnTriggerDisturbed = UFunction::FindFunction("Function OLGame.OLBot.TriggerDisturbed");
	}

	AOLBot_eventTriggerDisturbed_Params TriggerDisturbed_Params;
	memset(&TriggerDisturbed_Params, 0, sizeof(TriggerDisturbed_Params));

	this->ProcessEvent(uFnTriggerDisturbed, &TriggerDisturbed_Params, nullptr);
};

// Function OLGame.OLBot.StartAnimating
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FAnimationData          aAnim                          (CPF_Parm)
// struct FRotator                Direction                      (CPF_Parm)

void AOLBot::eventStartAnimating(struct FAnimationData aAnim, struct FRotator Direction)
{
	static UFunction* uFnStartAnimating = nullptr;

	if (!uFnStartAnimating)
	{
		uFnStartAnimating = UFunction::FindFunction("Function OLGame.OLBot.StartAnimating");
	}

	AOLBot_eventStartAnimating_Params StartAnimating_Params;
	memset(&StartAnimating_Params, 0, sizeof(StartAnimating_Params));
	memcpy_s(&StartAnimating_Params.aAnim, sizeof(StartAnimating_Params.aAnim), &aAnim, sizeof(aAnim));
	memcpy_s(&StartAnimating_Params.Direction, sizeof(StartAnimating_Params.Direction), &Direction, sizeof(Direction));

	this->ProcessEvent(uFnStartAnimating, &StartAnimating_Params, nullptr);
};

// Function OLGame.OLBot.ClearAnimation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::ClearAnimation()
{
	static UFunction* uFnClearAnimation = nullptr;

	if (!uFnClearAnimation)
	{
		uFnClearAnimation = UFunction::FindFunction("Function OLGame.OLBot.ClearAnimation");
	}

	AOLBot_execClearAnimation_Params ClearAnimation_Params;
	memset(&ClearAnimation_Params, 0, sizeof(ClearAnimation_Params));

	this->ProcessEvent(uFnClearAnimation, &ClearAnimation_Params, nullptr);
};

// Function OLGame.OLBot.CompareAnimations
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAnimationData          AnimDataOne                    (CPF_Parm)
// struct FAnimationData          AnimDataTwo                    (CPF_Parm)

bool AOLBot::CompareAnimations(struct FAnimationData AnimDataOne, struct FAnimationData AnimDataTwo)
{
	static UFunction* uFnCompareAnimations = nullptr;

	if (!uFnCompareAnimations)
	{
		uFnCompareAnimations = UFunction::FindFunction("Function OLGame.OLBot.CompareAnimations");
	}

	AOLBot_execCompareAnimations_Params CompareAnimations_Params;
	memset(&CompareAnimations_Params, 0, sizeof(CompareAnimations_Params));
	memcpy_s(&CompareAnimations_Params.AnimDataOne, sizeof(CompareAnimations_Params.AnimDataOne), &AnimDataOne, sizeof(AnimDataOne));
	memcpy_s(&CompareAnimations_Params.AnimDataTwo, sizeof(CompareAnimations_Params.AnimDataTwo), &AnimDataTwo, sizeof(AnimDataTwo));

	this->ProcessEvent(uFnCompareAnimations, &CompareAnimations_Params, nullptr);

	return CompareAnimations_Params.ReturnValue;
};

// Function OLGame.OLBot.TurnTo
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                Direction                      (CPF_Parm)

void AOLBot::eventTurnTo(struct FRotator Direction)
{
	static UFunction* uFnTurnTo = nullptr;

	if (!uFnTurnTo)
	{
		uFnTurnTo = UFunction::FindFunction("Function OLGame.OLBot.TurnTo");
	}

	AOLBot_eventTurnTo_Params TurnTo_Params;
	memset(&TurnTo_Params, 0, sizeof(TurnTo_Params));
	memcpy_s(&TurnTo_Params.Direction, sizeof(TurnTo_Params.Direction), &Direction, sizeof(Direction));

	this->ProcessEvent(uFnTurnTo, &TurnTo_Params, nullptr);
};

// Function OLGame.OLBot.PerformAttackCheck
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::PerformAttackCheck()
{
	static UFunction* uFnPerformAttackCheck = nullptr;

	if (!uFnPerformAttackCheck)
	{
		uFnPerformAttackCheck = UFunction::FindFunction("Function OLGame.OLBot.PerformAttackCheck");
	}

	AOLBot_execPerformAttackCheck_Params PerformAttackCheck_Params;
	memset(&PerformAttackCheck_Params, 0, sizeof(PerformAttackCheck_Params));

	uFnPerformAttackCheck->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPerformAttackCheck, &PerformAttackCheck_Params, nullptr);
	uFnPerformAttackCheck->FunctionFlags |= 0x400;

	return PerformAttackCheck_Params.ReturnValue;
};

// Function OLGame.OLBot.PerformGrabCheck
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::PerformGrabCheck()
{
	static UFunction* uFnPerformGrabCheck = nullptr;

	if (!uFnPerformGrabCheck)
	{
		uFnPerformGrabCheck = UFunction::FindFunction("Function OLGame.OLBot.PerformGrabCheck");
	}

	AOLBot_execPerformGrabCheck_Params PerformGrabCheck_Params;
	memset(&PerformGrabCheck_Params, 0, sizeof(PerformGrabCheck_Params));

	uFnPerformGrabCheck->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPerformGrabCheck, &PerformGrabCheck_Params, nullptr);
	uFnPerformGrabCheck->FunctionFlags |= 0x400;

	return PerformGrabCheck_Params.ReturnValue;
};

// Function OLGame.OLBot.IsPerformingMoveAbility
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLBot::IsPerformingMoveAbility()
{
	static UFunction* uFnIsPerformingMoveAbility = nullptr;

	if (!uFnIsPerformingMoveAbility)
	{
		uFnIsPerformingMoveAbility = UFunction::FindFunction("Function OLGame.OLBot.IsPerformingMoveAbility");
	}

	AOLBot_execIsPerformingMoveAbility_Params IsPerformingMoveAbility_Params;
	memset(&IsPerformingMoveAbility_Params, 0, sizeof(IsPerformingMoveAbility_Params));

	uFnIsPerformingMoveAbility->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPerformingMoveAbility, &IsPerformingMoveAbility_Params, nullptr);
	uFnIsPerformingMoveAbility->FunctionFlags |= 0x400;

	return IsPerformingMoveAbility_Params.ReturnValue;
};

// Function OLGame.OLBot.WaitForSpecialMove
// [0x00024409] (FUNC_Final | FUNC_Latent | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bNoDelay                       (CPF_OptionalParm | CPF_Parm)

void AOLBot::WaitForSpecialMove(bool bNoDelay)
{
	static UFunction* uFnWaitForSpecialMove = nullptr;

	if (!uFnWaitForSpecialMove)
	{
		uFnWaitForSpecialMove = UFunction::FindFunction("Function OLGame.OLBot.WaitForSpecialMove");
	}

	AOLBot_execWaitForSpecialMove_Params WaitForSpecialMove_Params;
	memset(&WaitForSpecialMove_Params, 0, sizeof(WaitForSpecialMove_Params));
	WaitForSpecialMove_Params.bNoDelay = bNoDelay;

	uFnWaitForSpecialMove->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWaitForSpecialMove, &WaitForSpecialMove_Params, nullptr);
	uFnWaitForSpecialMove->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.WaitForFullBodyAnim
// [0x00020409] (FUNC_Final | FUNC_Latent | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::WaitForFullBodyAnim()
{
	static UFunction* uFnWaitForFullBodyAnim = nullptr;

	if (!uFnWaitForFullBodyAnim)
	{
		uFnWaitForFullBodyAnim = UFunction::FindFunction("Function OLGame.OLBot.WaitForFullBodyAnim");
	}

	AOLBot_execWaitForFullBodyAnim_Params WaitForFullBodyAnim_Params;
	memset(&WaitForFullBodyAnim_Params, 0, sizeof(WaitForFullBodyAnim_Params));

	uFnWaitForFullBodyAnim->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWaitForFullBodyAnim, &WaitForFullBodyAnim_Params, nullptr);
	uFnWaitForFullBodyAnim->FunctionFlags |= 0x400;
};

// Function OLGame.OLBot.PlayFullBodyAnim
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   AnimName                       (CPF_Parm)
// float                          Rate                           (CPF_Parm)
// float                          BlendInTime                    (CPF_OptionalParm | CPF_Parm)
// float                          BlendOutTime                   (CPF_OptionalParm | CPF_Parm)
// bool                           bLooping                       (CPF_OptionalParm | CPF_Parm)
// float                          StartTime                      (CPF_OptionalParm | CPF_Parm)
// float                          EndTime                        (CPF_OptionalParm | CPF_Parm)

void AOLBot::PlayFullBodyAnim(struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime)
{
	static UFunction* uFnPlayFullBodyAnim = nullptr;

	if (!uFnPlayFullBodyAnim)
	{
		uFnPlayFullBodyAnim = UFunction::FindFunction("Function OLGame.OLBot.PlayFullBodyAnim");
	}

	AOLBot_execPlayFullBodyAnim_Params PlayFullBodyAnim_Params;
	memset(&PlayFullBodyAnim_Params, 0, sizeof(PlayFullBodyAnim_Params));
	memcpy_s(&PlayFullBodyAnim_Params.AnimName, sizeof(PlayFullBodyAnim_Params.AnimName), &AnimName, sizeof(AnimName));
	memcpy_s(&PlayFullBodyAnim_Params.Rate, sizeof(PlayFullBodyAnim_Params.Rate), &Rate, sizeof(Rate));
	memcpy_s(&PlayFullBodyAnim_Params.BlendInTime, sizeof(PlayFullBodyAnim_Params.BlendInTime), &BlendInTime, sizeof(BlendInTime));
	memcpy_s(&PlayFullBodyAnim_Params.BlendOutTime, sizeof(PlayFullBodyAnim_Params.BlendOutTime), &BlendOutTime, sizeof(BlendOutTime));
	PlayFullBodyAnim_Params.bLooping = bLooping;
	memcpy_s(&PlayFullBodyAnim_Params.StartTime, sizeof(PlayFullBodyAnim_Params.StartTime), &StartTime, sizeof(StartTime));
	memcpy_s(&PlayFullBodyAnim_Params.EndTime, sizeof(PlayFullBodyAnim_Params.EndTime), &EndTime, sizeof(EndTime));

	this->ProcessEvent(uFnPlayFullBodyAnim, &PlayFullBodyAnim_Params, nullptr);
};

// Function OLGame.OLBot.PushQueuedCommand
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::PushQueuedCommand()
{
	static UFunction* uFnPushQueuedCommand = nullptr;

	if (!uFnPushQueuedCommand)
	{
		uFnPushQueuedCommand = UFunction::FindFunction("Function OLGame.OLBot.PushQueuedCommand");
	}

	AOLBot_execPushQueuedCommand_Params PushQueuedCommand_Params;
	memset(&PushQueuedCommand_Params, 0, sizeof(PushQueuedCommand_Params));

	this->ProcessEvent(uFnPushQueuedCommand, &PushQueuedCommand_Params, nullptr);
};

// Function OLGame.OLBot.QueueAICommand
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGameAICommand*          Cmd                            (CPF_Parm)

bool AOLBot::eventQueueAICommand(class UGameAICommand* Cmd)
{
	static UFunction* uFnQueueAICommand = nullptr;

	if (!uFnQueueAICommand)
	{
		uFnQueueAICommand = UFunction::FindFunction("Function OLGame.OLBot.QueueAICommand");
	}

	AOLBot_eventQueueAICommand_Params QueueAICommand_Params;
	memset(&QueueAICommand_Params, 0, sizeof(QueueAICommand_Params));
	memcpy_s(&QueueAICommand_Params.Cmd, sizeof(QueueAICommand_Params.Cmd), &Cmd, sizeof(Cmd));

	this->ProcessEvent(uFnQueueAICommand, &QueueAICommand_Params, nullptr);

	return QueueAICommand_Params.ReturnValue;
};

// Function OLGame.OLBot.UnPossess
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::UnPossess()
{
	static UFunction* uFnUnPossess = nullptr;

	if (!uFnUnPossess)
	{
		uFnUnPossess = UFunction::FindFunction("Function OLGame.OLBot.UnPossess");
	}

	AOLBot_execUnPossess_Params UnPossess_Params;
	memset(&UnPossess_Params, 0, sizeof(UnPossess_Params));

	this->ProcessEvent(uFnUnPossess, &UnPossess_Params, nullptr);
};

// Function OLGame.OLBot.AddToAIGroup
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::AddToAIGroup()
{
	static UFunction* uFnAddToAIGroup = nullptr;

	if (!uFnAddToAIGroup)
	{
		uFnAddToAIGroup = UFunction::FindFunction("Function OLGame.OLBot.AddToAIGroup");
	}

	AOLBot_execAddToAIGroup_Params AddToAIGroup_Params;
	memset(&AddToAIGroup_Params, 0, sizeof(AddToAIGroup_Params));

	this->ProcessEvent(uFnAddToAIGroup, &AddToAIGroup_Params, nullptr);
};

// Function OLGame.OLBot.Possess
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   aPawn                          (CPF_Parm)
// bool                           bVehicleTransition             (CPF_Parm)

void AOLBot::Possess(class APawn* aPawn, bool bVehicleTransition)
{
	static UFunction* uFnPossess = nullptr;

	if (!uFnPossess)
	{
		uFnPossess = UFunction::FindFunction("Function OLGame.OLBot.Possess");
	}

	AOLBot_execPossess_Params Possess_Params;
	memset(&Possess_Params, 0, sizeof(Possess_Params));
	memcpy_s(&Possess_Params.aPawn, sizeof(Possess_Params.aPawn), &aPawn, sizeof(aPawn));
	Possess_Params.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent(uFnPossess, &Possess_Params, nullptr);
};

// Function OLGame.OLBot.Destroyed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function OLGame.OLBot.Destroyed");
	}

	AOLBot_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function OLGame.OLBot.FindPlayer
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::eventFindPlayer()
{
	static UFunction* uFnFindPlayer = nullptr;

	if (!uFnFindPlayer)
	{
		uFnFindPlayer = UFunction::FindFunction("Function OLGame.OLBot.FindPlayer");
	}

	AOLBot_eventFindPlayer_Params FindPlayer_Params;
	memset(&FindPlayer_Params, 0, sizeof(FindPlayer_Params));

	this->ProcessEvent(uFnFindPlayer, &FindPlayer_Params, nullptr);
};

// Function OLGame.OLBot.InitNavigationHandle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::InitNavigationHandle()
{
	static UFunction* uFnInitNavigationHandle = nullptr;

	if (!uFnInitNavigationHandle)
	{
		uFnInitNavigationHandle = UFunction::FindFunction("Function OLGame.OLBot.InitNavigationHandle");
	}

	AOLBot_execInitNavigationHandle_Params InitNavigationHandle_Params;
	memset(&InitNavigationHandle_Params, 0, sizeof(InitNavigationHandle_Params));

	this->ProcessEvent(uFnInitNavigationHandle, &InitNavigationHandle_Params, nullptr);
};

// Function OLGame.OLBot.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLBot::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLBot.PostBeginPlay");
	}

	AOLBot_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.AtPoint
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)

bool UOLAICmd_MoveAbility::AtPoint(struct FVector Point)
{
	static UFunction* uFnAtPoint = nullptr;

	if (!uFnAtPoint)
	{
		uFnAtPoint = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.AtPoint");
	}

	UOLAICmd_MoveAbility_execAtPoint_Params AtPoint_Params;
	memset(&AtPoint_Params, 0, sizeof(AtPoint_Params));
	memcpy_s(&AtPoint_Params.Point, sizeof(AtPoint_Params.Point), &Point, sizeof(Point));

	this->ProcessEvent(uFnAtPoint, &AtPoint_Params, nullptr);

	return AtPoint_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.SetActiveOnObject
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  NewActiveBot                   (CPF_Parm)

void UOLAICmd_MoveAbility::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static UFunction* uFnSetActiveOnObject = nullptr;

	if (!uFnSetActiveOnObject)
	{
		uFnSetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.SetActiveOnObject");
	}

	UOLAICmd_MoveAbility_execSetActiveOnObject_Params SetActiveOnObject_Params;
	memset(&SetActiveOnObject_Params, 0, sizeof(SetActiveOnObject_Params));
	memcpy_s(&SetActiveOnObject_Params.NewActiveBot, sizeof(SetActiveOnObject_Params.NewActiveBot), &NewActiveBot, sizeof(NewActiveBot));

	this->ProcessEvent(uFnSetActiveOnObject, &SetActiveOnObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.GetActiveOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility::GetActiveOnObject()
{
	static UFunction* uFnGetActiveOnObject = nullptr;

	if (!uFnGetActiveOnObject)
	{
		uFnGetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.GetActiveOnObject");
	}

	UOLAICmd_MoveAbility_execGetActiveOnObject_Params GetActiveOnObject_Params;
	memset(&GetActiveOnObject_Params, 0, sizeof(GetActiveOnObject_Params));

	this->ProcessEvent(uFnGetActiveOnObject, &GetActiveOnObject_Params, nullptr);

	return GetActiveOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.GetClosestToObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility::GetClosestToObject()
{
	static UFunction* uFnGetClosestToObject = nullptr;

	if (!uFnGetClosestToObject)
	{
		uFnGetClosestToObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.GetClosestToObject");
	}

	UOLAICmd_MoveAbility_execGetClosestToObject_Params GetClosestToObject_Params;
	memset(&GetClosestToObject_Params, 0, sizeof(GetClosestToObject_Params));

	this->ProcessEvent(uFnGetClosestToObject, &GetClosestToObject_Params, nullptr);

	return GetClosestToObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.UnregisterWithObject
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility::UnregisterWithObject()
{
	static UFunction* uFnUnregisterWithObject = nullptr;

	if (!uFnUnregisterWithObject)
	{
		uFnUnregisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.UnregisterWithObject");
	}

	UOLAICmd_MoveAbility_execUnregisterWithObject_Params UnregisterWithObject_Params;
	memset(&UnregisterWithObject_Params, 0, sizeof(UnregisterWithObject_Params));

	this->ProcessEvent(uFnUnregisterWithObject, &UnregisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.RegisterWithObject
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility::RegisterWithObject()
{
	static UFunction* uFnRegisterWithObject = nullptr;

	if (!uFnRegisterWithObject)
	{
		uFnRegisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.RegisterWithObject");
	}

	UOLAICmd_MoveAbility_execRegisterWithObject_Params RegisterWithObject_Params;
	memset(&RegisterWithObject_Params, 0, sizeof(RegisterWithObject_Params));

	this->ProcessEvent(uFnRegisterWithObject, &RegisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.IsObjectInUse
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLAICmd_MoveAbility::IsObjectInUse()
{
	static UFunction* uFnIsObjectInUse = nullptr;

	if (!uFnIsObjectInUse)
	{
		uFnIsObjectInUse = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.IsObjectInUse");
	}

	UOLAICmd_MoveAbility_execIsObjectInUse_Params IsObjectInUse_Params;
	memset(&IsObjectInUse_Params, 0, sizeof(IsObjectInUse_Params));

	this->ProcessEvent(uFnIsObjectInUse, &IsObjectInUse_Params, nullptr);

	return IsObjectInUse_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.ContinueFromWaiting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility::ContinueFromWaiting()
{
	static UFunction* uFnContinueFromWaiting = nullptr;

	if (!uFnContinueFromWaiting)
	{
		uFnContinueFromWaiting = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.ContinueFromWaiting");
	}

	UOLAICmd_MoveAbility_execContinueFromWaiting_Params ContinueFromWaiting_Params;
	memset(&ContinueFromWaiting_Params, 0, sizeof(ContinueFromWaiting_Params));

	this->ProcessEvent(uFnContinueFromWaiting, &ContinueFromWaiting_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.MoveToWaiting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility::MoveToWaiting()
{
	static UFunction* uFnMoveToWaiting = nullptr;

	if (!uFnMoveToWaiting)
	{
		uFnMoveToWaiting = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.MoveToWaiting");
	}

	UOLAICmd_MoveAbility_execMoveToWaiting_Params MoveToWaiting_Params;
	memset(&MoveToWaiting_Params, 0, sizeof(MoveToWaiting_Params));

	this->ProcessEvent(uFnMoveToWaiting, &MoveToWaiting_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.GetWaitIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLAICmd_MoveAbility::GetWaitIndex()
{
	static UFunction* uFnGetWaitIndex = nullptr;

	if (!uFnGetWaitIndex)
	{
		uFnGetWaitIndex = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.GetWaitIndex");
	}

	UOLAICmd_MoveAbility_execGetWaitIndex_Params GetWaitIndex_Params;
	memset(&GetWaitIndex_Params, 0, sizeof(GetWaitIndex_Params));

	this->ProcessEvent(uFnGetWaitIndex, &GetWaitIndex_Params, nullptr);

	return GetWaitIndex_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.GetBotsOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<class AOLBot*>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility::GetBotsOnObject()
{
	static UFunction* uFnGetBotsOnObject = nullptr;

	if (!uFnGetBotsOnObject)
	{
		uFnGetBotsOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.GetBotsOnObject");
	}

	UOLAICmd_MoveAbility_execGetBotsOnObject_Params GetBotsOnObject_Params;
	memset(&GetBotsOnObject_Params, 0, sizeof(GetBotsOnObject_Params));

	this->ProcessEvent(uFnGetBotsOnObject, &GetBotsOnObject_Params, nullptr);

	return GetBotsOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.GetWaitPointForwardDirection
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FWaitPoint              Point                          (CPF_Parm)

struct FVector UOLAICmd_MoveAbility::GetWaitPointForwardDirection(struct FWaitPoint Point)
{
	static UFunction* uFnGetWaitPointForwardDirection = nullptr;

	if (!uFnGetWaitPointForwardDirection)
	{
		uFnGetWaitPointForwardDirection = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.GetWaitPointForwardDirection");
	}

	UOLAICmd_MoveAbility_execGetWaitPointForwardDirection_Params GetWaitPointForwardDirection_Params;
	memset(&GetWaitPointForwardDirection_Params, 0, sizeof(GetWaitPointForwardDirection_Params));
	memcpy_s(&GetWaitPointForwardDirection_Params.Point, sizeof(GetWaitPointForwardDirection_Params.Point), &Point, sizeof(Point));

	this->ProcessEvent(uFnGetWaitPointForwardDirection, &GetWaitPointForwardDirection_Params, nullptr);

	return GetWaitPointForwardDirection_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.ReturnWaitPoint
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FWaitPoint              Point                          (CPF_Parm)

void UOLAICmd_MoveAbility::ReturnWaitPoint(struct FWaitPoint Point)
{
	static UFunction* uFnReturnWaitPoint = nullptr;

	if (!uFnReturnWaitPoint)
	{
		uFnReturnWaitPoint = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.ReturnWaitPoint");
	}

	UOLAICmd_MoveAbility_execReturnWaitPoint_Params ReturnWaitPoint_Params;
	memset(&ReturnWaitPoint_Params, 0, sizeof(ReturnWaitPoint_Params));
	memcpy_s(&ReturnWaitPoint_Params.Point, sizeof(ReturnWaitPoint_Params.Point), &Point, sizeof(Point));

	this->ProcessEvent(uFnReturnWaitPoint, &ReturnWaitPoint_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.GrabBestWaitPoint
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FWaitPoint              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FWaitPoint UOLAICmd_MoveAbility::GrabBestWaitPoint()
{
	static UFunction* uFnGrabBestWaitPoint = nullptr;

	if (!uFnGrabBestWaitPoint)
	{
		uFnGrabBestWaitPoint = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.GrabBestWaitPoint");
	}

	UOLAICmd_MoveAbility_execGrabBestWaitPoint_Params GrabBestWaitPoint_Params;
	memset(&GrabBestWaitPoint_Params, 0, sizeof(GrabBestWaitPoint_Params));

	this->ProcessEvent(uFnGrabBestWaitPoint, &GrabBestWaitPoint_Params, nullptr);

	return GrabBestWaitPoint_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.ModifyPath
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewDestination                 (CPF_Parm)
// TArray<struct FVector>         NewPath                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOLAICmd_MoveAbility::ModifyPath(struct FVector NewDestination, TArray<struct FVector>& NewPath)
{
	static UFunction* uFnModifyPath = nullptr;

	if (!uFnModifyPath)
	{
		uFnModifyPath = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.ModifyPath");
	}

	UOLAICmd_MoveAbility_execModifyPath_Params ModifyPath_Params;
	memset(&ModifyPath_Params, 0, sizeof(ModifyPath_Params));
	memcpy_s(&ModifyPath_Params.NewDestination, sizeof(ModifyPath_Params.NewDestination), &NewDestination, sizeof(NewDestination));
	memcpy_s(&ModifyPath_Params.NewPath, sizeof(ModifyPath_Params.NewPath), &NewPath, sizeof(NewPath));

	uFnModifyPath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnModifyPath, &ModifyPath_Params, nullptr);
	uFnModifyPath->FunctionFlags |= 0x400;

	memcpy_s(&NewPath, sizeof(NewPath), &ModifyPath_Params.NewPath, sizeof(ModifyPath_Params.NewPath));
};

// Function OLGame.OLAICmd_MoveAbility.ModifyApproach
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 NewDestination                 (CPF_Parm | CPF_OutParm)

bool UOLAICmd_MoveAbility::ModifyApproach(struct FVector& NewDestination)
{
	static UFunction* uFnModifyApproach = nullptr;

	if (!uFnModifyApproach)
	{
		uFnModifyApproach = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.ModifyApproach");
	}

	UOLAICmd_MoveAbility_execModifyApproach_Params ModifyApproach_Params;
	memset(&ModifyApproach_Params, 0, sizeof(ModifyApproach_Params));
	memcpy_s(&ModifyApproach_Params.NewDestination, sizeof(ModifyApproach_Params.NewDestination), &NewDestination, sizeof(NewDestination));

	this->ProcessEvent(uFnModifyApproach, &ModifyApproach_Params, nullptr);

	memcpy_s(&NewDestination, sizeof(NewDestination), &ModifyApproach_Params.NewDestination, sizeof(ModifyApproach_Params.NewDestination));

	return ModifyApproach_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility.Completed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility::Completed()
{
	static UFunction* uFnCompleted = nullptr;

	if (!uFnCompleted)
	{
		uFnCompleted = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.Completed");
	}

	UOLAICmd_MoveAbility_execCompleted_Params Completed_Params;
	memset(&Completed_Params, 0, sizeof(Completed_Params));

	this->ProcessEvent(uFnCompleted, &Completed_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.Popped
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility::Popped()
{
	static UFunction* uFnPopped = nullptr;

	if (!uFnPopped)
	{
		uFnPopped = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.Popped");
	}

	UOLAICmd_MoveAbility_execPopped_Params Popped_Params;
	memset(&Popped_Params, 0, sizeof(Popped_Params));

	this->ProcessEvent(uFnPopped, &Popped_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility.Pushed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility::Pushed()
{
	static UFunction* uFnPushed = nullptr;

	if (!uFnPushed)
	{
		uFnPushed = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility.Pushed");
	}

	UOLAICmd_MoveAbility_execPushed_Params Pushed_Params;
	memset(&Pushed_Params, 0, sizeof(Pushed_Params));

	this->ProcessEvent(uFnPushed, &Pushed_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLAICmd_MoveAbility_Bash* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLBot*                  Bot                            (CPF_Parm)
// class AOLBashableObject*       InBashable                     (CPF_Parm)
// struct FVector                 InitialDestination             (CPF_Parm)
// bool                           bInReversed                    (CPF_Parm)

class UOLAICmd_MoveAbility_Bash* UOLAICmd_MoveAbility_Bash::eventMoveThruBashable(class AOLBot* Bot, class AOLBashableObject* InBashable, struct FVector InitialDestination, bool bInReversed)
{
	static UFunction* uFnMoveThruBashable = nullptr;

	if (!uFnMoveThruBashable)
	{
		uFnMoveThruBashable = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable");
	}

	UOLAICmd_MoveAbility_Bash_eventMoveThruBashable_Params MoveThruBashable_Params;
	memset(&MoveThruBashable_Params, 0, sizeof(MoveThruBashable_Params));
	memcpy_s(&MoveThruBashable_Params.Bot, sizeof(MoveThruBashable_Params.Bot), &Bot, sizeof(Bot));
	memcpy_s(&MoveThruBashable_Params.InBashable, sizeof(MoveThruBashable_Params.InBashable), &InBashable, sizeof(InBashable));
	memcpy_s(&MoveThruBashable_Params.InitialDestination, sizeof(MoveThruBashable_Params.InitialDestination), &InitialDestination, sizeof(InitialDestination));
	MoveThruBashable_Params.bInReversed = bInReversed;

	UOLAICmd_MoveAbility_Bash::StaticClass()->ProcessEvent(uFnMoveThruBashable, &MoveThruBashable_Params, nullptr);

	return MoveThruBashable_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetBotsOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<class AOLBot*>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility_Door::GetBotsOnObject()
{
	static UFunction* uFnGetBotsOnObject = nullptr;

	if (!uFnGetBotsOnObject)
	{
		uFnGetBotsOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.GetBotsOnObject");
	}

	UOLAICmd_MoveAbility_Door_execGetBotsOnObject_Params GetBotsOnObject_Params;
	memset(&GetBotsOnObject_Params, 0, sizeof(GetBotsOnObject_Params));

	this->ProcessEvent(uFnGetBotsOnObject, &GetBotsOnObject_Params, nullptr);

	return GetBotsOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Door.SetActiveOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  NewActiveBot                   (CPF_Parm)

void UOLAICmd_MoveAbility_Door::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static UFunction* uFnSetActiveOnObject = nullptr;

	if (!uFnSetActiveOnObject)
	{
		uFnSetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.SetActiveOnObject");
	}

	UOLAICmd_MoveAbility_Door_execSetActiveOnObject_Params SetActiveOnObject_Params;
	memset(&SetActiveOnObject_Params, 0, sizeof(SetActiveOnObject_Params));
	memcpy_s(&SetActiveOnObject_Params.NewActiveBot, sizeof(SetActiveOnObject_Params.NewActiveBot), &NewActiveBot, sizeof(NewActiveBot));

	this->ProcessEvent(uFnSetActiveOnObject, &SetActiveOnObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetActiveOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Door::GetActiveOnObject()
{
	static UFunction* uFnGetActiveOnObject = nullptr;

	if (!uFnGetActiveOnObject)
	{
		uFnGetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.GetActiveOnObject");
	}

	UOLAICmd_MoveAbility_Door_execGetActiveOnObject_Params GetActiveOnObject_Params;
	memset(&GetActiveOnObject_Params, 0, sizeof(GetActiveOnObject_Params));

	this->ProcessEvent(uFnGetActiveOnObject, &GetActiveOnObject_Params, nullptr);

	return GetActiveOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetClosestToObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Door::GetClosestToObject()
{
	static UFunction* uFnGetClosestToObject = nullptr;

	if (!uFnGetClosestToObject)
	{
		uFnGetClosestToObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.GetClosestToObject");
	}

	UOLAICmd_MoveAbility_Door_execGetClosestToObject_Params GetClosestToObject_Params;
	memset(&GetClosestToObject_Params, 0, sizeof(GetClosestToObject_Params));

	this->ProcessEvent(uFnGetClosestToObject, &GetClosestToObject_Params, nullptr);

	return GetClosestToObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Door.UnregisterWithObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Door::UnregisterWithObject()
{
	static UFunction* uFnUnregisterWithObject = nullptr;

	if (!uFnUnregisterWithObject)
	{
		uFnUnregisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.UnregisterWithObject");
	}

	UOLAICmd_MoveAbility_Door_execUnregisterWithObject_Params UnregisterWithObject_Params;
	memset(&UnregisterWithObject_Params, 0, sizeof(UnregisterWithObject_Params));

	this->ProcessEvent(uFnUnregisterWithObject, &UnregisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Door.RegisterWithObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Door::RegisterWithObject()
{
	static UFunction* uFnRegisterWithObject = nullptr;

	if (!uFnRegisterWithObject)
	{
		uFnRegisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.RegisterWithObject");
	}

	UOLAICmd_MoveAbility_Door_execRegisterWithObject_Params RegisterWithObject_Params;
	memset(&RegisterWithObject_Params, 0, sizeof(RegisterWithObject_Params));

	this->ProcessEvent(uFnRegisterWithObject, &RegisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLAICmd_MoveAbility_Door::IsObjectInUse()
{
	static UFunction* uFnIsObjectInUse = nullptr;

	if (!uFnIsObjectInUse)
	{
		uFnIsObjectInUse = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse");
	}

	UOLAICmd_MoveAbility_Door_execIsObjectInUse_Params IsObjectInUse_Params;
	memset(&IsObjectInUse_Params, 0, sizeof(IsObjectInUse_Params));

	this->ProcessEvent(uFnIsObjectInUse, &IsObjectInUse_Params, nullptr);

	return IsObjectInUse_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Door.Cancel
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Door::Cancel()
{
	static UFunction* uFnCancel = nullptr;

	if (!uFnCancel)
	{
		uFnCancel = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.Cancel");
	}

	UOLAICmd_MoveAbility_Door_execCancel_Params Cancel_Params;
	memset(&Cancel_Params, 0, sizeof(Cancel_Params));

	this->ProcessEvent(uFnCancel, &Cancel_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Door.Popped
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Door::Popped()
{
	static UFunction* uFnPopped = nullptr;

	if (!uFnPopped)
	{
		uFnPopped = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.Popped");
	}

	UOLAICmd_MoveAbility_Door_execPopped_Params Popped_Params;
	memset(&Popped_Params, 0, sizeof(Popped_Params));

	this->ProcessEvent(uFnPopped, &Popped_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 NewDestination                 (CPF_Parm | CPF_OutParm)

bool UOLAICmd_MoveAbility_Door::ModifyApproach(struct FVector& NewDestination)
{
	static UFunction* uFnModifyApproach = nullptr;

	if (!uFnModifyApproach)
	{
		uFnModifyApproach = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach");
	}

	UOLAICmd_MoveAbility_Door_execModifyApproach_Params ModifyApproach_Params;
	memset(&ModifyApproach_Params, 0, sizeof(ModifyApproach_Params));
	memcpy_s(&ModifyApproach_Params.NewDestination, sizeof(ModifyApproach_Params.NewDestination), &NewDestination, sizeof(NewDestination));

	this->ProcessEvent(uFnModifyApproach, &ModifyApproach_Params, nullptr);

	memcpy_s(&NewDestination, sizeof(NewDestination), &ModifyApproach_Params.NewDestination, sizeof(ModifyApproach_Params.NewDestination));

	return ModifyApproach_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLAICmd_MoveAbility_Door::IsDoorOpen()
{
	static UFunction* uFnIsDoorOpen = nullptr;

	if (!uFnIsDoorOpen)
	{
		uFnIsDoorOpen = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen");
	}

	UOLAICmd_MoveAbility_Door_execIsDoorOpen_Params IsDoorOpen_Params;
	memset(&IsDoorOpen_Params, 0, sizeof(IsDoorOpen_Params));

	this->ProcessEvent(uFnIsDoorOpen, &IsDoorOpen_Params, nullptr);

	return IsDoorOpen_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLAICmd_MoveAbility_Door* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLBot*                  Bot                            (CPF_Parm)
// class AOLDoor*                 InDoor                         (CPF_Parm)
// struct FVector                 InitialDestination             (CPF_Parm)
// bool                           bInReversed                    (CPF_Parm)

class UOLAICmd_MoveAbility_Door* UOLAICmd_MoveAbility_Door::eventMoveThruDoor(class AOLBot* Bot, class AOLDoor* InDoor, struct FVector InitialDestination, bool bInReversed)
{
	static UFunction* uFnMoveThruDoor = nullptr;

	if (!uFnMoveThruDoor)
	{
		uFnMoveThruDoor = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor");
	}

	UOLAICmd_MoveAbility_Door_eventMoveThruDoor_Params MoveThruDoor_Params;
	memset(&MoveThruDoor_Params, 0, sizeof(MoveThruDoor_Params));
	memcpy_s(&MoveThruDoor_Params.Bot, sizeof(MoveThruDoor_Params.Bot), &Bot, sizeof(Bot));
	memcpy_s(&MoveThruDoor_Params.InDoor, sizeof(MoveThruDoor_Params.InDoor), &InDoor, sizeof(InDoor));
	memcpy_s(&MoveThruDoor_Params.InitialDestination, sizeof(MoveThruDoor_Params.InitialDestination), &InitialDestination, sizeof(InitialDestination));
	MoveThruDoor_Params.bInReversed = bInReversed;

	UOLAICmd_MoveAbility_Door::StaticClass()->ProcessEvent(uFnMoveThruDoor, &MoveThruDoor_Params, nullptr);

	return MoveThruDoor_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetBotsOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<class AOLBot*>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility_Ledge::GetBotsOnObject()
{
	static UFunction* uFnGetBotsOnObject = nullptr;

	if (!uFnGetBotsOnObject)
	{
		uFnGetBotsOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.GetBotsOnObject");
	}

	UOLAICmd_MoveAbility_Ledge_execGetBotsOnObject_Params GetBotsOnObject_Params;
	memset(&GetBotsOnObject_Params, 0, sizeof(GetBotsOnObject_Params));

	this->ProcessEvent(uFnGetBotsOnObject, &GetBotsOnObject_Params, nullptr);

	return GetBotsOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.SetActiveOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  NewActiveBot                   (CPF_Parm)

void UOLAICmd_MoveAbility_Ledge::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static UFunction* uFnSetActiveOnObject = nullptr;

	if (!uFnSetActiveOnObject)
	{
		uFnSetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.SetActiveOnObject");
	}

	UOLAICmd_MoveAbility_Ledge_execSetActiveOnObject_Params SetActiveOnObject_Params;
	memset(&SetActiveOnObject_Params, 0, sizeof(SetActiveOnObject_Params));
	memcpy_s(&SetActiveOnObject_Params.NewActiveBot, sizeof(SetActiveOnObject_Params.NewActiveBot), &NewActiveBot, sizeof(NewActiveBot));

	this->ProcessEvent(uFnSetActiveOnObject, &SetActiveOnObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetActiveOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Ledge::GetActiveOnObject()
{
	static UFunction* uFnGetActiveOnObject = nullptr;

	if (!uFnGetActiveOnObject)
	{
		uFnGetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.GetActiveOnObject");
	}

	UOLAICmd_MoveAbility_Ledge_execGetActiveOnObject_Params GetActiveOnObject_Params;
	memset(&GetActiveOnObject_Params, 0, sizeof(GetActiveOnObject_Params));

	this->ProcessEvent(uFnGetActiveOnObject, &GetActiveOnObject_Params, nullptr);

	return GetActiveOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetClosestToObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Ledge::GetClosestToObject()
{
	static UFunction* uFnGetClosestToObject = nullptr;

	if (!uFnGetClosestToObject)
	{
		uFnGetClosestToObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.GetClosestToObject");
	}

	UOLAICmd_MoveAbility_Ledge_execGetClosestToObject_Params GetClosestToObject_Params;
	memset(&GetClosestToObject_Params, 0, sizeof(GetClosestToObject_Params));

	this->ProcessEvent(uFnGetClosestToObject, &GetClosestToObject_Params, nullptr);

	return GetClosestToObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.UnregisterWithObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Ledge::UnregisterWithObject()
{
	static UFunction* uFnUnregisterWithObject = nullptr;

	if (!uFnUnregisterWithObject)
	{
		uFnUnregisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.UnregisterWithObject");
	}

	UOLAICmd_MoveAbility_Ledge_execUnregisterWithObject_Params UnregisterWithObject_Params;
	memset(&UnregisterWithObject_Params, 0, sizeof(UnregisterWithObject_Params));

	this->ProcessEvent(uFnUnregisterWithObject, &UnregisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.RegisterWithObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Ledge::RegisterWithObject()
{
	static UFunction* uFnRegisterWithObject = nullptr;

	if (!uFnRegisterWithObject)
	{
		uFnRegisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.RegisterWithObject");
	}

	UOLAICmd_MoveAbility_Ledge_execRegisterWithObject_Params RegisterWithObject_Params;
	memset(&RegisterWithObject_Params, 0, sizeof(RegisterWithObject_Params));

	this->ProcessEvent(uFnRegisterWithObject, &RegisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.IsObjectInUse
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLAICmd_MoveAbility_Ledge::IsObjectInUse()
{
	static UFunction* uFnIsObjectInUse = nullptr;

	if (!uFnIsObjectInUse)
	{
		uFnIsObjectInUse = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.IsObjectInUse");
	}

	UOLAICmd_MoveAbility_Ledge_execIsObjectInUse_Params IsObjectInUse_Params;
	memset(&IsObjectInUse_Params, 0, sizeof(IsObjectInUse_Params));

	this->ProcessEvent(uFnIsObjectInUse, &IsObjectInUse_Params, nullptr);

	return IsObjectInUse_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLAICmd_MoveAbility_Ledge* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLBot*                  Bot                            (CPF_Parm)
// class AOLLedgeMarker*          InLedge                        (CPF_Parm)
// struct FVector                 InitialDestination             (CPF_Parm)
// bool                           bInReversed                    (CPF_Parm)

class UOLAICmd_MoveAbility_Ledge* UOLAICmd_MoveAbility_Ledge::eventMoveThruLedge(class AOLBot* Bot, class AOLLedgeMarker* InLedge, struct FVector InitialDestination, bool bInReversed)
{
	static UFunction* uFnMoveThruLedge = nullptr;

	if (!uFnMoveThruLedge)
	{
		uFnMoveThruLedge = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge");
	}

	UOLAICmd_MoveAbility_Ledge_eventMoveThruLedge_Params MoveThruLedge_Params;
	memset(&MoveThruLedge_Params, 0, sizeof(MoveThruLedge_Params));
	memcpy_s(&MoveThruLedge_Params.Bot, sizeof(MoveThruLedge_Params.Bot), &Bot, sizeof(Bot));
	memcpy_s(&MoveThruLedge_Params.InLedge, sizeof(MoveThruLedge_Params.InLedge), &InLedge, sizeof(InLedge));
	memcpy_s(&MoveThruLedge_Params.InitialDestination, sizeof(MoveThruLedge_Params.InitialDestination), &InitialDestination, sizeof(InitialDestination));
	MoveThruLedge_Params.bInReversed = bInReversed;

	UOLAICmd_MoveAbility_Ledge::StaticClass()->ProcessEvent(uFnMoveThruLedge, &MoveThruLedge_Params, nullptr);

	return MoveThruLedge_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetBotsOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<class AOLBot*>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility_Vault::GetBotsOnObject()
{
	static UFunction* uFnGetBotsOnObject = nullptr;

	if (!uFnGetBotsOnObject)
	{
		uFnGetBotsOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.GetBotsOnObject");
	}

	UOLAICmd_MoveAbility_Vault_execGetBotsOnObject_Params GetBotsOnObject_Params;
	memset(&GetBotsOnObject_Params, 0, sizeof(GetBotsOnObject_Params));

	this->ProcessEvent(uFnGetBotsOnObject, &GetBotsOnObject_Params, nullptr);

	return GetBotsOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Vault.SetActiveOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  NewActiveBot                   (CPF_Parm)

void UOLAICmd_MoveAbility_Vault::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static UFunction* uFnSetActiveOnObject = nullptr;

	if (!uFnSetActiveOnObject)
	{
		uFnSetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.SetActiveOnObject");
	}

	UOLAICmd_MoveAbility_Vault_execSetActiveOnObject_Params SetActiveOnObject_Params;
	memset(&SetActiveOnObject_Params, 0, sizeof(SetActiveOnObject_Params));
	memcpy_s(&SetActiveOnObject_Params.NewActiveBot, sizeof(SetActiveOnObject_Params.NewActiveBot), &NewActiveBot, sizeof(NewActiveBot));

	this->ProcessEvent(uFnSetActiveOnObject, &SetActiveOnObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetActiveOnObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Vault::GetActiveOnObject()
{
	static UFunction* uFnGetActiveOnObject = nullptr;

	if (!uFnGetActiveOnObject)
	{
		uFnGetActiveOnObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.GetActiveOnObject");
	}

	UOLAICmd_MoveAbility_Vault_execGetActiveOnObject_Params GetActiveOnObject_Params;
	memset(&GetActiveOnObject_Params, 0, sizeof(GetActiveOnObject_Params));

	this->ProcessEvent(uFnGetActiveOnObject, &GetActiveOnObject_Params, nullptr);

	return GetActiveOnObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetClosestToObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Vault::GetClosestToObject()
{
	static UFunction* uFnGetClosestToObject = nullptr;

	if (!uFnGetClosestToObject)
	{
		uFnGetClosestToObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.GetClosestToObject");
	}

	UOLAICmd_MoveAbility_Vault_execGetClosestToObject_Params GetClosestToObject_Params;
	memset(&GetClosestToObject_Params, 0, sizeof(GetClosestToObject_Params));

	this->ProcessEvent(uFnGetClosestToObject, &GetClosestToObject_Params, nullptr);

	return GetClosestToObject_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Vault.UnregisterWithObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Vault::UnregisterWithObject()
{
	static UFunction* uFnUnregisterWithObject = nullptr;

	if (!uFnUnregisterWithObject)
	{
		uFnUnregisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.UnregisterWithObject");
	}

	UOLAICmd_MoveAbility_Vault_execUnregisterWithObject_Params UnregisterWithObject_Params;
	memset(&UnregisterWithObject_Params, 0, sizeof(UnregisterWithObject_Params));

	this->ProcessEvent(uFnUnregisterWithObject, &UnregisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Vault.RegisterWithObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLAICmd_MoveAbility_Vault::RegisterWithObject()
{
	static UFunction* uFnRegisterWithObject = nullptr;

	if (!uFnRegisterWithObject)
	{
		uFnRegisterWithObject = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.RegisterWithObject");
	}

	UOLAICmd_MoveAbility_Vault_execRegisterWithObject_Params RegisterWithObject_Params;
	memset(&RegisterWithObject_Params, 0, sizeof(RegisterWithObject_Params));

	this->ProcessEvent(uFnRegisterWithObject, &RegisterWithObject_Params, nullptr);
};

// Function OLGame.OLAICmd_MoveAbility_Vault.IsObjectInUse
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLAICmd_MoveAbility_Vault::IsObjectInUse()
{
	static UFunction* uFnIsObjectInUse = nullptr;

	if (!uFnIsObjectInUse)
	{
		uFnIsObjectInUse = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.IsObjectInUse");
	}

	UOLAICmd_MoveAbility_Vault_execIsObjectInUse_Params IsObjectInUse_Params;
	memset(&IsObjectInUse_Params, 0, sizeof(IsObjectInUse_Params));

	this->ProcessEvent(uFnIsObjectInUse, &IsObjectInUse_Params, nullptr);

	return IsObjectInUse_Params.ReturnValue;
};

// Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLAICmd_MoveAbility_Vault* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLBot*                  Bot                            (CPF_Parm)
// class AOLAIVaultMarker*        InMarker                       (CPF_Parm)
// struct FVector                 InitialDestination             (CPF_Parm)
// bool                           bInReversed                    (CPF_Parm)

class UOLAICmd_MoveAbility_Vault* UOLAICmd_MoveAbility_Vault::eventMoveThruLedge(class AOLBot* Bot, class AOLAIVaultMarker* InMarker, struct FVector InitialDestination, bool bInReversed)
{
	static UFunction* uFnMoveThruLedge = nullptr;

	if (!uFnMoveThruLedge)
	{
		uFnMoveThruLedge = UFunction::FindFunction("Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge");
	}

	UOLAICmd_MoveAbility_Vault_eventMoveThruLedge_Params MoveThruLedge_Params;
	memset(&MoveThruLedge_Params, 0, sizeof(MoveThruLedge_Params));
	memcpy_s(&MoveThruLedge_Params.Bot, sizeof(MoveThruLedge_Params.Bot), &Bot, sizeof(Bot));
	memcpy_s(&MoveThruLedge_Params.InMarker, sizeof(MoveThruLedge_Params.InMarker), &InMarker, sizeof(InMarker));
	memcpy_s(&MoveThruLedge_Params.InitialDestination, sizeof(MoveThruLedge_Params.InitialDestination), &InitialDestination, sizeof(InitialDestination));
	MoveThruLedge_Params.bInReversed = bInReversed;

	UOLAICmd_MoveAbility_Vault::StaticClass()->ProcessEvent(uFnMoveThruLedge, &MoveThruLedge_Params, nullptr);

	return MoveThruLedge_Params.ReturnValue;
};

// Function OLGame.OLAIGroup.NotifyOthersPathChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  Notifier                       (CPF_Parm)

void AOLAIGroup::NotifyOthersPathChanged(class AOLBot* Notifier)
{
	static UFunction* uFnNotifyOthersPathChanged = nullptr;

	if (!uFnNotifyOthersPathChanged)
	{
		uFnNotifyOthersPathChanged = UFunction::FindFunction("Function OLGame.OLAIGroup.NotifyOthersPathChanged");
	}

	AOLAIGroup_execNotifyOthersPathChanged_Params NotifyOthersPathChanged_Params;
	memset(&NotifyOthersPathChanged_Params, 0, sizeof(NotifyOthersPathChanged_Params));
	memcpy_s(&NotifyOthersPathChanged_Params.Notifier, sizeof(NotifyOthersPathChanged_Params.Notifier), &Notifier, sizeof(Notifier));

	this->ProcessEvent(uFnNotifyOthersPathChanged, &NotifyOthersPathChanged_Params, nullptr);
};

// Function OLGame.OLAIGroup.ReturnAttackToken
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  attacker                       (CPF_Parm)

void AOLAIGroup::ReturnAttackToken(class AOLBot* attacker)
{
	static UFunction* uFnReturnAttackToken = nullptr;

	if (!uFnReturnAttackToken)
	{
		uFnReturnAttackToken = UFunction::FindFunction("Function OLGame.OLAIGroup.ReturnAttackToken");
	}

	AOLAIGroup_execReturnAttackToken_Params ReturnAttackToken_Params;
	memset(&ReturnAttackToken_Params, 0, sizeof(ReturnAttackToken_Params));
	memcpy_s(&ReturnAttackToken_Params.attacker, sizeof(ReturnAttackToken_Params.attacker), &attacker, sizeof(attacker));

	uFnReturnAttackToken->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReturnAttackToken, &ReturnAttackToken_Params, nullptr);
	uFnReturnAttackToken->FunctionFlags |= 0x400;
};

// Function OLGame.OLAIGroup.TakeAttackToken
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  attacker                       (CPF_Parm)

void AOLAIGroup::TakeAttackToken(class AOLBot* attacker)
{
	static UFunction* uFnTakeAttackToken = nullptr;

	if (!uFnTakeAttackToken)
	{
		uFnTakeAttackToken = UFunction::FindFunction("Function OLGame.OLAIGroup.TakeAttackToken");
	}

	AOLAIGroup_execTakeAttackToken_Params TakeAttackToken_Params;
	memset(&TakeAttackToken_Params, 0, sizeof(TakeAttackToken_Params));
	memcpy_s(&TakeAttackToken_Params.attacker, sizeof(TakeAttackToken_Params.attacker), &attacker, sizeof(attacker));

	uFnTakeAttackToken->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTakeAttackToken, &TakeAttackToken_Params, nullptr);
	uFnTakeAttackToken->FunctionFlags |= 0x400;
};

// Function OLGame.OLAIGroup.CanAttack
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AOLBot*                  attacker                       (CPF_Parm)

bool AOLAIGroup::CanAttack(class AOLBot* attacker)
{
	static UFunction* uFnCanAttack = nullptr;

	if (!uFnCanAttack)
	{
		uFnCanAttack = UFunction::FindFunction("Function OLGame.OLAIGroup.CanAttack");
	}

	AOLAIGroup_execCanAttack_Params CanAttack_Params;
	memset(&CanAttack_Params, 0, sizeof(CanAttack_Params));
	memcpy_s(&CanAttack_Params.attacker, sizeof(CanAttack_Params.attacker), &attacker, sizeof(attacker));

	uFnCanAttack->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanAttack, &CanAttack_Params, nullptr);
	uFnCanAttack->FunctionFlags |= 0x400;

	return CanAttack_Params.ReturnValue;
};

// Function OLGame.OLAIGroup.Recalculate
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLAIGroup::eventRecalculate()
{
	static UFunction* uFnRecalculate = nullptr;

	if (!uFnRecalculate)
	{
		uFnRecalculate = UFunction::FindFunction("Function OLGame.OLAIGroup.Recalculate");
	}

	AOLAIGroup_eventRecalculate_Params Recalculate_Params;
	memset(&Recalculate_Params, 0, sizeof(Recalculate_Params));

	this->ProcessEvent(uFnRecalculate, &Recalculate_Params, nullptr);
};

// Function OLGame.OLAIGroup.DidAnyoneSeePlayerInBed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLAIGroup::eventDidAnyoneSeePlayerInBed()
{
	static UFunction* uFnDidAnyoneSeePlayerInBed = nullptr;

	if (!uFnDidAnyoneSeePlayerInBed)
	{
		uFnDidAnyoneSeePlayerInBed = UFunction::FindFunction("Function OLGame.OLAIGroup.DidAnyoneSeePlayerInBed");
	}

	AOLAIGroup_eventDidAnyoneSeePlayerInBed_Params DidAnyoneSeePlayerInBed_Params;
	memset(&DidAnyoneSeePlayerInBed_Params, 0, sizeof(DidAnyoneSeePlayerInBed_Params));

	this->ProcessEvent(uFnDidAnyoneSeePlayerInBed, &DidAnyoneSeePlayerInBed_Params, nullptr);

	return DidAnyoneSeePlayerInBed_Params.ReturnValue;
};

// Function OLGame.OLAIGroup.DidAnyoneSeePlayerinLocker
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLAIGroup::eventDidAnyoneSeePlayerinLocker()
{
	static UFunction* uFnDidAnyoneSeePlayerinLocker = nullptr;

	if (!uFnDidAnyoneSeePlayerinLocker)
	{
		uFnDidAnyoneSeePlayerinLocker = UFunction::FindFunction("Function OLGame.OLAIGroup.DidAnyoneSeePlayerinLocker");
	}

	AOLAIGroup_eventDidAnyoneSeePlayerinLocker_Params DidAnyoneSeePlayerinLocker_Params;
	memset(&DidAnyoneSeePlayerinLocker_Params, 0, sizeof(DidAnyoneSeePlayerinLocker_Params));

	this->ProcessEvent(uFnDidAnyoneSeePlayerinLocker, &DidAnyoneSeePlayerinLocker_Params, nullptr);

	return DidAnyoneSeePlayerinLocker_Params.ReturnValue;
};

// Function OLGame.OLAIGroup.CanAnyoneSeeTarget
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLAIGroup::eventCanAnyoneSeeTarget()
{
	static UFunction* uFnCanAnyoneSeeTarget = nullptr;

	if (!uFnCanAnyoneSeeTarget)
	{
		uFnCanAnyoneSeeTarget = UFunction::FindFunction("Function OLGame.OLAIGroup.CanAnyoneSeeTarget");
	}

	AOLAIGroup_eventCanAnyoneSeeTarget_Params CanAnyoneSeeTarget_Params;
	memset(&CanAnyoneSeeTarget_Params, 0, sizeof(CanAnyoneSeeTarget_Params));

	this->ProcessEvent(uFnCanAnyoneSeeTarget, &CanAnyoneSeeTarget_Params, nullptr);

	return CanAnyoneSeeTarget_Params.ReturnValue;
};

// Function OLGame.OLAIGroup.ToggleAIAlwaysSeePlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void AOLAIGroup::ToggleAIAlwaysSeePlayer(bool bEnable)
{
	static UFunction* uFnToggleAIAlwaysSeePlayer = nullptr;

	if (!uFnToggleAIAlwaysSeePlayer)
	{
		uFnToggleAIAlwaysSeePlayer = UFunction::FindFunction("Function OLGame.OLAIGroup.ToggleAIAlwaysSeePlayer");
	}

	AOLAIGroup_execToggleAIAlwaysSeePlayer_Params ToggleAIAlwaysSeePlayer_Params;
	memset(&ToggleAIAlwaysSeePlayer_Params, 0, sizeof(ToggleAIAlwaysSeePlayer_Params));
	ToggleAIAlwaysSeePlayer_Params.bEnable = bEnable;

	this->ProcessEvent(uFnToggleAIAlwaysSeePlayer, &ToggleAIAlwaysSeePlayer_Params, nullptr);
};

// Function OLGame.OLAIGroup.ToggleAIIgnorePlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void AOLAIGroup::ToggleAIIgnorePlayer(bool bEnable)
{
	static UFunction* uFnToggleAIIgnorePlayer = nullptr;

	if (!uFnToggleAIIgnorePlayer)
	{
		uFnToggleAIIgnorePlayer = UFunction::FindFunction("Function OLGame.OLAIGroup.ToggleAIIgnorePlayer");
	}

	AOLAIGroup_execToggleAIIgnorePlayer_Params ToggleAIIgnorePlayer_Params;
	memset(&ToggleAIIgnorePlayer_Params, 0, sizeof(ToggleAIIgnorePlayer_Params));
	ToggleAIIgnorePlayer_Params.bEnable = bEnable;

	this->ProcessEvent(uFnToggleAIIgnorePlayer, &ToggleAIIgnorePlayer_Params, nullptr);
};

// Function OLGame.OLAIGroup.TriggerVisualDisturbance
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  Triggerer                      (CPF_Parm)
// struct FVector                 DisturbanceLocation            (CPF_Parm)

void AOLAIGroup::eventTriggerVisualDisturbance(class AOLBot* Triggerer, struct FVector DisturbanceLocation)
{
	static UFunction* uFnTriggerVisualDisturbance = nullptr;

	if (!uFnTriggerVisualDisturbance)
	{
		uFnTriggerVisualDisturbance = UFunction::FindFunction("Function OLGame.OLAIGroup.TriggerVisualDisturbance");
	}

	AOLAIGroup_eventTriggerVisualDisturbance_Params TriggerVisualDisturbance_Params;
	memset(&TriggerVisualDisturbance_Params, 0, sizeof(TriggerVisualDisturbance_Params));
	memcpy_s(&TriggerVisualDisturbance_Params.Triggerer, sizeof(TriggerVisualDisturbance_Params.Triggerer), &Triggerer, sizeof(Triggerer));
	memcpy_s(&TriggerVisualDisturbance_Params.DisturbanceLocation, sizeof(TriggerVisualDisturbance_Params.DisturbanceLocation), &DisturbanceLocation, sizeof(DisturbanceLocation));

	this->ProcessEvent(uFnTriggerVisualDisturbance, &TriggerVisualDisturbance_Params, nullptr);
};

// Function OLGame.OLAIGroup.TriggerAudioDisturbance
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  Triggerer                      (CPF_Parm)
// struct FVector                 DisturbanceLocation            (CPF_Parm)
// bool                           bNewInvestigate                (CPF_OptionalParm | CPF_Parm)
// bool                           bNoTrim                        (CPF_OptionalParm | CPF_Parm)

void AOLAIGroup::eventTriggerAudioDisturbance(class AOLBot* Triggerer, struct FVector DisturbanceLocation, bool bNewInvestigate, bool bNoTrim)
{
	static UFunction* uFnTriggerAudioDisturbance = nullptr;

	if (!uFnTriggerAudioDisturbance)
	{
		uFnTriggerAudioDisturbance = UFunction::FindFunction("Function OLGame.OLAIGroup.TriggerAudioDisturbance");
	}

	AOLAIGroup_eventTriggerAudioDisturbance_Params TriggerAudioDisturbance_Params;
	memset(&TriggerAudioDisturbance_Params, 0, sizeof(TriggerAudioDisturbance_Params));
	memcpy_s(&TriggerAudioDisturbance_Params.Triggerer, sizeof(TriggerAudioDisturbance_Params.Triggerer), &Triggerer, sizeof(Triggerer));
	memcpy_s(&TriggerAudioDisturbance_Params.DisturbanceLocation, sizeof(TriggerAudioDisturbance_Params.DisturbanceLocation), &DisturbanceLocation, sizeof(DisturbanceLocation));
	TriggerAudioDisturbance_Params.bNewInvestigate = bNewInvestigate;
	TriggerAudioDisturbance_Params.bNoTrim = bNoTrim;

	this->ProcessEvent(uFnTriggerAudioDisturbance, &TriggerAudioDisturbance_Params, nullptr);
};

// Function OLGame.OLAIGroup.RemoveBot
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  Bot                            (CPF_Parm)

void AOLAIGroup::eventRemoveBot(class AOLBot* Bot)
{
	static UFunction* uFnRemoveBot = nullptr;

	if (!uFnRemoveBot)
	{
		uFnRemoveBot = UFunction::FindFunction("Function OLGame.OLAIGroup.RemoveBot");
	}

	AOLAIGroup_eventRemoveBot_Params RemoveBot_Params;
	memset(&RemoveBot_Params, 0, sizeof(RemoveBot_Params));
	memcpy_s(&RemoveBot_Params.Bot, sizeof(RemoveBot_Params.Bot), &Bot, sizeof(Bot));

	this->ProcessEvent(uFnRemoveBot, &RemoveBot_Params, nullptr);
};

// Function OLGame.OLAIGroup.AddBot
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLBot*                  Bot                            (CPF_Parm)

void AOLAIGroup::eventAddBot(class AOLBot* Bot)
{
	static UFunction* uFnAddBot = nullptr;

	if (!uFnAddBot)
	{
		uFnAddBot = UFunction::FindFunction("Function OLGame.OLAIGroup.AddBot");
	}

	AOLAIGroup_eventAddBot_Params AddBot_Params;
	memset(&AddBot_Params, 0, sizeof(AddBot_Params));
	memcpy_s(&AddBot_Params.Bot, sizeof(AddBot_Params.Bot), &Bot, sizeof(Bot));

	this->ProcessEvent(uFnAddBot, &AddBot_Params, nullptr);
};

// Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AOLAIInvestigationVolume::eventProcessActorSetVolume(class AActor* Other)
{
	static UFunction* uFnProcessActorSetVolume = nullptr;

	if (!uFnProcessActorSetVolume)
	{
		uFnProcessActorSetVolume = UFunction::FindFunction("Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume");
	}

	AOLAIInvestigationVolume_eventProcessActorSetVolume_Params ProcessActorSetVolume_Params;
	memset(&ProcessActorSetVolume_Params, 0, sizeof(ProcessActorSetVolume_Params));
	memcpy_s(&ProcessActorSetVolume_Params.Other, sizeof(ProcessActorSetVolume_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnProcessActorSetVolume, &ProcessActorSetVolume_Params, nullptr);
};

// Function OLGame.OLAISightComponent.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void UOLAISightComponent::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLAISightComponent.DisplayDebug");
	}

	UOLAISightComponent_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.HUD, sizeof(DisplayDebug_Params.HUD), &HUD, sizeof(HUD));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLEnemyPawn.PlayContextualVO
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EVOContext                     VOContext                      (CPF_Parm)
// float                          DelayTime                      (CPF_OptionalParm | CPF_Parm)

void AOLEnemyPawn::PlayContextualVO(EVOContext VOContext, float DelayTime)
{
	static UFunction* uFnPlayContextualVO = nullptr;

	if (!uFnPlayContextualVO)
	{
		uFnPlayContextualVO = UFunction::FindFunction("Function OLGame.OLEnemyPawn.PlayContextualVO");
	}

	AOLEnemyPawn_execPlayContextualVO_Params PlayContextualVO_Params;
	memset(&PlayContextualVO_Params, 0, sizeof(PlayContextualVO_Params));
	memcpy_s(&PlayContextualVO_Params.VOContext, sizeof(PlayContextualVO_Params.VOContext), &VOContext, sizeof(VOContext));
	memcpy_s(&PlayContextualVO_Params.DelayTime, sizeof(PlayContextualVO_Params.DelayTime), &DelayTime, sizeof(DelayTime));

	uFnPlayContextualVO->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlayContextualVO, &PlayContextualVO_Params, nullptr);
	uFnPlayContextualVO->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.PlayFootStepSound
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        FootDown                       (CPF_Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (CPF_Parm)

void AOLEnemyPawn::eventPlayFootStepSound(int32_t FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static UFunction* uFnPlayFootStepSound = nullptr;

	if (!uFnPlayFootStepSound)
	{
		uFnPlayFootStepSound = UFunction::FindFunction("Function OLGame.OLEnemyPawn.PlayFootStepSound");
	}

	AOLEnemyPawn_eventPlayFootStepSound_Params PlayFootStepSound_Params;
	memset(&PlayFootStepSound_Params, 0, sizeof(PlayFootStepSound_Params));
	memcpy_s(&PlayFootStepSound_Params.FootDown, sizeof(PlayFootStepSound_Params.FootDown), &FootDown, sizeof(FootDown));
	memcpy_s(&PlayFootStepSound_Params.footstepNotify, sizeof(PlayFootStepSound_Params.footstepNotify), &footstepNotify, sizeof(footstepNotify));

	this->ProcessEvent(uFnPlayFootStepSound, &PlayFootStepSound_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.FinishAIGroup
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::FinishAIGroup()
{
	static UFunction* uFnFinishAIGroup = nullptr;

	if (!uFnFinishAIGroup)
	{
		uFnFinishAIGroup = UFunction::FindFunction("Function OLGame.OLEnemyPawn.FinishAIGroup");
	}

	AOLEnemyPawn_execFinishAIGroup_Params FinishAIGroup_Params;
	memset(&FinishAIGroup_Params, 0, sizeof(FinishAIGroup_Params));

	this->ProcessEvent(uFnFinishAIGroup, &FinishAIGroup_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.BeginAIGroup
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::BeginAIGroup()
{
	static UFunction* uFnBeginAIGroup = nullptr;

	if (!uFnBeginAIGroup)
	{
		uFnBeginAIGroup = UFunction::FindFunction("Function OLGame.OLEnemyPawn.BeginAIGroup");
	}

	AOLEnemyPawn_execBeginAIGroup_Params BeginAIGroup_Params;
	memset(&BeginAIGroup_Params, 0, sizeof(BeginAIGroup_Params));

	this->ProcessEvent(uFnBeginAIGroup, &BeginAIGroup_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.StartMatinee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 StartLoc                       (CPF_Parm)
// struct FRotator                StartRot                       (CPF_Parm)
// float                          BlendTime                      (CPF_Parm)

void AOLEnemyPawn::StartMatinee(struct FVector StartLoc, struct FRotator StartRot, float BlendTime)
{
	static UFunction* uFnStartMatinee = nullptr;

	if (!uFnStartMatinee)
	{
		uFnStartMatinee = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartMatinee");
	}

	AOLEnemyPawn_execStartMatinee_Params StartMatinee_Params;
	memset(&StartMatinee_Params, 0, sizeof(StartMatinee_Params));
	memcpy_s(&StartMatinee_Params.StartLoc, sizeof(StartMatinee_Params.StartLoc), &StartLoc, sizeof(StartLoc));
	memcpy_s(&StartMatinee_Params.StartRot, sizeof(StartMatinee_Params.StartRot), &StartRot, sizeof(StartRot));
	memcpy_s(&StartMatinee_Params.BlendTime, sizeof(StartMatinee_Params.BlendTime), &BlendTime, sizeof(BlendTime));

	uFnStartMatinee->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartMatinee, &StartMatinee_Params, nullptr);
	uFnStartMatinee->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.OnAnimEnd
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AOLEnemyPawn::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function OLGame.OLEnemyPawn.OnAnimEnd");
	}

	AOLEnemyPawn_eventOnAnimEnd_Params OnAnimEnd_Params;
	memset(&OnAnimEnd_Params, 0, sizeof(OnAnimEnd_Params));
	memcpy_s(&OnAnimEnd_Params.SeqNode, sizeof(OnAnimEnd_Params.SeqNode), &SeqNode, sizeof(SeqNode));
	memcpy_s(&OnAnimEnd_Params.PlayedTime, sizeof(OnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&OnAnimEnd_Params.ExcessTime, sizeof(OnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.StartDisturbed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::StartDisturbed()
{
	static UFunction* uFnStartDisturbed = nullptr;

	if (!uFnStartDisturbed)
	{
		uFnStartDisturbed = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartDisturbed");
	}

	AOLEnemyPawn_execStartDisturbed_Params StartDisturbed_Params;
	memset(&StartDisturbed_Params, 0, sizeof(StartDisturbed_Params));

	uFnStartDisturbed->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartDisturbed, &StartDisturbed_Params, nullptr);
	uFnStartDisturbed->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.StartNormalAttack
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::StartNormalAttack()
{
	static UFunction* uFnStartNormalAttack = nullptr;

	if (!uFnStartNormalAttack)
	{
		uFnStartNormalAttack = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartNormalAttack");
	}

	AOLEnemyPawn_execStartNormalAttack_Params StartNormalAttack_Params;
	memset(&StartNormalAttack_Params, 0, sizeof(StartNormalAttack_Params));

	uFnStartNormalAttack->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartNormalAttack, &StartNormalAttack_Params, nullptr);
	uFnStartNormalAttack->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.StartDoorKnockback
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 Direction                      (CPF_Parm)
// bool                           bLocker                        (CPF_Parm)

void AOLEnemyPawn::StartDoorKnockback(struct FVector Direction, bool bLocker)
{
	static UFunction* uFnStartDoorKnockback = nullptr;

	if (!uFnStartDoorKnockback)
	{
		uFnStartDoorKnockback = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartDoorKnockback");
	}

	AOLEnemyPawn_execStartDoorKnockback_Params StartDoorKnockback_Params;
	memset(&StartDoorKnockback_Params, 0, sizeof(StartDoorKnockback_Params));
	memcpy_s(&StartDoorKnockback_Params.Direction, sizeof(StartDoorKnockback_Params.Direction), &Direction, sizeof(Direction));
	StartDoorKnockback_Params.bLocker = bLocker;

	uFnStartDoorKnockback->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartDoorKnockback, &StartDoorKnockback_Params, nullptr);
	uFnStartDoorKnockback->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.StartKnockback
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLHero*                 Hero                           (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AOLEnemyPawn::StartKnockback(class AOLHero* Hero, struct FVector HitNormal)
{
	static UFunction* uFnStartKnockback = nullptr;

	if (!uFnStartKnockback)
	{
		uFnStartKnockback = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartKnockback");
	}

	AOLEnemyPawn_execStartKnockback_Params StartKnockback_Params;
	memset(&StartKnockback_Params, 0, sizeof(StartKnockback_Params));
	memcpy_s(&StartKnockback_Params.Hero, sizeof(StartKnockback_Params.Hero), &Hero, sizeof(Hero));
	memcpy_s(&StartKnockback_Params.HitNormal, sizeof(StartKnockback_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	uFnStartKnockback->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartKnockback, &StartKnockback_Params, nullptr);
	uFnStartKnockback->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.StartAvoid
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLEnemyPawn*            OtherPawn                      (CPF_Parm)

void AOLEnemyPawn::StartAvoid(class AOLEnemyPawn* OtherPawn)
{
	static UFunction* uFnStartAvoid = nullptr;

	if (!uFnStartAvoid)
	{
		uFnStartAvoid = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartAvoid");
	}

	AOLEnemyPawn_execStartAvoid_Params StartAvoid_Params;
	memset(&StartAvoid_Params, 0, sizeof(StartAvoid_Params));
	memcpy_s(&StartAvoid_Params.OtherPawn, sizeof(StartAvoid_Params.OtherPawn), &OtherPawn, sizeof(OtherPawn));

	uFnStartAvoid->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartAvoid, &StartAvoid_Params, nullptr);
	uFnStartAvoid->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.TurnOnSpot
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                EndRotation                    (CPF_Parm)

void AOLEnemyPawn::TurnOnSpot(struct FRotator EndRotation)
{
	static UFunction* uFnTurnOnSpot = nullptr;

	if (!uFnTurnOnSpot)
	{
		uFnTurnOnSpot = UFunction::FindFunction("Function OLGame.OLEnemyPawn.TurnOnSpot");
	}

	AOLEnemyPawn_execTurnOnSpot_Params TurnOnSpot_Params;
	memset(&TurnOnSpot_Params, 0, sizeof(TurnOnSpot_Params));
	memcpy_s(&TurnOnSpot_Params.EndRotation, sizeof(TurnOnSpot_Params.EndRotation), &EndRotation, sizeof(EndRotation));

	uFnTurnOnSpot->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTurnOnSpot, &TurnOnSpot_Params, nullptr);
	uFnTurnOnSpot->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.PlayFullBodyAnim
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   AnimName                       (CPF_Parm)
// float                          Rate                           (CPF_Parm)
// float                          BlendInTime                    (CPF_OptionalParm | CPF_Parm)
// float                          BlendOutTime                   (CPF_OptionalParm | CPF_Parm)
// bool                           bLooping                       (CPF_OptionalParm | CPF_Parm)
// float                          StartTime                      (CPF_OptionalParm | CPF_Parm)
// float                          EndTime                        (CPF_OptionalParm | CPF_Parm)

void AOLEnemyPawn::PlayFullBodyAnim(struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime)
{
	static UFunction* uFnPlayFullBodyAnim = nullptr;

	if (!uFnPlayFullBodyAnim)
	{
		uFnPlayFullBodyAnim = UFunction::FindFunction("Function OLGame.OLEnemyPawn.PlayFullBodyAnim");
	}

	AOLEnemyPawn_execPlayFullBodyAnim_Params PlayFullBodyAnim_Params;
	memset(&PlayFullBodyAnim_Params, 0, sizeof(PlayFullBodyAnim_Params));
	memcpy_s(&PlayFullBodyAnim_Params.AnimName, sizeof(PlayFullBodyAnim_Params.AnimName), &AnimName, sizeof(AnimName));
	memcpy_s(&PlayFullBodyAnim_Params.Rate, sizeof(PlayFullBodyAnim_Params.Rate), &Rate, sizeof(Rate));
	memcpy_s(&PlayFullBodyAnim_Params.BlendInTime, sizeof(PlayFullBodyAnim_Params.BlendInTime), &BlendInTime, sizeof(BlendInTime));
	memcpy_s(&PlayFullBodyAnim_Params.BlendOutTime, sizeof(PlayFullBodyAnim_Params.BlendOutTime), &BlendOutTime, sizeof(BlendOutTime));
	PlayFullBodyAnim_Params.bLooping = bLooping;
	memcpy_s(&PlayFullBodyAnim_Params.StartTime, sizeof(PlayFullBodyAnim_Params.StartTime), &StartTime, sizeof(StartTime));
	memcpy_s(&PlayFullBodyAnim_Params.EndTime, sizeof(PlayFullBodyAnim_Params.EndTime), &EndTime, sizeof(EndTime));

	this->ProcessEvent(uFnPlayFullBodyAnim, &PlayFullBodyAnim_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.DisableRootMotion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::DisableRootMotion()
{
	static UFunction* uFnDisableRootMotion = nullptr;

	if (!uFnDisableRootMotion)
	{
		uFnDisableRootMotion = UFunction::FindFunction("Function OLGame.OLEnemyPawn.DisableRootMotion");
	}

	AOLEnemyPawn_execDisableRootMotion_Params DisableRootMotion_Params;
	memset(&DisableRootMotion_Params, 0, sizeof(DisableRootMotion_Params));

	uFnDisableRootMotion->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDisableRootMotion, &DisableRootMotion_Params, nullptr);
	uFnDisableRootMotion->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.EnableRootMotion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::EnableRootMotion()
{
	static UFunction* uFnEnableRootMotion = nullptr;

	if (!uFnEnableRootMotion)
	{
		uFnEnableRootMotion = UFunction::FindFunction("Function OLGame.OLEnemyPawn.EnableRootMotion");
	}

	AOLEnemyPawn_execEnableRootMotion_Params EnableRootMotion_Params;
	memset(&EnableRootMotion_Params, 0, sizeof(EnableRootMotion_Params));

	uFnEnableRootMotion->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnableRootMotion, &EnableRootMotion_Params, nullptr);
	uFnEnableRootMotion->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.StopIdleSound
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventStopIdleSound()
{
	static UFunction* uFnStopIdleSound = nullptr;

	if (!uFnStopIdleSound)
	{
		uFnStopIdleSound = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StopIdleSound");
	}

	AOLEnemyPawn_eventStopIdleSound_Params StopIdleSound_Params;
	memset(&StopIdleSound_Params, 0, sizeof(StopIdleSound_Params));

	this->ProcessEvent(uFnStopIdleSound, &StopIdleSound_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.StartIdleSound
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventStartIdleSound()
{
	static UFunction* uFnStartIdleSound = nullptr;

	if (!uFnStartIdleSound)
	{
		uFnStartIdleSound = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartIdleSound");
	}

	AOLEnemyPawn_eventStartIdleSound_Params StartIdleSound_Params;
	memset(&StartIdleSound_Params, 0, sizeof(StartIdleSound_Params));

	this->ProcessEvent(uFnStartIdleSound, &StartIdleSound_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.HideWeaponMatinee
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventHideWeaponMatinee()
{
	static UFunction* uFnHideWeaponMatinee = nullptr;

	if (!uFnHideWeaponMatinee)
	{
		uFnHideWeaponMatinee = UFunction::FindFunction("Function OLGame.OLEnemyPawn.HideWeaponMatinee");
	}

	AOLEnemyPawn_eventHideWeaponMatinee_Params HideWeaponMatinee_Params;
	memset(&HideWeaponMatinee_Params, 0, sizeof(HideWeaponMatinee_Params));

	this->ProcessEvent(uFnHideWeaponMatinee, &HideWeaponMatinee_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.ShowWeaponMatinee
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventShowWeaponMatinee()
{
	static UFunction* uFnShowWeaponMatinee = nullptr;

	if (!uFnShowWeaponMatinee)
	{
		uFnShowWeaponMatinee = UFunction::FindFunction("Function OLGame.OLEnemyPawn.ShowWeaponMatinee");
	}

	AOLEnemyPawn_eventShowWeaponMatinee_Params ShowWeaponMatinee_Params;
	memset(&ShowWeaponMatinee_Params, 0, sizeof(ShowWeaponMatinee_Params));

	this->ProcessEvent(uFnShowWeaponMatinee, &ShowWeaponMatinee_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.HideWeapon
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventHideWeapon()
{
	static UFunction* uFnHideWeapon = nullptr;

	if (!uFnHideWeapon)
	{
		uFnHideWeapon = UFunction::FindFunction("Function OLGame.OLEnemyPawn.HideWeapon");
	}

	AOLEnemyPawn_eventHideWeapon_Params HideWeapon_Params;
	memset(&HideWeapon_Params, 0, sizeof(HideWeapon_Params));

	this->ProcessEvent(uFnHideWeapon, &HideWeapon_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.ShowWeapon
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventShowWeapon()
{
	static UFunction* uFnShowWeapon = nullptr;

	if (!uFnShowWeapon)
	{
		uFnShowWeapon = UFunction::FindFunction("Function OLGame.OLEnemyPawn.ShowWeapon");
	}

	AOLEnemyPawn_eventShowWeapon_Params ShowWeapon_Params;
	memset(&ShowWeapon_Params, 0, sizeof(ShowWeapon_Params));

	this->ProcessEvent(uFnShowWeapon, &ShowWeapon_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.ResetAnimationMode
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventResetAnimationMode()
{
	static UFunction* uFnResetAnimationMode = nullptr;

	if (!uFnResetAnimationMode)
	{
		uFnResetAnimationMode = UFunction::FindFunction("Function OLGame.OLEnemyPawn.ResetAnimationMode");
	}

	AOLEnemyPawn_eventResetAnimationMode_Params ResetAnimationMode_Params;
	memset(&ResetAnimationMode_Params, 0, sizeof(ResetAnimationMode_Params));

	this->ProcessEvent(uFnResetAnimationMode, &ResetAnimationMode_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.PushNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventPushNotify()
{
	static UFunction* uFnPushNotify = nullptr;

	if (!uFnPushNotify)
	{
		uFnPushNotify = UFunction::FindFunction("Function OLGame.OLEnemyPawn.PushNotify");
	}

	AOLEnemyPawn_eventPushNotify_Params PushNotify_Params;
	memset(&PushNotify_Params, 0, sizeof(PushNotify_Params));

	this->ProcessEvent(uFnPushNotify, &PushNotify_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.KnockbackTickNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventKnockbackTickNotify()
{
	static UFunction* uFnKnockbackTickNotify = nullptr;

	if (!uFnKnockbackTickNotify)
	{
		uFnKnockbackTickNotify = UFunction::FindFunction("Function OLGame.OLEnemyPawn.KnockbackTickNotify");
	}

	AOLEnemyPawn_eventKnockbackTickNotify_Params KnockbackTickNotify_Params;
	memset(&KnockbackTickNotify_Params, 0, sizeof(KnockbackTickNotify_Params));

	this->ProcessEvent(uFnKnockbackTickNotify, &KnockbackTickNotify_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.KnockbackStartNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventKnockbackStartNotify()
{
	static UFunction* uFnKnockbackStartNotify = nullptr;

	if (!uFnKnockbackStartNotify)
	{
		uFnKnockbackStartNotify = UFunction::FindFunction("Function OLGame.OLEnemyPawn.KnockbackStartNotify");
	}

	AOLEnemyPawn_eventKnockbackStartNotify_Params KnockbackStartNotify_Params;
	memset(&KnockbackStartNotify_Params, 0, sizeof(KnockbackStartNotify_Params));

	this->ProcessEvent(uFnKnockbackStartNotify, &KnockbackStartNotify_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.BreakDoorNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventBreakDoorNotify()
{
	static UFunction* uFnBreakDoorNotify = nullptr;

	if (!uFnBreakDoorNotify)
	{
		uFnBreakDoorNotify = UFunction::FindFunction("Function OLGame.OLEnemyPawn.BreakDoorNotify");
	}

	AOLEnemyPawn_eventBreakDoorNotify_Params BreakDoorNotify_Params;
	memset(&BreakDoorNotify_Params, 0, sizeof(BreakDoorNotify_Params));

	this->ProcessEvent(uFnBreakDoorNotify, &BreakDoorNotify_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.BashDoorNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventBashDoorNotify()
{
	static UFunction* uFnBashDoorNotify = nullptr;

	if (!uFnBashDoorNotify)
	{
		uFnBashDoorNotify = UFunction::FindFunction("Function OLGame.OLEnemyPawn.BashDoorNotify");
	}

	AOLEnemyPawn_eventBashDoorNotify_Params BashDoorNotify_Params;
	memset(&BashDoorNotify_Params, 0, sizeof(BashDoorNotify_Params));

	this->ProcessEvent(uFnBashDoorNotify, &BashDoorNotify_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventDamageTargetRangeTickNotify()
{
	static UFunction* uFnDamageTargetRangeTickNotify = nullptr;

	if (!uFnDamageTargetRangeTickNotify)
	{
		uFnDamageTargetRangeTickNotify = UFunction::FindFunction("Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify");
	}

	AOLEnemyPawn_eventDamageTargetRangeTickNotify_Params DamageTargetRangeTickNotify_Params;
	memset(&DamageTargetRangeTickNotify_Params, 0, sizeof(DamageTargetRangeTickNotify_Params));

	this->ProcessEvent(uFnDamageTargetRangeTickNotify, &DamageTargetRangeTickNotify_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventDamageTargetRangeStartNotify()
{
	static UFunction* uFnDamageTargetRangeStartNotify = nullptr;

	if (!uFnDamageTargetRangeStartNotify)
	{
		uFnDamageTargetRangeStartNotify = UFunction::FindFunction("Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify");
	}

	AOLEnemyPawn_eventDamageTargetRangeStartNotify_Params DamageTargetRangeStartNotify_Params;
	memset(&DamageTargetRangeStartNotify_Params, 0, sizeof(DamageTargetRangeStartNotify_Params));

	this->ProcessEvent(uFnDamageTargetRangeStartNotify, &DamageTargetRangeStartNotify_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.DamageTarget
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventDamageTarget()
{
	static UFunction* uFnDamageTarget = nullptr;

	if (!uFnDamageTarget)
	{
		uFnDamageTarget = UFunction::FindFunction("Function OLGame.OLEnemyPawn.DamageTarget");
	}

	AOLEnemyPawn_eventDamageTarget_Params DamageTarget_Params;
	memset(&DamageTarget_Params, 0, sizeof(DamageTarget_Params));

	this->ProcessEvent(uFnDamageTarget, &DamageTarget_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.Destroyed
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function OLGame.OLEnemyPawn.Destroyed");
	}

	AOLEnemyPawn_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.BuildScriptAnimSetList
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventBuildScriptAnimSetList()
{
	static UFunction* uFnBuildScriptAnimSetList = nullptr;

	if (!uFnBuildScriptAnimSetList)
	{
		uFnBuildScriptAnimSetList = UFunction::FindFunction("Function OLGame.OLEnemyPawn.BuildScriptAnimSetList");
	}

	AOLEnemyPawn_eventBuildScriptAnimSetList_Params BuildScriptAnimSetList_Params;
	memset(&BuildScriptAnimSetList_Params, 0, sizeof(BuildScriptAnimSetList_Params));

	this->ProcessEvent(uFnBuildScriptAnimSetList, &BuildScriptAnimSetList_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::UpdateDifficultyBasedValues()
{
	static UFunction* uFnUpdateDifficultyBasedValues = nullptr;

	if (!uFnUpdateDifficultyBasedValues)
	{
		uFnUpdateDifficultyBasedValues = UFunction::FindFunction("Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues");
	}

	AOLEnemyPawn_execUpdateDifficultyBasedValues_Params UpdateDifficultyBasedValues_Params;
	memset(&UpdateDifficultyBasedValues_Params, 0, sizeof(UpdateDifficultyBasedValues_Params));

	this->ProcessEvent(uFnUpdateDifficultyBasedValues, &UpdateDifficultyBasedValues_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.ApplyModifiers
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEnemyModifiers         NewModifiers                   (CPF_Parm)

void AOLEnemyPawn::eventApplyModifiers(struct FEnemyModifiers NewModifiers)
{
	static UFunction* uFnApplyModifiers = nullptr;

	if (!uFnApplyModifiers)
	{
		uFnApplyModifiers = UFunction::FindFunction("Function OLGame.OLEnemyPawn.ApplyModifiers");
	}

	AOLEnemyPawn_eventApplyModifiers_Params ApplyModifiers_Params;
	memset(&ApplyModifiers_Params, 0, sizeof(ApplyModifiers_Params));
	memcpy_s(&ApplyModifiers_Params.NewModifiers, sizeof(ApplyModifiers_Params.NewModifiers), &NewModifiers, sizeof(NewModifiers));

	this->ProcessEvent(uFnApplyModifiers, &ApplyModifiers_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.PostInitAnimTree
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USkeletalMeshComponent*  SkelComp                       (CPF_Parm | CPF_EditInline)

void AOLEnemyPawn::eventPostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static UFunction* uFnPostInitAnimTree = nullptr;

	if (!uFnPostInitAnimTree)
	{
		uFnPostInitAnimTree = UFunction::FindFunction("Function OLGame.OLEnemyPawn.PostInitAnimTree");
	}

	AOLEnemyPawn_eventPostInitAnimTree_Params PostInitAnimTree_Params;
	memset(&PostInitAnimTree_Params, 0, sizeof(PostInitAnimTree_Params));
	memcpy_s(&PostInitAnimTree_Params.SkelComp, sizeof(PostInitAnimTree_Params.SkelComp), &SkelComp, sizeof(SkelComp));

	this->ProcessEvent(uFnPostInitAnimTree, &PostInitAnimTree_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.PossessedBy
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AController*             C                              (CPF_Parm)
// bool                           bVehicleTransition             (CPF_Parm)

void AOLEnemyPawn::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static UFunction* uFnPossessedBy = nullptr;

	if (!uFnPossessedBy)
	{
		uFnPossessedBy = UFunction::FindFunction("Function OLGame.OLEnemyPawn.PossessedBy");
	}

	AOLEnemyPawn_execPossessedBy_Params PossessedBy_Params;
	memset(&PossessedBy_Params, 0, sizeof(PossessedBy_Params));
	memcpy_s(&PossessedBy_Params.C, sizeof(PossessedBy_Params.C), &C, sizeof(C));
	PossessedBy_Params.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent(uFnPossessedBy, &PossessedBy_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.ZeroMovementVariables
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::ZeroMovementVariables()
{
	static UFunction* uFnZeroMovementVariables = nullptr;

	if (!uFnZeroMovementVariables)
	{
		uFnZeroMovementVariables = UFunction::FindFunction("Function OLGame.OLEnemyPawn.ZeroMovementVariables");
	}

	AOLEnemyPawn_execZeroMovementVariables_Params ZeroMovementVariables_Params;
	memset(&ZeroMovementVariables_Params, 0, sizeof(ZeroMovementVariables_Params));

	this->ProcessEvent(uFnZeroMovementVariables, &ZeroMovementVariables_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLEnemyPawn.PostBeginPlay");
	}

	AOLEnemyPawn_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.AIStartingMove
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::AIStartingMove()
{
	static UFunction* uFnAIStartingMove = nullptr;

	if (!uFnAIStartingMove)
	{
		uFnAIStartingMove = UFunction::FindFunction("Function OLGame.OLEnemyPawn.AIStartingMove");
	}

	AOLEnemyPawn_execAIStartingMove_Params AIStartingMove_Params;
	memset(&AIStartingMove_Params, 0, sizeof(AIStartingMove_Params));

	this->ProcessEvent(uFnAIStartingMove, &AIStartingMove_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AOLEnemyPawn::HasRegisteredNavMeshRecently()
{
	static UFunction* uFnHasRegisteredNavMeshRecently = nullptr;

	if (!uFnHasRegisteredNavMeshRecently)
	{
		uFnHasRegisteredNavMeshRecently = UFunction::FindFunction("Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently");
	}

	AOLEnemyPawn_execHasRegisteredNavMeshRecently_Params HasRegisteredNavMeshRecently_Params;
	memset(&HasRegisteredNavMeshRecently_Params, 0, sizeof(HasRegisteredNavMeshRecently_Params));

	this->ProcessEvent(uFnHasRegisteredNavMeshRecently, &HasRegisteredNavMeshRecently_Params, nullptr);

	return HasRegisteredNavMeshRecently_Params.ReturnValue;
};

// Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::UpdateNavMeshObstacle()
{
	static UFunction* uFnUpdateNavMeshObstacle = nullptr;

	if (!uFnUpdateNavMeshObstacle)
	{
		uFnUpdateNavMeshObstacle = UFunction::FindFunction("Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle");
	}

	AOLEnemyPawn_execUpdateNavMeshObstacle_Params UpdateNavMeshObstacle_Params;
	memset(&UpdateNavMeshObstacle_Params, 0, sizeof(UpdateNavMeshObstacle_Params));

	this->ProcessEvent(uFnUpdateNavMeshObstacle, &UpdateNavMeshObstacle_Params, nullptr);
};

// Function OLGame.OLEnemyPawn.CancelSpecialMove
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::CancelSpecialMove()
{
	static UFunction* uFnCancelSpecialMove = nullptr;

	if (!uFnCancelSpecialMove)
	{
		uFnCancelSpecialMove = UFunction::FindFunction("Function OLGame.OLEnemyPawn.CancelSpecialMove");
	}

	AOLEnemyPawn_execCancelSpecialMove_Params CancelSpecialMove_Params;
	memset(&CancelSpecialMove_Params, 0, sizeof(CancelSpecialMove_Params));

	uFnCancelSpecialMove->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCancelSpecialMove, &CancelSpecialMove_Params, nullptr);
	uFnCancelSpecialMove->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.StartSpecialMove
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ESpecialMoveType               moveType                       (CPF_Parm)
// struct FVector                 targetPosition                 (CPF_OptionalParm | CPF_Parm)
// struct FVector                 TargetDirection                (CPF_OptionalParm | CPF_Parm)
// EAdjustPositionTargetType      TargetType                     (CPF_OptionalParm | CPF_Parm)

void AOLEnemyPawn::StartSpecialMove(ESpecialMoveType moveType, struct FVector targetPosition, struct FVector TargetDirection, EAdjustPositionTargetType TargetType)
{
	static UFunction* uFnStartSpecialMove = nullptr;

	if (!uFnStartSpecialMove)
	{
		uFnStartSpecialMove = UFunction::FindFunction("Function OLGame.OLEnemyPawn.StartSpecialMove");
	}

	AOLEnemyPawn_execStartSpecialMove_Params StartSpecialMove_Params;
	memset(&StartSpecialMove_Params, 0, sizeof(StartSpecialMove_Params));
	memcpy_s(&StartSpecialMove_Params.moveType, sizeof(StartSpecialMove_Params.moveType), &moveType, sizeof(moveType));
	memcpy_s(&StartSpecialMove_Params.targetPosition, sizeof(StartSpecialMove_Params.targetPosition), &targetPosition, sizeof(targetPosition));
	memcpy_s(&StartSpecialMove_Params.TargetDirection, sizeof(StartSpecialMove_Params.TargetDirection), &TargetDirection, sizeof(TargetDirection));
	memcpy_s(&StartSpecialMove_Params.TargetType, sizeof(StartSpecialMove_Params.TargetType), &TargetType, sizeof(TargetType));

	uFnStartSpecialMove->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartSpecialMove, &StartSpecialMove_Params, nullptr);
	uFnStartSpecialMove->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::UnregisterNavmeshObstacle()
{
	static UFunction* uFnUnregisterNavmeshObstacle = nullptr;

	if (!uFnUnregisterNavmeshObstacle)
	{
		uFnUnregisterNavmeshObstacle = UFunction::FindFunction("Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle");
	}

	AOLEnemyPawn_execUnregisterNavmeshObstacle_Params UnregisterNavmeshObstacle_Params;
	memset(&UnregisterNavmeshObstacle_Params, 0, sizeof(UnregisterNavmeshObstacle_Params));

	uFnUnregisterNavmeshObstacle->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterNavmeshObstacle, &UnregisterNavmeshObstacle_Params, nullptr);
	uFnUnregisterNavmeshObstacle->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyPawn::RegisterNavMeshObstacle()
{
	static UFunction* uFnRegisterNavMeshObstacle = nullptr;

	if (!uFnRegisterNavMeshObstacle)
	{
		uFnRegisterNavMeshObstacle = UFunction::FindFunction("Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle");
	}

	AOLEnemyPawn_execRegisterNavMeshObstacle_Params RegisterNavMeshObstacle_Params;
	memset(&RegisterNavMeshObstacle_Params, 0, sizeof(RegisterNavMeshObstacle_Params));

	uFnRegisterNavMeshObstacle->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterNavMeshObstacle, &RegisterNavMeshObstacle_Params, nullptr);
	uFnRegisterNavMeshObstacle->FunctionFlags |= 0x400;
};

// Function OLGame.OLBTTask.DisplayDebug
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 aCanvas                        (CPF_Parm)
// float                          XL                             (CPF_Parm)
// float                          XPos                           (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void UOLBTTask::DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLBTTask.DisplayDebug");
	}

	UOLBTTask_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.aCanvas, sizeof(DisplayDebug_Params.aCanvas), &aCanvas, sizeof(aCanvas));
	memcpy_s(&DisplayDebug_Params.XL, sizeof(DisplayDebug_Params.XL), &XL, sizeof(XL));
	memcpy_s(&DisplayDebug_Params.XPos, sizeof(DisplayDebug_Params.XPos), &XPos, sizeof(XPos));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLBTCompositeTask.DisplayDebug
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 aCanvas                        (CPF_Parm)
// float                          XL                             (CPF_Parm)
// float                          XPos                           (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void UOLBTCompositeTask::DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function OLGame.OLBTCompositeTask.DisplayDebug");
	}

	UOLBTCompositeTask_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	memcpy_s(&DisplayDebug_Params.aCanvas, sizeof(DisplayDebug_Params.aCanvas), &aCanvas, sizeof(aCanvas));
	memcpy_s(&DisplayDebug_Params.XL, sizeof(DisplayDebug_Params.XL), &XL, sizeof(XL));
	memcpy_s(&DisplayDebug_Params.XPos, sizeof(DisplayDebug_Params.XPos), &XPos, sizeof(XPos));
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function OLGame.OLBTIfTask.Condition
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTIfTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTIfTask.Condition");
	}

	UOLBTIfTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLNavigationHandle.PointReachable
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 OverrideStartPoint             (CPF_OptionalParm | CPF_Parm)
// bool                           bAllowHitsInEndCollisionBox    (CPF_OptionalParm | CPF_Parm)

bool UOLNavigationHandle::PointReachable(struct FVector Point, struct FVector OverrideStartPoint, bool bAllowHitsInEndCollisionBox)
{
	static UFunction* uFnPointReachable = nullptr;

	if (!uFnPointReachable)
	{
		uFnPointReachable = UFunction::FindFunction("Function OLGame.OLNavigationHandle.PointReachable");
	}

	UOLNavigationHandle_execPointReachable_Params PointReachable_Params;
	memset(&PointReachable_Params, 0, sizeof(PointReachable_Params));
	memcpy_s(&PointReachable_Params.Point, sizeof(PointReachable_Params.Point), &Point, sizeof(Point));
	memcpy_s(&PointReachable_Params.OverrideStartPoint, sizeof(PointReachable_Params.OverrideStartPoint), &OverrideStartPoint, sizeof(OverrideStartPoint));
	PointReachable_Params.bAllowHitsInEndCollisionBox = bAllowHitsInEndCollisionBox;

	uFnPointReachable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPointReachable, &PointReachable_Params, nullptr);
	uFnPointReachable->FunctionFlags |= 0x400;

	return PointReachable_Params.ReturnValue;
};

// Function OLGame.OLNavigationHandle.TrimPathByDistance
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DistanceToTrim                 (CPF_Parm)
// bool                           bStopAtMeshObject              (CPF_OptionalParm | CPF_Parm)
// struct FVector                 out_NewDestination             (CPF_Parm | CPF_OutParm)

bool UOLNavigationHandle::TrimPathByDistance(float DistanceToTrim, bool bStopAtMeshObject, struct FVector& out_NewDestination)
{
	static UFunction* uFnTrimPathByDistance = nullptr;

	if (!uFnTrimPathByDistance)
	{
		uFnTrimPathByDistance = UFunction::FindFunction("Function OLGame.OLNavigationHandle.TrimPathByDistance");
	}

	UOLNavigationHandle_execTrimPathByDistance_Params TrimPathByDistance_Params;
	memset(&TrimPathByDistance_Params, 0, sizeof(TrimPathByDistance_Params));
	memcpy_s(&TrimPathByDistance_Params.DistanceToTrim, sizeof(TrimPathByDistance_Params.DistanceToTrim), &DistanceToTrim, sizeof(DistanceToTrim));
	TrimPathByDistance_Params.bStopAtMeshObject = bStopAtMeshObject;
	memcpy_s(&TrimPathByDistance_Params.out_NewDestination, sizeof(TrimPathByDistance_Params.out_NewDestination), &out_NewDestination, sizeof(out_NewDestination));

	uFnTrimPathByDistance->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTrimPathByDistance, &TrimPathByDistance_Params, nullptr);
	uFnTrimPathByDistance->FunctionFlags |= 0x400;

	memcpy_s(&out_NewDestination, sizeof(out_NewDestination), &TrimPathByDistance_Params.out_NewDestination, sizeof(TrimPathByDistance_Params.out_NewDestination));

	return TrimPathByDistance_Params.ReturnValue;
};

// Function OLGame.OLNavigationHandle.TrimPathToLastDoor
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 out_NewDestination             (CPF_Parm | CPF_OutParm)

bool UOLNavigationHandle::TrimPathToLastDoor(struct FVector& out_NewDestination)
{
	static UFunction* uFnTrimPathToLastDoor = nullptr;

	if (!uFnTrimPathToLastDoor)
	{
		uFnTrimPathToLastDoor = UFunction::FindFunction("Function OLGame.OLNavigationHandle.TrimPathToLastDoor");
	}

	UOLNavigationHandle_execTrimPathToLastDoor_Params TrimPathToLastDoor_Params;
	memset(&TrimPathToLastDoor_Params, 0, sizeof(TrimPathToLastDoor_Params));
	memcpy_s(&TrimPathToLastDoor_Params.out_NewDestination, sizeof(TrimPathToLastDoor_Params.out_NewDestination), &out_NewDestination, sizeof(out_NewDestination));

	uFnTrimPathToLastDoor->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTrimPathToLastDoor, &TrimPathToLastDoor_Params, nullptr);
	uFnTrimPathToLastDoor->FunctionFlags |= 0x400;

	memcpy_s(&out_NewDestination, sizeof(out_NewDestination), &TrimPathToLastDoor_Params.out_NewDestination, sizeof(TrimPathToLastDoor_Params.out_NewDestination));

	return TrimPathToLastDoor_Params.ReturnValue;
};

// Function OLGame.OLNavigationHandle.ClearPath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLNavigationHandle::ClearPath()
{
	static UFunction* uFnClearPath = nullptr;

	if (!uFnClearPath)
	{
		uFnClearPath = UFunction::FindFunction("Function OLGame.OLNavigationHandle.ClearPath");
	}

	UOLNavigationHandle_execClearPath_Params ClearPath_Params;
	memset(&ClearPath_Params, 0, sizeof(ClearPath_Params));

	uFnClearPath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearPath, &ClearPath_Params, nullptr);
	uFnClearPath->FunctionFlags |= 0x400;
};

// Function OLGame.OLNavigationHandle.PopMoveLocation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLNavigationHandle::PopMoveLocation()
{
	static UFunction* uFnPopMoveLocation = nullptr;

	if (!uFnPopMoveLocation)
	{
		uFnPopMoveLocation = UFunction::FindFunction("Function OLGame.OLNavigationHandle.PopMoveLocation");
	}

	UOLNavigationHandle_execPopMoveLocation_Params PopMoveLocation_Params;
	memset(&PopMoveLocation_Params, 0, sizeof(PopMoveLocation_Params));

	uFnPopMoveLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPopMoveLocation, &PopMoveLocation_Params, nullptr);
	uFnPopMoveLocation->FunctionFlags |= 0x400;
};

// Function OLGame.OLNavigationHandle.GetNextMovePath
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          ArrivalDistance                (CPF_Parm)
// TArray<struct FVector>         out_MovePath                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOLNavigationHandle::GetNextMovePath(float ArrivalDistance, TArray<struct FVector>& out_MovePath)
{
	static UFunction* uFnGetNextMovePath = nullptr;

	if (!uFnGetNextMovePath)
	{
		uFnGetNextMovePath = UFunction::FindFunction("Function OLGame.OLNavigationHandle.GetNextMovePath");
	}

	UOLNavigationHandle_execGetNextMovePath_Params GetNextMovePath_Params;
	memset(&GetNextMovePath_Params, 0, sizeof(GetNextMovePath_Params));
	memcpy_s(&GetNextMovePath_Params.ArrivalDistance, sizeof(GetNextMovePath_Params.ArrivalDistance), &ArrivalDistance, sizeof(ArrivalDistance));
	memcpy_s(&GetNextMovePath_Params.out_MovePath, sizeof(GetNextMovePath_Params.out_MovePath), &out_MovePath, sizeof(out_MovePath));

	uFnGetNextMovePath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNextMovePath, &GetNextMovePath_Params, nullptr);
	uFnGetNextMovePath->FunctionFlags |= 0x400;

	memcpy_s(&out_MovePath, sizeof(out_MovePath), &GetNextMovePath_Params.out_MovePath, sizeof(GetNextMovePath_Params.out_MovePath));

	return GetNextMovePath_Params.ReturnValue;
};

// Function OLGame.OLNavigationHandle.GetNextMoveLocation
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          ArrivalDistance                (CPF_Parm)
// struct FVector                 out_MoveDest                   (CPF_Parm | CPF_OutParm)

bool UOLNavigationHandle::GetNextMoveLocation(float ArrivalDistance, struct FVector& out_MoveDest)
{
	static UFunction* uFnGetNextMoveLocation = nullptr;

	if (!uFnGetNextMoveLocation)
	{
		uFnGetNextMoveLocation = UFunction::FindFunction("Function OLGame.OLNavigationHandle.GetNextMoveLocation");
	}

	UOLNavigationHandle_execGetNextMoveLocation_Params GetNextMoveLocation_Params;
	memset(&GetNextMoveLocation_Params, 0, sizeof(GetNextMoveLocation_Params));
	memcpy_s(&GetNextMoveLocation_Params.ArrivalDistance, sizeof(GetNextMoveLocation_Params.ArrivalDistance), &ArrivalDistance, sizeof(ArrivalDistance));
	memcpy_s(&GetNextMoveLocation_Params.out_MoveDest, sizeof(GetNextMoveLocation_Params.out_MoveDest), &out_MoveDest, sizeof(out_MoveDest));

	uFnGetNextMoveLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNextMoveLocation, &GetNextMoveLocation_Params, nullptr);
	uFnGetNextMoveLocation->FunctionFlags |= 0x400;

	memcpy_s(&out_MoveDest, sizeof(out_MoveDest), &GetNextMoveLocation_Params.out_MoveDest, sizeof(GetNextMoveLocation_Params.out_MoveDest));

	return GetNextMoveLocation_Params.ReturnValue;
};

// Function OLGame.OLNavigationHandle.FindPath
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  out_DestActor                  (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
// int32_t                        out_DestItem                   (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

bool UOLNavigationHandle::FindPath(class AActor*& out_DestActor, int32_t& out_DestItem)
{
	static UFunction* uFnFindPath = nullptr;

	if (!uFnFindPath)
	{
		uFnFindPath = UFunction::FindFunction("Function OLGame.OLNavigationHandle.FindPath");
	}

	UOLNavigationHandle_execFindPath_Params FindPath_Params;
	memset(&FindPath_Params, 0, sizeof(FindPath_Params));
	memcpy_s(&FindPath_Params.out_DestActor, sizeof(FindPath_Params.out_DestActor), &out_DestActor, sizeof(out_DestActor));
	memcpy_s(&FindPath_Params.out_DestItem, sizeof(FindPath_Params.out_DestItem), &out_DestItem, sizeof(out_DestItem));

	uFnFindPath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindPath, &FindPath_Params, nullptr);
	uFnFindPath->FunctionFlags |= 0x400;

	memcpy_s(&out_DestActor, sizeof(out_DestActor), &FindPath_Params.out_DestActor, sizeof(FindPath_Params.out_DestActor));
	memcpy_s(&out_DestItem, sizeof(out_DestItem), &FindPath_Params.out_DestItem, sizeof(FindPath_Params.out_DestItem));

	return FindPath_Params.ReturnValue;
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLNavMeshPath_SimilarToLastPath::eventRecycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle");
	}

	UOLNavMeshPath_SimilarToLastPath_eventRecycle_Params Recycle_Params;
	memset(&Recycle_Params, 0, sizeof(Recycle_Params));

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)

bool UOLNavMeshPath_SimilarToLastPath::SimilarToLastPath(class UNavigationHandle* NavHandle)
{
	static UFunction* uFnSimilarToLastPath = nullptr;

	if (!uFnSimilarToLastPath)
	{
		uFnSimilarToLastPath = UFunction::FindFunction("Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath");
	}

	UOLNavMeshPath_SimilarToLastPath_execSimilarToLastPath_Params SimilarToLastPath_Params;
	memset(&SimilarToLastPath_Params, 0, sizeof(SimilarToLastPath_Params));
	memcpy_s(&SimilarToLastPath_Params.NavHandle, sizeof(SimilarToLastPath_Params.NavHandle), &NavHandle, sizeof(NavHandle));

	UOLNavMeshPath_SimilarToLastPath::StaticClass()->ProcessEvent(uFnSimilarToLastPath, &SimilarToLastPath_Params, nullptr);

	return SimilarToLastPath_Params.ReturnValue;
};

// Function OLGame.OLEnemyCannibal.NativeOnAnimEnd
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AOLEnemyCannibal::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnNativeOnAnimEnd = nullptr;

	if (!uFnNativeOnAnimEnd)
	{
		uFnNativeOnAnimEnd = UFunction::FindFunction("Function OLGame.OLEnemyCannibal.NativeOnAnimEnd");
	}

	AOLEnemyCannibal_execNativeOnAnimEnd_Params NativeOnAnimEnd_Params;
	memset(&NativeOnAnimEnd_Params, 0, sizeof(NativeOnAnimEnd_Params));
	memcpy_s(&NativeOnAnimEnd_Params.SeqNode, sizeof(NativeOnAnimEnd_Params.SeqNode), &SeqNode, sizeof(SeqNode));
	memcpy_s(&NativeOnAnimEnd_Params.PlayedTime, sizeof(NativeOnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&NativeOnAnimEnd_Params.ExcessTime, sizeof(NativeOnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	uFnNativeOnAnimEnd->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeOnAnimEnd, &NativeOnAnimEnd_Params, nullptr);
	uFnNativeOnAnimEnd->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyCannibal.NativeHideWeapon
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyCannibal::NativeHideWeapon()
{
	static UFunction* uFnNativeHideWeapon = nullptr;

	if (!uFnNativeHideWeapon)
	{
		uFnNativeHideWeapon = UFunction::FindFunction("Function OLGame.OLEnemyCannibal.NativeHideWeapon");
	}

	AOLEnemyCannibal_execNativeHideWeapon_Params NativeHideWeapon_Params;
	memset(&NativeHideWeapon_Params, 0, sizeof(NativeHideWeapon_Params));

	uFnNativeHideWeapon->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeHideWeapon, &NativeHideWeapon_Params, nullptr);
	uFnNativeHideWeapon->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyCannibal.HideWeapon
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyCannibal::eventHideWeapon()
{
	static UFunction* uFnHideWeapon = nullptr;

	if (!uFnHideWeapon)
	{
		uFnHideWeapon = UFunction::FindFunction("Function OLGame.OLEnemyCannibal.HideWeapon");
	}

	AOLEnemyCannibal_eventHideWeapon_Params HideWeapon_Params;
	memset(&HideWeapon_Params, 0, sizeof(HideWeapon_Params));

	this->ProcessEvent(uFnHideWeapon, &HideWeapon_Params, nullptr);
};

// Function OLGame.OLEnemyCannibal.BuildScriptAnimSetList
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyCannibal::eventBuildScriptAnimSetList()
{
	static UFunction* uFnBuildScriptAnimSetList = nullptr;

	if (!uFnBuildScriptAnimSetList)
	{
		uFnBuildScriptAnimSetList = UFunction::FindFunction("Function OLGame.OLEnemyCannibal.BuildScriptAnimSetList");
	}

	AOLEnemyCannibal_eventBuildScriptAnimSetList_Params BuildScriptAnimSetList_Params;
	memset(&BuildScriptAnimSetList_Params, 0, sizeof(BuildScriptAnimSetList_Params));

	this->ProcessEvent(uFnBuildScriptAnimSetList, &BuildScriptAnimSetList_Params, nullptr);
};

// Function OLGame.OLEnemySurgeon.NativeOnAnimEnd
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AOLEnemySurgeon::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnNativeOnAnimEnd = nullptr;

	if (!uFnNativeOnAnimEnd)
	{
		uFnNativeOnAnimEnd = UFunction::FindFunction("Function OLGame.OLEnemySurgeon.NativeOnAnimEnd");
	}

	AOLEnemySurgeon_execNativeOnAnimEnd_Params NativeOnAnimEnd_Params;
	memset(&NativeOnAnimEnd_Params, 0, sizeof(NativeOnAnimEnd_Params));
	memcpy_s(&NativeOnAnimEnd_Params.SeqNode, sizeof(NativeOnAnimEnd_Params.SeqNode), &SeqNode, sizeof(SeqNode));
	memcpy_s(&NativeOnAnimEnd_Params.PlayedTime, sizeof(NativeOnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&NativeOnAnimEnd_Params.ExcessTime, sizeof(NativeOnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	uFnNativeOnAnimEnd->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativeOnAnimEnd, &NativeOnAnimEnd_Params, nullptr);
	uFnNativeOnAnimEnd->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemySurgeon.BuildScriptAnimSetList
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemySurgeon::eventBuildScriptAnimSetList()
{
	static UFunction* uFnBuildScriptAnimSetList = nullptr;

	if (!uFnBuildScriptAnimSetList)
	{
		uFnBuildScriptAnimSetList = UFunction::FindFunction("Function OLGame.OLEnemySurgeon.BuildScriptAnimSetList");
	}

	AOLEnemySurgeon_eventBuildScriptAnimSetList_Params BuildScriptAnimSetList_Params;
	memset(&BuildScriptAnimSetList_Params, 0, sizeof(BuildScriptAnimSetList_Params));

	this->ProcessEvent(uFnBuildScriptAnimSetList, &BuildScriptAnimSetList_Params, nullptr);
};

// Function OLGame.OLEnemyNanoCloud.OnSetNanoCloudVisibility
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_SetNanoCloudVisibility* Action                         (CPF_Parm)

void AOLEnemyNanoCloud::OnSetNanoCloudVisibility(class UOLSeqAct_SetNanoCloudVisibility* Action)
{
	static UFunction* uFnOnSetNanoCloudVisibility = nullptr;

	if (!uFnOnSetNanoCloudVisibility)
	{
		uFnOnSetNanoCloudVisibility = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.OnSetNanoCloudVisibility");
	}

	AOLEnemyNanoCloud_execOnSetNanoCloudVisibility_Params OnSetNanoCloudVisibility_Params;
	memset(&OnSetNanoCloudVisibility_Params, 0, sizeof(OnSetNanoCloudVisibility_Params));
	memcpy_s(&OnSetNanoCloudVisibility_Params.Action, sizeof(OnSetNanoCloudVisibility_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnSetNanoCloudVisibility, &OnSetNanoCloudVisibility_Params, nullptr);
};

// Function OLGame.OLEnemyNanoCloud.OnMorphNanoCloud
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLSeqAct_MorphNanoCloud* Action                         (CPF_Parm)

void AOLEnemyNanoCloud::OnMorphNanoCloud(class UOLSeqAct_MorphNanoCloud* Action)
{
	static UFunction* uFnOnMorphNanoCloud = nullptr;

	if (!uFnOnMorphNanoCloud)
	{
		uFnOnMorphNanoCloud = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.OnMorphNanoCloud");
	}

	AOLEnemyNanoCloud_execOnMorphNanoCloud_Params OnMorphNanoCloud_Params;
	memset(&OnMorphNanoCloud_Params, 0, sizeof(OnMorphNanoCloud_Params));
	memcpy_s(&OnMorphNanoCloud_Params.Action, sizeof(OnMorphNanoCloud_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnMorphNanoCloud, &OnMorphNanoCloud_Params, nullptr);
};

// Function OLGame.OLEnemyNanoCloud.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyNanoCloud::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.PostBeginPlay");
	}

	AOLEnemyNanoCloud_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function OLGame.OLEnemyNanoCloud.SwitchToBloodyMaterialNotify
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyNanoCloud::SwitchToBloodyMaterialNotify()
{
	static UFunction* uFnSwitchToBloodyMaterialNotify = nullptr;

	if (!uFnSwitchToBloodyMaterialNotify)
	{
		uFnSwitchToBloodyMaterialNotify = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.SwitchToBloodyMaterialNotify");
	}

	AOLEnemyNanoCloud_execSwitchToBloodyMaterialNotify_Params SwitchToBloodyMaterialNotify_Params;
	memset(&SwitchToBloodyMaterialNotify_Params, 0, sizeof(SwitchToBloodyMaterialNotify_Params));

	uFnSwitchToBloodyMaterialNotify->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSwitchToBloodyMaterialNotify, &SwitchToBloodyMaterialNotify_Params, nullptr);
	uFnSwitchToBloodyMaterialNotify->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyNanoCloud.SetHumanForm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyNanoCloud::SetHumanForm()
{
	static UFunction* uFnSetHumanForm = nullptr;

	if (!uFnSetHumanForm)
	{
		uFnSetHumanForm = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.SetHumanForm");
	}

	AOLEnemyNanoCloud_execSetHumanForm_Params SetHumanForm_Params;
	memset(&SetHumanForm_Params, 0, sizeof(SetHumanForm_Params));

	uFnSetHumanForm->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHumanForm, &SetHumanForm_Params, nullptr);
	uFnSetHumanForm->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyNanoCloud.SetSwarmForm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyNanoCloud::SetSwarmForm()
{
	static UFunction* uFnSetSwarmForm = nullptr;

	if (!uFnSetSwarmForm)
	{
		uFnSetSwarmForm = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.SetSwarmForm");
	}

	AOLEnemyNanoCloud_execSetSwarmForm_Params SetSwarmForm_Params;
	memset(&SetSwarmForm_Params, 0, sizeof(SetSwarmForm_Params));

	uFnSetSwarmForm->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetSwarmForm, &SetSwarmForm_Params, nullptr);
	uFnSetSwarmForm->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyNanoCloud.MorphToHuman
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          TimeScale                      (CPF_OptionalParm | CPF_Parm)

void AOLEnemyNanoCloud::MorphToHuman(float TimeScale)
{
	static UFunction* uFnMorphToHuman = nullptr;

	if (!uFnMorphToHuman)
	{
		uFnMorphToHuman = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.MorphToHuman");
	}

	AOLEnemyNanoCloud_execMorphToHuman_Params MorphToHuman_Params;
	memset(&MorphToHuman_Params, 0, sizeof(MorphToHuman_Params));
	memcpy_s(&MorphToHuman_Params.TimeScale, sizeof(MorphToHuman_Params.TimeScale), &TimeScale, sizeof(TimeScale));

	uFnMorphToHuman->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMorphToHuman, &MorphToHuman_Params, nullptr);
	uFnMorphToHuman->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyNanoCloud.MorphToSwarm
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          TimeScale                      (CPF_OptionalParm | CPF_Parm)

void AOLEnemyNanoCloud::MorphToSwarm(float TimeScale)
{
	static UFunction* uFnMorphToSwarm = nullptr;

	if (!uFnMorphToSwarm)
	{
		uFnMorphToSwarm = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.MorphToSwarm");
	}

	AOLEnemyNanoCloud_execMorphToSwarm_Params MorphToSwarm_Params;
	memset(&MorphToSwarm_Params, 0, sizeof(MorphToSwarm_Params));
	memcpy_s(&MorphToSwarm_Params.TimeScale, sizeof(MorphToSwarm_Params.TimeScale), &TimeScale, sizeof(TimeScale));

	uFnMorphToSwarm->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMorphToSwarm, &MorphToSwarm_Params, nullptr);
	uFnMorphToSwarm->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemyNanoCloud.NativePostBeginPlay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AOLEnemyNanoCloud::NativePostBeginPlay()
{
	static UFunction* uFnNativePostBeginPlay = nullptr;

	if (!uFnNativePostBeginPlay)
	{
		uFnNativePostBeginPlay = UFunction::FindFunction("Function OLGame.OLEnemyNanoCloud.NativePostBeginPlay");
	}

	AOLEnemyNanoCloud_execNativePostBeginPlay_Params NativePostBeginPlay_Params;
	memset(&NativePostBeginPlay_Params, 0, sizeof(NativePostBeginPlay_Params));

	uFnNativePostBeginPlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativePostBeginPlay, &NativePostBeginPlay_Params, nullptr);
	uFnNativePostBeginPlay->FunctionFlags |= 0x400;
};

// Function OLGame.OLEnemySoldier.PlayLanded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ImpactVel                      (CPF_Parm)

void AOLEnemySoldier::PlayLanded(float ImpactVel)
{
	static UFunction* uFnPlayLanded = nullptr;

	if (!uFnPlayLanded)
	{
		uFnPlayLanded = UFunction::FindFunction("Function OLGame.OLEnemySoldier.PlayLanded");
	}

	AOLEnemySoldier_execPlayLanded_Params PlayLanded_Params;
	memset(&PlayLanded_Params, 0, sizeof(PlayLanded_Params));
	memcpy_s(&PlayLanded_Params.ImpactVel, sizeof(PlayLanded_Params.ImpactVel), &ImpactVel, sizeof(ImpactVel));

	this->ProcessEvent(uFnPlayLanded, &PlayLanded_Params, nullptr);
};

// Function OLGame.OLEnemyGroom.PlayLanded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ImpactVel                      (CPF_Parm)

void AOLEnemyGroom::PlayLanded(float ImpactVel)
{
	static UFunction* uFnPlayLanded = nullptr;

	if (!uFnPlayLanded)
	{
		uFnPlayLanded = UFunction::FindFunction("Function OLGame.OLEnemyGroom.PlayLanded");
	}

	AOLEnemyGroom_execPlayLanded_Params PlayLanded_Params;
	memset(&PlayLanded_Params, 0, sizeof(PlayLanded_Params));
	memcpy_s(&PlayLanded_Params.ImpactVel, sizeof(PlayLanded_Params.ImpactVel), &ImpactVel, sizeof(ImpactVel));

	this->ProcessEvent(uFnPlayLanded, &PlayLanded_Params, nullptr);
};

// Function OLGame.OLWaypoint.AnimStartedEvent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  InInstigator                   (CPF_Parm)

void AOLWaypoint::AnimStartedEvent(class AActor* InInstigator)
{
	static UFunction* uFnAnimStartedEvent = nullptr;

	if (!uFnAnimStartedEvent)
	{
		uFnAnimStartedEvent = UFunction::FindFunction("Function OLGame.OLWaypoint.AnimStartedEvent");
	}

	AOLWaypoint_execAnimStartedEvent_Params AnimStartedEvent_Params;
	memset(&AnimStartedEvent_Params, 0, sizeof(AnimStartedEvent_Params));
	memcpy_s(&AnimStartedEvent_Params.InInstigator, sizeof(AnimStartedEvent_Params.InInstigator), &InInstigator, sizeof(InInstigator));

	uFnAnimStartedEvent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAnimStartedEvent, &AnimStartedEvent_Params, nullptr);
	uFnAnimStartedEvent->FunctionFlags |= 0x400;
};

// Function OLGame.OLWaypoint.WaypointReachedEvent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  InInstigator                   (CPF_Parm)

void AOLWaypoint::WaypointReachedEvent(class AActor* InInstigator)
{
	static UFunction* uFnWaypointReachedEvent = nullptr;

	if (!uFnWaypointReachedEvent)
	{
		uFnWaypointReachedEvent = UFunction::FindFunction("Function OLGame.OLWaypoint.WaypointReachedEvent");
	}

	AOLWaypoint_execWaypointReachedEvent_Params WaypointReachedEvent_Params;
	memset(&WaypointReachedEvent_Params, 0, sizeof(WaypointReachedEvent_Params));
	memcpy_s(&WaypointReachedEvent_Params.InInstigator, sizeof(WaypointReachedEvent_Params.InInstigator), &InInstigator, sizeof(InInstigator));

	uFnWaypointReachedEvent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWaypointReachedEvent, &WaypointReachedEvent_Params, nullptr);
	uFnWaypointReachedEvent->FunctionFlags |= 0x400;
};

// Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqAct_AIStartPatrol::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion");
	}

	UOLSeqAct_AIStartPatrol_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqAct_AIStartPatrol::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqAct_Door.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqAct_Door::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqAct_Door.GetObjClassVersion");
	}

	UOLSeqAct_Door_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqAct_Door::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqAct_Struggle.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqAct_Struggle::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqAct_Struggle.GetObjClassVersion");
	}

	UOLSeqAct_Struggle_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqAct_Struggle::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqCond_AIState.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqCond_AIState::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqCond_AIState.GetObjClassVersion");
	}

	UOLSeqCond_AIState_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqCond_AIState::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqCond_Checkpoint::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion");
	}

	UOLSeqCond_Checkpoint_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqCond_Checkpoint::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqCond_CompareDeaths.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqCond_CompareDeaths::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqCond_CompareDeaths.GetObjClassVersion");
	}

	UOLSeqCond_CompareDeaths_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqCond_CompareDeaths::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqCond_IsTouching::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion");
	}

	UOLSeqCond_IsTouching_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqCond_IsTouching::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqEvent_ApplyCheckpointState::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion");
	}

	UOLSeqEvent_ApplyCheckpointState_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqEvent_ApplyCheckpointState::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLSeqEvent_Door.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLSeqEvent_Door::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function OLGame.OLSeqEvent_Door.GetObjClassVersion");
	}

	UOLSeqEvent_Door_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UOLSeqEvent_Door::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function OLGame.OLBTCanAttackTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTCanAttackTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTCanAttackTask.Condition");
	}

	UOLBTCanAttackTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTDistanceToPlayerTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTDistanceToPlayerTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTDistanceToPlayerTask.Condition");
	}

	UOLBTDistanceToPlayerTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTHasDisturbanceTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTHasDisturbanceTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTHasDisturbanceTask.Condition");
	}

	UOLBTHasDisturbanceTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTHasFollowPatrolTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTHasFollowPatrolTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTHasFollowPatrolTask.Condition");
	}

	UOLBTHasFollowPatrolTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTHasInvestigationPointTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTHasInvestigationPointTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTHasInvestigationPointTask.Condition");
	}

	UOLBTHasInvestigationPointTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTHasNewDisturbanceTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTHasNewDisturbanceTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTHasNewDisturbanceTask.Condition");
	}

	UOLBTHasNewDisturbanceTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTHasPatrolTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTHasPatrolTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTHasPatrolTask.Condition");
	}

	UOLBTHasPatrolTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTHasValidTargetTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTHasValidTargetTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTHasValidTargetTask.Condition");
	}

	UOLBTHasValidTargetTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTHasVisibleTargetTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTHasVisibleTargetTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTHasVisibleTargetTask.Condition");
	}

	UOLBTHasVisibleTargetTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTIsInBehaviorStateTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTIsInBehaviorStateTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTIsInBehaviorStateTask.Condition");
	}

	UOLBTIsInBehaviorStateTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTIsInMatineeTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTIsInMatineeTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTIsInMatineeTask.Condition");
	}

	UOLBTIsInMatineeTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTIsInvestigatingTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTIsInvestigatingTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTIsInvestigatingTask.Condition");
	}

	UOLBTIsInvestigatingTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTIsTargetReachableTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTIsTargetReachableTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTIsTargetReachableTask.Condition");
	}

	UOLBTIsTargetReachableTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTSawPlayerInBedTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTSawPlayerInBedTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTSawPlayerInBedTask.Condition");
	}

	UOLBTSawPlayerInBedTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTSawPlayerInLockerTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTSawPlayerInLockerTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTSawPlayerInLockerTask.Condition");
	}

	UOLBTSawPlayerInLockerTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTSawPlayerInSqueezeTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTSawPlayerInSqueezeTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTSawPlayerInSqueezeTask.Condition");
	}

	UOLBTSawPlayerInSqueezeTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTShouldAttackOnProximityTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTShouldAttackOnProximityTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTShouldAttackOnProximityTask.Condition");
	}

	UOLBTShouldAttackOnProximityTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTShouldAttackTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTShouldAttackTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTShouldAttackTask.Condition");
	}

	UOLBTShouldAttackTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTTargetNotMovingTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTTargetNotMovingTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTTargetNotMovingTask.Condition");
	}

	UOLBTTargetNotMovingTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLBTWasLastMoveFailedReasonTask.Condition
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLBTWasLastMoveFailedReasonTask::eventCondition()
{
	static UFunction* uFnCondition = nullptr;

	if (!uFnCondition)
	{
		uFnCondition = UFunction::FindFunction("Function OLGame.OLBTWasLastMoveFailedReasonTask.Condition");
	}

	UOLBTWasLastMoveFailedReasonTask_eventCondition_Params Condition_Params;
	memset(&Condition_Params, 0, sizeof(Condition_Params));

	this->ProcessEvent(uFnCondition, &Condition_Params, nullptr);

	return Condition_Params.ReturnValue;
};

// Function OLGame.OLEmailScreen.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLEmailScreen::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLEmailScreen.WidgetInitialized");
	}

	UOLEmailScreen_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLFlashBackScreen.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLFlashBackScreen::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLFlashBackScreen.WidgetInitialized");
	}

	UOLFlashBackScreen_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLFlashForwardScreen.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLFlashForwardScreen::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLFlashForwardScreen.WidgetInitialized");
	}

	UOLFlashForwardScreen_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLFlashLight.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AOLFlashLight::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function OLGame.OLFlashLight.OnToggle");
	}

	AOLFlashLight_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOLGFxMoviePlayer::OnProfileWriteComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnProfileWriteComplete = nullptr;

	if (!uFnOnProfileWriteComplete)
	{
		uFnOnProfileWriteComplete = UFunction::FindFunction("Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete");
	}

	UOLGFxMoviePlayer_execOnProfileWriteComplete_Params OnProfileWriteComplete_Params;
	memset(&OnProfileWriteComplete_Params, 0, sizeof(OnProfileWriteComplete_Params));
	memcpy_s(&OnProfileWriteComplete_Params.LocalUserNum, sizeof(OnProfileWriteComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnProfileWriteComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnProfileWriteComplete, &OnProfileWriteComplete_Params, nullptr);
};

// Function OLGame.OLGFxMoviePlayer.SaveProfile
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class AOLPlayerController*     PlayerToSave                   (CPF_OptionalParm | CPF_Parm)

bool UOLGFxMoviePlayer::SaveProfile(struct FScriptDelegate WriteProfileSettingsCompleteDelegate, class AOLPlayerController* PlayerToSave)
{
	static UFunction* uFnSaveProfile = nullptr;

	if (!uFnSaveProfile)
	{
		uFnSaveProfile = UFunction::FindFunction("Function OLGame.OLGFxMoviePlayer.SaveProfile");
	}

	UOLGFxMoviePlayer_execSaveProfile_Params SaveProfile_Params;
	memset(&SaveProfile_Params, 0, sizeof(SaveProfile_Params));
	memcpy_s(&SaveProfile_Params.WriteProfileSettingsCompleteDelegate, sizeof(SaveProfile_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));
	memcpy_s(&SaveProfile_Params.PlayerToSave, sizeof(SaveProfile_Params.PlayerToSave), &PlayerToSave, sizeof(PlayerToSave));

	this->ProcessEvent(uFnSaveProfile, &SaveProfile_Params, nullptr);

	return SaveProfile_Params.ReturnValue;
};

// Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlinePlayerInterface*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOnlinePlayerInterface* UOLGFxMoviePlayer::GetOnlinePlayerInterface()
{
	static UFunction* uFnGetOnlinePlayerInterface = nullptr;

	if (!uFnGetOnlinePlayerInterface)
	{
		uFnGetOnlinePlayerInterface = UFunction::FindFunction("Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface");
	}

	UOLGFxMoviePlayer_execGetOnlinePlayerInterface_Params GetOnlinePlayerInterface_Params;
	memset(&GetOnlinePlayerInterface_Params, 0, sizeof(GetOnlinePlayerInterface_Params));

	UOLGFxMoviePlayer::StaticClass()->ProcessEvent(uFnGetOnlinePlayerInterface, &GetOnlinePlayerInterface_Params, nullptr);

	return GetOnlinePlayerInterface_Params.ReturnValue;
};

// Function OLGame.OLGFxMoviePlayer.MuteSoundThemes
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           bMute                          (CPF_Parm)

void UOLGFxMoviePlayer::MuteSoundThemes(bool bMute)
{
	static UFunction* uFnMuteSoundThemes = nullptr;

	if (!uFnMuteSoundThemes)
	{
		uFnMuteSoundThemes = UFunction::FindFunction("Function OLGame.OLGFxMoviePlayer.MuteSoundThemes");
	}

	UOLGFxMoviePlayer_execMuteSoundThemes_Params MuteSoundThemes_Params;
	memset(&MuteSoundThemes_Params, 0, sizeof(MuteSoundThemes_Params));
	MuteSoundThemes_Params.bMute = bMute;

	this->ProcessEvent(uFnMuteSoundThemes, &MuteSoundThemes_Params, nullptr);
};

// Function OLGame.OLGFxMoviePlayer.GetGame
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLGame*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLGame* UOLGFxMoviePlayer::GetGame()
{
	static UFunction* uFnGetGame = nullptr;

	if (!uFnGetGame)
	{
		uFnGetGame = UFunction::FindFunction("Function OLGame.OLGFxMoviePlayer.GetGame");
	}

	UOLGFxMoviePlayer_execGetGame_Params GetGame_Params;
	memset(&GetGame_Params, 0, sizeof(GetGame_Params));

	UOLGFxMoviePlayer::StaticClass()->ProcessEvent(uFnGetGame, &GetGame_Params, nullptr);

	return GetGame_Params.ReturnValue;
};

// Function OLGame.OLGFxMoviePlayer.GetOLPC
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AOLPlayerController*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AOLPlayerController* UOLGFxMoviePlayer::GetOLPC()
{
	static UFunction* uFnGetOLPC = nullptr;

	if (!uFnGetOLPC)
	{
		uFnGetOLPC = UFunction::FindFunction("Function OLGame.OLGFxMoviePlayer.GetOLPC");
	}

	UOLGFxMoviePlayer_execGetOLPC_Params GetOLPC_Params;
	memset(&GetOLPC_Params, 0, sizeof(GetOLPC_Params));

	this->ProcessEvent(uFnGetOLPC, &GetOLPC_Params, nullptr);

	return GetOLPC_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.GetLocalizedString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Category                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  KeyName                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  File                           (CPF_Parm | CPF_NeedCtorLink)

class FString UOLUIFrontEnd::GetLocalizedString(class FString Category, class FString KeyName, class FString File)
{
	static UFunction* uFnGetLocalizedString = nullptr;

	if (!uFnGetLocalizedString)
	{
		uFnGetLocalizedString = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.GetLocalizedString");
	}

	UOLUIFrontEnd_execGetLocalizedString_Params GetLocalizedString_Params;
	memset(&GetLocalizedString_Params, 0, sizeof(GetLocalizedString_Params));
	memcpy_s(&GetLocalizedString_Params.Category, sizeof(GetLocalizedString_Params.Category), &Category, sizeof(Category));
	memcpy_s(&GetLocalizedString_Params.KeyName, sizeof(GetLocalizedString_Params.KeyName), &KeyName, sizeof(KeyName));
	memcpy_s(&GetLocalizedString_Params.File, sizeof(GetLocalizedString_Params.File), &File, sizeof(File));

	this->ProcessEvent(uFnGetLocalizedString, &GetLocalizedString_Params, nullptr);

	return GetLocalizedString_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  KeyNameString                  (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ConfigType                     (CPF_Parm)

class FString UOLUIFrontEnd::GetGamepadActionBoundToKey(class FString KeyNameString, int32_t ConfigType)
{
	static UFunction* uFnGetGamepadActionBoundToKey = nullptr;

	if (!uFnGetGamepadActionBoundToKey)
	{
		uFnGetGamepadActionBoundToKey = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey");
	}

	UOLUIFrontEnd_execGetGamepadActionBoundToKey_Params GetGamepadActionBoundToKey_Params;
	memset(&GetGamepadActionBoundToKey_Params, 0, sizeof(GetGamepadActionBoundToKey_Params));
	memcpy_s(&GetGamepadActionBoundToKey_Params.KeyNameString, sizeof(GetGamepadActionBoundToKey_Params.KeyNameString), &KeyNameString, sizeof(KeyNameString));
	memcpy_s(&GetGamepadActionBoundToKey_Params.ConfigType, sizeof(GetGamepadActionBoundToKey_Params.ConfigType), &ConfigType, sizeof(ConfigType));

	this->ProcessEvent(uFnGetGamepadActionBoundToKey, &GetGamepadActionBoundToKey_Params, nullptr);

	return GetGamepadActionBoundToKey_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.HasInitializedGamma
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd::HasInitializedGamma()
{
	static UFunction* uFnHasInitializedGamma = nullptr;

	if (!uFnHasInitializedGamma)
	{
		uFnHasInitializedGamma = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.HasInitializedGamma");
	}

	UOLUIFrontEnd_execHasInitializedGamma_Params HasInitializedGamma_Params;
	memset(&HasInitializedGamma_Params, 0, sizeof(HasInitializedGamma_Params));

	this->ProcessEvent(uFnHasInitializedGamma, &HasInitializedGamma_Params, nullptr);

	return HasInitializedGamma_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  KeyName                        (CPF_Parm | CPF_NeedCtorLink)

class FString UOLUIFrontEnd::GetFriendlyKeyBindingName(class FString KeyName)
{
	static UFunction* uFnGetFriendlyKeyBindingName = nullptr;

	if (!uFnGetFriendlyKeyBindingName)
	{
		uFnGetFriendlyKeyBindingName = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName");
	}

	UOLUIFrontEnd_execGetFriendlyKeyBindingName_Params GetFriendlyKeyBindingName_Params;
	memset(&GetFriendlyKeyBindingName_Params, 0, sizeof(GetFriendlyKeyBindingName_Params));
	memcpy_s(&GetFriendlyKeyBindingName_Params.KeyName, sizeof(GetFriendlyKeyBindingName_Params.KeyName), &KeyName, sizeof(KeyName));

	this->ProcessEvent(uFnGetFriendlyKeyBindingName, &GetFriendlyKeyBindingName_Params, nullptr);

	return GetFriendlyKeyBindingName_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.StartKeyBindingCapture
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd::StartKeyBindingCapture()
{
	static UFunction* uFnStartKeyBindingCapture = nullptr;

	if (!uFnStartKeyBindingCapture)
	{
		uFnStartKeyBindingCapture = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.StartKeyBindingCapture");
	}

	UOLUIFrontEnd_execStartKeyBindingCapture_Params StartKeyBindingCapture_Params;
	memset(&StartKeyBindingCapture_Params, 0, sizeof(StartKeyBindingCapture_Params));

	this->ProcessEvent(uFnStartKeyBindingCapture, &StartKeyBindingCapture_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.FilterButtonInput");
	}

	UOLUIFrontEnd_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.WidgetInitialized");
	}

	UOLUIFrontEnd_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.ConfigureTargetView
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLUIFrontEnd_View*      targetView                     (CPF_Parm)

void UOLUIFrontEnd::ConfigureTargetView(class UOLUIFrontEnd_View* targetView)
{
	static UFunction* uFnConfigureTargetView = nullptr;

	if (!uFnConfigureTargetView)
	{
		uFnConfigureTargetView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.ConfigureTargetView");
	}

	UOLUIFrontEnd_execConfigureTargetView_Params ConfigureTargetView_Params;
	memset(&ConfigureTargetView_Params, 0, sizeof(ConfigureTargetView_Params));
	memcpy_s(&ConfigureTargetView_Params.targetView, sizeof(ConfigureTargetView_Params.targetView), &targetView, sizeof(targetView));

	this->ProcessEvent(uFnConfigureTargetView, &ConfigureTargetView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.ConfigureView
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLUIFrontEnd_View*      InView                         (CPF_Parm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)

void UOLUIFrontEnd::ConfigureView(class UOLUIFrontEnd_View* InView, struct FName WidgetName, struct FName WidgetPath)
{
	static UFunction* uFnConfigureView = nullptr;

	if (!uFnConfigureView)
	{
		uFnConfigureView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.ConfigureView");
	}

	UOLUIFrontEnd_execConfigureView_Params ConfigureView_Params;
	memset(&ConfigureView_Params, 0, sizeof(ConfigureView_Params));
	memcpy_s(&ConfigureView_Params.InView, sizeof(ConfigureView_Params.InView), &InView, sizeof(InView));
	memcpy_s(&ConfigureView_Params.WidgetName, sizeof(ConfigureView_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&ConfigureView_Params.WidgetPath, sizeof(ConfigureView_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));

	this->ProcessEvent(uFnConfigureView, &ConfigureView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.PopViewStub
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UOLUIFrontEnd::PopViewStub()
{
	static UFunction* uFnPopViewStub = nullptr;

	if (!uFnPopViewStub)
	{
		uFnPopViewStub = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.PopViewStub");
	}

	UOLUIFrontEnd_execPopViewStub_Params PopViewStub_Params;
	memset(&PopViewStub_Params, 0, sizeof(PopViewStub_Params));

	this->ProcessEvent(uFnPopViewStub, &PopViewStub_Params, nullptr);

	return PopViewStub_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.PopView
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UOLUIFrontEnd::PopView()
{
	static UFunction* uFnPopView = nullptr;

	if (!uFnPopView)
	{
		uFnPopView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.PopView");
	}

	UOLUIFrontEnd_execPopView_Params PopView_Params;
	memset(&PopView_Params, 0, sizeof(PopView_Params));

	this->ProcessEvent(uFnPopView, &PopView_Params, nullptr);

	return PopView_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd.PushViewByName
// [0x00024003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   TargetViewName                 (CPF_Parm)
// class UOLUIFrontEnd_Screen*    ParentView                     (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd::PushViewByName(struct FName TargetViewName, class UOLUIFrontEnd_Screen* ParentView)
{
	static UFunction* uFnPushViewByName = nullptr;

	if (!uFnPushViewByName)
	{
		uFnPushViewByName = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.PushViewByName");
	}

	UOLUIFrontEnd_execPushViewByName_Params PushViewByName_Params;
	memset(&PushViewByName_Params, 0, sizeof(PushViewByName_Params));
	memcpy_s(&PushViewByName_Params.TargetViewName, sizeof(PushViewByName_Params.TargetViewName), &TargetViewName, sizeof(TargetViewName));
	memcpy_s(&PushViewByName_Params.ParentView, sizeof(PushViewByName_Params.ParentView), &ParentView, sizeof(ParentView));

	this->ProcessEvent(uFnPushViewByName, &PushViewByName_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.PushView
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLUIFrontEnd_View*      targetView                     (CPF_Parm | CPF_CoerceParm)

void UOLUIFrontEnd::PushView(class UOLUIFrontEnd_View* targetView)
{
	static UFunction* uFnPushView = nullptr;

	if (!uFnPushView)
	{
		uFnPushView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.PushView");
	}

	UOLUIFrontEnd_execPushView_Params PushView_Params;
	memset(&PushView_Params, 0, sizeof(PushView_Params));
	memcpy_s(&PushView_Params.targetView, sizeof(PushView_Params.targetView), &targetView, sizeof(targetView));

	this->ProcessEvent(uFnPushView, &PushView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.LoadView
// [0x00820003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FViewInfo               InViewInfo                     (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd::LoadView(struct FViewInfo InViewInfo)
{
	static UFunction* uFnLoadView = nullptr;

	if (!uFnLoadView)
	{
		uFnLoadView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.LoadView");
	}

	UOLUIFrontEnd_execLoadView_Params LoadView_Params;
	memset(&LoadView_Params, 0, sizeof(LoadView_Params));
	memcpy_s(&LoadView_Params.InViewInfo, sizeof(LoadView_Params.InViewInfo), &InViewInfo, sizeof(InViewInfo));

	this->ProcessEvent(uFnLoadView, &LoadView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.LoadViews
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd::LoadViews()
{
	static UFunction* uFnLoadViews = nullptr;

	if (!uFnLoadViews)
	{
		uFnLoadViews = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.LoadViews");
	}

	UOLUIFrontEnd_execLoadViews_Params LoadViews_Params;
	memset(&LoadViews_Params, 0, sizeof(LoadViews_Params));

	this->ProcessEvent(uFnLoadViews, &LoadViews_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.ConfigFrontEnd
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd::ConfigFrontEnd()
{
	static UFunction* uFnConfigFrontEnd = nullptr;

	if (!uFnConfigFrontEnd)
	{
		uFnConfigFrontEnd = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.ConfigFrontEnd");
	}

	UOLUIFrontEnd_execConfigFrontEnd_Params ConfigFrontEnd_Params;
	memset(&ConfigFrontEnd_Params, 0, sizeof(ConfigFrontEnd_Params));

	this->ProcessEvent(uFnConfigFrontEnd, &ConfigFrontEnd_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd::OnKeyBindingsChanged()
{
	static UFunction* uFnOnKeyBindingsChanged = nullptr;

	if (!uFnOnKeyBindingsChanged)
	{
		uFnOnKeyBindingsChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged");
	}

	UOLUIFrontEnd_execOnKeyBindingsChanged_Params OnKeyBindingsChanged_Params;
	memset(&OnKeyBindingsChanged_Params, 0, sizeof(OnKeyBindingsChanged_Params));

	this->ProcessEvent(uFnOnKeyBindingsChanged, &OnKeyBindingsChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.AddCaptureKeys
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd::AddCaptureKeys()
{
	static UFunction* uFnAddCaptureKeys = nullptr;

	if (!uFnAddCaptureKeys)
	{
		uFnAddCaptureKeys = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.AddCaptureKeys");
	}

	UOLUIFrontEnd_execAddCaptureKeys_Params AddCaptureKeys_Params;
	memset(&AddCaptureKeys_Params, 0, sizeof(AddCaptureKeys_Params));

	this->ProcessEvent(uFnAddCaptureKeys, &AddCaptureKeys_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.OnClose
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd::eventOnClose()
{
	static UFunction* uFnOnClose = nullptr;

	if (!uFnOnClose)
	{
		uFnOnClose = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.OnClose");
	}

	UOLUIFrontEnd_eventOnClose_Params OnClose_Params;
	memset(&OnClose_Params, 0, sizeof(OnClose_Params));

	this->ProcessEvent(uFnOnClose, &OnClose_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd.Start
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UOLUIFrontEnd::Start(bool StartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function OLGame.OLUIFrontEnd.Start");
	}

	UOLUIFrontEnd_execStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	Start_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnStart, &Start_Params, nullptr);

	return Start_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_MainMenu::ASShowNewGameIntroText()
{
	static UFunction* uFnASShowNewGameIntroText = nullptr;

	if (!uFnASShowNewGameIntroText)
	{
		uFnASShowNewGameIntroText = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText");
	}

	UOLUIFrontEnd_MainMenu_execASShowNewGameIntroText_Params ASShowNewGameIntroText_Params;
	memset(&ASShowNewGameIntroText_Params, 0, sizeof(ASShowNewGameIntroText_Params));

	this->ProcessEvent(uFnASShowNewGameIntroText, &ASShowNewGameIntroText_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_MainMenu::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized");
	}

	UOLUIFrontEnd_MainMenu_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnButtonClick(struct FEventData ev)
{
	static UFunction* uFnOnButtonClick = nullptr;

	if (!uFnOnButtonClick)
	{
		uFnOnButtonClick = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick");
	}

	UOLUIFrontEnd_MainMenu_execOnButtonClick_Params OnButtonClick_Params;
	memset(&OnButtonClick_Params, 0, sizeof(OnButtonClick_Params));
	memcpy_s(&OnButtonClick_Params.ev, sizeof(OnButtonClick_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnButtonClick, &OnButtonClick_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_MainMenu::PopulateButtons()
{
	static UFunction* uFnPopulateButtons = nullptr;

	if (!uFnPopulateButtons)
	{
		uFnPopulateButtons = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons");
	}

	UOLUIFrontEnd_MainMenu_execPopulateButtons_Params PopulateButtons_Params;
	memset(&PopulateButtons_Params, 0, sizeof(PopulateButtons_Params));

	this->ProcessEvent(uFnPopulateButtons, &PopulateButtons_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_MainMenu::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.back");
	}

	UOLUIFrontEnd_MainMenu_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnExitButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnExitButtonPress = nullptr;

	if (!uFnOnExitButtonPress)
	{
		uFnOnExitButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnExitButtonPress_Params OnExitButtonPress_Params;
	memset(&OnExitButtonPress_Params, 0, sizeof(OnExitButtonPress_Params));
	memcpy_s(&OnExitButtonPress_Params.ev, sizeof(OnExitButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnExitButtonPress, &OnExitButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnCreditsButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnCreditsButtonPress = nullptr;

	if (!uFnOnCreditsButtonPress)
	{
		uFnOnCreditsButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnCreditsButtonPress_Params OnCreditsButtonPress_Params;
	memset(&OnCreditsButtonPress_Params, 0, sizeof(OnCreditsButtonPress_Params));
	memcpy_s(&OnCreditsButtonPress_Params.ev, sizeof(OnCreditsButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnCreditsButtonPress, &OnCreditsButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnOptionsButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnOptionsButtonPress = nullptr;

	if (!uFnOnOptionsButtonPress)
	{
		uFnOnOptionsButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnOptionsButtonPress_Params OnOptionsButtonPress_Params;
	memset(&OnOptionsButtonPress_Params, 0, sizeof(OnOptionsButtonPress_Params));
	memcpy_s(&OnOptionsButtonPress_Params.ev, sizeof(OnOptionsButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnOptionsButtonPress, &OnOptionsButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.Select_Options
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_MainMenu::Select_Options()
{
	static UFunction* uFnSelect_Options = nullptr;

	if (!uFnSelect_Options)
	{
		uFnSelect_Options = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.Select_Options");
	}

	UOLUIFrontEnd_MainMenu_execSelect_Options_Params Select_Options_Params;
	memset(&Select_Options_Params, 0, sizeof(Select_Options_Params));

	this->ProcessEvent(uFnSelect_Options, &Select_Options_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnLoadButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnLoadButtonPress = nullptr;

	if (!uFnOnLoadButtonPress)
	{
		uFnOnLoadButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnLoadButtonPress_Params OnLoadButtonPress_Params;
	memset(&OnLoadButtonPress_Params, 0, sizeof(OnLoadButtonPress_Params));
	memcpy_s(&OnLoadButtonPress_Params.ev, sizeof(OnLoadButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnLoadButtonPress, &OnLoadButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnOKButtonClick(struct FEventData ev)
{
	static UFunction* uFnOnOKButtonClick = nullptr;

	if (!uFnOnOKButtonClick)
	{
		uFnOnOKButtonClick = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick");
	}

	UOLUIFrontEnd_MainMenu_execOnOKButtonClick_Params OnOKButtonClick_Params;
	memset(&OnOKButtonClick_Params, 0, sizeof(OnOKButtonClick_Params));
	memcpy_s(&OnOKButtonClick_Params.ev, sizeof(OnOKButtonClick_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnOKButtonClick, &OnOKButtonClick_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnChaptersButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnChaptersButtonPress = nullptr;

	if (!uFnOnChaptersButtonPress)
	{
		uFnOnChaptersButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnChaptersButtonPress_Params OnChaptersButtonPress_Params;
	memset(&OnChaptersButtonPress_Params, 0, sizeof(OnChaptersButtonPress_Params));
	memcpy_s(&OnChaptersButtonPress_Params.ev, sizeof(OnChaptersButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnChaptersButtonPress, &OnChaptersButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnStartDLCButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnStartDLCButtonPress = nullptr;

	if (!uFnOnStartDLCButtonPress)
	{
		uFnOnStartDLCButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnStartDLCButtonPress_Params OnStartDLCButtonPress_Params;
	memset(&OnStartDLCButtonPress_Params, 0, sizeof(OnStartDLCButtonPress_Params));
	memcpy_s(&OnStartDLCButtonPress_Params.ev, sizeof(OnStartDLCButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnStartDLCButtonPress, &OnStartDLCButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnStartButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnStartButtonPress = nullptr;

	if (!uFnOnStartButtonPress)
	{
		uFnOnStartButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnStartButtonPress_Params OnStartButtonPress_Params;
	memset(&OnStartButtonPress_Params, 0, sizeof(OnStartButtonPress_Params));
	memcpy_s(&OnStartButtonPress_Params.ev, sizeof(OnStartButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnStartButtonPress, &OnStartButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bSuccess                       (CPF_Parm)

void UOLUIFrontEnd_MainMenu::GameLoadedCallback(bool bSuccess)
{
	static UFunction* uFnGameLoadedCallback = nullptr;

	if (!uFnGameLoadedCallback)
	{
		uFnGameLoadedCallback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback");
	}

	UOLUIFrontEnd_MainMenu_execGameLoadedCallback_Params GameLoadedCallback_Params;
	memset(&GameLoadedCallback_Params, 0, sizeof(GameLoadedCallback_Params));
	GameLoadedCallback_Params.bSuccess = bSuccess;

	this->ProcessEvent(uFnGameLoadedCallback, &GameLoadedCallback_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_MainMenu::StartNewGame()
{
	static UFunction* uFnStartNewGame = nullptr;

	if (!uFnStartNewGame)
	{
		uFnStartNewGame = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame");
	}

	UOLUIFrontEnd_MainMenu_execStartNewGame_Params StartNewGame_Params;
	memset(&StartNewGame_Params, 0, sizeof(StartNewGame_Params));

	this->ProcessEvent(uFnStartNewGame, &StartNewGame_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_MainMenu::DifficultySelected()
{
	static UFunction* uFnDifficultySelected = nullptr;

	if (!uFnDifficultySelected)
	{
		uFnDifficultySelected = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected");
	}

	UOLUIFrontEnd_MainMenu_execDifficultySelected_Params DifficultySelected_Params;
	memset(&DifficultySelected_Params, 0, sizeof(DifficultySelected_Params));

	this->ProcessEvent(uFnDifficultySelected, &DifficultySelected_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bSuccess                       (CPF_Parm)

void UOLUIFrontEnd_MainMenu::SaveLocationSelected(bool bSuccess)
{
	static UFunction* uFnSaveLocationSelected = nullptr;

	if (!uFnSaveLocationSelected)
	{
		uFnSaveLocationSelected = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected");
	}

	UOLUIFrontEnd_MainMenu_execSaveLocationSelected_Params SaveLocationSelected_Params;
	memset(&SaveLocationSelected_Params, 0, sizeof(SaveLocationSelected_Params));
	SaveLocationSelected_Params.bSuccess = bSuccess;

	this->ProcessEvent(uFnSaveLocationSelected, &SaveLocationSelected_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnContinueButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnContinueButtonPress = nullptr;

	if (!uFnOnContinueButtonPress)
	{
		uFnOnContinueButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress");
	}

	UOLUIFrontEnd_MainMenu_execOnContinueButtonPress_Params OnContinueButtonPress_Params;
	memset(&OnContinueButtonPress_Params, 0, sizeof(OnContinueButtonPress_Params));
	memcpy_s(&OnContinueButtonPress_Params.ev, sizeof(OnContinueButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnContinueButtonPress, &OnContinueButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_MainMenu::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView");
	}

	UOLUIFrontEnd_MainMenu_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_MainMenu::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded");
	}

	UOLUIFrontEnd_MainMenu_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_Screen::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized");
	}

	UOLUIFrontEnd_Screen_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  SectionName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  KeyName                        (CPF_Parm | CPF_NeedCtorLink)

class FString UOLUIFrontEnd_Screen::LocalizeNarrative(class FString SectionName, class FString KeyName)
{
	static UFunction* uFnLocalizeNarrative = nullptr;

	if (!uFnLocalizeNarrative)
	{
		uFnLocalizeNarrative = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative");
	}

	UOLUIFrontEnd_Screen_execLocalizeNarrative_Params LocalizeNarrative_Params;
	memset(&LocalizeNarrative_Params, 0, sizeof(LocalizeNarrative_Params));
	memcpy_s(&LocalizeNarrative_Params.SectionName, sizeof(LocalizeNarrative_Params.SectionName), &SectionName, sizeof(SectionName));
	memcpy_s(&LocalizeNarrative_Params.KeyName, sizeof(LocalizeNarrative_Params.KeyName), &KeyName, sizeof(KeyName));

	this->ProcessEvent(uFnLocalizeNarrative, &LocalizeNarrative_Params, nullptr);

	return LocalizeNarrative_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Screen::IsDLCInstalled()
{
	static UFunction* uFnIsDLCInstalled = nullptr;

	if (!uFnIsDLCInstalled)
	{
		uFnIsDLCInstalled = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled");
	}

	UOLUIFrontEnd_Screen_execIsDLCInstalled_Params IsDLCInstalled_Params;
	memset(&IsDLCInstalled_Params, 0, sizeof(IsDLCInstalled_Params));

	this->ProcessEvent(uFnIsDLCInstalled, &IsDLCInstalled_Params, nullptr);

	return IsDLCInstalled_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Screen.IsDemo
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Screen::IsDemo()
{
	static UFunction* uFnIsDemo = nullptr;

	if (!uFnIsDemo)
	{
		uFnIsDemo = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Screen.IsDemo");
	}

	UOLUIFrontEnd_Screen_execIsDemo_Params IsDemo_Params;
	memset(&IsDemo_Params, 0, sizeof(IsDemo_Params));

	this->ProcessEvent(uFnIsDemo, &IsDemo_Params, nullptr);

	return IsDemo_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Screen.IsTopMostView
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Screen::IsTopMostView()
{
	static UFunction* uFnIsTopMostView = nullptr;

	if (!uFnIsTopMostView)
	{
		uFnIsTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Screen.IsTopMostView");
	}

	UOLUIFrontEnd_Screen_execIsTopMostView_Params IsTopMostView_Params;
	memset(&IsTopMostView_Params, 0, sizeof(IsTopMostView_Params));

	this->ProcessEvent(uFnIsTopMostView, &IsTopMostView_Params, nullptr);

	return IsTopMostView_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   KeyName                        (CPF_Parm)

void UOLUIFrontEnd_View::OnKeyBindingCaptured(struct FName KeyName)
{
	static UFunction* uFnOnKeyBindingCaptured = nullptr;

	if (!uFnOnKeyBindingCaptured)
	{
		uFnOnKeyBindingCaptured = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured");
	}

	UOLUIFrontEnd_View_execOnKeyBindingCaptured_Params OnKeyBindingCaptured_Params;
	memset(&OnKeyBindingCaptured_Params, 0, sizeof(OnKeyBindingCaptured_Params));
	memcpy_s(&OnKeyBindingCaptured_Params.KeyName, sizeof(OnKeyBindingCaptured_Params.KeyName), &KeyName, sizeof(KeyName));

	this->ProcessEvent(uFnOnKeyBindingCaptured, &OnKeyBindingCaptured_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_View.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_View::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.FilterButtonInput");
	}

	UOLUIFrontEnd_View_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_View.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_View::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.WidgetInitialized");
	}

	UOLUIFrontEnd_View_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_View.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_View::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.back");
	}

	UOLUIFrontEnd_View_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_View.OnViewDeactivated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_View::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.OnViewDeactivated");
	}

	UOLUIFrontEnd_View_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_View.OnViewActivated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_View::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.OnViewActivated");
	}

	UOLUIFrontEnd_View_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_View.OnTopMostView
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_View::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.OnTopMostView");
	}

	UOLUIFrontEnd_View_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_View.OnViewLoaded
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_View::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_View.OnViewLoaded");
	}

	UOLUIFrontEnd_View_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_Credits::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized");
	}

	UOLUIFrontEnd_Credits_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Credits.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Credits::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Credits.Press_Back");
	}

	UOLUIFrontEnd_Credits_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Credits::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated");
	}

	UOLUIFrontEnd_Credits_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Credits.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_Credits::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Credits.OnTopMostView");
	}

	UOLUIFrontEnd_Credits_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Credits::OnCreditsFinished()
{
	static UFunction* uFnOnCreditsFinished = nullptr;

	if (!uFnOnCreditsFinished)
	{
		uFnOnCreditsFinished = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished");
	}

	UOLUIFrontEnd_Credits_execOnCreditsFinished_Params OnCreditsFinished_Params;
	memset(&OnCreditsFinished_Params, 0, sizeof(OnCreditsFinished_Params));

	this->ProcessEvent(uFnOnCreditsFinished, &OnCreditsFinished_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Credits.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Credits::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Credits.back");
	}

	UOLUIFrontEnd_Credits_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Console.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_Console::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Console.WidgetInitialized");
	}

	UOLUIFrontEnd_Console_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIMessage.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIMessage::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIMessage.WidgetInitialized");
	}

	UOLUIMessage_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIMessage.SetMessage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EHUDMessageType                MessageType                    (CPF_Parm)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOLUIMessage::SetMessage(EHUDMessageType MessageType, class FString Message)
{
	static UFunction* uFnSetMessage = nullptr;

	if (!uFnSetMessage)
	{
		uFnSetMessage = UFunction::FindFunction("Function OLGame.OLUIMessage.SetMessage");
	}

	UOLUIMessage_execSetMessage_Params SetMessage_Params;
	memset(&SetMessage_Params, 0, sizeof(SetMessage_Params));
	memcpy_s(&SetMessage_Params.MessageType, sizeof(SetMessage_Params.MessageType), &MessageType, sizeof(MessageType));
	memcpy_s(&SetMessage_Params.Message, sizeof(SetMessage_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnSetMessage, &SetMessage_Params, nullptr);
};

// Function OLGame.OLUIMessage.SetVisible
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bVisible                       (CPF_Parm)

void UOLUIMessage::SetVisible(bool bVisible)
{
	static UFunction* uFnSetVisible = nullptr;

	if (!uFnSetVisible)
	{
		uFnSetVisible = UFunction::FindFunction("Function OLGame.OLUIMessage.SetVisible");
	}

	UOLUIMessage_execSetVisible_Params SetVisible_Params;
	memset(&SetVisible_Params, 0, sizeof(SetVisible_Params));
	SetVisible_Params.bVisible = bVisible;

	this->ProcessEvent(uFnSetVisible, &SetVisible_Params, nullptr);
};

// Function OLGame.OLUIMessage.OnClose
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIMessage::OnClose()
{
	static UFunction* uFnOnClose = nullptr;

	if (!uFnOnClose)
	{
		uFnOnClose = UFunction::FindFunction("Function OLGame.OLUIMessage.OnClose");
	}

	UOLUIMessage_execOnClose_Params OnClose_Params;
	memset(&OnClose_Params, 0, sizeof(OnClose_Params));

	this->ProcessEvent(uFnOnClose, &OnClose_Params, nullptr);
};

// Function OLGame.OLUIMessage.Start
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UOLUIMessage::Start(bool StartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function OLGame.OLUIMessage.Start");
	}

	UOLUIMessage_execStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	Start_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnStart, &Start_Params, nullptr);

	return Start_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceList.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_EvidenceList::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceList.FilterButtonInput");
	}

	UOLUIFrontEnd_EvidenceList_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceList.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_EvidenceList::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceList.WidgetInitialized");
	}

	UOLUIFrontEnd_EvidenceList_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceList.OnItemClick
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_EvidenceList::OnItemClick(struct FEventData ev)
{
	static UFunction* uFnOnItemClick = nullptr;

	if (!uFnOnItemClick)
	{
		uFnOnItemClick = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceList.OnItemClick");
	}

	UOLUIFrontEnd_EvidenceList_execOnItemClick_Params OnItemClick_Params;
	memset(&OnItemClick_Params, 0, sizeof(OnItemClick_Params));
	memcpy_s(&OnItemClick_Params.ev, sizeof(OnItemClick_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnItemClick, &OnItemClick_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceList.PopulateItemList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceList::PopulateItemList()
{
	static UFunction* uFnPopulateItemList = nullptr;

	if (!uFnPopulateItemList)
	{
		uFnPopulateItemList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceList.PopulateItemList");
	}

	UOLUIFrontEnd_EvidenceList_execPopulateItemList_Params PopulateItemList_Params;
	memset(&PopulateItemList_Params, 0, sizeof(PopulateItemList_Params));

	this->ProcessEvent(uFnPopulateItemList, &PopulateItemList_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceList.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_EvidenceList::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceList.OnTopMostView");
	}

	UOLUIFrontEnd_EvidenceList_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceList.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_EvidenceList::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceList.Press_Back");
	}

	UOLUIFrontEnd_EvidenceList_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingList.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_RecordingList::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingList.FilterButtonInput");
	}

	UOLUIFrontEnd_RecordingList_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingList.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_RecordingList::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingList.WidgetInitialized");
	}

	UOLUIFrontEnd_RecordingList_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingList.OnItemClick
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_RecordingList::OnItemClick(struct FEventData ev)
{
	static UFunction* uFnOnItemClick = nullptr;

	if (!uFnOnItemClick)
	{
		uFnOnItemClick = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingList.OnItemClick");
	}

	UOLUIFrontEnd_RecordingList_execOnItemClick_Params OnItemClick_Params;
	memset(&OnItemClick_Params, 0, sizeof(OnItemClick_Params));
	memcpy_s(&OnItemClick_Params.ev, sizeof(OnItemClick_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnItemClick, &OnItemClick_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingList.PopulateItemList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingList::PopulateItemList()
{
	static UFunction* uFnPopulateItemList = nullptr;

	if (!uFnPopulateItemList)
	{
		uFnPopulateItemList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingList.PopulateItemList");
	}

	UOLUIFrontEnd_RecordingList_execPopulateItemList_Params PopulateItemList_Params;
	memset(&PopulateItemList_Params, 0, sizeof(PopulateItemList_Params));

	this->ProcessEvent(uFnPopulateItemList, &PopulateItemList_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingList.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_RecordingList::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingList.OnTopMostView");
	}

	UOLUIFrontEnd_RecordingList_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingList.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_RecordingList::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingList.Press_Back");
	}

	UOLUIFrontEnd_RecordingList_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_TabMenu.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_TabMenu::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.FilterButtonInput");
	}

	UOLUIFrontEnd_TabMenu_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_TabMenu.GetInventoryText
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOLUIFrontEnd_TabMenu::GetInventoryText()
{
	static UFunction* uFnGetInventoryText = nullptr;

	if (!uFnGetInventoryText)
	{
		uFnGetInventoryText = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.GetInventoryText");
	}

	UOLUIFrontEnd_TabMenu_execGetInventoryText_Params GetInventoryText_Params;
	memset(&GetInventoryText_Params, 0, sizeof(GetInventoryText_Params));

	this->ProcessEvent(uFnGetInventoryText, &GetInventoryText_Params, nullptr);

	return GetInventoryText_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_TabMenu.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_TabMenu::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.WidgetInitialized");
	}

	UOLUIFrontEnd_TabMenu_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnCloseButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnCloseButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnCloseButtonPress = nullptr;

	if (!uFnOnCloseButtonPress)
	{
		uFnOnCloseButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.OnCloseButtonPress");
	}

	UOLUIFrontEnd_TabMenu_execOnCloseButtonPress_Params OnCloseButtonPress_Params;
	memset(&OnCloseButtonPress_Params, 0, sizeof(OnCloseButtonPress_Params));
	memcpy_s(&OnCloseButtonPress_Params.ev, sizeof(OnCloseButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnCloseButtonPress, &OnCloseButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnEvidenceButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnEvidenceButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnEvidenceButtonPress = nullptr;

	if (!uFnOnEvidenceButtonPress)
	{
		uFnOnEvidenceButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.OnEvidenceButtonPress");
	}

	UOLUIFrontEnd_TabMenu_execOnEvidenceButtonPress_Params OnEvidenceButtonPress_Params;
	memset(&OnEvidenceButtonPress_Params, 0, sizeof(OnEvidenceButtonPress_Params));
	memcpy_s(&OnEvidenceButtonPress_Params.ev, sizeof(OnEvidenceButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnEvidenceButtonPress, &OnEvidenceButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnRecordingButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnRecordingButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnRecordingButtonPress = nullptr;

	if (!uFnOnRecordingButtonPress)
	{
		uFnOnRecordingButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.OnRecordingButtonPress");
	}

	UOLUIFrontEnd_TabMenu_execOnRecordingButtonPress_Params OnRecordingButtonPress_Params;
	memset(&OnRecordingButtonPress_Params, 0, sizeof(OnRecordingButtonPress_Params));
	memcpy_s(&OnRecordingButtonPress_Params.ev, sizeof(OnRecordingButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnRecordingButtonPress, &OnRecordingButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnButtonClick
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnButtonClick(struct FEventData ev)
{
	static UFunction* uFnOnButtonClick = nullptr;

	if (!uFnOnButtonClick)
	{
		uFnOnButtonClick = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.OnButtonClick");
	}

	UOLUIFrontEnd_TabMenu_execOnButtonClick_Params OnButtonClick_Params;
	memset(&OnButtonClick_Params, 0, sizeof(OnButtonClick_Params));
	memcpy_s(&OnButtonClick_Params.ev, sizeof(OnButtonClick_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnButtonClick, &OnButtonClick_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_TabMenu.PopulateButtons
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_TabMenu::PopulateButtons()
{
	static UFunction* uFnPopulateButtons = nullptr;

	if (!uFnPopulateButtons)
	{
		uFnPopulateButtons = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.PopulateButtons");
	}

	UOLUIFrontEnd_TabMenu_execPopulateButtons_Params PopulateButtons_Params;
	memset(&PopulateButtons_Params, 0, sizeof(PopulateButtons_Params));

	this->ProcessEvent(uFnPopulateButtons, &PopulateButtons_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnViewActivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_TabMenu::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.OnViewActivated");
	}

	UOLUIFrontEnd_TabMenu_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_TabMenu::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_TabMenu.OnViewLoaded");
	}

	UOLUIFrontEnd_TabMenu_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_ChapterSelection::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized");
	}

	UOLUIFrontEnd_ChapterSelection_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_ChapterSelection::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.FilterButtonInput");
	}

	UOLUIFrontEnd_ChapterSelection_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back");
	}

	UOLUIFrontEnd_ChapterSelection_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Load
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::Press_Load(struct FEventData ev)
{
	static UFunction* uFnPress_Load = nullptr;

	if (!uFnPress_Load)
	{
		uFnPress_Load = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Load");
	}

	UOLUIFrontEnd_ChapterSelection_execPress_Load_Params Press_Load_Params;
	memset(&Press_Load_Params, 0, sizeof(Press_Load_Params));
	memcpy_s(&Press_Load_Params.ev, sizeof(Press_Load_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Load, &Press_Load_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.LoadSelectedChapter
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_ChapterSelection::LoadSelectedChapter()
{
	static UFunction* uFnLoadSelectedChapter = nullptr;

	if (!uFnLoadSelectedChapter)
	{
		uFnLoadSelectedChapter = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.LoadSelectedChapter");
	}

	UOLUIFrontEnd_ChapterSelection_execLoadSelectedChapter_Params LoadSelectedChapter_Params;
	memset(&LoadSelectedChapter_Params, 0, sizeof(LoadSelectedChapter_Params));

	this->ProcessEvent(uFnLoadSelectedChapter, &LoadSelectedChapter_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.SetSelectedIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)

void UOLUIFrontEnd_ChapterSelection::SetSelectedIndex(int32_t Index)
{
	static UFunction* uFnSetSelectedIndex = nullptr;

	if (!uFnSetSelectedIndex)
	{
		uFnSetSelectedIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.SetSelectedIndex");
	}

	UOLUIFrontEnd_ChapterSelection_execSetSelectedIndex_Params SetSelectedIndex_Params;
	memset(&SetSelectedIndex_Params, 0, sizeof(SetSelectedIndex_Params));
	memcpy_s(&SetSelectedIndex_Params.Index, sizeof(SetSelectedIndex_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnSetSelectedIndex, &SetSelectedIndex_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.ChapterListChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::ChapterListChanged(struct FEventData ev)
{
	static UFunction* uFnChapterListChanged = nullptr;

	if (!uFnChapterListChanged)
	{
		uFnChapterListChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.ChapterListChanged");
	}

	UOLUIFrontEnd_ChapterSelection_execChapterListChanged_Params ChapterListChanged_Params;
	memset(&ChapterListChanged_Params, 0, sizeof(ChapterListChanged_Params));
	memcpy_s(&ChapterListChanged_Params.ev, sizeof(ChapterListChanged_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnChapterListChanged, &ChapterListChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_ChapterSelection::PopulateChapterList()
{
	static UFunction* uFnPopulateChapterList = nullptr;

	if (!uFnPopulateChapterList)
	{
		uFnPopulateChapterList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList");
	}

	UOLUIFrontEnd_ChapterSelection_execPopulateChapterList_Params PopulateChapterList_Params;
	memset(&PopulateChapterList_Params, 0, sizeof(PopulateChapterList_Params));

	this->ProcessEvent(uFnPopulateChapterList, &PopulateChapterList_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Pop
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_ChapterSelection::Pop()
{
	static UFunction* uFnPop = nullptr;

	if (!uFnPop)
	{
		uFnPop = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.Pop");
	}

	UOLUIFrontEnd_ChapterSelection_execPop_Params Pop_Params;
	memset(&Pop_Params, 0, sizeof(Pop_Params));

	this->ProcessEvent(uFnPop, &Pop_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewDeactivated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_ChapterSelection::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewDeactivated");
	}

	UOLUIFrontEnd_ChapterSelection_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_ChapterSelection::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView");
	}

	UOLUIFrontEnd_ChapterSelection_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_DifficultySelectionScreen::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  okButtonLabel                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  cancelButtonLabel              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  callbackName                   (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::ASShowConfirmInsaneDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName)
{
	static UFunction* uFnASShowConfirmInsaneDialog = nullptr;

	if (!uFnASShowConfirmInsaneDialog)
	{
		uFnASShowConfirmInsaneDialog = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execASShowConfirmInsaneDialog_Params ASShowConfirmInsaneDialog_Params;
	memset(&ASShowConfirmInsaneDialog_Params, 0, sizeof(ASShowConfirmInsaneDialog_Params));
	memcpy_s(&ASShowConfirmInsaneDialog_Params.Title, sizeof(ASShowConfirmInsaneDialog_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ASShowConfirmInsaneDialog_Params.Message, sizeof(ASShowConfirmInsaneDialog_Params.Message), &Message, sizeof(Message));
	memcpy_s(&ASShowConfirmInsaneDialog_Params.okButtonLabel, sizeof(ASShowConfirmInsaneDialog_Params.okButtonLabel), &okButtonLabel, sizeof(okButtonLabel));
	memcpy_s(&ASShowConfirmInsaneDialog_Params.cancelButtonLabel, sizeof(ASShowConfirmInsaneDialog_Params.cancelButtonLabel), &cancelButtonLabel, sizeof(cancelButtonLabel));
	memcpy_s(&ASShowConfirmInsaneDialog_Params.callbackName, sizeof(ASShowConfirmInsaneDialog_Params.callbackName), &callbackName, sizeof(callbackName));

	this->ProcessEvent(uFnASShowConfirmInsaneDialog, &ASShowConfirmInsaneDialog_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_DifficultySelectionScreen::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_DifficultySelectionScreen::Pop()
{
	static UFunction* uFnPop = nullptr;

	if (!uFnPop)
	{
		uFnPop = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execPop_Params Pop_Params;
	memset(&Pop_Params, 0, sizeof(Pop_Params));

	this->ProcessEvent(uFnPop, &Pop_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_DifficultySelectionScreen::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_DifficultySelectionScreen::ProceedToStartGame()
{
	static UFunction* uFnProceedToStartGame = nullptr;

	if (!uFnProceedToStartGame)
	{
		uFnProceedToStartGame = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execProceedToStartGame_Params ProceedToStartGame_Params;
	memset(&ProceedToStartGame_Params, 0, sizeof(ProceedToStartGame_Params));

	this->ProcessEvent(uFnProceedToStartGame, &ProceedToStartGame_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bOk                            (CPF_Parm)

void UOLUIFrontEnd_DifficultySelectionScreen::OnConfirmedInsane(bool bOk)
{
	static UFunction* uFnOnConfirmedInsane = nullptr;

	if (!uFnOnConfirmedInsane)
	{
		uFnOnConfirmedInsane = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execOnConfirmedInsane_Params OnConfirmedInsane_Params;
	memset(&OnConfirmedInsane_Params, 0, sizeof(OnConfirmedInsane_Params));
	OnConfirmedInsane_Params.bOk = bOk;

	this->ProcessEvent(uFnOnConfirmedInsane, &OnConfirmedInsane_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Insane(struct FEventData ev)
{
	static UFunction* uFnPress_Insane = nullptr;

	if (!uFnPress_Insane)
	{
		uFnPress_Insane = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execPress_Insane_Params Press_Insane_Params;
	memset(&Press_Insane_Params, 0, sizeof(Press_Insane_Params));
	memcpy_s(&Press_Insane_Params.ev, sizeof(Press_Insane_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Insane, &Press_Insane_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Nightmare(struct FEventData ev)
{
	static UFunction* uFnPress_Nightmare = nullptr;

	if (!uFnPress_Nightmare)
	{
		uFnPress_Nightmare = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execPress_Nightmare_Params Press_Nightmare_Params;
	memset(&Press_Nightmare_Params, 0, sizeof(Press_Nightmare_Params));
	memcpy_s(&Press_Nightmare_Params.ev, sizeof(Press_Nightmare_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Nightmare, &Press_Nightmare_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Hard(struct FEventData ev)
{
	static UFunction* uFnPress_Hard = nullptr;

	if (!uFnPress_Hard)
	{
		uFnPress_Hard = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execPress_Hard_Params Press_Hard_Params;
	memset(&Press_Hard_Params, 0, sizeof(Press_Hard_Params));
	memcpy_s(&Press_Hard_Params.ev, sizeof(Press_Hard_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Hard, &Press_Hard_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Normal(struct FEventData ev)
{
	static UFunction* uFnPress_Normal = nullptr;

	if (!uFnPress_Normal)
	{
		uFnPress_Normal = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execPress_Normal_Params Press_Normal_Params;
	memset(&Press_Normal_Params, 0, sizeof(Press_Normal_Params));
	memcpy_s(&Press_Normal_Params.ev, sizeof(Press_Normal_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Normal, &Press_Normal_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_DifficultySelectionScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_DifficultySelectionScreen::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded");
	}

	UOLUIFrontEnd_DifficultySelectionScreen_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  KeyName                        (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::ASOnKeyBindingCaptured(class FString KeyName)
{
	static UFunction* uFnASOnKeyBindingCaptured = nullptr;

	if (!uFnASOnKeyBindingCaptured)
	{
		uFnASOnKeyBindingCaptured = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured");
	}

	UOLUIFrontEnd_Options_execASOnKeyBindingCaptured_Params ASOnKeyBindingCaptured_Params;
	memset(&ASOnKeyBindingCaptured_Params, 0, sizeof(ASOnKeyBindingCaptured_Params));
	memcpy_s(&ASOnKeyBindingCaptured_Params.KeyName, sizeof(ASOnKeyBindingCaptured_Params.KeyName), &KeyName, sizeof(KeyName));

	this->ProcessEvent(uFnASOnKeyBindingCaptured, &ASOnKeyBindingCaptured_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  okButtonLabel                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  callbackName                   (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::ShowMessageDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString callbackName)
{
	static UFunction* uFnShowMessageDialog = nullptr;

	if (!uFnShowMessageDialog)
	{
		uFnShowMessageDialog = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog");
	}

	UOLUIFrontEnd_Options_execShowMessageDialog_Params ShowMessageDialog_Params;
	memset(&ShowMessageDialog_Params, 0, sizeof(ShowMessageDialog_Params));
	memcpy_s(&ShowMessageDialog_Params.Title, sizeof(ShowMessageDialog_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowMessageDialog_Params.Message, sizeof(ShowMessageDialog_Params.Message), &Message, sizeof(Message));
	memcpy_s(&ShowMessageDialog_Params.okButtonLabel, sizeof(ShowMessageDialog_Params.okButtonLabel), &okButtonLabel, sizeof(okButtonLabel));
	memcpy_s(&ShowMessageDialog_Params.callbackName, sizeof(ShowMessageDialog_Params.callbackName), &callbackName, sizeof(callbackName));

	this->ProcessEvent(uFnShowMessageDialog, &ShowMessageDialog_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  okButtonLabel                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  cancelButtonLabel              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  callbackName                   (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::ShowKeyBindingConflictDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName)
{
	static UFunction* uFnShowKeyBindingConflictDialog = nullptr;

	if (!uFnShowKeyBindingConflictDialog)
	{
		uFnShowKeyBindingConflictDialog = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog");
	}

	UOLUIFrontEnd_Options_execShowKeyBindingConflictDialog_Params ShowKeyBindingConflictDialog_Params;
	memset(&ShowKeyBindingConflictDialog_Params, 0, sizeof(ShowKeyBindingConflictDialog_Params));
	memcpy_s(&ShowKeyBindingConflictDialog_Params.Title, sizeof(ShowKeyBindingConflictDialog_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowKeyBindingConflictDialog_Params.Message, sizeof(ShowKeyBindingConflictDialog_Params.Message), &Message, sizeof(Message));
	memcpy_s(&ShowKeyBindingConflictDialog_Params.okButtonLabel, sizeof(ShowKeyBindingConflictDialog_Params.okButtonLabel), &okButtonLabel, sizeof(okButtonLabel));
	memcpy_s(&ShowKeyBindingConflictDialog_Params.cancelButtonLabel, sizeof(ShowKeyBindingConflictDialog_Params.cancelButtonLabel), &cancelButtonLabel, sizeof(cancelButtonLabel));
	memcpy_s(&ShowKeyBindingConflictDialog_Params.callbackName, sizeof(ShowKeyBindingConflictDialog_Params.callbackName), &callbackName, sizeof(callbackName));

	this->ProcessEvent(uFnShowKeyBindingConflictDialog, &ShowKeyBindingConflictDialog_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  okButtonLabel                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  cancelButtonLabel              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  callbackName                   (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::ShowChangeConfirmationDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName)
{
	static UFunction* uFnShowChangeConfirmationDialog = nullptr;

	if (!uFnShowChangeConfirmationDialog)
	{
		uFnShowChangeConfirmationDialog = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog");
	}

	UOLUIFrontEnd_Options_execShowChangeConfirmationDialog_Params ShowChangeConfirmationDialog_Params;
	memset(&ShowChangeConfirmationDialog_Params, 0, sizeof(ShowChangeConfirmationDialog_Params));
	memcpy_s(&ShowChangeConfirmationDialog_Params.Title, sizeof(ShowChangeConfirmationDialog_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowChangeConfirmationDialog_Params.Message, sizeof(ShowChangeConfirmationDialog_Params.Message), &Message, sizeof(Message));
	memcpy_s(&ShowChangeConfirmationDialog_Params.okButtonLabel, sizeof(ShowChangeConfirmationDialog_Params.okButtonLabel), &okButtonLabel, sizeof(okButtonLabel));
	memcpy_s(&ShowChangeConfirmationDialog_Params.cancelButtonLabel, sizeof(ShowChangeConfirmationDialog_Params.cancelButtonLabel), &cancelButtonLabel, sizeof(cancelButtonLabel));
	memcpy_s(&ShowChangeConfirmationDialog_Params.callbackName, sizeof(ShowChangeConfirmationDialog_Params.callbackName), &callbackName, sizeof(callbackName));

	this->ProcessEvent(uFnShowChangeConfirmationDialog, &ShowChangeConfirmationDialog_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.ShowResolutionConfirmationDialogAfterDelay
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  okButtonLabel                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  cancelButtonLabel              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  callbackName                   (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::ShowResolutionConfirmationDialogAfterDelay(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName)
{
	static UFunction* uFnShowResolutionConfirmationDialogAfterDelay = nullptr;

	if (!uFnShowResolutionConfirmationDialogAfterDelay)
	{
		uFnShowResolutionConfirmationDialogAfterDelay = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.ShowResolutionConfirmationDialogAfterDelay");
	}

	UOLUIFrontEnd_Options_execShowResolutionConfirmationDialogAfterDelay_Params ShowResolutionConfirmationDialogAfterDelay_Params;
	memset(&ShowResolutionConfirmationDialogAfterDelay_Params, 0, sizeof(ShowResolutionConfirmationDialogAfterDelay_Params));
	memcpy_s(&ShowResolutionConfirmationDialogAfterDelay_Params.Title, sizeof(ShowResolutionConfirmationDialogAfterDelay_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowResolutionConfirmationDialogAfterDelay_Params.Message, sizeof(ShowResolutionConfirmationDialogAfterDelay_Params.Message), &Message, sizeof(Message));
	memcpy_s(&ShowResolutionConfirmationDialogAfterDelay_Params.okButtonLabel, sizeof(ShowResolutionConfirmationDialogAfterDelay_Params.okButtonLabel), &okButtonLabel, sizeof(okButtonLabel));
	memcpy_s(&ShowResolutionConfirmationDialogAfterDelay_Params.cancelButtonLabel, sizeof(ShowResolutionConfirmationDialogAfterDelay_Params.cancelButtonLabel), &cancelButtonLabel, sizeof(cancelButtonLabel));
	memcpy_s(&ShowResolutionConfirmationDialogAfterDelay_Params.callbackName, sizeof(ShowResolutionConfirmationDialogAfterDelay_Params.callbackName), &callbackName, sizeof(callbackName));

	this->ProcessEvent(uFnShowResolutionConfirmationDialogAfterDelay, &ShowResolutionConfirmationDialogAfterDelay_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGammaSetting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UOLUIFrontEnd_Options::GetCurrentGammaSetting()
{
	static UFunction* uFnGetCurrentGammaSetting = nullptr;

	if (!uFnGetCurrentGammaSetting)
	{
		uFnGetCurrentGammaSetting = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetCurrentGammaSetting");
	}

	UOLUIFrontEnd_Options_execGetCurrentGammaSetting_Params GetCurrentGammaSetting_Params;
	memset(&GetCurrentGammaSetting_Params, 0, sizeof(GetCurrentGammaSetting_Params));

	this->ProcessEvent(uFnGetCurrentGammaSetting, &GetCurrentGammaSetting_Params, nullptr);

	return GetCurrentGammaSetting_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.OnSliderChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ProfileSettingId               (CPF_Parm)
// float                          SliderValue                    (CPF_Parm)

void UOLUIFrontEnd_Options::OnSliderChanged(int32_t ProfileSettingId, float SliderValue)
{
	static UFunction* uFnOnSliderChanged = nullptr;

	if (!uFnOnSliderChanged)
	{
		uFnOnSliderChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnSliderChanged");
	}

	UOLUIFrontEnd_Options_execOnSliderChanged_Params OnSliderChanged_Params;
	memset(&OnSliderChanged_Params, 0, sizeof(OnSliderChanged_Params));
	memcpy_s(&OnSliderChanged_Params.ProfileSettingId, sizeof(OnSliderChanged_Params.ProfileSettingId), &ProfileSettingId, sizeof(ProfileSettingId));
	memcpy_s(&OnSliderChanged_Params.SliderValue, sizeof(OnSliderChanged_Params.SliderValue), &SliderValue, sizeof(SliderValue));

	this->ProcessEvent(uFnOnSliderChanged, &OnSliderChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class FString> UOLUIFrontEnd_Options::GetKeyBindingConflicts()
{
	static UFunction* uFnGetKeyBindingConflicts = nullptr;

	if (!uFnGetKeyBindingConflicts)
	{
		uFnGetKeyBindingConflicts = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts");
	}

	UOLUIFrontEnd_Options_execGetKeyBindingConflicts_Params GetKeyBindingConflicts_Params;
	memset(&GetKeyBindingConflicts_Params, 0, sizeof(GetKeyBindingConflicts_Params));

	this->ProcessEvent(uFnGetKeyBindingConflicts, &GetKeyBindingConflicts_Params, nullptr);

	return GetKeyBindingConflicts_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UOLUIFrontEnd_Options::GetCurrentGFxList()
{
	static UFunction* uFnGetCurrentGFxList = nullptr;

	if (!uFnGetCurrentGFxList)
	{
		uFnGetCurrentGFxList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList");
	}

	UOLUIFrontEnd_Options_execGetCurrentGFxList_Params GetCurrentGFxList_Params;
	memset(&GetCurrentGFxList_Params, 0, sizeof(GetCurrentGFxList_Params));

	this->ProcessEvent(uFnGetCurrentGFxList, &GetCurrentGFxList_Params, nullptr);

	return GetCurrentGFxList_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.SetGammaExternally
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Gamma                          (CPF_Parm)

void UOLUIFrontEnd_Options::SetGammaExternally(float Gamma)
{
	static UFunction* uFnSetGammaExternally = nullptr;

	if (!uFnSetGammaExternally)
	{
		uFnSetGammaExternally = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.SetGammaExternally");
	}

	UOLUIFrontEnd_Options_execSetGammaExternally_Params SetGammaExternally_Params;
	memset(&SetGammaExternally_Params, 0, sizeof(SetGammaExternally_Params));
	memcpy_s(&SetGammaExternally_Params.Gamma, sizeof(SetGammaExternally_Params.Gamma), &Gamma, sizeof(Gamma));

	this->ProcessEvent(uFnSetGammaExternally, &SetGammaExternally_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ConfigIndex                    (CPF_Parm)

void UOLUIFrontEnd_Options::SetGamepadConfigExternally(int32_t ConfigIndex)
{
	static UFunction* uFnSetGamepadConfigExternally = nullptr;

	if (!uFnSetGamepadConfigExternally)
	{
		uFnSetGamepadConfigExternally = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally");
	}

	UOLUIFrontEnd_Options_execSetGamepadConfigExternally_Params SetGamepadConfigExternally_Params;
	memset(&SetGamepadConfigExternally_Params, 0, sizeof(SetGamepadConfigExternally_Params));
	memcpy_s(&SetGamepadConfigExternally_Params.ConfigIndex, sizeof(SetGamepadConfigExternally_Params.ConfigIndex), &ConfigIndex, sizeof(ConfigIndex));

	this->ProcessEvent(uFnSetGamepadConfigExternally, &SetGamepadConfigExternally_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_Options::GetGamepadConfig()
{
	static UFunction* uFnGetGamepadConfig = nullptr;

	if (!uFnGetGamepadConfig)
	{
		uFnGetGamepadConfig = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig");
	}

	UOLUIFrontEnd_Options_execGetGamepadConfig_Params GetGamepadConfig_Params;
	memset(&GetGamepadConfig_Params, 0, sizeof(GetGamepadConfig_Params));

	this->ProcessEvent(uFnGetGamepadConfig, &GetGamepadConfig_Params, nullptr);

	return GetGamepadConfig_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   KeyName                        (CPF_Parm)

void UOLUIFrontEnd_Options::OnKeyBindingCaptured(struct FName KeyName)
{
	static UFunction* uFnOnKeyBindingCaptured = nullptr;

	if (!uFnOnKeyBindingCaptured)
	{
		uFnOnKeyBindingCaptured = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured");
	}

	UOLUIFrontEnd_Options_execOnKeyBindingCaptured_Params OnKeyBindingCaptured_Params;
	memset(&OnKeyBindingCaptured_Params, 0, sizeof(OnKeyBindingCaptured_Params));
	memcpy_s(&OnKeyBindingCaptured_Params.KeyName, sizeof(OnKeyBindingCaptured_Params.KeyName), &KeyName, sizeof(KeyName));

	this->ProcessEvent(uFnOnKeyBindingCaptured, &OnKeyBindingCaptured_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.GetDisplayedResolutionIndexFromOriginalIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        OriginalIndex                  (CPF_Parm)

int32_t UOLUIFrontEnd_Options::GetDisplayedResolutionIndexFromOriginalIndex(int32_t OriginalIndex)
{
	static UFunction* uFnGetDisplayedResolutionIndexFromOriginalIndex = nullptr;

	if (!uFnGetDisplayedResolutionIndexFromOriginalIndex)
	{
		uFnGetDisplayedResolutionIndexFromOriginalIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetDisplayedResolutionIndexFromOriginalIndex");
	}

	UOLUIFrontEnd_Options_execGetDisplayedResolutionIndexFromOriginalIndex_Params GetDisplayedResolutionIndexFromOriginalIndex_Params;
	memset(&GetDisplayedResolutionIndexFromOriginalIndex_Params, 0, sizeof(GetDisplayedResolutionIndexFromOriginalIndex_Params));
	memcpy_s(&GetDisplayedResolutionIndexFromOriginalIndex_Params.OriginalIndex, sizeof(GetDisplayedResolutionIndexFromOriginalIndex_Params.OriginalIndex), &OriginalIndex, sizeof(OriginalIndex));

	this->ProcessEvent(uFnGetDisplayedResolutionIndexFromOriginalIndex, &GetDisplayedResolutionIndexFromOriginalIndex_Params, nullptr);

	return GetDisplayedResolutionIndexFromOriginalIndex_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.GetOriginalResolutionIndexFromDisplayedIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DisplayedIndex                 (CPF_Parm)

int32_t UOLUIFrontEnd_Options::GetOriginalResolutionIndexFromDisplayedIndex(int32_t DisplayedIndex)
{
	static UFunction* uFnGetOriginalResolutionIndexFromDisplayedIndex = nullptr;

	if (!uFnGetOriginalResolutionIndexFromDisplayedIndex)
	{
		uFnGetOriginalResolutionIndexFromDisplayedIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetOriginalResolutionIndexFromDisplayedIndex");
	}

	UOLUIFrontEnd_Options_execGetOriginalResolutionIndexFromDisplayedIndex_Params GetOriginalResolutionIndexFromDisplayedIndex_Params;
	memset(&GetOriginalResolutionIndexFromDisplayedIndex_Params, 0, sizeof(GetOriginalResolutionIndexFromDisplayedIndex_Params));
	memcpy_s(&GetOriginalResolutionIndexFromDisplayedIndex_Params.DisplayedIndex, sizeof(GetOriginalResolutionIndexFromDisplayedIndex_Params.DisplayedIndex), &DisplayedIndex, sizeof(DisplayedIndex));

	this->ProcessEvent(uFnGetOriginalResolutionIndexFromDisplayedIndex, &GetOriginalResolutionIndexFromDisplayedIndex_Params, nullptr);

	return GetOriginalResolutionIndexFromDisplayedIndex_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.RemoveUnsupportedResolutionsFromList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// TArray<struct FName>           OriginalList                   (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FName> UOLUIFrontEnd_Options::RemoveUnsupportedResolutionsFromList(TArray<struct FName> OriginalList)
{
	static UFunction* uFnRemoveUnsupportedResolutionsFromList = nullptr;

	if (!uFnRemoveUnsupportedResolutionsFromList)
	{
		uFnRemoveUnsupportedResolutionsFromList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.RemoveUnsupportedResolutionsFromList");
	}

	UOLUIFrontEnd_Options_execRemoveUnsupportedResolutionsFromList_Params RemoveUnsupportedResolutionsFromList_Params;
	memset(&RemoveUnsupportedResolutionsFromList_Params, 0, sizeof(RemoveUnsupportedResolutionsFromList_Params));
	memcpy_s(&RemoveUnsupportedResolutionsFromList_Params.OriginalList, sizeof(RemoveUnsupportedResolutionsFromList_Params.OriginalList), &OriginalList, sizeof(OriginalList));

	this->ProcessEvent(uFnRemoveUnsupportedResolutionsFromList, &RemoveUnsupportedResolutionsFromList_Params, nullptr);

	return RemoveUnsupportedResolutionsFromList_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_Options::GetFullscreenOptionIndex()
{
	static UFunction* uFnGetFullscreenOptionIndex = nullptr;

	if (!uFnGetFullscreenOptionIndex)
	{
		uFnGetFullscreenOptionIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex");
	}

	UOLUIFrontEnd_Options_execGetFullscreenOptionIndex_Params GetFullscreenOptionIndex_Params;
	memset(&GetFullscreenOptionIndex_Params, 0, sizeof(GetFullscreenOptionIndex_Params));

	this->ProcessEvent(uFnGetFullscreenOptionIndex, &GetFullscreenOptionIndex_Params, nullptr);

	return GetFullscreenOptionIndex_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_Options::GetResolutionOptionIndex()
{
	static UFunction* uFnGetResolutionOptionIndex = nullptr;

	if (!uFnGetResolutionOptionIndex)
	{
		uFnGetResolutionOptionIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex");
	}

	UOLUIFrontEnd_Options_execGetResolutionOptionIndex_Params GetResolutionOptionIndex_Params;
	memset(&GetResolutionOptionIndex_Params, 0, sizeof(GetResolutionOptionIndex_Params));

	this->ProcessEvent(uFnGetResolutionOptionIndex, &GetResolutionOptionIndex_Params, nullptr);

	return GetResolutionOptionIndex_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.HasResolutionChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Options::HasResolutionChanged()
{
	static UFunction* uFnHasResolutionChanged = nullptr;

	if (!uFnHasResolutionChanged)
	{
		uFnHasResolutionChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.HasResolutionChanged");
	}

	UOLUIFrontEnd_Options_execHasResolutionChanged_Params HasResolutionChanged_Params;
	memset(&HasResolutionChanged_Params, 0, sizeof(HasResolutionChanged_Params));

	this->ProcessEvent(uFnHasResolutionChanged, &HasResolutionChanged_Params, nullptr);

	return HasResolutionChanged_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_Options::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.WidgetInitialized");
	}

	UOLUIFrontEnd_Options_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.GetOLProfile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOLProfileSettings*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOLProfileSettings* UOLUIFrontEnd_Options::GetOLProfile()
{
	static UFunction* uFnGetOLProfile = nullptr;

	if (!uFnGetOLProfile)
	{
		uFnGetOLProfile = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetOLProfile");
	}

	UOLUIFrontEnd_Options_execGetOLProfile_Params GetOLProfile_Params;
	memset(&GetOLProfile_Params, 0, sizeof(GetOLProfile_Params));

	this->ProcessEvent(uFnGetOLProfile, &GetOLProfile_Params, nullptr);

	return GetOLProfile_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Options::SaveSettingsToProfile()
{
	static UFunction* uFnSaveSettingsToProfile = nullptr;

	if (!uFnSaveSettingsToProfile)
	{
		uFnSaveSettingsToProfile = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile");
	}

	UOLUIFrontEnd_Options_execSaveSettingsToProfile_Params SaveSettingsToProfile_Params;
	memset(&SaveSettingsToProfile_Params, 0, sizeof(SaveSettingsToProfile_Params));

	this->ProcessEvent(uFnSaveSettingsToProfile, &SaveSettingsToProfile_Params, nullptr);

	return SaveSettingsToProfile_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Options::HasAnyPropertyChanged()
{
	static UFunction* uFnHasAnyPropertyChanged = nullptr;

	if (!uFnHasAnyPropertyChanged)
	{
		uFnHasAnyPropertyChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged");
	}

	UOLUIFrontEnd_Options_execHasAnyPropertyChanged_Params HasAnyPropertyChanged_Params;
	memset(&HasAnyPropertyChanged_Params, 0, sizeof(HasAnyPropertyChanged_Params));

	this->ProcessEvent(uFnHasAnyPropertyChanged, &HasAnyPropertyChanged_Params, nullptr);

	return HasAnyPropertyChanged_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxObject*              OptionsList                    (CPF_Parm)
// TArray<struct FOptionInfo>     OptionInfos                    (CPF_Parm | CPF_NeedCtorLink)

bool UOLUIFrontEnd_Options::HasPropertyChangedInList(class UGFxObject* OptionsList, TArray<struct FOptionInfo> OptionInfos)
{
	static UFunction* uFnHasPropertyChangedInList = nullptr;

	if (!uFnHasPropertyChangedInList)
	{
		uFnHasPropertyChangedInList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList");
	}

	UOLUIFrontEnd_Options_execHasPropertyChangedInList_Params HasPropertyChangedInList_Params;
	memset(&HasPropertyChangedInList_Params, 0, sizeof(HasPropertyChangedInList_Params));
	memcpy_s(&HasPropertyChangedInList_Params.OptionsList, sizeof(HasPropertyChangedInList_Params.OptionsList), &OptionsList, sizeof(OptionsList));
	memcpy_s(&HasPropertyChangedInList_Params.OptionInfos, sizeof(HasPropertyChangedInList_Params.OptionInfos), &OptionInfos, sizeof(OptionInfos));

	this->ProcessEvent(uFnHasPropertyChangedInList, &HasPropertyChangedInList_Params, nullptr);

	return HasPropertyChangedInList_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FOptionInfo>     OptionInfos                    (CPF_Parm | CPF_NeedCtorLink)

bool UOLUIFrontEnd_Options::SaveSettingsForList(TArray<struct FOptionInfo> OptionInfos)
{
	static UFunction* uFnSaveSettingsForList = nullptr;

	if (!uFnSaveSettingsForList)
	{
		uFnSaveSettingsForList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList");
	}

	UOLUIFrontEnd_Options_execSaveSettingsForList_Params SaveSettingsForList_Params;
	memset(&SaveSettingsForList_Params, 0, sizeof(SaveSettingsForList_Params));
	memcpy_s(&SaveSettingsForList_Params.OptionInfos, sizeof(SaveSettingsForList_Params.OptionInfos), &OptionInfos, sizeof(OptionInfos));

	this->ProcessEvent(uFnSaveSettingsForList, &SaveSettingsForList_Params, nullptr);

	return SaveSettingsForList_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.TabChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::TabChanged(struct FEventData ev)
{
	static UFunction* uFnTabChanged = nullptr;

	if (!uFnTabChanged)
	{
		uFnTabChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.TabChanged");
	}

	UOLUIFrontEnd_Options_execTabChanged_Params TabChanged_Params;
	memset(&TabChanged_Params, 0, sizeof(TabChanged_Params));
	memcpy_s(&TabChanged_Params.ev, sizeof(TabChanged_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnTabChanged, &TabChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              OptionsList                    (CPF_Parm)
// TArray<struct FOptionInfo>     OptionInfos                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::StoreOptionValuesForList(class UGFxObject* OptionsList, TArray<struct FOptionInfo>& OptionInfos)
{
	static UFunction* uFnStoreOptionValuesForList = nullptr;

	if (!uFnStoreOptionValuesForList)
	{
		uFnStoreOptionValuesForList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList");
	}

	UOLUIFrontEnd_Options_execStoreOptionValuesForList_Params StoreOptionValuesForList_Params;
	memset(&StoreOptionValuesForList_Params, 0, sizeof(StoreOptionValuesForList_Params));
	memcpy_s(&StoreOptionValuesForList_Params.OptionsList, sizeof(StoreOptionValuesForList_Params.OptionsList), &OptionsList, sizeof(OptionsList));
	memcpy_s(&StoreOptionValuesForList_Params.OptionInfos, sizeof(StoreOptionValuesForList_Params.OptionInfos), &OptionInfos, sizeof(OptionInfos));

	this->ProcessEvent(uFnStoreOptionValuesForList, &StoreOptionValuesForList_Params, nullptr);

	memcpy_s(&OptionInfos, sizeof(OptionInfos), &StoreOptionValuesForList_Params.OptionInfos, sizeof(StoreOptionValuesForList_Params.OptionInfos));
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class UGFxObject*              OptionsList                    (CPF_Parm)
// int32_t                        Index                          (CPF_Parm)

class FString UOLUIFrontEnd_Options::GetOptionValueStringAt(class UGFxObject* OptionsList, int32_t Index)
{
	static UFunction* uFnGetOptionValueStringAt = nullptr;

	if (!uFnGetOptionValueStringAt)
	{
		uFnGetOptionValueStringAt = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt");
	}

	UOLUIFrontEnd_Options_execGetOptionValueStringAt_Params GetOptionValueStringAt_Params;
	memset(&GetOptionValueStringAt_Params, 0, sizeof(GetOptionValueStringAt_Params));
	memcpy_s(&GetOptionValueStringAt_Params.OptionsList, sizeof(GetOptionValueStringAt_Params.OptionsList), &OptionsList, sizeof(OptionsList));
	memcpy_s(&GetOptionValueStringAt_Params.Index, sizeof(GetOptionValueStringAt_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetOptionValueStringAt, &GetOptionValueStringAt_Params, nullptr);

	return GetOptionValueStringAt_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxObject*              OptionsList                    (CPF_Parm)
// int32_t                        Index                          (CPF_Parm)

float UOLUIFrontEnd_Options::GetOptionValueAt(class UGFxObject* OptionsList, int32_t Index)
{
	static UFunction* uFnGetOptionValueAt = nullptr;

	if (!uFnGetOptionValueAt)
	{
		uFnGetOptionValueAt = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt");
	}

	UOLUIFrontEnd_Options_execGetOptionValueAt_Params GetOptionValueAt_Params;
	memset(&GetOptionValueAt_Params, 0, sizeof(GetOptionValueAt_Params));
	memcpy_s(&GetOptionValueAt_Params.OptionsList, sizeof(GetOptionValueAt_Params.OptionsList), &OptionsList, sizeof(OptionsList));
	memcpy_s(&GetOptionValueAt_Params.Index, sizeof(GetOptionValueAt_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnGetOptionValueAt, &GetOptionValueAt_Params, nullptr);

	return GetOptionValueAt_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FOptionInfo>     OptionInfos                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::SetDefaultOptionValuesForList(TArray<struct FOptionInfo>& OptionInfos)
{
	static UFunction* uFnSetDefaultOptionValuesForList = nullptr;

	if (!uFnSetDefaultOptionValuesForList)
	{
		uFnSetDefaultOptionValuesForList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList");
	}

	UOLUIFrontEnd_Options_execSetDefaultOptionValuesForList_Params SetDefaultOptionValuesForList_Params;
	memset(&SetDefaultOptionValuesForList_Params, 0, sizeof(SetDefaultOptionValuesForList_Params));
	memcpy_s(&SetDefaultOptionValuesForList_Params.OptionInfos, sizeof(SetDefaultOptionValuesForList_Params.OptionInfos), &OptionInfos, sizeof(OptionInfos));

	this->ProcessEvent(uFnSetDefaultOptionValuesForList, &SetDefaultOptionValuesForList_Params, nullptr);

	memcpy_s(&OptionInfos, sizeof(OptionInfos), &SetDefaultOptionValuesForList_Params.OptionInfos, sizeof(SetDefaultOptionValuesForList_Params.OptionInfos));
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FOptionInfo>     OptionInfos                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::FillOptionValuesForList(TArray<struct FOptionInfo>& OptionInfos)
{
	static UFunction* uFnFillOptionValuesForList = nullptr;

	if (!uFnFillOptionValuesForList)
	{
		uFnFillOptionValuesForList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList");
	}

	UOLUIFrontEnd_Options_execFillOptionValuesForList_Params FillOptionValuesForList_Params;
	memset(&FillOptionValuesForList_Params, 0, sizeof(FillOptionValuesForList_Params));
	memcpy_s(&FillOptionValuesForList_Params.OptionInfos, sizeof(FillOptionValuesForList_Params.OptionInfos), &OptionInfos, sizeof(OptionInfos));

	this->ProcessEvent(uFnFillOptionValuesForList, &FillOptionValuesForList_Params, nullptr);

	memcpy_s(&OptionInfos, sizeof(OptionInfos), &FillOptionValuesForList_Params.OptionInfos, sizeof(FillOptionValuesForList_Params.OptionInfos));
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::FillOptionValuesFromProfile()
{
	static UFunction* uFnFillOptionValuesFromProfile = nullptr;

	if (!uFnFillOptionValuesFromProfile)
	{
		uFnFillOptionValuesFromProfile = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile");
	}

	UOLUIFrontEnd_Options_execFillOptionValuesFromProfile_Params FillOptionValuesFromProfile_Params;
	memset(&FillOptionValuesFromProfile_Params, 0, sizeof(FillOptionValuesFromProfile_Params));

	this->ProcessEvent(uFnFillOptionValuesFromProfile, &FillOptionValuesFromProfile_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::PopulateControlsOptions()
{
	static UFunction* uFnPopulateControlsOptions = nullptr;

	if (!uFnPopulateControlsOptions)
	{
		uFnPopulateControlsOptions = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions");
	}

	UOLUIFrontEnd_Options_execPopulateControlsOptions_Params PopulateControlsOptions_Params;
	memset(&PopulateControlsOptions_Params, 0, sizeof(PopulateControlsOptions_Params));

	this->ProcessEvent(uFnPopulateControlsOptions, &PopulateControlsOptions_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::PopulateGraphicsOptions()
{
	static UFunction* uFnPopulateGraphicsOptions = nullptr;

	if (!uFnPopulateGraphicsOptions)
	{
		uFnPopulateGraphicsOptions = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions");
	}

	UOLUIFrontEnd_Options_execPopulateGraphicsOptions_Params PopulateGraphicsOptions_Params;
	memset(&PopulateGraphicsOptions_Params, 0, sizeof(PopulateGraphicsOptions_Params));

	this->ProcessEvent(uFnPopulateGraphicsOptions, &PopulateGraphicsOptions_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::PopulateGeneralOptions()
{
	static UFunction* uFnPopulateGeneralOptions = nullptr;

	if (!uFnPopulateGeneralOptions)
	{
		uFnPopulateGeneralOptions = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions");
	}

	UOLUIFrontEnd_Options_execPopulateGeneralOptions_Params PopulateGeneralOptions_Params;
	memset(&PopulateGeneralOptions_Params, 0, sizeof(PopulateGeneralOptions_Params));

	this->ProcessEvent(uFnPopulateGeneralOptions, &PopulateGeneralOptions_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FOptionInfo             CurrentOptionInfo              (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UOLUIFrontEnd_Options::GetObjectFromOptionW(struct FOptionInfo CurrentOptionInfo)
{
	static UFunction* uFnGetObjectFromOptionW = nullptr;

	if (!uFnGetObjectFromOptionW)
	{
		uFnGetObjectFromOptionW = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption");
	}

	UOLUIFrontEnd_Options_execGetObjectFromOptionW_Params GetObjectFromOptionW_Params;
	memset(&GetObjectFromOptionW_Params, 0, sizeof(GetObjectFromOptionW_Params));
	memcpy_s(&GetObjectFromOptionW_Params.CurrentOptionInfo, sizeof(GetObjectFromOptionW_Params.CurrentOptionInfo), &CurrentOptionInfo, sizeof(CurrentOptionInfo));

	this->ProcessEvent(uFnGetObjectFromOptionW, &GetObjectFromOptionW_Params, nullptr);

	return GetObjectFromOptionW_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::PopulateTabButtons()
{
	static UFunction* uFnPopulateTabButtons = nullptr;

	if (!uFnPopulateTabButtons)
	{
		uFnPopulateTabButtons = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons");
	}

	UOLUIFrontEnd_Options_execPopulateTabButtons_Params PopulateTabButtons_Params;
	memset(&PopulateTabButtons_Params, 0, sizeof(PopulateTabButtons_Params));

	this->ProcessEvent(uFnPopulateTabButtons, &PopulateTabButtons_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.UseGeneralOptionsWithDifficulty
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Options::UseGeneralOptionsWithDifficulty()
{
	static UFunction* uFnUseGeneralOptionsWithDifficulty = nullptr;

	if (!uFnUseGeneralOptionsWithDifficulty)
	{
		uFnUseGeneralOptionsWithDifficulty = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.UseGeneralOptionsWithDifficulty");
	}

	UOLUIFrontEnd_Options_execUseGeneralOptionsWithDifficulty_Params UseGeneralOptionsWithDifficulty_Params;
	memset(&UseGeneralOptionsWithDifficulty_Params, 0, sizeof(UseGeneralOptionsWithDifficulty_Params));

	this->ProcessEvent(uFnUseGeneralOptionsWithDifficulty, &UseGeneralOptionsWithDifficulty_Params, nullptr);

	return UseGeneralOptionsWithDifficulty_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PSID                           (CPF_Parm)

void UOLUIFrontEnd_Options::Press_OptionItemButton(int32_t PSID)
{
	static UFunction* uFnPress_OptionItemButton = nullptr;

	if (!uFnPress_OptionItemButton)
	{
		uFnPress_OptionItemButton = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton");
	}

	UOLUIFrontEnd_Options_execPress_OptionItemButton_Params Press_OptionItemButton_Params;
	memset(&Press_OptionItemButton_Params, 0, sizeof(Press_OptionItemButton_Params));
	memcpy_s(&Press_OptionItemButton_Params.PSID, sizeof(Press_OptionItemButton_Params.PSID), &PSID, sizeof(PSID));

	this->ProcessEvent(uFnPress_OptionItemButton, &Press_OptionItemButton_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.Press_Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Reset(struct FEventData ev)
{
	static UFunction* uFnPress_Reset = nullptr;

	if (!uFnPress_Reset)
	{
		uFnPress_Reset = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.Press_Reset");
	}

	UOLUIFrontEnd_Options_execPress_Reset_Params Press_Reset_Params;
	memset(&Press_Reset_Params, 0, sizeof(Press_Reset_Params));
	memcpy_s(&Press_Reset_Params.ev, sizeof(Press_Reset_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Reset, &Press_Reset_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.Press_Gamma
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Gamma(struct FEventData ev)
{
	static UFunction* uFnPress_Gamma = nullptr;

	if (!uFnPress_Gamma)
	{
		uFnPress_Gamma = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.Press_Gamma");
	}

	UOLUIFrontEnd_Options_execPress_Gamma_Params Press_Gamma_Params;
	memset(&Press_Gamma_Params, 0, sizeof(Press_Gamma_Params));
	memcpy_s(&Press_Gamma_Params.ev, sizeof(Press_Gamma_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Gamma, &Press_Gamma_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.Press_Back");
	}

	UOLUIFrontEnd_Options_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.OnConfirmChanges
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           bOk                            (CPF_Parm)

void UOLUIFrontEnd_Options::OnConfirmChanges(bool bOk)
{
	static UFunction* uFnOnConfirmChanges = nullptr;

	if (!uFnOnConfirmChanges)
	{
		uFnOnConfirmChanges = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnConfirmChanges");
	}

	UOLUIFrontEnd_Options_execOnConfirmChanges_Params OnConfirmChanges_Params;
	memset(&OnConfirmChanges_Params, 0, sizeof(OnConfirmChanges_Params));
	OnConfirmChanges_Params.bOk = bOk;

	this->ProcessEvent(uFnOnConfirmChanges, &OnConfirmChanges_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.RevertToPreviousResolution
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::RevertToPreviousResolution()
{
	static UFunction* uFnRevertToPreviousResolution = nullptr;

	if (!uFnRevertToPreviousResolution)
	{
		uFnRevertToPreviousResolution = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.RevertToPreviousResolution");
	}

	UOLUIFrontEnd_Options_execRevertToPreviousResolution_Params RevertToPreviousResolution_Params;
	memset(&RevertToPreviousResolution_Params, 0, sizeof(RevertToPreviousResolution_Params));

	this->ProcessEvent(uFnRevertToPreviousResolution, &RevertToPreviousResolution_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.OnConfirmResolution
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bOk                            (CPF_Parm)

void UOLUIFrontEnd_Options::OnConfirmResolution(bool bOk)
{
	static UFunction* uFnOnConfirmResolution = nullptr;

	if (!uFnOnConfirmResolution)
	{
		uFnOnConfirmResolution = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnConfirmResolution");
	}

	UOLUIFrontEnd_Options_execOnConfirmResolution_Params OnConfirmResolution_Params;
	memset(&OnConfirmResolution_Params, 0, sizeof(OnConfirmResolution_Params));
	OnConfirmResolution_Params.bOk = bOk;

	this->ProcessEvent(uFnOnConfirmResolution, &OnConfirmResolution_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bOk                            (CPF_Parm)

void UOLUIFrontEnd_Options::OnDismissKeyBindingConflictDialog(bool bOk)
{
	static UFunction* uFnOnDismissKeyBindingConflictDialog = nullptr;

	if (!uFnOnDismissKeyBindingConflictDialog)
	{
		uFnOnDismissKeyBindingConflictDialog = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog");
	}

	UOLUIFrontEnd_Options_execOnDismissKeyBindingConflictDialog_Params OnDismissKeyBindingConflictDialog_Params;
	memset(&OnDismissKeyBindingConflictDialog_Params, 0, sizeof(OnDismissKeyBindingConflictDialog_Params));
	OnDismissKeyBindingConflictDialog_Params.bOk = bOk;

	this->ProcessEvent(uFnOnDismissKeyBindingConflictDialog, &OnDismissKeyBindingConflictDialog_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.Press_Apply
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Apply(struct FEventData ev)
{
	static UFunction* uFnPress_Apply = nullptr;

	if (!uFnPress_Apply)
	{
		uFnPress_Apply = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.Press_Apply");
	}

	UOLUIFrontEnd_Options_execPress_Apply_Params Press_Apply_Params;
	memset(&Press_Apply_Params, 0, sizeof(Press_Apply_Params));
	memcpy_s(&Press_Apply_Params.ev, sizeof(Press_Apply_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Apply, &Press_Apply_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::OnMustRestartAccepted()
{
	static UFunction* uFnOnMustRestartAccepted = nullptr;

	if (!uFnOnMustRestartAccepted)
	{
		uFnOnMustRestartAccepted = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted");
	}

	UOLUIFrontEnd_Options_execOnMustRestartAccepted_Params OnMustRestartAccepted_Params;
	memset(&OnMustRestartAccepted_Params, 0, sizeof(OnMustRestartAccepted_Params));

	this->ProcessEvent(uFnOnMustRestartAccepted, &OnMustRestartAccepted_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::ExitOptionsScreen()
{
	static UFunction* uFnExitOptionsScreen = nullptr;

	if (!uFnExitOptionsScreen)
	{
		uFnExitOptionsScreen = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen");
	}

	UOLUIFrontEnd_Options_execExitOptionsScreen_Params ExitOptionsScreen_Params;
	memset(&ExitOptionsScreen_Params, 0, sizeof(ExitOptionsScreen_Params));

	this->ProcessEvent(uFnExitOptionsScreen, &ExitOptionsScreen_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Options::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.back");
	}

	UOLUIFrontEnd_Options_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options.OnViewActivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnViewActivated");
	}

	UOLUIFrontEnd_Options_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options.OnViewLoaded");
	}

	UOLUIFrontEnd_Options_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_LoadGame.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_LoadGame::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.WidgetInitialized");
	}

	UOLUIFrontEnd_LoadGame_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_LoadGame.GetCheckpointTag
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   CheckpointName                 (CPF_Parm)

struct FName UOLUIFrontEnd_LoadGame::GetCheckpointTag(struct FName CheckpointName)
{
	static UFunction* uFnGetCheckpointTag = nullptr;

	if (!uFnGetCheckpointTag)
	{
		uFnGetCheckpointTag = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.GetCheckpointTag");
	}

	UOLUIFrontEnd_LoadGame_execGetCheckpointTag_Params GetCheckpointTag_Params;
	memset(&GetCheckpointTag_Params, 0, sizeof(GetCheckpointTag_Params));
	memcpy_s(&GetCheckpointTag_Params.CheckpointName, sizeof(GetCheckpointTag_Params.CheckpointName), &CheckpointName, sizeof(CheckpointName));

	this->ProcessEvent(uFnGetCheckpointTag, &GetCheckpointTag_Params, nullptr);

	return GetCheckpointTag_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_LoadGame.GetSaveFileDisplayName
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FSaveFileInfo           SaveFile                       (CPF_Parm | CPF_NeedCtorLink)

class FString UOLUIFrontEnd_LoadGame::GetSaveFileDisplayName(struct FSaveFileInfo SaveFile)
{
	static UFunction* uFnGetSaveFileDisplayName = nullptr;

	if (!uFnGetSaveFileDisplayName)
	{
		uFnGetSaveFileDisplayName = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.GetSaveFileDisplayName");
	}

	UOLUIFrontEnd_LoadGame_execGetSaveFileDisplayName_Params GetSaveFileDisplayName_Params;
	memset(&GetSaveFileDisplayName_Params, 0, sizeof(GetSaveFileDisplayName_Params));
	memcpy_s(&GetSaveFileDisplayName_Params.SaveFile, sizeof(GetSaveFileDisplayName_Params.SaveFile), &SaveFile, sizeof(SaveFile));

	this->ProcessEvent(uFnGetSaveFileDisplayName, &GetSaveFileDisplayName_Params, nullptr);

	return GetSaveFileDisplayName_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_LoadGame.SetSelectedIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)

void UOLUIFrontEnd_LoadGame::SetSelectedIndex(int32_t Index)
{
	static UFunction* uFnSetSelectedIndex = nullptr;

	if (!uFnSetSelectedIndex)
	{
		uFnSetSelectedIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.SetSelectedIndex");
	}

	UOLUIFrontEnd_LoadGame_execSetSelectedIndex_Params SetSelectedIndex_Params;
	memset(&SetSelectedIndex_Params, 0, sizeof(SetSelectedIndex_Params));
	memcpy_s(&SetSelectedIndex_Params.Index, sizeof(SetSelectedIndex_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnSetSelectedIndex, &SetSelectedIndex_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_LoadGame.SaveListChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_LoadGame::SaveListChanged(struct FEventData ev)
{
	static UFunction* uFnSaveListChanged = nullptr;

	if (!uFnSaveListChanged)
	{
		uFnSaveListChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.SaveListChanged");
	}

	UOLUIFrontEnd_LoadGame_execSaveListChanged_Params SaveListChanged_Params;
	memset(&SaveListChanged_Params, 0, sizeof(SaveListChanged_Params));
	memcpy_s(&SaveListChanged_Params.ev, sizeof(SaveListChanged_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnSaveListChanged, &SaveListChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_LoadGame.PopulateSaveList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_LoadGame::PopulateSaveList()
{
	static UFunction* uFnPopulateSaveList = nullptr;

	if (!uFnPopulateSaveList)
	{
		uFnPopulateSaveList = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.PopulateSaveList");
	}

	UOLUIFrontEnd_LoadGame_execPopulateSaveList_Params PopulateSaveList_Params;
	memset(&PopulateSaveList_Params, 0, sizeof(PopulateSaveList_Params));

	this->ProcessEvent(uFnPopulateSaveList, &PopulateSaveList_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Delete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_LoadGame::Press_Delete(struct FEventData ev)
{
	static UFunction* uFnPress_Delete = nullptr;

	if (!uFnPress_Delete)
	{
		uFnPress_Delete = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.Press_Delete");
	}

	UOLUIFrontEnd_LoadGame_execPress_Delete_Params Press_Delete_Params;
	memset(&Press_Delete_Params, 0, sizeof(Press_Delete_Params));
	memcpy_s(&Press_Delete_Params.ev, sizeof(Press_Delete_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Delete, &Press_Delete_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Load
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_LoadGame::Press_Load(struct FEventData ev)
{
	static UFunction* uFnPress_Load = nullptr;

	if (!uFnPress_Load)
	{
		uFnPress_Load = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.Press_Load");
	}

	UOLUIFrontEnd_LoadGame_execPress_Load_Params Press_Load_Params;
	memset(&Press_Load_Params, 0, sizeof(Press_Load_Params));
	memcpy_s(&Press_Load_Params.ev, sizeof(Press_Load_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Load, &Press_Load_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_LoadGame::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.Press_Back");
	}

	UOLUIFrontEnd_LoadGame_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_LoadGame.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_LoadGame::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_LoadGame.OnTopMostView");
	}

	UOLUIFrontEnd_LoadGame_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_PauseMenu::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput");
	}

	UOLUIFrontEnd_PauseMenu_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_PauseMenu::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized");
	}

	UOLUIFrontEnd_PauseMenu_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  okButtonLabel                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  cancelButtonLabel              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  callbackName                   (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::ASShowConfirmExitDialog(class FString Title, class FString Message, class FString okButtonLabel, class FString cancelButtonLabel, class FString callbackName)
{
	static UFunction* uFnASShowConfirmExitDialog = nullptr;

	if (!uFnASShowConfirmExitDialog)
	{
		uFnASShowConfirmExitDialog = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog");
	}

	UOLUIFrontEnd_PauseMenu_execASShowConfirmExitDialog_Params ASShowConfirmExitDialog_Params;
	memset(&ASShowConfirmExitDialog_Params, 0, sizeof(ASShowConfirmExitDialog_Params));
	memcpy_s(&ASShowConfirmExitDialog_Params.Title, sizeof(ASShowConfirmExitDialog_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ASShowConfirmExitDialog_Params.Message, sizeof(ASShowConfirmExitDialog_Params.Message), &Message, sizeof(Message));
	memcpy_s(&ASShowConfirmExitDialog_Params.okButtonLabel, sizeof(ASShowConfirmExitDialog_Params.okButtonLabel), &okButtonLabel, sizeof(okButtonLabel));
	memcpy_s(&ASShowConfirmExitDialog_Params.cancelButtonLabel, sizeof(ASShowConfirmExitDialog_Params.cancelButtonLabel), &cancelButtonLabel, sizeof(cancelButtonLabel));
	memcpy_s(&ASShowConfirmExitDialog_Params.callbackName, sizeof(ASShowConfirmExitDialog_Params.callbackName), &callbackName, sizeof(callbackName));

	this->ProcessEvent(uFnASShowConfirmExitDialog, &ASShowConfirmExitDialog_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bOk                            (CPF_Parm)

void UOLUIFrontEnd_PauseMenu::OnExitConfirmed(bool bOk)
{
	static UFunction* uFnOnExitConfirmed = nullptr;

	if (!uFnOnExitConfirmed)
	{
		uFnOnExitConfirmed = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed");
	}

	UOLUIFrontEnd_PauseMenu_execOnExitConfirmed_Params OnExitConfirmed_Params;
	memset(&OnExitConfirmed_Params, 0, sizeof(OnExitConfirmed_Params));
	OnExitConfirmed_Params.bOk = bOk;

	this->ProcessEvent(uFnOnExitConfirmed, &OnExitConfirmed_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnExitToMenuButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnExitToMenuButtonPress = nullptr;

	if (!uFnOnExitToMenuButtonPress)
	{
		uFnOnExitToMenuButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress");
	}

	UOLUIFrontEnd_PauseMenu_execOnExitToMenuButtonPress_Params OnExitToMenuButtonPress_Params;
	memset(&OnExitToMenuButtonPress_Params, 0, sizeof(OnExitToMenuButtonPress_Params));
	memcpy_s(&OnExitToMenuButtonPress_Params.ev, sizeof(OnExitToMenuButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnExitToMenuButtonPress, &OnExitToMenuButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bSuccess                       (CPF_Parm)

void UOLUIFrontEnd_PauseMenu::OnSaveCompleted(bool bSuccess)
{
	static UFunction* uFnOnSaveCompleted = nullptr;

	if (!uFnOnSaveCompleted)
	{
		uFnOnSaveCompleted = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted");
	}

	UOLUIFrontEnd_PauseMenu_execOnSaveCompleted_Params OnSaveCompleted_Params;
	memset(&OnSaveCompleted_Params, 0, sizeof(OnSaveCompleted_Params));
	OnSaveCompleted_Params.bSuccess = bSuccess;

	this->ProcessEvent(uFnOnSaveCompleted, &OnSaveCompleted_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnSaveButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnSaveButtonPress = nullptr;

	if (!uFnOnSaveButtonPress)
	{
		uFnOnSaveButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress");
	}

	UOLUIFrontEnd_PauseMenu_execOnSaveButtonPress_Params OnSaveButtonPress_Params;
	memset(&OnSaveButtonPress_Params, 0, sizeof(OnSaveButtonPress_Params));
	memcpy_s(&OnSaveButtonPress_Params.ev, sizeof(OnSaveButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnSaveButtonPress, &OnSaveButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnOptionsButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnOptionsButtonPress = nullptr;

	if (!uFnOnOptionsButtonPress)
	{
		uFnOnOptionsButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress");
	}

	UOLUIFrontEnd_PauseMenu_execOnOptionsButtonPress_Params OnOptionsButtonPress_Params;
	memset(&OnOptionsButtonPress_Params, 0, sizeof(OnOptionsButtonPress_Params));
	memcpy_s(&OnOptionsButtonPress_Params.ev, sizeof(OnOptionsButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnOptionsButtonPress, &OnOptionsButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnReturnButtonPress(struct FEventData ev)
{
	static UFunction* uFnOnReturnButtonPress = nullptr;

	if (!uFnOnReturnButtonPress)
	{
		uFnOnReturnButtonPress = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress");
	}

	UOLUIFrontEnd_PauseMenu_execOnReturnButtonPress_Params OnReturnButtonPress_Params;
	memset(&OnReturnButtonPress_Params, 0, sizeof(OnReturnButtonPress_Params));
	memcpy_s(&OnReturnButtonPress_Params.ev, sizeof(OnReturnButtonPress_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnReturnButtonPress, &OnReturnButtonPress_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnButtonClick(struct FEventData ev)
{
	static UFunction* uFnOnButtonClick = nullptr;

	if (!uFnOnButtonClick)
	{
		uFnOnButtonClick = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick");
	}

	UOLUIFrontEnd_PauseMenu_execOnButtonClick_Params OnButtonClick_Params;
	memset(&OnButtonClick_Params, 0, sizeof(OnButtonClick_Params));
	memcpy_s(&OnButtonClick_Params.ev, sizeof(OnButtonClick_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnOnButtonClick, &OnButtonClick_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_PauseMenu::PopulateButtons()
{
	static UFunction* uFnPopulateButtons = nullptr;

	if (!uFnPopulateButtons)
	{
		uFnPopulateButtons = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons");
	}

	UOLUIFrontEnd_PauseMenu_execPopulateButtons_Params PopulateButtons_Params;
	memset(&PopulateButtons_Params, 0, sizeof(PopulateButtons_Params));

	this->ProcessEvent(uFnPopulateButtons, &PopulateButtons_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_PauseMenu::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView");
	}

	UOLUIFrontEnd_PauseMenu_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_PauseMenu::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded");
	}

	UOLUIFrontEnd_PauseMenu_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASPreviousPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView::ASPreviousPage()
{
	static UFunction* uFnASPreviousPage = nullptr;

	if (!uFnASPreviousPage)
	{
		uFnASPreviousPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.ASPreviousPage");
	}

	UOLUIFrontEnd_RecordingView_execASPreviousPage_Params ASPreviousPage_Params;
	memset(&ASPreviousPage_Params, 0, sizeof(ASPreviousPage_Params));

	this->ProcessEvent(uFnASPreviousPage, &ASPreviousPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASNextPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView::ASNextPage()
{
	static UFunction* uFnASNextPage = nullptr;

	if (!uFnASNextPage)
	{
		uFnASNextPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.ASNextPage");
	}

	UOLUIFrontEnd_RecordingView_execASNextPage_Params ASNextPage_Params;
	memset(&ASNextPage_Params, 0, sizeof(ASNextPage_Params));

	this->ProcessEvent(uFnASNextPage, &ASNextPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASPaginateText
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView::ASPaginateText()
{
	static UFunction* uFnASPaginateText = nullptr;

	if (!uFnASPaginateText)
	{
		uFnASPaginateText = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.ASPaginateText");
	}

	UOLUIFrontEnd_RecordingView_execASPaginateText_Params ASPaginateText_Params;
	memset(&ASPaginateText_Params, 0, sizeof(ASPaginateText_Params));

	this->ProcessEvent(uFnASPaginateText, &ASPaginateText_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_RecordingView::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.FilterButtonInput");
	}

	UOLUIFrontEnd_RecordingView_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingView.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_RecordingView::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.WidgetInitialized");
	}

	UOLUIFrontEnd_RecordingView_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingView.GoAfterLastPage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView::GoAfterLastPage()
{
	static UFunction* uFnGoAfterLastPage = nullptr;

	if (!uFnGoAfterLastPage)
	{
		uFnGoAfterLastPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.GoAfterLastPage");
	}

	UOLUIFrontEnd_RecordingView_execGoAfterLastPage_Params GoAfterLastPage_Params;
	memset(&GoAfterLastPage_Params, 0, sizeof(GoAfterLastPage_Params));

	this->ProcessEvent(uFnGoAfterLastPage, &GoAfterLastPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.GoBeforeFirstPage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView::GoBeforeFirstPage()
{
	static UFunction* uFnGoBeforeFirstPage = nullptr;

	if (!uFnGoBeforeFirstPage)
	{
		uFnGoBeforeFirstPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.GoBeforeFirstPage");
	}

	UOLUIFrontEnd_RecordingView_execGoBeforeFirstPage_Params GoBeforeFirstPage_Params;
	memset(&GoBeforeFirstPage_Params, 0, sizeof(GoBeforeFirstPage_Params));

	this->ProcessEvent(uFnGoBeforeFirstPage, &GoBeforeFirstPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Close
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Close(struct FEventData ev)
{
	static UFunction* uFnPress_Close = nullptr;

	if (!uFnPress_Close)
	{
		uFnPress_Close = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.Press_Close");
	}

	UOLUIFrontEnd_RecordingView_execPress_Close_Params Press_Close_Params;
	memset(&Press_Close_Params, 0, sizeof(Press_Close_Params));
	memcpy_s(&Press_Close_Params.ev, sizeof(Press_Close_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Close, &Press_Close_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.Press_Back");
	}

	UOLUIFrontEnd_RecordingView_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Next
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Next(struct FEventData ev)
{
	static UFunction* uFnPress_Next = nullptr;

	if (!uFnPress_Next)
	{
		uFnPress_Next = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.Press_Next");
	}

	UOLUIFrontEnd_RecordingView_execPress_Next_Params Press_Next_Params;
	memset(&Press_Next_Params, 0, sizeof(Press_Next_Params));
	memcpy_s(&Press_Next_Params.ev, sizeof(Press_Next_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Next, &Press_Next_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Previous
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Previous(struct FEventData ev)
{
	static UFunction* uFnPress_Previous = nullptr;

	if (!uFnPress_Previous)
	{
		uFnPress_Previous = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.Press_Previous");
	}

	UOLUIFrontEnd_RecordingView_execPress_Previous_Params Press_Previous_Params;
	memset(&Press_Previous_Params, 0, sizeof(Press_Previous_Params));
	memcpy_s(&Press_Previous_Params.ev, sizeof(Press_Previous_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Previous, &Press_Previous_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.OnViewActivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.OnViewActivated");
	}

	UOLUIFrontEnd_RecordingView_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView.OnViewLoaded");
	}

	UOLUIFrontEnd_RecordingView_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASPreviousPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView::ASPreviousPage()
{
	static UFunction* uFnASPreviousPage = nullptr;

	if (!uFnASPreviousPage)
	{
		uFnASPreviousPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.ASPreviousPage");
	}

	UOLUIFrontEnd_EvidenceView_execASPreviousPage_Params ASPreviousPage_Params;
	memset(&ASPreviousPage_Params, 0, sizeof(ASPreviousPage_Params));

	this->ProcessEvent(uFnASPreviousPage, &ASPreviousPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASNextPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView::ASNextPage()
{
	static UFunction* uFnASNextPage = nullptr;

	if (!uFnASNextPage)
	{
		uFnASNextPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.ASNextPage");
	}

	UOLUIFrontEnd_EvidenceView_execASNextPage_Params ASNextPage_Params;
	memset(&ASNextPage_Params, 0, sizeof(ASNextPage_Params));

	this->ProcessEvent(uFnASNextPage, &ASNextPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASPaginateText
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView::ASPaginateText()
{
	static UFunction* uFnASPaginateText = nullptr;

	if (!uFnASPaginateText)
	{
		uFnASPaginateText = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.ASPaginateText");
	}

	UOLUIFrontEnd_EvidenceView_execASPaginateText_Params ASPaginateText_Params;
	memset(&ASPaginateText_Params, 0, sizeof(ASPaginateText_Params));

	this->ProcessEvent(uFnASPaginateText, &ASPaginateText_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_EvidenceView::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.FilterButtonInput");
	}

	UOLUIFrontEnd_EvidenceView_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceView.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_EvidenceView::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.WidgetInitialized");
	}

	UOLUIFrontEnd_EvidenceView_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceView.GoAfterLastPage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView::GoAfterLastPage()
{
	static UFunction* uFnGoAfterLastPage = nullptr;

	if (!uFnGoAfterLastPage)
	{
		uFnGoAfterLastPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.GoAfterLastPage");
	}

	UOLUIFrontEnd_EvidenceView_execGoAfterLastPage_Params GoAfterLastPage_Params;
	memset(&GoAfterLastPage_Params, 0, sizeof(GoAfterLastPage_Params));

	this->ProcessEvent(uFnGoAfterLastPage, &GoAfterLastPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.GoBeforeFirstPage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView::GoBeforeFirstPage()
{
	static UFunction* uFnGoBeforeFirstPage = nullptr;

	if (!uFnGoBeforeFirstPage)
	{
		uFnGoBeforeFirstPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.GoBeforeFirstPage");
	}

	UOLUIFrontEnd_EvidenceView_execGoBeforeFirstPage_Params GoBeforeFirstPage_Params;
	memset(&GoBeforeFirstPage_Params, 0, sizeof(GoBeforeFirstPage_Params));

	this->ProcessEvent(uFnGoBeforeFirstPage, &GoBeforeFirstPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Close
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Close(struct FEventData ev)
{
	static UFunction* uFnPress_Close = nullptr;

	if (!uFnPress_Close)
	{
		uFnPress_Close = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Close");
	}

	UOLUIFrontEnd_EvidenceView_execPress_Close_Params Press_Close_Params;
	memset(&Press_Close_Params, 0, sizeof(Press_Close_Params));
	memcpy_s(&Press_Close_Params.ev, sizeof(Press_Close_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Close, &Press_Close_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Back");
	}

	UOLUIFrontEnd_EvidenceView_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Next
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Next(struct FEventData ev)
{
	static UFunction* uFnPress_Next = nullptr;

	if (!uFnPress_Next)
	{
		uFnPress_Next = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Next");
	}

	UOLUIFrontEnd_EvidenceView_execPress_Next_Params Press_Next_Params;
	memset(&Press_Next_Params, 0, sizeof(Press_Next_Params));
	memcpy_s(&Press_Next_Params.ev, sizeof(Press_Next_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Next, &Press_Next_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Previous
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Previous(struct FEventData ev)
{
	static UFunction* uFnPress_Previous = nullptr;

	if (!uFnPress_Previous)
	{
		uFnPress_Previous = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Previous");
	}

	UOLUIFrontEnd_EvidenceView_execPress_Previous_Params Press_Previous_Params;
	memset(&Press_Previous_Params, 0, sizeof(Press_Previous_Params));
	memcpy_s(&Press_Previous_Params.ev, sizeof(Press_Previous_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Previous, &Press_Previous_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewActivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.OnViewActivated");
	}

	UOLUIFrontEnd_EvidenceView_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView.OnViewLoaded");
	}

	UOLUIFrontEnd_EvidenceView_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UOLUIFrontEnd_GammaScreen::GetCurrentGammaSetting()
{
	static UFunction* uFnGetCurrentGammaSetting = nullptr;

	if (!uFnGetCurrentGammaSetting)
	{
		uFnGetCurrentGammaSetting = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting");
	}

	UOLUIFrontEnd_GammaScreen_execGetCurrentGammaSetting_Params GetCurrentGammaSetting_Params;
	memset(&GetCurrentGammaSetting_Params, 0, sizeof(GetCurrentGammaSetting_Params));

	this->ProcessEvent(uFnGetCurrentGammaSetting, &GetCurrentGammaSetting_Params, nullptr);

	return GetCurrentGammaSetting_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_GammaScreen::IsGammaInitialized()
{
	static UFunction* uFnIsGammaInitialized = nullptr;

	if (!uFnIsGammaInitialized)
	{
		uFnIsGammaInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized");
	}

	UOLUIFrontEnd_GammaScreen_execIsGammaInitialized_Params IsGammaInitialized_Params;
	memset(&IsGammaInitialized_Params, 0, sizeof(IsGammaInitialized_Params));

	this->ProcessEvent(uFnIsGammaInitialized, &IsGammaInitialized_Params, nullptr);

	return IsGammaInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_GammaScreen::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized");
	}

	UOLUIFrontEnd_GammaScreen_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_GammaScreen::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput");
	}

	UOLUIFrontEnd_GammaScreen_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Change_Slider(struct FEventData ev)
{
	static UFunction* uFnChange_Slider = nullptr;

	if (!uFnChange_Slider)
	{
		uFnChange_Slider = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider");
	}

	UOLUIFrontEnd_GammaScreen_execChange_Slider_Params Change_Slider_Params;
	memset(&Change_Slider_Params, 0, sizeof(Change_Slider_Params));
	memcpy_s(&Change_Slider_Params.ev, sizeof(Change_Slider_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnChange_Slider, &Change_Slider_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Pop
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen::Pop()
{
	static UFunction* uFnPop = nullptr;

	if (!uFnPop)
	{
		uFnPop = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.Pop");
	}

	UOLUIFrontEnd_GammaScreen_execPop_Params Pop_Params;
	memset(&Pop_Params, 0, sizeof(Pop_Params));

	this->ProcessEvent(uFnPop, &Pop_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated");
	}

	UOLUIFrontEnd_GammaScreen_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_GammaScreen::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.back");
	}

	UOLUIFrontEnd_GammaScreen_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back");
	}

	UOLUIFrontEnd_GammaScreen_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen::OnAccept()
{
	static UFunction* uFnOnAccept = nullptr;

	if (!uFnOnAccept)
	{
		uFnOnAccept = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept");
	}

	UOLUIFrontEnd_GammaScreen_execOnAccept_Params OnAccept_Params;
	memset(&OnAccept_Params, 0, sizeof(OnAccept_Params));

	this->ProcessEvent(uFnOnAccept, &OnAccept_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Press_Accept(struct FEventData ev)
{
	static UFunction* uFnPress_Accept = nullptr;

	if (!uFnPress_Accept)
	{
		uFnPress_Accept = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept");
	}

	UOLUIFrontEnd_GammaScreen_execPress_Accept_Params Press_Accept_Params;
	memset(&Press_Accept_Params, 0, sizeof(Press_Accept_Params));
	memcpy_s(&Press_Accept_Params.ev, sizeof(Press_Accept_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Accept, &Press_Accept_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_GammaScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView");
	}

	UOLUIFrontEnd_GammaScreen_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded");
	}

	UOLUIFrontEnd_GammaScreen_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ConfigType                     (CPF_Parm)

void UOLUIFrontEnd_GamepadScreen::ASUpdateGamepadLabels(int32_t ConfigType)
{
	static UFunction* uFnASUpdateGamepadLabels = nullptr;

	if (!uFnASUpdateGamepadLabels)
	{
		uFnASUpdateGamepadLabels = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels");
	}

	UOLUIFrontEnd_GamepadScreen_execASUpdateGamepadLabels_Params ASUpdateGamepadLabels_Params;
	memset(&ASUpdateGamepadLabels_Params, 0, sizeof(ASUpdateGamepadLabels_Params));
	memcpy_s(&ASUpdateGamepadLabels_Params.ConfigType, sizeof(ASUpdateGamepadLabels_Params.ConfigType), &ConfigType, sizeof(ConfigType));

	this->ProcessEvent(uFnASUpdateGamepadLabels, &ASUpdateGamepadLabels_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::TabChanged(struct FEventData ev)
{
	static UFunction* uFnTabChanged = nullptr;

	if (!uFnTabChanged)
	{
		uFnTabChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged");
	}

	UOLUIFrontEnd_GamepadScreen_execTabChanged_Params TabChanged_Params;
	memset(&TabChanged_Params, 0, sizeof(TabChanged_Params));
	memcpy_s(&TabChanged_Params.ev, sizeof(TabChanged_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnTabChanged, &TabChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_GamepadScreen::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized");
	}

	UOLUIFrontEnd_GamepadScreen_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen::PopulateTabButtons()
{
	static UFunction* uFnPopulateTabButtons = nullptr;

	if (!uFnPopulateTabButtons)
	{
		uFnPopulateTabButtons = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons");
	}

	UOLUIFrontEnd_GamepadScreen_execPopulateTabButtons_Params PopulateTabButtons_Params;
	memset(&PopulateTabButtons_Params, 0, sizeof(PopulateTabButtons_Params));

	this->ProcessEvent(uFnPopulateTabButtons, &PopulateTabButtons_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Pop
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen::Pop()
{
	static UFunction* uFnPop = nullptr;

	if (!uFnPop)
	{
		uFnPop = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.Pop");
	}

	UOLUIFrontEnd_GamepadScreen_execPop_Params Pop_Params;
	memset(&Pop_Params, 0, sizeof(Pop_Params));

	this->ProcessEvent(uFnPop, &Pop_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated");
	}

	UOLUIFrontEnd_GamepadScreen_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back");
	}

	UOLUIFrontEnd_GamepadScreen_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::Press_Accept(struct FEventData ev)
{
	static UFunction* uFnPress_Accept = nullptr;

	if (!uFnPress_Accept)
	{
		uFnPress_Accept = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept");
	}

	UOLUIFrontEnd_GamepadScreen_execPress_Accept_Params Press_Accept_Params;
	memset(&Press_Accept_Params, 0, sizeof(Press_Accept_Params));
	memcpy_s(&Press_Accept_Params.ev, sizeof(Press_Accept_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Accept, &Press_Accept_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_GamepadScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView");
	}

	UOLUIFrontEnd_GamepadScreen_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded");
	}

	UOLUIFrontEnd_GamepadScreen_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_Options_Console::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized");
	}

	UOLUIFrontEnd_Options_Console_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_Options_Console::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput");
	}

	UOLUIFrontEnd_Options_Console_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_Options_Console::GetFullscreenOptionIndex()
{
	static UFunction* uFnGetFullscreenOptionIndex = nullptr;

	if (!uFnGetFullscreenOptionIndex)
	{
		uFnGetFullscreenOptionIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex");
	}

	UOLUIFrontEnd_Options_Console_execGetFullscreenOptionIndex_Params GetFullscreenOptionIndex_Params;
	memset(&GetFullscreenOptionIndex_Params, 0, sizeof(GetFullscreenOptionIndex_Params));

	this->ProcessEvent(uFnGetFullscreenOptionIndex, &GetFullscreenOptionIndex_Params, nullptr);

	return GetFullscreenOptionIndex_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_Options_Console::GetResolutionOptionIndex()
{
	static UFunction* uFnGetResolutionOptionIndex = nullptr;

	if (!uFnGetResolutionOptionIndex)
	{
		uFnGetResolutionOptionIndex = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex");
	}

	UOLUIFrontEnd_Options_Console_execGetResolutionOptionIndex_Params GetResolutionOptionIndex_Params;
	memset(&GetResolutionOptionIndex_Params, 0, sizeof(GetResolutionOptionIndex_Params));

	this->ProcessEvent(uFnGetResolutionOptionIndex, &GetResolutionOptionIndex_Params, nullptr);

	return GetResolutionOptionIndex_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Options_Console::HasResolutionChanged()
{
	static UFunction* uFnHasResolutionChanged = nullptr;

	if (!uFnHasResolutionChanged)
	{
		uFnHasResolutionChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged");
	}

	UOLUIFrontEnd_Options_Console_execHasResolutionChanged_Params HasResolutionChanged_Params;
	memset(&HasResolutionChanged_Params, 0, sizeof(HasResolutionChanged_Params));

	this->ProcessEvent(uFnHasResolutionChanged, &HasResolutionChanged_Params, nullptr);

	return HasResolutionChanged_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options_Console.TabChanged
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options_Console::TabChanged(struct FEventData ev)
{
	static UFunction* uFnTabChanged = nullptr;

	if (!uFnTabChanged)
	{
		uFnTabChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.TabChanged");
	}

	UOLUIFrontEnd_Options_Console_execTabChanged_Params TabChanged_Params;
	memset(&TabChanged_Params, 0, sizeof(TabChanged_Params));
	memcpy_s(&TabChanged_Params.ev, sizeof(TabChanged_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnTabChanged, &TabChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.SetGammaExternally
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Gamma                          (CPF_Parm)

void UOLUIFrontEnd_Options_Console::SetGammaExternally(float Gamma)
{
	static UFunction* uFnSetGammaExternally = nullptr;

	if (!uFnSetGammaExternally)
	{
		uFnSetGammaExternally = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.SetGammaExternally");
	}

	UOLUIFrontEnd_Options_Console_execSetGammaExternally_Params SetGammaExternally_Params;
	memset(&SetGammaExternally_Params, 0, sizeof(SetGammaExternally_Params));
	memcpy_s(&SetGammaExternally_Params.Gamma, sizeof(SetGammaExternally_Params.Gamma), &Gamma, sizeof(Gamma));

	this->ProcessEvent(uFnSetGammaExternally, &SetGammaExternally_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetCurrentGammaSetting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UOLUIFrontEnd_Options_Console::GetCurrentGammaSetting()
{
	static UFunction* uFnGetCurrentGammaSetting = nullptr;

	if (!uFnGetCurrentGammaSetting)
	{
		uFnGetCurrentGammaSetting = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.GetCurrentGammaSetting");
	}

	UOLUIFrontEnd_Options_Console_execGetCurrentGammaSetting_Params GetCurrentGammaSetting_Params;
	memset(&GetCurrentGammaSetting_Params, 0, sizeof(GetCurrentGammaSetting_Params));

	this->ProcessEvent(uFnGetCurrentGammaSetting, &GetCurrentGammaSetting_Params, nullptr);

	return GetCurrentGammaSetting_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options_Console.ResetPS4Options
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options_Console::ResetPS4Options()
{
	static UFunction* uFnResetPS4Options = nullptr;

	if (!uFnResetPS4Options)
	{
		uFnResetPS4Options = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.ResetPS4Options");
	}

	UOLUIFrontEnd_Options_Console_execResetPS4Options_Params ResetPS4Options_Params;
	memset(&ResetPS4Options_Params, 0, sizeof(ResetPS4Options_Params));

	this->ProcessEvent(uFnResetPS4Options, &ResetPS4Options_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Reset(struct FEventData ev)
{
	static UFunction* uFnPress_Reset = nullptr;

	if (!uFnPress_Reset)
	{
		uFnPress_Reset = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset");
	}

	UOLUIFrontEnd_Options_Console_execPress_Reset_Params Press_Reset_Params;
	memset(&Press_Reset_Params, 0, sizeof(Press_Reset_Params));
	memcpy_s(&Press_Reset_Params.ev, sizeof(Press_Reset_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Reset, &Press_Reset_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options_Console::FillOptionValuesFromProfile()
{
	static UFunction* uFnFillOptionValuesFromProfile = nullptr;

	if (!uFnFillOptionValuesFromProfile)
	{
		uFnFillOptionValuesFromProfile = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile");
	}

	UOLUIFrontEnd_Options_Console_execFillOptionValuesFromProfile_Params FillOptionValuesFromProfile_Params;
	memset(&FillOptionValuesFromProfile_Params, 0, sizeof(FillOptionValuesFromProfile_Params));

	this->ProcessEvent(uFnFillOptionValuesFromProfile, &FillOptionValuesFromProfile_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options_Console::PopulateControlsOptions()
{
	static UFunction* uFnPopulateControlsOptions = nullptr;

	if (!uFnPopulateControlsOptions)
	{
		uFnPopulateControlsOptions = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions");
	}

	UOLUIFrontEnd_Options_Console_execPopulateControlsOptions_Params PopulateControlsOptions_Params;
	memset(&PopulateControlsOptions_Params, 0, sizeof(PopulateControlsOptions_Params));

	this->ProcessEvent(uFnPopulateControlsOptions, &PopulateControlsOptions_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options_Console::PopulateTabButtons()
{
	static UFunction* uFnPopulateTabButtons = nullptr;

	if (!uFnPopulateTabButtons)
	{
		uFnPopulateTabButtons = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons");
	}

	UOLUIFrontEnd_Options_Console_execPopulateTabButtons_Params PopulateTabButtons_Params;
	memset(&PopulateTabButtons_Params, 0, sizeof(PopulateTabButtons_Params));

	this->ProcessEvent(uFnPopulateTabButtons, &PopulateTabButtons_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Apply(struct FEventData ev)
{
	static UFunction* uFnPress_Apply = nullptr;

	if (!uFnPress_Apply)
	{
		uFnPress_Apply = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply");
	}

	UOLUIFrontEnd_Options_Console_execPress_Apply_Params Press_Apply_Params;
	memset(&Press_Apply_Params, 0, sizeof(Press_Apply_Params));
	memcpy_s(&Press_Apply_Params.ev, sizeof(Press_Apply_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Apply, &Press_Apply_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PSID                           (CPF_Parm)

void UOLUIFrontEnd_Options_Console::Press_OptionItemButton(int32_t PSID)
{
	static UFunction* uFnPress_OptionItemButton = nullptr;

	if (!uFnPress_OptionItemButton)
	{
		uFnPress_OptionItemButton = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton");
	}

	UOLUIFrontEnd_Options_Console_execPress_OptionItemButton_Params Press_OptionItemButton_Params;
	memset(&Press_OptionItemButton_Params, 0, sizeof(Press_OptionItemButton_Params));
	memcpy_s(&Press_OptionItemButton_Params.PSID, sizeof(Press_OptionItemButton_Params.PSID), &PSID, sizeof(PSID));

	this->ProcessEvent(uFnPress_OptionItemButton, &Press_OptionItemButton_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Gamma(struct FEventData ev)
{
	static UFunction* uFnPress_Gamma = nullptr;

	if (!uFnPress_Gamma)
	{
		uFnPress_Gamma = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma");
	}

	UOLUIFrontEnd_Options_Console_execPress_Gamma_Params Press_Gamma_Params;
	memset(&Press_Gamma_Params, 0, sizeof(Press_Gamma_Params));
	memcpy_s(&Press_Gamma_Params.ev, sizeof(Press_Gamma_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Gamma, &Press_Gamma_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_Options_Console::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.back");
	}

	UOLUIFrontEnd_Options_Console_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_Options_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView");
	}

	UOLUIFrontEnd_Options_Console_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options_Console::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated");
	}

	UOLUIFrontEnd_Options_Console_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_Options_Console::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded");
	}

	UOLUIFrontEnd_Options_Console_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPreviousPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView_Console::ASPreviousPage()
{
	static UFunction* uFnASPreviousPage = nullptr;

	if (!uFnASPreviousPage)
	{
		uFnASPreviousPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPreviousPage");
	}

	UOLUIFrontEnd_RecordingView_Console_execASPreviousPage_Params ASPreviousPage_Params;
	memset(&ASPreviousPage_Params, 0, sizeof(ASPreviousPage_Params));

	this->ProcessEvent(uFnASPreviousPage, &ASPreviousPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASNextPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView_Console::ASNextPage()
{
	static UFunction* uFnASNextPage = nullptr;

	if (!uFnASNextPage)
	{
		uFnASNextPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.ASNextPage");
	}

	UOLUIFrontEnd_RecordingView_Console_execASNextPage_Params ASNextPage_Params;
	memset(&ASNextPage_Params, 0, sizeof(ASNextPage_Params));

	this->ProcessEvent(uFnASNextPage, &ASNextPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPaginateText
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView_Console::ASPaginateText()
{
	static UFunction* uFnASPaginateText = nullptr;

	if (!uFnASPaginateText)
	{
		uFnASPaginateText = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPaginateText");
	}

	UOLUIFrontEnd_RecordingView_Console_execASPaginateText_Params ASPaginateText_Params;
	memset(&ASPaginateText_Params, 0, sizeof(ASPaginateText_Params));

	this->ProcessEvent(uFnASPaginateText, &ASPaginateText_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetNumPages
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_RecordingView_Console::GetNumPages()
{
	static UFunction* uFnGetNumPages = nullptr;

	if (!uFnGetNumPages)
	{
		uFnGetNumPages = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.GetNumPages");
	}

	UOLUIFrontEnd_RecordingView_Console_execGetNumPages_Params GetNumPages_Params;
	memset(&GetNumPages_Params, 0, sizeof(GetNumPages_Params));

	this->ProcessEvent(uFnGetNumPages, &GetNumPages_Params, nullptr);

	return GetNumPages_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetCurrentPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_RecordingView_Console::GetCurrentPage()
{
	static UFunction* uFnGetCurrentPage = nullptr;

	if (!uFnGetCurrentPage)
	{
		uFnGetCurrentPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.GetCurrentPage");
	}

	UOLUIFrontEnd_RecordingView_Console_execGetCurrentPage_Params GetCurrentPage_Params;
	memset(&GetCurrentPage_Params, 0, sizeof(GetCurrentPage_Params));

	this->ProcessEvent(uFnGetCurrentPage, &GetCurrentPage_Params, nullptr);

	return GetCurrentPage_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_RecordingView_Console::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.FilterButtonInput");
	}

	UOLUIFrontEnd_RecordingView_Console_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_RecordingView_Console::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.WidgetInitialized");
	}

	UOLUIFrontEnd_RecordingView_Console_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewActivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView_Console::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewActivated");
	}

	UOLUIFrontEnd_RecordingView_Console_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_RecordingView_Console::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewLoaded");
	}

	UOLUIFrontEnd_RecordingView_Console_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPreviousPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView_Console::ASPreviousPage()
{
	static UFunction* uFnASPreviousPage = nullptr;

	if (!uFnASPreviousPage)
	{
		uFnASPreviousPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPreviousPage");
	}

	UOLUIFrontEnd_EvidenceView_Console_execASPreviousPage_Params ASPreviousPage_Params;
	memset(&ASPreviousPage_Params, 0, sizeof(ASPreviousPage_Params));

	this->ProcessEvent(uFnASPreviousPage, &ASPreviousPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASNextPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView_Console::ASNextPage()
{
	static UFunction* uFnASNextPage = nullptr;

	if (!uFnASNextPage)
	{
		uFnASNextPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASNextPage");
	}

	UOLUIFrontEnd_EvidenceView_Console_execASNextPage_Params ASNextPage_Params;
	memset(&ASNextPage_Params, 0, sizeof(ASNextPage_Params));

	this->ProcessEvent(uFnASNextPage, &ASNextPage_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPaginateText
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView_Console::ASPaginateText()
{
	static UFunction* uFnASPaginateText = nullptr;

	if (!uFnASPaginateText)
	{
		uFnASPaginateText = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPaginateText");
	}

	UOLUIFrontEnd_EvidenceView_Console_execASPaginateText_Params ASPaginateText_Params;
	memset(&ASPaginateText_Params, 0, sizeof(ASPaginateText_Params));

	this->ProcessEvent(uFnASPaginateText, &ASPaginateText_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetNumPages
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_EvidenceView_Console::GetNumPages()
{
	static UFunction* uFnGetNumPages = nullptr;

	if (!uFnGetNumPages)
	{
		uFnGetNumPages = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetNumPages");
	}

	UOLUIFrontEnd_EvidenceView_Console_execGetNumPages_Params GetNumPages_Params;
	memset(&GetNumPages_Params, 0, sizeof(GetNumPages_Params));

	this->ProcessEvent(uFnGetNumPages, &GetNumPages_Params, nullptr);

	return GetNumPages_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetCurrentPage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOLUIFrontEnd_EvidenceView_Console::GetCurrentPage()
{
	static UFunction* uFnGetCurrentPage = nullptr;

	if (!uFnGetCurrentPage)
	{
		uFnGetCurrentPage = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetCurrentPage");
	}

	UOLUIFrontEnd_EvidenceView_Console_execGetCurrentPage_Params GetCurrentPage_Params;
	memset(&GetCurrentPage_Params, 0, sizeof(GetCurrentPage_Params));

	this->ProcessEvent(uFnGetCurrentPage, &GetCurrentPage_Params, nullptr);

	return GetCurrentPage_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_EvidenceView_Console::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.FilterButtonInput");
	}

	UOLUIFrontEnd_EvidenceView_Console_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_EvidenceView_Console::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.WidgetInitialized");
	}

	UOLUIFrontEnd_EvidenceView_Console_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewActivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView_Console::OnViewActivated()
{
	static UFunction* uFnOnViewActivated = nullptr;

	if (!uFnOnViewActivated)
	{
		uFnOnViewActivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewActivated");
	}

	UOLUIFrontEnd_EvidenceView_Console_execOnViewActivated_Params OnViewActivated_Params;
	memset(&OnViewActivated_Params, 0, sizeof(OnViewActivated_Params));

	this->ProcessEvent(uFnOnViewActivated, &OnViewActivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_EvidenceView_Console::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewLoaded");
	}

	UOLUIFrontEnd_EvidenceView_Console_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// bool                           bDisable                       (CPF_Parm)

void UOLUIFrontEnd_GammaScreen_Console::ASDisableBackButton(bool bDisable)
{
	static UFunction* uFnASDisableBackButton = nullptr;

	if (!uFnASDisableBackButton)
	{
		uFnASDisableBackButton = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton");
	}

	UOLUIFrontEnd_GammaScreen_Console_execASDisableBackButton_Params ASDisableBackButton_Params;
	memset(&ASDisableBackButton_Params, 0, sizeof(ASDisableBackButton_Params));
	ASDisableBackButton_Params.bDisable = bDisable;

	this->ProcessEvent(uFnASDisableBackButton, &ASDisableBackButton_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UOLUIFrontEnd_GammaScreen_Console::GetCurrentGammaSetting()
{
	static UFunction* uFnGetCurrentGammaSetting = nullptr;

	if (!uFnGetCurrentGammaSetting)
	{
		uFnGetCurrentGammaSetting = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting");
	}

	UOLUIFrontEnd_GammaScreen_Console_execGetCurrentGammaSetting_Params GetCurrentGammaSetting_Params;
	memset(&GetCurrentGammaSetting_Params, 0, sizeof(GetCurrentGammaSetting_Params));

	this->ProcessEvent(uFnGetCurrentGammaSetting, &GetCurrentGammaSetting_Params, nullptr);

	return GetCurrentGammaSetting_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::IsGammaInitialized()
{
	static UFunction* uFnIsGammaInitialized = nullptr;

	if (!uFnIsGammaInitialized)
	{
		uFnIsGammaInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized");
	}

	UOLUIFrontEnd_GammaScreen_Console_execIsGammaInitialized_Params IsGammaInitialized_Params;
	memset(&IsGammaInitialized_Params, 0, sizeof(IsGammaInitialized_Params));

	this->ProcessEvent(uFnIsGammaInitialized, &IsGammaInitialized_Params, nullptr);

	return IsGammaInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_GammaScreen_Console::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized");
	}

	UOLUIFrontEnd_GammaScreen_Console_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_GammaScreen_Console::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput");
	}

	UOLUIFrontEnd_GammaScreen_Console_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Change_Slider(struct FEventData ev)
{
	static UFunction* uFnChange_Slider = nullptr;

	if (!uFnChange_Slider)
	{
		uFnChange_Slider = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider");
	}

	UOLUIFrontEnd_GammaScreen_Console_execChange_Slider_Params Change_Slider_Params;
	memset(&Change_Slider_Params, 0, sizeof(Change_Slider_Params));
	memcpy_s(&Change_Slider_Params.ev, sizeof(Change_Slider_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnChange_Slider, &Change_Slider_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen_Console::Pop()
{
	static UFunction* uFnPop = nullptr;

	if (!uFnPop)
	{
		uFnPop = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop");
	}

	UOLUIFrontEnd_GammaScreen_Console_execPop_Params Pop_Params;
	memset(&Pop_Params, 0, sizeof(Pop_Params));

	this->ProcessEvent(uFnPop, &Pop_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen_Console::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated");
	}

	UOLUIFrontEnd_GammaScreen_Console_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.back");
	}

	UOLUIFrontEnd_GammaScreen_Console_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Press_Back(struct FEventData ev)
{
	static UFunction* uFnPress_Back = nullptr;

	if (!uFnPress_Back)
	{
		uFnPress_Back = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back");
	}

	UOLUIFrontEnd_GammaScreen_Console_execPress_Back_Params Press_Back_Params;
	memset(&Press_Back_Params, 0, sizeof(Press_Back_Params));
	memcpy_s(&Press_Back_Params.ev, sizeof(Press_Back_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Back, &Press_Back_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen_Console::OnAccept()
{
	static UFunction* uFnOnAccept = nullptr;

	if (!uFnOnAccept)
	{
		uFnOnAccept = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept");
	}

	UOLUIFrontEnd_GammaScreen_Console_execOnAccept_Params OnAccept_Params;
	memset(&OnAccept_Params, 0, sizeof(OnAccept_Params));

	this->ProcessEvent(uFnOnAccept, &OnAccept_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Press_Accept(struct FEventData ev)
{
	static UFunction* uFnPress_Accept = nullptr;

	if (!uFnPress_Accept)
	{
		uFnPress_Accept = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept");
	}

	UOLUIFrontEnd_GammaScreen_Console_execPress_Accept_Params Press_Accept_Params;
	memset(&Press_Accept_Params, 0, sizeof(Press_Accept_Params));
	memcpy_s(&Press_Accept_Params.ev, sizeof(Press_Accept_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnPress_Accept, &Press_Accept_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_GammaScreen_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView");
	}

	UOLUIFrontEnd_GammaScreen_Console_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GammaScreen_Console::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded");
	}

	UOLUIFrontEnd_GammaScreen_Console_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ConfigType                     (CPF_Parm)

void UOLUIFrontEnd_GamepadScreen_Console::ASUpdateGamepadLabels(int32_t ConfigType)
{
	static UFunction* uFnASUpdateGamepadLabels = nullptr;

	if (!uFnASUpdateGamepadLabels)
	{
		uFnASUpdateGamepadLabels = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execASUpdateGamepadLabels_Params ASUpdateGamepadLabels_Params;
	memset(&ASUpdateGamepadLabels_Params, 0, sizeof(ASUpdateGamepadLabels_Params));
	memcpy_s(&ASUpdateGamepadLabels_Params.ConfigType, sizeof(ASUpdateGamepadLabels_Params.ConfigType), &ConfigType, sizeof(ConfigType));

	this->ProcessEvent(uFnASUpdateGamepadLabels, &ASUpdateGamepadLabels_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              ev                             (CPF_Parm | CPF_NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen_Console::TabChanged(struct FEventData ev)
{
	static UFunction* uFnTabChanged = nullptr;

	if (!uFnTabChanged)
	{
		uFnTabChanged = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execTabChanged_Params TabChanged_Params;
	memset(&TabChanged_Params, 0, sizeof(TabChanged_Params));
	memcpy_s(&TabChanged_Params.ev, sizeof(TabChanged_Params.ev), &ev, sizeof(ev));

	this->ProcessEvent(uFnTabChanged, &TabChanged_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UOLUIFrontEnd_GamepadScreen_Console::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized");
	}

	UOLUIFrontEnd_GamepadScreen_Console_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIFrontEnd_GamepadScreen_Console::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput");
	}

	UOLUIFrontEnd_GamepadScreen_Console_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen_Console::PopulateTabButtons()
{
	static UFunction* uFnPopulateTabButtons = nullptr;

	if (!uFnPopulateTabButtons)
	{
		uFnPopulateTabButtons = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execPopulateTabButtons_Params PopulateTabButtons_Params;
	memset(&PopulateTabButtons_Params, 0, sizeof(PopulateTabButtons_Params));

	this->ProcessEvent(uFnPopulateTabButtons, &PopulateTabButtons_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen_Console::Pop()
{
	static UFunction* uFnPop = nullptr;

	if (!uFnPop)
	{
		uFnPop = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execPop_Params Pop_Params;
	memset(&Pop_Params, 0, sizeof(Pop_Params));

	this->ProcessEvent(uFnPop, &Pop_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen_Console::OnViewDeactivated()
{
	static UFunction* uFnOnViewDeactivated = nullptr;

	if (!uFnOnViewDeactivated)
	{
		uFnOnViewDeactivated = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execOnViewDeactivated_Params OnViewDeactivated_Params;
	memset(&OnViewDeactivated_Params, 0, sizeof(OnViewDeactivated_Params));

	this->ProcessEvent(uFnOnViewDeactivated, &OnViewDeactivated_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOLUIFrontEnd_GamepadScreen_Console::back()
{
	static UFunction* uFnback = nullptr;

	if (!uFnback)
	{
		uFnback = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execback_Params back_Params;
	memset(&back_Params, 0, sizeof(back_Params));

	this->ProcessEvent(uFnback, &back_Params, nullptr);

	return back_Params.ReturnValue;
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlayOpenAnimation             (CPF_OptionalParm | CPF_Parm)

void UOLUIFrontEnd_GamepadScreen_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static UFunction* uFnOnTopMostView = nullptr;

	if (!uFnOnTopMostView)
	{
		uFnOnTopMostView = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execOnTopMostView_Params OnTopMostView_Params;
	memset(&OnTopMostView_Params, 0, sizeof(OnTopMostView_Params));
	OnTopMostView_Params.bPlayOpenAnimation = bPlayOpenAnimation;

	this->ProcessEvent(uFnOnTopMostView, &OnTopMostView_Params, nullptr);
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIFrontEnd_GamepadScreen_Console::OnViewLoaded()
{
	static UFunction* uFnOnViewLoaded = nullptr;

	if (!uFnOnViewLoaded)
	{
		uFnOnViewLoaded = UFunction::FindFunction("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded");
	}

	UOLUIFrontEnd_GamepadScreen_Console_execOnViewLoaded_Params OnViewLoaded_Params;
	memset(&OnViewLoaded_Params, 0, sizeof(OnViewLoaded_Params));

	this->ProcessEvent(uFnOnViewLoaded, &OnViewLoaded_Params, nullptr);
};

// Function OLGame.OLUIPopupScreen.FilterButtonInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UOLUIPopupScreen::eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function OLGame.OLUIPopupScreen.FilterButtonInput");
	}

	UOLUIPopupScreen_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.ControllerId, sizeof(FilterButtonInput_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function OLGame.OLUIPopupScreen.OnClose
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOLUIPopupScreen::OnClose()
{
	static UFunction* uFnOnClose = nullptr;

	if (!uFnOnClose)
	{
		uFnOnClose = UFunction::FindFunction("Function OLGame.OLUIPopupScreen.OnClose");
	}

	UOLUIPopupScreen_execOnClose_Params OnClose_Params;
	memset(&OnClose_Params, 0, sizeof(OnClose_Params));

	this->ProcessEvent(uFnOnClose, &OnClose_Params, nullptr);
};

// Function OLGame.OLUIPopupScreen.Start
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UOLUIPopupScreen::Start(bool StartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function OLGame.OLUIPopupScreen.Start");
	}

	UOLUIPopupScreen_execStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	Start_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnStart, &Start_Params, nullptr);

	return Start_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
