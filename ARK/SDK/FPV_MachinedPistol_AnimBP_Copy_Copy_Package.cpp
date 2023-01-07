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
	 * 		Name   -> Function FPV_MachinedPistol_AnimBP_Copy_Copy.FPV_MachinedPistol_AnimBP_Copy_Copy_C.ExecuteUbergraph_FPV_MachinedPistol_AnimBP_Copy_Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPV_MachinedPistol_AnimBP_Copy_Copy_C::ExecuteUbergraph_FPV_MachinedPistol_AnimBP_Copy_Copy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPV_MachinedPistol_AnimBP_Copy_Copy.FPV_MachinedPistol_AnimBP_Copy_Copy_C.ExecuteUbergraph_FPV_MachinedPistol_AnimBP_Copy_Copy");
		
		UFPV_MachinedPistol_AnimBP_Copy_Copy_C_ExecuteUbergraph_FPV_MachinedPistol_AnimBP_Copy_Copy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPV_MachinedPistol_AnimBP_Copy_Copy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPV_MachinedPistol_AnimBP_Copy_Copy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_MachinedPistol_AnimBP_Copy_Copy.FPV_MachinedPistol_AnimBP_Copy_Copy_C");
		return ptr;
	}

}


