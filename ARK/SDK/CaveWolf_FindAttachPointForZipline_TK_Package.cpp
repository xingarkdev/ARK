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
	 * 		Name   -> Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_FindAttachPointForZipline_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ReceiveExecute");
		
		UCaveWolf_FindAttachPointForZipline_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_FindAttachPointForZipline_TK_C::ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK");
		
		UCaveWolf_FindAttachPointForZipline_TK_C_ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaveWolf_FindAttachPointForZipline_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaveWolf_FindAttachPointForZipline_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C");
		return ptr;
	}

}


