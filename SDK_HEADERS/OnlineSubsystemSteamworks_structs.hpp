/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.hpp
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

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x000C
struct FServerQueryToPingResponseMapping
{
	int32_t                                            Query;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Response;                                      // 0x0004 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x003C
struct FFilterKeyToSteamKeyMapping
{
	int32_t                                            KeyId;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            KeyType;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	class FString                                      RawKey;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SteamKey;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bReverseFilter : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      IgnoreValue;                                   // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x0048
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                      // 0x0000 (0x0048) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x000C
struct FServerQueryToRulesResponseMapping
{
	int32_t                                            Query;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Response;                                      // 0x0004 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakingQueryState
// 0x0074
struct FMatchmakingQueryState
{
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                        // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    ServerListResponse;                            // 0x0028 (0x0008) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            CurrentMatchmakingType;                        // 0x0030 (0x0001) [0x0000000000000000]               
	struct FPointer                                    CurrentMatchmakingQuery;                       // 0x0034 (0x0008) [0x0000000000001000] (CPF_Native)  
	TArray<struct FClientFilterORClause>               ActiveClientsideFilters;                       // 0x003C (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	TArray<class UOnlineGameSettings*>                 PendingRulesSearchSettings;                    // 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UOnlineGameSettings*>                 PendingPingSearchSettings;                     // 0x005C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIgnoreRefreshComplete : 1;                    // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastActivityTimestamp;                         // 0x0070 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                           // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0028
struct FLeaderboardTemplate
{
	class FString                                      LeaderboardName;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            UpdateType;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	int32_t                                            LeaderboardSize;                               // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            SortType;                                      // 0x0018 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DisplayFormat;                                 // 0x0019 (0x0001) [0x0000000000000002] (CPF_Const)   
	struct FLeaderboardHandle                          LeaderboardRef;                                // 0x001C (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bLeaderboardInitializing : 1;                  // 0x0024 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bLeaderboardInitiated : 1;                     // 0x0024 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x002C
struct FDeferredLeaderboardRead
{
	class FString                                      LeaderboardName;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RequestType;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	int32_t                                            Start;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            End;                                           // 0x0018 (0x0004) [0x0000000000000000]               
	TArray<struct FUniqueNetId>                        PlayerList;                                    // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x0024
struct FDeferredLeaderboardWrite
{
	class FString                                      LeaderboardName;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Score;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	TArray<int32_t>                                    LeaderboardData;                               // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x0028
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                     // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            Rank;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	TArray<int32_t>                                    LeaderboardData;                               // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0014
struct FViewIdToLeaderboardName
{
	int32_t                                            ViewId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      LeaderboardName;                               // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0020
struct FSteamPlayerClanData
{
	class FString                                      ClanName;                                      // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ClanTag;                                       // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0038
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     ReadDelegates;                                 // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteDelegates;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                   // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001 (0x0004 - 0x0005)
struct FLocalTalkerSteam : FLocalTalker
{
	uint8_t                                            MuteType;                                      // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int32_t                                            AchievementId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Progress;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxProgress;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUnlock : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int32_t                                            AchievementId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       AchievementName;                               // 0x0004 (0x0008) [0x0000000000000000]               
	int32_t                                            ViewId;                                        // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressCount;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxProgress;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAutoUnlock : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x002C
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                     // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumberOfAttempts;                              // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0008 (0x0010) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Size;                                          // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;              // 0x001C (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0020
struct FSteamUserCloudMetadata
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserCloudMetadata;                             // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0020
struct FSteamUserCloud
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTitleFile>                          UserCloudFileData;                             // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0014
struct FOnlineStatusMapping
{
	int32_t                                            StatusId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      StatusString;                                  // 0x0004 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0018
struct FPlayerStat
{
	int32_t                                            ViewId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ColumnId;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               Data;                                          // 0x0008 (0x0010) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0068
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                        // 0x0000 (0x0010) [0x0000000000000002] (CPF_Const)   
	class FString                                      PlayerName;                                    // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      StatGuid;                                      // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FPlayerStat>                         Stats;                                         // 0x0030 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                         // 0x0040 (0x0018) [0x0000000000000002] (CPF_Const)   
	class FString                                      Place;                                         // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
