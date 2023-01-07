/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DestroyedMeshBase.DestroyedMeshBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADestroyedMeshBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase.DestroyedMeshBase_C.UserConstructionScript");
		
		ADestroyedMeshBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DestroyedMeshBase.DestroyedMeshBase_C.ExecuteUbergraph_DestroyedMeshBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestroyedMeshBase_C::ExecuteUbergraph_DestroyedMeshBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase.DestroyedMeshBase_C.ExecuteUbergraph_DestroyedMeshBase");
		
		ADestroyedMeshBase_C_ExecuteUbergraph_DestroyedMeshBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestroyedMeshBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestroyedMeshBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMeshBase.DestroyedMeshBase_C");
		return ptr;
	}

}


