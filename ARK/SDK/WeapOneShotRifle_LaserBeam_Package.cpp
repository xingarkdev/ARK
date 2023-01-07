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
	 * 		Name   -> Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapOneShotRifle_LaserBeam_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.UserConstructionScript");
		
		AWeapOneShotRifle_LaserBeam_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.ExecuteUbergraph_WeapOneShotRifle_LaserBeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapOneShotRifle_LaserBeam_C::ExecuteUbergraph_WeapOneShotRifle_LaserBeam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.ExecuteUbergraph_WeapOneShotRifle_LaserBeam");
		
		AWeapOneShotRifle_LaserBeam_C_ExecuteUbergraph_WeapOneShotRifle_LaserBeam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapOneShotRifle_LaserBeam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapOneShotRifle_LaserBeam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C");
		return ptr;
	}

}


