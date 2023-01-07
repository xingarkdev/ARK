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
	 * Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ReceiveDestroyed
	 */
	struct ADestroyedMeshBase_IgnoreSelf_FastFade_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.SetFadingStaticMesh
	 */
	struct ADestroyedMeshBase_IgnoreSelf_FastFade_C_SetFadingStaticMesh_Params
	{
	public:
		class UStaticMesh*                                         TheMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.UserConstructionScript
	 */
	struct ADestroyedMeshBase_IgnoreSelf_FastFade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ReceiveTick
	 */
	struct ADestroyedMeshBase_IgnoreSelf_FastFade_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade
	 */
	struct ADestroyedMeshBase_IgnoreSelf_FastFade_C_ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
