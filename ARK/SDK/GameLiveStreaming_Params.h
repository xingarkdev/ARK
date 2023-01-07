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
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
	{	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
	{
	public:
		int32_t                                                    FrameRate;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScreenScaling;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnableWebCam;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QGZV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DesiredWebCamWidth;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DesiredWebCamHeight;                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMirrorWebCamImage;                                      // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCaptureAudioFromComputer;                               // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCaptureAudioFromMicrophone;                             // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDrawSimpleWebCamVideo;                                  // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
	 */
	struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
	{
	public:
		class FString                                              GameName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UQueryLiveStreamsCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.OnQueryLiveStreamsCompleted__DelegateSignature
	 */
	struct UQueryLiveStreamsCallbackProxy_OnQueryLiveStreamsCompleted__DelegateSignature_Params
	{
	public:
		TArray<struct FBlueprintLiveStreamInfo>                    LiveStreams;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
