/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: AkAudio_classes.hpp
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

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 OR 0x00A4 (0x00A4 - 0x009C)
// 8 OR 164 (164 - 156)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                  // 0x009C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSound
// 0x000C OR 0x0254 (0x0254 - 0x0248)
// 12 OR 596 (596 - 584)
class AAkAmbientSound : public AKeypoint
{
public:
	uint32_t                                           bAutoPlay : 1;                                 // 0x0248 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStopPending : 1;                              // 0x0248 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           StopWhenOwnerIsDestroyed : 1;                  // 0x0248 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsPlaying : 1;                                // 0x0248 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	class UAkEvent*                                    PlayEvent;                                     // 0x024C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAudioDevice
// 0x006C OR 0x00D4 (0x00D4 - 0x0068)
// 108 OR 212 (212 - 104)
class UAkAudioDevice : public USubsystem
{
public:
	uint8_t                                           UnknownData00[0x6C];                           // 0x0068 (0x006C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioDevice");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkComponent
// 0x0017 OR 0x009C (0x009C - 0x0085)
// 23 OR 156 (156 - 133)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                      // 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AutoPlayEvent;                                 // 0x0090 (0x0008) [0x0000000000000000]               
	uint32_t                                           bStopWhenOwnerDestroyed : 1;                   // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkComponent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.Interface_AkEventHandler
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UInterface_AkEventHandler : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.Interface_AkEventHandler");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkEvent
// 0x0018 OR 0x00D8 (0x00D8 - 0x00C0)
// 24 OR 216 (216 - 192)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	struct FName                                       BoneName;                                      // 0x00C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FAkEventTrackKey>                    AkEvents;                                      // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkRTPC
// 0x0010 OR 0x00E8 (0x00E8 - 0x00D8)
// 16 OR 232 (232 - 216)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                      Param;                                         // 0x00D8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 OR 0x0064 (0x0064 - 0x0060)
// 4 OR 100 (100 - 96)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                            // 0x0060 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 OR 0x0178 (0x0178 - 0x0168)
// 16 OR 376 (376 - 360)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	uint32_t                                           Async : 1;                                     // 0x0168 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bWaitingCallback : 1;                          // 0x0168 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UAkBank*                                     Bank;                                          // 0x016C (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Signal;                                        // 0x0174 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostEvent
// 0x0014 OR 0x017C (0x017C - 0x0168)
// 20 OR 380 (380 - 360)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	struct FName                                       BoneName;                                      // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Signal;                                        // 0x0170 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UAkEvent*                                    Event;                                         // 0x0174 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0018 OR 0x0168 (0x0168 - 0x0150)
// 24 OR 360 (360 - 336)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FName                                       BoneName;                                      // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Trigger;                                       // 0x0158 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 OR 0x0180 (0x0180 - 0x0168)
// 24 OR 384 (384 - 360)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	class FString                                      Param;                                         // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           Running : 1;                                   // 0x017C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetState
// 0x0020 OR 0x0170 (0x0170 - 0x0150)
// 32 OR 368 (368 - 336)
class USeqAct_AkSetState : public USequenceAction
{
public:
	class FString                                      StateGroup;                                    // 0x0150 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      State;                                         // 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 OR 0x0170 (0x0170 - 0x0150)
// 32 OR 368 (368 - 336)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	class FString                                      SwitchGroup;                                   // 0x0150 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Switch;                                        // 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 OR 0x0150 (0x0150 - 0x0150)
// 0 OR 336 (336 - 336)
class USeqAct_AkStopAll : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
