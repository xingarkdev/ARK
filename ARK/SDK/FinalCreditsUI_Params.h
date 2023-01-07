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
	 * Function FinalCreditsUI.FinalCreditsUI_C.Play Credits Music
	 */
	struct UFinalCreditsUI_C_PlayCreditsMusic_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.OnMoviePlaybackFinished
	 */
	struct UFinalCreditsUI_C_OnMoviePlaybackFinished_Params
	{
	public:
		class FString                                              MoviePath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bPlaybackWasCancelled;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K7LW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.Construct
	 */
	struct UFinalCreditsUI_C_Construct_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.Tick
	 */
	struct UFinalCreditsUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent
	 */
	struct UFinalCreditsUI_C_CloseButtonEvent_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport
	 */
	struct UFinalCreditsUI_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport
	 */
	struct UFinalCreditsUI_C_AddedToViewport_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
	 */
	struct UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
