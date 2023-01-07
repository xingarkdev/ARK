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
	 * 		Name   -> Function Base_FenceSupport.Base_FenceSupport_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_FenceSupport_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.BPPlacedStructure");
		
		ABase_FenceSupport_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_FenceSupport.Base_FenceSupport_C.BPTreatAsFoundationForSnappedStructure
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            OtherStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlacementData                              WithPlacementData                                          (Parm, OutParm, ReferenceParm)
	 */
	bool ABase_FenceSupport_C::BPTreatAsFoundationForSnappedStructure(class APrimalStructure* OtherStructure, struct FPlacementData* WithPlacementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.BPTreatAsFoundationForSnappedStructure");
		
		ABase_FenceSupport_C_BPTreatAsFoundationForSnappedStructure_Params params {};
		params.OtherStructure = OtherStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithPlacementData != nullptr)
			*WithPlacementData = params.WithPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_FenceSupport.Base_FenceSupport_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_FenceSupport_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.UserConstructionScript");
		
		ABase_FenceSupport_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_FenceSupport.Base_FenceSupport_C.ExecuteUbergraph_Base_FenceSupport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_FenceSupport_C::ExecuteUbergraph_Base_FenceSupport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.ExecuteUbergraph_Base_FenceSupport");
		
		ABase_FenceSupport_C_ExecuteUbergraph_Base_FenceSupport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_FenceSupport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_FenceSupport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_FenceSupport.Base_FenceSupport_C");
		return ptr;
	}

}


