/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: WinDrv_classes.hpp
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0010 OR 0x00F0 (0x00F0 - 0x00E0)
// 16 OR 240 (240 - 224)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x00E0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    ChildProcHandle;                               // 0x00E8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.FacebookWindows");
		}

		return uClassPointer;
	};

	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(class FString Payload, int32_t ResponseCode);
	void FacebookRequest(class FString GraphRequest);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};

// Class WinDrv.HttpRequestWindows
// 0x0030 OR 0x00A0 (0x00A0 - 0x0070)
// 48 OR 160 (160 - 112)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                       // 0x0070 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class FString                                      RequestVerb;                                   // 0x0078 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    RequestURL;                                    // 0x0088 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x0090 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(class FString HeaderName, class FString HeaderValue);
	class UHttpRequestInterface* SetContentAsString(class FString ContentString);
	class UHttpRequestInterface* SetContent(TArray<uint8_t>& ContentPayload);
	class UHttpRequestInterface* SetURL(class FString URL);
	class UHttpRequestInterface* SetVerb(class FString Verb);
	class FString GetVerb();
	void GetContent(TArray<uint8_t>& Content);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(class FString ParameterName);
	TArray<class FString> GetHeaders();
	class FString GetHeader(class FString HeaderName);
};

// Class WinDrv.HttpResponseWindows
// 0x0018 OR 0x0078 (0x0078 - 0x0060)
// 24 OR 120 (120 - 96)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                      // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x0068 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		}

		return uClassPointer;
	};

	int32_t GetResponseCode();
	class FString GetContentAsString();
	void GetContent(TArray<uint8_t>& Content);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(class FString ParameterName);
	TArray<class FString> GetHeaders();
	class FString GetHeader(class FString HeaderName);
};

// Class WinDrv.PCOrbisForceFeedbackManager
// 0x0000 OR 0x0080 (0x0080 - 0x0080)
// 0 OR 128 (128 - 128)
class UPCOrbisForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.PCOrbisForceFeedbackManager");
		}

		return uClassPointer;
	};

};

// Class WinDrv.SwrveAnalyticsWindows
// 0x0048 OR 0x00E0 (0x00E0 - 0x0098)
// 72 OR 224 (224 - 152)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	uint8_t                                           UnknownData00[0x48];                           // 0x0098 (0x0048) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.SwrveAnalyticsWindows");
		}

		return uClassPointer;
	};

};

// Class WinDrv.WindowsClient
// 0x01C0 OR 0x0238 (0x0238 - 0x0078)
// 448 OR 568 (568 - 120)
class UWindowsClient : public UClient
{
public:
	uint8_t                                           UnknownData00[0x16C];                          // 0x0078 (0x016C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                              // 0x01E4 (0x0008) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData01[0x38];                           // 0x01EC (0x0038) MISSED OFFSET
	int32_t                                            AllowJoystickInput;                            // 0x0224 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData02[0x10];                           // 0x0228 (0x0010) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WindowsClient");
		}

		return uClassPointer;
	};

};

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 OR 0x0080 (0x0080 - 0x0080)
// 0 OR 128 (128 - 128)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		}

		return uClassPointer;
	};

};

// Class WinDrv.HttpRequestWindowsMcp
// 0x0020 OR 0x00C0 (0x00C0 - 0x00A0)
// 32 OR 192 (192 - 160)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	class FString                                      AppID;                                         // 0x00A0 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x00B0 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
