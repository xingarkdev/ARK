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
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.CheckForInvisibleWall
	 */
	struct AProjZiplineAnchor_C_CheckForInvisibleWall_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.HitValidForAttachment
	 */
	struct AProjZiplineAnchor_C_HitValidForAttachment_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       Valid;                                                   // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U9LU[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter
	 */
	struct AProjZiplineAnchor_C_SpawnBreakEmitter_Params
	{	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.UserConstructionScript
	 */
	struct AProjZiplineAnchor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveBeginPlay
	 */
	struct AProjZiplineAnchor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveTick
	 */
	struct AProjZiplineAnchor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.OnExplode
	 */
	struct AProjZiplineAnchor_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveDestroyed
	 */
	struct AProjZiplineAnchor_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter_Multicast
	 */
	struct AProjZiplineAnchor_C_SpawnBreakEmitter_Multicast_Params
	{	};

	/**
	 * Function ProjZiplineAnchor.ProjZiplineAnchor_C.ExecuteUbergraph_ProjZiplineAnchor
	 */
	struct AProjZiplineAnchor_C_ExecuteUbergraph_ProjZiplineAnchor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
