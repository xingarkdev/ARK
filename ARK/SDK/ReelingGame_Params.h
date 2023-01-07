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
	 * Function ReelingGame.ReelingGame_C.HandleKeyPress
	 */
	struct UReelingGame_C_HandleKeyPress_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
		bool                                                       retReply;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReelingGame.ReelingGame_C.OnControllerButtonReleased
	 */
	struct UReelingGame_C_OnControllerButtonReleased_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CNR7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ReelingGame.ReelingGame_C.OnMouseButtonDown
	 */
	struct UReelingGame_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VCIE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ReelingGame.ReelingGame_C.CycleToNextKey
	 */
	struct UReelingGame_C_CycleToNextKey_Params
	{	};

	/**
	 * Function ReelingGame.ReelingGame_C.UpdateRemainingTime
	 */
	struct UReelingGame_C_UpdateRemainingTime_Params
	{	};

	/**
	 * Function ReelingGame.ReelingGame_C.OnKeyUp
	 */
	struct UReelingGame_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YU9H[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyboardEvent                                      InKeyboardEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ReelingGame.ReelingGame_C.CycleKeys
	 */
	struct UReelingGame_C_CycleKeys_Params
	{
	public:
		bool                                                       FinishedGame;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_53SR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ReelingGame.ReelingGame_C.EndGame
	 */
	struct UReelingGame_C_EndGame_Params
	{
	public:
		bool                                                       succeeded;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReelingGame.ReelingGame_C.Init
	 */
	struct UReelingGame_C_Init_Params
	{
	public:
		float                                                      KeyDisplayDuration;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TBZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FKey>                                        GameKeys;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class AWeapFishingRod_C*                                   rod;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReelingGame.ReelingGame_C.Tick
	 */
	struct UReelingGame_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReelingGame.ReelingGame_C.ExecuteUbergraph_ReelingGame
	 */
	struct UReelingGame_C_ExecuteUbergraph_ReelingGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
