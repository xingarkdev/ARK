#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
	 */
	struct ATrueSkySequenceActor_SetTime_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
	 */
	struct ATrueSkySequenceActor_SetPointLightSource_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        lightColour;                                             // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Intensity;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             pos;                                                     // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MinRadius;                                               // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxRadius;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
	 */
	struct ATrueSkySequenceActor_SetPointLight_Params
	{
	public:
		class APointLight*                                         Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
	 */
	struct ATrueSkySequenceActor_SetKeyframeInt_Params
	{
	public:
		int32_t                                                    keyframeUid;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8UU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
	 */
	struct ATrueSkySequenceActor_SetKeyframeFloat_Params
	{
	public:
		int32_t                                                    keyframeUid;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8P4Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
	 */
	struct ATrueSkySequenceActor_SetInt_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
	 */
	struct ATrueSkySequenceActor_SetFloat_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
	 */
	struct ATrueSkySequenceActor_GetSunRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
	 */
	struct ATrueSkySequenceActor_GetSunColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
	 */
	struct ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
	 */
	struct ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params
	{
	public:
		int32_t                                                    Layer;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
	 */
	struct ATrueSkySequenceActor_GetKeyframeInt_Params
	{
	public:
		int32_t                                                    keyframeUid;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8NN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
	 */
	struct ATrueSkySequenceActor_GetKeyframeFloat_Params
	{
	public:
		int32_t                                                    keyframeUid;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KFKH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
	 */
	struct ATrueSkySequenceActor_GetInt_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
	 */
	struct ATrueSkySequenceActor_GetFloat_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.ForceUpdate
	 */
	struct ATrueSkySequenceActor_ForceUpdate_Params
	{	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
	 */
	struct ATrueSkySequenceActor_CloudPointTest_Params
	{
	public:
		int32_t                                                    queryId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             pos;                                                     // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
	 */
	struct ATrueSkySequenceActor_CloudLineTest_Params
	{
	public:
		int32_t                                                    queryId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartPos;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndPos;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
