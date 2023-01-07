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
	 * 		Name   -> Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapRifle_LaserBeam_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.UserConstructionScript");
		
		AWeapRifle_LaserBeam_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.ExecuteUbergraph_WeapRifle_LaserBeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapRifle_LaserBeam_C::ExecuteUbergraph_WeapRifle_LaserBeam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.ExecuteUbergraph_WeapRifle_LaserBeam");
		
		AWeapRifle_LaserBeam_C_ExecuteUbergraph_WeapRifle_LaserBeam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapRifle_LaserBeam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapRifle_LaserBeam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifle_LaserBeam.WeapRifle_LaserBeam_C");
		return ptr;
	}

}


