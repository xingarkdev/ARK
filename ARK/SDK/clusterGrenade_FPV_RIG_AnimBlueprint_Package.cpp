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
	 * 		Name   -> Function clusterGrenade_FPV_RIG_AnimBlueprint.clusterGrenade_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_clusterGrenade_FPV_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UclusterGrenade_FPV_RIG_AnimBlueprint_C::ExecuteUbergraph_clusterGrenade_FPV_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clusterGrenade_FPV_RIG_AnimBlueprint.clusterGrenade_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_clusterGrenade_FPV_RIG_AnimBlueprint");
		
		UclusterGrenade_FPV_RIG_AnimBlueprint_C_ExecuteUbergraph_clusterGrenade_FPV_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UclusterGrenade_FPV_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UclusterGrenade_FPV_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass clusterGrenade_FPV_RIG_AnimBlueprint.clusterGrenade_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}

}


