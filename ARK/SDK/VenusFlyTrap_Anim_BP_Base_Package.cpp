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
	 * 		Name   -> Function VenusFlyTrap_Anim_BP_Base.VenusFlyTrap_Anim_BP_Base_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVenusFlyTrap_Anim_BP_Base_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_Anim_BP_Base.VenusFlyTrap_Anim_BP_Base_C.BlueprintUpdateAnimation");
		
		UVenusFlyTrap_Anim_BP_Base_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_Anim_BP_Base.VenusFlyTrap_Anim_BP_Base_C.ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVenusFlyTrap_Anim_BP_Base_C::ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_Anim_BP_Base.VenusFlyTrap_Anim_BP_Base_C.ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base");
		
		UVenusFlyTrap_Anim_BP_Base_C_ExecuteUbergraph_VenusFlyTrap_Anim_BP_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVenusFlyTrap_Anim_BP_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVenusFlyTrap_Anim_BP_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass VenusFlyTrap_Anim_BP_Base.VenusFlyTrap_Anim_BP_Base_C");
		return ptr;
	}

}


