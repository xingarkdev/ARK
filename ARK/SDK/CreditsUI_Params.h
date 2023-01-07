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
	 * Function CreditsUI.CreditsUI_C.Construct
	 */
	struct UCreditsUI_C_Construct_Params
	{	};

	/**
	 * Function CreditsUI.CreditsUI_C.Tick
	 */
	struct UCreditsUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CreditsUI.CreditsUI_C.CloseButtonEvent
	 */
	struct UCreditsUI_C_CloseButtonEvent_Params
	{	};

	/**
	 * Function CreditsUI.CreditsUI_C.RemovedFromViewport
	 */
	struct UCreditsUI_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI
	 */
	struct UCreditsUI_C_ExecuteUbergraph_CreditsUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
