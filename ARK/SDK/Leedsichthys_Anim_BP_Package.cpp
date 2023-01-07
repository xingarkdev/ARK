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
	 * 		Name   -> Function Leedsichthys_Anim_BP.Leedsichthys_Anim_BP_C.ExecuteUbergraph_Leedsichthys_Anim_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULeedsichthys_Anim_BP_C::ExecuteUbergraph_Leedsichthys_Anim_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Anim_BP.Leedsichthys_Anim_BP_C.ExecuteUbergraph_Leedsichthys_Anim_BP");
		
		ULeedsichthys_Anim_BP_C_ExecuteUbergraph_Leedsichthys_Anim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeedsichthys_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeedsichthys_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Leedsichthys_Anim_BP.Leedsichthys_Anim_BP_C");
		return ptr;
	}

}


