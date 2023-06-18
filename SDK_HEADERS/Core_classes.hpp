/*
#############################################################################################
# Outlast (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: Core_classes.hpp
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

#define CONST_InvAspectRatio16x9                                0
#define CONST_InvAspectRatio5x4                                 0
#define CONST_InvAspectRatio4x3                                 0
#define CONST_AspectRatio16x9                                   1
#define CONST_AspectRatio5x4                                    1
#define CONST_AspectRatio4x3                                    1
#define CONST_INDEX_NONE                                        -
#define CONST_UnrRotToDeg                                       0
#define CONST_DegToUnrRot                                       1
#define CONST_RadToUnrRot                                       1
#define CONST_UnrRotToRad                                       0
#define CONST_DegToRad                                          0
#define CONST_RadToDeg                                          5
#define CONST_Pi                                                3
#define CONST_MaxInt                                            0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_END                                       = 3
};

// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : uint8_t
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_END                                            = 3
};

// Enum Core.Object.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_END                                    = 3
};

// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_END                                            = 6
};

// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_END                                            = 3
};

// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_END                                           = 5
};

// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_END                                             = 5
};

// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_END                                             = 5
};

// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : uint8_t
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_END                                            = 7
};

// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_END                                          = 5
};

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_END                                          = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0060
// 96
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                 // 0x0000 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    HashNext;                                      // 0x0008 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FQWord                                      ObjectFlags;                                   // 0x0010 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    HashOuterNext;                                 // 0x0018 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    StateFrame;                                    // 0x0020 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     Linker;                                        // 0x0028 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    LinkerIndex;                                   // 0x0030 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int32_t                                            ObjectInternalInteger;                         // 0x0038 (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int32_t                                            NetIndex;                                      // 0x003C (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	class UObject*                                     Outer;                                         // 0x0040 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FName                                       Name;                                          // 0x0048 (0x0008) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)
	class UClass*                                      Class;                                         // 0x0050 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     ObjectArchetype;                               // 0x0058 (0x0008) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Object");
		}

		return uClassPointer;
	};

	static TArray<class UObject*>* GObjObjects();

	std::string GetName();
	std::string GetNameCPP();
	std::string GetFullName();
	class UObject* GetPackageObj();
	template<typename T> static T* FindObject(const std::string& objectFullName)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA<T>())
			{
				if (uObject->GetFullName() == objectFullName)
				{
					return static_cast<T*>(uObject);
				}
			}
		}

		return nullptr;
	}
	template<typename T> static uint32_t CountObject(const std::string& objectName)
	{
		static std::map<std::string, int32_t> countCache;

		if (countCache.find(objectName) == countCache.end())
		{
			countCache[objectName] = 0;

			for (UObject* uObject : *UObject::GObjObjects())
			{
				if (uObject && uObject->IsA<T>())
				{
					if (uObject->GetName() == objectName)
					{
						countCache[uObject->GetName()]++;
					}
				}
			}
		}

		return countCache[objectName];
	}
	static class UClass* FindClass(const std::string& classFullName);
	template<typename T> bool IsA()
	{
		if (std::is_base_of<UObject, T>::value)
		{
			return IsA(T::StaticClass());
		}
	}
	bool IsA(class UClass* uClass);
	bool IsA(int32_t objInternalInteger);

	static void ProfNodeEvent(class FString EventName);
	static void ProfNodeSetDepthThreshold(int32_t Depth);
	static void ProfNodeSetTimeThresholdSeconds(float Threshold);
	static void ProfNodeStop(int32_t optionalAssumedTimerIndex);
	static int32_t ProfNodeStart(class FString TimerName);
	static class FString GetStringFromGuid(struct FGuid& InGuid);
	static struct FGuid GetGuidFromString(class FString& InGuidString);
	static struct FGuid CreateGuid();
	static bool IsGuidValid(struct FGuid& InGuid);
	static void InvalidateGuid(struct FGuid& InGuid);
	static class FString GetLanguage();
	int32_t GetRandomOptionSumFrequency(TArray<float>& FreqList);
	int32_t GetBuildChangelistNumber();
	int32_t GetEngineVersion();
	void GetSystemTime(int32_t& Year, int32_t& Month, int32_t& DayOfWeek, int32_t& Day, int32_t& Hour, int32_t& Min, int32_t& Sec, int32_t& MSec);
	class FString TimeStamp();
	struct FVector TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, bool optionalBInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(uint8_t inputByte, bool optionalBSigned);
	uint8_t FloatToByte(float inputFloat, bool optionalBSigned);
	static float UnwindHeading(float A);
	static float FindDeltaAngle(float A1, float A2);
	static float GetHeadingAngle(struct FVector Dir);
	static void GetAngularDegreesFromRadians(struct FVector2D& OutFOV);
	static void GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D& OutAngDist);
	static bool GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutAngularDist);
	static bool GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutDotDist);
	static struct FVector PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C);
	float PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector& out_ClosestPoint);
	float PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector& OutClosestPoint);
	float PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector& OutClosestPoint);
	static bool GetPerObjectConfigSections(class UClass* SearchClass, class UObject* optionalObjectOuter, int32_t optionalMaxResults, TArray<class FString>& out_SectionNames);
	static void ImportJSON(class FString PropertyName, class FString& JSON);
	static void StaticSaveConfig();
	void SaveConfig();
	static class UObject* FindObject(class FString ObjectName, class UClass* ObjectClass);
	static class UObject* DynamicLoadObject(class FString ObjectName, class UClass* ObjectClass, bool optionalMayFail);
	static struct FName GetEnum(class UObject* E, int32_t I);
	void Disable(struct FName ProbeFunc);
	void Enable(struct FName ProbeFunc);
	void eventContinuedState();
	void eventPausedState();
	void eventPoppedState();
	void eventPushedState();
	void eventEndState(struct FName NextStateName);
	void eventBeginState(struct FName PreviousStateName);
	void DumpStateStack();
	void PopState(bool optionalBPopAll);
	void PushState(struct FName NewState, struct FName optionalNewLabel);
	struct FName GetStateName();
	bool IsChildState(struct FName TestState, struct FName TestParentState);
	bool IsInState(struct FName TestState, bool optionalBTestStateStack);
	void GotoState(struct FName optionalNewState, struct FName optionalLabel, bool optionalBForceEvents, bool optionalBKeepStack);
	static bool IsUTracing();
	static void SetUTracing(bool bShouldUTrace);
	static struct FName GetFuncName();
	static void DebugBreak(int32_t optionalUserFlags, EDebugBreakType optionalDebuggerType);
	static class FString GetScriptTrace();
	static void ScriptTrace();
	static class FString ParseLocalizedPropertyPath(class FString PathName);
	static class FString Localize(class FString SectionName, class FString KeyName, class FString PackageName);
	static void WarnInternal(class FString S);
	static void LogInternal(class FString S, struct FName optionalTag);
	static struct FLinearColor Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);
	static struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor LC, float Mult);
	static struct FLinearColor ColorToLinearColor(struct FColor OldColor);
	static struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	static struct FColor LerpColor(struct FColor A, struct FColor B, float Alpha);
	static struct FColor MakeColor(uint8_t R, uint8_t G, uint8_t B, uint8_t optionalA);
	static struct FColor Add_ColorColor(struct FColor A, struct FColor B);
	static struct FColor Multiply_ColorFloat(struct FColor A, float B);
	static struct FColor Multiply_FloatColor(float A, struct FColor B);
	static struct FColor Subtract_ColorColor(struct FColor A, struct FColor B);
	static struct FVector2D EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D& Vector2DCurve);
	static struct FVector EvalInterpCurveVector(float InVal, struct FInterpCurveVector& VectorCurve);
	static float EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat& FloatCurve);
	static struct FVector2D vect2d(float InX, float InY);
	static float GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value);
	static float GetRangePctByValue(struct FVector2D Range, float Value);
	static float GetRangeValueByPct(struct FVector2D Range, float Pct);
	static struct FVector2D SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A);
	static struct FVector2D AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A);
	static struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D& A);
	static struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D& A);
	static struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B);
	static struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B);
	static struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	static struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	static struct FQuat Subtract_QuatQuat(struct FQuat A, struct FQuat B);
	static struct FQuat Add_QuatQuat(struct FQuat A, struct FQuat B);
	static struct FQuat QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, bool optionalBShortestPath);
	static struct FRotator QuatToRotator(struct FQuat A);
	static struct FQuat QuatFromRotator(struct FRotator A);
	static struct FQuat QuatFromAxisAndAngle(struct FVector Axis, float Angle);
	static struct FQuat QuatFindBetween(struct FVector A, struct FVector B);
	static struct FVector QuatRotateVector(struct FQuat A, struct FVector B);
	static struct FQuat QuatInvert(struct FQuat A);
	static float QuatDot(struct FQuat A, struct FQuat B);
	static struct FQuat QuatProduct(struct FQuat A, struct FQuat B);
	static struct FVector MatrixGetAxis(struct FMatrix TM, EAxis Axis);
	static struct FVector MatrixGetOrigin(struct FMatrix TM);
	static struct FRotator MatrixGetRotator(struct FMatrix TM);
	static struct FMatrix MakeRotationMatrix(struct FRotator Rotation);
	static struct FMatrix MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation);
	static struct FVector InverseTransformNormal(struct FMatrix TM, struct FVector A);
	static struct FVector TransformNormal(struct FMatrix TM, struct FVector A);
	static struct FVector InverseTransformVector(struct FMatrix TM, struct FVector A);
	static struct FVector TransformVector(struct FMatrix TM, struct FVector A);
	static struct FMatrix Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B);
	static bool NotEqual_NameName(struct FName A, struct FName B);
	static bool EqualEqual_NameName(struct FName A, struct FName B);
	bool IsA(struct FName ClassName);
	static bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	static bool NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	static bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	static class FString PathName(class UObject* CheckObject);
	static TArray<class FString> SplitString(class FString Source, class FString optionalDelimiter, bool optionalBCullEmpty);
	static void ParseStringIntoArray(class FString BaseString, class FString delim, bool bCullEmpty, TArray<class FString>& Pieces);
	static void JoinArray(TArray<class FString> StringArray, class FString optionalDelim, bool optionalBIgnoreBlanks, class FString& out_Result);
	static class FString GetRightMost(class FString Text);
	static class FString Split(class FString Text, class FString SplitStr, bool optionalBOmitSplitStr);
	static class FString Repl(class FString Src, class FString Match, class FString With, bool optionalBCaseSensitive);
	static int32_t Asc(class FString S);
	static class FString Chr(int32_t I);
	static class FString Locs(class FString S);
	static class FString Caps(class FString S);
	static class FString Right(class FString S, int32_t I);
	static class FString Left(class FString S, int32_t I);
	static class FString Mid(class FString S, int32_t I, int32_t optionalJ);
	static int32_t InStr(class FString S, class FString T, bool optionalBSearchFromRight, bool optionalBIgnoreCase, int32_t optionalStartPos);
	static int32_t Len(class FString S);
	static class FString SubtractEqual_StrStr(class FString B, class FString& A);
	static class FString AtEqual_StrStr(class FString B, class FString& A);
	static class FString ConcatEqual_StrStr(class FString B, class FString& A);
	static bool ComplementEqual_StrStr(class FString A, class FString B);
	static bool NotEqual_StrStr(class FString A, class FString B);
	static bool EqualEqual_StrStr(class FString A, class FString B);
	static bool GreaterEqual_StrStr(class FString A, class FString B);
	static bool LessEqual_StrStr(class FString A, class FString B);
	static bool Greater_StrStr(class FString A, class FString B);
	static bool Less_StrStr(class FString A, class FString B);
	static class FString At_StrStr(class FString A, class FString B);
	static class FString Concat_StrStr(class FString A, class FString B);
	static struct FRotator MakeRotator(int32_t Pitch, int32_t Yaw, int32_t Roll);
	static bool SClampRotAxis(float DeltaTime, int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, float InterpolationSpeed, int32_t& out_DeltaViewAxis);
	static int32_t ClampRotAxisFromRange(int32_t Current, int32_t Min, int32_t Max);
	static int32_t ClampRotAxisFromBase(int32_t Current, int32_t Center, int32_t MaxDelta);
	static void ClampRotAxis(int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, int32_t& out_DeltaViewAxis);
	static float RSize(struct FRotator R);
	static float RDiff(struct FRotator A, struct FRotator B);
	static int32_t NormalizeRotAxis(int32_t Angle);
	static struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, bool optionalBConstantInterpSpeed);
	static struct FRotator RTransform(struct FRotator R, struct FRotator RBasis);
	static struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, bool optionalBShortestPath);
	static struct FRotator Normalize(struct FRotator Rot);
	static struct FRotator OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z);
	static struct FRotator RotRand(bool optionalBRoll);
	static struct FVector GetRotatorAxis(struct FRotator A, int32_t Axis);
	static void GetUnAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z);
	static void GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z);
	static bool ClockwiseFrom_IntInt(int32_t A, int32_t B);
	static struct FRotator SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator& A);
	static struct FRotator AddEqual_RotatorRotator(struct FRotator B, struct FRotator& A);
	static struct FRotator Subtract_RotatorRotator(struct FRotator A, struct FRotator B);
	static struct FRotator Add_RotatorRotator(struct FRotator A, struct FRotator B);
	static struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator& A);
	static struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator& A);
	static struct FRotator Divide_RotatorFloat(struct FRotator A, float B);
	static struct FRotator Multiply_FloatRotator(float A, struct FRotator B);
	static struct FRotator Multiply_RotatorFloat(struct FRotator A, float B);
	static bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	static bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	bool InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, bool optionalBIgnoreZ);
	static float NoZDot(struct FVector A, struct FVector B);
	static struct FVector ClampLength(struct FVector V, float MaxLength);
	static struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed);
	static bool IsZero(struct FVector A);
	static struct FVector ProjectOnTo(struct FVector X, struct FVector Y);
	static struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal);
	static struct FVector VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	static struct FVector VRandCone(struct FVector Dir, float ConeHalfAngleRadians);
	static struct FVector VRand();
	static struct FVector VLerp(struct FVector A, struct FVector B, float Alpha);
	static struct FVector Normal2D(struct FVector A);
	static struct FVector Normal(struct FVector A);
	static float VSizeSq2D(struct FVector A);
	static float VSizeSq(struct FVector A);
	static float VSize2D(struct FVector A);
	static float VSize(struct FVector A);
	static struct FVector SubtractEqual_VectorVector(struct FVector B, struct FVector& A);
	static struct FVector AddEqual_VectorVector(struct FVector B, struct FVector& A);
	static struct FVector DivideEqual_VectorFloat(float B, struct FVector& A);
	static struct FVector MultiplyEqual_VectorVector(struct FVector B, struct FVector& A);
	static struct FVector MultiplyEqual_VectorFloat(float B, struct FVector& A);
	static struct FVector Cross_VectorVector(struct FVector A, struct FVector B);
	static float Dot_VectorVector(struct FVector A, struct FVector B);
	static bool NotEqual_VectorVector(struct FVector A, struct FVector B);
	static bool EqualEqual_VectorVector(struct FVector A, struct FVector B);
	static struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B);
	static struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B);
	static struct FVector Subtract_VectorVector(struct FVector A, struct FVector B);
	static struct FVector Add_VectorVector(struct FVector A, struct FVector B);
	static struct FVector Divide_VectorFloat(struct FVector A, float B);
	static struct FVector Multiply_VectorVector(struct FVector A, struct FVector B);
	static struct FVector Multiply_FloatVector(float A, struct FVector B);
	static struct FVector Multiply_VectorFloat(struct FVector A, float B);
	static struct FVector Subtract_PreVector(struct FVector A);
	static float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FPctByRange(float Value, float InMin, float InMax);
	static float RandRange(float InMin, float InMax);
	static float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	static float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	static int32_t FCeil(float A);
	static int32_t FFloor(float A);
	static int32_t Round(float A);
	static float Lerp(float A, float B, float Alpha);
	static float FClamp(float V, float A, float B);
	static float FMax(float A, float B);
	static float FMin(float A, float B);
	static float FRand();
	static float Square(float A);
	static float Sqrt(float A);
	static float Loge(float A);
	static float Exp(float A);
	static float Atan2(float A, float B);
	static float Atan(float A);
	static float Tan(float A);
	static float Acos(float A);
	static float Cos(float A);
	static float Asin(float A);
	static float Sin(float A);
	static float Abs(float A);
	static float SubtractEqual_FloatFloat(float B, float& A);
	static float AddEqual_FloatFloat(float B, float& A);
	static float DivideEqual_FloatFloat(float B, float& A);
	static float MultiplyEqual_FloatFloat(float B, float& A);
	static bool NotEqual_FloatFloat(float A, float B);
	static bool ComplementEqual_FloatFloat(float A, float B);
	static bool EqualEqual_FloatFloat(float A, float B);
	static bool GreaterEqual_FloatFloat(float A, float B);
	static bool LessEqual_FloatFloat(float A, float B);
	static bool Greater_FloatFloat(float A, float B);
	static bool Less_FloatFloat(float A, float B);
	static float Subtract_FloatFloat(float A, float B);
	static float Add_FloatFloat(float A, float B);
	static float Percent_FloatFloat(float A, float B);
	static float Divide_FloatFloat(float A, float B);
	static float Multiply_FloatFloat(float A, float B);
	static float MultiplyMultiply_FloatFloat(float Base, float Exp);
	static float Subtract_PreFloat(float A);
	static class FString ToHex(int32_t A);
	static int32_t Clamp(int32_t V, int32_t A, int32_t B);
	static int32_t Max(int32_t A, int32_t B);
	static int32_t Min(int32_t A, int32_t B);
	static int32_t Rand(int32_t Max);
	static int32_t SubtractSubtract_Int(int32_t& A);
	static int32_t AddAdd_Int(int32_t& A);
	static int32_t SubtractSubtract_PreInt(int32_t& A);
	static int32_t AddAdd_PreInt(int32_t& A);
	static int32_t SubtractEqual_IntInt(int32_t B, int32_t& A);
	static int32_t AddEqual_IntInt(int32_t B, int32_t& A);
	static int32_t DivideEqual_IntFloat(float B, int32_t& A);
	static int32_t MultiplyEqual_IntFloat(float B, int32_t& A);
	static int32_t Or_IntInt(int32_t A, int32_t B);
	static int32_t Xor_IntInt(int32_t A, int32_t B);
	static int32_t And_IntInt(int32_t A, int32_t B);
	static bool NotEqual_IntInt(int32_t A, int32_t B);
	static bool EqualEqual_IntInt(int32_t A, int32_t B);
	static bool GreaterEqual_IntInt(int32_t A, int32_t B);
	static bool LessEqual_IntInt(int32_t A, int32_t B);
	static bool Greater_IntInt(int32_t A, int32_t B);
	static bool Less_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t LessLess_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_IntInt(int32_t A, int32_t B);
	static int32_t Add_IntInt(int32_t A, int32_t B);
	static int32_t Percent_IntInt(int32_t A, int32_t B);
	static int32_t Divide_IntInt(int32_t A, int32_t B);
	static int32_t Multiply_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_PreInt(int32_t A);
	static int32_t Complement_PreInt(int32_t A);
	static uint8_t SubtractSubtract_Byte(uint8_t& A);
	static uint8_t AddAdd_Byte(uint8_t& A);
	static uint8_t SubtractSubtract_PreByte(uint8_t& A);
	static uint8_t AddAdd_PreByte(uint8_t& A);
	static uint8_t SubtractEqual_ByteByte(uint8_t B, uint8_t& A);
	static uint8_t AddEqual_ByteByte(uint8_t B, uint8_t& A);
	static uint8_t DivideEqual_ByteByte(uint8_t B, uint8_t& A);
	static uint8_t MultiplyEqual_ByteFloat(float B, uint8_t& A);
	static uint8_t MultiplyEqual_ByteByte(uint8_t B, uint8_t& A);
	static bool OrOr_BoolBool(bool A, bool B);
	static bool XorXor_BoolBool(bool A, bool B);
	static bool AndAnd_BoolBool(bool A, bool B);
	static bool NotEqual_BoolBool(bool A, bool B);
	static bool EqualEqual_BoolBool(bool A, bool B);
	static bool Not_PreBool(bool A);
	void ProcessEvent(class UFunction* uFunction, void* uParams, void* uResult = nullptr);
};

// Class Core.TextBuffer
// 0x002C OR 0x008C (0x008C - 0x0060)
// 44 OR 140 (140 - 96)
class UTextBuffer : public UObject
{
public:
	uint8_t                                           UnknownData00[0x2C];                           // 0x0060 (0x002C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBuffer");
		}

		return uClassPointer;
	};

};

// Class Core.Subsystem
// 0x0008 OR 0x0068 (0x0068 - 0x0060)
// 8 OR 104 (104 - 96)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                 // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Subsystem");
		}

		return uClassPointer;
	};

};

// Class Core.System
// 0x00E4 OR 0x014C (0x014C - 0x0068)
// 228 OR 332 (332 - 104)
class USystem : public USubsystem
{
public:
	int32_t                                            StaleCacheDays;                                // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxStaleCacheSize;                             // 0x006C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxOverallCacheSize;                           // 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            PackageSizeSoftLimit;                          // 0x0074 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AsyncIOBandwidthLimit;                         // 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      SavePath;                                      // 0x007C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CachePath;                                     // 0x008C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CacheExt;                                      // 0x009C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              Paths;                                         // 0x00AC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              SeekFreePCPaths;                               // 0x00BC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              ScriptPaths;                                   // 0x00CC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              FRScriptPaths;                                 // 0x00DC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              CutdownPaths;                                  // 0x00EC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FName>                               Suppress;                                      // 0x00FC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              Extensions;                                    // 0x010C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              SeekFreePCExtensions;                          // 0x011C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              LocalizationPaths;                             // 0x012C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      TextureFileCacheExtension;                     // 0x013C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.System");
		}

		return uClassPointer;
	};

};

// Class Core.PackageMap
// 0x00A0 OR 0x0100 (0x0100 - 0x0060)
// 160 OR 256 (256 - 96)
class UPackageMap : public UObject
{
public:
	uint8_t                                           UnknownData00[0xA0];                           // 0x0060 (0x00A0) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.PackageMap");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectSerializer
// 0x0010 OR 0x0070 (0x0070 - 0x0060)
// 16 OR 112 (112 - 96)
class UObjectSerializer : public UObject
{
public:
	uint8_t                                           UnknownData00[0x10];                           // 0x0060 (0x0010) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectSerializer");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectRedirector
// 0x0008 OR 0x0068 (0x0068 - 0x0060)
// 8 OR 104 (104 - 96)
class UObjectRedirector : public UObject
{
public:
	uint8_t                                           UnknownData00[0x8];                            // 0x0060 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectRedirector");
		}

		return uClassPointer;
	};

};

// Class Core.MetaData
// 0x0048 OR 0x00A8 (0x00A8 - 0x0060)
// 72 OR 168 (168 - 96)
class UMetaData : public UObject
{
public:
	uint8_t                                           UnknownData00[0x48];                           // 0x0060 (0x0048) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MetaData");
		}

		return uClassPointer;
	};

};

// Class Core.Linker
// 0x0168 OR 0x01C8 (0x01C8 - 0x0060)
// 360 OR 456 (456 - 96)
class ULinker : public UObject
{
public:
	uint8_t                                           UnknownData00[0x168];                          // 0x0060 (0x0168) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Linker");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerSave
// 0x00B4 OR 0x027C (0x027C - 0x01C8)
// 180 OR 636 (636 - 456)
class ULinkerSave : public ULinker
{
public:
	uint8_t                                           UnknownData00[0xB4];                           // 0x01C8 (0x00B4) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerSave");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerLoad
// 0x0604 OR 0x07CC (0x07CC - 0x01C8)
// 1540 OR 1996 (1996 - 456)
class ULinkerLoad : public ULinker
{
public:
	uint8_t                                           UnknownData00[0x604];                          // 0x01C8 (0x0604) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerLoad");
		}

		return uClassPointer;
	};

};

// Class Core.Interface
// 0x0000 OR 0x0060 (0x0060 - 0x0060)
// 0 OR 96 (96 - 96)
class UInterface : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Interface");
		}

		return uClassPointer;
	};

};

// Class Core.Field
// 0x0008 OR 0x0068 (0x0068 - 0x0060)
// 8 OR 104 (104 - 96)
class UField : public UObject
{
public:
	class UField* Next; // 0x0060 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Field");
		}

		return uClassPointer;
	};

};

// Class Core.Struct
// 0x0068 OR 0x00D0 (0x00D0 - 0x0068)
// 104 OR 208 (208 - 104)
class UStruct : public UField
{
public:
	uint8_t UnknownData00[0x10]; // 0x0068 (0x0010) DYNAMIC FIELD PADDING
	class UField* SuperField; // 0x0078 (0x0008)
	class UField* Children; // 0x0080 (0x0008)
	uint32_t PropertySize; // 0x0088 (0x0004)
	uint8_t UnknownData01[0x44]; // 0x008C (0x0044) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Struct");
		}

		return uClassPointer;
	};

};

// Class Core.ScriptStruct
// 0x0024 OR 0x00F4 (0x00F4 - 0x00D0)
// 36 OR 244 (244 - 208)
class UScriptStruct : public UStruct
{
public:
	uint8_t                                           UnknownData00[0x24];                           // 0x00D0 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ScriptStruct");
		}

		return uClassPointer;
	};

};

// Class Core.Function
// 0x0028 OR 0x00F8 (0x00F8 - 0x00D0)
// 40 OR 248 (248 - 208)
class UFunction : public UStruct
{
public:
	uint64_t FunctionFlags; // 0x00D0 (0x0008)
	struct FName FriendlyName // 0x00D8 (0x0008)
	uint8_t iNative; // 0x00E0 (0x0001)
	uint8_t NumParams; // 0x00E1 (0x0001)
	uint16_t ParamsSize; // 0x00E2 (0x0002)
	uint16_t ReturnValueOffset; // 0x00E4 (0x0002)
	uint8_t UnknownData00[0xA]; // 0x00E6 (0x000A) DYNAMIC FIELD PADDING
	void* Func; // 0x00F0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Function");
		}

		return uClassPointer;
	};

	static UFunction* FindFunction(const std::string& functionFullName);
};

// Class Core.Property
// 0x0040 OR 0x00A8 (0x00A8 - 0x0068)
// 64 OR 168 (168 - 104)
class UProperty : public UField
{
public:
	uint32_t ArrayDim; // 0x0068 (0x0004)
	uint32_t ElementSize; // 0x006C (0x0004)
	uint64_t PropertyFlags; // 0x0070 (0x0008)
	uint8_t UnknownData00[0x10]; // 0x0078 (0x0010) DYNAMIC FIELD PADDING
	uint32_t PropertySize; // 0x0088 (0x0004)
	uint32_t Offset; // 0x008C (0x0004)
	uint8_t UnknownData01[0x18]; // 0x0090 (0x0018) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Property");
		}

		return uClassPointer;
	};

};

// Class Core.StructProperty
// 0x0008 OR 0x00B0 (0x00B0 - 0x00A8)
// 8 OR 176 (176 - 168)
class UStructProperty : public UProperty
{
public:
	class UStruct* Struct; // 0x00A8 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StructProperty");
		}

		return uClassPointer;
	};

};

// Class Core.StrProperty
// 0x0000 OR 0x00A8 (0x00A8 - 0x00A8)
// 0 OR 168 (168 - 168)
class UStrProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StrProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectProperty
// 0x0008 OR 0x00B0 (0x00B0 - 0x00A8)
// 8 OR 176 (176 - 168)
class UObjectProperty : public UProperty
{
public:
	class UClass* PropertyClass; // 0x00A8 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ComponentProperty
// 0x0000 OR 0x00B0 (0x00B0 - 0x00B0)
// 0 OR 176 (176 - 176)
class UComponentProperty : public UObjectProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ComponentProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ClassProperty
// 0x0008 OR 0x00B8 (0x00B8 - 0x00B0)
// 8 OR 184 (184 - 176)
class UClassProperty : public UObjectProperty
{
public:
	uint8_t                                           UnknownData00[0x8];                            // 0x00B0 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ClassProperty");
		}

		return uClassPointer;
	};

};

// Class Core.NameProperty
// 0x0000 OR 0x00A8 (0x00A8 - 0x00A8)
// 0 OR 168 (168 - 168)
class UNameProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.NameProperty");
		}

		return uClassPointer;
	};

};

// Class Core.MapProperty
// 0x0010 OR 0x00B8 (0x00B8 - 0x00A8)
// 16 OR 184 (184 - 168)
class UMapProperty : public UProperty
{
public:
	class UProperty* Key; // 0x00A8 (0x0008)
	class UProperty* Value; // 0x00B0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MapProperty");
		}

		return uClassPointer;
	};

};

// Class Core.IntProperty
// 0x0000 OR 0x00A8 (0x00A8 - 0x00A8)
// 0 OR 168 (168 - 168)
class UIntProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.IntProperty");
		}

		return uClassPointer;
	};

};

// Class Core.InterfaceProperty
// 0x0008 OR 0x00B0 (0x00B0 - 0x00A8)
// 8 OR 176 (176 - 168)
class UInterfaceProperty : public UProperty
{
public:
	class UClass* InterfaceClass; // 0x00A8 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.InterfaceProperty");
		}

		return uClassPointer;
	};

};

// Class Core.FloatProperty
// 0x0000 OR 0x00A8 (0x00A8 - 0x00A8)
// 0 OR 168 (168 - 168)
class UFloatProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.FloatProperty");
		}

		return uClassPointer;
	};

};

// Class Core.DelegateProperty
// 0x0010 OR 0x00B8 (0x00B8 - 0x00A8)
// 16 OR 184 (184 - 168)
class UDelegateProperty : public UProperty
{
public:
	class UFuncton* DelegateFunction; // 0x00A8 (0x0008)
	struct FName DelegateName; // 0x00B0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DelegateProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ByteProperty
// 0x0008 OR 0x00B0 (0x00B0 - 0x00A8)
// 8 OR 176 (176 - 168)
class UByteProperty : public UProperty
{
public:
	class UEnum* Enum; // 0x00A8 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ByteProperty");
		}

		return uClassPointer;
	};

};

// Class Core.BoolProperty
// 0x0004 OR 0x00AC (0x00AC - 0x00A8)
// 4 OR 172 (172 - 168)
class UBoolProperty : public UProperty
{
public:
	int32_t BitMask; // 0x00A8 (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.BoolProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ArrayProperty
// 0x0008 OR 0x00B0 (0x00B0 - 0x00A8)
// 8 OR 176 (176 - 168)
class UArrayProperty : public UProperty
{
public:
	class UProperty* Inner; // 0x00A8 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ArrayProperty");
		}

		return uClassPointer;
	};

};

// Class Core.Enum
// 0x0010 OR 0x0078 (0x0078 - 0x0068)
// 16 OR 120 (120 - 104)
class UEnum : public UField
{
public:
	TArray<struct FName> Names; // 0x0068 (0x0010)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Enum");
		}

		return uClassPointer;
	};

};

// Class Core.Const
// 0x0010 OR 0x0078 (0x0078 - 0x0068)
// 16 OR 120 (120 - 104)
class UConst : public UField
{
public:
	class FString Value; // 0x0068 (0x0010)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Const");
		}

		return uClassPointer;
	};

};

// Class Core.Factory
// 0x0048 OR 0x00A8 (0x00A8 - 0x0060)
// 72 OR 168 (168 - 96)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                // 0x0060 (0x0008) [0x0000000000000000]               
	class UClass*                                      ContextClass;                                  // 0x0068 (0x0008) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              Formats;                                       // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCreateNew : 1;                                // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEditAfterNew : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEditorImport : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bText : 1;                                     // 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            AutoPriority;                                  // 0x0094 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              ValidGameNames;                                // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Factory");
		}

		return uClassPointer;
	};

};

// Class Core.TextBufferFactory
// 0x0000 OR 0x00A8 (0x00A8 - 0x00A8)
// 0 OR 168 (168 - 168)
class UTextBufferFactory : public UFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBufferFactory");
		}

		return uClassPointer;
	};

};

// Class Core.Exporter
// 0x0034 OR 0x0094 (0x0094 - 0x0060)
// 52 OR 148 (148 - 96)
class UExporter : public UObject
{
public:
	uint8_t                                           UnknownData00[0x8];                            // 0x0060 (0x0008) MISSED OFFSET
	TArray<class FString>                              FormatExtension;                               // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              FormatDescription;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                           UnknownData01[0xC];                            // 0x0088 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Exporter");
		}

		return uClassPointer;
	};

};

// Class Core.Component
// 0x0010 OR 0x0070 (0x0070 - 0x0060)
// 16 OR 112 (112 - 96)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                            // 0x0060 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FName                                       TemplateName;                                  // 0x0068 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Component");
		}

		return uClassPointer;
	};

};

// Class Core.DistributionVector
// 0x000C OR 0x007C (0x007C - 0x0070)
// 12 OR 124 (124 - 112)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bCanBeBaked : 1;                               // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsDirty : 1;                                  // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionVector");
		}

		return uClassPointer;
	};

	struct FVector GetVectorValue(float optionalF, int32_t optionalLastExtreme);
};

// Class Core.DistributionFloat
// 0x000C OR 0x007C (0x007C - 0x0070)
// 12 OR 124 (124 - 112)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bCanBeBaked : 1;                               // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsDirty : 1;                                  // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionFloat");
		}

		return uClassPointer;
	};

	float GetFloatValue(float optionalF);
};

// Class Core.Commandlet
// 0x0054 OR 0x00B4 (0x00B4 - 0x0060)
// 84 OR 180 (180 - 96)
class UCommandlet : public UObject
{
public:
	class FString                                      HelpDescription;                               // 0x0060 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      HelpUsage;                                     // 0x0070 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      HelpWebLink;                                   // 0x0080 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<class FString>                              HelpParamNames;                                // 0x0090 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<class FString>                              HelpParamDescriptions;                         // 0x00A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint32_t                                           IsServer : 1;                                  // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsClient : 1;                                  // 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsEditor : 1;                                  // 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           LogToConsole : 1;                              // 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           ShowErrorCount : 1;                            // 0x00B0 (0x0004) [0x0000000000000000] [0x00000010] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Commandlet");
		}

		return uClassPointer;
	};

	int32_t eventMain(class FString Params);
};

// Class Core.HelpCommandlet
// 0x0000 OR 0x00B4 (0x00B4 - 0x00B4)
// 0 OR 180 (180 - 180)
class UHelpCommandlet : public UCommandlet
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.HelpCommandlet");
		}

		return uClassPointer;
	};

	int32_t eventMain(class FString Params);
};

// Class Core.State
// 0x0054 OR 0x0124 (0x0124 - 0x00D0)
// 84 OR 292 (292 - 208)
class UState : public UStruct
{
public:
	uint8_t                                           UnknownData00[0x54];                           // 0x00D0 (0x0054) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.State");
		}

		return uClassPointer;
	};

};

// Class Core.Package
// 0x00D4 OR 0x0134 (0x0134 - 0x0060)
// 212 OR 308 (308 - 96)
class UPackage : public UObject
{
public:
	uint8_t                                           UnknownData00[0xD4];                           // 0x0060 (0x00D4) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Package");
		}

		return uClassPointer;
	};

};

// Class Core.Class
// 0x014C OR 0x0270 (0x0270 - 0x0124)
// 332 OR 624 (624 - 292)
class UClass : public UState
{
public:
	uint8_t                                           UnknownData00[0x14C];                          // 0x0124 (0x014C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Class");
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
