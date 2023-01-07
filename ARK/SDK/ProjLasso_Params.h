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
	 * Function ProjLasso.ProjLasso_C.ReceiveTick
	 */
	struct AProjLasso_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjLasso.ProjLasso_C.ReceiveBeginPlay
	 */
	struct AProjLasso_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjLasso.ProjLasso_C.BPInitializedVelocity
	 */
	struct AProjLasso_C_BPInitializedVelocity_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      CustomSpeed;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjLasso.ProjLasso_C.UserConstructionScript
	 */
	struct AProjLasso_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjLasso.ProjLasso_C.ExecuteUbergraph_ProjLasso
	 */
	struct AProjLasso_C_ExecuteUbergraph_ProjLasso_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
