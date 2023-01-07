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
	 * 		Name   -> Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADestroyedMeshBase_IgnoreSelf_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.UserConstructionScript");
		
		ADestroyedMeshBase_IgnoreSelf_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestroyedMeshBase_IgnoreSelf_C::ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf");
		
		ADestroyedMeshBase_IgnoreSelf_C_ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestroyedMeshBase_IgnoreSelf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestroyedMeshBase_IgnoreSelf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C");
		return ptr;
	}

}


