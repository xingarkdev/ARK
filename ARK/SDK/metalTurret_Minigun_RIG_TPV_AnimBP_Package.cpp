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
	 * 		Name   -> Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UmetalTurret_Minigun_RIG_TPV_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.BlueprintUpdateAnimation");
		
		UmetalTurret_Minigun_RIG_TPV_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UmetalTurret_Minigun_RIG_TPV_AnimBP_C::ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP");
		
		UmetalTurret_Minigun_RIG_TPV_AnimBP_C_ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UmetalTurret_Minigun_RIG_TPV_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UmetalTurret_Minigun_RIG_TPV_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C");
		return ptr;
	}

}


