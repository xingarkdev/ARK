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
	 * 		Name   -> Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekGravityGrenadeExplosionEmitter_Repel_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.UserConstructionScript");
		
		ATekGravityGrenadeExplosionEmitter_Repel_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekGravityGrenadeExplosionEmitter_Repel_C::ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel");
		
		ATekGravityGrenadeExplosionEmitter_Repel_C_ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekGravityGrenadeExplosionEmitter_Repel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekGravityGrenadeExplosionEmitter_Repel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C");
		return ptr;
	}

}


