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
	 * Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation
	 */
	struct UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_FindAttachLocation_Params
	{
	public:
		struct FVector                                             GroundLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AttachLocation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute
	 */
	struct UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK
	 */
	struct UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
